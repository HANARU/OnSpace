// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRAnchorComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EOculusXRSpaceStorageLocation : uint8;
struct FOculusXRUInt64;
struct FOculusXRUUID;
#ifdef OCULUSXRANCHORS_OculusXRAnchorComponent_generated_h
#error "OculusXRAnchorComponent.generated.h already included, missing '#pragma once' in OculusXRAnchorComponent.h"
#endif
#define OCULUSXRANCHORS_OculusXRAnchorComponent_generated_h

#define FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h_18_SPARSE_DATA
#define FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsSaved); \
	DECLARE_FUNCTION(execIsStoredAtLocation); \
	DECLARE_FUNCTION(execGetUUID); \
	DECLARE_FUNCTION(execHasValidHandle); \
	DECLARE_FUNCTION(execSetHandle); \
	DECLARE_FUNCTION(execGetHandle);


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsSaved); \
	DECLARE_FUNCTION(execIsStoredAtLocation); \
	DECLARE_FUNCTION(execGetUUID); \
	DECLARE_FUNCTION(execHasValidHandle); \
	DECLARE_FUNCTION(execSetHandle); \
	DECLARE_FUNCTION(execGetHandle);


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h_18_ACCESSORS
#define FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRAnchorComponent(); \
	friend struct Z_Construct_UClass_UOculusXRAnchorComponent_Statics; \
public: \
	DECLARE_CLASS(UOculusXRAnchorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRAnchorComponent)


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUOculusXRAnchorComponent(); \
	friend struct Z_Construct_UClass_UOculusXRAnchorComponent_Statics; \
public: \
	DECLARE_CLASS(UOculusXRAnchorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRAnchorComponent)


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAnchorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAnchorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAnchorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAnchorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusXRAnchorComponent(UOculusXRAnchorComponent&&); \
	NO_API UOculusXRAnchorComponent(const UOculusXRAnchorComponent&); \
public: \
	NO_API virtual ~UOculusXRAnchorComponent();


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusXRAnchorComponent(UOculusXRAnchorComponent&&); \
	NO_API UOculusXRAnchorComponent(const UOculusXRAnchorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAnchorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAnchorComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAnchorComponent) \
	NO_API virtual ~UOculusXRAnchorComponent();


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h_15_PROLOG
#define FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h_18_SPARSE_DATA \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h_18_RPC_WRAPPERS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h_18_ACCESSORS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h_18_INCLASS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h_18_SPARSE_DATA \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h_18_ACCESSORS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSXRANCHORS_API UClass* StaticClass<class UOculusXRAnchorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_OculusXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
