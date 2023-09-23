// Fill out your copyright notice in the Description page of Project Settings.


#include "VRPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "MotionControllerComponent.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputMappingContext.h"
#include "Components/ArrowComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetStringLibrary.h"
#include "I_Grab.h"
#include "GrabGravityActor.h"
#include "InventoryComponent.h"
#include "GaugeBase.h"
#include "Materials/Material.h"

// Sets default values
AVRPlayer::AVRPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	/*Cam Component*/
	compCam = CreateDefaultSubobject<UCameraComponent>(TEXT("compCam"));
	compCam->SetupAttachment(RootComponent);
	
	/*Body Skeletal Component*/
	compSkeletal = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("compSkeletal"));
	compSkeletal->SetupAttachment(compCam);
	compSkeletal->SetCollisionProfileName(TEXT("PlayerBody"));
	ConstructorHelpers::FObjectFinder<USkeletalMesh> tempSkel (TEXT("/Script/Engine.SkeletalMesh'/Game/4_SK/VRPlayer/Asset/Mesh/SK_Player.SK_Player'"));
	if (tempSkel.Succeeded())
	{
		compSkeletal->SetSkeletalMesh(tempSkel.Object);
	}
	compSkeletal->SetRelativeLocation(FVector(0,0,-100));
	compSkeletal->SetRelativeRotation(FRotator(0,-90,0));
	
	/*Motion Controller*/
	//LEFT
	motionControllerLeft = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("motionControllerLeft"));
	motionControllerLeft->SetupAttachment(RootComponent);
	motionControllerLeft->SetCollisionProfileName(TEXT("PlayerHand"));
	motionControllerLeft->SetTrackingMotionSource(FName("Left"));
	
	motionControllerLeft->SetRelativeLocation(FVector(30,20,0));
	//RIGHT
	motionControllerRight = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("motionControllerRight"));
	motionControllerRight->SetupAttachment(RootComponent);
	motionControllerRight->SetCollisionProfileName(TEXT("PlayerHand"));
	motionControllerRight->SetTrackingMotionSource(FName(
	"Right"));
	motionControllerRight->SetRelativeLocation(FVector(30,-20,0));
	
	/*Arrow Component*/
	//LEFT
	arrowLeft = CreateDefaultSubobject<UArrowComponent>(TEXT(
	"arrowLeft"));
	arrowLeft->SetupAttachment(motionControllerLeft);
	arrowLeft->SetRelativeRotation(FRotator(-90,0,0));
	arrowLeft->SetRelativeScale3D(FVector(0.25));
	//RIGHT
	arrowRight = CreateDefaultSubobject<UArrowComponent>(TEXT("arrowRight"));
	arrowRight->SetupAttachment(motionControllerRight);
	arrowRight->SetRelativeRotation(FRotator(-90, 0, 0));
	arrowRight->SetRelativeScale3D(FVector(0.25));
	
	/*Sphere(Oxygen UI Location)*/
	Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	Sphere->SetupAttachment(compCam);
	Sphere->SetRelativeLocation(FVector(10,0,-3));
	Sphere->SetSphereRadius(5.0f);

	/* Inventory */
	InventoryComponent1 = CreateDefaultSubobject<UInventoryComponent>(TEXT("InventoryComponent1"));
	InventoryComponent1->SetupAttachment(motionControllerLeft);
	InventoryComponent1->SetCollisionProfileName(TEXT("Inventory"));
	InventoryComponent1->SetRelativeLocation(FVector(-60,0,0));
	InventoryComponent1->SetRelativeScale3D(FVector(0.05));

	InventoryComponent2 = CreateDefaultSubobject<UInventoryComponent>(TEXT("InventoryComponent2"));
	InventoryComponent2->SetupAttachment(motionControllerLeft);
	InventoryComponent2->SetCollisionProfileName(TEXT("Inventory"));
	InventoryComponent2->SetRelativeLocation(FVector(-40, 0, 0));
	InventoryComponent2->SetRelativeScale3D(FVector(0.05));

	OxygenGauge = CreateDefaultSubobject<UGaugeBase>(TEXT("Oxygen"));
	OxygenGauge->SetCollisionProfileName(TEXT("NoCollision"));

	//CharacterMovement value save
	cm = this->GetCharacterMovement();

	/*Enhanced Input*/
	//Context
	static  ConstructorHelpers::FObjectFinder<UInputMappingContext>tempContext(TEXT("/Game/7_MISC/Input/IMC_Default.IMC_Default"));
	if (tempContext.Succeeded())
	{
		DefaultContext= tempContext.Object;
	}
	//Actions
	static ConstructorHelpers::FObjectFinder<UInputAction>temp_Move(TEXT("/Game/7_MISC/Input/IA_Move.IA_Move"));
	if (temp_Move.Succeeded())
	{
		IA_Move = temp_Move.Object;
	}

	static ConstructorHelpers::FObjectFinder<UInputAction>temp_GrabLeft(TEXT("/Game/7_MISC/Input/IA_Grab_Left"));
	if (temp_GrabLeft.Succeeded())
	{
		IA_Grab_Left = temp_GrabLeft.Object;
	}

	static ConstructorHelpers::FObjectFinder<UInputAction>temp_GrabRight(TEXT("/Game/7_MISC/Input/IA_Grab_Right"));
	if (temp_GrabRight.Succeeded())
	{
		IA_Grab_Right = temp_GrabRight.Object;
	}

	static ConstructorHelpers::FObjectFinder<UInputAction>temp_FlyValue(TEXT("/Game/7_MISC/Input/IA_FlyValue"));
	if (temp_FlyValue.Succeeded())
	{
		IA_FlyValue = temp_FlyValue.Object;
	}

	GrabGravityActor = nullptr;

}

// Called when the game starts or when spawned
void AVRPlayer::BeginPlay()
{
	Super::BeginPlay();

	UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Floor);
	pc = GetController<APlayerController>();
	cm->SetMovementMode(MOVE_Walking);

	if (pc != nullptr)
	{
		UEnhancedInputLocalPlayerSubsystem* subSys = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(pc->GetLocalPlayer());

		if (subSys != nullptr)
		{
			subSys->ClearAllMappings();
			subSys->AddMappingContext(DefaultContext,0);
		}
	}
	
	CurrentLocation = this->GetActorLocation();

	CurrentOxygen = MaximumOxygen;

	OxygenGauge->AttachToComponent(compSkeletal, FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName(TEXT("Gauge")));

}

// Called every frame
void AVRPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CheckOxygenLeak();
	ZeroGMovement();
}

// Called to bind functionality to input
void AVRPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
	//Move
		EnhancedInputComponent->BindAction(IA_Move,ETriggerEvent::Triggered, this, &AVRPlayer::Move);
	
	//FlyValue
		EnhancedInputComponent->BindAction(IA_FlyValue, ETriggerEvent::Triggered, this, &AVRPlayer::FlyValue);
	
	//Grab_Left
		EnhancedInputComponent->BindAction(IA_Grab_Left,ETriggerEvent::Started,this,&AVRPlayer::Grab_Left_Started);
		EnhancedInputComponent->BindAction(IA_Grab_Left,ETriggerEvent::Completed,this,&AVRPlayer::Grab_Left_Closed);

	//Grab Right
		EnhancedInputComponent->BindAction(IA_Grab_Right, ETriggerEvent::Started, this, &AVRPlayer::Grab_Right_Started);
		EnhancedInputComponent->BindAction(IA_Grab_Right, ETriggerEvent::Completed, this, &AVRPlayer::Grab_Right_Closed);
	}
}

void AVRPlayer::ZeroGMovement()
{
	CurrentLocation = FMath::VInterpTo(CurrentLocation, GetActorLocation(), 0.f, 1.f);
	if (GrabGravityActor != nullptr)
	{
		FVector	LocationWhenGrabbed = GetActorLocation() + (GrabGravityActor->GrabLocation - GrabGravityActor->GrabbingController->GetComponentLocation());
		SetActorLocation(LocationWhenGrabbed);
		bValidGrabGravityActor = false;
	}
	else
	{
		if (bValidGrabGravityActor == false)
		{
			GetCharacterMovement()->Velocity = (GetActorLocation() - CurrentLocation) * 2.f;
			bValidGrabGravityActor = true;
		}
	}


}

void AVRPlayer::Move(const FInputActionValue& value)
{
	FVector2D Movement = value.Get<FVector2D>();
	
	AddMovementInput(compCam->GetForwardVector(), Movement.Y * MovingParam);
	AddMovementInput(compCam->GetRightVector(), Movement.X*MovingParam);

	//GEngine->AddOnScreenDebugMessage(-1, 0.001f, FColor::Blue, TEXT("Log"));
}


void AVRPlayer::FlyValue(const FInputActionValue& value)
{
	float Movement = value.Get<float>();
	FlyVal = Movement;
	if (cm->IsFlying())
	{
		if (FlyVal > 0.0f)
		{
			AddMovementInput(RootComponent->GetUpVector(),FMath::Lerp(FlyVal,0.0f,0.3f));

		}
		else
		{
			AddMovementInput(RootComponent->GetUpVector(),FMath::Lerp(0.0f,FlyVal,0.3f));
		}
	}
}

void AVRPlayer::Grab_Left_Started(const FInputActionValue& value)
{
	UWorld* world = GetWorld();
	UE_LOG(LogTemp, Warning, TEXT("Try Grab!"));
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
	ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_GameTraceChannel4));
	TArray<AActor *> OverlappingActors;

	if(world!=nullptr)
	{ 
	UKismetSystemLibrary::SphereOverlapActors(world, motionControllerLeft->GetComponentLocation(),SphereRadius,ObjectTypes, NULL, TArray<AActor*>(), OverlappingActors); //�޼� �տ� ���� Sphere�ݸ����� WorldDynamic Static�� ���𰡰� ��´ٸ� ���� ��� �͵��� OverLapping �迭�� ����.
	}
	
	for (int i = 0; i < OverlappingActors.Num(); i++) //�迭 �˻�
	{
 		AGrabGravityActor* GrabActor = Cast<AGrabGravityActor>(OverlappingActors[i]);
		if (GrabActor != nullptr)
		{
			GrabGravityActor = GrabActor;
			GrabGravityActor->GrabbingController = motionControllerLeft;
			GrabGravityActor->GrabLocation = motionControllerLeft->GetComponentLocation();
		}
		if (OverlappingActors[i]->GetClass()->ImplementsInterface(UI_Grab::StaticClass())) //���� �� �� �������̽��� �����Ų ���Ͷ��
		{
			Cast<II_Grab>(OverlappingActors[i])->Grab(motionControllerLeft); //���� �� �ִ�.
			GrabLeftActor  = OverlappingActors[i]; //���� ���� ����
			break; //�� �տ� �Ѱ��� ���� �Ŵϱ� ã������ �ش� �ݺ����� �����Ų��.
		}
		
	}
	
}

void AVRPlayer::Grab_Left_Closed(const FInputActionValue& value)
{
	if (GrabLeftActor != nullptr) //���� ������ �ִٸ�
	{
		Cast<II_Grab>(GrabLeftActor)->Release(motionControllerLeft);
		//���� �� �ִ�.
		GrabLeftActor = NULL; //�������� ���� ���� ������ ����. ���� ���� �ʱ�ȭ
	}
	if (GrabGravityActor != nullptr)
	{
		GrabGravityActor->GrabbingController = nullptr;
		GrabGravityActor = nullptr;
	}
}

void AVRPlayer::Grab_Right_Started(const FInputActionValue& value)
{
	UWorld* world = GetWorld();
	UE_LOG(LogTemp, Warning, TEXT("Try Grab!"));
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
	ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_GameTraceChannel4));
	TArray<AActor*> OverlappingActors;

	if (world != nullptr)
	{
		UKismetSystemLibrary::SphereOverlapActors(world, motionControllerRight->GetComponentLocation(), SphereRadius, ObjectTypes, NULL, TArray<AActor*>(), OverlappingActors); //�޼� �տ� ���� Sphere�ݸ����� WorldDynamic Static�� ���𰡰� ��´ٸ� ���� ��� �͵��� OverLapping �迭�� ����.
	}

	for (int i = 0; i < OverlappingActors.Num(); i++) //�迭 �˻�
	{
		FString ActorName = OverlappingActors[i]->GetName();
		GEngine->AddOnScreenDebugMessage(-1, 4.f, FColor::Red, ActorName);
		AGrabGravityActor* GrabActor = Cast<AGrabGravityActor>(OverlappingActors[i]);
		if (GrabActor != nullptr)
		{
			GEngine->AddOnScreenDebugMessage(-1, 4.f, FColor::Yellow, TEXT("Overlap Activate"));
			GrabGravityActor = GrabActor;
			GrabGravityActor->GrabbingController = motionControllerRight;
			GrabGravityActor->GrabLocation = motionControllerRight->GetComponentLocation();
		}
		if (OverlappingActors[i]->GetClass()->ImplementsInterface(UI_Grab::StaticClass())) //���� �� �� �������̽��� �����Ų ���Ͷ��
		{
			Cast<II_Grab>(OverlappingActors[i])->Grab(motionControllerRight); //���� �� �ִ�.
			GrabRightActor = OverlappingActors[i]; //���� ���� ����
			break; //�� �տ� �Ѱ��� ���� �Ŵϱ� ã������ �ش� �ݺ����� �����Ų��.
		}

	}
}

void AVRPlayer::Grab_Right_Closed(const FInputActionValue& value)
{
	if (GrabRightActor != nullptr) //���� ������ �ִٸ�
	{
		Cast<II_Grab>(GrabRightActor)->Release(motionControllerRight);
		//���� �� �ִ�.
		GrabRightActor = NULL; //�������� ���� ���� ������ ����. ���� ���� �ʱ�ȭ
	}
	if (GrabGravityActor != nullptr)
	{
		GrabGravityActor->GrabbingController = nullptr;
		GrabGravityActor = nullptr;
	}
}

void AVRPlayer::CheckOxygenLeak()
{
	FString CurrentOxygenString = FString::SanitizeFloat(CurrentOxygen);
	GEngine->AddOnScreenDebugMessage(-1, 0.001f, FColor::Yellow, CurrentOxygenString);
	if (CurrentOxygen <= OxygenLeak)
	{
		UE_LOG(LogTemp, Display, TEXT("Oxygen Leak"));
		// Change Color OxygenUnstableColor
		OxygenGauge->SetVectorParameterValueOnMaterials(TEXT("BaseColor"), OxygenLeakColor);
		OxygenLeakSound = true;
		// Play Sound 2D : Oxygen Leak
		
		CheckOxygenCharge();
	}
	else
	{
		OxygenLeakSound = false;
		// Change Color OxygenStableColor
		OxygenGauge->SetVectorParameterValueOnMaterials(TEXT("BaseColor"), OxygenEnoughColor);

		CheckOxygenCharge();
	}
}

void AVRPlayer::CheckOxygenCharge()
{
	if (OxygenChargeActivate)
	{
		IncreaseOxygen();
	}
	else
	{
		DecreaseOxygen();
	}
}

void AVRPlayer::IncreaseOxygen()
{
	CalculateOxygen(true);
}

void AVRPlayer::DecreaseOxygen()
{
	CalculateOxygen(false);
}

void AVRPlayer::CalculateOxygen(bool CurrentCondition)
{
	CurrentOxygen = FMath::Clamp(CurrentOxygen, 0, MaximumOxygen);
	if (CurrentCondition)	// ��� ����
	{
		CurrentOxygen = CurrentOxygen + 0.1f;

	}
	else					// ��� �Һ�
	{
		CurrentOxygen = CurrentOxygen - 0.04f;
	}
	OxygenValue = (CurrentOxygen / MaximumOxygen) / 10;

	// Gauge Scale 3D
	OxygenGauge->SetRelativeScale3D(FVector(0.05, 0.05, OxygenValue));
}