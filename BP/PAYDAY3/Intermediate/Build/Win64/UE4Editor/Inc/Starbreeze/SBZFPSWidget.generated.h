// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZFPSWidget_generated_h
#error "SBZFPSWidget.generated.h already included, missing '#pragma once' in SBZFPSWidget.h"
#endif
#define STARBREEZE_SBZFPSWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZFPSWidget_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZFPSWidget_h_10_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZFPSWidget_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZFPSWidget_h_10_EVENT_PARMS \
	struct SBZFPSWidget_eventOnDisplayedChanged_Parms \
	{ \
		bool bInIsDisplaying; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZFPSWidget_h_10_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZFPSWidget_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZFPSWidget(); \
	friend struct Z_Construct_UClass_USBZFPSWidget_Statics; \
public: \
	DECLARE_CLASS(USBZFPSWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZFPSWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZFPSWidget_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUSBZFPSWidget(); \
	friend struct Z_Construct_UClass_USBZFPSWidget_Statics; \
public: \
	DECLARE_CLASS(USBZFPSWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZFPSWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZFPSWidget_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZFPSWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZFPSWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZFPSWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZFPSWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZFPSWidget(USBZFPSWidget&&); \
	NO_API USBZFPSWidget(const USBZFPSWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZFPSWidget_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZFPSWidget(USBZFPSWidget&&); \
	NO_API USBZFPSWidget(const USBZFPSWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZFPSWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZFPSWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZFPSWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZFPSWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Text_FPS() { return STRUCT_OFFSET(USBZFPSWidget, Text_FPS); }


#define PAYDAY3_Source_Starbreeze_Public_SBZFPSWidget_h_8_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZFPSWidget_h_10_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZFPSWidget_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZFPSWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZFPSWidget_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZFPSWidget_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZFPSWidget_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZFPSWidget_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZFPSWidget_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZFPSWidget_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZFPSWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZFPSWidget_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZFPSWidget_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZFPSWidget_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZFPSWidget_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZFPSWidget_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZFPSWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZFPSWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
