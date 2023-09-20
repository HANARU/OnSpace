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
//�ٱ��� �ݸ���
	UPROPERTY(EditAnywhere,Category = "MySettings")	
	class UBoxComponent* compOutDoorCollision;
	
//���ʹ� �ݸ���
	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UBoxComponent* compIndoorCollision;
	
// Fly Mode Collision
	UPROPERTY(EditAnywhere,Category="MySettings")
	class UBoxComponent* compFlyCollision;

// Walk Mode Collision
	UPROPERTY(EditAnywhere,Category="MySettings")
	class UBoxComponent* compWalkCollision;


//--------StaticMesh
//spaceship �ܰ�
	UPROPERTY(EditAnywhere,Category = "MySettings")
	class UStaticMeshComponent* compExterior;

//spaceship �ٱ���
	UPROPERTY(EditAnywhere,Category = "MySettings")
	class UStaticMeshComponent* compExteriorDoor;

//spaceship ����
	UPROPERTY(EditAnywhere,Category = "MySettings")
	class UStaticMeshComponent* compInterior;

//spaceship ���ʹ�
	UPROPERTY(EditAnywhere,Category = "MySettings")
	class UStaticMeshComponent* compInteriorDoor;

//��ü ����
	UPROPERTY(EditAnywhere,Category = "MySettings")
	class UStaticMeshComponent* Lamps;

//��Ź ����
	UPROPERTY(EditAnywhere,Category = "MySettings")
	class UStaticMeshComponent* diningRoomLamp;



};
