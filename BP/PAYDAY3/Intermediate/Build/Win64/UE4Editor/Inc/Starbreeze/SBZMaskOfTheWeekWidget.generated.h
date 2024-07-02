// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTimespan;
struct FSBZStoreItemUIData;
#ifdef STARBREEZE_SBZMaskOfTheWeekWidget_generated_h
#error "SBZMaskOfTheWeekWidget.generated.h already included, missing '#pragma once' in SBZMaskOfTheWeekWidget.h"
#endif
#define STARBREEZE_SBZMaskOfTheWeekWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMaskOfTheWeekWidget_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMaskOfTheWeekWidget_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTimeRemainingUntilReset); \
	DECLARE_FUNCTION(execUpdateData);


#define PAYDAY3_Source_Starbreeze_Public_SBZMaskOfTheWeekWidget_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTimeRemainingUntilReset); \
	DECLARE_FUNCTION(execUpdateData);


#define PAYDAY3_Source_Starbreeze_Public_SBZMaskOfTheWeekWidget_h_10_EVENT_PARMS \
	struct SBZMaskOfTheWeekWidget_eventOnDataUpdated_Parms \
	{ \
		FSBZStoreItemUIData InUpdatedStoreItemUIData; \
	}; \
	struct SBZMaskOfTheWeekWidget_eventOnUpdateTimerText_Parms \
	{ \
		bool bInPreviewDays; \
		FTimespan InTimeRemaining; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMaskOfTheWeekWidget_h_10_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMaskOfTheWeekWidget_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMaskOfTheWeekWidget(); \
	friend struct Z_Construct_UClass_USBZMaskOfTheWeekWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMaskOfTheWeekWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMaskOfTheWeekWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMaskOfTheWeekWidget_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMaskOfTheWeekWidget(); \
	friend struct Z_Construct_UClass_USBZMaskOfTheWeekWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMaskOfTheWeekWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMaskOfTheWeekWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMaskOfTheWeekWidget_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMaskOfTheWeekWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMaskOfTheWeekWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMaskOfTheWeekWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMaskOfTheWeekWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMaskOfTheWeekWidget(USBZMaskOfTheWeekWidget&&); \
	NO_API USBZMaskOfTheWeekWidget(const USBZMaskOfTheWeekWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMaskOfTheWeekWidget_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMaskOfTheWeekWidget(USBZMaskOfTheWeekWidget&&); \
	NO_API USBZMaskOfTheWeekWidget(const USBZMaskOfTheWeekWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMaskOfTheWeekWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMaskOfTheWeekWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMaskOfTheWeekWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMaskOfTheWeekWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TimerUpdateFrequency() { return STRUCT_OFFSET(USBZMaskOfTheWeekWidget, TimerUpdateFrequency); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMaskOfTheWeekWidget_h_8_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMaskOfTheWeekWidget_h_10_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMaskOfTheWeekWidget_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMaskOfTheWeekWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMaskOfTheWeekWidget_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMaskOfTheWeekWidget_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMaskOfTheWeekWidget_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMaskOfTheWeekWidget_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMaskOfTheWeekWidget_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMaskOfTheWeekWidget_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMaskOfTheWeekWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMaskOfTheWeekWidget_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMaskOfTheWeekWidget_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMaskOfTheWeekWidget_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMaskOfTheWeekWidget_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMaskOfTheWeekWidget_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMaskOfTheWeekWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMaskOfTheWeekWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
