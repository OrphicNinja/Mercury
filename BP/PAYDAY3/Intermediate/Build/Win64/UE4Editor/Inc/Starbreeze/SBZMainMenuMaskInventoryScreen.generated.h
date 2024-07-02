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
#ifdef STARBREEZE_SBZMainMenuMaskInventoryScreen_generated_h
#error "SBZMainMenuMaskInventoryScreen.generated.h already included, missing '#pragma once' in SBZMainMenuMaskInventoryScreen.h"
#endif
#define STARBREEZE_SBZMainMenuMaskInventoryScreen_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuMaskInventoryScreen_h_21_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuMaskInventoryScreen_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanDiscardMaskInSlot); \
	DECLARE_FUNCTION(execDiscardItemDone); \
	DECLARE_FUNCTION(execNativeMaskSlotButtonFocusedChanged); \
	DECLARE_FUNCTION(execNativeOnBuySlotsButtonSelected); \
	DECLARE_FUNCTION(execNativeOnDefaultSet); \
	DECLARE_FUNCTION(execNativeOnMaskDefaultButtonSelected); \
	DECLARE_FUNCTION(execNativeOnMaskSlotButtonAltSelected); \
	DECLARE_FUNCTION(execNativeOnMaskSlotButtonSelected); \
	DECLARE_FUNCTION(execOnBuySlotItemCompleted); \
	DECLARE_FUNCTION(execOnDiscardMaskPopUpClosed); \
	DECLARE_FUNCTION(execOnShowBuySlotPopUpClosed); \
	DECLARE_FUNCTION(execRefreshWidgetVisuals); \
	DECLARE_FUNCTION(execTryDiscardMaskInSlot);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuMaskInventoryScreen_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanDiscardMaskInSlot); \
	DECLARE_FUNCTION(execDiscardItemDone); \
	DECLARE_FUNCTION(execNativeMaskSlotButtonFocusedChanged); \
	DECLARE_FUNCTION(execNativeOnBuySlotsButtonSelected); \
	DECLARE_FUNCTION(execNativeOnDefaultSet); \
	DECLARE_FUNCTION(execNativeOnMaskDefaultButtonSelected); \
	DECLARE_FUNCTION(execNativeOnMaskSlotButtonAltSelected); \
	DECLARE_FUNCTION(execNativeOnMaskSlotButtonSelected); \
	DECLARE_FUNCTION(execOnBuySlotItemCompleted); \
	DECLARE_FUNCTION(execOnDiscardMaskPopUpClosed); \
	DECLARE_FUNCTION(execOnShowBuySlotPopUpClosed); \
	DECLARE_FUNCTION(execRefreshWidgetVisuals); \
	DECLARE_FUNCTION(execTryDiscardMaskInSlot);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuMaskInventoryScreen_h_21_EVENT_PARMS \
	struct SBZMainMenuMaskInventoryScreen_eventMaskSlotButtonFocusedChanged_Parms \
	{ \
		USBZMenuButton* InFocusedButton; \
		bool bIsFocused; \
	}; \
	struct SBZMainMenuMaskInventoryScreen_eventOnEditButtonPressed_Parms \
	{ \
		int32 MaskSlotIndex; \
	}; \
	struct SBZMainMenuMaskInventoryScreen_eventOnItemDiscarded_Parms \
	{ \
		bool bWasSuccessful; \
	}; \
	struct SBZMainMenuMaskInventoryScreen_eventOnSlotPriceChanged_Parms \
	{ \
		FSBZInventorySlotStoreItem Item; \
	}; \
	struct SBZMainMenuMaskInventoryScreen_eventOnSlotPurchaseComplete_Parms \
	{ \
		bool bWasSuccessful; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuMaskInventoryScreen_h_21_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuMaskInventoryScreen_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuMaskInventoryScreen(); \
	friend struct Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuMaskInventoryScreen, USBZMenuStackInventoryBaseScreen, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuMaskInventoryScreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuMaskInventoryScreen_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuMaskInventoryScreen(); \
	friend struct Z_Construct_UClass_USBZMainMenuMaskInventoryScreen_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuMaskInventoryScreen, USBZMenuStackInventoryBaseScreen, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuMaskInventoryScreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuMaskInventoryScreen_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuMaskInventoryScreen(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuMaskInventoryScreen) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuMaskInventoryScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuMaskInventoryScreen); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuMaskInventoryScreen(USBZMainMenuMaskInventoryScreen&&); \
	NO_API USBZMainMenuMaskInventoryScreen(const USBZMainMenuMaskInventoryScreen&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuMaskInventoryScreen_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuMaskInventoryScreen(USBZMainMenuMaskInventoryScreen&&); \
	NO_API USBZMainMenuMaskInventoryScreen(const USBZMainMenuMaskInventoryScreen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuMaskInventoryScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuMaskInventoryScreen); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuMaskInventoryScreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuMaskInventoryScreen_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaskSlotButtonClass() { return STRUCT_OFFSET(USBZMainMenuMaskInventoryScreen, MaskSlotButtonClass); } \
	FORCEINLINE static uint32 __PPO__Panel_MaskSlotButtons() { return STRUCT_OFFSET(USBZMainMenuMaskInventoryScreen, Panel_MaskSlotButtons); } \
	FORCEINLINE static uint32 __PPO__Button_BuySlots() { return STRUCT_OFFSET(USBZMainMenuMaskInventoryScreen, Button_BuySlots); } \
	FORCEINLINE static uint32 __PPO__Button_DefaultMask() { return STRUCT_OFFSET(USBZMainMenuMaskInventoryScreen, Button_DefaultMask); } \
	FORCEINLINE static uint32 __PPO__DiscardMaskPopUpBodyWidgetClass() { return STRUCT_OFFSET(USBZMainMenuMaskInventoryScreen, DiscardMaskPopUpBodyWidgetClass); } \
	FORCEINLINE static uint32 __PPO__DiscardMaskPopUpHeader() { return STRUCT_OFFSET(USBZMainMenuMaskInventoryScreen, DiscardMaskPopUpHeader); } \
	FORCEINLINE static uint32 __PPO__DiscardMaskPopUpAcceptAction() { return STRUCT_OFFSET(USBZMainMenuMaskInventoryScreen, DiscardMaskPopUpAcceptAction); } \
	FORCEINLINE static uint32 __PPO__DiscardMaskPopUpCancelAction() { return STRUCT_OFFSET(USBZMainMenuMaskInventoryScreen, DiscardMaskPopUpCancelAction); } \
	FORCEINLINE static uint32 __PPO__CustomizableMaskData() { return STRUCT_OFFSET(USBZMainMenuMaskInventoryScreen, CustomizableMaskData); } \
	FORCEINLINE static uint32 __PPO__MaskMould() { return STRUCT_OFFSET(USBZMainMenuMaskInventoryScreen, MaskMould); } \
	FORCEINLINE static uint32 __PPO__ActiveMaskSlotButton() { return STRUCT_OFFSET(USBZMainMenuMaskInventoryScreen, ActiveMaskSlotButton); } \
	FORCEINLINE static uint32 __PPO__MaskIndexToDiscard() { return STRUCT_OFFSET(USBZMainMenuMaskInventoryScreen, MaskIndexToDiscard); } \
	FORCEINLINE static uint32 __PPO__DiscardMaskPopUpBody() { return STRUCT_OFFSET(USBZMainMenuMaskInventoryScreen, DiscardMaskPopUpBody); } \
	FORCEINLINE static uint32 __PPO__MaskSlotButtonPool() { return STRUCT_OFFSET(USBZMainMenuMaskInventoryScreen, MaskSlotButtonPool); } \
	FORCEINLINE static uint32 __PPO__SlotItem() { return STRUCT_OFFSET(USBZMainMenuMaskInventoryScreen, SlotItem); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuMaskInventoryScreen_h_19_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuMaskInventoryScreen_h_21_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuMaskInventoryScreen_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuMaskInventoryScreen_h_21_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuMaskInventoryScreen_h_21_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuMaskInventoryScreen_h_21_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuMaskInventoryScreen_h_21_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuMaskInventoryScreen_h_21_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuMaskInventoryScreen_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuMaskInventoryScreen_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuMaskInventoryScreen_h_21_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuMaskInventoryScreen_h_21_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuMaskInventoryScreen_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuMaskInventoryScreen_h_21_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuMaskInventoryScreen_h_21_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuMaskInventoryScreen_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuMaskInventoryScreen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuMaskInventoryScreen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
