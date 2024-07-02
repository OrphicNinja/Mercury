// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZMaskMouldStoreItem;
class UObject;
class USBZStoreManager;
#ifdef STARBREEZE_SBZStoreManager_generated_h
#error "SBZStoreManager.generated.h already included, missing '#pragma once' in SBZStoreManager.h"
#endif
#define STARBREEZE_SBZStoreManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZStoreManager_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZStoreManager_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentMaskOfTheWeekStoreItem); \
	DECLARE_FUNCTION(execGetInfamyLevelItemUnlockCount); \
	DECLARE_FUNCTION(execGetMaxPriceProgressionLevel); \
	DECLARE_FUNCTION(execGetStoreManager); \
	DECLARE_FUNCTION(execGetStoreManagerChecked);


#define PAYDAY3_Source_Starbreeze_Public_SBZStoreManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentMaskOfTheWeekStoreItem); \
	DECLARE_FUNCTION(execGetInfamyLevelItemUnlockCount); \
	DECLARE_FUNCTION(execGetMaxPriceProgressionLevel); \
	DECLARE_FUNCTION(execGetStoreManager); \
	DECLARE_FUNCTION(execGetStoreManagerChecked);


#define PAYDAY3_Source_Starbreeze_Public_SBZStoreManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZStoreManager(); \
	friend struct Z_Construct_UClass_USBZStoreManager_Statics; \
public: \
	DECLARE_CLASS(USBZStoreManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStoreManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZStoreManager_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSBZStoreManager(); \
	friend struct Z_Construct_UClass_USBZStoreManager_Statics; \
public: \
	DECLARE_CLASS(USBZStoreManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZStoreManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZStoreManager_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZStoreManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZStoreManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStoreManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStoreManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStoreManager(USBZStoreManager&&); \
	NO_API USBZStoreManager(const USBZStoreManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZStoreManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZStoreManager(USBZStoreManager&&); \
	NO_API USBZStoreManager(const USBZStoreManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZStoreManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZStoreManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZStoreManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZStoreManager_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AllVendorsItems() { return STRUCT_OFFSET(USBZStoreManager, AllVendorsItems); } \
	FORCEINLINE static uint32 __PPO__PayDayCreditMap() { return STRUCT_OFFSET(USBZStoreManager, PayDayCreditMap); }


#define PAYDAY3_Source_Starbreeze_Public_SBZStoreManager_h_13_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZStoreManager_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStoreManager_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStoreManager_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStoreManager_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZStoreManager_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZStoreManager_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZStoreManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStoreManager_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStoreManager_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStoreManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStoreManager_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStoreManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZStoreManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZStoreManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
