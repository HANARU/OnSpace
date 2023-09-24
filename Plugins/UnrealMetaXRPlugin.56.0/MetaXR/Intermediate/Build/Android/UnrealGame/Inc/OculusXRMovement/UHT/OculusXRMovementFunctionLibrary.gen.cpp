// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRMovement/Public/OculusXRMovementFunctionLibrary.h"
#include "OculusXRMovement/Public/OculusXRMovementTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRMovementFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	OCULUSXRMOVEMENT_API UClass* Z_Construct_UClass_UOculusXRMovementFunctionLibrary();
	OCULUSXRMOVEMENT_API UClass* Z_Construct_UClass_UOculusXRMovementFunctionLibrary_NoRegister();
	OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRBodyState();
	OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXREyeGazesState();
	OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRFaceState();
	UPackage* Z_Construct_UPackage__Script_OculusXRMovement();
// End Cross Module References
	DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execStopEyeTracking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::StopEyeTracking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execStartEyeTracking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::StartEyeTracking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execIsEyeTrackingSupported)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::IsEyeTrackingSupported();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execIsEyeTrackingEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::IsEyeTrackingEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execTryGetEyeGazesState)
	{
		P_GET_STRUCT_REF(FOculusXREyeGazesState,Z_Param_Out_outEyeGazesState);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WorldToMeters);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::TryGetEyeGazesState(Z_Param_Out_outEyeGazesState,Z_Param_WorldToMeters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execStopFaceTracking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::StopFaceTracking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execStartFaceTracking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::StartFaceTracking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execIsFaceTrackingSupported)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::IsFaceTrackingSupported();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execIsFaceTrackingEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::IsFaceTrackingEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execTryGetFaceState)
	{
		P_GET_STRUCT_REF(FOculusXRFaceState,Z_Param_Out_outFaceState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::TryGetFaceState(Z_Param_Out_outFaceState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execStopBodyTracking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::StopBodyTracking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execStartBodyTracking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::StartBodyTracking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execIsBodyTrackingSupported)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::IsBodyTrackingSupported();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execIsBodyTrackingEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::IsBodyTrackingEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execTryGetBodyState)
	{
		P_GET_STRUCT_REF(FOculusXRBodyState,Z_Param_Out_outBodyState);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WorldToMeters);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::TryGetBodyState(Z_Param_Out_outBodyState,Z_Param_WorldToMeters);
		P_NATIVE_END;
	}
	void UOculusXRMovementFunctionLibrary::StaticRegisterNativesUOculusXRMovementFunctionLibrary()
	{
		UClass* Class = UOculusXRMovementFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsBodyTrackingEnabled", &UOculusXRMovementFunctionLibrary::execIsBodyTrackingEnabled },
			{ "IsBodyTrackingSupported", &UOculusXRMovementFunctionLibrary::execIsBodyTrackingSupported },
			{ "IsEyeTrackingEnabled", &UOculusXRMovementFunctionLibrary::execIsEyeTrackingEnabled },
			{ "IsEyeTrackingSupported", &UOculusXRMovementFunctionLibrary::execIsEyeTrackingSupported },
			{ "IsFaceTrackingEnabled", &UOculusXRMovementFunctionLibrary::execIsFaceTrackingEnabled },
			{ "IsFaceTrackingSupported", &UOculusXRMovementFunctionLibrary::execIsFaceTrackingSupported },
			{ "StartBodyTracking", &UOculusXRMovementFunctionLibrary::execStartBodyTracking },
			{ "StartEyeTracking", &UOculusXRMovementFunctionLibrary::execStartEyeTracking },
			{ "StartFaceTracking", &UOculusXRMovementFunctionLibrary::execStartFaceTracking },
			{ "StopBodyTracking", &UOculusXRMovementFunctionLibrary::execStopBodyTracking },
			{ "StopEyeTracking", &UOculusXRMovementFunctionLibrary::execStopEyeTracking },
			{ "StopFaceTracking", &UOculusXRMovementFunctionLibrary::execStopFaceTracking },
			{ "TryGetBodyState", &UOculusXRMovementFunctionLibrary::execTryGetBodyState },
			{ "TryGetEyeGazesState", &UOculusXRMovementFunctionLibrary::execTryGetEyeGazesState },
			{ "TryGetFaceState", &UOculusXRMovementFunctionLibrary::execTryGetFaceState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled_Statics
	{
		struct OculusXRMovementFunctionLibrary_eventIsBodyTrackingEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventIsBodyTrackingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventIsBodyTrackingEnabled_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Body" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "IsBodyTrackingEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled_Statics::OculusXRMovementFunctionLibrary_eventIsBodyTrackingEnabled_Parms), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported_Statics
	{
		struct OculusXRMovementFunctionLibrary_eventIsBodyTrackingSupported_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventIsBodyTrackingSupported_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventIsBodyTrackingSupported_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Body" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "IsBodyTrackingSupported", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported_Statics::OculusXRMovementFunctionLibrary_eventIsBodyTrackingSupported_Parms), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled_Statics
	{
		struct OculusXRMovementFunctionLibrary_eventIsEyeTrackingEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventIsEyeTrackingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventIsEyeTrackingEnabled_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Eyes" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "IsEyeTrackingEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled_Statics::OculusXRMovementFunctionLibrary_eventIsEyeTrackingEnabled_Parms), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported_Statics
	{
		struct OculusXRMovementFunctionLibrary_eventIsEyeTrackingSupported_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventIsEyeTrackingSupported_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventIsEyeTrackingSupported_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Eyes" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "IsEyeTrackingSupported", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported_Statics::OculusXRMovementFunctionLibrary_eventIsEyeTrackingSupported_Parms), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled_Statics
	{
		struct OculusXRMovementFunctionLibrary_eventIsFaceTrackingEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventIsFaceTrackingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventIsFaceTrackingEnabled_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Face" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "IsFaceTrackingEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled_Statics::OculusXRMovementFunctionLibrary_eventIsFaceTrackingEnabled_Parms), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported_Statics
	{
		struct OculusXRMovementFunctionLibrary_eventIsFaceTrackingSupported_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventIsFaceTrackingSupported_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventIsFaceTrackingSupported_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Face" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "IsFaceTrackingSupported", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported_Statics::OculusXRMovementFunctionLibrary_eventIsFaceTrackingSupported_Parms), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking_Statics
	{
		struct OculusXRMovementFunctionLibrary_eventStartBodyTracking_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventStartBodyTracking_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventStartBodyTracking_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Body" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "StartBodyTracking", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking_Statics::OculusXRMovementFunctionLibrary_eventStartBodyTracking_Parms), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking_Statics
	{
		struct OculusXRMovementFunctionLibrary_eventStartEyeTracking_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventStartEyeTracking_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventStartEyeTracking_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Eyes" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "StartEyeTracking", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking_Statics::OculusXRMovementFunctionLibrary_eventStartEyeTracking_Parms), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking_Statics
	{
		struct OculusXRMovementFunctionLibrary_eventStartFaceTracking_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventStartFaceTracking_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventStartFaceTracking_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Face" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "StartFaceTracking", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking_Statics::OculusXRMovementFunctionLibrary_eventStartFaceTracking_Parms), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking_Statics
	{
		struct OculusXRMovementFunctionLibrary_eventStopBodyTracking_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventStopBodyTracking_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventStopBodyTracking_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Body" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "StopBodyTracking", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking_Statics::OculusXRMovementFunctionLibrary_eventStopBodyTracking_Parms), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking_Statics
	{
		struct OculusXRMovementFunctionLibrary_eventStopEyeTracking_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventStopEyeTracking_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventStopEyeTracking_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Eyes" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "StopEyeTracking", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking_Statics::OculusXRMovementFunctionLibrary_eventStopEyeTracking_Parms), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking_Statics
	{
		struct OculusXRMovementFunctionLibrary_eventStopFaceTracking_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventStopFaceTracking_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventStopFaceTracking_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Face" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "StopFaceTracking", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking_Statics::OculusXRMovementFunctionLibrary_eventStopFaceTracking_Parms), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics
	{
		struct OculusXRMovementFunctionLibrary_eventTryGetBodyState_Parms
		{
			FOculusXRBodyState outBodyState;
			float WorldToMeters;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_outBodyState;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldToMeters;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics::NewProp_outBodyState = { "outBodyState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OculusXRMovementFunctionLibrary_eventTryGetBodyState_Parms, outBodyState), Z_Construct_UScriptStruct_FOculusXRBodyState, METADATA_PARAMS(nullptr, 0) }; // 705770934
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics::NewProp_WorldToMeters = { "WorldToMeters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OculusXRMovementFunctionLibrary_eventTryGetBodyState_Parms, WorldToMeters), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventTryGetBodyState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventTryGetBodyState_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics::NewProp_outBodyState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics::NewProp_WorldToMeters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Body" },
		{ "CPP_Default_WorldToMeters", "100.000000" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "TryGetBodyState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics::OculusXRMovementFunctionLibrary_eventTryGetBodyState_Parms), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics
	{
		struct OculusXRMovementFunctionLibrary_eventTryGetEyeGazesState_Parms
		{
			FOculusXREyeGazesState outEyeGazesState;
			float WorldToMeters;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_outEyeGazesState;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldToMeters;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics::NewProp_outEyeGazesState = { "outEyeGazesState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OculusXRMovementFunctionLibrary_eventTryGetEyeGazesState_Parms, outEyeGazesState), Z_Construct_UScriptStruct_FOculusXREyeGazesState, METADATA_PARAMS(nullptr, 0) }; // 796182243
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics::NewProp_WorldToMeters = { "WorldToMeters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OculusXRMovementFunctionLibrary_eventTryGetEyeGazesState_Parms, WorldToMeters), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventTryGetEyeGazesState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventTryGetEyeGazesState_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics::NewProp_outEyeGazesState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics::NewProp_WorldToMeters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Eyes" },
		{ "CPP_Default_WorldToMeters", "100.000000" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "TryGetEyeGazesState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics::OculusXRMovementFunctionLibrary_eventTryGetEyeGazesState_Parms), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState_Statics
	{
		struct OculusXRMovementFunctionLibrary_eventTryGetFaceState_Parms
		{
			FOculusXRFaceState outFaceState;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_outFaceState;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState_Statics::NewProp_outFaceState = { "outFaceState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OculusXRMovementFunctionLibrary_eventTryGetFaceState_Parms, outFaceState), Z_Construct_UScriptStruct_FOculusXRFaceState, METADATA_PARAMS(nullptr, 0) }; // 4157654954
	void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusXRMovementFunctionLibrary_eventTryGetFaceState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventTryGetFaceState_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState_Statics::NewProp_outFaceState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Face" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "TryGetFaceState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState_Statics::OculusXRMovementFunctionLibrary_eventTryGetFaceState_Parms), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRMovementFunctionLibrary);
	UClass* Z_Construct_UClass_UOculusXRMovementFunctionLibrary_NoRegister()
	{
		return UOculusXRMovementFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRMovementFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRMovementFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRMovement,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOculusXRMovementFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled, "IsBodyTrackingEnabled" }, // 2500996344
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported, "IsBodyTrackingSupported" }, // 919541499
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled, "IsEyeTrackingEnabled" }, // 3742639111
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported, "IsEyeTrackingSupported" }, // 2899568552
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled, "IsFaceTrackingEnabled" }, // 2050146410
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported, "IsFaceTrackingSupported" }, // 1089750578
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking, "StartBodyTracking" }, // 1461901899
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking, "StartEyeTracking" }, // 1983090742
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking, "StartFaceTracking" }, // 2681045361
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking, "StopBodyTracking" }, // 3578096374
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking, "StopEyeTracking" }, // 2114807545
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking, "StopFaceTracking" }, // 132926989
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState, "TryGetBodyState" }, // 644394801
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState, "TryGetEyeGazesState" }, // 515914805
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState, "TryGetFaceState" }, // 196776
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRMovementFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OculusXRMovementFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRMovementFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRMovementFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRMovementFunctionLibrary_Statics::ClassParams = {
		&UOculusXRMovementFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOculusXRMovementFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMovementFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOculusXRMovementFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UOculusXRMovementFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRMovementFunctionLibrary.OuterSingleton, Z_Construct_UClass_UOculusXRMovementFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRMovementFunctionLibrary.OuterSingleton;
	}
	template<> OCULUSXRMOVEMENT_API UClass* StaticClass<UOculusXRMovementFunctionLibrary>()
	{
		return UOculusXRMovementFunctionLibrary::StaticClass();
	}
	UOculusXRMovementFunctionLibrary::UOculusXRMovementFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRMovementFunctionLibrary);
	UOculusXRMovementFunctionLibrary::~UOculusXRMovementFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMovement_Public_OculusXRMovementFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMovement_Public_OculusXRMovementFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRMovementFunctionLibrary, UOculusXRMovementFunctionLibrary::StaticClass, TEXT("UOculusXRMovementFunctionLibrary"), &Z_Registration_Info_UClass_UOculusXRMovementFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRMovementFunctionLibrary), 1449830939U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMovement_Public_OculusXRMovementFunctionLibrary_h_3963912343(TEXT("/Script/OculusXRMovement"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMovement_Public_OculusXRMovementFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMovement_Public_OculusXRMovementFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
