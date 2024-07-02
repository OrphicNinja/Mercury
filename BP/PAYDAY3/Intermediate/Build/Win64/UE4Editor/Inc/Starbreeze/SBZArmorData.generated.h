// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZArmorData_generated_h
#error "SBZArmorData.generated.h already included, missing '#pragma once' in SBZArmorData.h"
#endif
#define STARBREEZE_SBZArmorData_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZArmorData_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZArmorData_h_14_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZArmorData_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZArmorData_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZArmorData(); \
	friend struct Z_Construct_UClass_USBZArmorData_Statics; \
public: \
	DECLARE_CLASS(USBZArmorData, USBZInventoryBaseData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZArmorData)


#define PAYDAY3_Source_Starbreeze_Public_SBZArmorData_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZArmorData(); \
	friend struct Z_Construct_UClass_USBZArmorData_Statics; \
public: \
	DECLARE_CLASS(USBZArmorData, USBZInventoryBaseData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZArmorData)


#define PAYDAY3_Source_Starbreeze_Public_SBZArmorData_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZArmorData(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZArmorData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZArmorData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZArmorData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZArmorData(USBZArmorData&&); \
	NO_API USBZArmorData(const USBZArmorData&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZArmorData_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZArmorData(USBZArmorData&&); \
	NO_API USBZArmorData(const USBZArmorData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZArmorData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZArmorData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZArmorData)


#define PAYDAY3_Source_Starbreeze_Public_SBZArmorData_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GameplayEffectArray() { return STRUCT_OFFSET(USBZArmorData, GameplayEffectArray); } \
	FORCEINLINE static uint32 __PPO__ArmorDamageScaleOverrideDataArray() { return STRUCT_OFFSET(USBZArmorData, ArmorDamageScaleOverrideDataArray); } \
	FORCEINLINE static uint32 __PPO__bOverrideArmorColor() { return STRUCT_OFFSET(USBZArmorData, bOverrideArmorColor); } \
	FORCEINLINE static uint32 __PPO__OverridenBackgroundColor() { return STRUCT_OFFSET(USBZArmorData, OverridenBackgroundColor); } \
	FORCEINLINE static uint32 __PPO__OverridenMainColor() { return STRUCT_OFFSET(USBZArmorData, OverridenMainColor); } \
	FORCEINLINE static uint32 __PPO__OverridenLaggingColor() { return STRUCT_OFFSET(USBZArmorData, OverridenLaggingColor); } \
	FORCEINLINE static uint32 __PPO__OverridenTraumaColor() { return STRUCT_OFFSET(USBZArmorData, OverridenTraumaColor); } \
	FORCEINLINE static uint32 __PPO__ArmorDescriptionStatColorName() { return STRUCT_OFFSET(USBZArmorData, ArmorDescriptionStatColorName); } \
	FORCEINLINE static uint32 __PPO__ArmorDamageFeedback() { return STRUCT_OFFSET(USBZArmorData, ArmorDamageFeedback); }


#define PAYDAY3_Source_Starbreeze_Public_SBZArmorData_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZArmorData_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZArmorData_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZArmorData_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZArmorData_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZArmorData_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZArmorData_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZArmorData_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZArmorData_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZArmorData_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZArmorData_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZArmorData_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZArmorData_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZArmorData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZArmorData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
