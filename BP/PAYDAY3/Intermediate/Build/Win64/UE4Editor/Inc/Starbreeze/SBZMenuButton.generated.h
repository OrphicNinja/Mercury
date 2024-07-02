// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZMenuButton_generated_h
#error "SBZMenuButton.generated.h already included, missing '#pragma once' in SBZMenuButton.h"
#endif
#define STARBREEZE_SBZMenuButton_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMenuButton_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMenuButton_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAlternativeSelectButton); \
	DECLARE_FUNCTION(execNativeOnAlternativeSelectionInputPressed); \
	DECLARE_FUNCTION(execNativeOnSelectionInputPressed); \
	DECLARE_FUNCTION(execSelectButton); \
	DECLARE_FUNCTION(execSetButtonDisabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuButton_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAlternativeSelectButton); \
	DECLARE_FUNCTION(execNativeOnAlternativeSelectionInputPressed); \
	DECLARE_FUNCTION(execNativeOnSelectionInputPressed); \
	DECLARE_FUNCTION(execSelectButton); \
	DECLARE_FUNCTION(execSetButtonDisabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuButton_h_13_EVENT_PARMS \
	struct SBZMenuButton_eventButtonDisabledChanged_Parms \
	{ \
		bool bInIsDisabled; \
	}; \
	struct SBZMenuButton_eventButtonFocusedChanged_Parms \
	{ \
		bool bInHasFocus; \
	}; \
	struct SBZMenuButton_eventButtonHoveredChanged_Parms \
	{ \
		bool bInIsHovered; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuButton_h_13_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMenuButton_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMenuButton(); \
	friend struct Z_Construct_UClass_USBZMenuButton_Statics; \
public: \
	DECLARE_CLASS(USBZMenuButton, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMenuButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuButton_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMenuButton(); \
	friend struct Z_Construct_UClass_USBZMenuButton_Statics; \
public: \
	DECLARE_CLASS(USBZMenuButton, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMenuButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuButton_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMenuButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMenuButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMenuButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMenuButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMenuButton(USBZMenuButton&&); \
	NO_API USBZMenuButton(const USBZMenuButton&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuButton_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMenuButton(USBZMenuButton&&); \
	NO_API USBZMenuButton(const USBZMenuButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMenuButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMenuButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMenuButton)


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuButton_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SelectionActionName() { return STRUCT_OFFSET(USBZMenuButton, SelectionActionName); } \
	FORCEINLINE static uint32 __PPO__bIsDisabled() { return STRUCT_OFFSET(USBZMenuButton, bIsDisabled); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuButton_h_11_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuButton_h_13_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuButton_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuButton_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuButton_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuButton_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuButton_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuButton_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuButton_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuButton_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuButton_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuButton_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuButton_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuButton_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuButton_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuButton_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMenuButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMenuButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
