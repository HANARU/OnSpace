#include "Turret.h"
#include "VRPlayer.h"
#include "BlasterBullet.h"
#include "Components/SphereComponent.h"
#include "Kismet/KismetMathLibrary.h"

ATurret::ATurret()
{
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Base"));
	SetRootComponent(SceneRoot);

	TurretBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	TurretBody->SetupAttachment(SceneRoot);
	TurretBody->SetRelativeScale3D(FVector(0.3));

	TurretHead = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Head"));
	TurretHead->SetupAttachment(SceneRoot);
	TurretHead->SetRelativeScale3D(FVector(0.3));
	TurretHead->SetRelativeRotation(FRotator(90, 0, 0));

	LaserStartPoint = CreateDefaultSubobject<USceneComponent>(TEXT("LaserStart"));
	LaserStartPoint->SetupAttachment(TurretHead);
	LaserStartPoint->SetRelativeLocation(FVector(600, 0, 0));

	DetectCollision = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	DetectCollision->SetupAttachment(SceneRoot);
	DetectCollision->SetCollisionProfileName(TEXT("AreaCollsiion"));
	DetectCollision->SetSphereRadius(2048);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> Mesh_Body(TEXT("/Game/3_SM/Turret/SmallTurretBottom/Mesh/SM_BaseConstructor_Turret_1"));
	if (Mesh_Body.Succeeded())
	{
		TurretBody->SetStaticMesh(Mesh_Body.Object);
	}

	static ConstructorHelpers::FObjectFinder<UStaticMesh> Mesh_Head(TEXT("/Game/3_SM/Turret/SmallTurretHead/SM_BaseConstructor_Turret_Sample"));
	if (Mesh_Head.Succeeded())
	{
		TurretHead->SetStaticMesh(Mesh_Head.Object);
	}

}

void ATurret::BeginPlay()
{
	Super::BeginPlay();

	DetectCollision->OnComponentBeginOverlap.AddDynamic(this, &ATurret::OnBeginOverlap_Detect);
	DetectCollision->OnComponentEndOverlap.AddDynamic(this, &ATurret::OnEndOverlap_Detect);
	TurretHead->OnComponentBeginOverlap.AddDynamic(this, &ATurret::OnBeginOverlap_Damage);
}

void ATurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Activation();

}

void ATurret::OnBeginOverlap_Detect(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AVRPlayer* DetectedPlayer = Cast<AVRPlayer>(OtherActor);

	if (DetectedPlayer != nullptr)
	{
		bDetectedPlayer = true;
		VRPlayer = DetectedPlayer;
	}
}

void ATurret::OnEndOverlap_Detect(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	bDetectedPlayer = false;
	VRPlayer = nullptr;
}

void ATurret::Activation()
{
	FRotator CurrentRotation = GetActorRotation();
	if (bDetectedPlayer)
	{
		FRotator LookAtPlayer = UKismetMathLibrary::FindLookAtRotation(TurretHead->GetComponentLocation(), VRPlayer->GetActorLocation());
		float LookatPlayerX = /*CurrentRotation.Roll + */LookAtPlayer.Roll;//FMath::Clamp(LookAtPlayer.Roll, -75, 75);
		float LookatPlayerY = /*CurrentRotation.Pitch + */FMath::Clamp(LookAtPlayer.Pitch, -75, 75);
		float LookatPlayerZ = /*CurrentRotation.Yaw + */LookAtPlayer.Yaw;// FMath::Clamp(LookAtPlayer.Yaw, -75, 75);

		FRotator FinalPosition = FRotator(LookatPlayerY, LookatPlayerZ, LookatPlayerX);
		TurretHead->SetWorldRotation(FinalPosition);

		Shoot2Player();
	}
}

void ATurret::OnBeginOverlap_Damage(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ABlasterBullet* Bullet = Cast<ABlasterBullet>(OtherActor);

	if (Bullet != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1,2.f,FColor::Red,TEXT("Im sick.. cause bullet attacked me."));
		if (TurretHP <= 0)
		{
			DestroyAction_Implementation();
		}
		else
		{
			TurretHP--;
		}
	}
}

void ATurret::DestroyAction_Implementation()
{
}

void ATurret::Shoot2Player_Implementation()
{
}

