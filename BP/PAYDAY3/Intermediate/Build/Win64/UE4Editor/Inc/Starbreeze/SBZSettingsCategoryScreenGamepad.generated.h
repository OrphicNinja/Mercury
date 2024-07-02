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
#ifdef STARBREEZE_SBZSettingsCategoryScreenGamepad_generated_h
#error "SBZSettingsCategoryScreenGamepad.generated.h already included, missing '#pragma once' in SBZSettingsCategoryScreenGamepad.h"
#endif
#define STARBREEZE_SBZSettingsCategoryScreenGamepad_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreenGamepad_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreenGamepad_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplySettingsCategory); \
	DECLARE_FUNCTION(execInitializeSettingsItems); \
	DECLARE_FUNCTION(execIsSettingsCategoryDirty); \
	DECLARE_FUNCTION(execResetSettingsCategory);


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreenGamepad_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplySettingsCategory); \
	DECLARE_FUNCTION(execInitializeSettingsItems); \
	DECLARE_FUNCTION(execIsSettingsCategoryDirty); \
	DECLARE_FUNCTION(execResetSettingsCategory);


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreenGamepad_h_12_EVENT_PARMS \
	struct SBZSettingsCategoryScreenGamepad_eventOnSettingsButtonChanged_Parms \
	{ \
		USBZSettingsButton* SettingsButton; \
	}; \
	struct SBZSettingsCategoryScreenGamepad_eventOnSettingsButtonFocused_Parms \
	{ \
		USBZMenuButton* MenuButton; \
		bool bIsFocused; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreenGamepad_h_12_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreenGamepad_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZSettingsCategoryScreenGamepad(); \
	friend struct Z_Construct_UClass_USBZSettingsCategoryScreenGamepad_Statics; \
public: \
	DECLARE_CLASS(USBZSettingsCategoryScreenGamepad, USBZMenuStackScreenWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSettingsCategoryScreenGamepad)


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreenGamepad_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZSettingsCategoryScreenGamepad(); \
	friend struct Z_Construct_UClass_USBZSettingsCategoryScreenGamepad_Statics; \
public: \
	DECLARE_CLASS(USBZSettingsCategoryScreenGamepad, USBZMenuStackScreenWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSettingsCategoryScreenGamepad)


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreenGamepad_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZSettingsCategoryScreenGamepad(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSettingsCategoryScreenGamepad) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSettingsCategoryScreenGamepad); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSettingsCategoryScreenGamepad); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSettingsCategoryScreenGamepad(USBZSettingsCategoryScreenGamepad&&); \
	NO_API USBZSettingsCategoryScreenGamepad(const USBZSettingsCategoryScreenGamepad&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreenGamepad_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSettingsCategoryScreenGamepad(USBZSettingsCategoryScreenGamepad&&); \
	NO_API USBZSettingsCategoryScreenGamepad(const USBZSettingsCategoryScreenGamepad&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSettingsCategoryScreenGamepad); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSettingsCategoryScreenGamepad); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZSettingsCategoryScreenGamepad)


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreenGamepad_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MultipleChoiceButton_GamepadPreset() { return STRUCT_OFFSET(USBZSettingsCategoryScreenGamepad, MultipleChoiceButton_GamepadPreset); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreenGamepad_h_10_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreenGamepad_h_12_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreenGamepad_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreenGamepad_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreenGamepad_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreenGamepad_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreenGamepad_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreenGamepad_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreenGamepad_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreenGamepad_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreenGamepad_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreenGamepad_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreenGamepad_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreenGamepad_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreenGamepad_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreenGamepad_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZSettingsCategoryScreenGamepad>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSettingsCategoryScreenGamepad_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
