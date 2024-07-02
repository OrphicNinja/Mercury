// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USBZVariationSetData;
class USkeletalMeshComponent;
class UStaticMeshComponent;
#ifdef STARBREEZE_SBZVariationSetUtils_generated_h
#error "SBZVariationSetUtils.generated.h already included, missing '#pragma once' in SBZVariationSetUtils.h"
#endif
#define STARBREEZE_SBZVariationSetUtils_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZVariationSetUtils_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZVariationSetUtils_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyVariation); \
	DECLARE_FUNCTION(execApplyVariationToSkeletal); \
	DECLARE_FUNCTION(execApplyVariationToStatic);


#define PAYDAY3_Source_Starbreeze_Public_SBZVariationSetUtils_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyVariation); \
	DECLARE_FUNCTION(execApplyVariationToSkeletal); \
	DECLARE_FUNCTION(execApplyVariationToStatic);


#define PAYDAY3_Source_Starbreeze_Public_SBZVariationSetUtils_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZVariationSetUtils(); \
	friend struct Z_Construct_UClass_USBZVariationSetUtils_Statics; \
public: \
	DECLARE_CLASS(USBZVariationSetUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZVariationSetUtils)


#define PAYDAY3_Source_Starbreeze_Public_SBZVariationSetUtils_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZVariationSetUtils(); \
	friend struct Z_Construct_UClass_USBZVariationSetUtils_Statics; \
public: \
	DECLARE_CLASS(USBZVariationSetUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZVariationSetUtils)


#define PAYDAY3_Source_Starbreeze_Public_SBZVariationSetUtils_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZVariationSetUtils(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZVariationSetUtils) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZVariationSetUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZVariationSetUtils); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZVariationSetUtils(USBZVariationSetUtils&&); \
	NO_API USBZVariationSetUtils(const USBZVariationSetUtils&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZVariationSetUtils_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZVariationSetUtils(USBZVariationSetUtils&&); \
	NO_API USBZVariationSetUtils(const USBZVariationSetUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZVariationSetUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZVariationSetUtils); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZVariationSetUtils)


#define PAYDAY3_Source_Starbreeze_Public_SBZVariationSetUtils_h_13_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZVariationSetUtils_h_11_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZVariationSetUtils_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZVariationSetUtils_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZVariationSetUtils_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZVariationSetUtils_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZVariationSetUtils_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZVariationSetUtils_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZVariationSetUtils_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZVariationSetUtils_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZVariationSetUtils_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZVariationSetUtils_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZVariationSetUtils_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZVariationSetUtils_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZVariationSetUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZVariationSetUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
