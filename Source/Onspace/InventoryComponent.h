// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "InventoryComponent.generated.h"

UCLASS()
class ONSPACE_API UInventoryComponent : public UStaticMeshComponent
{
	GENERATED_BODY()

	UInventoryComponent();

protected:
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
public:
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, )

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Controller")
	class UMotionControllerComponent* Controller2Ignore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	class AItemBase* GrabActor;

	class UStaticMeshComponent* MeshComp;

public:
	UFUNCTION(BlueprintCallable)
	void BeginOverlap(AActor* OtherActor);
	UFUNCTION(BlueprintCallable)
	void EndOverlap(AActor* OtherActor);
	
};
