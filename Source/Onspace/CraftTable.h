#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CraftTable.generated.h"

UCLASS()
class ONSPACE_API ACraftTable : public AActor
{
	GENERATED_BODY()
	
public:	
	ACraftTable();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Craft")
	class UStaticMeshComponent* CraftTableBody;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Craft")
	class UBoxComponent* ItemOverlapVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Craft")
	class UBoxComponent* EncounterCharacterVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Craft")
	class USceneComponent* SpawnItemPoint;

	UPROPERTY(EditAnywhere, Category = "Sound")
	class USoundBase* ObjectInput;

	UPROPERTY(EditAnywhere, Category = "Sound")
	class UAudioComponent* ObjectInputSound;

	UPROPERTY(EditAnywhere, Category = "Sound")
	class USoundBase* CraftSuccess;

	UPROPERTY(EditAnywhere, Category = "Sound")
	class UAudioComponent* CraftSuccessSound;

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Craft")
	class UUserWidget* Widget;*/

	bool bIsInCharacter = false;

	uint16 CurrentNum_Metal = 0;
	uint16 RequiredNum_Metal = 2;
	uint16 CurrentNum_Plastic = 0;
	uint16 RequiredNum_Plastic = 2;
	uint16 CurrentNum_Electronic = 0;
	uint16 RequiredNum_Electronic = 1;

	UPROPERTY(VisibleAnywhere, Category = "Craft")
	class AVRPlayer* VRPlayer;

	class AItemBase* Resource;


protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

public:
	UFUNCTION()
	void OnBeginOverlap_EncounterVolume(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnEndOverlap_EncounterVolume(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION()
	void OnBeginOverlap_ItemVolume(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	void CheckRecipe_Inductor();

	UFUNCTION(BlueprintNativeEvent)
	void MakeInductor();

};
