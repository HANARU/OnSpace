#include "VRInstance.h"
#include "ItemBase.h"

UVRInstance::UVRInstance()
{
	FString DataTablePath = TEXT("/Script/Engine.DataTable'/Game/7_MISC/ItemDataTable.ItemDataTable'");

	static ConstructorHelpers::FObjectFinder<UDataTable> DT_ItemInfo(*DataTablePath);
	if (DT_ItemInfo.Succeeded())
	{
		ItemDataTable = DT_ItemInfo.Object;
	}
}

FItemData* UVRInstance::GetItemData(FString ItemName)
{
	return ItemDataTable->FindRow<FItemData>(*FString(ItemName), TEXT(""));
}
