// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZCuttableWidget_generated_h
#error "SBZCuttableWidget.generated.h already included, missing '#pragma once' in SBZCuttableWidget.h"
#endif
#define STARBREEZE_SBZCuttableWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableWidget_h_8_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableWidget_h_8_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableWidget_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableWidget_h_8_EVENT_PARMS \
	struct SBZCuttableWidget_eventOnWidgetCut_Parms \
	{ \
		float AtSegment; \
	}; \
	struct SBZCuttableWidget_eventOnWidgetCutClockwise_Parms \
	{ \
		float DeltaDegrees; \
	}; \
	struct SBZCuttableWidget_eventOnWidgetCutCounterClockwise_Parms \
	{ \
		float DeltaDegrees; \
	}; \
	struct SBZCuttableWidget_eventOnWidgetInitialCut_Parms \
	{ \
		float AtSegment; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableWidget_h_8_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableWidget_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZCuttableWidget(); \
	friend struct Z_Construct_UClass_USBZCuttableWidget_Statics; \
public: \
	DECLARE_CLASS(USBZCuttableWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCuttableWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableWidget_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUSBZCuttableWidget(); \
	friend struct Z_Construct_UClass_USBZCuttableWidget_Statics; \
public: \
	DECLARE_CLASS(USBZCuttableWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCuttableWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableWidget_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZCuttableWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCuttableWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCuttableWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCuttableWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCuttableWidget(USBZCuttableWidget&&); \
	NO_API USBZCuttableWidget(const USBZCuttableWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableWidget_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCuttableWidget(USBZCuttableWidget&&); \
	NO_API USBZCuttableWidget(const USBZCuttableWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCuttableWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCuttableWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZCuttableWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableWidget_h_8_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableWidget_h_6_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableWidget_h_8_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableWidget_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableWidget_h_8_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableWidget_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableWidget_h_8_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableWidget_h_8_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableWidget_h_8_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableWidget_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableWidget_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableWidget_h_8_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableWidget_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableWidget_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableWidget_h_8_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableWidget_h_8_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableWidget_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZCuttableWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCuttableWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
