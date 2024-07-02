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
struct FSBZInventorySlotStoreItem;
#ifdef STARBREEZE_SBZMainMenuWeaponInventoryWidget_generated_h
#error "SBZMainMenuWeaponInventoryWidget.generated.h already included, missing '#pragma once' in SBZMainMenuWeaponInventoryWidget.h"
#endif
#define STARBREEZE_SBZMainMenuWeaponInventoryWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryWidget_h_17_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryWidget_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanDiscardWeaponIndex); \
	DECLARE_FUNCTION(execDiscardItemDone); \
	DECLARE_FUNCTION(execDiscardWeaponInSlot); \
	DECLARE_FUNCTION(execDisplayWeaponSlotScreen); \
	DECLARE_FUNCTION(execGetActiveWeaponSlotIndex); \
	DECLARE_FUNCTION(execGetSlotPrice); \
	DECLARE_FUNCTION(execNativeOnBuyWeaponConfigSlotDone); \
	DECLARE_FUNCTION(execNativeOnWeaponSlotButtonSelected); \
	DECLARE_FUNCTION(execTryBuyItemSlots); \
	DECLARE_FUNCTION(execUpdateActiveWeaponSlotIndex); \
	DECLARE_FUNCTION(execUpdateWeaponSlotButtons);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanDiscardWeaponIndex); \
	DECLARE_FUNCTION(execDiscardItemDone); \
	DECLARE_FUNCTION(execDiscardWeaponInSlot); \
	DECLARE_FUNCTION(execDisplayWeaponSlotScreen); \
	DECLARE_FUNCTION(execGetActiveWeaponSlotIndex); \
	DECLARE_FUNCTION(execGetSlotPrice); \
	DECLARE_FUNCTION(execNativeOnBuyWeaponConfigSlotDone); \
	DECLARE_FUNCTION(execNativeOnWeaponSlotButtonSelected); \
	DECLARE_FUNCTION(execTryBuyItemSlots); \
	DECLARE_FUNCTION(execUpdateActiveWeaponSlotIndex); \
	DECLARE_FUNCTION(execUpdateWeaponSlotButtons);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryWidget_h_17_EVENT_PARMS \
	struct SBZMainMenuWeaponInventoryWidget_eventOnBuyWeaponConfigSlotDone_Parms \
	{ \
		bool bWasSuccess; \
	}; \
	struct SBZMainMenuWeaponInventoryWidget_eventOnSlotStoreItemSet_Parms \
	{ \
		FSBZInventorySlotStoreItem InSlotStoreItem; \
	}; \
	struct SBZMainMenuWeaponInventoryWidget_eventOnWeaponInSlotDiscarded_Parms \
	{ \
		bool bIsWeaponDiscarded; \
	}; \
	struct SBZMainMenuWeaponInventoryWidget_eventOnWeaponSlotButtonFocusedChanged_Parms \
	{ \
		USBZMenuButton* SelectedButton; \
		bool bIsFocused; \
	}; \
	struct SBZMainMenuWeaponInventoryWidget_eventOnWeaponSlotButtonSelected_Parms \
	{ \
		USBZMenuButton* SelectedButton; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryWidget_h_17_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuWeaponInventoryWidget(); \
	friend struct Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuWeaponInventoryWidget, USBZMenuStackScreenWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuWeaponInventoryWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuWeaponInventoryWidget(); \
	friend struct Z_Construct_UClass_USBZMainMenuWeaponInventoryWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuWeaponInventoryWidget, USBZMenuStackScreenWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuWeaponInventoryWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuWeaponInventoryWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuWeaponInventoryWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuWeaponInventoryWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuWeaponInventoryWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuWeaponInventoryWidget(USBZMainMenuWeaponInventoryWidget&&); \
	NO_API USBZMainMenuWeaponInventoryWidget(const USBZMainMenuWeaponInventoryWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuWeaponInventoryWidget(USBZMainMenuWeaponInventoryWidget&&); \
	NO_API USBZMainMenuWeaponInventoryWidget(const USBZMainMenuWeaponInventoryWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuWeaponInventoryWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuWeaponInventoryWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuWeaponInventoryWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponSlotButtonClass() { return STRUCT_OFFSET(USBZMainMenuWeaponInventoryWidget, WeaponSlotButtonClass); } \
	FORCEINLINE static uint32 __PPO__Panel_WeaponSlotButtons() { return STRUCT_OFFSET(USBZMainMenuWeaponInventoryWidget, Panel_WeaponSlotButtons); } \
	FORCEINLINE static uint32 __PPO__EquippableSlot() { return STRUCT_OFFSET(USBZMainMenuWeaponInventoryWidget, EquippableSlot); } \
	FORCEINLINE static uint32 __PPO__ActiveWeaponSlots() { return STRUCT_OFFSET(USBZMainMenuWeaponInventoryWidget, ActiveWeaponSlots); } \
	FORCEINLINE static uint32 __PPO__WeaponSlotCount() { return STRUCT_OFFSET(USBZMainMenuWeaponInventoryWidget, WeaponSlotCount); } \
	FORCEINLINE static uint32 __PPO__SlotStoreItem() { return STRUCT_OFFSET(USBZMainMenuWeaponInventoryWidget, SlotStoreItem); } \
	FORCEINLINE static uint32 __PPO__ActiveWeaponSlotIndex() { return STRUCT_OFFSET(USBZMainMenuWeaponInventoryWidget, ActiveWeaponSlotIndex); } \
	FORCEINLINE static uint32 __PPO__LoadoutSlotIndex() { return STRUCT_OFFSET(USBZMainMenuWeaponInventoryWidget, LoadoutSlotIndex); } \
	FORCEINLINE static uint32 __PPO__ActiveLoadoutActiveWeaponSlotIndex() { return STRUCT_OFFSET(USBZMainMenuWeaponInventoryWidget, ActiveLoadoutActiveWeaponSlotIndex); } \
	FORCEINLINE static uint32 __PPO__WeaponSlotButtonPool() { return STRUCT_OFFSET(USBZMainMenuWeaponInventoryWidget, WeaponSlotButtonPool); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryWidget_h_15_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryWidget_h_17_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryWidget_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryWidget_h_17_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryWidget_h_17_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryWidget_h_17_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryWidget_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryWidget_h_17_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryWidget_h_17_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuWeaponInventoryWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponInventoryWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
