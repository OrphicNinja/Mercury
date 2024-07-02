// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputChord;
struct FFocusEvent;
struct FGeometry;
struct FKeyEvent;
struct FEventReply;
struct FPointerEvent;
#ifdef STARBREEZE_SBZInputKeySelector_generated_h
#error "SBZInputKeySelector.generated.h already included, missing '#pragma once' in SBZInputKeySelector.h"
#endif
#define STARBREEZE_SBZInputKeySelector_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZInputKeySelector_h_20_DELEGATE \
static inline void FOnIsSelectingKeyChanged_DelegateWrapper(const FMulticastScriptDelegate& OnIsSelectingKeyChanged) \
{ \
	OnIsSelectingKeyChanged.ProcessMulticastDelegate<UObject>(NULL); \
}


#define PAYDAY3_Source_Starbreeze_Public_SBZInputKeySelector_h_19_DELEGATE \
struct SBZInputKeySelector_eventOnKeySelected_Parms \
{ \
	FInputChord SelectedKey; \
}; \
static inline void FOnKeySelected_DelegateWrapper(const FMulticastScriptDelegate& OnKeySelected, FInputChord SelectedKey) \
{ \
	SBZInputKeySelector_eventOnKeySelected_Parms Parms; \
	Parms.SelectedKey=SelectedKey; \
	OnKeySelected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Source_Starbreeze_Public_SBZInputKeySelector_h_17_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZInputKeySelector_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnClicked_Internal); \
	DECLARE_FUNCTION(execOnFocusLost_Internal); \
	DECLARE_FUNCTION(execOnKeyDown_Internal); \
	DECLARE_FUNCTION(execOnKeyUp_Internal); \
	DECLARE_FUNCTION(execOnMouseButtonDown_Internal); \
	DECLARE_FUNCTION(execOnMouseWheel_Internal); \
	DECLARE_FUNCTION(execOnPreviewKeyDown_Internal); \
	DECLARE_FUNCTION(execOnPreviewMouseButtonDown_Internal); \
	DECLARE_FUNCTION(execSetSelectedKey);


#define PAYDAY3_Source_Starbreeze_Public_SBZInputKeySelector_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnClicked_Internal); \
	DECLARE_FUNCTION(execOnFocusLost_Internal); \
	DECLARE_FUNCTION(execOnKeyDown_Internal); \
	DECLARE_FUNCTION(execOnKeyUp_Internal); \
	DECLARE_FUNCTION(execOnMouseButtonDown_Internal); \
	DECLARE_FUNCTION(execOnMouseWheel_Internal); \
	DECLARE_FUNCTION(execOnPreviewKeyDown_Internal); \
	DECLARE_FUNCTION(execOnPreviewMouseButtonDown_Internal); \
	DECLARE_FUNCTION(execSetSelectedKey);


#define PAYDAY3_Source_Starbreeze_Public_SBZInputKeySelector_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZInputKeySelector(); \
	friend struct Z_Construct_UClass_USBZInputKeySelector_Statics; \
public: \
	DECLARE_CLASS(USBZInputKeySelector, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZInputKeySelector)


#define PAYDAY3_Source_Starbreeze_Public_SBZInputKeySelector_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSBZInputKeySelector(); \
	friend struct Z_Construct_UClass_USBZInputKeySelector_Statics; \
public: \
	DECLARE_CLASS(USBZInputKeySelector, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZInputKeySelector)


#define PAYDAY3_Source_Starbreeze_Public_SBZInputKeySelector_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZInputKeySelector(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZInputKeySelector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZInputKeySelector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZInputKeySelector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZInputKeySelector(USBZInputKeySelector&&); \
	NO_API USBZInputKeySelector(const USBZInputKeySelector&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZInputKeySelector_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZInputKeySelector(USBZInputKeySelector&&); \
	NO_API USBZInputKeySelector(const USBZInputKeySelector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZInputKeySelector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZInputKeySelector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZInputKeySelector)


#define PAYDAY3_Source_Starbreeze_Public_SBZInputKeySelector_h_17_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZInputKeySelector_h_15_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZInputKeySelector_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZInputKeySelector_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZInputKeySelector_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZInputKeySelector_h_17_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZInputKeySelector_h_17_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZInputKeySelector_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZInputKeySelector_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZInputKeySelector_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZInputKeySelector_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZInputKeySelector_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZInputKeySelector_h_17_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZInputKeySelector_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZInputKeySelector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZInputKeySelector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
