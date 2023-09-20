// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Public/I_Grab.h"
#include "ItemBase.generated.h"

UCLASS()
class ONSPACE_API AItemBase : public AActor, public II_Grab
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItemBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	virtual void Grab(class UMotionControllerComponent* MotionController) override;
	virtual void Release(class UMotionControllerComponent* MotionController) override;
	virtual bool Active() override;
};
