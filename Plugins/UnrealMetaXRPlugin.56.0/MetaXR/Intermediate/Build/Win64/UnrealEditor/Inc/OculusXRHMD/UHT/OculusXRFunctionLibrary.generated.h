// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
enum class EControllerHand : uint8;
enum class EOculusXRBoundaryType : uint8;
enum class EOculusXRColorSpace : uint8;
enum class EOculusXRControllerType : uint8;
enum class EOculusXRDeviceType : uint8;
enum class EOculusXREyeBufferSharpenType : uint8;
enum class EOculusXRFoveatedRenderingLevel : uint8;
enum class EOculusXRFoveatedRenderingMethod : uint8;
enum class EOculusXRProcessorPerformanceLevel : uint8;
enum class EOculusXRTrackedDeviceType : uint8;
struct FLinearColor;
struct FOculusXRGuardianTestResult;
struct FOculusXRHmdUserProfile;
#ifdef OCULUSXRHMD_OculusXRFunctionLibrary_generated_h
#error "OculusXRFunctionLibrary.generated.h already included, missing '#pragma once' in OculusXRFunctionLibrary.h"
#endif
#define OCULUSXRHMD_OculusXRFunctionLibrary_generated_h

#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRHMD_Public_OculusXRFunctionLibrary_h_19_SPARSE_DATA
#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRHMD_Public_OculusXRFunctionLibrary_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetGuardianVisibility); \
	DECLARE_FUNCTION(execGetNodeGuardianIntersection); \
	DECLARE_FUNCTION(execGetPointGuardianIntersection); \
	DECLARE_FUNCTION(execGetPlayAreaTransform); \
	DECLARE_FUNCTION(execGetGuardianDimensions); \
	DECLARE_FUNCTION(execGetGuardianPoints); \
	DECLARE_FUNCTION(execIsGuardianConfigured); \
	DECLARE_FUNCTION(execIsGuardianDisplayed); \
	DECLARE_FUNCTION(execIsPassthroughRecommended); \
	DECLARE_FUNCTION(execSetEyeBufferSharpenType); \
	DECLARE_FUNCTION(execIsColorPassthroughSupported); \
	DECLARE_FUNCTION(execIsPassthroughSupported); \
	DECLARE_FUNCTION(execSetLocalDimmingOn); \
	DECLARE_FUNCTION(execSetClientColorDesc); \
	DECLARE_FUNCTION(execGetHmdColorDesc); \
	DECLARE_FUNCTION(execGetSystemHmd3DofModeEnabled); \
	DECLARE_FUNCTION(execSetColorScaleAndOffset); \
	DECLARE_FUNCTION(execEnableOrientationTracking); \
	DECLARE_FUNCTION(execEnablePositionTracking); \
	DECLARE_FUNCTION(execSetDisplayFrequency); \
	DECLARE_FUNCTION(execGetCurrentDisplayFrequency); \
	DECLARE_FUNCTION(execGetAvailableDisplayFrequencies); \
	DECLARE_FUNCTION(execGetControllerType); \
	DECLARE_FUNCTION(execGetDeviceType); \
	DECLARE_FUNCTION(execGetDeviceName); \
	DECLARE_FUNCTION(execGetEyeTrackedFoveatedRenderingSupported); \
	DECLARE_FUNCTION(execSetFoveatedRenderingLevel); \
	DECLARE_FUNCTION(execGetFoveatedRenderingLevel); \
	DECLARE_FUNCTION(execSetFoveatedRenderingMethod); \
	DECLARE_FUNCTION(execGetFoveatedRenderingMethod); \
	DECLARE_FUNCTION(execGetGPUFrameTime); \
	DECLARE_FUNCTION(execGetGPUUtilization); \
	DECLARE_FUNCTION(execHasSystemOverlayPresent); \
	DECLARE_FUNCTION(execHasInputFocus); \
	DECLARE_FUNCTION(execClearLoadingSplashScreens); \
	DECLARE_FUNCTION(execAddLoadingSplashScreen); \
	DECLARE_FUNCTION(execGetBaseRotationAndPositionOffset); \
	DECLARE_FUNCTION(execSetBaseRotationAndPositionOffset); \
	DECLARE_FUNCTION(execSetPositionScale3D); \
	DECLARE_FUNCTION(execGetBaseRotationAndBaseOffsetInMeters); \
	DECLARE_FUNCTION(execSetBaseRotationAndBaseOffsetInMeters); \
	DECLARE_FUNCTION(execGetUserProfile); \
	DECLARE_FUNCTION(execSetSuggestedCpuAndGpuPerformanceLevels); \
	DECLARE_FUNCTION(execGetSuggestedCpuAndGpuPerformanceLevels); \
	DECLARE_FUNCTION(execSetCPUAndGPULevels); \
	DECLARE_FUNCTION(execIsDeviceTracked); \
	DECLARE_FUNCTION(execGetRawSensorData); \
	DECLARE_FUNCTION(execGetPose);


#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRHMD_Public_OculusXRFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetGuardianVisibility); \
	DECLARE_FUNCTION(execGetNodeGuardianIntersection); \
	DECLARE_FUNCTION(execGetPointGuardianIntersection); \
	DECLARE_FUNCTION(execGetPlayAreaTransform); \
	DECLARE_FUNCTION(execGetGuardianDimensions); \
	DECLARE_FUNCTION(execGetGuardianPoints); \
	DECLARE_FUNCTION(execIsGuardianConfigured); \
	DECLARE_FUNCTION(execIsGuardianDisplayed); \
	DECLARE_FUNCTION(execIsPassthroughRecommended); \
	DECLARE_FUNCTION(execSetEyeBufferSharpenType); \
	DECLARE_FUNCTION(execIsColorPassthroughSupported); \
	DECLARE_FUNCTION(execIsPassthroughSupported); \
	DECLARE_FUNCTION(execSetLocalDimmingOn); \
	DECLARE_FUNCTION(execSetClientColorDesc); \
	DECLARE_FUNCTION(execGetHmdColorDesc); \
	DECLARE_FUNCTION(execGetSystemHmd3DofModeEnabled); \
	DECLARE_FUNCTION(execSetColorScaleAndOffset); \
	DECLARE_FUNCTION(execEnableOrientationTracking); \
	DECLARE_FUNCTION(execEnablePositionTracking); \
	DECLARE_FUNCTION(execSetDisplayFrequency); \
	DECLARE_FUNCTION(execGetCurrentDisplayFrequency); \
	DECLARE_FUNCTION(execGetAvailableDisplayFrequencies); \
	DECLARE_FUNCTION(execGetControllerType); \
	DECLARE_FUNCTION(execGetDeviceType); \
	DECLARE_FUNCTION(execGetDeviceName); \
	DECLARE_FUNCTION(execGetEyeTrackedFoveatedRenderingSupported); \
	DECLARE_FUNCTION(execSetFoveatedRenderingLevel); \
	DECLARE_FUNCTION(execGetFoveatedRenderingLevel); \
	DECLARE_FUNCTION(execSetFoveatedRenderingMethod); \
	DECLARE_FUNCTION(execGetFoveatedRenderingMethod); \
	DECLARE_FUNCTION(execGetGPUFrameTime); \
	DECLARE_FUNCTION(execGetGPUUtilization); \
	DECLARE_FUNCTION(execHasSystemOverlayPresent); \
	DECLARE_FUNCTION(execHasInputFocus); \
	DECLARE_FUNCTION(execClearLoadingSplashScreens); \
	DECLARE_FUNCTION(execAddLoadingSplashScreen); \
	DECLARE_FUNCTION(execGetBaseRotationAndPositionOffset); \
	DECLARE_FUNCTION(execSetBaseRotationAndPositionOffset); \
	DECLARE_FUNCTION(execSetPositionScale3D); \
	DECLARE_FUNCTION(execGetBaseRotationAndBaseOffsetInMeters); \
	DECLARE_FUNCTION(execSetBaseRotationAndBaseOffsetInMeters); \
	DECLARE_FUNCTION(execGetUserProfile); \
	DECLARE_FUNCTION(execSetSuggestedCpuAndGpuPerformanceLevels); \
	DECLARE_FUNCTION(execGetSuggestedCpuAndGpuPerformanceLevels); \
	DECLARE_FUNCTION(execSetCPUAndGPULevels); \
	DECLARE_FUNCTION(execIsDeviceTracked); \
	DECLARE_FUNCTION(execGetRawSensorData); \
	DECLARE_FUNCTION(execGetPose);


#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRHMD_Public_OculusXRFunctionLibrary_h_19_ACCESSORS
#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRHMD_Public_OculusXRFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOculusXRFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UOculusXRFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRHMD"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRFunctionLibrary)


#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRHMD_Public_OculusXRFunctionLibrary_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUOculusXRFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOculusXRFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UOculusXRFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRHMD"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRFunctionLibrary)


#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRHMD_Public_OculusXRFunctionLibrary_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusXRFunctionLibrary(UOculusXRFunctionLibrary&&); \
	NO_API UOculusXRFunctionLibrary(const UOculusXRFunctionLibrary&); \
public: \
	NO_API virtual ~UOculusXRFunctionLibrary();


#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRHMD_Public_OculusXRFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusXRFunctionLibrary(UOculusXRFunctionLibrary&&); \
	NO_API UOculusXRFunctionLibrary(const UOculusXRFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRFunctionLibrary) \
	NO_API virtual ~UOculusXRFunctionLibrary();


#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRHMD_Public_OculusXRFunctionLibrary_h_16_PROLOG
#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRHMD_Public_OculusXRFunctionLibrary_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRHMD_Public_OculusXRFunctionLibrary_h_19_SPARSE_DATA \
	FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRHMD_Public_OculusXRFunctionLibrary_h_19_RPC_WRAPPERS \
	FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRHMD_Public_OculusXRFunctionLibrary_h_19_ACCESSORS \
	FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRHMD_Public_OculusXRFunctionLibrary_h_19_INCLASS \
	FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRHMD_Public_OculusXRFunctionLibrary_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRHMD_Public_OculusXRFunctionLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRHMD_Public_OculusXRFunctionLibrary_h_19_SPARSE_DATA \
	FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRHMD_Public_OculusXRFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRHMD_Public_OculusXRFunctionLibrary_h_19_ACCESSORS \
	FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRHMD_Public_OculusXRFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRHMD_Public_OculusXRFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OculusXRFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSXRHMD_API UClass* StaticClass<class UOculusXRFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRHMD_Public_OculusXRFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
