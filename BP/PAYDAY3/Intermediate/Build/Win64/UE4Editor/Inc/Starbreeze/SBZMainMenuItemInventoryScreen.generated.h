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
enum class ESBZMetaRequestResult : uint8;
class USBZMenuButton;
#ifdef STARBREEZE_SBZMainMenuItemInventoryScreen_generated_h
#error "SBZMainMenuItemInventoryScreen.generated.h already included, missing '#pragma once' in SBZMainMenuItemInventoryScreen.h"
#endif
#define STARBREEZE_SBZMainMenuItemInventoryScreen_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryScreen_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryScreen_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisplayItemInventoryScreen); \
	DECLARE_FUNCTION(execGetActiveItem); \
	DECLARE_FUNCTION(execHandleProgressionSave); \
	DECLARE_FUNCTION(execNativeOnItemSlotButtonSelected);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryScreen_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisplayItemInventoryScreen); \
	DECLARE_FUNCTION(execGetActiveItem); \
	DECLARE_FUNCTION(execHandleProgressionSave); \
	DECLARE_FUNCTION(execNativeOnItemSlotButtonSelected);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryScreen_h_16_EVENT_PARMS \
	struct SBZMainMenuItemInventoryScreen_eventOnItemSlotButtonFocusedChanged_Parms \
	{ \
		USBZMenuButton* SelectedButton; \
		bool bIsFocused; \
	}; \
	struct SBZMainMenuItemInventoryScreen_eventOnItemSlotButtonSelected_Parms \
	{ \
		USBZMenuButton* SelectedButton; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryScreen_h_16_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryScreen_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuItemInventoryScreen(); \
	friend struct Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuItemInventoryScreen, USBZMenuStackScreenWidgetWithTutorial, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuItemInventoryScreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryScreen_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuItemInventoryScreen(); \
	friend struct Z_Construct_UClass_USBZMainMenuItemInventoryScreen_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuItemInventoryScreen, USBZMenuStackScreenWidgetWithTutorial, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuItemInventoryScreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryScreen_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuItemInventoryScreen(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuItemInventoryScreen) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuItemInventoryScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuItemInventoryScreen); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuItemInventoryScreen(USBZMainMenuItemInventoryScreen&&); \
	NO_API USBZMainMenuItemInventoryScreen(const USBZMainMenuItemInventoryScreen&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryScreen_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuItemInventoryScreen(USBZMainMenuItemInventoryScreen&&); \
	NO_API USBZMainMenuItemInventoryScreen(const USBZMainMenuItemInventoryScreen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuItemInventoryScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuItemInventoryScreen); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuItemInventoryScreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryScreen_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ItemSlotButtonClass() { return STRUCT_OFFSET(USBZMainMenuItemInventoryScreen, ItemSlotButtonClass); } \
	FORCEINLINE static uint32 __PPO__Panel_ItemSlotButtons() { return STRUCT_OFFSET(USBZMainMenuItemInventoryScreen, Panel_ItemSlotButtons); } \
	FORCEINLINE static uint32 __PPO__CurrentLoadoutIndex() { return STRUCT_OFFSET(USBZMainMenuItemInventoryScreen, CurrentLoadoutIndex); } \
	FORCEINLINE static uint32 __PPO__ItemSlotType() { return STRUCT_OFFSET(USBZMainMenuItemInventoryScreen, ItemSlotType); } \
	FORCEINLINE static uint32 __PPO__SelectedItemButton() { return STRUCT_OFFSET(USBZMainMenuItemInventoryScreen, SelectedItemButton); } \
	FORCEINLINE static uint32 __PPO__ItemSlotButtonPool() { return STRUCT_OFFSET(USBZMainMenuItemInventoryScreen, ItemSlotButtonPool); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryScreen_h_14_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryScreen_h_16_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryScreen_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryScreen_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryScreen_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryScreen_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryScreen_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryScreen_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryScreen_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryScreen_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryScreen_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryScreen_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryScreen_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryScreen_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryScreen_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryScreen_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuItemInventoryScreen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuItemInventoryScreen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
