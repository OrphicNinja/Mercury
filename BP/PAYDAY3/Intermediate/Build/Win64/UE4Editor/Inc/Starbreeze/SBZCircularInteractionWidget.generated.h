// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZCircularInteractionWidget_generated_h
#error "SBZCircularInteractionWidget.generated.h already included, missing '#pragma once' in SBZCircularInteractionWidget.h"
#endif
#define STARBREEZE_SBZCircularInteractionWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCircularInteractionWidget_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCircularInteractionWidget_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActivateCircularWidget); \
	DECLARE_FUNCTION(execSelectCurrentIndex); \
	DECLARE_FUNCTION(execUpdateNumSlices);


#define PAYDAY3_Source_Starbreeze_Public_SBZCircularInteractionWidget_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActivateCircularWidget); \
	DECLARE_FUNCTION(execSelectCurrentIndex); \
	DECLARE_FUNCTION(execUpdateNumSlices);


#define PAYDAY3_Source_Starbreeze_Public_SBZCircularInteractionWidget_h_10_EVENT_PARMS
#define PAYDAY3_Source_Starbreeze_Public_SBZCircularInteractionWidget_h_10_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZCircularInteractionWidget_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZCircularInteractionWidget(); \
	friend struct Z_Construct_UClass_USBZCircularInteractionWidget_Statics; \
public: \
	DECLARE_CLASS(USBZCircularInteractionWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCircularInteractionWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZCircularInteractionWidget_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUSBZCircularInteractionWidget(); \
	friend struct Z_Construct_UClass_USBZCircularInteractionWidget_Statics; \
public: \
	DECLARE_CLASS(USBZCircularInteractionWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCircularInteractionWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZCircularInteractionWidget_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZCircularInteractionWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCircularInteractionWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCircularInteractionWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCircularInteractionWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCircularInteractionWidget(USBZCircularInteractionWidget&&); \
	NO_API USBZCircularInteractionWidget(const USBZCircularInteractionWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCircularInteractionWidget_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCircularInteractionWidget(USBZCircularInteractionWidget&&); \
	NO_API USBZCircularInteractionWidget(const USBZCircularInteractionWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCircularInteractionWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCircularInteractionWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZCircularInteractionWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZCircularInteractionWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__XAxisName() { return STRUCT_OFFSET(USBZCircularInteractionWidget, XAxisName); } \
	FORCEINLINE static uint32 __PPO__YAxisName() { return STRUCT_OFFSET(USBZCircularInteractionWidget, YAxisName); } \
	FORCEINLINE static uint32 __PPO__MouseSensitivity() { return STRUCT_OFFSET(USBZCircularInteractionWidget, MouseSensitivity); } \
	FORCEINLINE static uint32 __PPO__Deadzone() { return STRUCT_OFFSET(USBZCircularInteractionWidget, Deadzone); } \
	FORCEINLINE static uint32 __PPO__bSelectOnClose() { return STRUCT_OFFSET(USBZCircularInteractionWidget, bSelectOnClose); } \
	FORCEINLINE static uint32 __PPO__NumSlices() { return STRUCT_OFFSET(USBZCircularInteractionWidget, NumSlices); } \
	FORCEINLINE static uint32 __PPO__CurrentAxis() { return STRUCT_OFFSET(USBZCircularInteractionWidget, CurrentAxis); } \
	FORCEINLINE static uint32 __PPO__Angle() { return STRUCT_OFFSET(USBZCircularInteractionWidget, Angle); } \
	FORCEINLINE static uint32 __PPO__AngleRad() { return STRUCT_OFFSET(USBZCircularInteractionWidget, AngleRad); } \
	FORCEINLINE static uint32 __PPO__SliceAngle() { return STRUCT_OFFSET(USBZCircularInteractionWidget, SliceAngle); } \
	FORCEINLINE static uint32 __PPO__ActiveIndex() { return STRUCT_OFFSET(USBZCircularInteractionWidget, ActiveIndex); } \
	FORCEINLINE static uint32 __PPO__bIsActive() { return STRUCT_OFFSET(USBZCircularInteractionWidget, bIsActive); } \
	FORCEINLINE static uint32 __PPO__bIsUsingController() { return STRUCT_OFFSET(USBZCircularInteractionWidget, bIsUsingController); } \
	FORCEINLINE static uint32 __PPO__OnCircularWidgetSelected() { return STRUCT_OFFSET(USBZCircularInteractionWidget, OnCircularWidgetSelected); } \
	FORCEINLINE static uint32 __PPO__TimeToRememberActiveIndex() { return STRUCT_OFFSET(USBZCircularInteractionWidget, TimeToRememberActiveIndex); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCircularInteractionWidget_h_8_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZCircularInteractionWidget_h_10_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZCircularInteractionWidget_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCircularInteractionWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCircularInteractionWidget_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCircularInteractionWidget_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCircularInteractionWidget_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCircularInteractionWidget_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCircularInteractionWidget_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCircularInteractionWidget_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCircularInteractionWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCircularInteractionWidget_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCircularInteractionWidget_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCircularInteractionWidget_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCircularInteractionWidget_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCircularInteractionWidget_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZCircularInteractionWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCircularInteractionWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
