// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZSettingsButton;
class USBZMenuButton;
#ifdef STARBREEZE_SBZSettingsCategoryScreen_generated_h
#error "SBZSettingsCategoryScreen.generated.h already included, missing '#pragma once' in SBZSettingsCategoryScreen.h"
#endif
#define STARBREEZE_SBZSettingsCategoryScreen_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreen_h_25_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreen_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplySettingsCategory); \
	DECLARE_FUNCTION(execInitializeSettingsItems); \
	DECLARE_FUNCTION(execIsSettingsCategoryDirty); \
	DECLARE_FUNCTION(execResetSettingsCategory);


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreen_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplySettingsCategory); \
	DECLARE_FUNCTION(execInitializeSettingsItems); \
	DECLARE_FUNCTION(execIsSettingsCategoryDirty); \
	DECLARE_FUNCTION(execResetSettingsCategory);


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreen_h_25_EVENT_PARMS \
	struct SBZSettingsCategoryScreen_eventOnSettingsButtonChanged_Parms \
	{ \
		USBZSettingsButton* SettingsButton; \
	}; \
	struct SBZSettingsCategoryScreen_eventOnSettingsButtonFocused_Parms \
	{ \
		USBZMenuButton* MenuButton; \
		bool bIsFocused; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreen_h_25_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreen_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZSettingsCategoryScreen(); \
	friend struct Z_Construct_UClass_USBZSettingsCategoryScreen_Statics; \
public: \
	DECLARE_CLASS(USBZSettingsCategoryScreen, USBZMenuStackScreenWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSettingsCategoryScreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreen_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUSBZSettingsCategoryScreen(); \
	friend struct Z_Construct_UClass_USBZSettingsCategoryScreen_Statics; \
public: \
	DECLARE_CLASS(USBZSettingsCategoryScreen, USBZMenuStackScreenWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSettingsCategoryScreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreen_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZSettingsCategoryScreen(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSettingsCategoryScreen) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSettingsCategoryScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSettingsCategoryScreen); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSettingsCategoryScreen(USBZSettingsCategoryScreen&&); \
	NO_API USBZSettingsCategoryScreen(const USBZSettingsCategoryScreen&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreen_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSettingsCategoryScreen(USBZSettingsCategoryScreen&&); \
	NO_API USBZSettingsCategoryScreen(const USBZSettingsCategoryScreen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSettingsCategoryScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSettingsCategoryScreen); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZSettingsCategoryScreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreen_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SettingHelperPanels() { return STRUCT_OFFSET(USBZSettingsCategoryScreen, SettingHelperPanels); } \
	FORCEINLINE static uint32 __PPO__ScrollBox_SettingsItems() { return STRUCT_OFFSET(USBZSettingsCategoryScreen, ScrollBox_SettingsItems); } \
	FORCEINLINE static uint32 __PPO__SettingsGroupTitleClass() { return STRUCT_OFFSET(USBZSettingsCategoryScreen, SettingsGroupTitleClass); } \
	FORCEINLINE static uint32 __PPO__SettingsButtonClassActionClick() { return STRUCT_OFFSET(USBZSettingsCategoryScreen, SettingsButtonClassActionClick); } \
	FORCEINLINE static uint32 __PPO__SettingsButtonClassTwoChoice() { return STRUCT_OFFSET(USBZSettingsCategoryScreen, SettingsButtonClassTwoChoice); } \
	FORCEINLINE static uint32 __PPO__SettingsButtonClassMultipleChoice() { return STRUCT_OFFSET(USBZSettingsCategoryScreen, SettingsButtonClassMultipleChoice); } \
	FORCEINLINE static uint32 __PPO__SettingsButtonClassResolutionChoice() { return STRUCT_OFFSET(USBZSettingsCategoryScreen, SettingsButtonClassResolutionChoice); } \
	FORCEINLINE static uint32 __PPO__SettingsButtonClassAntiAliasingModeChoice() { return STRUCT_OFFSET(USBZSettingsCategoryScreen, SettingsButtonClassAntiAliasingModeChoice); } \
	FORCEINLINE static uint32 __PPO__SettingsButtonClassUpscalerChoice() { return STRUCT_OFFSET(USBZSettingsCategoryScreen, SettingsButtonClassUpscalerChoice); } \
	FORCEINLINE static uint32 __PPO__SettingsButtonClassUpscalingModeChoice() { return STRUCT_OFFSET(USBZSettingsCategoryScreen, SettingsButtonClassUpscalingModeChoice); } \
	FORCEINLINE static uint32 __PPO__SettingsButtonClassSlider() { return STRUCT_OFFSET(USBZSettingsCategoryScreen, SettingsButtonClassSlider); } \
	FORCEINLINE static uint32 __PPO__SettingsButtonClassKeyboardBinding() { return STRUCT_OFFSET(USBZSettingsCategoryScreen, SettingsButtonClassKeyboardBinding); } \
	FORCEINLINE static uint32 __PPO__SettingsButtonClassGamepadBinding() { return STRUCT_OFFSET(USBZSettingsCategoryScreen, SettingsButtonClassGamepadBinding); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreen_h_23_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreen_h_25_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreen_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreen_h_25_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreen_h_25_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreen_h_25_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreen_h_25_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreen_h_25_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreen_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreen_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreen_h_25_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreen_h_25_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreen_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreen_h_25_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreen_h_25_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreen_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZSettingsCategoryScreen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
