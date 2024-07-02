// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZObjective;
#ifdef STARBREEZE_SBZObjectiveWidget_generated_h
#error "SBZObjectiveWidget.generated.h already included, missing '#pragma once' in SBZObjectiveWidget.h"
#endif
#define STARBREEZE_SBZObjectiveWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZObjectiveWidget_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZObjectiveWidget_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnObjectiveActivated); \
	DECLARE_FUNCTION(execOnObjectiveUpdated);


#define PAYDAY3_Source_Starbreeze_Public_SBZObjectiveWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnObjectiveActivated); \
	DECLARE_FUNCTION(execOnObjectiveUpdated);


#define PAYDAY3_Source_Starbreeze_Public_SBZObjectiveWidget_h_16_EVENT_PARMS \
	struct SBZObjectiveWidget_eventObjectiveActivated_Parms \
	{ \
		ASBZObjective* NewObjectiveActivated; \
	}; \
	struct SBZObjectiveWidget_eventObjectiveCompleted_Parms \
	{ \
		ASBZObjective* NewObjectiveCompleted; \
	}; \
	struct SBZObjectiveWidget_eventObjectiveDisabled_Parms \
	{ \
		ASBZObjective* NewObjectiveDisabled; \
	}; \
	struct SBZObjectiveWidget_eventObjectiveFailed_Parms \
	{ \
		ASBZObjective* NewObjectiveFailed; \
	}; \
	struct SBZObjectiveWidget_eventObjectiveUpdated_Parms \
	{ \
		ASBZObjective* NewObjectiveUpdated; \
	}; \
	struct SBZObjectiveWidget_eventOnObjectiveInitialized_Parms \
	{ \
		ASBZObjective* ObjectiveInit; \
		bool bIsSubObjective; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZObjectiveWidget_h_16_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZObjectiveWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZObjectiveWidget(); \
	friend struct Z_Construct_UClass_USBZObjectiveWidget_Statics; \
public: \
	DECLARE_CLASS(USBZObjectiveWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZObjectiveWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZObjectiveWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSBZObjectiveWidget(); \
	friend struct Z_Construct_UClass_USBZObjectiveWidget_Statics; \
public: \
	DECLARE_CLASS(USBZObjectiveWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZObjectiveWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZObjectiveWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZObjectiveWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZObjectiveWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZObjectiveWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZObjectiveWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZObjectiveWidget(USBZObjectiveWidget&&); \
	NO_API USBZObjectiveWidget(const USBZObjectiveWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZObjectiveWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZObjectiveWidget(USBZObjectiveWidget&&); \
	NO_API USBZObjectiveWidget(const USBZObjectiveWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZObjectiveWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZObjectiveWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZObjectiveWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZObjectiveWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SubObjectiveWidgetClass() { return STRUCT_OFFSET(USBZObjectiveWidget, SubObjectiveWidgetClass); } \
	FORCEINLINE static uint32 __PPO__Text_Objective() { return STRUCT_OFFSET(USBZObjectiveWidget, Text_Objective); } \
	FORCEINLINE static uint32 __PPO__ProgressBar_Progress() { return STRUCT_OFFSET(USBZObjectiveWidget, ProgressBar_Progress); } \
	FORCEINLINE static uint32 __PPO__Text_ProgressSpeed() { return STRUCT_OFFSET(USBZObjectiveWidget, Text_ProgressSpeed); } \
	FORCEINLINE static uint32 __PPO__Panel_SubObjectivesContainer() { return STRUCT_OFFSET(USBZObjectiveWidget, Panel_SubObjectivesContainer); } \
	FORCEINLINE static uint32 __PPO__bIsActive() { return STRUCT_OFFSET(USBZObjectiveWidget, bIsActive); } \
	FORCEINLINE static uint32 __PPO__bIsTimed() { return STRUCT_OFFSET(USBZObjectiveWidget, bIsTimed); } \
	FORCEINLINE static uint32 __PPO__Objective() { return STRUCT_OFFSET(USBZObjectiveWidget, Objective); }


#define PAYDAY3_Source_Starbreeze_Public_SBZObjectiveWidget_h_14_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectiveWidget_h_16_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZObjectiveWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectiveWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectiveWidget_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectiveWidget_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectiveWidget_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectiveWidget_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectiveWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZObjectiveWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectiveWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectiveWidget_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectiveWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectiveWidget_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectiveWidget_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectiveWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZObjectiveWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZObjectiveWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
