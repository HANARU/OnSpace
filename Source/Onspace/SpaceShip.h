#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpaceShip.generated.h"

UCLASS()
class ONSPACE_API ASpaceShip : public AActor
{
	GENERATED_BODY()
	
public:	
	ASpaceShip();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	class UStaticMeshComponent* InteriorBody;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	class UStaticMeshComponent* InteriorDoor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	class UStaticMeshComponent* ExteriorBody;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	class UStaticMeshComponent* ExteriorDoor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	class UStaticMeshComponent* Lamps;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	class UStaticMeshComponent* DiningRoomLamp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	class UBoxComponent* Fly2WalkCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	class UBoxComponent* Walk2FlyCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	class UBoxComponent* OutDoorCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	class UBoxComponent* InDoorCollision;

	FVector ExteriorDoorInitLocation;
	FVector InteriorDoorInitLocation;

protected:
	virtual void BeginPlay() override;

public:
	UFUNCTION()
	void OnBeginOverlap_Walk2Fly(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnBeginOverlap_Fly2Walk(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};
