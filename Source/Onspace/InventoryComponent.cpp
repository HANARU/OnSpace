// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"
/*#include "Materials/Material.h"*/
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

}

void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();
	
	//Delegates Bind
	OnComponentBeginOverlap.BindDynamic(this, &UInventoryComponent::BeginOverlap);
	OnComponentEndOverlap.BindDynamic(this, &UInventoryComponent::EndOverlap);
}

void UInventoryComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
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
	UE_LOG(LogTemp,Warning,TEXT("Inventory Begin Overlap!"));
	GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Red,TEXT("Inventory Begin Overlap!"));

	if (GrabActor == nullptr)
	{
		AItemBase* Item = Cast<AItemBase>(OtherActor);
		if (Item->MotionController != nullptr)
		{
			if (Controller2Ignore != nullptr)
			{
				if (Item->MotionController != Controller2Ignore)
				{
					GrabActor = Item;
				}
			}
		}
	}
}

void UInventoryComponent::EndOverlap(AActor* OtherActor)
{
	UE_LOG(LogTemp, Warning, TEXT("Inventory End Overlap!"));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Inventory End Overlap!"));
	if (GrabActor == OtherActor)
	{
		GrabActor = nullptr;
	}
}
