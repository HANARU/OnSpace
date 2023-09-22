#include "InventoryComponent.h"
#include "ItemBase.h"
#include "MotionControllerComponent.h"

UInventoryComponent::UInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	ConstructorHelpers::FObjectFinder<UStaticMesh> Temp_InventoryStaticMesh(TEXT("/Engine/EditorMeshes/ArcadeEditorSphere.ArcadeEditorSphere"));
	
	if (Temp_InventoryStaticMesh.Succeeded())
	{
		this->SetStaticMesh(Temp_InventoryStaticMesh.Object);
	}

	ConstructorHelpers::FObjectFinder<UMaterial> Temp_InventoryMat(TEXT("/Script/Engine.Material'/Engine/VREditor/UI/KeyDiskMaterial.KeyDiskMaterial'"));

	if (Temp_InventoryMat.Succeeded())
	{
		this->SetMaterial(0, Temp_InventoryMat.Object);
	}

	this->SetCollisionProfileName(TEXT("Inventory"));

}

void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();
	
	//Delegates Bind
	//OnComponentBeginOverlap.BindUFunction(this, "BeginOverlap");
	//OnComponentEndOverlap.BindUFunction(this, "EndOverlap");

	this->OnComponentBeginOverlap.AddDynamic(this, &UInventoryComponent::OnBeginOverlap_Item);
	this->OnComponentEndOverlap.AddDynamic(this, &UInventoryComponent::OnEndOverlap_Item);

}

void UInventoryComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	if (GrabActor != nullptr)
	{
		FString ObjectName = GrabActor->GetName();
		GEngine->AddOnScreenDebugMessage(-1, 0.001f, FColor::Yellow, ObjectName);
		if (GrabActor->MotionController == nullptr)
		{
			GrabActor->AttachToComponent(this, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
		}
	}
}

void UInventoryComponent::OnBeginOverlap_Item(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp,Warning,TEXT("Inventory Begin Overlap!"));
	//GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Red,TEXT("Inventory Begin Overlap!"));

	if (GrabActor == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("GrabActor NULL"));
		AItemBase* Item = Cast<AItemBase>(OtherActor);
		if (Item != nullptr)
		{
			UE_LOG(LogTemp, Warning, TEXT("Item Not NULL"));
			if (Item->MotionController != nullptr)
			{
				UE_LOG(LogTemp, Warning, TEXT("MotionController Not NULL"));
				if (Controller2Ignore != nullptr)
				{
					UE_LOG(LogTemp, Warning, TEXT("Not Ignore"));
					if (Item->MotionController != Controller2Ignore)
					{
						GrabActor = Item;
					}
				}
				else
				{
					UE_LOG(LogTemp, Warning, TEXT("Ignore"));
					GrabActor = Item;
				}
			}
		}
	}
}

void UInventoryComponent::OnEndOverlap_Item(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	//UE_LOG(LogTemp, Warning, TEXT("Inventory End Overlap!"));
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Inventory End Overlap!"));
	if (GrabActor == OtherActor)
	{
		GrabActor = nullptr;
	}
}


//void UInventoryComponent::BeginOverlap(AActor* OtherActor)
//{
//	//UE_LOG(LogTemp,Warning,TEXT("Inventory Begin Overlap!"));
//	//GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Red,TEXT("Inventory Begin Overlap!"));
//
//	if (GrabActor == nullptr)
//	{
//		AItemBase* Item = Cast<AItemBase>(OtherActor);
//		if (Item->MotionController != nullptr)
//		{
//			if (Controller2Ignore != nullptr)
//			{
//				if (Item->MotionController != Controller2Ignore)
//				{
//					GrabActor = Item;
//				}
//			}
//			else
//			{
//				GrabActor = Item;
//			}
//		}
//	}
//}
//
//void UInventoryComponent::EndOverlap(AActor* OtherActor)
//{
//	//UE_LOG(LogTemp, Warning, TEXT("Inventory End Overlap!"));
//	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Inventory End Overlap!"));
//	if (GrabActor == OtherActor)
//	{
//		GrabActor = nullptr;
//	}
//}
