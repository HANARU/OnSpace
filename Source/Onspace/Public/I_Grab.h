// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "I_Grab.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UI_Grab : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ONSPACE_API II_Grab
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
	
public:
	virtual void Grab(class UMotionControllerComponent* MotionController) =0;
	virtual void Release(class UMotionControllerComponent* MotionController) = 0;
	virtual bool Active() = 0;
};
