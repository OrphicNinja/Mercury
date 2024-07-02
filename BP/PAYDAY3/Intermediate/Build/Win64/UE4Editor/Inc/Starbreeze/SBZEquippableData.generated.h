// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZEquippableData_generated_h
#error "SBZEquippableData.generated.h already included, missing '#pragma once' in SBZEquippableData.h"
#endif
#define STARBREEZE_SBZEquippableData_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZEquippableData_h_20_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZEquippableData_h_20_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZEquippableData_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZEquippableData_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZEquippableData(); \
	friend struct Z_Construct_UClass_USBZEquippableData_Statics; \
public: \
	DECLARE_CLASS(USBZEquippableData, USBZInventoryBaseData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZEquippableData)


#define PAYDAY3_Source_Starbreeze_Public_SBZEquippableData_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSBZEquippableData(); \
	friend struct Z_Construct_UClass_USBZEquippableData_Statics; \
public: \
	DECLARE_CLASS(USBZEquippableData, USBZInventoryBaseData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZEquippableData)


#define PAYDAY3_Source_Starbreeze_Public_SBZEquippableData_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZEquippableData(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZEquippableData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZEquippableData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZEquippableData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZEquippableData(USBZEquippableData&&); \
	NO_API USBZEquippableData(const USBZEquippableData&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZEquippableData_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZEquippableData(USBZEquippableData&&); \
	NO_API USBZEquippableData(const USBZEquippableData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZEquippableData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZEquippableData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZEquippableData)


#define PAYDAY3_Source_Starbreeze_Public_SBZEquippableData_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AnimationCollectionFP() { return STRUCT_OFFSET(USBZEquippableData, AnimationCollectionFP); } \
	FORCEINLINE static uint32 __PPO__WeaponAnimCollection() { return STRUCT_OFFSET(USBZEquippableData, WeaponAnimCollection); } \
	FORCEINLINE static uint32 __PPO__EquippableMenuAnimCollection() { return STRUCT_OFFSET(USBZEquippableData, EquippableMenuAnimCollection); }


#define PAYDAY3_Source_Starbreeze_Public_SBZEquippableData_h_18_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZEquippableData_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZEquippableData_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZEquippableData_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZEquippableData_h_20_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZEquippableData_h_20_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZEquippableData_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZEquippableData_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZEquippableData_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZEquippableData_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZEquippableData_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZEquippableData_h_20_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZEquippableData_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZEquippableData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZEquippableData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
