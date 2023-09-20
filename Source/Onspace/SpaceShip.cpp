// Fill out your copyright notice in the Description page of Project Settings.


#include "SpaceShip.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"

// Sets default values
ASpaceShip::ASpaceShip()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/*---------------  Static Mesh COMP -------------------*/
	//Exterior component
	compExterior = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Exterior"));
	compExterior->SetupAttachment(RootComponent);
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
	compInterior->SetupAttachment(RootComponent);
	ConstructorHelpers::FObjectFinder<UStaticMesh> tempInterior(TEXT("/Script/Engine.StaticMesh'/Game/3_SM/PlayerShip_Interior/SM_SpaceCruiser_FullInterior.SM_SpaceCruiser_FullInterior'"));
	if (tempInterior.Succeeded())
	{
		compInterior->SetStaticMesh(tempInterior.Object);
		compInterior->SetRelativeLocation(FVector(-1573.0f, -14, -654));
	}

	//InteriorDoor Component
	compInteriorDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("InteriorDoor"));
	compInteriorDoor->SetupAttachment(compInterior);
	ConstructorHelpers::FObjectFinder<UStaticMesh> tempInteriorDoor(TEXT("/Script/Engine.StaticMesh'/Game/3_SM/PlayerShip_EntraceDoor/SM_EngineerShip_Door/SM_EngineerShip_Door.SM_EngineerShip_Door'"));
	if (tempInteriorDoor.Succeeded())
	{
		compInteriorDoor->SetStaticMesh(tempInteriorDoor.Object);
		compInteriorDoor->SetRelativeLocation(FVector(794.0f, 14.0f, 654.0f));
	}

	//Lamps Comp
	Lamps = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Lamps"));
	compInterior->SetupAttachment(RootComponent);
	ConstructorHelpers::FObjectFinder<UStaticMesh> tempLamps(TEXT("/Script/Engine.StaticMesh'/Game/3_SM/PlayerShip_InteriorLamps/SM_DCruiserInterior_Lamps.SM_DCruiserInterior_Lamps'"));
	if (tempLamps.Succeeded())
	{
		Lamps->SetStaticMesh(tempLamps.Object);
		Lamps->SetRelativeLocation(FVector( - 1573.0, -14.0, -654.0));
	}

	//Dining Lamp comp
	diningRoomLamp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("diningRoomLamp"));
	compInterior->SetupAttachment(RootComponent);
	/*ConstructorHelpers::FObjectFinder<UStaticMesh> tempdiningRoomLamp(TEXT(""));*/
// 	if (tempLamps.Succeeded())
// 	{
// 		Lamps->SetStaticMesh(tempLamps.Object);
// 		
// 	}
	diningRoomLamp->SetRelativeLocation(FVector(79.0, -332.0, 201.99));
	diningRoomLamp->SetRelativeRotation(FRotator(180,0,0));

	/*---------------  Collision COMP -------------------*/

	//OutDoorCollision
	compOutDoorCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("OutDoorCollision"));
	compOutDoorCollision->SetupAttachment(RootComponent);
	compOutDoorCollision->SetRelativeLocation(FVector(-1317.0f,-5,0));
	compOutDoorCollision->SetRelativeScale3D(FVector(5.5,8.5,8.8));

	//InDoorCollision
	compIndoorCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("InDoorCollision"));
	compIndoorCollision->SetupAttachment(RootComponent);
	compIndoorCollision->SetRelativeLocation(FVector(-773, 0, 0));
	compIndoorCollision->SetRelativeScale3D(FVector(3.6, 5, 5));

	//FlyCollision
	compFlyCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("FlyCollision"));
	compFlyCollision->SetupAttachment(RootComponent);
	compFlyCollision->SetRelativeLocation(FVector(-1298, 0, 0));
	compFlyCollision->SetRelativeScale3D(FVector(1, 4.4, 4.5));

	//WalkingCollision
	compWalkCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("WalkCollision"));
	compWalkCollision->SetupAttachment(RootComponent);
	compWalkCollision->SetRelativeLocation(FVector(-697, 0, 0));
	compWalkCollision->SetRelativeScale3D(FVector(1, 4.4, 4.5));


}

// Called when the game starts or when spawned
void ASpaceShip::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpaceShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

