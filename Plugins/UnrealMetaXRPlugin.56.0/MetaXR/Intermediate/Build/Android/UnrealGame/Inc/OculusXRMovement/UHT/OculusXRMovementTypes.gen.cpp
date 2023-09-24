// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRMovement/Public/OculusXRMovementTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRMovementTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	OCULUSXRMOVEMENT_API UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID();
	OCULUSXRMOVEMENT_API UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXREye();
	OCULUSXRMOVEMENT_API UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceConfidence();
	OCULUSXRMOVEMENT_API UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression();
	OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRBodyJoint();
	OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRBodyState();
	OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXREyeGazesState();
	OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXREyeGazeState();
	OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRFaceState();
	UPackage* Z_Construct_UPackage__Script_OculusXRMovement();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRBoneID;
	static UEnum* EOculusXRBoneID_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRBoneID.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRBoneID.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(), TEXT("EOculusXRBoneID"));
		}
		return Z_Registration_Info_UEnum_EOculusXRBoneID.OuterSingleton;
	}
	template<> OCULUSXRMOVEMENT_API UEnum* StaticEnum<EOculusXRBoneID>()
	{
		return EOculusXRBoneID_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID_Statics::Enumerators[] = {
		{ "EOculusXRBoneID::BodyRoot", (int64)EOculusXRBoneID::BodyRoot },
		{ "EOculusXRBoneID::BodyHips", (int64)EOculusXRBoneID::BodyHips },
		{ "EOculusXRBoneID::BodySpineLower", (int64)EOculusXRBoneID::BodySpineLower },
		{ "EOculusXRBoneID::BodySpineMiddle", (int64)EOculusXRBoneID::BodySpineMiddle },
		{ "EOculusXRBoneID::BodySpineUpper", (int64)EOculusXRBoneID::BodySpineUpper },
		{ "EOculusXRBoneID::BodyChest", (int64)EOculusXRBoneID::BodyChest },
		{ "EOculusXRBoneID::BodyNeck", (int64)EOculusXRBoneID::BodyNeck },
		{ "EOculusXRBoneID::BodyHead", (int64)EOculusXRBoneID::BodyHead },
		{ "EOculusXRBoneID::BodyLeftShoulder", (int64)EOculusXRBoneID::BodyLeftShoulder },
		{ "EOculusXRBoneID::BodyLeftScapula", (int64)EOculusXRBoneID::BodyLeftScapula },
		{ "EOculusXRBoneID::BodyLeftArmUpper", (int64)EOculusXRBoneID::BodyLeftArmUpper },
		{ "EOculusXRBoneID::BodyLeftArmLower", (int64)EOculusXRBoneID::BodyLeftArmLower },
		{ "EOculusXRBoneID::BodyLeftHandWristTwist", (int64)EOculusXRBoneID::BodyLeftHandWristTwist },
		{ "EOculusXRBoneID::BodyRightShoulder", (int64)EOculusXRBoneID::BodyRightShoulder },
		{ "EOculusXRBoneID::BodyRightScapula", (int64)EOculusXRBoneID::BodyRightScapula },
		{ "EOculusXRBoneID::BodyRightArmUpper", (int64)EOculusXRBoneID::BodyRightArmUpper },
		{ "EOculusXRBoneID::BodyRightArmLower", (int64)EOculusXRBoneID::BodyRightArmLower },
		{ "EOculusXRBoneID::BodyRightHandWristTwist", (int64)EOculusXRBoneID::BodyRightHandWristTwist },
		{ "EOculusXRBoneID::BodyLeftHandPalm", (int64)EOculusXRBoneID::BodyLeftHandPalm },
		{ "EOculusXRBoneID::BodyLeftHandWrist", (int64)EOculusXRBoneID::BodyLeftHandWrist },
		{ "EOculusXRBoneID::BodyLeftHandThumbMetacarpal", (int64)EOculusXRBoneID::BodyLeftHandThumbMetacarpal },
		{ "EOculusXRBoneID::BodyLeftHandThumbProximal", (int64)EOculusXRBoneID::BodyLeftHandThumbProximal },
		{ "EOculusXRBoneID::BodyLeftHandThumbDistal", (int64)EOculusXRBoneID::BodyLeftHandThumbDistal },
		{ "EOculusXRBoneID::BodyLeftHandThumbTip", (int64)EOculusXRBoneID::BodyLeftHandThumbTip },
		{ "EOculusXRBoneID::BodyLeftHandIndexMetacarpal", (int64)EOculusXRBoneID::BodyLeftHandIndexMetacarpal },
		{ "EOculusXRBoneID::BodyLeftHandIndexProximal", (int64)EOculusXRBoneID::BodyLeftHandIndexProximal },
		{ "EOculusXRBoneID::BodyLeftHandIndexIntermediate", (int64)EOculusXRBoneID::BodyLeftHandIndexIntermediate },
		{ "EOculusXRBoneID::BodyLeftHandIndexDistal", (int64)EOculusXRBoneID::BodyLeftHandIndexDistal },
		{ "EOculusXRBoneID::BodyLeftHandIndexTip", (int64)EOculusXRBoneID::BodyLeftHandIndexTip },
		{ "EOculusXRBoneID::BodyLeftHandMiddleMetacarpal", (int64)EOculusXRBoneID::BodyLeftHandMiddleMetacarpal },
		{ "EOculusXRBoneID::BodyLeftHandMiddleProximal", (int64)EOculusXRBoneID::BodyLeftHandMiddleProximal },
		{ "EOculusXRBoneID::BodyLeftHandMiddleIntermediate", (int64)EOculusXRBoneID::BodyLeftHandMiddleIntermediate },
		{ "EOculusXRBoneID::BodyLeftHandMiddleDistal", (int64)EOculusXRBoneID::BodyLeftHandMiddleDistal },
		{ "EOculusXRBoneID::BodyLeftHandMiddleTip", (int64)EOculusXRBoneID::BodyLeftHandMiddleTip },
		{ "EOculusXRBoneID::BodyLeftHandRingMetacarpal", (int64)EOculusXRBoneID::BodyLeftHandRingMetacarpal },
		{ "EOculusXRBoneID::BodyLeftHandRingProximal", (int64)EOculusXRBoneID::BodyLeftHandRingProximal },
		{ "EOculusXRBoneID::BodyLeftHandRingIntermediate", (int64)EOculusXRBoneID::BodyLeftHandRingIntermediate },
		{ "EOculusXRBoneID::BodyLeftHandRingDistal", (int64)EOculusXRBoneID::BodyLeftHandRingDistal },
		{ "EOculusXRBoneID::BodyLeftHandRingTip", (int64)EOculusXRBoneID::BodyLeftHandRingTip },
		{ "EOculusXRBoneID::BodyLeftHandLittleMetacarpal", (int64)EOculusXRBoneID::BodyLeftHandLittleMetacarpal },
		{ "EOculusXRBoneID::BodyLeftHandLittleProximal", (int64)EOculusXRBoneID::BodyLeftHandLittleProximal },
		{ "EOculusXRBoneID::BodyLeftHandLittleIntermediate", (int64)EOculusXRBoneID::BodyLeftHandLittleIntermediate },
		{ "EOculusXRBoneID::BodyLeftHandLittleDistal", (int64)EOculusXRBoneID::BodyLeftHandLittleDistal },
		{ "EOculusXRBoneID::BodyLeftHandLittleTip", (int64)EOculusXRBoneID::BodyLeftHandLittleTip },
		{ "EOculusXRBoneID::BodyRightHandPalm", (int64)EOculusXRBoneID::BodyRightHandPalm },
		{ "EOculusXRBoneID::BodyRightHandWrist", (int64)EOculusXRBoneID::BodyRightHandWrist },
		{ "EOculusXRBoneID::BodyRightHandThumbMetacarpal", (int64)EOculusXRBoneID::BodyRightHandThumbMetacarpal },
		{ "EOculusXRBoneID::BodyRightHandThumbProximal", (int64)EOculusXRBoneID::BodyRightHandThumbProximal },
		{ "EOculusXRBoneID::BodyRightHandThumbDistal", (int64)EOculusXRBoneID::BodyRightHandThumbDistal },
		{ "EOculusXRBoneID::BodyRightHandThumbTip", (int64)EOculusXRBoneID::BodyRightHandThumbTip },
		{ "EOculusXRBoneID::BodyRightHandIndexMetacarpal", (int64)EOculusXRBoneID::BodyRightHandIndexMetacarpal },
		{ "EOculusXRBoneID::BodyRightHandIndexProximal", (int64)EOculusXRBoneID::BodyRightHandIndexProximal },
		{ "EOculusXRBoneID::BodyRightHandIndexIntermediate", (int64)EOculusXRBoneID::BodyRightHandIndexIntermediate },
		{ "EOculusXRBoneID::BodyRightHandIndexDistal", (int64)EOculusXRBoneID::BodyRightHandIndexDistal },
		{ "EOculusXRBoneID::BodyRightHandIndexTip", (int64)EOculusXRBoneID::BodyRightHandIndexTip },
		{ "EOculusXRBoneID::BodyRightHandMiddleMetacarpal", (int64)EOculusXRBoneID::BodyRightHandMiddleMetacarpal },
		{ "EOculusXRBoneID::BodyRightHandMiddleProximal", (int64)EOculusXRBoneID::BodyRightHandMiddleProximal },
		{ "EOculusXRBoneID::BodyRightHandMiddleIntermediate", (int64)EOculusXRBoneID::BodyRightHandMiddleIntermediate },
		{ "EOculusXRBoneID::BodyRightHandMiddleDistal", (int64)EOculusXRBoneID::BodyRightHandMiddleDistal },
		{ "EOculusXRBoneID::BodyRightHandMiddleTip", (int64)EOculusXRBoneID::BodyRightHandMiddleTip },
		{ "EOculusXRBoneID::BodyRightHandRingMetacarpal", (int64)EOculusXRBoneID::BodyRightHandRingMetacarpal },
		{ "EOculusXRBoneID::BodyRightHandRingProximal", (int64)EOculusXRBoneID::BodyRightHandRingProximal },
		{ "EOculusXRBoneID::BodyRightHandRingIntermediate", (int64)EOculusXRBoneID::BodyRightHandRingIntermediate },
		{ "EOculusXRBoneID::BodyRightHandRingDistal", (int64)EOculusXRBoneID::BodyRightHandRingDistal },
		{ "EOculusXRBoneID::BodyRightHandRingTip", (int64)EOculusXRBoneID::BodyRightHandRingTip },
		{ "EOculusXRBoneID::BodyRightHandLittleMetacarpal", (int64)EOculusXRBoneID::BodyRightHandLittleMetacarpal },
		{ "EOculusXRBoneID::BodyRightHandLittleProximal", (int64)EOculusXRBoneID::BodyRightHandLittleProximal },
		{ "EOculusXRBoneID::BodyRightHandLittleIntermediate", (int64)EOculusXRBoneID::BodyRightHandLittleIntermediate },
		{ "EOculusXRBoneID::BodyRightHandLittleDistal", (int64)EOculusXRBoneID::BodyRightHandLittleDistal },
		{ "EOculusXRBoneID::BodyRightHandLittleTip", (int64)EOculusXRBoneID::BodyRightHandLittleTip },
		{ "EOculusXRBoneID::COUNT", (int64)EOculusXRBoneID::COUNT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BodyChest.Name", "EOculusXRBoneID::BodyChest" },
		{ "BodyHead.Name", "EOculusXRBoneID::BodyHead" },
		{ "BodyHips.Name", "EOculusXRBoneID::BodyHips" },
		{ "BodyLeftArmLower.Name", "EOculusXRBoneID::BodyLeftArmLower" },
		{ "BodyLeftArmUpper.Name", "EOculusXRBoneID::BodyLeftArmUpper" },
		{ "BodyLeftHandIndexDistal.Name", "EOculusXRBoneID::BodyLeftHandIndexDistal" },
		{ "BodyLeftHandIndexIntermediate.Name", "EOculusXRBoneID::BodyLeftHandIndexIntermediate" },
		{ "BodyLeftHandIndexMetacarpal.Name", "EOculusXRBoneID::BodyLeftHandIndexMetacarpal" },
		{ "BodyLeftHandIndexProximal.Name", "EOculusXRBoneID::BodyLeftHandIndexProximal" },
		{ "BodyLeftHandIndexTip.Name", "EOculusXRBoneID::BodyLeftHandIndexTip" },
		{ "BodyLeftHandLittleDistal.Name", "EOculusXRBoneID::BodyLeftHandLittleDistal" },
		{ "BodyLeftHandLittleIntermediate.Name", "EOculusXRBoneID::BodyLeftHandLittleIntermediate" },
		{ "BodyLeftHandLittleMetacarpal.Name", "EOculusXRBoneID::BodyLeftHandLittleMetacarpal" },
		{ "BodyLeftHandLittleProximal.Name", "EOculusXRBoneID::BodyLeftHandLittleProximal" },
		{ "BodyLeftHandLittleTip.Name", "EOculusXRBoneID::BodyLeftHandLittleTip" },
		{ "BodyLeftHandMiddleDistal.Name", "EOculusXRBoneID::BodyLeftHandMiddleDistal" },
		{ "BodyLeftHandMiddleIntermediate.Name", "EOculusXRBoneID::BodyLeftHandMiddleIntermediate" },
		{ "BodyLeftHandMiddleMetacarpal.Name", "EOculusXRBoneID::BodyLeftHandMiddleMetacarpal" },
		{ "BodyLeftHandMiddleProximal.Name", "EOculusXRBoneID::BodyLeftHandMiddleProximal" },
		{ "BodyLeftHandMiddleTip.Name", "EOculusXRBoneID::BodyLeftHandMiddleTip" },
		{ "BodyLeftHandPalm.Name", "EOculusXRBoneID::BodyLeftHandPalm" },
		{ "BodyLeftHandRingDistal.Name", "EOculusXRBoneID::BodyLeftHandRingDistal" },
		{ "BodyLeftHandRingIntermediate.Name", "EOculusXRBoneID::BodyLeftHandRingIntermediate" },
		{ "BodyLeftHandRingMetacarpal.Name", "EOculusXRBoneID::BodyLeftHandRingMetacarpal" },
		{ "BodyLeftHandRingProximal.Name", "EOculusXRBoneID::BodyLeftHandRingProximal" },
		{ "BodyLeftHandRingTip.Name", "EOculusXRBoneID::BodyLeftHandRingTip" },
		{ "BodyLeftHandThumbDistal.Name", "EOculusXRBoneID::BodyLeftHandThumbDistal" },
		{ "BodyLeftHandThumbMetacarpal.Name", "EOculusXRBoneID::BodyLeftHandThumbMetacarpal" },
		{ "BodyLeftHandThumbProximal.Name", "EOculusXRBoneID::BodyLeftHandThumbProximal" },
		{ "BodyLeftHandThumbTip.Name", "EOculusXRBoneID::BodyLeftHandThumbTip" },
		{ "BodyLeftHandWrist.Name", "EOculusXRBoneID::BodyLeftHandWrist" },
		{ "BodyLeftHandWristTwist.Name", "EOculusXRBoneID::BodyLeftHandWristTwist" },
		{ "BodyLeftScapula.Name", "EOculusXRBoneID::BodyLeftScapula" },
		{ "BodyLeftShoulder.Name", "EOculusXRBoneID::BodyLeftShoulder" },
		{ "BodyNeck.Name", "EOculusXRBoneID::BodyNeck" },
		{ "BodyRightArmLower.Name", "EOculusXRBoneID::BodyRightArmLower" },
		{ "BodyRightArmUpper.Name", "EOculusXRBoneID::BodyRightArmUpper" },
		{ "BodyRightHandIndexDistal.Name", "EOculusXRBoneID::BodyRightHandIndexDistal" },
		{ "BodyRightHandIndexIntermediate.Name", "EOculusXRBoneID::BodyRightHandIndexIntermediate" },
		{ "BodyRightHandIndexMetacarpal.Name", "EOculusXRBoneID::BodyRightHandIndexMetacarpal" },
		{ "BodyRightHandIndexProximal.Name", "EOculusXRBoneID::BodyRightHandIndexProximal" },
		{ "BodyRightHandIndexTip.Name", "EOculusXRBoneID::BodyRightHandIndexTip" },
		{ "BodyRightHandLittleDistal.Name", "EOculusXRBoneID::BodyRightHandLittleDistal" },
		{ "BodyRightHandLittleIntermediate.Name", "EOculusXRBoneID::BodyRightHandLittleIntermediate" },
		{ "BodyRightHandLittleMetacarpal.Name", "EOculusXRBoneID::BodyRightHandLittleMetacarpal" },
		{ "BodyRightHandLittleProximal.Name", "EOculusXRBoneID::BodyRightHandLittleProximal" },
		{ "BodyRightHandLittleTip.Name", "EOculusXRBoneID::BodyRightHandLittleTip" },
		{ "BodyRightHandMiddleDistal.Name", "EOculusXRBoneID::BodyRightHandMiddleDistal" },
		{ "BodyRightHandMiddleIntermediate.Name", "EOculusXRBoneID::BodyRightHandMiddleIntermediate" },
		{ "BodyRightHandMiddleMetacarpal.Name", "EOculusXRBoneID::BodyRightHandMiddleMetacarpal" },
		{ "BodyRightHandMiddleProximal.Name", "EOculusXRBoneID::BodyRightHandMiddleProximal" },
		{ "BodyRightHandMiddleTip.Name", "EOculusXRBoneID::BodyRightHandMiddleTip" },
		{ "BodyRightHandPalm.Name", "EOculusXRBoneID::BodyRightHandPalm" },
		{ "BodyRightHandRingDistal.Name", "EOculusXRBoneID::BodyRightHandRingDistal" },
		{ "BodyRightHandRingIntermediate.Name", "EOculusXRBoneID::BodyRightHandRingIntermediate" },
		{ "BodyRightHandRingMetacarpal.Name", "EOculusXRBoneID::BodyRightHandRingMetacarpal" },
		{ "BodyRightHandRingProximal.Name", "EOculusXRBoneID::BodyRightHandRingProximal" },
		{ "BodyRightHandRingTip.Name", "EOculusXRBoneID::BodyRightHandRingTip" },
		{ "BodyRightHandThumbDistal.Name", "EOculusXRBoneID::BodyRightHandThumbDistal" },
		{ "BodyRightHandThumbMetacarpal.Name", "EOculusXRBoneID::BodyRightHandThumbMetacarpal" },
		{ "BodyRightHandThumbProximal.Name", "EOculusXRBoneID::BodyRightHandThumbProximal" },
		{ "BodyRightHandThumbTip.Name", "EOculusXRBoneID::BodyRightHandThumbTip" },
		{ "BodyRightHandWrist.Name", "EOculusXRBoneID::BodyRightHandWrist" },
		{ "BodyRightHandWristTwist.Name", "EOculusXRBoneID::BodyRightHandWristTwist" },
		{ "BodyRightScapula.Name", "EOculusXRBoneID::BodyRightScapula" },
		{ "BodyRightShoulder.Name", "EOculusXRBoneID::BodyRightShoulder" },
		{ "BodyRoot.Name", "EOculusXRBoneID::BodyRoot" },
		{ "BodySpineLower.Name", "EOculusXRBoneID::BodySpineLower" },
		{ "BodySpineMiddle.Name", "EOculusXRBoneID::BodySpineMiddle" },
		{ "BodySpineUpper.Name", "EOculusXRBoneID::BodySpineUpper" },
		{ "COUNT.Hidden", "" },
		{ "COUNT.Name", "EOculusXRBoneID::COUNT" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRMovement,
		nullptr,
		"EOculusXRBoneID",
		"EOculusXRBoneID",
		Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRBoneID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRBoneID.InnerSingleton, Z_Construct_UEnum_OculusXRMovement_EOculusXRBoneID_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRBoneID.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OculusXRBodyJoint;
class UScriptStruct* FOculusXRBodyJoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OculusXRBodyJoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OculusXRBodyJoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRBodyJoint, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(), TEXT("OculusXRBodyJoint"));
	}
	return Z_Registration_Info_UScriptStruct_OculusXRBodyJoint.OuterSingleton;
}
template<> OCULUSXRMOVEMENT_API UScriptStruct* StaticStruct<FOculusXRBodyJoint>()
{
	return FOculusXRBodyJoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[];
#endif
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRBodyJoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewProp_bIsValid_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((FOculusXRBodyJoint*)Obj)->bIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOculusXRBodyJoint), &Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewProp_bIsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewProp_bIsValid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOculusXRBodyJoint, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOculusXRBodyJoint, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewProp_Position_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewProp_bIsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewProp_Position,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRMovement,
		nullptr,
		&NewStructOps,
		"OculusXRBodyJoint",
		sizeof(FOculusXRBodyJoint),
		alignof(FOculusXRBodyJoint),
		Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOculusXRBodyJoint()
	{
		if (!Z_Registration_Info_UScriptStruct_OculusXRBodyJoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OculusXRBodyJoint.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OculusXRBodyJoint.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OculusXRBodyState;
class UScriptStruct* FOculusXRBodyState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OculusXRBodyState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OculusXRBodyState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRBodyState, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(), TEXT("OculusXRBodyState"));
	}
	return Z_Registration_Info_UScriptStruct_OculusXRBodyState.OuterSingleton;
}
template<> OCULUSXRMOVEMENT_API UScriptStruct* StaticStruct<FOculusXRBodyState>()
{
	return FOculusXRBodyState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOculusXRBodyState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsActive_MetaData[];
#endif
		static void NewProp_IsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Confidence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Confidence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonChangedCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SkeletonChangedCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Joints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Joints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Joints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRBodyState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_IsActive_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_IsActive_SetBit(void* Obj)
	{
		((FOculusXRBodyState*)Obj)->IsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_IsActive = { "IsActive", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOculusXRBodyState), &Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_IsActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_IsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_IsActive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_Confidence_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_Confidence = { "Confidence", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOculusXRBodyState, Confidence), METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_Confidence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_Confidence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_SkeletonChangedCount_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_SkeletonChangedCount = { "SkeletonChangedCount", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOculusXRBodyState, SkeletonChangedCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_SkeletonChangedCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_SkeletonChangedCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOculusXRBodyState, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_Time_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_Joints_Inner = { "Joints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOculusXRBodyJoint, METADATA_PARAMS(nullptr, 0) }; // 1122351891
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_Joints_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_Joints = { "Joints", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOculusXRBodyState, Joints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_Joints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_Joints_MetaData)) }; // 1122351891
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_IsActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_Confidence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_SkeletonChangedCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_Joints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewProp_Joints,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRMovement,
		nullptr,
		&NewStructOps,
		"OculusXRBodyState",
		sizeof(FOculusXRBodyState),
		alignof(FOculusXRBodyState),
		Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOculusXRBodyState()
	{
		if (!Z_Registration_Info_UScriptStruct_OculusXRBodyState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OculusXRBodyState.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OculusXRBodyState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRFaceExpression;
	static UEnum* EOculusXRFaceExpression_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRFaceExpression.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRFaceExpression.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(), TEXT("EOculusXRFaceExpression"));
		}
		return Z_Registration_Info_UEnum_EOculusXRFaceExpression.OuterSingleton;
	}
	template<> OCULUSXRMOVEMENT_API UEnum* StaticEnum<EOculusXRFaceExpression>()
	{
		return EOculusXRFaceExpression_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression_Statics::Enumerators[] = {
		{ "EOculusXRFaceExpression::BrowLowererL", (int64)EOculusXRFaceExpression::BrowLowererL },
		{ "EOculusXRFaceExpression::BrowLowererR", (int64)EOculusXRFaceExpression::BrowLowererR },
		{ "EOculusXRFaceExpression::CheekPuffL", (int64)EOculusXRFaceExpression::CheekPuffL },
		{ "EOculusXRFaceExpression::CheekPuffR", (int64)EOculusXRFaceExpression::CheekPuffR },
		{ "EOculusXRFaceExpression::CheekRaiserL", (int64)EOculusXRFaceExpression::CheekRaiserL },
		{ "EOculusXRFaceExpression::CheekRaiserR", (int64)EOculusXRFaceExpression::CheekRaiserR },
		{ "EOculusXRFaceExpression::CheekSuckL", (int64)EOculusXRFaceExpression::CheekSuckL },
		{ "EOculusXRFaceExpression::CheekSuckR", (int64)EOculusXRFaceExpression::CheekSuckR },
		{ "EOculusXRFaceExpression::ChinRaiserB", (int64)EOculusXRFaceExpression::ChinRaiserB },
		{ "EOculusXRFaceExpression::ChinRaiserT", (int64)EOculusXRFaceExpression::ChinRaiserT },
		{ "EOculusXRFaceExpression::DimplerL", (int64)EOculusXRFaceExpression::DimplerL },
		{ "EOculusXRFaceExpression::DimplerR", (int64)EOculusXRFaceExpression::DimplerR },
		{ "EOculusXRFaceExpression::EyesClosedL", (int64)EOculusXRFaceExpression::EyesClosedL },
		{ "EOculusXRFaceExpression::EyesClosedR", (int64)EOculusXRFaceExpression::EyesClosedR },
		{ "EOculusXRFaceExpression::EyesLookDownL", (int64)EOculusXRFaceExpression::EyesLookDownL },
		{ "EOculusXRFaceExpression::EyesLookDownR", (int64)EOculusXRFaceExpression::EyesLookDownR },
		{ "EOculusXRFaceExpression::EyesLookLeftL", (int64)EOculusXRFaceExpression::EyesLookLeftL },
		{ "EOculusXRFaceExpression::EyesLookLeftR", (int64)EOculusXRFaceExpression::EyesLookLeftR },
		{ "EOculusXRFaceExpression::EyesLookRightL", (int64)EOculusXRFaceExpression::EyesLookRightL },
		{ "EOculusXRFaceExpression::EyesLookRightR", (int64)EOculusXRFaceExpression::EyesLookRightR },
		{ "EOculusXRFaceExpression::EyesLookUpL", (int64)EOculusXRFaceExpression::EyesLookUpL },
		{ "EOculusXRFaceExpression::EyesLookUpR", (int64)EOculusXRFaceExpression::EyesLookUpR },
		{ "EOculusXRFaceExpression::InnerBrowRaiserL", (int64)EOculusXRFaceExpression::InnerBrowRaiserL },
		{ "EOculusXRFaceExpression::InnerBrowRaiserR", (int64)EOculusXRFaceExpression::InnerBrowRaiserR },
		{ "EOculusXRFaceExpression::JawDrop", (int64)EOculusXRFaceExpression::JawDrop },
		{ "EOculusXRFaceExpression::JawSidewaysLeft", (int64)EOculusXRFaceExpression::JawSidewaysLeft },
		{ "EOculusXRFaceExpression::JawSidewaysRight", (int64)EOculusXRFaceExpression::JawSidewaysRight },
		{ "EOculusXRFaceExpression::JawThrust", (int64)EOculusXRFaceExpression::JawThrust },
		{ "EOculusXRFaceExpression::LidTightenerL", (int64)EOculusXRFaceExpression::LidTightenerL },
		{ "EOculusXRFaceExpression::LidTightenerR", (int64)EOculusXRFaceExpression::LidTightenerR },
		{ "EOculusXRFaceExpression::LipCornerDepressorL", (int64)EOculusXRFaceExpression::LipCornerDepressorL },
		{ "EOculusXRFaceExpression::LipCornerDepressorR", (int64)EOculusXRFaceExpression::LipCornerDepressorR },
		{ "EOculusXRFaceExpression::LipCornerPullerL", (int64)EOculusXRFaceExpression::LipCornerPullerL },
		{ "EOculusXRFaceExpression::LipCornerPullerR", (int64)EOculusXRFaceExpression::LipCornerPullerR },
		{ "EOculusXRFaceExpression::LipFunnelerLB", (int64)EOculusXRFaceExpression::LipFunnelerLB },
		{ "EOculusXRFaceExpression::LipFunnelerLT", (int64)EOculusXRFaceExpression::LipFunnelerLT },
		{ "EOculusXRFaceExpression::LipFunnelerRB", (int64)EOculusXRFaceExpression::LipFunnelerRB },
		{ "EOculusXRFaceExpression::LipFunnelerRT", (int64)EOculusXRFaceExpression::LipFunnelerRT },
		{ "EOculusXRFaceExpression::LipPressorL", (int64)EOculusXRFaceExpression::LipPressorL },
		{ "EOculusXRFaceExpression::LipPressorR", (int64)EOculusXRFaceExpression::LipPressorR },
		{ "EOculusXRFaceExpression::LipPuckerL", (int64)EOculusXRFaceExpression::LipPuckerL },
		{ "EOculusXRFaceExpression::LipPuckerR", (int64)EOculusXRFaceExpression::LipPuckerR },
		{ "EOculusXRFaceExpression::LipStretcherL", (int64)EOculusXRFaceExpression::LipStretcherL },
		{ "EOculusXRFaceExpression::LipStretcherR", (int64)EOculusXRFaceExpression::LipStretcherR },
		{ "EOculusXRFaceExpression::LipSuckLB", (int64)EOculusXRFaceExpression::LipSuckLB },
		{ "EOculusXRFaceExpression::LipSuckLT", (int64)EOculusXRFaceExpression::LipSuckLT },
		{ "EOculusXRFaceExpression::LipSuckRB", (int64)EOculusXRFaceExpression::LipSuckRB },
		{ "EOculusXRFaceExpression::LipSuckRT", (int64)EOculusXRFaceExpression::LipSuckRT },
		{ "EOculusXRFaceExpression::LipTightenerL", (int64)EOculusXRFaceExpression::LipTightenerL },
		{ "EOculusXRFaceExpression::LipTightenerR", (int64)EOculusXRFaceExpression::LipTightenerR },
		{ "EOculusXRFaceExpression::LipsToward", (int64)EOculusXRFaceExpression::LipsToward },
		{ "EOculusXRFaceExpression::LowerLipDepressorL", (int64)EOculusXRFaceExpression::LowerLipDepressorL },
		{ "EOculusXRFaceExpression::LowerLipDepressorR", (int64)EOculusXRFaceExpression::LowerLipDepressorR },
		{ "EOculusXRFaceExpression::MouthLeft", (int64)EOculusXRFaceExpression::MouthLeft },
		{ "EOculusXRFaceExpression::MouthRight", (int64)EOculusXRFaceExpression::MouthRight },
		{ "EOculusXRFaceExpression::NoseWrinklerL", (int64)EOculusXRFaceExpression::NoseWrinklerL },
		{ "EOculusXRFaceExpression::NoseWrinklerR", (int64)EOculusXRFaceExpression::NoseWrinklerR },
		{ "EOculusXRFaceExpression::OuterBrowRaiserL", (int64)EOculusXRFaceExpression::OuterBrowRaiserL },
		{ "EOculusXRFaceExpression::OuterBrowRaiserR", (int64)EOculusXRFaceExpression::OuterBrowRaiserR },
		{ "EOculusXRFaceExpression::UpperLidRaiserL", (int64)EOculusXRFaceExpression::UpperLidRaiserL },
		{ "EOculusXRFaceExpression::UpperLidRaiserR", (int64)EOculusXRFaceExpression::UpperLidRaiserR },
		{ "EOculusXRFaceExpression::UpperLipRaiserL", (int64)EOculusXRFaceExpression::UpperLipRaiserL },
		{ "EOculusXRFaceExpression::UpperLipRaiserR", (int64)EOculusXRFaceExpression::UpperLipRaiserR },
		{ "EOculusXRFaceExpression::COUNT", (int64)EOculusXRFaceExpression::COUNT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BrowLowererL.Comment", "// Removed invalid to make this supported as a uint8 enum class\n" },
		{ "BrowLowererL.Name", "EOculusXRFaceExpression::BrowLowererL" },
		{ "BrowLowererL.ToolTip", "Removed invalid to make this supported as a uint8 enum class" },
		{ "BrowLowererR.Name", "EOculusXRFaceExpression::BrowLowererR" },
		{ "CheekPuffL.Name", "EOculusXRFaceExpression::CheekPuffL" },
		{ "CheekPuffR.Name", "EOculusXRFaceExpression::CheekPuffR" },
		{ "CheekRaiserL.Name", "EOculusXRFaceExpression::CheekRaiserL" },
		{ "CheekRaiserR.Name", "EOculusXRFaceExpression::CheekRaiserR" },
		{ "CheekSuckL.Name", "EOculusXRFaceExpression::CheekSuckL" },
		{ "CheekSuckR.Name", "EOculusXRFaceExpression::CheekSuckR" },
		{ "ChinRaiserB.Name", "EOculusXRFaceExpression::ChinRaiserB" },
		{ "ChinRaiserT.Name", "EOculusXRFaceExpression::ChinRaiserT" },
		{ "COUNT.Hidden", "" },
		{ "COUNT.Name", "EOculusXRFaceExpression::COUNT" },
		{ "DimplerL.Name", "EOculusXRFaceExpression::DimplerL" },
		{ "DimplerR.Name", "EOculusXRFaceExpression::DimplerR" },
		{ "EyesClosedL.Name", "EOculusXRFaceExpression::EyesClosedL" },
		{ "EyesClosedR.Name", "EOculusXRFaceExpression::EyesClosedR" },
		{ "EyesLookDownL.Name", "EOculusXRFaceExpression::EyesLookDownL" },
		{ "EyesLookDownR.Name", "EOculusXRFaceExpression::EyesLookDownR" },
		{ "EyesLookLeftL.Name", "EOculusXRFaceExpression::EyesLookLeftL" },
		{ "EyesLookLeftR.Name", "EOculusXRFaceExpression::EyesLookLeftR" },
		{ "EyesLookRightL.Name", "EOculusXRFaceExpression::EyesLookRightL" },
		{ "EyesLookRightR.Name", "EOculusXRFaceExpression::EyesLookRightR" },
		{ "EyesLookUpL.Name", "EOculusXRFaceExpression::EyesLookUpL" },
		{ "EyesLookUpR.Name", "EOculusXRFaceExpression::EyesLookUpR" },
		{ "InnerBrowRaiserL.Name", "EOculusXRFaceExpression::InnerBrowRaiserL" },
		{ "InnerBrowRaiserR.Name", "EOculusXRFaceExpression::InnerBrowRaiserR" },
		{ "JawDrop.Name", "EOculusXRFaceExpression::JawDrop" },
		{ "JawSidewaysLeft.Name", "EOculusXRFaceExpression::JawSidewaysLeft" },
		{ "JawSidewaysRight.Name", "EOculusXRFaceExpression::JawSidewaysRight" },
		{ "JawThrust.Name", "EOculusXRFaceExpression::JawThrust" },
		{ "LidTightenerL.Name", "EOculusXRFaceExpression::LidTightenerL" },
		{ "LidTightenerR.Name", "EOculusXRFaceExpression::LidTightenerR" },
		{ "LipCornerDepressorL.Name", "EOculusXRFaceExpression::LipCornerDepressorL" },
		{ "LipCornerDepressorR.Name", "EOculusXRFaceExpression::LipCornerDepressorR" },
		{ "LipCornerPullerL.Name", "EOculusXRFaceExpression::LipCornerPullerL" },
		{ "LipCornerPullerR.Name", "EOculusXRFaceExpression::LipCornerPullerR" },
		{ "LipFunnelerLB.Name", "EOculusXRFaceExpression::LipFunnelerLB" },
		{ "LipFunnelerLT.Name", "EOculusXRFaceExpression::LipFunnelerLT" },
		{ "LipFunnelerRB.Name", "EOculusXRFaceExpression::LipFunnelerRB" },
		{ "LipFunnelerRT.Name", "EOculusXRFaceExpression::LipFunnelerRT" },
		{ "LipPressorL.Name", "EOculusXRFaceExpression::LipPressorL" },
		{ "LipPressorR.Name", "EOculusXRFaceExpression::LipPressorR" },
		{ "LipPuckerL.Name", "EOculusXRFaceExpression::LipPuckerL" },
		{ "LipPuckerR.Name", "EOculusXRFaceExpression::LipPuckerR" },
		{ "LipsToward.Name", "EOculusXRFaceExpression::LipsToward" },
		{ "LipStretcherL.Name", "EOculusXRFaceExpression::LipStretcherL" },
		{ "LipStretcherR.Name", "EOculusXRFaceExpression::LipStretcherR" },
		{ "LipSuckLB.Name", "EOculusXRFaceExpression::LipSuckLB" },
		{ "LipSuckLT.Name", "EOculusXRFaceExpression::LipSuckLT" },
		{ "LipSuckRB.Name", "EOculusXRFaceExpression::LipSuckRB" },
		{ "LipSuckRT.Name", "EOculusXRFaceExpression::LipSuckRT" },
		{ "LipTightenerL.Name", "EOculusXRFaceExpression::LipTightenerL" },
		{ "LipTightenerR.Name", "EOculusXRFaceExpression::LipTightenerR" },
		{ "LowerLipDepressorL.Name", "EOculusXRFaceExpression::LowerLipDepressorL" },
		{ "LowerLipDepressorR.Name", "EOculusXRFaceExpression::LowerLipDepressorR" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
		{ "MouthLeft.Name", "EOculusXRFaceExpression::MouthLeft" },
		{ "MouthRight.Name", "EOculusXRFaceExpression::MouthRight" },
		{ "NoseWrinklerL.Name", "EOculusXRFaceExpression::NoseWrinklerL" },
		{ "NoseWrinklerR.Name", "EOculusXRFaceExpression::NoseWrinklerR" },
		{ "OuterBrowRaiserL.Name", "EOculusXRFaceExpression::OuterBrowRaiserL" },
		{ "OuterBrowRaiserR.Name", "EOculusXRFaceExpression::OuterBrowRaiserR" },
		{ "UpperLidRaiserL.Name", "EOculusXRFaceExpression::UpperLidRaiserL" },
		{ "UpperLidRaiserR.Name", "EOculusXRFaceExpression::UpperLidRaiserR" },
		{ "UpperLipRaiserL.Name", "EOculusXRFaceExpression::UpperLipRaiserL" },
		{ "UpperLipRaiserR.Name", "EOculusXRFaceExpression::UpperLipRaiserR" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRMovement,
		nullptr,
		"EOculusXRFaceExpression",
		"EOculusXRFaceExpression",
		Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRFaceExpression.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRFaceExpression.InnerSingleton, Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceExpression_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRFaceExpression.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRFaceConfidence;
	static UEnum* EOculusXRFaceConfidence_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRFaceConfidence.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXRFaceConfidence.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceConfidence, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(), TEXT("EOculusXRFaceConfidence"));
		}
		return Z_Registration_Info_UEnum_EOculusXRFaceConfidence.OuterSingleton;
	}
	template<> OCULUSXRMOVEMENT_API UEnum* StaticEnum<EOculusXRFaceConfidence>()
	{
		return EOculusXRFaceConfidence_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceConfidence_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceConfidence_Statics::Enumerators[] = {
		{ "EOculusXRFaceConfidence::Lower", (int64)EOculusXRFaceConfidence::Lower },
		{ "EOculusXRFaceConfidence::Upper", (int64)EOculusXRFaceConfidence::Upper },
		{ "EOculusXRFaceConfidence::COUNT", (int64)EOculusXRFaceConfidence::COUNT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceConfidence_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "COUNT.Name", "EOculusXRFaceConfidence::COUNT" },
		{ "Lower.Name", "EOculusXRFaceConfidence::Lower" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
		{ "Upper.Name", "EOculusXRFaceConfidence::Upper" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceConfidence_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRMovement,
		nullptr,
		"EOculusXRFaceConfidence",
		"EOculusXRFaceConfidence",
		Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceConfidence_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceConfidence_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceConfidence_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceConfidence_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceConfidence()
	{
		if (!Z_Registration_Info_UEnum_EOculusXRFaceConfidence.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRFaceConfidence.InnerSingleton, Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceConfidence_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXRFaceConfidence.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OculusXRFaceState;
class UScriptStruct* FOculusXRFaceState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OculusXRFaceState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OculusXRFaceState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRFaceState, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(), TEXT("OculusXRFaceState"));
	}
	return Z_Registration_Info_UScriptStruct_OculusXRFaceState.OuterSingleton;
}
template<> OCULUSXRMOVEMENT_API UScriptStruct* StaticStruct<FOculusXRFaceState>()
{
	return FOculusXRFaceState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOculusXRFaceState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpressionWeights_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionWeights_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExpressionWeights;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpressionWeightConfidences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionWeightConfidences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExpressionWeightConfidences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[];
#endif
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEyeFollowingBlendshapesValid_MetaData[];
#endif
		static void NewProp_bIsEyeFollowingBlendshapesValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEyeFollowingBlendshapesValid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRFaceState>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_ExpressionWeights_Inner = { "ExpressionWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_ExpressionWeights_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_ExpressionWeights = { "ExpressionWeights", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOculusXRFaceState, ExpressionWeights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_ExpressionWeights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_ExpressionWeights_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_ExpressionWeightConfidences_Inner = { "ExpressionWeightConfidences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_ExpressionWeightConfidences_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_ExpressionWeightConfidences = { "ExpressionWeightConfidences", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOculusXRFaceState, ExpressionWeightConfidences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_ExpressionWeightConfidences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_ExpressionWeightConfidences_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_bIsValid_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((FOculusXRFaceState*)Obj)->bIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOculusXRFaceState), &Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_bIsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_bIsValid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_bIsEyeFollowingBlendshapesValid_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_bIsEyeFollowingBlendshapesValid_SetBit(void* Obj)
	{
		((FOculusXRFaceState*)Obj)->bIsEyeFollowingBlendshapesValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_bIsEyeFollowingBlendshapesValid = { "bIsEyeFollowingBlendshapesValid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOculusXRFaceState), &Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_bIsEyeFollowingBlendshapesValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_bIsEyeFollowingBlendshapesValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_bIsEyeFollowingBlendshapesValid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOculusXRFaceState, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_Time_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_ExpressionWeights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_ExpressionWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_ExpressionWeightConfidences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_ExpressionWeightConfidences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_bIsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_bIsEyeFollowingBlendshapesValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewProp_Time,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRMovement,
		nullptr,
		&NewStructOps,
		"OculusXRFaceState",
		sizeof(FOculusXRFaceState),
		alignof(FOculusXRFaceState),
		Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOculusXRFaceState()
	{
		if (!Z_Registration_Info_UScriptStruct_OculusXRFaceState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OculusXRFaceState.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OculusXRFaceState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXREye;
	static UEnum* EOculusXREye_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXREye.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXREye.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRMovement_EOculusXREye, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(), TEXT("EOculusXREye"));
		}
		return Z_Registration_Info_UEnum_EOculusXREye.OuterSingleton;
	}
	template<> OCULUSXRMOVEMENT_API UEnum* StaticEnum<EOculusXREye>()
	{
		return EOculusXREye_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRMovement_EOculusXREye_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRMovement_EOculusXREye_Statics::Enumerators[] = {
		{ "EOculusXREye::Left", (int64)EOculusXREye::Left },
		{ "EOculusXREye::Right", (int64)EOculusXREye::Right },
		{ "EOculusXREye::COUNT", (int64)EOculusXREye::COUNT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRMovement_EOculusXREye_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "COUNT.Name", "EOculusXREye::COUNT" },
		{ "Left.Name", "EOculusXREye::Left" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
		{ "Right.Name", "EOculusXREye::Right" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRMovement_EOculusXREye_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRMovement,
		nullptr,
		"EOculusXREye",
		"EOculusXREye",
		Z_Construct_UEnum_OculusXRMovement_EOculusXREye_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRMovement_EOculusXREye_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusXRMovement_EOculusXREye_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRMovement_EOculusXREye_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXREye()
	{
		if (!Z_Registration_Info_UEnum_EOculusXREye.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXREye.InnerSingleton, Z_Construct_UEnum_OculusXRMovement_EOculusXREye_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXREye.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OculusXREyeGazeState;
class UScriptStruct* FOculusXREyeGazeState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OculusXREyeGazeState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OculusXREyeGazeState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXREyeGazeState, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(), TEXT("OculusXREyeGazeState"));
	}
	return Z_Registration_Info_UScriptStruct_OculusXREyeGazeState.OuterSingleton;
}
template<> OCULUSXRMOVEMENT_API UScriptStruct* StaticStruct<FOculusXREyeGazeState>()
{
	return FOculusXREyeGazeState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Confidence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Confidence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[];
#endif
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXREyeGazeState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOculusXREyeGazeState, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOculusXREyeGazeState, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_Confidence_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_Confidence = { "Confidence", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOculusXREyeGazeState, Confidence), METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_Confidence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_Confidence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_bIsValid_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((FOculusXREyeGazeState*)Obj)->bIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOculusXREyeGazeState), &Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_bIsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_bIsValid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_Confidence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewProp_bIsValid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRMovement,
		nullptr,
		&NewStructOps,
		"OculusXREyeGazeState",
		sizeof(FOculusXREyeGazeState),
		alignof(FOculusXREyeGazeState),
		Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOculusXREyeGazeState()
	{
		if (!Z_Registration_Info_UScriptStruct_OculusXREyeGazeState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OculusXREyeGazeState.InnerSingleton, Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OculusXREyeGazeState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OculusXREyeGazesState;
class UScriptStruct* FOculusXREyeGazesState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OculusXREyeGazesState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OculusXREyeGazesState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXREyeGazesState, (UObject*)Z_Construct_UPackage__Script_OculusXRMovement(), TEXT("OculusXREyeGazesState"));
	}
	return Z_Registration_Info_UScriptStruct_OculusXREyeGazesState.OuterSingleton;
}
template<> OCULUSXRMOVEMENT_API UScriptStruct* StaticStruct<FOculusXREyeGazesState>()
{
	return FOculusXREyeGazesState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_EyeGazes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EyeGazes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EyeGazes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXREyeGazesState>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::NewProp_EyeGazes_Inner = { "EyeGazes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOculusXREyeGazeState, METADATA_PARAMS(nullptr, 0) }; // 1817118256
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::NewProp_EyeGazes_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::NewProp_EyeGazes = { "EyeGazes", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOculusXREyeGazesState, EyeGazes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::NewProp_EyeGazes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::NewProp_EyeGazes_MetaData)) }; // 1817118256
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
		{ "ModuleRelativePath", "Public/OculusXRMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOculusXREyeGazesState, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::NewProp_Time_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::NewProp_EyeGazes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::NewProp_EyeGazes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::NewProp_Time,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRMovement,
		nullptr,
		&NewStructOps,
		"OculusXREyeGazesState",
		sizeof(FOculusXREyeGazesState),
		alignof(FOculusXREyeGazesState),
		Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOculusXREyeGazesState()
	{
		if (!Z_Registration_Info_UScriptStruct_OculusXREyeGazesState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OculusXREyeGazesState.InnerSingleton, Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OculusXREyeGazesState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMovement_Public_OculusXRMovementTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMovement_Public_OculusXRMovementTypes_h_Statics::EnumInfo[] = {
		{ EOculusXRBoneID_StaticEnum, TEXT("EOculusXRBoneID"), &Z_Registration_Info_UEnum_EOculusXRBoneID, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3797901638U) },
		{ EOculusXRFaceExpression_StaticEnum, TEXT("EOculusXRFaceExpression"), &Z_Registration_Info_UEnum_EOculusXRFaceExpression, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 69168608U) },
		{ EOculusXRFaceConfidence_StaticEnum, TEXT("EOculusXRFaceConfidence"), &Z_Registration_Info_UEnum_EOculusXRFaceConfidence, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2638816902U) },
		{ EOculusXREye_StaticEnum, TEXT("EOculusXREye"), &Z_Registration_Info_UEnum_EOculusXREye, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1929079946U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMovement_Public_OculusXRMovementTypes_h_Statics::ScriptStructInfo[] = {
		{ FOculusXRBodyJoint::StaticStruct, Z_Construct_UScriptStruct_FOculusXRBodyJoint_Statics::NewStructOps, TEXT("OculusXRBodyJoint"), &Z_Registration_Info_UScriptStruct_OculusXRBodyJoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRBodyJoint), 1122351891U) },
		{ FOculusXRBodyState::StaticStruct, Z_Construct_UScriptStruct_FOculusXRBodyState_Statics::NewStructOps, TEXT("OculusXRBodyState"), &Z_Registration_Info_UScriptStruct_OculusXRBodyState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRBodyState), 705770934U) },
		{ FOculusXRFaceState::StaticStruct, Z_Construct_UScriptStruct_FOculusXRFaceState_Statics::NewStructOps, TEXT("OculusXRFaceState"), &Z_Registration_Info_UScriptStruct_OculusXRFaceState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRFaceState), 4157654954U) },
		{ FOculusXREyeGazeState::StaticStruct, Z_Construct_UScriptStruct_FOculusXREyeGazeState_Statics::NewStructOps, TEXT("OculusXREyeGazeState"), &Z_Registration_Info_UScriptStruct_OculusXREyeGazeState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXREyeGazeState), 1817118256U) },
		{ FOculusXREyeGazesState::StaticStruct, Z_Construct_UScriptStruct_FOculusXREyeGazesState_Statics::NewStructOps, TEXT("OculusXREyeGazesState"), &Z_Registration_Info_UScriptStruct_OculusXREyeGazesState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXREyeGazesState), 796182243U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMovement_Public_OculusXRMovementTypes_h_3428229534(TEXT("/Script/OculusXRMovement"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMovement_Public_OculusXRMovementTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMovement_Public_OculusXRMovementTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMovement_Public_OculusXRMovementTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OculusXR_Source_OculusXRMovement_Public_OculusXRMovementTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
