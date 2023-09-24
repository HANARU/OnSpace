// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRRoomLayoutManagerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UProceduralMeshComponent;
struct FOculusXRRoomLayout;
struct FOculusXRUInt64;
#ifdef OCULUSXRANCHORS_OculusXRRoomLayoutManagerComponent_generated_h
#error "OculusXRRoomLayoutManagerComponent.generated.h already included, missing '#pragma once' in OculusXRRoomLayoutManagerComponent.h"
#endif
#define OCULUSXRANCHORS_OculusXRRoomLayoutManagerComponent_generated_h

#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRAnchors_Public_OculusXRRoomLayoutManagerComponent_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics; \
	static class UScriptStruct* StaticStruct();


template<> OCULUSXRANCHORS_API UScriptStruct* StaticStruct<struct FOculusXRRoomLayout>();

#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRAnchors_Public_OculusXRRoomLayoutManagerComponent_h_43_DELEGATE \
static void FOculusXRRoomLayoutSceneCaptureCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& OculusXRRoomLayoutSceneCaptureCompleteDelegate, FOculusXRUInt64 requestId, bool result);


#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRAnchors_Public_OculusXRRoomLayoutManagerComponent_h_30_SPARSE_DATA
#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRAnchors_Public_OculusXRRoomLayoutManagerComponent_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOculusRoomLayoutSceneCaptureComplete_Handler); \
	DECLARE_FUNCTION(execLoadTriangleMesh); \
	DECLARE_FUNCTION(execGetRoomLayout); \
	DECLARE_FUNCTION(execLaunchCaptureFlow);


#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRAnchors_Public_OculusXRRoomLayoutManagerComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOculusRoomLayoutSceneCaptureComplete_Handler); \
	DECLARE_FUNCTION(execLoadTriangleMesh); \
	DECLARE_FUNCTION(execGetRoomLayout); \
	DECLARE_FUNCTION(execLaunchCaptureFlow);


#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRAnchors_Public_OculusXRRoomLayoutManagerComponent_h_30_ACCESSORS
#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRAnchors_Public_OculusXRRoomLayoutManagerComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRRoomLayoutManagerComponent(); \
	friend struct Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UOculusXRRoomLayoutManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRRoomLayoutManagerComponent)


#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRAnchors_Public_OculusXRRoomLayoutManagerComponent_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUOculusXRRoomLayoutManagerComponent(); \
	friend struct Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UOculusXRRoomLayoutManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRRoomLayoutManagerComponent)


#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRAnchors_Public_OculusXRRoomLayoutManagerComponent_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRRoomLayoutManagerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRRoomLayoutManagerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRRoomLayoutManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRRoomLayoutManagerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusXRRoomLayoutManagerComponent(UOculusXRRoomLayoutManagerComponent&&); \
	NO_API UOculusXRRoomLayoutManagerComponent(const UOculusXRRoomLayoutManagerComponent&); \
public: \
	NO_API virtual ~UOculusXRRoomLayoutManagerComponent();


#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRAnchors_Public_OculusXRRoomLayoutManagerComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusXRRoomLayoutManagerComponent(UOculusXRRoomLayoutManagerComponent&&); \
	NO_API UOculusXRRoomLayoutManagerComponent(const UOculusXRRoomLayoutManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRRoomLayoutManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRRoomLayoutManagerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRRoomLayoutManagerComponent) \
	NO_API virtual ~UOculusXRRoomLayoutManagerComponent();


#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRAnchors_Public_OculusXRRoomLayoutManagerComponent_h_27_PROLOG
#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRAnchors_Public_OculusXRRoomLayoutManagerComponent_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRAnchors_Public_OculusXRRoomLayoutManagerComponent_h_30_SPARSE_DATA \
	FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRAnchors_Public_OculusXRRoomLayoutManagerComponent_h_30_RPC_WRAPPERS \
	FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRAnchors_Public_OculusXRRoomLayoutManagerComponent_h_30_ACCESSORS \
	FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRAnchors_Public_OculusXRRoomLayoutManagerComponent_h_30_INCLASS \
	FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRAnchors_Public_OculusXRRoomLayoutManagerComponent_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRAnchors_Public_OculusXRRoomLayoutManagerComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRAnchors_Public_OculusXRRoomLayoutManagerComponent_h_30_SPARSE_DATA \
	FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRAnchors_Public_OculusXRRoomLayoutManagerComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRAnchors_Public_OculusXRRoomLayoutManagerComponent_h_30_ACCESSORS \
	FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRAnchors_Public_OculusXRRoomLayoutManagerComponent_h_30_INCLASS_NO_PURE_DECLS \
	FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRAnchors_Public_OculusXRRoomLayoutManagerComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSXRANCHORS_API UClass* StaticClass<class UOculusXRRoomLayoutManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_OnSpace_Plugins_UnrealMetaXRPlugin_56_0_MetaXR_Source_OculusXRAnchors_Public_OculusXRRoomLayoutManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
