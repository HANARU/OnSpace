#include "ItemBase.h"
#include "SpaceShip.h"
#include "VRPlayer.h"
#include "Components/BoxComponent.h"
#include "MotionControllerComponent.h"
#include "Kismet/GameplayStatics.h"

AItemBase::AItemBase()
{
	//PrimaryActorTick.bCanEverTick = true;
	ItemBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Item"));
	ItemBody->SetCollisionProfileName(TEXT("BaseItem"));

	RootComponent = ItemBody;
}

void AItemBase::BeginPlay()
{
	Super::BeginPlay();

	ItemBody->OnComponentBeginOverlap.AddDynamic(this, &AItemBase::OnItemBodyBeginOverlap);
	ItemBody->OnComponentBeginOverlap.AddDynamic(this, &AItemBase::OnBeginOverlap_CanEat);
	
}



void AItemBase::Grab(class UMotionControllerComponent* MotionControllerToGrab)
{
	//GEngine->AddOnScreenDebugMessage(-1,4.f,FColor::Red, TEXT("ItemBase Grab!"));
	//UE_LOG(LogTemp,Warning,TEXT("ItemBase Grab!"));
	ExecuteGrab(MotionControllerToGrab);
}

void AItemBase::Release(class UMotionControllerComponent* MotionControllerToRelease)
{
	//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Blue, TEXT("ItemBase Release!"));
	//UE_LOG(LogTemp, Warning, TEXT("ItemBase Release!"));
	ExecuteRelease(MotionControllerToRelease);
}

bool AItemBase::Active()
{
	return true;
}

void AItemBase::ExecuteGrab(UMotionControllerComponent* MotionControllerToGrab)
{
	MotionController = MotionControllerToGrab;
	Player = Cast<AVRPlayer>(MotionController->GetOwner());
	
	if (this->objectName == TEXT("Blaster"))
	{
		bIsBlaster = true;
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Silver, TEXT("Blaster Check"));
	}
	
	if (bIsBlaster && MotionController == Player->motionControllerLeft)
	{
		GEngine->AddOnScreenDebugMessage(-1, 4.f, FColor::Yellow, TEXT("Left Grab!"));
		if (bHasGravity)
		{
			ItemBody->SetSimulatePhysics(false);
			AttachToComponent(Player->compSkeletal, FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName(
				"Left_BlasterLoc"));
		}
		else
		{
			AttachToComponent(Player->compSkeletal, FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName(
				"Left_BlasterLoc"));
			ItemBody->SetSimulatePhysics(bHasGravity);
		}

	}
	else if (bIsBlaster && MotionController == Player->motionControllerRight)
	{
		GEngine->AddOnScreenDebugMessage(-1, 4.f, FColor::Yellow, TEXT("Right Grab!"));
		if (bHasGravity)
		{
			ItemBody->SetSimulatePhysics(false);
			AttachToComponent(Player->compSkeletal, FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName(
				"Right_BlasterLoc"));
		}
		else
		{
			AttachToComponent(Player->compSkeletal, FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName(
				"Right_BlasterLoc"));
			ItemBody->SetSimulatePhysics(bHasGravity);
		}
	}

	else
	{
		if (bHasGravity)
		{
			ItemBody->SetSimulatePhysics(false);
			AttachToComponent(MotionControllerToGrab, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
		}
		else
		{
			AttachToComponent(MotionControllerToGrab, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
			ItemBody->SetSimulatePhysics(bHasGravity);
		}
	}
	
}

void AItemBase::ExecuteRelease(UMotionControllerComponent* MotionControllerToRelease)
{
	MotionController = nullptr;
	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	ItemBody->SetSimulatePhysics(bHasGravity);
}

void AItemBase::OnItemBodyBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ASpaceShip* Ship = Cast<ASpaceShip>(OtherActor);

	if (Ship != nullptr)
	{
		if (Ship->compWalkCollision == OtherComp && IsValid(ItemBody->GetAttachParent()))
		{
			bHasGravity = true;
		}
		else if (Ship->compFlyCollision == OtherComp && IsValid(ItemBody->GetAttachParent()))
		{
			bHasGravity = false;
		}
	}
}

void AItemBase::OnBeginOverlap_CanEat(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (CanEatThis)
	{
		AVRPlayer* VRPlayer = Cast<AVRPlayer>(OtherActor);
		if (VRPlayer != nullptr)
		{
			VRPlayer->CurrentOxygen = VRPlayer->CurrentOxygen + 120;
			Destroy();
		}
	}
}

