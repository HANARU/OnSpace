// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BlasterBullet.generated.h"

UCLASS()
class ONSPACE_API ABlasterBullet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABlasterBullet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

//Compoenent

public : 
	//Bullet Body
	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UStaticMeshComponent* BulletBody;
	
	//Collision
	UPROPERTY(EditAnywhere, Category = "MySettings")
	class USphereComponent* BulletCollision;
	
	//Projectile Movement
	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UProjectileMovementComponent* BulletMovement;

	UFUNCTION()
	void BulletBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
