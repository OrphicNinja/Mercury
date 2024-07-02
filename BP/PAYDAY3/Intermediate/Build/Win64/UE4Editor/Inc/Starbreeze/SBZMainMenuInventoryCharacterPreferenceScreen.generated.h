// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZMenuButton;
enum class ESBZCharacterPreferenceButtonSelectionAction : uint8;
#ifdef STARBREEZE_SBZMainMenuInventoryCharacterPreferenceScreen_generated_h
#error "SBZMainMenuInventoryCharacterPreferenceScreen.generated.h already included, missing '#pragma once' in SBZMainMenuInventoryCharacterPreferenceScreen.h"
#endif
#define STARBREEZE_SBZMainMenuInventoryCharacterPreferenceScreen_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterPreferenceScreen_h_17_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterPreferenceScreen_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDecrementSlot); \
	DECLARE_FUNCTION(execIncrementSlot); \
	DECLARE_FUNCTION(execNativeCharacterSlotButtonFocusedChanged); \
	DECLARE_FUNCTION(execNativeCharacterSlotButtonSelected); \
	DECLARE_FUNCTION(execNativeOnActiveCharacterSlotIndexChanged); \
	DECLARE_FUNCTION(execNativeOnCharacterPreferenceUpdated); \
	DECLARE_FUNCTION(execNativeOnClearPreferredCharactersInputPressed);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterPreferenceScreen_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDecrementSlot); \
	DECLARE_FUNCTION(execIncrementSlot); \
	DECLARE_FUNCTION(execNativeCharacterSlotButtonFocusedChanged); \
	DECLARE_FUNCTION(execNativeCharacterSlotButtonSelected); \
	DECLARE_FUNCTION(execNativeOnActiveCharacterSlotIndexChanged); \
	DECLARE_FUNCTION(execNativeOnCharacterPreferenceUpdated); \
	DECLARE_FUNCTION(execNativeOnClearPreferredCharactersInputPressed);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterPreferenceScreen_h_17_EVENT_PARMS \
	struct SBZMainMenuInventoryCharacterPreferenceScreen_eventUpdateCharacterSlotButtonControlsReference_Parms \
	{ \
		ESBZCharacterPreferenceButtonSelectionAction SelectionAction; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterPreferenceScreen_h_17_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterPreferenceScreen_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuInventoryCharacterPreferenceScreen(); \
	friend struct Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuInventoryCharacterPreferenceScreen, USBZMenuStackScreenWidgetWithTutorial, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuInventoryCharacterPreferenceScreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterPreferenceScreen_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuInventoryCharacterPreferenceScreen(); \
	friend struct Z_Construct_UClass_USBZMainMenuInventoryCharacterPreferenceScreen_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuInventoryCharacterPreferenceScreen, USBZMenuStackScreenWidgetWithTutorial, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuInventoryCharacterPreferenceScreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterPreferenceScreen_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuInventoryCharacterPreferenceScreen(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuInventoryCharacterPreferenceScreen) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuInventoryCharacterPreferenceScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuInventoryCharacterPreferenceScreen); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuInventoryCharacterPreferenceScreen(USBZMainMenuInventoryCharacterPreferenceScreen&&); \
	NO_API USBZMainMenuInventoryCharacterPreferenceScreen(const USBZMainMenuInventoryCharacterPreferenceScreen&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterPreferenceScreen_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuInventoryCharacterPreferenceScreen(USBZMainMenuInventoryCharacterPreferenceScreen&&); \
	NO_API USBZMainMenuInventoryCharacterPreferenceScreen(const USBZMainMenuInventoryCharacterPreferenceScreen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuInventoryCharacterPreferenceScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuInventoryCharacterPreferenceScreen); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuInventoryCharacterPreferenceScreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterPreferenceScreen_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ClearCharactersInputActionName() { return STRUCT_OFFSET(USBZMainMenuInventoryCharacterPreferenceScreen, ClearCharactersInputActionName); } \
	FORCEINLINE static uint32 __PPO__CharacterSlotButtonClass() { return STRUCT_OFFSET(USBZMainMenuInventoryCharacterPreferenceScreen, CharacterSlotButtonClass); } \
	FORCEINLINE static uint32 __PPO__Panel_CharacterSlotButtons() { return STRUCT_OFFSET(USBZMainMenuInventoryCharacterPreferenceScreen, Panel_CharacterSlotButtons); } \
	FORCEINLINE static uint32 __PPO__Widget_CharacterPreferenceDisplay() { return STRUCT_OFFSET(USBZMainMenuInventoryCharacterPreferenceScreen, Widget_CharacterPreferenceDisplay); } \
	FORCEINLINE static uint32 __PPO__Widget_CharacterDisplayPanel() { return STRUCT_OFFSET(USBZMainMenuInventoryCharacterPreferenceScreen, Widget_CharacterDisplayPanel); } \
	FORCEINLINE static uint32 __PPO__FocusedCharacterSlotButton() { return STRUCT_OFFSET(USBZMainMenuInventoryCharacterPreferenceScreen, FocusedCharacterSlotButton); } \
	FORCEINLINE static uint32 __PPO__PreferredCharacterArray() { return STRUCT_OFFSET(USBZMainMenuInventoryCharacterPreferenceScreen, PreferredCharacterArray); } \
	FORCEINLINE static uint32 __PPO__CharacterSlotButtonPool() { return STRUCT_OFFSET(USBZMainMenuInventoryCharacterPreferenceScreen, CharacterSlotButtonPool); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterPreferenceScreen_h_15_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterPreferenceScreen_h_17_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterPreferenceScreen_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterPreferenceScreen_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterPreferenceScreen_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterPreferenceScreen_h_17_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterPreferenceScreen_h_17_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterPreferenceScreen_h_17_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterPreferenceScreen_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterPreferenceScreen_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterPreferenceScreen_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterPreferenceScreen_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterPreferenceScreen_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterPreferenceScreen_h_17_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterPreferenceScreen_h_17_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterPreferenceScreen_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuInventoryCharacterPreferenceScreen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuInventoryCharacterPreferenceScreen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
