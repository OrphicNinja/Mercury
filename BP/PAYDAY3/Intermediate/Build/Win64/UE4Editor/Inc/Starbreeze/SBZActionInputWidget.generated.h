// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZActionInputWidget_generated_h
#error "SBZActionInputWidget.generated.h already included, missing '#pragma once' in SBZActionInputWidget.h"
#endif
#define STARBREEZE_SBZActionInputWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZActionInputWidget_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZActionInputWidget_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnActionPressed); \
	DECLARE_FUNCTION(execOnActionReleased); \
	DECLARE_FUNCTION(execSetAction);


#define PAYDAY3_Source_Starbreeze_Public_SBZActionInputWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnActionPressed); \
	DECLARE_FUNCTION(execOnActionReleased); \
	DECLARE_FUNCTION(execSetAction);


#define PAYDAY3_Source_Starbreeze_Public_SBZActionInputWidget_h_11_EVENT_PARMS
#define PAYDAY3_Source_Starbreeze_Public_SBZActionInputWidget_h_11_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZActionInputWidget_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZActionInputWidget(); \
	friend struct Z_Construct_UClass_USBZActionInputWidget_Statics; \
public: \
	DECLARE_CLASS(USBZActionInputWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZActionInputWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZActionInputWidget_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZActionInputWidget(); \
	friend struct Z_Construct_UClass_USBZActionInputWidget_Statics; \
public: \
	DECLARE_CLASS(USBZActionInputWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZActionInputWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZActionInputWidget_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZActionInputWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZActionInputWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZActionInputWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZActionInputWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZActionInputWidget(USBZActionInputWidget&&); \
	NO_API USBZActionInputWidget(const USBZActionInputWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZActionInputWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZActionInputWidget(USBZActionInputWidget&&); \
	NO_API USBZActionInputWidget(const USBZActionInputWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZActionInputWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZActionInputWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZActionInputWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZActionInputWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActionName() { return STRUCT_OFFSET(USBZActionInputWidget, ActionName); } \
	FORCEINLINE static uint32 __PPO__bConsumeInput() { return STRUCT_OFFSET(USBZActionInputWidget, bConsumeInput); } \
	FORCEINLINE static uint32 __PPO__bIsActionPressed() { return STRUCT_OFFSET(USBZActionInputWidget, bIsActionPressed); } \
	FORCEINLINE static uint32 __PPO__KeyWidget() { return STRUCT_OFFSET(USBZActionInputWidget, KeyWidget); } \
	FORCEINLINE static uint32 __PPO__bIsIconVisibleForKeyboardAndMouse() { return STRUCT_OFFSET(USBZActionInputWidget, bIsIconVisibleForKeyboardAndMouse); } \
	FORCEINLINE static uint32 __PPO__OnActionPressedEvent() { return STRUCT_OFFSET(USBZActionInputWidget, OnActionPressedEvent); } \
	FORCEINLINE static uint32 __PPO__OnActionReleasedEvent() { return STRUCT_OFFSET(USBZActionInputWidget, OnActionReleasedEvent); }


#define PAYDAY3_Source_Starbreeze_Public_SBZActionInputWidget_h_9_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZActionInputWidget_h_11_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZActionInputWidget_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZActionInputWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZActionInputWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZActionInputWidget_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZActionInputWidget_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZActionInputWidget_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZActionInputWidget_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZActionInputWidget_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZActionInputWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZActionInputWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZActionInputWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZActionInputWidget_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZActionInputWidget_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZActionInputWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZActionInputWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZActionInputWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
