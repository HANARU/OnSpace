#include "InventoryComponent.h"
#include "ItemBase.h"
#include "MotionControllerComponent.h"


UInventoryComponent::UInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh>	InventoryMesh(TEXT("/Script/Engine.StaticMesh'/Game/3_SM/Inventory/SM_Inventory.SM_Inventory'"));

	if (InventoryMesh.Succeeded() && InventoryMesh.Object != nullptr)			this->SetStaticMesh(InventoryMesh.Object);
}

void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	if (GrabActor != nullptr)
	{
		if (GrabActor->MotionController == nullptr)
		{
			GrabActor->AttachToComponent(this, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
		}
	}
}

void UInventoryComponent::BeginOverlap(AActor* OtherActor)
{
	if (GrabActor != nullptr)
	{
		AItemBase* Item = Cast<AItemBase>(OtherActor);
		UMotionControllerComponent* ItemMotionController = Item->MotionController;
		if (ItemMotionController != nullptr)
		{
			if (Controller2Ignore != nullptr)
			{
				if (ItemMotionController != nullptr && Controller2Ignore != nullptr)
				{
					GrabActor = Item;
				 }
			}
		}
	}
}

void UInventoryComponent::EndOverlap(AActor* OtherActor)
{
	if (GrabActor == OtherActor)
	{
		GrabActor = nullptr;
	}
}