// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZTextEntryButton_generated_h
#error "SBZTextEntryButton.generated.h already included, missing '#pragma once' in SBZTextEntryButton.h"
#endif
#define STARBREEZE_SBZTextEntryButton_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZTextEntryButton_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZTextEntryButton_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentText); \
	DECLARE_FUNCTION(execOnTextCommited); \
	DECLARE_FUNCTION(execSetInputText);


#define PAYDAY3_Source_Starbreeze_Public_SBZTextEntryButton_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentText); \
	DECLARE_FUNCTION(execOnTextCommited); \
	DECLARE_FUNCTION(execSetInputText);


#define PAYDAY3_Source_Starbreeze_Public_SBZTextEntryButton_h_12_EVENT_PARMS \
	struct SBZTextEntryButton_eventEditingText_Parms \
	{ \
		bool bInIsEditingText; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZTextEntryButton_h_12_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZTextEntryButton_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZTextEntryButton(); \
	friend struct Z_Construct_UClass_USBZTextEntryButton_Statics; \
public: \
	DECLARE_CLASS(USBZTextEntryButton, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZTextEntryButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZTextEntryButton_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZTextEntryButton(); \
	friend struct Z_Construct_UClass_USBZTextEntryButton_Statics; \
public: \
	DECLARE_CLASS(USBZTextEntryButton, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZTextEntryButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZTextEntryButton_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZTextEntryButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZTextEntryButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZTextEntryButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZTextEntryButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZTextEntryButton(USBZTextEntryButton&&); \
	NO_API USBZTextEntryButton(const USBZTextEntryButton&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZTextEntryButton_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZTextEntryButton(USBZTextEntryButton&&); \
	NO_API USBZTextEntryButton(const USBZTextEntryButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZTextEntryButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZTextEntryButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZTextEntryButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZTextEntryButton_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EditableText_TextInput() { return STRUCT_OFFSET(USBZTextEntryButton, EditableText_TextInput); } \
	FORCEINLINE static uint32 __PPO__bSanitizeInputText() { return STRUCT_OFFSET(USBZTextEntryButton, bSanitizeInputText); } \
	FORCEINLINE static uint32 __PPO__OnTextSubmitted() { return STRUCT_OFFSET(USBZTextEntryButton, OnTextSubmitted); }


#define PAYDAY3_Source_Starbreeze_Public_SBZTextEntryButton_h_10_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZTextEntryButton_h_12_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZTextEntryButton_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZTextEntryButton_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZTextEntryButton_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZTextEntryButton_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZTextEntryButton_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZTextEntryButton_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZTextEntryButton_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZTextEntryButton_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZTextEntryButton_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZTextEntryButton_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZTextEntryButton_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZTextEntryButton_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZTextEntryButton_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZTextEntryButton_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZTextEntryButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZTextEntryButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
