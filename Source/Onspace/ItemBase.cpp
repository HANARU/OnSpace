#include "ItemBase.h"
#include "VRInstance.h"
#include "SpaceShip.h"
#include "Components/BoxComponent.h"
#include "MotionControllerComponent.h"
#include "Kismet/GameplayStatics.h"

AItemBase::AItemBase()
{
	//PrimaryActorTick.bCanEverTick = true;
	ItemBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Item"));

	RootComponent = ItemBody;

	/*UVRInstance* Instance = Cast<UVRInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	if (Instance == nullptr)	return;

	CurrentItemData = Instance->GetItemData(objectName);
	if (CurrentItemData)
	{
		objectName = CurrentItemData->ItemName;

		ItemBody->SetStaticMesh(CurrentItemData->ItemMesh);
	}*/
}

void AItemBase::BeginPlay()
{
	Super::BeginPlay();

	ItemBody->OnComponentBeginOverlap.AddDynamic(this, &AItemBase::OnItemBodyBeginOverlap);
	
}



void AItemBase::Grab(class UMotionControllerComponent* MotionControllerToGrab)
{
	GEngine->AddOnScreenDebugMessage(-1,4.f,FColor::Red, TEXT("ItemBase Grab!"));
	UE_LOG(LogTemp,Warning,TEXT("ItemBase Grab!"));
	ExecuteGrab(MotionControllerToGrab);
}

void AItemBase::Release(class UMotionControllerComponent* MotionControllerToRelease)
{
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Blue, TEXT("ItemBase Release!"));
	UE_LOG(LogTemp, Warning, TEXT("ItemBase Release!"));
	ExecuteRelease(MotionControllerToRelease);
}

bool AItemBase::Active()
{
	return true;
}

void AItemBase::ExecuteGrab(UMotionControllerComponent* MotionControllerToGrab)
{
	if (bHasGravity)
	{
		ItemBody->SetSimulatePhysics(false);
		AttachToComponent(MotionControllerToGrab, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	}
	else
	{
		AttachToComponent(MotionControllerToGrab, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
		ItemBody->SetSimulatePhysics(bHasGravity);
	}
}

void AItemBase::ExecuteRelease(UMotionControllerComponent* MotionControllerToRelease)
{
	MotionControllerToRelease = nullptr;
	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	ItemBody->SetSimulatePhysics(bHasGravity);
}

void AItemBase::OnItemBodyBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ASpaceShip* Ship = Cast<ASpaceShip>(OtherActor);

	if (Ship != nullptr)
	{
		if (Ship->compWalkCollision == OtherComp && IsValid(ItemBody->GetAttachParent()))
		{
			bHasGravity = true;
		}
		else if (Ship->compFlyCollision == OtherComp && IsValid(ItemBody->GetAttachParent()))
		{
			bHasGravity = false;
		}
	}
}

