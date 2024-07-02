// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZBreachingEquipmentState : uint8;
enum class ESBZDrillState : uint8;
#ifdef STARBREEZE_SBZDrillWidget_generated_h
#error "SBZDrillWidget.generated.h already included, missing '#pragma once' in SBZDrillWidget.h"
#endif
#define STARBREEZE_SBZDrillWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZDrillWidget_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZDrillWidget_h_16_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZDrillWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZDrillWidget_h_16_EVENT_PARMS \
	struct SBZDrillWidget_eventOnProgressRateChanged_Parms \
	{ \
		float ProgressPerSec; \
		float HeatPerSec; \
	}; \
	struct SBZDrillWidget_eventOnUpdateBreachState_Parms \
	{ \
		ESBZBreachingEquipmentState NewState; \
	}; \
	struct SBZDrillWidget_eventOnUpdateState_Parms \
	{ \
		ESBZDrillState StateUpdated; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZDrillWidget_h_16_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZDrillWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZDrillWidget(); \
	friend struct Z_Construct_UClass_USBZDrillWidget_Statics; \
public: \
	DECLARE_CLASS(USBZDrillWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZDrillWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZDrillWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSBZDrillWidget(); \
	friend struct Z_Construct_UClass_USBZDrillWidget_Statics; \
public: \
	DECLARE_CLASS(USBZDrillWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZDrillWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZDrillWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZDrillWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZDrillWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZDrillWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZDrillWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZDrillWidget(USBZDrillWidget&&); \
	NO_API USBZDrillWidget(const USBZDrillWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZDrillWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZDrillWidget(USBZDrillWidget&&); \
	NO_API USBZDrillWidget(const USBZDrillWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZDrillWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZDrillWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZDrillWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZDrillWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TimeLeftText() { return STRUCT_OFFSET(USBZDrillWidget, TimeLeftText); } \
	FORCEINLINE static uint32 __PPO__ProgressItem() { return STRUCT_OFFSET(USBZDrillWidget, ProgressItem); } \
	FORCEINLINE static uint32 __PPO__HeatItem() { return STRUCT_OFFSET(USBZDrillWidget, HeatItem); } \
	FORCEINLINE static uint32 __PPO__Drill() { return STRUCT_OFFSET(USBZDrillWidget, Drill); } \
	FORCEINLINE static uint32 __PPO__DrillEx() { return STRUCT_OFFSET(USBZDrillWidget, DrillEx); } \
	FORCEINLINE static uint32 __PPO__PocketDrill() { return STRUCT_OFFSET(USBZDrillWidget, PocketDrill); }


#define PAYDAY3_Source_Starbreeze_Public_SBZDrillWidget_h_14_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZDrillWidget_h_16_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZDrillWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZDrillWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZDrillWidget_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZDrillWidget_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZDrillWidget_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZDrillWidget_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZDrillWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZDrillWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZDrillWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZDrillWidget_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZDrillWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZDrillWidget_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZDrillWidget_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZDrillWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZDrillWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZDrillWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
