// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"
#include "Materials/Material.h"

UInventoryComponent::UInventoryComponent()
{
	
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

}
