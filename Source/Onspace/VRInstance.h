#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "VRInstance.generated.h"

struct FItemData;
class UDataTable;

UCLASS()
class ONSPACE_API UVRInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UVRInstance();

	FItemData* GetItemData(FString ItemName);

private:
	UDataTable* ItemDataTable;
	
};
