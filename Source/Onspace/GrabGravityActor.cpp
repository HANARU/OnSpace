#include "GrabGravityActor.h"
#include "MotionControllerComponent.h"

AGrabGravityActor::AGrabGravityActor()
{
	GrabbableBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GrabbleBody"));
	GrabbableBody->SetupAttachment(RootComponent);
}

void AGrabGravityActor::BeginPlay()
{
	Super::BeginPlay();
	
}

