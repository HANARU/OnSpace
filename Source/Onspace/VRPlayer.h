#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "VRPlayer.generated.h"

UCLASS()
class ONSPACE_API AVRPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	AVRPlayer();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	/*----------Components---------------*/
	//카메라
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="MySettings|Components")
	class UCameraComponent* compCam;

	//Body mesh
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MySettings|Components")
	class USkeletalMeshComponent* compSkeletal;

	//모션 컨트롤러 좌
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MySettings|Components")
	class UMotionControllerComponent* motionControllerLeft;

	//손 위치 트래킹할 arrow comp (좌)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MySettings|Components")
	class UArrowComponent* arrowLeft;

	//모션 컨트롤러 우
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MySettings|Components")
	class UMotionControllerComponent* motionControllerRight;

	//손 위치 트래킹할 arrow comp (우)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MySettings|Components")
	class UArrowComponent* arrowRight;

	//Sphere Collision - Oxygen UI Location
	UPROPERTY(EditAnywhere, Category="MySettings|Components")
	class USphereComponent* Sphere;
	
	UPROPERTY(EditAnywhere, Category = "Grab")
	class AGrabGravityActor* GrabGravityActor;
	
	//InventoryComp
	UPROPERTY(EditAnywhere, Category = "Inventory")
	class UInventoryComponent* InventoryComponent1;
	
	UPROPERTY(EditAnywhere, Category = "Inventory")
	class UInventoryComponent* InventoryComponent2;

	//Widget Left
	UPROPERTY(EditAnywhere, Category = "Widget")
	class USceneComponent* LeftWidgetPart;

	UPROPERTY(EditAnywhere, Category = "Widget")
	class UArrowComponent* LeftWidget_Dir;

	UPROPERTY(EditAnywhere, Category = "Widget")
	class UStaticMeshComponent* LeftWidget_Border;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widget")
	class UWidgetComponent* LeftWidget_Text;


	UPROPERTY(EditAnywhere, Category = "Widget")
	TSubclassOf<class UUserWidget> LeftWidgetClass;

	//Widget Right


	/*-------------- ENHANCED INPUT ------------- */
	//Context
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	class UInputMappingContext* DefaultContext;
	
	//Actions
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	class UInputAction* IA_Move;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	class UInputAction* IA_FlyValue;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	class UInputAction* IA_Grab_Left;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	class UInputAction* IA_Grab_Right;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	class UInputAction* IA_Fire_Right;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	class UInputAction* IA_Fire_Left;


	//Bind Fuction
	UFUNCTION(Category="Input", meta = (AllowPrivateAccess = "true"))
	void Move(const FInputActionValue& value);
	
	UFUNCTION(Category="Input", meta = (AllowPrivateAccess = "true"))
	void FlyValue(const FInputActionValue& value);

	UFUNCTION(Category="Input", meta = (AllowPrivateAccess = "true"))
	void Grab_Left_Started(const FInputActionValue& value);

	UFUNCTION(Category="Input", meta = (AllowPrivateAccess = "true"))
	void Grab_Left_Closed(const FInputActionValue& value);

	UFUNCTION(Category = "Input", meta = (AllowPrivateAccess = "true"))
	void Grab_Right_Started(const FInputActionValue& value);

	UFUNCTION(Category = "Input", meta = (AllowPrivateAccess = "true"))
	void Grab_Right_Closed(const FInputActionValue& value);
// 	UPROPERTY(VisibleAnywhere,Category = "Input", meta = (AllowPrivateAccess = "true"))
// 	class UInputAction* ;
	
	UFUNCTION(Category = "Input", meta = (AllowPrivateAccess = "true"))
	void Fire_Left_Started(const FInputActionValue& value);

	UFUNCTION(Category = "Input", meta = (AllowPrivateAccess = "true"))
	void Fire_Right_Started(const FInputActionValue& value);


	/*---------- For value save -------------*/
	//Character Move Component
	UPROPERTY()
	class UCharacterMovementComponent* cm;
	
	// Player Controller
	UPROPERTY()
	class APlayerController* pc;
	
	/*------------Variables-----------------*/
	UPROPERTY()
	float MovingParam = 0.5f;
	UPROPERTY()
	float FlyVal = 0.0f;

	UPROPERTY()
	FVector CurrentLocation;

	UPROPERTY()
	bool IsLookLeftHand = false;

	UPROPERTY()
	float SphereRadius =10.0f;
	UPROPERTY()
	class AActor* GrabLeftActor;
	UPROPERTY()
	class AActor* GrabRightActor;
	UPROPERTY(EditAnywhere, Category="MySetting")
	TSubclassOf<class ABlasterBullet> Bullet;

	bool bValidGrabGravityActor = false;

	/*------------Oxygen Values-----------------*/

	UPROPERTY(VisibleAnywhere, Category = "Oxygen", meta = (AllowPrivateAccess = "true"))
	float CurrentOxygen;

	UPROPERTY(VisibleAnywhere, Category = "Oxygen", meta = (AllowPrivateAccess = "true"))
	float MaximumOxygen = 240;

	UPROPERTY(VisibleAnywhere, Category = "Oxygen", meta = (AllowPrivateAccess = "true"))
	float OxygenValue;

	UPROPERTY(EditAnywhere, Category = "Oxygen", meta = (AllowPrivateAccess = "true"))
	bool OxygenChargeActivate = true;

	UPROPERTY(EditAnywhere, Category = "System")
	class UGaugeBase* OxygenGauge;

	FVector OxygenEnoughColor = FVector(0.066667, 0.211765, 0.294118);
	FVector OxygenLeakColor = FVector(0.913726, 0.070588, 0.094118);

	bool OxygenLeakSound = false;
	float OxygenLeak = 60;


	/*------  Sound  --------*/
	//Suffocation Sound
	UPROPERTY(EditAnywhere, Category = "Sound")
	class USoundBase* Suffocation;

	//Suffocation Sound Comp
	UPROPERTY(EditAnywhere, Category = "Sound")
	class UAudioComponent* SuffocationSound;
	bool PlaySuffocation = false;

	//Warning Sound
	UPROPERTY(EditAnywhere, Category = "Sound")
	class USoundBase* OxygenWarning;

	//Warning Sound Comp
	UPROPERTY(EditAnywhere, Category = "Sound")
	class UAudioComponent* WarningSound;

	UPROPERTY(EditAnywhere, Category = "Sound")
	class USoundBase* FireSoundBase;

	UPROPERTY(EditAnywhere, Category = "Sound")
	class UAudioComponent* FireSound;


	void CheckOxygenLeak();
	void CheckOxygenCharge();
	void IncreaseOxygen();
	void DecreaseOxygen();
	void CalculateOxygen(bool CurrentCondition);


	void ZeroGMovement(float DeltaTime);
	bool DetectLeftHandWidget();
};
