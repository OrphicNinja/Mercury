// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZCurrencyCode : uint8;
class USBZInventoryBaseData;
struct FGuid;
struct FSBZStoreItemUIData;
#ifdef STARBREEZE_SBZBlackMarketStoreItemButton_generated_h
#error "SBZBlackMarketStoreItemButton.generated.h already included, missing '#pragma once' in SBZBlackMarketStoreItemButton.h"
#endif
#define STARBREEZE_SBZBlackMarketStoreItemButton_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketStoreItemButton_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketStoreItemButton_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetItemCost); \
	DECLARE_FUNCTION(execGetItemData); \
	DECLARE_FUNCTION(execGetItemID); \
	DECLARE_FUNCTION(execInitializeStoreData); \
	DECLARE_FUNCTION(execIsTransactionInProgress);


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketStoreItemButton_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetItemCost); \
	DECLARE_FUNCTION(execGetItemData); \
	DECLARE_FUNCTION(execGetItemID); \
	DECLARE_FUNCTION(execInitializeStoreData); \
	DECLARE_FUNCTION(execIsTransactionInProgress);


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketStoreItemButton_h_13_EVENT_PARMS
#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketStoreItemButton_h_13_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketStoreItemButton_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZBlackMarketStoreItemButton(); \
	friend struct Z_Construct_UClass_USBZBlackMarketStoreItemButton_Statics; \
public: \
	DECLARE_CLASS(USBZBlackMarketStoreItemButton, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZBlackMarketStoreItemButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketStoreItemButton_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZBlackMarketStoreItemButton(); \
	friend struct Z_Construct_UClass_USBZBlackMarketStoreItemButton_Statics; \
public: \
	DECLARE_CLASS(USBZBlackMarketStoreItemButton, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZBlackMarketStoreItemButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketStoreItemButton_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZBlackMarketStoreItemButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZBlackMarketStoreItemButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZBlackMarketStoreItemButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZBlackMarketStoreItemButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZBlackMarketStoreItemButton(USBZBlackMarketStoreItemButton&&); \
	NO_API USBZBlackMarketStoreItemButton(const USBZBlackMarketStoreItemButton&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketStoreItemButton_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZBlackMarketStoreItemButton(USBZBlackMarketStoreItemButton&&); \
	NO_API USBZBlackMarketStoreItemButton(const USBZBlackMarketStoreItemButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZBlackMarketStoreItemButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZBlackMarketStoreItemButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZBlackMarketStoreItemButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketStoreItemButton_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StoreItemUIData() { return STRUCT_OFFSET(USBZBlackMarketStoreItemButton, StoreItemUIData); }


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketStoreItemButton_h_11_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketStoreItemButton_h_13_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketStoreItemButton_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketStoreItemButton_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketStoreItemButton_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketStoreItemButton_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketStoreItemButton_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketStoreItemButton_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketStoreItemButton_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketStoreItemButton_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketStoreItemButton_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketStoreItemButton_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketStoreItemButton_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketStoreItemButton_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketStoreItemButton_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketStoreItemButton_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZBlackMarketStoreItemButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketStoreItemButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
