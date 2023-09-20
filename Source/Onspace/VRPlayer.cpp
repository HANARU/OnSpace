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
#include "I_Grab.h"

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
	ConstructorHelpers::FObjectFinder<USkeletalMesh> tempSkel (TEXT("/Script/Engine.SkeletalMesh'/Game/4_SK/VRPlayer/Asset/Model/SK_Player.SK_Player'"));
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
	motionControllerLeft->SetTrackingMotionSource(FName("Left"));
	
	motionControllerLeft->SetRelativeLocation(FVector(30,20,0));
	//RIGHT
	motionControllerRight = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("motionControllerRight"));
	motionControllerRight->SetupAttachment(RootComponent);
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

	static ConstructorHelpers::FObjectFinder<UInputAction>temp_GrabLeft(TEXT("/Game/7_MISC/Input/IA_Grab_Left.IA_Grab_Left"));
	if (temp_GrabLeft.Succeeded())
	{
		IA_Grab_Left = temp_GrabLeft.Object;
	}

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
	
	

}

// Called every frame
void AVRPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

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
		//EnhancedInputComponent->BindAction(moveAction,)
	
	//Grab_Left
		EnhancedInputComponent->BindAction(IA_Grab_Left,ETriggerEvent::Started,this,&AVRPlayer::Grab_Left_Started);
		EnhancedInputComponent->BindAction(IA_Grab_Left,ETriggerEvent::Completed,this,&AVRPlayer::Grab_Left_Closed);
	}
}

void AVRPlayer::Move(const FInputActionValue& value)
{
	FVector2D Movement = value.Get<FVector2D>();
	
	AddMovementInput(compCam->GetForwardVector(), Movement.Y * MovingParam)
	;
	AddMovementInput(compCam->GetRightVector(), Movement.X*MovingParam);
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
	UKismetSystemLibrary::SphereOverlapActors(world, motionControllerLeft->GetComponentLocation(),SphereRadius,ObjectTypes, NULL, TArray<AActor*>(), OverlappingActors); //왼손 앞에 박힌 Sphere콜리전에 WorldDynamic Static인 무언가가 닿는다면 닿은 모든 것들이 OverLapping 배열에 들어간다.
	}
	
	for (int i = 0; i < OverlappingActors.Num(); i++) //배열 검사
	{
// 		if(UKismetSystemLibrary::DoesImplementInterface(OverlappingActors[i],UI_Grab::StaticClass()))
// 		{
// 			OverlappingActors[i]
// 		};
		if (OverlappingActors[i]->GetClass()->ImplementsInterface(UI_Grab::StaticClass())) //닿은 것 중 인터페이스를 적용시킨 액터라면
		{
			Cast<II_Grab>(OverlappingActors[i])->Grab(motionControllerLeft); //잡을 수 있다.
			GrabLeftActor  = OverlappingActors[i]; //액터 정보 저장
			break; //한 손에 한개만 집을 거니까 찾았으면 해당 반복문을 종료시킨다.
		}
	}
	
}

void AVRPlayer::Grab_Left_Closed(const FInputActionValue& value)
{
	if (GrabLeftActor != nullptr) //잡은 물건이 있다면
	{
		Cast<II_Grab>(GrabLeftActor)->Release(motionControllerLeft);
		//놓을 수 있다.
		GrabLeftActor = NULL; //놓았으니 현재 잡은 물건은 없다. 액터 정보 초기화
	}
}
