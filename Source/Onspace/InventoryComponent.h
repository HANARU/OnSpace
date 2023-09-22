// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "InventoryComponent.generated.h"

/**
 * 
 */
UCLASS()
class ONSPACE_API UInventoryComponent : public UStaticMeshComponent
{
	GENERATED_BODY()
	UInventoryComponent();
	virtual void BeginPlay() override;

public:
	/*class UInventoryComponent* InventoryComponent;*/
	
};
