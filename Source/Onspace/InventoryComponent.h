// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "Delegates/DelegateCombinations.h"
#include "InventoryComponent.generated.h"

	/* Delegate */

//DECLARE_DYNAMIC_DELEGATE_OneParam(FOnComponentBeginOverlap, AActor*, OtherActor);
//DECLARE_DYNAMIC_DELEGATE_OneParam(FOnComponentEndOverlap, AActor*, OtherActor);

/**
 * 
 */
UCLASS()
class ONSPACE_API UInventoryComponent : public UStaticMeshComponent
{
	GENERATED_BODY()
	UInventoryComponent();
	virtual void BeginPlay() override;

	protected:
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction * ThisTickFunction) override;

public:

	//FOnComponentBeginOverlap OnComponentBeginOverlap;
	//FOnComponentEndOverlap OnComponentEndOverlap;


	/*class UInventoryComponent* InventoryComponent;*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Controller")
	class UMotionControllerComponent* Controller2Ignore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	class AItemBase* GrabActor;

	UFUNCTION()
	void OnBeginOverlap_Item(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnEndOverlap_Item(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	/*UFUNCTION(BlueprintCallable)
	void BeginOverlap(AActor* OtherActor);
	
	UFUNCTION(BlueprintCallable)
	void EndOverlap(AActor* OtherActor);*/
};
