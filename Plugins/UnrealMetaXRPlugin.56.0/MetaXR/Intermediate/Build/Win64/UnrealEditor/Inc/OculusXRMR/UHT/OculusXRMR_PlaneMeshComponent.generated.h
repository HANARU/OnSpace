// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRMR_PlaneMeshComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FOculusXRMR_PlaneMeshTriangle;
#ifdef OCULUSXRMR_OculusXRMR_PlaneMeshComponent_generated_h
#error "OculusXRMR_PlaneMeshComponent.generated.h already included, missing '#pragma once' in OculusXRMR_PlaneMeshComponent.h"
#endif
#define OCULUSXRMR_OculusXRMR_PlaneMeshComponent_generated_h

#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics; \
	OCULUSXRMR_API static class UScriptStruct* StaticStruct();


template<> OCULUSXRMR_API UScriptStruct* StaticStruct<struct FOculusXRMR_PlaneMeshTriangle>();

#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_40_SPARSE_DATA
#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearCustomMeshTriangles); \
	DECLARE_FUNCTION(execAddCustomMeshTriangles); \
	DECLARE_FUNCTION(execSetCustomMeshTriangles);


#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearCustomMeshTriangles); \
	DECLARE_FUNCTION(execAddCustomMeshTriangles); \
	DECLARE_FUNCTION(execSetCustomMeshTriangles);


#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_40_ACCESSORS
#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRMR_PlaneMeshComponent(); \
	friend struct Z_Construct_UClass_UOculusXRMR_PlaneMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UOculusXRMR_PlaneMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusXRMR"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRMR_PlaneMeshComponent)


#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUOculusXRMR_PlaneMeshComponent(); \
	friend struct Z_Construct_UClass_UOculusXRMR_PlaneMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UOculusXRMR_PlaneMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusXRMR"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRMR_PlaneMeshComponent)


#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRMR_PlaneMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRMR_PlaneMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRMR_PlaneMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRMR_PlaneMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusXRMR_PlaneMeshComponent(UOculusXRMR_PlaneMeshComponent&&); \
	NO_API UOculusXRMR_PlaneMeshComponent(const UOculusXRMR_PlaneMeshComponent&); \
public: \
	NO_API virtual ~UOculusXRMR_PlaneMeshComponent();


#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRMR_PlaneMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusXRMR_PlaneMeshComponent(UOculusXRMR_PlaneMeshComponent&&); \
	NO_API UOculusXRMR_PlaneMeshComponent(const UOculusXRMR_PlaneMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRMR_PlaneMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRMR_PlaneMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRMR_PlaneMeshComponent) \
	NO_API virtual ~UOculusXRMR_PlaneMeshComponent();


#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_37_PROLOG
#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_40_SPARSE_DATA \
	FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_40_RPC_WRAPPERS \
	FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_40_ACCESSORS \
	FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_40_INCLASS \
	FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_40_SPARSE_DATA \
	FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_40_ACCESSORS \
	FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_40_INCLASS_NO_PURE_DECLS \
	FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_40_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OculusXRMR_PlaneMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSXRMR_API UClass* StaticClass<class UOculusXRMR_PlaneMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
