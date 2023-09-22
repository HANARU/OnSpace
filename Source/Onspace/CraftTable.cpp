#include "CraftTable.h"
#include "VRPlayer.h"
#include "ItemBase.h"
#include "Components/BoxComponent.h"

ACraftTable::ACraftTable()
{
	PrimaryActorTick.bCanEverTick = true;

	CraftTableBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CraftTableBody"));
	SetRootComponent(CraftTableBody);

	ItemOverlapVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("ItemVolume"));
	ItemOverlapVolume->SetupAttachment(GetRootComponent());
	ItemOverlapVolume->SetRelativeLocation(FVector(-5.f, 3.f, 17.f));
	ItemOverlapVolume->SetRelativeScale3D(FVector(1.125, 0.6875, 0.46875));

	SpawnItemPoint = CreateDefaultSubobject<USceneComponent>(TEXT("SpawnItem"));
	SpawnItemPoint->SetupAttachment(GetRootComponent());
	SpawnItemPoint->SetRelativeLocation(FVector(0, 0, 23));

	EncounterCharacterVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("EncounterVolume"));
	EncounterCharacterVolume->SetupAttachment(GetRootComponent());
	EncounterCharacterVolume->SetRelativeLocation(FVector(0, 0, 46));
	EncounterCharacterVolume->SetRelativeScale3D(FVector(4));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> temp_CraftBody(TEXT("/Game/3_SM/CraftingTable/Meshes/SM_CraftingTable2"));
	if (temp_CraftBody.Succeeded())
	{
		CraftTableBody->SetStaticMesh(temp_CraftBody.Object);
	}

}

void ACraftTable::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACraftTable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACraftTable::OnBeginOverlap_EncounterVolume(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	VRPlayer = Cast<AVRPlayer>(OtherActor);
	if (VRPlayer != nullptr)
	{
		bIsInCharacter = true;
		// Widget Visibility On
	}
}

void ACraftTable::OnEndOverlap_EncounterVolume(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	bIsInCharacter = false;
	// Widget Visibility Off
}

void ACraftTable::OnBeginOverlap_ItemVolume(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Resource = Cast<AItemBase>(OtherActor);
	if (Resource != nullptr)
	{
		FName ResourceName = Resource->objectName;
		if (ResourceName == TEXT("Metal"))
		{
			CurrentNum_Metal++;
			CheckRecipe_Inductor();
		}
		else if (ResourceName == TEXT("Plastic"))
		{
			CurrentNum_Plastic++;
			CheckRecipe_Inductor();
		}
	}
}

void ACraftTable::CheckRecipe_Inductor()
{
	if (CurrentNum_Metal == RequiredNum_Metal && CurrentNum_Plastic == RequiredNum_Plastic)
	{
		Resource->Destroy();
		//Spawn Actor
		UE_LOG(LogTemp, Log, TEXT("Recipe Checked! Ready for make Object"));
		//Destroy Widget;
	}
	else
	{
		Resource->Destroy();
	}
}

