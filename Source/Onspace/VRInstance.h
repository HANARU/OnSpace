#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Engine/DataTable.h"
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int MissionNum = 1;

	bool SecondMission = false;

	UFUNCTION(BlueprintNativeEvent)
	void UpdateMission();

	void Update2ndMission();
	UPROPERTY(EditAnywhere, Category = "Sound")
	class USoundBase* AchieveMission;

	UPROPERTY(EditAnywhere, Category = "Sound")
	class UAudioComponent* AchieveMissionSound;

private:
	UDataTable* ItemDataTable;

	
};
