// Fill out your copyright notice in the Description page of Project Settings.

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
	// Sets default values for this character's properties
	AVRPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
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

	
	
	/*-------------- ENHANCED INPUT ------------- */
	//Context
	UPROPERTY(VisibleAnywhere,Category = "Input", meta = (AllowPrivateAccess = "true"))
	class UInputMappingContext* DefaultContext;
	
	//Actions
	UPROPERTY(VisibleAnywhere,Category = "Input", meta = (AllowPrivateAccess = "true"))
	class UInputAction* IA_Move;
	
	UPROPERTY(VisibleAnywhere,Category = "Input", meta = (AllowPrivateAccess = "true"))
	class UInputAction* IA_FlyValue;

	UPROPERTY(VisibleAnywhere,Category = "Input", meta = (AllowPrivateAccess = "true"))
	class UInputAction* IA_Grab_Left;

	//Bind Fuction
	UFUNCTION(Category="Input", meta = (AllowPrivateAccess = "true"))
	void Move(const FInputActionValue& value);
	
	UFUNCTION(Category="Input", meta = (AllowPrivateAccess = "true"))
	void FlyValue(const FInputActionValue& value);

	UFUNCTION(Category="Input", meta = (AllowPrivateAccess = "true"))
	void Grab_Left_Started(const FInputActionValue& value);

	UFUNCTION(Category="Input", meta = (AllowPrivateAccess = "true"))
	void Grab_Left_Closed(const FInputActionValue& value);
// 	UPROPERTY(VisibleAnywhere,Category = "Input", meta = (AllowPrivateAccess = "true"))
// 	class UInputAction* ;




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
	float SphereRadius =10.0f;
	UPROPERTY()
	class AActor* GrabLeftActor;

};
