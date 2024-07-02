// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USBZInventoryManager;
class USBZCosmeticsPartSlot;
struct FSBZCosmeticsInventoryItem;
#ifdef STARBREEZE_SBZInventoryManager_generated_h
#error "SBZInventoryManager.generated.h already included, missing '#pragma once' in SBZInventoryManager.h"
#endif
#define STARBREEZE_SBZInventoryManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZInventoryManager_h_17_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZInventoryManager_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_GetInventoryManager); \
	DECLARE_FUNCTION(execGetCosmeticsInventoryItemsForType);


#define PAYDAY3_Source_Starbreeze_Public_SBZInventoryManager_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_GetInventoryManager); \
	DECLARE_FUNCTION(execGetCosmeticsInventoryItemsForType);


#define PAYDAY3_Source_Starbreeze_Public_SBZInventoryManager_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZInventoryManager(); \
	friend struct Z_Construct_UClass_USBZInventoryManager_Statics; \
public: \
	DECLARE_CLASS(USBZInventoryManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZInventoryManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZInventoryManager_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSBZInventoryManager(); \
	friend struct Z_Construct_UClass_USBZInventoryManager_Statics; \
public: \
	DECLARE_CLASS(USBZInventoryManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZInventoryManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZInventoryManager_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZInventoryManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZInventoryManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZInventoryManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZInventoryManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZInventoryManager(USBZInventoryManager&&); \
	NO_API USBZInventoryManager(const USBZInventoryManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZInventoryManager_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZInventoryManager(USBZInventoryManager&&); \
	NO_API USBZInventoryManager(const USBZInventoryManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZInventoryManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZInventoryManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZInventoryManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZInventoryManager_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RewardRequestArray() { return STRUCT_OFFSET(USBZInventoryManager, RewardRequestArray); } \
	FORCEINLINE static uint32 __PPO__ServerPlayerOwnedItemAccelByteItemIdMap() { return STRUCT_OFFSET(USBZInventoryManager, ServerPlayerOwnedItemAccelByteItemIdMap); } \
	FORCEINLINE static uint32 __PPO__InventoryItemMap() { return STRUCT_OFFSET(USBZInventoryManager, InventoryItemMap); } \
	FORCEINLINE static uint32 __PPO__OwningEntitlementIdArray() { return STRUCT_OFFSET(USBZInventoryManager, OwningEntitlementIdArray); } \
	FORCEINLINE static uint32 __PPO__OwningItemIdArray() { return STRUCT_OFFSET(USBZInventoryManager, OwningItemIdArray); } \
	FORCEINLINE static uint32 __PPO__OwnedHeistSkus() { return STRUCT_OFFSET(USBZInventoryManager, OwnedHeistSkus); } \
	FORCEINLINE static uint32 __PPO__VendorPermissionArray() { return STRUCT_OFFSET(USBZInventoryManager, VendorPermissionArray); }


#define PAYDAY3_Source_Starbreeze_Public_SBZInventoryManager_h_15_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZInventoryManager_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZInventoryManager_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZInventoryManager_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZInventoryManager_h_17_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZInventoryManager_h_17_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZInventoryManager_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZInventoryManager_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZInventoryManager_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZInventoryManager_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZInventoryManager_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZInventoryManager_h_17_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZInventoryManager_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZInventoryManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZInventoryManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
