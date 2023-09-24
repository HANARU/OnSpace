// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRMRFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOculusXRMR_Settings;
class USceneComponent;
#ifdef OCULUSXRMR_OculusXRMRFunctionLibrary_generated_h
#error "OculusXRMRFunctionLibrary.generated.h already included, missing '#pragma once' in OculusXRMRFunctionLibrary.h"
#endif
#define OCULUSXRMR_OculusXRMRFunctionLibrary_generated_h

#define FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h_20_SPARSE_DATA
#define FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsMrcActive); \
	DECLARE_FUNCTION(execIsMrcEnabled); \
	DECLARE_FUNCTION(execSetMrcScalingFactor); \
	DECLARE_FUNCTION(execGetMrcScalingFactor); \
	DECLARE_FUNCTION(execSetTrackingReferenceComponent); \
	DECLARE_FUNCTION(execGetTrackingReferenceComponent); \
	DECLARE_FUNCTION(execGetOculusXRMRSettings);


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsMrcActive); \
	DECLARE_FUNCTION(execIsMrcEnabled); \
	DECLARE_FUNCTION(execSetMrcScalingFactor); \
	DECLARE_FUNCTION(execGetMrcScalingFactor); \
	DECLARE_FUNCTION(execSetTrackingReferenceComponent); \
	DECLARE_FUNCTION(execGetTrackingReferenceComponent); \
	DECLARE_FUNCTION(execGetOculusXRMRSettings);


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h_20_ACCESSORS
#define FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRMRFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOculusXRMRFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UOculusXRMRFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRMR"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRMRFunctionLibrary)


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUOculusXRMRFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOculusXRMRFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UOculusXRMRFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRMR"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRMRFunctionLibrary)


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRMRFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRMRFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRMRFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRMRFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusXRMRFunctionLibrary(UOculusXRMRFunctionLibrary&&); \
	NO_API UOculusXRMRFunctionLibrary(const UOculusXRMRFunctionLibrary&); \
public: \
	NO_API virtual ~UOculusXRMRFunctionLibrary();


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRMRFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusXRMRFunctionLibrary(UOculusXRMRFunctionLibrary&&); \
	NO_API UOculusXRMRFunctionLibrary(const UOculusXRMRFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRMRFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRMRFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRMRFunctionLibrary) \
	NO_API virtual ~UOculusXRMRFunctionLibrary();


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h_17_PROLOG
#define FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h_20_SPARSE_DATA \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h_20_RPC_WRAPPERS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h_20_ACCESSORS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h_20_INCLASS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h_20_SPARSE_DATA \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h_20_ACCESSORS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h_20_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OculusXRMRFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSXRMR_API UClass* StaticClass<class UOculusXRMRFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_OculusXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
