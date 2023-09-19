#include "ItemBase.h"
#include "SpaceShip.h"
#include "Components/BoxComponent.h"
#include "MotionControllerComponent.h"

AItemBase::AItemBase()
{
	ItemBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Item"));

	RootComponent = ItemBody;

}

void AItemBase::BeginPlay()
{
	Super::BeginPlay();

	ItemBody->OnComponentBeginOverlap.AddDynamic(this, &AItemBase::OnItemBodyBeginOverlap);
	
}

void AItemBase::ExecuteGrab(UMotionControllerComponent* MotionControllerToGrab)
{
	if (bHasGravity)
	{
		ItemBody->SetSimulatePhysics(false);
		AttachToComponent(MotionController, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	}
	else
	{
		AttachToComponent(MotionController, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
		ItemBody->SetSimulatePhysics(bHasGravity);
	}
}

void AItemBase::ExecuteRelease(UMotionControllerComponent* MotionControllerToRelease)
{
	MotionController = nullptr;
	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	ItemBody->SetSimulatePhysics(bHasGravity);
}

void AItemBase::OnItemBodyBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ASpaceShip* Ship = Cast<ASpaceShip>(OtherActor);

	if (Ship != nullptr)
	{
		if (Ship->Fly2WalkCollision == OtherComp && IsValid(ItemBody->GetAttachParent()))
		{
			bHasGravity = true;
		}
		else if (Ship->Walk2FlyCollision == OtherComp && IsValid(ItemBody->GetAttachParent()))
		{
			bHasGravity = false;
		}
	}
}