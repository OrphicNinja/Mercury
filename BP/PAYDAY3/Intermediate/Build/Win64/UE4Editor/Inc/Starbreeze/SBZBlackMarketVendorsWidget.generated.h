// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZBlackMarketCategoryWidget;
class USBZMenuButton;
enum class ESBZMetaRequestResult : uint8;
struct FGuid;
struct FSBZStoreItemUIData;
struct FSBZBlackMarketUIVendorData;
class USBZInventoryBaseData;
#ifdef STARBREEZE_SBZBlackMarketVendorsWidget_generated_h
#error "SBZBlackMarketVendorsWidget.generated.h already included, missing '#pragma once' in SBZBlackMarketVendorsWidget.h"
#endif
#define STARBREEZE_SBZBlackMarketVendorsWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorsWidget_h_27_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorsWidget_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFirstCategoryWidget); \
	DECLARE_FUNCTION(execGoToNextVendor); \
	DECLARE_FUNCTION(execGoToPreviousVendor); \
	DECLARE_FUNCTION(execNativeOnVendorButtonSelected); \
	DECLARE_FUNCTION(execOnBuyItemCompleted); \
	DECLARE_FUNCTION(execOnBuyRealMoneyItemCompleted); \
	DECLARE_FUNCTION(execOnPurchaseItemPopUpClosed); \
	DECLARE_FUNCTION(execOnRefreshCurrentVendor); \
	DECLARE_FUNCTION(execOnVendorItemButtonSelected); \
	DECLARE_FUNCTION(execSendPurchaseAttemptEvent); \
	DECLARE_FUNCTION(execTryBuyItem); \
	DECLARE_FUNCTION(execUpdateActiveVendor);


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorsWidget_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFirstCategoryWidget); \
	DECLARE_FUNCTION(execGoToNextVendor); \
	DECLARE_FUNCTION(execGoToPreviousVendor); \
	DECLARE_FUNCTION(execNativeOnVendorButtonSelected); \
	DECLARE_FUNCTION(execOnBuyItemCompleted); \
	DECLARE_FUNCTION(execOnBuyRealMoneyItemCompleted); \
	DECLARE_FUNCTION(execOnPurchaseItemPopUpClosed); \
	DECLARE_FUNCTION(execOnRefreshCurrentVendor); \
	DECLARE_FUNCTION(execOnVendorItemButtonSelected); \
	DECLARE_FUNCTION(execSendPurchaseAttemptEvent); \
	DECLARE_FUNCTION(execTryBuyItem); \
	DECLARE_FUNCTION(execUpdateActiveVendor);


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorsWidget_h_27_EVENT_PARMS \
	struct SBZBlackMarketVendorsWidget_eventOnTransactionProgressChanged_Parms \
	{ \
		bool bInIsTransactionInProgress; \
		bool bIsTransactionSuccessful; \
	}; \
	struct SBZBlackMarketVendorsWidget_eventOnVendorButtonFocused_Parms \
	{ \
		USBZMenuButton* InButton; \
		bool bIsFocused; \
	}; \
	struct SBZBlackMarketVendorsWidget_eventOnVendorChanged_Parms \
	{ \
		FSBZBlackMarketUIVendorData NewVendor; \
	}; \
	struct SBZBlackMarketVendorsWidget_eventOnVendorItemButtonFocused_Parms \
	{ \
		USBZMenuButton* InButton; \
		bool bIsFocused; \
	}; \
	struct SBZBlackMarketVendorsWidget_eventOnVendorItemTransactionComplete_Parms \
	{ \
		ESBZMetaRequestResult MetaResult; \
		const USBZInventoryBaseData* InventoryItemData; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorsWidget_h_27_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorsWidget_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZBlackMarketVendorsWidget(); \
	friend struct Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics; \
public: \
	DECLARE_CLASS(USBZBlackMarketVendorsWidget, USBZMenuStackScreenWidgetWithTutorial, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZBlackMarketVendorsWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorsWidget_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUSBZBlackMarketVendorsWidget(); \
	friend struct Z_Construct_UClass_USBZBlackMarketVendorsWidget_Statics; \
public: \
	DECLARE_CLASS(USBZBlackMarketVendorsWidget, USBZMenuStackScreenWidgetWithTutorial, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZBlackMarketVendorsWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorsWidget_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZBlackMarketVendorsWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZBlackMarketVendorsWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZBlackMarketVendorsWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZBlackMarketVendorsWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZBlackMarketVendorsWidget(USBZBlackMarketVendorsWidget&&); \
	NO_API USBZBlackMarketVendorsWidget(const USBZBlackMarketVendorsWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorsWidget_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZBlackMarketVendorsWidget(USBZBlackMarketVendorsWidget&&); \
	NO_API USBZBlackMarketVendorsWidget(const USBZBlackMarketVendorsWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZBlackMarketVendorsWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZBlackMarketVendorsWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZBlackMarketVendorsWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorsWidget_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Panel_CategoriesList() { return STRUCT_OFFSET(USBZBlackMarketVendorsWidget, Panel_CategoriesList); } \
	FORCEINLINE static uint32 __PPO__Navbar_Vendors() { return STRUCT_OFFSET(USBZBlackMarketVendorsWidget, Navbar_Vendors); } \
	FORCEINLINE static uint32 __PPO__CategoryButtonClass() { return STRUCT_OFFSET(USBZBlackMarketVendorsWidget, CategoryButtonClass); } \
	FORCEINLINE static uint32 __PPO__StoreItemButtonClass() { return STRUCT_OFFSET(USBZBlackMarketVendorsWidget, StoreItemButtonClass); } \
	FORCEINLINE static uint32 __PPO__GoldStoreItemButtonClass() { return STRUCT_OFFSET(USBZBlackMarketVendorsWidget, GoldStoreItemButtonClass); } \
	FORCEINLINE static uint32 __PPO__PaydayStoreControlsReferenceAction() { return STRUCT_OFFSET(USBZBlackMarketVendorsWidget, PaydayStoreControlsReferenceAction); } \
	FORCEINLINE static uint32 __PPO__ControlsRefActionWidget_PaydayStore() { return STRUCT_OFFSET(USBZBlackMarketVendorsWidget, ControlsRefActionWidget_PaydayStore); } \
	FORCEINLINE static uint32 __PPO__VendorButtonClass() { return STRUCT_OFFSET(USBZBlackMarketVendorsWidget, VendorButtonClass); } \
	FORCEINLINE static uint32 __PPO__bIsTransactionInProgress() { return STRUCT_OFFSET(USBZBlackMarketVendorsWidget, bIsTransactionInProgress); } \
	FORCEINLINE static uint32 __PPO__ActiveVendorIndex() { return STRUCT_OFFSET(USBZBlackMarketVendorsWidget, ActiveVendorIndex); } \
	FORCEINLINE static uint32 __PPO__VendorsData() { return STRUCT_OFFSET(USBZBlackMarketVendorsWidget, VendorsData); } \
	FORCEINLINE static uint32 __PPO__PurchaseTargetButton() { return STRUCT_OFFSET(USBZBlackMarketVendorsWidget, PurchaseTargetButton); } \
	FORCEINLINE static uint32 __PPO__PurchaseSlotUIData() { return STRUCT_OFFSET(USBZBlackMarketVendorsWidget, PurchaseSlotUIData); } \
	FORCEINLINE static uint32 __PPO__StoreItemButtonPool() { return STRUCT_OFFSET(USBZBlackMarketVendorsWidget, StoreItemButtonPool); } \
	FORCEINLINE static uint32 __PPO__GoldStoreItemButtonPool() { return STRUCT_OFFSET(USBZBlackMarketVendorsWidget, GoldStoreItemButtonPool); } \
	FORCEINLINE static uint32 __PPO__PurchaseItemPopUpBodyWidgetClass() { return STRUCT_OFFSET(USBZBlackMarketVendorsWidget, PurchaseItemPopUpBodyWidgetClass); } \
	FORCEINLINE static uint32 __PPO__PurchaseItemSlotPopUpBodyWidgetClass() { return STRUCT_OFFSET(USBZBlackMarketVendorsWidget, PurchaseItemSlotPopUpBodyWidgetClass); } \
	FORCEINLINE static uint32 __PPO__PurchaseItemPopUpHeader() { return STRUCT_OFFSET(USBZBlackMarketVendorsWidget, PurchaseItemPopUpHeader); } \
	FORCEINLINE static uint32 __PPO__PurchaseItemPopUpAcceptAction() { return STRUCT_OFFSET(USBZBlackMarketVendorsWidget, PurchaseItemPopUpAcceptAction); } \
	FORCEINLINE static uint32 __PPO__PurchaseItemPopUpCancelAction() { return STRUCT_OFFSET(USBZBlackMarketVendorsWidget, PurchaseItemPopUpCancelAction); } \
	FORCEINLINE static uint32 __PPO__PopUpData() { return STRUCT_OFFSET(USBZBlackMarketVendorsWidget, PopUpData); } \
	FORCEINLINE static uint32 __PPO__PurchaseItemPopUpBody() { return STRUCT_OFFSET(USBZBlackMarketVendorsWidget, PurchaseItemPopUpBody); }


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorsWidget_h_25_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorsWidget_h_27_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorsWidget_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorsWidget_h_27_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorsWidget_h_27_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorsWidget_h_27_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorsWidget_h_27_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorsWidget_h_27_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorsWidget_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorsWidget_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorsWidget_h_27_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorsWidget_h_27_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorsWidget_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorsWidget_h_27_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorsWidget_h_27_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorsWidget_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZBlackMarketVendorsWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketVendorsWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
