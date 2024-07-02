// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZAxisInputWidget_generated_h
#error "SBZAxisInputWidget.generated.h already included, missing '#pragma once' in SBZAxisInputWidget.h"
#endif
#define STARBREEZE_SBZAxisInputWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAxisInputWidget_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAxisInputWidget_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetAxis);


#define PAYDAY3_Source_Starbreeze_Public_SBZAxisInputWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetAxis);


#define PAYDAY3_Source_Starbreeze_Public_SBZAxisInputWidget_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAxisInputWidget(); \
	friend struct Z_Construct_UClass_USBZAxisInputWidget_Statics; \
public: \
	DECLARE_CLASS(USBZAxisInputWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAxisInputWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZAxisInputWidget_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAxisInputWidget(); \
	friend struct Z_Construct_UClass_USBZAxisInputWidget_Statics; \
public: \
	DECLARE_CLASS(USBZAxisInputWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAxisInputWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZAxisInputWidget_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAxisInputWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAxisInputWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAxisInputWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAxisInputWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAxisInputWidget(USBZAxisInputWidget&&); \
	NO_API USBZAxisInputWidget(const USBZAxisInputWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAxisInputWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAxisInputWidget(USBZAxisInputWidget&&); \
	NO_API USBZAxisInputWidget(const USBZAxisInputWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAxisInputWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAxisInputWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZAxisInputWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZAxisInputWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AxisName() { return STRUCT_OFFSET(USBZAxisInputWidget, AxisName); } \
	FORCEINLINE static uint32 __PPO__PrimaryKeyWidget() { return STRUCT_OFFSET(USBZAxisInputWidget, PrimaryKeyWidget); } \
	FORCEINLINE static uint32 __PPO__SecondaryKeyWidget() { return STRUCT_OFFSET(USBZAxisInputWidget, SecondaryKeyWidget); } \
	FORCEINLINE static uint32 __PPO__SecondaryKeyDisableVisibility() { return STRUCT_OFFSET(USBZAxisInputWidget, SecondaryKeyDisableVisibility); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAxisInputWidget_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAxisInputWidget_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAxisInputWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAxisInputWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAxisInputWidget_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAxisInputWidget_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAxisInputWidget_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAxisInputWidget_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAxisInputWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAxisInputWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAxisInputWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAxisInputWidget_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAxisInputWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAxisInputWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAxisInputWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
