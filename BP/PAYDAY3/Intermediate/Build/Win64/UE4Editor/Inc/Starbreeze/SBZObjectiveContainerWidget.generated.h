// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class ASBZObjective;
#ifdef STARBREEZE_SBZObjectiveContainerWidget_generated_h
#error "SBZObjectiveContainerWidget.generated.h already included, missing '#pragma once' in SBZObjectiveContainerWidget.h"
#endif
#define STARBREEZE_SBZObjectiveContainerWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZObjectiveContainerWidget_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZObjectiveContainerWidget_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnObjectiveAdded); \
	DECLARE_FUNCTION(execOnObjectiveRemoved);


#define PAYDAY3_Source_Starbreeze_Public_SBZObjectiveContainerWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnObjectiveAdded); \
	DECLARE_FUNCTION(execOnObjectiveRemoved);


#define PAYDAY3_Source_Starbreeze_Public_SBZObjectiveContainerWidget_h_14_EVENT_PARMS \
	struct SBZObjectiveContainerWidget_eventObjectiveAdded_Parms \
	{ \
		ASBZObjective* Objective; \
	}; \
	struct SBZObjectiveContainerWidget_eventObjectiveRemove_Parms \
	{ \
		ASBZObjective* Objective; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZObjectiveContainerWidget_h_14_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZObjectiveContainerWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZObjectiveContainerWidget(); \
	friend struct Z_Construct_UClass_USBZObjectiveContainerWidget_Statics; \
public: \
	DECLARE_CLASS(USBZObjectiveContainerWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZObjectiveContainerWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZObjectiveContainerWidget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZObjectiveContainerWidget(); \
	friend struct Z_Construct_UClass_USBZObjectiveContainerWidget_Statics; \
public: \
	DECLARE_CLASS(USBZObjectiveContainerWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZObjectiveContainerWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZObjectiveContainerWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZObjectiveContainerWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZObjectiveContainerWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZObjectiveContainerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZObjectiveContainerWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZObjectiveContainerWidget(USBZObjectiveContainerWidget&&); \
	NO_API USBZObjectiveContainerWidget(const USBZObjectiveContainerWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZObjectiveContainerWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZObjectiveContainerWidget(USBZObjectiveContainerWidget&&); \
	NO_API USBZObjectiveContainerWidget(const USBZObjectiveContainerWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZObjectiveContainerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZObjectiveContainerWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZObjectiveContainerWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZObjectiveContainerWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Panel_ObjectivesContainer() { return STRUCT_OFFSET(USBZObjectiveContainerWidget, Panel_ObjectivesContainer); } \
	FORCEINLINE static uint32 __PPO__Panel_OptionalObjectivesContainer() { return STRUCT_OFFSET(USBZObjectiveContainerWidget, Panel_OptionalObjectivesContainer); } \
	FORCEINLINE static uint32 __PPO__ObjectiveWidgetClass() { return STRUCT_OFFSET(USBZObjectiveContainerWidget, ObjectiveWidgetClass); }


#define PAYDAY3_Source_Starbreeze_Public_SBZObjectiveContainerWidget_h_12_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectiveContainerWidget_h_14_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZObjectiveContainerWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectiveContainerWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectiveContainerWidget_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectiveContainerWidget_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectiveContainerWidget_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectiveContainerWidget_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectiveContainerWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZObjectiveContainerWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectiveContainerWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectiveContainerWidget_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectiveContainerWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectiveContainerWidget_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectiveContainerWidget_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZObjectiveContainerWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZObjectiveContainerWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZObjectiveContainerWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
