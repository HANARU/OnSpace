#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Public/I_Grab.h"
#include "Engine/DataTable.h"
#include "ItemBase.generated.h"

USTRUCT(BlueprintType)
struct FItemData : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ItemData)
	FString ItemName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "ItemMesh"))
	TObjectPtr<UStaticMesh> ItemMesh;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Eatable"))
	bool CanEat;
};



UCLASS()
class ONSPACE_API AItemBase : public AActor, public II_Grab
{
	GENERATED_BODY()
	
public:	
	AItemBase();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	class UStaticMeshComponent* ItemBody;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	class UMotionControllerComponent* MotionController;

	bool bHasGravity = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	FName objectName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
	bool CanEatThis;

	FItemData* CurrentItemData;
	UDataTable* CurrentItemTable;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Grab(class UMotionControllerComponent* MotionControllerToGrab) override;
	virtual void Release(class UMotionControllerComponent* MotionControllerToRelease) override;
	virtual bool Active() override;

	void ExecuteGrab(UMotionControllerComponent* MotionControllerToGrab);

	void ExecuteRelease(UMotionControllerComponent* MotionControllerToRelease);

	UFUNCTION()
	void OnItemBodyBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnBeginOverlap_CanEat(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
