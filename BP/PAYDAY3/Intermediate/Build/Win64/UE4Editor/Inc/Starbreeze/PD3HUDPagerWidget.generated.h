// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPD3HeistState : uint8;
#ifdef STARBREEZE_PD3HUDPagerWidget_generated_h
#error "PD3HUDPagerWidget.generated.h already included, missing '#pragma once' in PD3HUDPagerWidget.h"
#endif
#define STARBREEZE_PD3HUDPagerWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPagerWidget_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPagerWidget_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHeistStateChangedEvent);


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPagerWidget_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHeistStateChangedEvent);


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPagerWidget_h_9_EVENT_PARMS \
	struct PD3HUDPagerWidget_eventOnAnswerPagerValueChanged_Parms \
	{ \
		int32 AnswerPagerValue; \
		int32 MaxAnswerPagerValue; \
	}; \
	struct PD3HUDPagerWidget_eventOnHeistStateChanged_Parms \
	{ \
		EPD3HeistState NewState; \
	};


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPagerWidget_h_9_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPagerWidget_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPD3HUDPagerWidget(); \
	friend struct Z_Construct_UClass_UPD3HUDPagerWidget_Statics; \
public: \
	DECLARE_CLASS(UPD3HUDPagerWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3HUDPagerWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPagerWidget_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUPD3HUDPagerWidget(); \
	friend struct Z_Construct_UClass_UPD3HUDPagerWidget_Statics; \
public: \
	DECLARE_CLASS(UPD3HUDPagerWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3HUDPagerWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPagerWidget_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPD3HUDPagerWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPD3HUDPagerWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3HUDPagerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3HUDPagerWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3HUDPagerWidget(UPD3HUDPagerWidget&&); \
	NO_API UPD3HUDPagerWidget(const UPD3HUDPagerWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPagerWidget_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3HUDPagerWidget(UPD3HUDPagerWidget&&); \
	NO_API UPD3HUDPagerWidget(const UPD3HUDPagerWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3HUDPagerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3HUDPagerWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPD3HUDPagerWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPagerWidget_h_9_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPagerWidget_h_7_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPagerWidget_h_9_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPagerWidget_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPagerWidget_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPagerWidget_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPagerWidget_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPagerWidget_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPagerWidget_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPagerWidget_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPagerWidget_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPagerWidget_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPagerWidget_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPagerWidget_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPagerWidget_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPagerWidget_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPagerWidget_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class UPD3HUDPagerWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PD3HUDPagerWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
