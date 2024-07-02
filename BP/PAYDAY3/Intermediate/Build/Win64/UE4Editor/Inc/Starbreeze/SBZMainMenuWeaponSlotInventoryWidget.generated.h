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
#ifdef STARBREEZE_SBZMainMenuWeaponSlotInventoryWidget_generated_h
#error "SBZMainMenuWeaponSlotInventoryWidget.generated.h already included, missing '#pragma once' in SBZMainMenuWeaponSlotInventoryWidget.h"
#endif
#define STARBREEZE_SBZMainMenuWeaponSlotInventoryWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponSlotInventoryWidget_h_19_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponSlotInventoryWidget_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanDiscardWeaponIndex); \
	DECLARE_FUNCTION(execDiscardItemDone); \
	DECLARE_FUNCTION(execDiscardWeaponInSlot); \
	DECLARE_FUNCTION(execDisplayWeaponSlotScreen); \
	DECLARE_FUNCTION(execNativeOnWeaponSlotButtonSelected); \
	DECLARE_FUNCTION(execNativeOnWeaponSlotStoreItemTransactionComplete); \
	DECLARE_FUNCTION(execUpdateActiveWeaponSlotIndex);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponSlotInventoryWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanDiscardWeaponIndex); \
	DECLARE_FUNCTION(execDiscardItemDone); \
	DECLARE_FUNCTION(execDiscardWeaponInSlot); \
	DECLARE_FUNCTION(execDisplayWeaponSlotScreen); \
	DECLARE_FUNCTION(execNativeOnWeaponSlotButtonSelected); \
	DECLARE_FUNCTION(execNativeOnWeaponSlotStoreItemTransactionComplete); \
	DECLARE_FUNCTION(execUpdateActiveWeaponSlotIndex);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponSlotInventoryWidget_h_19_EVENT_PARMS \
	struct SBZMainMenuWeaponSlotInventoryWidget_eventOnWeaponInSlotDiscarded_Parms \
	{ \
		bool bIsWeaponDiscarded; \
	}; \
	struct SBZMainMenuWeaponSlotInventoryWidget_eventWeaponSlotButtonFocusedChanged_Parms \
	{ \
		USBZMenuButton* SelectedButton; \
		bool bIsFocused; \
	}; \
	struct SBZMainMenuWeaponSlotInventoryWidget_eventWeaponSlotStoreItemTransactionComplete_Parms \
	{ \
		ESBZMetaRequestResult MetaResult; \
		const USBZInventoryBaseData* InventoryItemData; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponSlotInventoryWidget_h_19_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponSlotInventoryWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuWeaponSlotInventoryWidget(); \
	friend struct Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuWeaponSlotInventoryWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuWeaponSlotInventoryWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponSlotInventoryWidget_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuWeaponSlotInventoryWidget(); \
	friend struct Z_Construct_UClass_USBZMainMenuWeaponSlotInventoryWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuWeaponSlotInventoryWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuWeaponSlotInventoryWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponSlotInventoryWidget_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuWeaponSlotInventoryWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuWeaponSlotInventoryWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuWeaponSlotInventoryWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuWeaponSlotInventoryWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuWeaponSlotInventoryWidget(USBZMainMenuWeaponSlotInventoryWidget&&); \
	NO_API USBZMainMenuWeaponSlotInventoryWidget(const USBZMainMenuWeaponSlotInventoryWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponSlotInventoryWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuWeaponSlotInventoryWidget(USBZMainMenuWeaponSlotInventoryWidget&&); \
	NO_API USBZMainMenuWeaponSlotInventoryWidget(const USBZMainMenuWeaponSlotInventoryWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuWeaponSlotInventoryWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuWeaponSlotInventoryWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuWeaponSlotInventoryWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponSlotInventoryWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponSlotButtonClass() { return STRUCT_OFFSET(USBZMainMenuWeaponSlotInventoryWidget, WeaponSlotButtonClass); } \
	FORCEINLINE static uint32 __PPO__Panel_WeaponSlotButtons() { return STRUCT_OFFSET(USBZMainMenuWeaponSlotInventoryWidget, Panel_WeaponSlotButtons); } \
	FORCEINLINE static uint32 __PPO__EquippableSlot() { return STRUCT_OFFSET(USBZMainMenuWeaponSlotInventoryWidget, EquippableSlot); } \
	FORCEINLINE static uint32 __PPO__ActiveWeaponSlotIndex() { return STRUCT_OFFSET(USBZMainMenuWeaponSlotInventoryWidget, ActiveWeaponSlotIndex); } \
	FORCEINLINE static uint32 __PPO__ActiveLoadoutWeaponSlotIndex() { return STRUCT_OFFSET(USBZMainMenuWeaponSlotInventoryWidget, ActiveLoadoutWeaponSlotIndex); } \
	FORCEINLINE static uint32 __PPO__ActiveWeaponSlots() { return STRUCT_OFFSET(USBZMainMenuWeaponSlotInventoryWidget, ActiveWeaponSlots); } \
	FORCEINLINE static uint32 __PPO__WeaponSlotCount() { return STRUCT_OFFSET(USBZMainMenuWeaponSlotInventoryWidget, WeaponSlotCount); } \
	FORCEINLINE static uint32 __PPO__Button_WeaponSlotStoreItem() { return STRUCT_OFFSET(USBZMainMenuWeaponSlotInventoryWidget, Button_WeaponSlotStoreItem); } \
	FORCEINLINE static uint32 __PPO__WeaponSlotButtonPool() { return STRUCT_OFFSET(USBZMainMenuWeaponSlotInventoryWidget, WeaponSlotButtonPool); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponSlotInventoryWidget_h_17_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponSlotInventoryWidget_h_19_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponSlotInventoryWidget_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponSlotInventoryWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponSlotInventoryWidget_h_19_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponSlotInventoryWidget_h_19_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponSlotInventoryWidget_h_19_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponSlotInventoryWidget_h_19_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponSlotInventoryWidget_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponSlotInventoryWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponSlotInventoryWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponSlotInventoryWidget_h_19_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponSlotInventoryWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponSlotInventoryWidget_h_19_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponSlotInventoryWidget_h_19_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponSlotInventoryWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuWeaponSlotInventoryWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponSlotInventoryWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
