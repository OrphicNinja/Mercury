// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZItemLoadoutSlot : uint8;
class USBZInventoryBaseData;
class USBZMenuButton;
#ifdef STARBREEZE_SBZMainMenuItemInventoryWidget_generated_h
#error "SBZMainMenuItemInventoryWidget.generated.h already included, missing '#pragma once' in SBZMainMenuItemInventoryWidget.h"
#endif
#define STARBREEZE_SBZMainMenuItemInventoryWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryWidget_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisplayItemSlotScreen); \
	DECLARE_FUNCTION(execGetActiveItem); \
	DECLARE_FUNCTION(execNativeOnItemSlotButtonSelected);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisplayItemSlotScreen); \
	DECLARE_FUNCTION(execGetActiveItem); \
	DECLARE_FUNCTION(execNativeOnItemSlotButtonSelected);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryWidget_h_15_EVENT_PARMS \
	struct SBZMainMenuItemInventoryWidget_eventOnItemSlotButtonFocusedChanged_Parms \
	{ \
		USBZMenuButton* SelectedButton; \
		bool bIsFocused; \
	}; \
	struct SBZMainMenuItemInventoryWidget_eventOnItemSlotButtonSelected_Parms \
	{ \
		USBZMenuButton* SelectedButton; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryWidget_h_15_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuItemInventoryWidget(); \
	friend struct Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuItemInventoryWidget, USBZMenuStackScreenWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuItemInventoryWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuItemInventoryWidget(); \
	friend struct Z_Construct_UClass_USBZMainMenuItemInventoryWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuItemInventoryWidget, USBZMenuStackScreenWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuItemInventoryWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuItemInventoryWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuItemInventoryWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuItemInventoryWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuItemInventoryWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuItemInventoryWidget(USBZMainMenuItemInventoryWidget&&); \
	NO_API USBZMainMenuItemInventoryWidget(const USBZMainMenuItemInventoryWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuItemInventoryWidget(USBZMainMenuItemInventoryWidget&&); \
	NO_API USBZMainMenuItemInventoryWidget(const USBZMainMenuItemInventoryWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuItemInventoryWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuItemInventoryWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuItemInventoryWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ItemSlotButtonClass() { return STRUCT_OFFSET(USBZMainMenuItemInventoryWidget, ItemSlotButtonClass); } \
	FORCEINLINE static uint32 __PPO__Panel_ItemSlotButtons() { return STRUCT_OFFSET(USBZMainMenuItemInventoryWidget, Panel_ItemSlotButtons); } \
	FORCEINLINE static uint32 __PPO__ItemSlotType() { return STRUCT_OFFSET(USBZMainMenuItemInventoryWidget, ItemSlotType); } \
	FORCEINLINE static uint32 __PPO__SelectedItemButton() { return STRUCT_OFFSET(USBZMainMenuItemInventoryWidget, SelectedItemButton); } \
	FORCEINLINE static uint32 __PPO__ItemSlotButtonPool() { return STRUCT_OFFSET(USBZMainMenuItemInventoryWidget, ItemSlotButtonPool); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryWidget_h_13_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryWidget_h_15_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryWidget_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryWidget_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryWidget_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryWidget_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryWidget_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryWidget_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryWidget_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuItemInventoryWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
