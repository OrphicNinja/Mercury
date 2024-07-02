// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZPlayerController;
class ISBZViewTargetCollectionInterface;
#ifdef STARBREEZE_SBZViewTargetContainerWidget_generated_h
#error "SBZViewTargetContainerWidget.generated.h already included, missing '#pragma once' in SBZViewTargetContainerWidget.h"
#endif
#define STARBREEZE_SBZViewTargetContainerWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetContainerWidget_h_17_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetContainerWidget_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnViewTargetChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetContainerWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnViewTargetChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetContainerWidget_h_17_EVENT_PARMS \
	struct SBZViewTargetContainerWidget_eventIsSecurityCamera_Parms \
	{ \
		bool bIsSecurityCamera; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetContainerWidget_h_17_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetContainerWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZViewTargetContainerWidget(); \
	friend struct Z_Construct_UClass_USBZViewTargetContainerWidget_Statics; \
public: \
	DECLARE_CLASS(USBZViewTargetContainerWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZViewTargetContainerWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetContainerWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSBZViewTargetContainerWidget(); \
	friend struct Z_Construct_UClass_USBZViewTargetContainerWidget_Statics; \
public: \
	DECLARE_CLASS(USBZViewTargetContainerWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZViewTargetContainerWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetContainerWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZViewTargetContainerWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZViewTargetContainerWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZViewTargetContainerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZViewTargetContainerWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZViewTargetContainerWidget(USBZViewTargetContainerWidget&&); \
	NO_API USBZViewTargetContainerWidget(const USBZViewTargetContainerWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetContainerWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZViewTargetContainerWidget(USBZViewTargetContainerWidget&&); \
	NO_API USBZViewTargetContainerWidget(const USBZViewTargetContainerWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZViewTargetContainerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZViewTargetContainerWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZViewTargetContainerWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetContainerWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ViewTargetWidgetClass() { return STRUCT_OFFSET(USBZViewTargetContainerWidget, ViewTargetWidgetClass); } \
	FORCEINLINE static uint32 __PPO__Panel_ViewTargetWidgets() { return STRUCT_OFFSET(USBZViewTargetContainerWidget, Panel_ViewTargetWidgets); } \
	FORCEINLINE static uint32 __PPO__ControlsReference() { return STRUCT_OFFSET(USBZViewTargetContainerWidget, ControlsReference); } \
	FORCEINLINE static uint32 __PPO__HackerAcedControlReference() { return STRUCT_OFFSET(USBZViewTargetContainerWidget, HackerAcedControlReference); } \
	FORCEINLINE static uint32 __PPO__HackerRoutedPingControlReference() { return STRUCT_OFFSET(USBZViewTargetContainerWidget, HackerRoutedPingControlReference); } \
	FORCEINLINE static uint32 __PPO__HackerSecureLoopControlReference() { return STRUCT_OFFSET(USBZViewTargetContainerWidget, HackerSecureLoopControlReference); } \
	FORCEINLINE static uint32 __PPO__CurrentIndex() { return STRUCT_OFFSET(USBZViewTargetContainerWidget, CurrentIndex); } \
	FORCEINLINE static uint32 __PPO__TargetCollectionInterface() { return STRUCT_OFFSET(USBZViewTargetContainerWidget, TargetCollectionInterface); } \
	FORCEINLINE static uint32 __PPO__WidgetPool() { return STRUCT_OFFSET(USBZViewTargetContainerWidget, WidgetPool); } \
	FORCEINLINE static uint32 __PPO__CurrentControlsReferenceID() { return STRUCT_OFFSET(USBZViewTargetContainerWidget, CurrentControlsReferenceID); }


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetContainerWidget_h_15_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetContainerWidget_h_17_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetContainerWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetContainerWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetContainerWidget_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetContainerWidget_h_17_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetContainerWidget_h_17_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetContainerWidget_h_17_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetContainerWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZViewTargetContainerWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetContainerWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetContainerWidget_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetContainerWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetContainerWidget_h_17_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetContainerWidget_h_17_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZViewTargetContainerWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZViewTargetContainerWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZViewTargetContainerWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
