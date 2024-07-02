// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZControlsReference;
class ASBZPlayerController;
struct FSBZUIStackChangedEvent;
#ifdef STARBREEZE_SBZActionPhaseBaseWidget_generated_h
#error "SBZActionPhaseBaseWidget.generated.h already included, missing '#pragma once' in SBZActionPhaseBaseWidget.h"
#endif
#define STARBREEZE_SBZActionPhaseBaseWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseBaseWidget_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseBaseWidget_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHideControlsReference); \
	DECLARE_FUNCTION(execOnActiveControlsReferenceChanged); \
	DECLARE_FUNCTION(execOnControllerStateChanged); \
	DECLARE_FUNCTION(execOnStackLockChanged); \
	DECLARE_FUNCTION(execOnStackStateChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseBaseWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHideControlsReference); \
	DECLARE_FUNCTION(execOnActiveControlsReferenceChanged); \
	DECLARE_FUNCTION(execOnControllerStateChanged); \
	DECLARE_FUNCTION(execOnStackLockChanged); \
	DECLARE_FUNCTION(execOnStackStateChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseBaseWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZActionPhaseBaseWidget(); \
	friend struct Z_Construct_UClass_USBZActionPhaseBaseWidget_Statics; \
public: \
	DECLARE_CLASS(USBZActionPhaseBaseWidget, USBZHUDWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZActionPhaseBaseWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseBaseWidget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZActionPhaseBaseWidget(); \
	friend struct Z_Construct_UClass_USBZActionPhaseBaseWidget_Statics; \
public: \
	DECLARE_CLASS(USBZActionPhaseBaseWidget, USBZHUDWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZActionPhaseBaseWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseBaseWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZActionPhaseBaseWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZActionPhaseBaseWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZActionPhaseBaseWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZActionPhaseBaseWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZActionPhaseBaseWidget(USBZActionPhaseBaseWidget&&); \
	NO_API USBZActionPhaseBaseWidget(const USBZActionPhaseBaseWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseBaseWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZActionPhaseBaseWidget(USBZActionPhaseBaseWidget&&); \
	NO_API USBZActionPhaseBaseWidget(const USBZActionPhaseBaseWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZActionPhaseBaseWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZActionPhaseBaseWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZActionPhaseBaseWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseBaseWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Widget_Playing() { return STRUCT_OFFSET(USBZActionPhaseBaseWidget, Widget_Playing); } \
	FORCEINLINE static uint32 __PPO__Widget_Spectating() { return STRUCT_OFFSET(USBZActionPhaseBaseWidget, Widget_Spectating); } \
	FORCEINLINE static uint32 __PPO__Widget_Shared() { return STRUCT_OFFSET(USBZActionPhaseBaseWidget, Widget_Shared); } \
	FORCEINLINE static uint32 __PPO__Widget_ControlsReference() { return STRUCT_OFFSET(USBZActionPhaseBaseWidget, Widget_ControlsReference); }


#define PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseBaseWidget_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseBaseWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseBaseWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseBaseWidget_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseBaseWidget_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseBaseWidget_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseBaseWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseBaseWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseBaseWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseBaseWidget_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseBaseWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseBaseWidget_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseBaseWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZActionPhaseBaseWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZActionPhaseBaseWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
