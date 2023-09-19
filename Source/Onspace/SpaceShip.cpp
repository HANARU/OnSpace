#include "SpaceShip.h"
#include "VRPlayer.h"
#include "Components/Boxcomponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/CharacterMovementComponent.h"

ASpaceShip::ASpaceShip()
{
	InteriorBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("InteriorBody"));
	InteriorBody->SetupAttachment(RootComponent);

	InteriorDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("InteriorDoor"));
	InteriorDoor->SetupAttachment(RootComponent);

	ExteriorBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ExteriorBody"));
	ExteriorBody->SetupAttachment(RootComponent);

	ExteriorDoor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ExteriorDoor"));
	ExteriorDoor->SetupAttachment(RootComponent);

	Lamps = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Lamps"));
	Lamps->SetupAttachment(RootComponent);

	DiningRoomLamp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DiningRoomLamp"));
	DiningRoomLamp->SetupAttachment(RootComponent);

	Fly2WalkCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Fly2Walk"));
	Fly2WalkCollision->SetupAttachment(RootComponent);

	Walk2FlyCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Walk2Fly"));
	Walk2FlyCollision->SetupAttachment(RootComponent);

	OutDoorCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("OutDoor"));
	OutDoorCollision->SetupAttachment(RootComponent);

	InDoorCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("InDoor"));
	InDoorCollision->SetupAttachment(RootComponent);
}

void ASpaceShip::BeginPlay()
{
	Super::BeginPlay();

	ExteriorDoorInitLocation = ExteriorDoor->GetComponentLocation();
	InteriorDoorInitLocation = InteriorDoor->GetComponentLocation();
}

void ASpaceShip::OnBeginOverlap_Walk2Fly(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AVRPlayer* VRPlayer = Cast<AVRPlayer>(OtherActor);
	if (VRPlayer != nullptr)
	{
		UCharacterMovementComponent* CharacterMovementComponent = VRPlayer->GetCharacterMovement();
		if (CharacterMovementComponent->IsWalking())
		{
			CharacterMovementComponent->SetMovementMode(EMovementMode::MOVE_Flying);
		}
	}
}

void ASpaceShip::OnBeginOverlap_Fly2Walk(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AVRPlayer* VRPlayer = Cast<AVRPlayer>(OtherActor);
	if (VRPlayer != nullptr)
	{
		UCharacterMovementComponent* CharacterMovementComponent = VRPlayer->GetCharacterMovement();
		if (CharacterMovementComponent->IsFlying())
		{
			CharacterMovementComponent->SetMovementMode(EMovementMode::MOVE_Walking);
		}
	}

	
}

