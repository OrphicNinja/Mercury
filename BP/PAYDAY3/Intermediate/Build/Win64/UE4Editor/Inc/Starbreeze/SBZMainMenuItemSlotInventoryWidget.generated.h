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
#ifdef STARBREEZE_SBZMainMenuItemSlotInventoryWidget_generated_h
#error "SBZMainMenuItemSlotInventoryWidget.generated.h already included, missing '#pragma once' in SBZMainMenuItemSlotInventoryWidget.h"
#endif
#define STARBREEZE_SBZMainMenuItemSlotInventoryWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemSlotInventoryWidget_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemSlotInventoryWidget_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisplayItemSlotScreen); \
	DECLARE_FUNCTION(execGetActiveItem); \
	DECLARE_FUNCTION(execNativeOnItemSlotButtonSelected);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemSlotInventoryWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisplayItemSlotScreen); \
	DECLARE_FUNCTION(execGetActiveItem); \
	DECLARE_FUNCTION(execNativeOnItemSlotButtonSelected);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemSlotInventoryWidget_h_16_EVENT_PARMS \
	struct SBZMainMenuItemSlotInventoryWidget_eventOnItemSlotButtonFocusedChanged_Parms \
	{ \
		USBZMenuButton* SelectedButton; \
		bool bIsFocused; \
	}; \
	struct SBZMainMenuItemSlotInventoryWidget_eventOnItemSlotButtonSelected_Parms \
	{ \
		USBZMenuButton* SelectedButton; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemSlotInventoryWidget_h_16_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemSlotInventoryWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuItemSlotInventoryWidget(); \
	friend struct Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuItemSlotInventoryWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuItemSlotInventoryWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemSlotInventoryWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuItemSlotInventoryWidget(); \
	friend struct Z_Construct_UClass_USBZMainMenuItemSlotInventoryWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuItemSlotInventoryWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuItemSlotInventoryWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemSlotInventoryWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuItemSlotInventoryWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuItemSlotInventoryWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuItemSlotInventoryWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuItemSlotInventoryWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuItemSlotInventoryWidget(USBZMainMenuItemSlotInventoryWidget&&); \
	NO_API USBZMainMenuItemSlotInventoryWidget(const USBZMainMenuItemSlotInventoryWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemSlotInventoryWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuItemSlotInventoryWidget(USBZMainMenuItemSlotInventoryWidget&&); \
	NO_API USBZMainMenuItemSlotInventoryWidget(const USBZMainMenuItemSlotInventoryWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuItemSlotInventoryWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuItemSlotInventoryWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuItemSlotInventoryWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemSlotInventoryWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ItemSlotButtonClass() { return STRUCT_OFFSET(USBZMainMenuItemSlotInventoryWidget, ItemSlotButtonClass); } \
	FORCEINLINE static uint32 __PPO__Panel_ItemSlotButtons() { return STRUCT_OFFSET(USBZMainMenuItemSlotInventoryWidget, Panel_ItemSlotButtons); } \
	FORCEINLINE static uint32 __PPO__ItemSlotType() { return STRUCT_OFFSET(USBZMainMenuItemSlotInventoryWidget, ItemSlotType); } \
	FORCEINLINE static uint32 __PPO__SelectedItemButton() { return STRUCT_OFFSET(USBZMainMenuItemSlotInventoryWidget, SelectedItemButton); } \
	FORCEINLINE static uint32 __PPO__ItemSlotButtonPool() { return STRUCT_OFFSET(USBZMainMenuItemSlotInventoryWidget, ItemSlotButtonPool); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemSlotInventoryWidget_h_14_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemSlotInventoryWidget_h_16_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemSlotInventoryWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemSlotInventoryWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemSlotInventoryWidget_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemSlotInventoryWidget_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemSlotInventoryWidget_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemSlotInventoryWidget_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemSlotInventoryWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemSlotInventoryWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemSlotInventoryWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemSlotInventoryWidget_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemSlotInventoryWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemSlotInventoryWidget_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemSlotInventoryWidget_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemSlotInventoryWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuItemSlotInventoryWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemSlotInventoryWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
