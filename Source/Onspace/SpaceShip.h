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

protected:
	virtual void BeginPlay() override;

public:
/*-------------- Components -----------------*/

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class USceneComponent* BaseComponent;

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

	UPROPERTY(EditAnywhere, Category = "MySettings")
	class UBoxComponent* HiddenInterior;


//--------StaticMesh
//spaceship 외관
	UPROPERTY(EditAnywhere,Category = "MySettings")
	class UStaticMeshComponent* compExterior;

//spaceship 바깥문
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MySettings")
	class UStaticMeshComponent* compExteriorDoor;

//spaceship 내관
	UPROPERTY(EditAnywhere,Category = "MySettings")
	class UStaticMeshComponent* compInterior;

//spaceship 안쪽문
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MySettings")
	class UStaticMeshComponent* compInteriorDoor;

//전체 조명
	UPROPERTY(EditAnywhere,Category = "MySettings")
	class UStaticMeshComponent* Lamps;

//식탁 조명
	UPROPERTY(EditAnywhere,Category = "MySettings")
	class UStaticMeshComponent* diningRoomLamp;

	FVector ExteriorDoorInitLocation;
	FVector InteriorDoorInitLocation;

//Controller Door
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "MySettings")
	class UStaticMeshComponent* ControllerDoor;

//W.C Door
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MySettings")
	class UStaticMeshComponent* BathRoomDoor;


//Space Ambient Sound
	UPROPERTY(EditAnywhere,  Category = "Sound")
	class USoundBase* SpaceAmbient;

//Basic Ambient Sound
	UPROPERTY(EditAnywhere, Category = "Sound")
	class USoundBase* BasicAmbient;

//Breath Enter Space Sound
	UPROPERTY(EditAnywhere, Category = "Sound")
	class USoundBase* BreathEnterSpace;

//Ambient Component
	UPROPERTY(EditAnywhere, Category = "Sound")
	class UAudioComponent* AmbientSound;

//Breath Enter Space Component
	UPROPERTY(EditAnywhere, Category = "Sound")
	class UAudioComponent* BreathEnterSpaceSound;

public:
	UFUNCTION()
	void OnBeginOverlap_Walk2Fly(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnBeginOverlap_Fly2Walk(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnBeginOverlap_HiddenInterior(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnEndOverlap_HiddenInterior(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};
