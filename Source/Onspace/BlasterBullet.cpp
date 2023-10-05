// Fill out your copyright notice in the Description page of Project Settings.


#include "BlasterBullet.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Turret.h"
#include "Components/SphereComponent.h"

// Sets default values
ABlasterBullet::ABlasterBullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//BulletCollision
	BulletCollision = CreateDefaultSubobject<USphereComponent>(TEXT("BulletCollision"));
	SetRootComponent(BulletCollision);
	BulletCollision->SetSphereRadius(16.f);

	//Bullet Body
	BulletBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BulletBody"));
	BulletBody->SetupAttachment(BulletCollision);
	ConstructorHelpers::FObjectFinder<UStaticMesh> tempBulletBody(TEXT("/Script/Engine.StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));
	
	if (tempBulletBody.Succeeded())
	{
		BulletBody->SetStaticMesh(tempBulletBody.Object);
		BulletBody->SetRelativeScale3D(FVector(0.3));
	}

	//BulletBody->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	//ProjectileMovement
	BulletMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("BulletMovement"));

	/*Bullet Overlap Work*/
	BulletCollision->OnComponentBeginOverlap.AddDynamic(this, &ABlasterBullet::BulletBeginOverlap);
	BulletBody->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	BulletCollision->SetCollisionProfileName(TEXT("BlasterBullet"));

	/*Bullet Move Speed Set*/
	BulletMovement->InitialSpeed = 3000;
	BulletMovement->MaxSpeed = 3000;

	this->SetLifeSpan(10);

}

// Called when the game starts or when spawned
void ABlasterBullet::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABlasterBullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABlasterBullet::BulletBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Blue, TEXT("I can hit Everything!"));
	ATurret* Turret = Cast<ATurret>(OtherActor);
	if (Turret != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green,TEXT("I can hit Turret!"));
	}
	
}

