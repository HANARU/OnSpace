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

	ItemOverlapVolume->OnComponentBeginOverlap.AddDynamic(this, &ACraftTable::OnBeginOverlap_ItemVolume);
	
	
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
			/*GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Yellow, TEXT("Metal Overlap"));
			UE_LOG(LogTemp, Log, TEXT("Metal Overlap"));*/
			CheckRecipe_Inductor();
		}
		else if (ResourceName == TEXT("Plastic"))
		{
			CurrentNum_Plastic++;
			/*GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Yellow, TEXT("Plastic Overlap"));
			UE_LOG(LogTemp, Log, TEXT("Plastic Overlap"));*/
			CheckRecipe_Inductor();
		}
		else if (ResourceName == TEXT("Electronic"))
		{
			CurrentNum_Electronic++;
			CheckRecipe_Inductor();
		}
	}
}

void ACraftTable::CheckRecipe_Inductor()
{
	if (CurrentNum_Metal == RequiredNum_Metal && CurrentNum_Plastic == RequiredNum_Plastic && CurrentNum_Electronic == RequiredNum_Electronic)
	{
		Resource->Destroy();
		//Spawn Actor
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Yellow, TEXT("Recipe Checked! Ready for make Object"));
		UE_LOG(LogTemp, Log, TEXT("Recipe Checked! Ready for make Object"));
		MakeInductor();
		//Destroy Widget;
	}
	else
	{
		Resource->Destroy();
	}
}

void ACraftTable::MakeInductor_Implementation()
{
}

