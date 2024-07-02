// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZEquippableConfig;
#ifdef STARBREEZE_SBZWeaponPresetConfigData_generated_h
#error "SBZWeaponPresetConfigData.generated.h already included, missing '#pragma once' in SBZWeaponPresetConfigData.h"
#endif
#define STARBREEZE_SBZWeaponPresetConfigData_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponPresetConfigData_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponPresetConfigData_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEquippableConfig);


#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponPresetConfigData_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEquippableConfig);


#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponPresetConfigData_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZWeaponPresetConfigData(); \
	friend struct Z_Construct_UClass_USBZWeaponPresetConfigData_Statics; \
public: \
	DECLARE_CLASS(USBZWeaponPresetConfigData, USBZInventoryBaseData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZWeaponPresetConfigData)


#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponPresetConfigData_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZWeaponPresetConfigData(); \
	friend struct Z_Construct_UClass_USBZWeaponPresetConfigData_Statics; \
public: \
	DECLARE_CLASS(USBZWeaponPresetConfigData, USBZInventoryBaseData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZWeaponPresetConfigData)


#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponPresetConfigData_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZWeaponPresetConfigData(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZWeaponPresetConfigData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZWeaponPresetConfigData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZWeaponPresetConfigData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZWeaponPresetConfigData(USBZWeaponPresetConfigData&&); \
	NO_API USBZWeaponPresetConfigData(const USBZWeaponPresetConfigData&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponPresetConfigData_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZWeaponPresetConfigData(USBZWeaponPresetConfigData&&); \
	NO_API USBZWeaponPresetConfigData(const USBZWeaponPresetConfigData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZWeaponPresetConfigData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZWeaponPresetConfigData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZWeaponPresetConfigData)


#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponPresetConfigData_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponData() { return STRUCT_OFFSET(USBZWeaponPresetConfigData, WeaponData); } \
	FORCEINLINE static uint32 __PPO__ModData() { return STRUCT_OFFSET(USBZWeaponPresetConfigData, ModData); } \
	FORCEINLINE static uint32 __PPO__BuiltEquippableConfig() { return STRUCT_OFFSET(USBZWeaponPresetConfigData, BuiltEquippableConfig); }


#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponPresetConfigData_h_11_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponPresetConfigData_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZWeaponPresetConfigData_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZWeaponPresetConfigData_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZWeaponPresetConfigData_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZWeaponPresetConfigData_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZWeaponPresetConfigData_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponPresetConfigData_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZWeaponPresetConfigData_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZWeaponPresetConfigData_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZWeaponPresetConfigData_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZWeaponPresetConfigData_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZWeaponPresetConfigData_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZWeaponPresetConfigData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZWeaponPresetConfigData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
