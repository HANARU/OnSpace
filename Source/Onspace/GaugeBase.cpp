#include "GaugeBase.h"

UGaugeBase::UGaugeBase()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BodyMesh(TEXT("/Game/3_SM/Gauge/SM_Gauge"));
	if (BodyMesh.Succeeded())
	{
		this->SetStaticMesh(BodyMesh.Object);
	}

	this->SetRelativeScale3D(FVector(0.05, 0.05, 0.1));
}
