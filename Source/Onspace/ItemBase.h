#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemBase.generated.h"

UCLASS()
class ONSPACE_API AItemBase : public AActor
{
	GENERATED_BODY()
	
public:	
	AItemBase();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	class UStaticMeshComponent* ItemBody;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	class UMotionControllerComponent* MotionController;

	bool bHasGravity = false;

protected:
	virtual void BeginPlay() override;

public:
	UFUNCTION(BlueprintCallable)
	void ExecuteGrab(UMotionControllerComponent* MotionControllerToGrab);

	UFUNCTION(BlueprintCallable)
	void ExecuteRelease(UMotionControllerComponent* MotionControllerToRelease);

	UFUNCTION()
	void OnItemBodyBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};
