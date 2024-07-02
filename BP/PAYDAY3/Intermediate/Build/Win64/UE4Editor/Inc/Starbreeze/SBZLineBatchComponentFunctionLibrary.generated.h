// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULineBatchComponent;
struct FVector;
struct FLinearColor;
struct FRotator;
class UCameraComponent;
struct FDebugFloatHistory;
struct FTransform;
struct FVector2D;
struct FPlane;
#ifdef STARBREEZE_SBZLineBatchComponentFunctionLibrary_generated_h
#error "SBZLineBatchComponentFunctionLibrary.generated.h already included, missing '#pragma once' in SBZLineBatchComponentFunctionLibrary.h"
#endif
#define STARBREEZE_SBZLineBatchComponentFunctionLibrary_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZLineBatchComponentFunctionLibrary_h_18_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZLineBatchComponentFunctionLibrary_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDraw3dArrow); \
	DECLARE_FUNCTION(execDrawArrow); \
	DECLARE_FUNCTION(execDrawBox); \
	DECLARE_FUNCTION(execDrawCamera); \
	DECLARE_FUNCTION(execDrawCapsule); \
	DECLARE_FUNCTION(execDrawCircle); \
	DECLARE_FUNCTION(execDrawCone); \
	DECLARE_FUNCTION(execDrawCoordinateSystem); \
	DECLARE_FUNCTION(execDrawCylinder); \
	DECLARE_FUNCTION(execDrawDashedLine); \
	DECLARE_FUNCTION(execDrawFloatHistory); \
	DECLARE_FUNCTION(execDrawFrustum); \
	DECLARE_FUNCTION(execDrawLine); \
	DECLARE_FUNCTION(execDrawPlane); \
	DECLARE_FUNCTION(execDrawPoint); \
	DECLARE_FUNCTION(execDrawSphere); \
	DECLARE_FUNCTION(execFlush);


#define PAYDAY3_Source_Starbreeze_Public_SBZLineBatchComponentFunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDraw3dArrow); \
	DECLARE_FUNCTION(execDrawArrow); \
	DECLARE_FUNCTION(execDrawBox); \
	DECLARE_FUNCTION(execDrawCamera); \
	DECLARE_FUNCTION(execDrawCapsule); \
	DECLARE_FUNCTION(execDrawCircle); \
	DECLARE_FUNCTION(execDrawCone); \
	DECLARE_FUNCTION(execDrawCoordinateSystem); \
	DECLARE_FUNCTION(execDrawCylinder); \
	DECLARE_FUNCTION(execDrawDashedLine); \
	DECLARE_FUNCTION(execDrawFloatHistory); \
	DECLARE_FUNCTION(execDrawFrustum); \
	DECLARE_FUNCTION(execDrawLine); \
	DECLARE_FUNCTION(execDrawPlane); \
	DECLARE_FUNCTION(execDrawPoint); \
	DECLARE_FUNCTION(execDrawSphere); \
	DECLARE_FUNCTION(execFlush);


#define PAYDAY3_Source_Starbreeze_Public_SBZLineBatchComponentFunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZLineBatchComponentFunctionLibrary(); \
	friend struct Z_Construct_UClass_USBZLineBatchComponentFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZLineBatchComponentFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZLineBatchComponentFunctionLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZLineBatchComponentFunctionLibrary_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUSBZLineBatchComponentFunctionLibrary(); \
	friend struct Z_Construct_UClass_USBZLineBatchComponentFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZLineBatchComponentFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZLineBatchComponentFunctionLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZLineBatchComponentFunctionLibrary_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZLineBatchComponentFunctionLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZLineBatchComponentFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZLineBatchComponentFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZLineBatchComponentFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZLineBatchComponentFunctionLibrary(USBZLineBatchComponentFunctionLibrary&&); \
	NO_API USBZLineBatchComponentFunctionLibrary(const USBZLineBatchComponentFunctionLibrary&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZLineBatchComponentFunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZLineBatchComponentFunctionLibrary(USBZLineBatchComponentFunctionLibrary&&); \
	NO_API USBZLineBatchComponentFunctionLibrary(const USBZLineBatchComponentFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZLineBatchComponentFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZLineBatchComponentFunctionLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZLineBatchComponentFunctionLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZLineBatchComponentFunctionLibrary_h_18_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZLineBatchComponentFunctionLibrary_h_16_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZLineBatchComponentFunctionLibrary_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLineBatchComponentFunctionLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLineBatchComponentFunctionLibrary_h_18_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLineBatchComponentFunctionLibrary_h_18_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLineBatchComponentFunctionLibrary_h_18_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZLineBatchComponentFunctionLibrary_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZLineBatchComponentFunctionLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLineBatchComponentFunctionLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLineBatchComponentFunctionLibrary_h_18_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLineBatchComponentFunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLineBatchComponentFunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLineBatchComponentFunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZLineBatchComponentFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZLineBatchComponentFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
