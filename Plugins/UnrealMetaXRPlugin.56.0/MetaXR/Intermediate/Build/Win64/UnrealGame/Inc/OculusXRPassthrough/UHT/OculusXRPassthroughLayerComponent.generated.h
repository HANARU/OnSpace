// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRPassthroughLayerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AStaticMeshActor;
class UCurveLinearColor;
class UMeshComponent;
class UOculusXRPassthroughColorLut;
class UProceduralMeshComponent;
class UStaticMeshComponent;
struct FLinearColor;
#ifdef OCULUSXRPASSTHROUGH_OculusXRPassthroughLayerComponent_generated_h
#error "OculusXRPassthroughLayerComponent.generated.h already included, missing '#pragma once' in OculusXRPassthroughLayerComponent.h"
#endif
#define OCULUSXRPASSTHROUGH_OculusXRPassthroughLayerComponent_generated_h

#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_20_SPARSE_DATA
#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveColorLut); \
	DECLARE_FUNCTION(execSetColorLUTWeight); \
	DECLARE_FUNCTION(execSetColorLUTTarget); \
	DECLARE_FUNCTION(execSetColorLUTSource); \
	DECLARE_FUNCTION(execSetLayerPlacement); \
	DECLARE_FUNCTION(execClearColorMap); \
	DECLARE_FUNCTION(execSetColorArray); \
	DECLARE_FUNCTION(execSetColorMapType); \
	DECLARE_FUNCTION(execSetColorMapCurve); \
	DECLARE_FUNCTION(execSetColorScaleAndOffset); \
	DECLARE_FUNCTION(execSetBrightnessContrastSaturation); \
	DECLARE_FUNCTION(execSetColorMapControls); \
	DECLARE_FUNCTION(execSetEdgeRenderingColor); \
	DECLARE_FUNCTION(execEnableColorMapCurve); \
	DECLARE_FUNCTION(execEnableColorMap); \
	DECLARE_FUNCTION(execEnableEdgeColor); \
	DECLARE_FUNCTION(execSetTextureOpacity);


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveColorLut); \
	DECLARE_FUNCTION(execSetColorLUTWeight); \
	DECLARE_FUNCTION(execSetColorLUTTarget); \
	DECLARE_FUNCTION(execSetColorLUTSource); \
	DECLARE_FUNCTION(execSetLayerPlacement); \
	DECLARE_FUNCTION(execClearColorMap); \
	DECLARE_FUNCTION(execSetColorArray); \
	DECLARE_FUNCTION(execSetColorMapType); \
	DECLARE_FUNCTION(execSetColorMapCurve); \
	DECLARE_FUNCTION(execSetColorScaleAndOffset); \
	DECLARE_FUNCTION(execSetBrightnessContrastSaturation); \
	DECLARE_FUNCTION(execSetColorMapControls); \
	DECLARE_FUNCTION(execSetEdgeRenderingColor); \
	DECLARE_FUNCTION(execEnableColorMapCurve); \
	DECLARE_FUNCTION(execEnableColorMap); \
	DECLARE_FUNCTION(execEnableEdgeColor); \
	DECLARE_FUNCTION(execSetTextureOpacity);


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_20_ACCESSORS
#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRPassthroughLayerBase(); \
	friend struct Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics; \
public: \
	DECLARE_CLASS(UOculusXRPassthroughLayerBase, UStereoLayerShape, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRPassthrough"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRPassthroughLayerBase)


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUOculusXRPassthroughLayerBase(); \
	friend struct Z_Construct_UClass_UOculusXRPassthroughLayerBase_Statics; \
public: \
	DECLARE_CLASS(UOculusXRPassthroughLayerBase, UStereoLayerShape, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRPassthrough"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRPassthroughLayerBase)


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRPassthroughLayerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRPassthroughLayerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRPassthroughLayerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRPassthroughLayerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusXRPassthroughLayerBase(UOculusXRPassthroughLayerBase&&); \
	NO_API UOculusXRPassthroughLayerBase(const UOculusXRPassthroughLayerBase&); \
public: \
	NO_API virtual ~UOculusXRPassthroughLayerBase();


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRPassthroughLayerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusXRPassthroughLayerBase(UOculusXRPassthroughLayerBase&&); \
	NO_API UOculusXRPassthroughLayerBase(const UOculusXRPassthroughLayerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRPassthroughLayerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRPassthroughLayerBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRPassthroughLayerBase) \
	NO_API virtual ~UOculusXRPassthroughLayerBase();


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_17_PROLOG
#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_20_SPARSE_DATA \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_20_RPC_WRAPPERS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_20_ACCESSORS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_20_INCLASS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_20_SPARSE_DATA \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_20_ACCESSORS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSXRPASSTHROUGH_API UClass* StaticClass<class UOculusXRPassthroughLayerBase>();

#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_183_SPARSE_DATA
#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_183_RPC_WRAPPERS
#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_183_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_183_ACCESSORS
#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_183_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRStereoLayerShapeReconstructed(); \
	friend struct Z_Construct_UClass_UOculusXRStereoLayerShapeReconstructed_Statics; \
public: \
	DECLARE_CLASS(UOculusXRStereoLayerShapeReconstructed, UOculusXRPassthroughLayerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRPassthrough"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRStereoLayerShapeReconstructed)


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_183_INCLASS \
private: \
	static void StaticRegisterNativesUOculusXRStereoLayerShapeReconstructed(); \
	friend struct Z_Construct_UClass_UOculusXRStereoLayerShapeReconstructed_Statics; \
public: \
	DECLARE_CLASS(UOculusXRStereoLayerShapeReconstructed, UOculusXRPassthroughLayerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRPassthrough"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRStereoLayerShapeReconstructed)


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_183_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRStereoLayerShapeReconstructed(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRStereoLayerShapeReconstructed) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRStereoLayerShapeReconstructed); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRStereoLayerShapeReconstructed); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusXRStereoLayerShapeReconstructed(UOculusXRStereoLayerShapeReconstructed&&); \
	NO_API UOculusXRStereoLayerShapeReconstructed(const UOculusXRStereoLayerShapeReconstructed&); \
public: \
	NO_API virtual ~UOculusXRStereoLayerShapeReconstructed();


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_183_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRStereoLayerShapeReconstructed(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusXRStereoLayerShapeReconstructed(UOculusXRStereoLayerShapeReconstructed&&); \
	NO_API UOculusXRStereoLayerShapeReconstructed(const UOculusXRStereoLayerShapeReconstructed&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRStereoLayerShapeReconstructed); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRStereoLayerShapeReconstructed); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRStereoLayerShapeReconstructed) \
	NO_API virtual ~UOculusXRStereoLayerShapeReconstructed();


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_180_PROLOG
#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_183_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_183_SPARSE_DATA \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_183_RPC_WRAPPERS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_183_ACCESSORS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_183_INCLASS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_183_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_183_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_183_SPARSE_DATA \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_183_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_183_ACCESSORS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_183_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_183_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSXRPASSTHROUGH_API UClass* StaticClass<class UOculusXRStereoLayerShapeReconstructed>();

#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_192_SPARSE_DATA
#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_192_RPC_WRAPPERS
#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_192_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_192_ACCESSORS
#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_192_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRStereoLayerShapeUserDefined(); \
	friend struct Z_Construct_UClass_UOculusXRStereoLayerShapeUserDefined_Statics; \
public: \
	DECLARE_CLASS(UOculusXRStereoLayerShapeUserDefined, UOculusXRPassthroughLayerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRPassthrough"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRStereoLayerShapeUserDefined)


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_192_INCLASS \
private: \
	static void StaticRegisterNativesUOculusXRStereoLayerShapeUserDefined(); \
	friend struct Z_Construct_UClass_UOculusXRStereoLayerShapeUserDefined_Statics; \
public: \
	DECLARE_CLASS(UOculusXRStereoLayerShapeUserDefined, UOculusXRPassthroughLayerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRPassthrough"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRStereoLayerShapeUserDefined)


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_192_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRStereoLayerShapeUserDefined(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRStereoLayerShapeUserDefined) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRStereoLayerShapeUserDefined); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRStereoLayerShapeUserDefined); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusXRStereoLayerShapeUserDefined(UOculusXRStereoLayerShapeUserDefined&&); \
	NO_API UOculusXRStereoLayerShapeUserDefined(const UOculusXRStereoLayerShapeUserDefined&); \
public: \
	NO_API virtual ~UOculusXRStereoLayerShapeUserDefined();


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_192_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRStereoLayerShapeUserDefined(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusXRStereoLayerShapeUserDefined(UOculusXRStereoLayerShapeUserDefined&&); \
	NO_API UOculusXRStereoLayerShapeUserDefined(const UOculusXRStereoLayerShapeUserDefined&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRStereoLayerShapeUserDefined); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRStereoLayerShapeUserDefined); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRStereoLayerShapeUserDefined) \
	NO_API virtual ~UOculusXRStereoLayerShapeUserDefined();


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_189_PROLOG
#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_192_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_192_SPARSE_DATA \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_192_RPC_WRAPPERS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_192_ACCESSORS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_192_INCLASS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_192_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_192_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_192_SPARSE_DATA \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_192_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_192_ACCESSORS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_192_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_192_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSXRPASSTHROUGH_API UClass* StaticClass<class UOculusXRStereoLayerShapeUserDefined>();

#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_209_SPARSE_DATA
#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_209_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMarkPassthroughStyleForUpdate); \
	DECLARE_FUNCTION(execIsSurfaceGeometryComponent); \
	DECLARE_FUNCTION(execIsSurfaceGeometry); \
	DECLARE_FUNCTION(execRemoveProceduralSurfaceGeometry); \
	DECLARE_FUNCTION(execRemoveStaticSurfaceGeometry); \
	DECLARE_FUNCTION(execRemoveSurfaceGeometry); \
	DECLARE_FUNCTION(execAddProceduralSurfaceGeometry); \
	DECLARE_FUNCTION(execAddStaticSurfaceGeometry); \
	DECLARE_FUNCTION(execAddSurfaceGeometry);


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_209_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMarkPassthroughStyleForUpdate); \
	DECLARE_FUNCTION(execIsSurfaceGeometryComponent); \
	DECLARE_FUNCTION(execIsSurfaceGeometry); \
	DECLARE_FUNCTION(execRemoveProceduralSurfaceGeometry); \
	DECLARE_FUNCTION(execRemoveStaticSurfaceGeometry); \
	DECLARE_FUNCTION(execRemoveSurfaceGeometry); \
	DECLARE_FUNCTION(execAddProceduralSurfaceGeometry); \
	DECLARE_FUNCTION(execAddStaticSurfaceGeometry); \
	DECLARE_FUNCTION(execAddSurfaceGeometry);


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_209_ACCESSORS
#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_209_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRPassthroughLayerComponent(); \
	friend struct Z_Construct_UClass_UOculusXRPassthroughLayerComponent_Statics; \
public: \
	DECLARE_CLASS(UOculusXRPassthroughLayerComponent, UStereoLayerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusXRPassthrough"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRPassthroughLayerComponent)


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_209_INCLASS \
private: \
	static void StaticRegisterNativesUOculusXRPassthroughLayerComponent(); \
	friend struct Z_Construct_UClass_UOculusXRPassthroughLayerComponent_Statics; \
public: \
	DECLARE_CLASS(UOculusXRPassthroughLayerComponent, UStereoLayerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusXRPassthrough"), NO_API) \
	DECLARE_SERIALIZER(UOculusXRPassthroughLayerComponent)


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_209_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRPassthroughLayerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRPassthroughLayerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRPassthroughLayerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRPassthroughLayerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusXRPassthroughLayerComponent(UOculusXRPassthroughLayerComponent&&); \
	NO_API UOculusXRPassthroughLayerComponent(const UOculusXRPassthroughLayerComponent&); \
public: \
	NO_API virtual ~UOculusXRPassthroughLayerComponent();


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_209_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRPassthroughLayerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusXRPassthroughLayerComponent(UOculusXRPassthroughLayerComponent&&); \
	NO_API UOculusXRPassthroughLayerComponent(const UOculusXRPassthroughLayerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRPassthroughLayerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRPassthroughLayerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRPassthroughLayerComponent) \
	NO_API virtual ~UOculusXRPassthroughLayerComponent();


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_206_PROLOG
#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_209_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_209_SPARSE_DATA \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_209_RPC_WRAPPERS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_209_ACCESSORS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_209_INCLASS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_209_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_209_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_209_SPARSE_DATA \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_209_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_209_ACCESSORS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_209_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h_209_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OculusXRPassthroughLayerComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSXRPASSTHROUGH_API UClass* StaticClass<class UOculusXRPassthroughLayerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_OculusXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughLayerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
