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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordination")
	class UStaticMeshComponent* GrabbableBody;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordination")
	FVector GrabLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordination")
	class UMotionControllerComponent* GrabbingController;

protected:
	virtual void BeginPlay() override;

};
