// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZUIStackChangedEvent;
#ifdef STARBREEZE_SBZMenuStackWidget_generated_h
#error "SBZMenuStackWidget.generated.h already included, missing '#pragma once' in SBZMenuStackWidget.h"
#endif
#define STARBREEZE_SBZMenuStackWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMenuStackWidget_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMenuStackWidget_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetStackValue); \
	DECLARE_FUNCTION(execOnStackStateChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuStackWidget_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStackValue); \
	DECLARE_FUNCTION(execOnStackStateChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuStackWidget_h_9_EVENT_PARMS \
	struct SBZMenuStackWidget_eventOnGainedStackFocused_Parms \
	{ \
		FName PreviousValue; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuStackWidget_h_9_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMenuStackWidget_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMenuStackWidget(); \
	friend struct Z_Construct_UClass_USBZMenuStackWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMenuStackWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMenuStackWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuStackWidget_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMenuStackWidget(); \
	friend struct Z_Construct_UClass_USBZMenuStackWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMenuStackWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMenuStackWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuStackWidget_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMenuStackWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMenuStackWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMenuStackWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMenuStackWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMenuStackWidget(USBZMenuStackWidget&&); \
	NO_API USBZMenuStackWidget(const USBZMenuStackWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuStackWidget_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMenuStackWidget(USBZMenuStackWidget&&); \
	NO_API USBZMenuStackWidget(const USBZMenuStackWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMenuStackWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMenuStackWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMenuStackWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuStackWidget_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StackValue() { return STRUCT_OFFSET(USBZMenuStackWidget, StackValue); } \
	FORCEINLINE static uint32 __PPO__bHasStackFocus() { return STRUCT_OFFSET(USBZMenuStackWidget, bHasStackFocus); } \
	FORCEINLINE static uint32 __PPO__bIsOnStack() { return STRUCT_OFFSET(USBZMenuStackWidget, bIsOnStack); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuStackWidget_h_7_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuStackWidget_h_9_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuStackWidget_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuStackWidget_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuStackWidget_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuStackWidget_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuStackWidget_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuStackWidget_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuStackWidget_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuStackWidget_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuStackWidget_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuStackWidget_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuStackWidget_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuStackWidget_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuStackWidget_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuStackWidget_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMenuStackWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMenuStackWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
