// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZControlsReference;
#ifdef STARBREEZE_SBZControlsReferenceWidget_generated_h
#error "SBZControlsReferenceWidget.generated.h already included, missing '#pragma once' in SBZControlsReferenceWidget.h"
#endif
#define STARBREEZE_SBZControlsReferenceWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZControlsReferenceWidget_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZControlsReferenceWidget_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisplayActiveControlsReference); \
	DECLARE_FUNCTION(execHideActiveControlsReference); \
	DECLARE_FUNCTION(execNativeDisplayControlsReference);


#define PAYDAY3_Source_Starbreeze_Public_SBZControlsReferenceWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisplayActiveControlsReference); \
	DECLARE_FUNCTION(execHideActiveControlsReference); \
	DECLARE_FUNCTION(execNativeDisplayControlsReference);


#define PAYDAY3_Source_Starbreeze_Public_SBZControlsReferenceWidget_h_14_EVENT_PARMS \
	struct SBZControlsReferenceWidget_eventDisplayControlsReference_Parms \
	{ \
		FSBZControlsReference InControlsReference; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZControlsReferenceWidget_h_14_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZControlsReferenceWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZControlsReferenceWidget(); \
	friend struct Z_Construct_UClass_USBZControlsReferenceWidget_Statics; \
public: \
	DECLARE_CLASS(USBZControlsReferenceWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZControlsReferenceWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZControlsReferenceWidget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZControlsReferenceWidget(); \
	friend struct Z_Construct_UClass_USBZControlsReferenceWidget_Statics; \
public: \
	DECLARE_CLASS(USBZControlsReferenceWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZControlsReferenceWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZControlsReferenceWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZControlsReferenceWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZControlsReferenceWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZControlsReferenceWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZControlsReferenceWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZControlsReferenceWidget(USBZControlsReferenceWidget&&); \
	NO_API USBZControlsReferenceWidget(const USBZControlsReferenceWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZControlsReferenceWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZControlsReferenceWidget(USBZControlsReferenceWidget&&); \
	NO_API USBZControlsReferenceWidget(const USBZControlsReferenceWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZControlsReferenceWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZControlsReferenceWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZControlsReferenceWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZControlsReferenceWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxActionsDisplayed() { return STRUCT_OFFSET(USBZControlsReferenceWidget, MaxActionsDisplayed); } \
	FORCEINLINE static uint32 __PPO__ControlsReferenceActionWidgetClass() { return STRUCT_OFFSET(USBZControlsReferenceWidget, ControlsReferenceActionWidgetClass); } \
	FORCEINLINE static uint32 __PPO__ControlsReferenceAxisWidgetClass() { return STRUCT_OFFSET(USBZControlsReferenceWidget, ControlsReferenceAxisWidgetClass); } \
	FORCEINLINE static uint32 __PPO__Panel_ActionLists() { return STRUCT_OFFSET(USBZControlsReferenceWidget, Panel_ActionLists); } \
	FORCEINLINE static uint32 __PPO__Panel_AxisLists() { return STRUCT_OFFSET(USBZControlsReferenceWidget, Panel_AxisLists); }


#define PAYDAY3_Source_Starbreeze_Public_SBZControlsReferenceWidget_h_12_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZControlsReferenceWidget_h_14_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZControlsReferenceWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZControlsReferenceWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZControlsReferenceWidget_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZControlsReferenceWidget_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZControlsReferenceWidget_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZControlsReferenceWidget_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZControlsReferenceWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZControlsReferenceWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZControlsReferenceWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZControlsReferenceWidget_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZControlsReferenceWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZControlsReferenceWidget_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZControlsReferenceWidget_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZControlsReferenceWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZControlsReferenceWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZControlsReferenceWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
