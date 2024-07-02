// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZUIStackChangedEvent;
#ifdef STARBREEZE_SBZMenuMultiStackWidget_generated_h
#error "SBZMenuMultiStackWidget.generated.h already included, missing '#pragma once' in SBZMenuMultiStackWidget.h"
#endif
#define STARBREEZE_SBZMenuMultiStackWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMenuMultiStackWidget_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMenuMultiStackWidget_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetActiveStackValue); \
	DECLARE_FUNCTION(execGetStackValues); \
	DECLARE_FUNCTION(execOnStackStateChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuMultiStackWidget_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetActiveStackValue); \
	DECLARE_FUNCTION(execGetStackValues); \
	DECLARE_FUNCTION(execOnStackStateChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuMultiStackWidget_h_9_EVENT_PARMS \
	struct SBZMenuMultiStackWidget_eventOnGainedStackFocused_Parms \
	{ \
		FName PreviousValue; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuMultiStackWidget_h_9_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMenuMultiStackWidget_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMenuMultiStackWidget(); \
	friend struct Z_Construct_UClass_USBZMenuMultiStackWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMenuMultiStackWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMenuMultiStackWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuMultiStackWidget_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMenuMultiStackWidget(); \
	friend struct Z_Construct_UClass_USBZMenuMultiStackWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMenuMultiStackWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMenuMultiStackWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuMultiStackWidget_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMenuMultiStackWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMenuMultiStackWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMenuMultiStackWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMenuMultiStackWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMenuMultiStackWidget(USBZMenuMultiStackWidget&&); \
	NO_API USBZMenuMultiStackWidget(const USBZMenuMultiStackWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuMultiStackWidget_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMenuMultiStackWidget(USBZMenuMultiStackWidget&&); \
	NO_API USBZMenuMultiStackWidget(const USBZMenuMultiStackWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMenuMultiStackWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMenuMultiStackWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMenuMultiStackWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuMultiStackWidget_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StackValues() { return STRUCT_OFFSET(USBZMenuMultiStackWidget, StackValues); } \
	FORCEINLINE static uint32 __PPO__bHasStackFocus() { return STRUCT_OFFSET(USBZMenuMultiStackWidget, bHasStackFocus); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuMultiStackWidget_h_7_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuMultiStackWidget_h_9_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuMultiStackWidget_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuMultiStackWidget_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuMultiStackWidget_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuMultiStackWidget_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuMultiStackWidget_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuMultiStackWidget_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuMultiStackWidget_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuMultiStackWidget_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuMultiStackWidget_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuMultiStackWidget_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuMultiStackWidget_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuMultiStackWidget_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuMultiStackWidget_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuMultiStackWidget_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMenuMultiStackWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMenuMultiStackWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
