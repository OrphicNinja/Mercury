// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZMetaRequestResult : uint8;
struct FGuid;
class USBZMenuButton;
struct FSBZInventorySlotStoreItem;
#ifdef STARBREEZE_SBZMainMenuSuitInventoryScreen_generated_h
#error "SBZMainMenuSuitInventoryScreen.generated.h already included, missing '#pragma once' in SBZMainMenuSuitInventoryScreen.h"
#endif
#define STARBREEZE_SBZMainMenuSuitInventoryScreen_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitInventoryScreen_h_19_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitInventoryScreen_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanDiscardSuitInSlot); \
	DECLARE_FUNCTION(execDiscardItemDone); \
	DECLARE_FUNCTION(execNativeOnBuySlotsButtonSelected); \
	DECLARE_FUNCTION(execNativeOnDefaultSet); \
	DECLARE_FUNCTION(execNativeOnSuitDefaultButtonSelected); \
	DECLARE_FUNCTION(execNativeOnSuitSlotButtonSelected); \
	DECLARE_FUNCTION(execNativeSuitSlotButtonFocusedChanged); \
	DECLARE_FUNCTION(execOnBuySlotItemCompleted); \
	DECLARE_FUNCTION(execOnDiscardSuitPopUpClosed); \
	DECLARE_FUNCTION(execOnShowBuySlotPopUpClosed); \
	DECLARE_FUNCTION(execRefreshWidgetVisuals); \
	DECLARE_FUNCTION(execTryDiscardSuitInSlot);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitInventoryScreen_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanDiscardSuitInSlot); \
	DECLARE_FUNCTION(execDiscardItemDone); \
	DECLARE_FUNCTION(execNativeOnBuySlotsButtonSelected); \
	DECLARE_FUNCTION(execNativeOnDefaultSet); \
	DECLARE_FUNCTION(execNativeOnSuitDefaultButtonSelected); \
	DECLARE_FUNCTION(execNativeOnSuitSlotButtonSelected); \
	DECLARE_FUNCTION(execNativeSuitSlotButtonFocusedChanged); \
	DECLARE_FUNCTION(execOnBuySlotItemCompleted); \
	DECLARE_FUNCTION(execOnDiscardSuitPopUpClosed); \
	DECLARE_FUNCTION(execOnShowBuySlotPopUpClosed); \
	DECLARE_FUNCTION(execRefreshWidgetVisuals); \
	DECLARE_FUNCTION(execTryDiscardSuitInSlot);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitInventoryScreen_h_19_EVENT_PARMS \
	struct SBZMainMenuSuitInventoryScreen_eventOnItemDiscarded_Parms \
	{ \
		bool bWasSuccessful; \
	}; \
	struct SBZMainMenuSuitInventoryScreen_eventOnSlotPriceChanged_Parms \
	{ \
		FSBZInventorySlotStoreItem Item; \
	}; \
	struct SBZMainMenuSuitInventoryScreen_eventOnSlotPurchaseComplete_Parms \
	{ \
		bool bWasSuccessful; \
	}; \
	struct SBZMainMenuSuitInventoryScreen_eventSuitSlotButtonFocusedChanged_Parms \
	{ \
		USBZMenuButton* InFocusedButton; \
		bool bIsFocused; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitInventoryScreen_h_19_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitInventoryScreen_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuSuitInventoryScreen(); \
	friend struct Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuSuitInventoryScreen, USBZMenuStackInventoryBaseScreen, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuSuitInventoryScreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitInventoryScreen_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuSuitInventoryScreen(); \
	friend struct Z_Construct_UClass_USBZMainMenuSuitInventoryScreen_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuSuitInventoryScreen, USBZMenuStackInventoryBaseScreen, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuSuitInventoryScreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitInventoryScreen_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuSuitInventoryScreen(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuSuitInventoryScreen) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuSuitInventoryScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuSuitInventoryScreen); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuSuitInventoryScreen(USBZMainMenuSuitInventoryScreen&&); \
	NO_API USBZMainMenuSuitInventoryScreen(const USBZMainMenuSuitInventoryScreen&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitInventoryScreen_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuSuitInventoryScreen(USBZMainMenuSuitInventoryScreen&&); \
	NO_API USBZMainMenuSuitInventoryScreen(const USBZMainMenuSuitInventoryScreen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuSuitInventoryScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuSuitInventoryScreen); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuSuitInventoryScreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitInventoryScreen_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SuitSlotButtonClass() { return STRUCT_OFFSET(USBZMainMenuSuitInventoryScreen, SuitSlotButtonClass); } \
	FORCEINLINE static uint32 __PPO__Panel_SuitSlotButtons() { return STRUCT_OFFSET(USBZMainMenuSuitInventoryScreen, Panel_SuitSlotButtons); } \
	FORCEINLINE static uint32 __PPO__Button_BuySlots() { return STRUCT_OFFSET(USBZMainMenuSuitInventoryScreen, Button_BuySlots); } \
	FORCEINLINE static uint32 __PPO__Button_DefaultSuit() { return STRUCT_OFFSET(USBZMainMenuSuitInventoryScreen, Button_DefaultSuit); } \
	FORCEINLINE static uint32 __PPO__DiscardSuitPopUpBodyWidgetClass() { return STRUCT_OFFSET(USBZMainMenuSuitInventoryScreen, DiscardSuitPopUpBodyWidgetClass); } \
	FORCEINLINE static uint32 __PPO__DiscardSuitPopUpHeader() { return STRUCT_OFFSET(USBZMainMenuSuitInventoryScreen, DiscardSuitPopUpHeader); } \
	FORCEINLINE static uint32 __PPO__DiscardSuitPopUpAcceptAction() { return STRUCT_OFFSET(USBZMainMenuSuitInventoryScreen, DiscardSuitPopUpAcceptAction); } \
	FORCEINLINE static uint32 __PPO__DiscardSuitPopUpCancelAction() { return STRUCT_OFFSET(USBZMainMenuSuitInventoryScreen, DiscardSuitPopUpCancelAction); } \
	FORCEINLINE static uint32 __PPO__SuitIndexToDiscard() { return STRUCT_OFFSET(USBZMainMenuSuitInventoryScreen, SuitIndexToDiscard); } \
	FORCEINLINE static uint32 __PPO__DiscardSuitPopUpBody() { return STRUCT_OFFSET(USBZMainMenuSuitInventoryScreen, DiscardSuitPopUpBody); } \
	FORCEINLINE static uint32 __PPO__ActiveSuitSlotButton() { return STRUCT_OFFSET(USBZMainMenuSuitInventoryScreen, ActiveSuitSlotButton); } \
	FORCEINLINE static uint32 __PPO__SuitSlotButtonPool() { return STRUCT_OFFSET(USBZMainMenuSuitInventoryScreen, SuitSlotButtonPool); } \
	FORCEINLINE static uint32 __PPO__SlotItem() { return STRUCT_OFFSET(USBZMainMenuSuitInventoryScreen, SlotItem); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitInventoryScreen_h_17_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitInventoryScreen_h_19_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitInventoryScreen_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitInventoryScreen_h_19_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitInventoryScreen_h_19_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitInventoryScreen_h_19_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitInventoryScreen_h_19_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitInventoryScreen_h_19_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitInventoryScreen_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitInventoryScreen_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitInventoryScreen_h_19_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitInventoryScreen_h_19_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitInventoryScreen_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitInventoryScreen_h_19_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitInventoryScreen_h_19_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitInventoryScreen_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuSuitInventoryScreen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuSuitInventoryScreen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
