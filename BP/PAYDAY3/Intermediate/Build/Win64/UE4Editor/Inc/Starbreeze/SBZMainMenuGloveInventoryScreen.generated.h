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
#ifdef STARBREEZE_SBZMainMenuGloveInventoryScreen_generated_h
#error "SBZMainMenuGloveInventoryScreen.generated.h already included, missing '#pragma once' in SBZMainMenuGloveInventoryScreen.h"
#endif
#define STARBREEZE_SBZMainMenuGloveInventoryScreen_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuGloveInventoryScreen_h_19_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuGloveInventoryScreen_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanDiscardGloveInSlot); \
	DECLARE_FUNCTION(execDiscardItemDone); \
	DECLARE_FUNCTION(execNativeGloveSlotButtonFocusedChanged); \
	DECLARE_FUNCTION(execNativeOnBuySlotsButtonSelected); \
	DECLARE_FUNCTION(execNativeOnDefaultSet); \
	DECLARE_FUNCTION(execNativeOnGloveDefaultButtonSelected); \
	DECLARE_FUNCTION(execNativeOnGloveSlotButtonSelected); \
	DECLARE_FUNCTION(execOnBuySlotItemCompleted); \
	DECLARE_FUNCTION(execOnDiscardGlovePopUpClosed); \
	DECLARE_FUNCTION(execOnShowBuySlotPopUpClosed); \
	DECLARE_FUNCTION(execRefreshWidgetVisuals); \
	DECLARE_FUNCTION(execTryDiscardGloveInSlot);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuGloveInventoryScreen_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanDiscardGloveInSlot); \
	DECLARE_FUNCTION(execDiscardItemDone); \
	DECLARE_FUNCTION(execNativeGloveSlotButtonFocusedChanged); \
	DECLARE_FUNCTION(execNativeOnBuySlotsButtonSelected); \
	DECLARE_FUNCTION(execNativeOnDefaultSet); \
	DECLARE_FUNCTION(execNativeOnGloveDefaultButtonSelected); \
	DECLARE_FUNCTION(execNativeOnGloveSlotButtonSelected); \
	DECLARE_FUNCTION(execOnBuySlotItemCompleted); \
	DECLARE_FUNCTION(execOnDiscardGlovePopUpClosed); \
	DECLARE_FUNCTION(execOnShowBuySlotPopUpClosed); \
	DECLARE_FUNCTION(execRefreshWidgetVisuals); \
	DECLARE_FUNCTION(execTryDiscardGloveInSlot);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuGloveInventoryScreen_h_19_EVENT_PARMS \
	struct SBZMainMenuGloveInventoryScreen_eventGloveSlotButtonFocusedChanged_Parms \
	{ \
		USBZMenuButton* InFocusedButton; \
		bool bIsFocused; \
	}; \
	struct SBZMainMenuGloveInventoryScreen_eventOnItemDiscarded_Parms \
	{ \
		bool bWasSuccessful; \
	}; \
	struct SBZMainMenuGloveInventoryScreen_eventOnSlotPriceChanged_Parms \
	{ \
		FSBZInventorySlotStoreItem Item; \
	}; \
	struct SBZMainMenuGloveInventoryScreen_eventOnSlotPurchaseComplete_Parms \
	{ \
		bool bWasSuccessful; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuGloveInventoryScreen_h_19_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuGloveInventoryScreen_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuGloveInventoryScreen(); \
	friend struct Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuGloveInventoryScreen, USBZMenuStackInventoryBaseScreen, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuGloveInventoryScreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuGloveInventoryScreen_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuGloveInventoryScreen(); \
	friend struct Z_Construct_UClass_USBZMainMenuGloveInventoryScreen_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuGloveInventoryScreen, USBZMenuStackInventoryBaseScreen, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuGloveInventoryScreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuGloveInventoryScreen_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuGloveInventoryScreen(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuGloveInventoryScreen) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuGloveInventoryScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuGloveInventoryScreen); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuGloveInventoryScreen(USBZMainMenuGloveInventoryScreen&&); \
	NO_API USBZMainMenuGloveInventoryScreen(const USBZMainMenuGloveInventoryScreen&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuGloveInventoryScreen_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuGloveInventoryScreen(USBZMainMenuGloveInventoryScreen&&); \
	NO_API USBZMainMenuGloveInventoryScreen(const USBZMainMenuGloveInventoryScreen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuGloveInventoryScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuGloveInventoryScreen); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuGloveInventoryScreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuGloveInventoryScreen_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GloveSlotButtonClass() { return STRUCT_OFFSET(USBZMainMenuGloveInventoryScreen, GloveSlotButtonClass); } \
	FORCEINLINE static uint32 __PPO__Panel_GloveSlotButtons() { return STRUCT_OFFSET(USBZMainMenuGloveInventoryScreen, Panel_GloveSlotButtons); } \
	FORCEINLINE static uint32 __PPO__Button_BuySlots() { return STRUCT_OFFSET(USBZMainMenuGloveInventoryScreen, Button_BuySlots); } \
	FORCEINLINE static uint32 __PPO__Button_DefaultGlove() { return STRUCT_OFFSET(USBZMainMenuGloveInventoryScreen, Button_DefaultGlove); } \
	FORCEINLINE static uint32 __PPO__DiscardGlovePopUpBodyWidgetClass() { return STRUCT_OFFSET(USBZMainMenuGloveInventoryScreen, DiscardGlovePopUpBodyWidgetClass); } \
	FORCEINLINE static uint32 __PPO__DiscardGlovePopUpHeader() { return STRUCT_OFFSET(USBZMainMenuGloveInventoryScreen, DiscardGlovePopUpHeader); } \
	FORCEINLINE static uint32 __PPO__DiscardGlovePopUpAcceptAction() { return STRUCT_OFFSET(USBZMainMenuGloveInventoryScreen, DiscardGlovePopUpAcceptAction); } \
	FORCEINLINE static uint32 __PPO__DiscardGlovePopUpCancelAction() { return STRUCT_OFFSET(USBZMainMenuGloveInventoryScreen, DiscardGlovePopUpCancelAction); } \
	FORCEINLINE static uint32 __PPO__GloveIndexToDiscard() { return STRUCT_OFFSET(USBZMainMenuGloveInventoryScreen, GloveIndexToDiscard); } \
	FORCEINLINE static uint32 __PPO__DiscardGlovePopUpBody() { return STRUCT_OFFSET(USBZMainMenuGloveInventoryScreen, DiscardGlovePopUpBody); } \
	FORCEINLINE static uint32 __PPO__ActiveGloveSlotButton() { return STRUCT_OFFSET(USBZMainMenuGloveInventoryScreen, ActiveGloveSlotButton); } \
	FORCEINLINE static uint32 __PPO__GloveSlotButtonPool() { return STRUCT_OFFSET(USBZMainMenuGloveInventoryScreen, GloveSlotButtonPool); } \
	FORCEINLINE static uint32 __PPO__SlotItem() { return STRUCT_OFFSET(USBZMainMenuGloveInventoryScreen, SlotItem); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuGloveInventoryScreen_h_17_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuGloveInventoryScreen_h_19_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuGloveInventoryScreen_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuGloveInventoryScreen_h_19_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuGloveInventoryScreen_h_19_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuGloveInventoryScreen_h_19_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuGloveInventoryScreen_h_19_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuGloveInventoryScreen_h_19_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuGloveInventoryScreen_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuGloveInventoryScreen_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuGloveInventoryScreen_h_19_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuGloveInventoryScreen_h_19_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuGloveInventoryScreen_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuGloveInventoryScreen_h_19_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuGloveInventoryScreen_h_19_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuGloveInventoryScreen_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuGloveInventoryScreen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuGloveInventoryScreen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
