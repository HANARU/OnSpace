// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpaceShip.generated.h"

UCLASS()
class ONSPACE_API ASpaceShip : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpaceShip();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


public:
/*-------------- Components -----------------*/
//------Collision
//바깥문 콜리젼
	UPROPERTY(EditAnywhere,Category = "MySettings")	
	class UBoxComponent* compOutDoorCollision;
	
//안쪽문 콜리젼
	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UBoxComponent* compIndoorCollision;
	
// Fly Mode Collision
	UPROPERTY(EditAnywhere,Category="MySettings")
	class UBoxComponent* compFlyCollision;

// Walk Mode Collision
	UPROPERTY(EditAnywhere,Category="MySettings")
	class UBoxComponent* compWalkCollision;


//--------StaticMesh
//spaceship 외관
	UPROPERTY(EditAnywhere,Category = "MySettings")
	class UStaticMeshComponent* compExterior;

//spaceship 바깥문
	UPROPERTY(EditAnywhere,Category = "MySettings")
	class UStaticMeshComponent* compExteriorDoor;

//spaceship 내관
	UPROPERTY(EditAnywhere,Category = "MySettings")
	class UStaticMeshComponent* compInterior;

//spaceship 안쪽문
	UPROPERTY(EditAnywhere,Category = "MySettings")
	class UStaticMeshComponent* compInteriorDoor;

//전체 조명
	UPROPERTY(EditAnywhere,Category = "MySettings")
	class UStaticMeshComponent* Lamps;

//식탁 조명
	UPROPERTY(EditAnywhere,Category = "MySettings")
	class UStaticMeshComponent* diningRoomLamp;



};
