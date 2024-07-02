// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZMetaRequestResult : uint8;
class USBZMenuButton;
#ifdef STARBREEZE_SBZBlackMarketPaydayStoreScreen_generated_h
#error "SBZBlackMarketPaydayStoreScreen.generated.h already included, missing '#pragma once' in SBZBlackMarketPaydayStoreScreen.h"
#endif
#define STARBREEZE_SBZBlackMarketPaydayStoreScreen_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketPaydayStoreScreen_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketPaydayStoreScreen_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBuyRealMoneyItemPurchaseCompleted); \
	DECLARE_FUNCTION(execOnRealMoneyItemButtonSelected);


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketPaydayStoreScreen_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBuyRealMoneyItemPurchaseCompleted); \
	DECLARE_FUNCTION(execOnRealMoneyItemButtonSelected);


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketPaydayStoreScreen_h_15_EVENT_PARMS \
	struct SBZBlackMarketPaydayStoreScreen_eventOnRealMoneyPurchaseWindowClosed_Parms \
	{ \
		bool IsSuccess; \
	}; \
	struct SBZBlackMarketPaydayStoreScreen_eventOnVendorItemButtonFocused_Parms \
	{ \
		USBZMenuButton* InButton; \
		bool bIsFocused; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketPaydayStoreScreen_h_15_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketPaydayStoreScreen_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZBlackMarketPaydayStoreScreen(); \
	friend struct Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_Statics; \
public: \
	DECLARE_CLASS(USBZBlackMarketPaydayStoreScreen, USBZMenuStackScreenWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZBlackMarketPaydayStoreScreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketPaydayStoreScreen_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSBZBlackMarketPaydayStoreScreen(); \
	friend struct Z_Construct_UClass_USBZBlackMarketPaydayStoreScreen_Statics; \
public: \
	DECLARE_CLASS(USBZBlackMarketPaydayStoreScreen, USBZMenuStackScreenWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZBlackMarketPaydayStoreScreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketPaydayStoreScreen_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZBlackMarketPaydayStoreScreen(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZBlackMarketPaydayStoreScreen) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZBlackMarketPaydayStoreScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZBlackMarketPaydayStoreScreen); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZBlackMarketPaydayStoreScreen(USBZBlackMarketPaydayStoreScreen&&); \
	NO_API USBZBlackMarketPaydayStoreScreen(const USBZBlackMarketPaydayStoreScreen&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketPaydayStoreScreen_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZBlackMarketPaydayStoreScreen(USBZBlackMarketPaydayStoreScreen&&); \
	NO_API USBZBlackMarketPaydayStoreScreen(const USBZBlackMarketPaydayStoreScreen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZBlackMarketPaydayStoreScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZBlackMarketPaydayStoreScreen); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZBlackMarketPaydayStoreScreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketPaydayStoreScreen_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Panel_ItemList() { return STRUCT_OFFSET(USBZBlackMarketPaydayStoreScreen, Panel_ItemList); } \
	FORCEINLINE static uint32 __PPO__RealMoneyStoreItemButtonClass() { return STRUCT_OFFSET(USBZBlackMarketPaydayStoreScreen, RealMoneyStoreItemButtonClass); } \
	FORCEINLINE static uint32 __PPO__PaydayCreditStoreItems() { return STRUCT_OFFSET(USBZBlackMarketPaydayStoreScreen, PaydayCreditStoreItems); }


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketPaydayStoreScreen_h_13_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketPaydayStoreScreen_h_15_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketPaydayStoreScreen_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketPaydayStoreScreen_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketPaydayStoreScreen_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketPaydayStoreScreen_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketPaydayStoreScreen_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketPaydayStoreScreen_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketPaydayStoreScreen_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketPaydayStoreScreen_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketPaydayStoreScreen_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketPaydayStoreScreen_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketPaydayStoreScreen_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketPaydayStoreScreen_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketPaydayStoreScreen_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketPaydayStoreScreen_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZBlackMarketPaydayStoreScreen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketPaydayStoreScreen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
