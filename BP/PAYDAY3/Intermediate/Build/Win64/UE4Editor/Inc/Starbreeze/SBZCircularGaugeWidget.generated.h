// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef STARBREEZE_SBZCircularGaugeWidget_generated_h
#error "SBZCircularGaugeWidget.generated.h already included, missing '#pragma once' in SBZCircularGaugeWidget.h"
#endif
#define STARBREEZE_SBZCircularGaugeWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCircularGaugeWidget_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCircularGaugeWidget_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetColor); \
	DECLARE_FUNCTION(execSetGaugeThickness); \
	DECLARE_FUNCTION(execUpdateGaugeProgress);


#define PAYDAY3_Source_Starbreeze_Public_SBZCircularGaugeWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetColor); \
	DECLARE_FUNCTION(execSetGaugeThickness); \
	DECLARE_FUNCTION(execUpdateGaugeProgress);


#define PAYDAY3_Source_Starbreeze_Public_SBZCircularGaugeWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZCircularGaugeWidget(); \
	friend struct Z_Construct_UClass_USBZCircularGaugeWidget_Statics; \
public: \
	DECLARE_CLASS(USBZCircularGaugeWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCircularGaugeWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZCircularGaugeWidget_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZCircularGaugeWidget(); \
	friend struct Z_Construct_UClass_USBZCircularGaugeWidget_Statics; \
public: \
	DECLARE_CLASS(USBZCircularGaugeWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCircularGaugeWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZCircularGaugeWidget_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZCircularGaugeWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCircularGaugeWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCircularGaugeWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCircularGaugeWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCircularGaugeWidget(USBZCircularGaugeWidget&&); \
	NO_API USBZCircularGaugeWidget(const USBZCircularGaugeWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCircularGaugeWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCircularGaugeWidget(USBZCircularGaugeWidget&&); \
	NO_API USBZCircularGaugeWidget(const USBZCircularGaugeWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCircularGaugeWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCircularGaugeWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZCircularGaugeWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZCircularGaugeWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CircularGaugeMaterial() { return STRUCT_OFFSET(USBZCircularGaugeWidget, CircularGaugeMaterial); } \
	FORCEINLINE static uint32 __PPO__CircularGaugeMaterialInstance() { return STRUCT_OFFSET(USBZCircularGaugeWidget, CircularGaugeMaterialInstance); } \
	FORCEINLINE static uint32 __PPO__Image_Gauge() { return STRUCT_OFFSET(USBZCircularGaugeWidget, Image_Gauge); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCircularGaugeWidget_h_11_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZCircularGaugeWidget_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCircularGaugeWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCircularGaugeWidget_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCircularGaugeWidget_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCircularGaugeWidget_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCircularGaugeWidget_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCircularGaugeWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCircularGaugeWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCircularGaugeWidget_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCircularGaugeWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCircularGaugeWidget_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCircularGaugeWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZCircularGaugeWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCircularGaugeWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
