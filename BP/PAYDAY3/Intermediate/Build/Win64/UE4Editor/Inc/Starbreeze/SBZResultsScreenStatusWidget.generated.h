// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZResultsScreenStatusWidget_generated_h
#error "SBZResultsScreenStatusWidget.generated.h already included, missing '#pragma once' in SBZResultsScreenStatusWidget.h"
#endif
#define STARBREEZE_SBZResultsScreenStatusWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZResultsScreenStatusWidget_h_8_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZResultsScreenStatusWidget_h_8_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZResultsScreenStatusWidget_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZResultsScreenStatusWidget_h_8_EVENT_PARMS \
	struct SBZResultsScreenStatusWidget_eventOnRestartAcceptTimerUpdated_Parms \
	{ \
		float InNewTime; \
	}; \
	struct SBZResultsScreenStatusWidget_eventOnRestartCountdownTimerUpdated_Parms \
	{ \
		float InNewTime; \
	}; \
	struct SBZResultsScreenStatusWidget_eventOnRestartExpireTimerUpdated_Parms \
	{ \
		float InNewTime; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZResultsScreenStatusWidget_h_8_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZResultsScreenStatusWidget_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZResultsScreenStatusWidget(); \
	friend struct Z_Construct_UClass_USBZResultsScreenStatusWidget_Statics; \
public: \
	DECLARE_CLASS(USBZResultsScreenStatusWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZResultsScreenStatusWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZResultsScreenStatusWidget_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUSBZResultsScreenStatusWidget(); \
	friend struct Z_Construct_UClass_USBZResultsScreenStatusWidget_Statics; \
public: \
	DECLARE_CLASS(USBZResultsScreenStatusWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZResultsScreenStatusWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZResultsScreenStatusWidget_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZResultsScreenStatusWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZResultsScreenStatusWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZResultsScreenStatusWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZResultsScreenStatusWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZResultsScreenStatusWidget(USBZResultsScreenStatusWidget&&); \
	NO_API USBZResultsScreenStatusWidget(const USBZResultsScreenStatusWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZResultsScreenStatusWidget_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZResultsScreenStatusWidget(USBZResultsScreenStatusWidget&&); \
	NO_API USBZResultsScreenStatusWidget(const USBZResultsScreenStatusWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZResultsScreenStatusWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZResultsScreenStatusWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZResultsScreenStatusWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZResultsScreenStatusWidget_h_8_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZResultsScreenStatusWidget_h_6_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZResultsScreenStatusWidget_h_8_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZResultsScreenStatusWidget_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZResultsScreenStatusWidget_h_8_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZResultsScreenStatusWidget_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZResultsScreenStatusWidget_h_8_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZResultsScreenStatusWidget_h_8_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZResultsScreenStatusWidget_h_8_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZResultsScreenStatusWidget_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZResultsScreenStatusWidget_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZResultsScreenStatusWidget_h_8_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZResultsScreenStatusWidget_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZResultsScreenStatusWidget_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZResultsScreenStatusWidget_h_8_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZResultsScreenStatusWidget_h_8_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZResultsScreenStatusWidget_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZResultsScreenStatusWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZResultsScreenStatusWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
