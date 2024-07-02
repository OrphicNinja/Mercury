// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZAsyncLoadingProgress;
#ifdef STARBREEZE_SBZMainMenuPreMatchWidget_generated_h
#error "SBZMainMenuPreMatchWidget.generated.h already included, missing '#pragma once' in SBZMainMenuPreMatchWidget.h"
#endif
#define STARBREEZE_SBZMainMenuPreMatchWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreMatchWidget_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreMatchWidget_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsAsyncLoadingDone);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreMatchWidget_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsAsyncLoadingDone);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreMatchWidget_h_9_EVENT_PARMS \
	struct SBZMainMenuPreMatchWidget_eventOnAsyncLoadingProgress_Parms \
	{ \
		FSBZAsyncLoadingProgress Progress; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreMatchWidget_h_9_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreMatchWidget_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuPreMatchWidget(); \
	friend struct Z_Construct_UClass_USBZMainMenuPreMatchWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuPreMatchWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuPreMatchWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreMatchWidget_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuPreMatchWidget(); \
	friend struct Z_Construct_UClass_USBZMainMenuPreMatchWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuPreMatchWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuPreMatchWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreMatchWidget_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuPreMatchWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuPreMatchWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuPreMatchWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuPreMatchWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuPreMatchWidget(USBZMainMenuPreMatchWidget&&); \
	NO_API USBZMainMenuPreMatchWidget(const USBZMainMenuPreMatchWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreMatchWidget_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuPreMatchWidget(USBZMainMenuPreMatchWidget&&); \
	NO_API USBZMainMenuPreMatchWidget(const USBZMainMenuPreMatchWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuPreMatchWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuPreMatchWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuPreMatchWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreMatchWidget_h_9_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreMatchWidget_h_7_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreMatchWidget_h_9_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreMatchWidget_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreMatchWidget_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreMatchWidget_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreMatchWidget_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreMatchWidget_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreMatchWidget_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreMatchWidget_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreMatchWidget_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreMatchWidget_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreMatchWidget_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreMatchWidget_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreMatchWidget_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreMatchWidget_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreMatchWidget_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuPreMatchWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPreMatchWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
