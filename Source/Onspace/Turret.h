#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Turret.generated.h"

UCLASS()
class ONSPACE_API ATurret : public AActor
{
	GENERATED_BODY()
	
public:	
	ATurret();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Turret)
	class USceneComponent* SceneRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Turret)
	class UStaticMeshComponent* TurretBody;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Turret)
	class UStaticMeshComponent* TurretHead;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Turret)
	class USceneComponent* LaserStartPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Turret)
	class USphereComponent* DetectCollision;

	bool bDetectedPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Player)
	class AVRPlayer* VRPlayer;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnBeginOverlap_Detect(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnEndOverlap_Detect(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	void Activation();

	UFUNCTION(BlueprintNativeEvent)
	void Shoot2Player();
};
