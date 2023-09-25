#include "SpaceShip.h"
#include "VRPlayer.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/AudioComponent.h"

// Sets default values
ASpaceShip::ASpaceShip()
{
	BaseComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Base"));
	SetRootComponent(BaseComponent);
	BaseComponent->SetRelativeLocation(FVector(0, 0, 0));
	

	/*---------------  Static Mesh COMP -------------------*/
	//Exterior component
	compExterior = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Exterior"));
	compExterior->SetupAttachment(BaseComponent);
	ConstructorHelpers::FObjectFinder<UStaticMesh> tempExterior(TEXT("/Script/Engine.StaticMesh'/Game/3_SM/PlayerShip_Exterior/NoneDoor_SpaceShip.NoneDoor_SpaceShip'"));
	if (tempExterior.Succeeded())
	{
		compExterior->SetStaticMesh(tempExterior.Object);
	}
	
	//Exterior Door Component
	compExteriorDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ExteriorDoor"));
	compExteriorDoor->SetupAttachment(compExterior);
	ConstructorHelpers::FObjectFinder<UStaticMesh> tempExteriorDoor(TEXT("/Script/Engine.StaticMesh'/Game/3_SM/PlayerShip_EntraceDoor/SM_EngineerShip_Door/SM_EngineerShip_Door.SM_EngineerShip_Door'"));
	if (tempExteriorDoor.Succeeded())
	{
		compExteriorDoor->SetStaticMesh(tempExteriorDoor.Object);
		compExteriorDoor->SetRelativeLocation(FVector(-1250,-2,0));
	}

	//Interior Component
	compInterior = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Interior"));
	compInterior->SetupAttachment(BaseComponent);
	compInterior->SetVisibility(true);
	ConstructorHelpers::FObjectFinder<UStaticMesh> tempInterior(TEXT("/Script/Engine.StaticMesh'/Game/3_SM/PlayerShip_Interior/SM_Interior_NoneControllRoomDoor1.SM_Interior_NoneControllRoomDoor1'"));
	if (tempInterior.Succeeded())
	{
		compInterior->SetStaticMesh(tempInterior.Object);
		compInterior->SetRelativeLocation(FVector(-202.0f, -2.0f, 25.0f));
	}

	//InteriorDoor Component
	compInteriorDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("InteriorDoor"));
	compInteriorDoor->SetupAttachment(compInterior);
	ConstructorHelpers::FObjectFinder<UStaticMesh> tempInteriorDoor(TEXT("/Script/Engine.StaticMesh'/Game/3_SM/PlayerShip_EntraceDoor/SM_EngineerShip_Door/SM_EngineerShip_Door.SM_EngineerShip_Door'"));
	if (tempInteriorDoor.Succeeded())
	{
		compInteriorDoor->SetStaticMesh(tempInteriorDoor.Object);
		compInteriorDoor->SetRelativeLocation(FVector(-582.0f, 2.0f, -27.0f));
	}

	//Lamps Comp
	Lamps = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Lamps"));
	Lamps->SetupAttachment(BaseComponent);
	ConstructorHelpers::FObjectFinder<UStaticMesh> tempLamps(TEXT("/Script/Engine.StaticMesh'/Game/3_SM/PlayerShip_InteriorLamps/SM_DCruiserInterior_Lamps.SM_DCruiserInterior_Lamps'"));
	if (tempLamps.Succeeded())
	{
		Lamps->SetStaticMesh(tempLamps.Object);
		Lamps->SetRelativeLocation(FVector( - 1573.0, -14.0, -654.0));
	}

	//Dining Lamp comp
	diningRoomLamp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("diningRoomLamp"));
	diningRoomLamp->SetupAttachment(GetRootComponent());
	/*ConstructorHelpers::FObjectFinder<UStaticMesh> tempdiningRoomLamp(TEXT(""));*/
// 	if (tempLamps.Succeeded())
// 	{
// 		Lamps->SetStaticMesh(tempLamps.Object);
// 		
// 	}
	diningRoomLamp->SetRelativeLocation(FVector(79.0, -332.0, 201.99));
	diningRoomLamp->SetRelativeRotation(FRotator(180,0,0));

	//Controller Door Component
	ControllerDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ControllerDoor"));
	ControllerDoor->SetupAttachment(compInterior);
	ConstructorHelpers::FObjectFinder<UStaticMesh> tempControllerDoor(TEXT("/Script/Engine.StaticMesh'/Game/3_SM/CabinDoor/Mesh/SM_Cabin_Door.SM_Cabin_Door'"));
	if (tempControllerDoor.Succeeded())
	{
		ControllerDoor->SetStaticMesh(tempControllerDoor.Object);
	}
	ControllerDoor->SetRelativeLocation(FVector(472.0f,112.0f, -148.0f));
	ControllerDoor->SetRelativeScale3D(FVector(1.4f,1.0f,1.0f));

	//W.C Door Component
	BathRoomDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BathRoomDoor"));
	BathRoomDoor->SetupAttachment(compInterior);
	ConstructorHelpers::FObjectFinder<UStaticMesh> tempBathRoomDoor(TEXT("/Script/Engine.StaticMesh'/Game/3_SM/PalyerShip_WCDoor/SM_DCruiser_WCDoor.SM_DCruiser_WCDoor'"));
	if (tempBathRoomDoor.Succeeded())
	{
		BathRoomDoor->SetStaticMesh(tempBathRoomDoor.Object);
	}
	BathRoomDoor->SetRelativeLocation(FVector(-116.7f, -209.0f, 14.0f));
	BathRoomDoor->SetRelativeScale3D(FVector(0.1f,1.0f,1.0f));

	/*---------------  Collision COMP -------------------*/

	//OutDoorCollision
	compOutDoorCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("OutDoorCollision"));
	compOutDoorCollision->SetupAttachment(GetRootComponent());
	compOutDoorCollision->SetCollisionProfileName(TEXT("AreaCollision"));
	compOutDoorCollision->SetRelativeLocation(FVector(-1317.0f,-5,0));
	compOutDoorCollision->SetRelativeScale3D(FVector(5.5,8.5,8.8));

	//InDoorCollision
	compIndoorCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("InDoorCollision"));
	compIndoorCollision->SetupAttachment(GetRootComponent());
	compIndoorCollision->SetCollisionProfileName(TEXT("AreaCollision"));
	compIndoorCollision->SetRelativeLocation(FVector(-773, 0, 0));
	compIndoorCollision->SetRelativeScale3D(FVector(3.6, 5, 5));

	//FlyCollision
	compFlyCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("FlyCollision"));
	compFlyCollision->SetupAttachment(GetRootComponent());
	compFlyCollision->SetCollisionProfileName(TEXT("AreaCollision"));
	compFlyCollision->SetRelativeLocation(FVector(-1298, 0, 0));
	compFlyCollision->SetRelativeScale3D(FVector(1, 4.4, 4.5));

	//WalkingCollision
	compWalkCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("WalkCollision"));
	compWalkCollision->SetupAttachment(GetRootComponent());
	compWalkCollision->SetCollisionProfileName(TEXT("AreaCollision"));
	compWalkCollision->SetRelativeLocation(FVector(-697, 0, 0));
	compWalkCollision->SetRelativeScale3D(FVector(1, 4.4, 4.5));

	HiddenInterior = CreateDefaultSubobject<UBoxComponent>(TEXT("HiddenCollision"));
	HiddenInterior->SetupAttachment(GetRootComponent());
	HiddenInterior->SetCollisionProfileName(TEXT("AreaCollision"));
	HiddenInterior->SetRelativeLocation(FVector(-700, 0, 0));
	HiddenInterior->SetBoxExtent(FVector(2000, 2000, 1200));
}

// Called when the game starts or when spawned
void ASpaceShip::BeginPlay()
{
	Super::BeginPlay();

	ExteriorDoorInitLocation = compExteriorDoor->GetComponentLocation();
	InteriorDoorInitLocation = compInteriorDoor->GetComponentLocation();

	compFlyCollision->OnComponentBeginOverlap.AddDynamic(this, &ASpaceShip::OnBeginOverlap_Walk2Fly);
	compWalkCollision->OnComponentBeginOverlap.AddDynamic(this, &ASpaceShip::OnBeginOverlap_Fly2Walk);

	HiddenInterior->OnComponentBeginOverlap.AddDynamic(this, &ASpaceShip::OnBeginOverlap_HiddenInterior);
	HiddenInterior->OnComponentEndOverlap.AddDynamic(this, &ASpaceShip::OnEndOverlap_HiddenInterior);

	//SpaceAmbient Sound Source Import
	SpaceAmbient = LoadObject<USoundBase>(nullptr,TEXT("/Game/8_Sound/Ambient/S_SpaceAmbient_Modified.S_SpaceAmbient_Modified"));

	//BasicAmbient Sound Source Import
	BasicAmbient = LoadObject<USoundBase>(nullptr, TEXT("/Game/8_Sound/Ambient/S_BasicAmbient_Modified.S_BasicAmbient_Modified"));

	//Breath EnterSpace Sound Source Import
	BreathEnterSpace = LoadObject<USoundBase>(nullptr, TEXT("/Game/8_Sound/Breath/Breath_InSpace_03.Breath_InSpace_03"));
}

void ASpaceShip::OnBeginOverlap_Walk2Fly(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("Overlap"));
	AVRPlayer* VRPlayer = Cast<AVRPlayer>(OtherActor);
	if (VRPlayer != nullptr)
	{
		VRPlayer->OxygenChargeActivate = false;
		UCharacterMovementComponent* MovementComponent = VRPlayer->GetCharacterMovement();
		if (MovementComponent->IsWalking())
		{
			MovementComponent->SetMovementMode(EMovementMode::MOVE_Flying);
			
			//If move SpaceShip to Space, Play SpaceAmbient 
			if (AmbientSound != nullptr) AmbientSound->Stop();
			AmbientSound = UGameplayStatics::SpawnSound2D(GetWorld(), SpaceAmbient);

			BreathEnterSpaceSound = UGameplayStatics::SpawnSound2D(GetWorld(), BreathEnterSpace);
		}
	}

	

}

void ASpaceShip::OnBeginOverlap_Fly2Walk(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("Overlap"));
	AVRPlayer* VRPlayer = Cast<AVRPlayer>(OtherActor);
	
	if (VRPlayer != nullptr)
	{
		VRPlayer->OxygenChargeActivate = true;
		UCharacterMovementComponent* MovementComponent = VRPlayer->GetCharacterMovement();
		if (MovementComponent->IsFlying())
		{
			MovementComponent->SetMovementMode(EMovementMode::MOVE_Walking);
			//If move Space to SpaceShip, Play BasicAmbient 
			if (AmbientSound != nullptr) AmbientSound->Stop();
			AmbientSound = UGameplayStatics::SpawnSound2D(GetWorld(),
				BasicAmbient);
			BreathEnterSpaceSound = UGameplayStatics::SpawnSound2D(GetWorld(), BreathEnterSpace);
		}
	}
	
}

void ASpaceShip::OnBeginOverlap_HiddenInterior(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AVRPlayer* VRPlayer = Cast<AVRPlayer>(OtherActor);
	if (VRPlayer != nullptr)
	{
		compInterior->SetVisibility(true);
		UE_LOG(LogTemp, Log, TEXT("Interior Show"));
	}
}

void ASpaceShip::OnEndOverlap_HiddenInterior(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	AVRPlayer* VRPlayer = Cast<AVRPlayer>(OtherActor);
	if (VRPlayer != nullptr)
	{
		compInterior->SetVisibility(false);
		
		UE_LOG(LogTemp, Log, TEXT("Interior Hidden"));
	}
}

