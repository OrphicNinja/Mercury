// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZSelectorWidget_generated_h
#error "SBZSelectorWidget.generated.h already included, missing '#pragma once' in SBZSelectorWidget.h"
#endif
#define STARBREEZE_SBZSelectorWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSelectorWidget_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSelectorWidget_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSelectLeft); \
	DECLARE_FUNCTION(execSelectRight); \
	DECLARE_FUNCTION(execSetCurrentIndex); \
	DECLARE_FUNCTION(execSetSelectionCount);


#define PAYDAY3_Source_Starbreeze_Public_SBZSelectorWidget_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSelectLeft); \
	DECLARE_FUNCTION(execSelectRight); \
	DECLARE_FUNCTION(execSetCurrentIndex); \
	DECLARE_FUNCTION(execSetSelectionCount);


#define PAYDAY3_Source_Starbreeze_Public_SBZSelectorWidget_h_9_EVENT_PARMS \
	struct SBZSelectorWidget_eventOnSelectionOptionChanged_Parms \
	{ \
		int32 InCurrentIndex; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZSelectorWidget_h_9_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZSelectorWidget_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZSelectorWidget(); \
	friend struct Z_Construct_UClass_USBZSelectorWidget_Statics; \
public: \
	DECLARE_CLASS(USBZSelectorWidget, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSelectorWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZSelectorWidget_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUSBZSelectorWidget(); \
	friend struct Z_Construct_UClass_USBZSelectorWidget_Statics; \
public: \
	DECLARE_CLASS(USBZSelectorWidget, USBZMenuButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSelectorWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZSelectorWidget_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZSelectorWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSelectorWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSelectorWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSelectorWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSelectorWidget(USBZSelectorWidget&&); \
	NO_API USBZSelectorWidget(const USBZSelectorWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSelectorWidget_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSelectorWidget(USBZSelectorWidget&&); \
	NO_API USBZSelectorWidget(const USBZSelectorWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSelectorWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSelectorWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZSelectorWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZSelectorWidget_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SelectionCount() { return STRUCT_OFFSET(USBZSelectorWidget, SelectionCount); } \
	FORCEINLINE static uint32 __PPO__CurrentIndex() { return STRUCT_OFFSET(USBZSelectorWidget, CurrentIndex); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSelectorWidget_h_7_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZSelectorWidget_h_9_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZSelectorWidget_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSelectorWidget_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSelectorWidget_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSelectorWidget_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSelectorWidget_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSelectorWidget_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSelectorWidget_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSelectorWidget_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSelectorWidget_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSelectorWidget_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSelectorWidget_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSelectorWidget_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSelectorWidget_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSelectorWidget_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZSelectorWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSelectorWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
