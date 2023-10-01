#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GrabGravityActor.generated.h"

UCLASS()
class ONSPACE_API AGrabGravityActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AGrabGravityActor();

protected:
	virtual void BeginPlay() override;

public:

//Component
	UPROPERTY(EditAnywhere,Category = "Coordination")
	class UStaticMeshComponent* GrabbableBody;

//Function Needes Variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordination")
	class UMotionControllerComponent* GrabbingHand;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordination")
	FVector GrabLocation;
};
