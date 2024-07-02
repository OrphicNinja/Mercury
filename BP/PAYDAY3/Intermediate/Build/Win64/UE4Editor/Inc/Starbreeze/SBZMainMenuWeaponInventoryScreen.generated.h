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
enum class ESBZEquippableLoadoutSlot : uint8;
class USBZMenuButton;
class USBZInventoryBaseData;
#ifdef STARBREEZE_SBZMainMenuWeaponInventoryScreen_generated_h
#error "SBZMainMenuWeaponInventoryScreen.generated.h already included, missing '#pragma once' in SBZMainMenuWeaponInventoryScreen.h"
#endif
#define STARBREEZE_SBZMainMenuWeaponInventoryScreen_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryScreen_h_20_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryScreen_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanDiscardWeaponIndex); \
	DECLARE_FUNCTION(execDiscardItemDone); \
	DECLARE_FUNCTION(execDisplayWeaponInventoryScreen); \
	DECLARE_FUNCTION(execHandleProgressionSave); \
	DECLARE_FUNCTION(execNativeOnWeaponSlotButtonSelected); \
	DECLARE_FUNCTION(execNativeOnWeaponSlotStoreItemTransactionComplete); \
	DECLARE_FUNCTION(execOnBuyWeaponSlotItemCompleted); \
	DECLARE_FUNCTION(execOnDiscardWeaponPopUpClosed); \
	DECLARE_FUNCTION(execOnShowBuySlotPopUpClosed); \
	DECLARE_FUNCTION(execTryBuyWeaponSlot); \
	DECLARE_FUNCTION(execTryDiscardWeaponInIndex); \
	DECLARE_FUNCTION(execUpdateActiveWeaponSlotIndex); \
	DECLARE_FUNCTION(execUpdateWeaponSlotButtons);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryScreen_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanDiscardWeaponIndex); \
	DECLARE_FUNCTION(execDiscardItemDone); \
	DECLARE_FUNCTION(execDisplayWeaponInventoryScreen); \
	DECLARE_FUNCTION(execHandleProgressionSave); \
	DECLARE_FUNCTION(execNativeOnWeaponSlotButtonSelected); \
	DECLARE_FUNCTION(execNativeOnWeaponSlotStoreItemTransactionComplete); \
	DECLARE_FUNCTION(execOnBuyWeaponSlotItemCompleted); \
	DECLARE_FUNCTION(execOnDiscardWeaponPopUpClosed); \
	DECLARE_FUNCTION(execOnShowBuySlotPopUpClosed); \
	DECLARE_FUNCTION(execTryBuyWeaponSlot); \
	DECLARE_FUNCTION(execTryDiscardWeaponInIndex); \
	DECLARE_FUNCTION(execUpdateActiveWeaponSlotIndex); \
	DECLARE_FUNCTION(execUpdateWeaponSlotButtons);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryScreen_h_20_EVENT_PARMS \
	struct SBZMainMenuWeaponInventoryScreen_eventOnBuyWeaponSlotTransactionFailed_Parms \
	{ \
		ESBZMetaRequestResult Result; \
	}; \
	struct SBZMainMenuWeaponInventoryScreen_eventOnWeaponInSlotDiscarded_Parms \
	{ \
		bool bIsWeaponDiscarded; \
	}; \
	struct SBZMainMenuWeaponInventoryScreen_eventWeaponSlotButtonFocusedChanged_Parms \
	{ \
		USBZMenuButton* SelectedButton; \
		bool bIsFocused; \
	}; \
	struct SBZMainMenuWeaponInventoryScreen_eventWeaponSlotStoreItemTransactionComplete_Parms \
	{ \
		ESBZMetaRequestResult MetaResult; \
		const USBZInventoryBaseData* InventoryItemData; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryScreen_h_20_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryScreen_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuWeaponInventoryScreen(); \
	friend struct Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuWeaponInventoryScreen, USBZMenuStackInventoryBaseScreen, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuWeaponInventoryScreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryScreen_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuWeaponInventoryScreen(); \
	friend struct Z_Construct_UClass_USBZMainMenuWeaponInventoryScreen_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuWeaponInventoryScreen, USBZMenuStackInventoryBaseScreen, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuWeaponInventoryScreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryScreen_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuWeaponInventoryScreen(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuWeaponInventoryScreen) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuWeaponInventoryScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuWeaponInventoryScreen); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuWeaponInventoryScreen(USBZMainMenuWeaponInventoryScreen&&); \
	NO_API USBZMainMenuWeaponInventoryScreen(const USBZMainMenuWeaponInventoryScreen&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryScreen_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuWeaponInventoryScreen(USBZMainMenuWeaponInventoryScreen&&); \
	NO_API USBZMainMenuWeaponInventoryScreen(const USBZMainMenuWeaponInventoryScreen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuWeaponInventoryScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuWeaponInventoryScreen); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuWeaponInventoryScreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryScreen_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponSlotButtonClass() { return STRUCT_OFFSET(USBZMainMenuWeaponInventoryScreen, WeaponSlotButtonClass); } \
	FORCEINLINE static uint32 __PPO__Panel_WeaponSlotButtons() { return STRUCT_OFFSET(USBZMainMenuWeaponInventoryScreen, Panel_WeaponSlotButtons); } \
	FORCEINLINE static uint32 __PPO__EquippableSlot() { return STRUCT_OFFSET(USBZMainMenuWeaponInventoryScreen, EquippableSlot); } \
	FORCEINLINE static uint32 __PPO__CurrentLoadoutIndex() { return STRUCT_OFFSET(USBZMainMenuWeaponInventoryScreen, CurrentLoadoutIndex); } \
	FORCEINLINE static uint32 __PPO__ActiveWeaponSlotIndex() { return STRUCT_OFFSET(USBZMainMenuWeaponInventoryScreen, ActiveWeaponSlotIndex); } \
	FORCEINLINE static uint32 __PPO__ActiveLoadoutWeaponSlotIndex() { return STRUCT_OFFSET(USBZMainMenuWeaponInventoryScreen, ActiveLoadoutWeaponSlotIndex); } \
	FORCEINLINE static uint32 __PPO__ActiveWeaponSlots() { return STRUCT_OFFSET(USBZMainMenuWeaponInventoryScreen, ActiveWeaponSlots); } \
	FORCEINLINE static uint32 __PPO__WeaponSlotCount() { return STRUCT_OFFSET(USBZMainMenuWeaponInventoryScreen, WeaponSlotCount); } \
	FORCEINLINE static uint32 __PPO__Button_WeaponSlotStoreItem() { return STRUCT_OFFSET(USBZMainMenuWeaponInventoryScreen, Button_WeaponSlotStoreItem); } \
	FORCEINLINE static uint32 __PPO__DiscardWeaponPopUpBodyWidgetClass() { return STRUCT_OFFSET(USBZMainMenuWeaponInventoryScreen, DiscardWeaponPopUpBodyWidgetClass); } \
	FORCEINLINE static uint32 __PPO__DiscardWeaponPopUpHeader() { return STRUCT_OFFSET(USBZMainMenuWeaponInventoryScreen, DiscardWeaponPopUpHeader); } \
	FORCEINLINE static uint32 __PPO__DiscardWeaponPopUpAcceptAction() { return STRUCT_OFFSET(USBZMainMenuWeaponInventoryScreen, DiscardWeaponPopUpAcceptAction); } \
	FORCEINLINE static uint32 __PPO__DiscardWeaponPopUpCancelAction() { return STRUCT_OFFSET(USBZMainMenuWeaponInventoryScreen, DiscardWeaponPopUpCancelAction); } \
	FORCEINLINE static uint32 __PPO__WeaponToDiscardIndex() { return STRUCT_OFFSET(USBZMainMenuWeaponInventoryScreen, WeaponToDiscardIndex); } \
	FORCEINLINE static uint32 __PPO__DiscardWeaponPopUpBody() { return STRUCT_OFFSET(USBZMainMenuWeaponInventoryScreen, DiscardWeaponPopUpBody); } \
	FORCEINLINE static uint32 __PPO__WeaponSlotButtonPool() { return STRUCT_OFFSET(USBZMainMenuWeaponInventoryScreen, WeaponSlotButtonPool); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryScreen_h_18_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryScreen_h_20_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryScreen_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryScreen_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryScreen_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryScreen_h_20_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryScreen_h_20_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryScreen_h_20_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryScreen_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryScreen_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryScreen_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryScreen_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryScreen_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryScreen_h_20_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryScreen_h_20_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryScreen_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuWeaponInventoryScreen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryScreen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
