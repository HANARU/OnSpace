#include "GrabGravityActor.h"
#include "MotionControllerComponent.h"

AGrabGravityActor::AGrabGravityActor()
{
	GrabbableBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GrabbableBody"));
	GrabbableBody->SetupAttachment(RootComponent);
	ConstructorHelpers::FObjectFinder<UStaticMesh>tempGrabActorBody(TEXT("/Script/Engine.StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	if (tempGrabActorBody.Succeeded())
	{
		GrabbableBody->SetStaticMesh(tempGrabActorBody.Object);
		GrabbableBody->SetRelativeScale3D(FVector(0.25f));
	}
	GrabbableBody->SetCollisionProfileName(TEXT("BaseItem"));
}

void AGrabGravityActor::BeginPlay()
{
	Super::BeginPlay();
	
}

