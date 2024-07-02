// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZWeaponPartDataAsset;
class USBZWeaponPartSlot;
enum class ESBZEquippableLoadoutSlot : uint8;
enum class ESBZMetaRequestResult : uint8;
struct FGuid;
class USBZMenuButton;
class USBZMainMenuWeaponPartProgressionButton;
#ifdef STARBREEZE_SBZMainMenuWeaponModifierScreen_generated_h
#error "SBZMainMenuWeaponModifierScreen.generated.h already included, missing '#pragma once' in SBZMainMenuWeaponModifierScreen.h"
#endif
#define STARBREEZE_SBZMainMenuWeaponModifierScreen_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponModifierScreen_h_20_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponModifierScreen_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBlockedSlotNamesForWeaponPart); \
	DECLARE_FUNCTION(execGetCurrentWeaponPartSlot); \
	DECLARE_FUNCTION(execGetWeaponSlotInfo); \
	DECLARE_FUNCTION(execInitializeWeaponPartCustomization); \
	DECLARE_FUNCTION(execOnPayForAttachItemDone); \
	DECLARE_FUNCTION(execOnPurchaseItemPopUpClosed); \
	DECLARE_FUNCTION(execOnWeaponPartProgressionButtonFocusedChanged); \
	DECLARE_FUNCTION(execOnWeaponPartProgressionButtonSelected); \
	DECLARE_FUNCTION(execSendPurchaseAttemptEvent); \
	DECLARE_FUNCTION(execSetNewEquippedButton);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponModifierScreen_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBlockedSlotNamesForWeaponPart); \
	DECLARE_FUNCTION(execGetCurrentWeaponPartSlot); \
	DECLARE_FUNCTION(execGetWeaponSlotInfo); \
	DECLARE_FUNCTION(execInitializeWeaponPartCustomization); \
	DECLARE_FUNCTION(execOnPayForAttachItemDone); \
	DECLARE_FUNCTION(execOnPurchaseItemPopUpClosed); \
	DECLARE_FUNCTION(execOnWeaponPartProgressionButtonFocusedChanged); \
	DECLARE_FUNCTION(execOnWeaponPartProgressionButtonSelected); \
	DECLARE_FUNCTION(execSendPurchaseAttemptEvent); \
	DECLARE_FUNCTION(execSetNewEquippedButton);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponModifierScreen_h_20_EVENT_PARMS \
	struct SBZMainMenuWeaponModifierScreen_eventNewWeaponPartFocused_Parms \
	{ \
		const USBZMainMenuWeaponPartProgressionButton* NewFocusedButton; \
	}; \
	struct SBZMainMenuWeaponModifierScreen_eventOnWeaponPartButtonEquipped_Parms \
	{ \
		const USBZMainMenuWeaponPartProgressionButton* EquippedButton; \
	}; \
	struct SBZMainMenuWeaponModifierScreen_eventOnWeaponPartButtonSelected_Parms \
	{ \
		const USBZMainMenuWeaponPartProgressionButton* SelectedButton; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponModifierScreen_h_20_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponModifierScreen_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuWeaponModifierScreen(); \
	friend struct Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuWeaponModifierScreen, USBZMenuStackScreenWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuWeaponModifierScreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponModifierScreen_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuWeaponModifierScreen(); \
	friend struct Z_Construct_UClass_USBZMainMenuWeaponModifierScreen_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuWeaponModifierScreen, USBZMenuStackScreenWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuWeaponModifierScreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponModifierScreen_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuWeaponModifierScreen(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuWeaponModifierScreen) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuWeaponModifierScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuWeaponModifierScreen); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuWeaponModifierScreen(USBZMainMenuWeaponModifierScreen&&); \
	NO_API USBZMainMenuWeaponModifierScreen(const USBZMainMenuWeaponModifierScreen&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponModifierScreen_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuWeaponModifierScreen(USBZMainMenuWeaponModifierScreen&&); \
	NO_API USBZMainMenuWeaponModifierScreen(const USBZMainMenuWeaponModifierScreen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuWeaponModifierScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuWeaponModifierScreen); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuWeaponModifierScreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponModifierScreen_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Panel_WeaponProgressionPartButtons() { return STRUCT_OFFSET(USBZMainMenuWeaponModifierScreen, Panel_WeaponProgressionPartButtons); } \
	FORCEINLINE static uint32 __PPO__WeaponPartProgressionButtonClass() { return STRUCT_OFFSET(USBZMainMenuWeaponModifierScreen, WeaponPartProgressionButtonClass); } \
	FORCEINLINE static uint32 __PPO__EquippedWeaponProgressionButton() { return STRUCT_OFFSET(USBZMainMenuWeaponModifierScreen, EquippedWeaponProgressionButton); } \
	FORCEINLINE static uint32 __PPO__Panel_TransactionInProgress() { return STRUCT_OFFSET(USBZMainMenuWeaponModifierScreen, Panel_TransactionInProgress); } \
	FORCEINLINE static uint32 __PPO__OkControlReference() { return STRUCT_OFFSET(USBZMainMenuWeaponModifierScreen, OkControlReference); } \
	FORCEINLINE static uint32 __PPO__PurchaseItemPopUpBodyWidgetClass() { return STRUCT_OFFSET(USBZMainMenuWeaponModifierScreen, PurchaseItemPopUpBodyWidgetClass); } \
	FORCEINLINE static uint32 __PPO__PurchaseItemPopUpHeader() { return STRUCT_OFFSET(USBZMainMenuWeaponModifierScreen, PurchaseItemPopUpHeader); } \
	FORCEINLINE static uint32 __PPO__PurchaseItemPopUpAcceptAction() { return STRUCT_OFFSET(USBZMainMenuWeaponModifierScreen, PurchaseItemPopUpAcceptAction); } \
	FORCEINLINE static uint32 __PPO__PurchaseItemPopUpCancelAction() { return STRUCT_OFFSET(USBZMainMenuWeaponModifierScreen, PurchaseItemPopUpCancelAction); } \
	FORCEINLINE static uint32 __PPO__WeaponPartSlot() { return STRUCT_OFFSET(USBZMainMenuWeaponModifierScreen, WeaponPartSlot); } \
	FORCEINLINE static uint32 __PPO__EquippableSlot() { return STRUCT_OFFSET(USBZMainMenuWeaponModifierScreen, EquippableSlot); } \
	FORCEINLINE static uint32 __PPO__WeaponSlotIndex() { return STRUCT_OFFSET(USBZMainMenuWeaponModifierScreen, WeaponSlotIndex); } \
	FORCEINLINE static uint32 __PPO__WeaponPartProgressionButtonPool() { return STRUCT_OFFSET(USBZMainMenuWeaponModifierScreen, WeaponPartProgressionButtonPool); } \
	FORCEINLINE static uint32 __PPO__WeaponPartInPurchase() { return STRUCT_OFFSET(USBZMainMenuWeaponModifierScreen, WeaponPartInPurchase); } \
	FORCEINLINE static uint32 __PPO__SelectedWeaponProgressionButton() { return STRUCT_OFFSET(USBZMainMenuWeaponModifierScreen, SelectedWeaponProgressionButton); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponModifierScreen_h_18_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponModifierScreen_h_20_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponModifierScreen_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponModifierScreen_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponModifierScreen_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponModifierScreen_h_20_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponModifierScreen_h_20_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponModifierScreen_h_20_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponModifierScreen_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponModifierScreen_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponModifierScreen_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponModifierScreen_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponModifierScreen_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponModifierScreen_h_20_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponModifierScreen_h_20_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponModifierScreen_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuWeaponModifierScreen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponModifierScreen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
