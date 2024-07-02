// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZPopupWidget_generated_h
#error "SBZPopupWidget.generated.h already included, missing '#pragma once' in SBZPopupWidget.h"
#endif
#define STARBREEZE_SBZPopupWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZPopupWidget_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZPopupWidget_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAdvanceCountdown); \
	DECLARE_FUNCTION(execHidePopUpWidget); \
	DECLARE_FUNCTION(execIsShowing); \
	DECLARE_FUNCTION(execOnActionPressed);


#define PAYDAY3_Source_Starbreeze_Public_SBZPopupWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAdvanceCountdown); \
	DECLARE_FUNCTION(execHidePopUpWidget); \
	DECLARE_FUNCTION(execIsShowing); \
	DECLARE_FUNCTION(execOnActionPressed);


#define PAYDAY3_Source_Starbreeze_Public_SBZPopupWidget_h_14_EVENT_PARMS
#define PAYDAY3_Source_Starbreeze_Public_SBZPopupWidget_h_14_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZPopupWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZPopupWidget(); \
	friend struct Z_Construct_UClass_USBZPopupWidget_Statics; \
public: \
	DECLARE_CLASS(USBZPopupWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPopupWidget) \
	virtual UObject* _getUObject() const override { return const_cast<USBZPopupWidget*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPopupWidget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZPopupWidget(); \
	friend struct Z_Construct_UClass_USBZPopupWidget_Statics; \
public: \
	DECLARE_CLASS(USBZPopupWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZPopupWidget) \
	virtual UObject* _getUObject() const override { return const_cast<USBZPopupWidget*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPopupWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZPopupWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZPopupWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPopupWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPopupWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPopupWidget(USBZPopupWidget&&); \
	NO_API USBZPopupWidget(const USBZPopupWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZPopupWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZPopupWidget(USBZPopupWidget&&); \
	NO_API USBZPopupWidget(const USBZPopupWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZPopupWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZPopupWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZPopupWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZPopupWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Text_Header() { return STRUCT_OFFSET(USBZPopupWidget, Text_Header); } \
	FORCEINLINE static uint32 __PPO__Text_Description() { return STRUCT_OFFSET(USBZPopupWidget, Text_Description); } \
	FORCEINLINE static uint32 __PPO__Widget_ControlsReference() { return STRUCT_OFFSET(USBZPopupWidget, Widget_ControlsReference); } \
	FORCEINLINE static uint32 __PPO__CanvasPanel_PopUpBody() { return STRUCT_OFFSET(USBZPopupWidget, CanvasPanel_PopUpBody); } \
	FORCEINLINE static uint32 __PPO__DefaultControlsReference() { return STRUCT_OFFSET(USBZPopupWidget, DefaultControlsReference); } \
	FORCEINLINE static uint32 __PPO__ControlsReference() { return STRUCT_OFFSET(USBZPopupWidget, ControlsReference); } \
	FORCEINLINE static uint32 __PPO__bIsShowing() { return STRUCT_OFFSET(USBZPopupWidget, bIsShowing); }


#define PAYDAY3_Source_Starbreeze_Public_SBZPopupWidget_h_12_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZPopupWidget_h_14_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZPopupWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPopupWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPopupWidget_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPopupWidget_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPopupWidget_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPopupWidget_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZPopupWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZPopupWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZPopupWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZPopupWidget_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZPopupWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPopupWidget_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZPopupWidget_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZPopupWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZPopupWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZPopupWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
