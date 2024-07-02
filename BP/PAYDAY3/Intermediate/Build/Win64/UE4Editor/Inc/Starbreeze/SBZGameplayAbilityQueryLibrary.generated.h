// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USBZGameplayAbilityQuery;
class UTexture2D;
class UAbilitySystemComponent;
struct FSBZGameplayTagContainerComparison;
#ifdef STARBREEZE_SBZGameplayAbilityQueryLibrary_generated_h
#error "SBZGameplayAbilityQueryLibrary.generated.h already included, missing '#pragma once' in SBZGameplayAbilityQueryLibrary.h"
#endif
#define STARBREEZE_SBZGameplayAbilityQueryLibrary_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbilityQueryLibrary_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbilityQueryLibrary_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execQueryGameplayAbilityFromActor); \
	DECLARE_FUNCTION(execQueryGameplayAbilitySystemComponent); \
	DECLARE_FUNCTION(execQueryGameplayTagContainerFromAbilitySystemComponent);


#define PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbilityQueryLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execQueryGameplayAbilityFromActor); \
	DECLARE_FUNCTION(execQueryGameplayAbilitySystemComponent); \
	DECLARE_FUNCTION(execQueryGameplayTagContainerFromAbilitySystemComponent);


#define PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbilityQueryLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZGameplayAbilityQueryLibrary(); \
	friend struct Z_Construct_UClass_USBZGameplayAbilityQueryLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZGameplayAbilityQueryLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZGameplayAbilityQueryLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbilityQueryLibrary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZGameplayAbilityQueryLibrary(); \
	friend struct Z_Construct_UClass_USBZGameplayAbilityQueryLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZGameplayAbilityQueryLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZGameplayAbilityQueryLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbilityQueryLibrary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZGameplayAbilityQueryLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZGameplayAbilityQueryLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZGameplayAbilityQueryLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZGameplayAbilityQueryLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZGameplayAbilityQueryLibrary(USBZGameplayAbilityQueryLibrary&&); \
	NO_API USBZGameplayAbilityQueryLibrary(const USBZGameplayAbilityQueryLibrary&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbilityQueryLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZGameplayAbilityQueryLibrary(USBZGameplayAbilityQueryLibrary&&); \
	NO_API USBZGameplayAbilityQueryLibrary(const USBZGameplayAbilityQueryLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZGameplayAbilityQueryLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZGameplayAbilityQueryLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZGameplayAbilityQueryLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbilityQueryLibrary_h_14_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbilityQueryLibrary_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbilityQueryLibrary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbilityQueryLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbilityQueryLibrary_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbilityQueryLibrary_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbilityQueryLibrary_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbilityQueryLibrary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbilityQueryLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbilityQueryLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbilityQueryLibrary_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbilityQueryLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbilityQueryLibrary_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbilityQueryLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZGameplayAbilityQueryLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZGameplayAbilityQueryLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
