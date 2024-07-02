// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZRarity : uint8;
#ifdef STARBREEZE_SBZCosmeticsDataAsset_generated_h
#error "SBZCosmeticsDataAsset.generated.h already included, missing '#pragma once' in SBZCosmeticsDataAsset.h"
#endif
#define STARBREEZE_SBZCosmeticsDataAsset_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticsDataAsset_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticsDataAsset_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRarity); \
	DECLARE_FUNCTION(execIsConsumable);


#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticsDataAsset_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRarity); \
	DECLARE_FUNCTION(execIsConsumable);


#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticsDataAsset_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZCosmeticsDataAsset(); \
	friend struct Z_Construct_UClass_USBZCosmeticsDataAsset_Statics; \
public: \
	DECLARE_CLASS(USBZCosmeticsDataAsset, USBZEquippablePartDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCosmeticsDataAsset)


#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticsDataAsset_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUSBZCosmeticsDataAsset(); \
	friend struct Z_Construct_UClass_USBZCosmeticsDataAsset_Statics; \
public: \
	DECLARE_CLASS(USBZCosmeticsDataAsset, USBZEquippablePartDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCosmeticsDataAsset)


#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticsDataAsset_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZCosmeticsDataAsset(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCosmeticsDataAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCosmeticsDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCosmeticsDataAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCosmeticsDataAsset(USBZCosmeticsDataAsset&&); \
	NO_API USBZCosmeticsDataAsset(const USBZCosmeticsDataAsset&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticsDataAsset_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCosmeticsDataAsset(USBZCosmeticsDataAsset&&); \
	NO_API USBZCosmeticsDataAsset(const USBZCosmeticsDataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCosmeticsDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCosmeticsDataAsset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZCosmeticsDataAsset)


#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticsDataAsset_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Rarity() { return STRUCT_OFFSET(USBZCosmeticsDataAsset, Rarity); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticsDataAsset_h_7_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticsDataAsset_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCosmeticsDataAsset_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCosmeticsDataAsset_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCosmeticsDataAsset_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCosmeticsDataAsset_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCosmeticsDataAsset_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCosmeticsDataAsset_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCosmeticsDataAsset_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCosmeticsDataAsset_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCosmeticsDataAsset_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCosmeticsDataAsset_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCosmeticsDataAsset_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZCosmeticsDataAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCosmeticsDataAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
