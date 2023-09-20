// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemBase.h"

// Sets default values
AItemBase::AItemBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AItemBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItemBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AItemBase::Grab(class UMotionControllerComponent* MotionController)
{
	GEngine->AddOnScreenDebugMessage(-1,4.f,FColor::Red, TEXT("ItemBase Grab!"));
	UE_LOG(LogTemp,Warning,TEXT("ItemBase Grab!"));
}

void AItemBase::Release(class UMotionControllerComponent* MotionController)
{
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Blue, TEXT("ItemBase Release!"));
	UE_LOG(LogTemp, Warning, TEXT("ItemBase Release!"));
}

bool AItemBase::Active()
{
	return true;
}

