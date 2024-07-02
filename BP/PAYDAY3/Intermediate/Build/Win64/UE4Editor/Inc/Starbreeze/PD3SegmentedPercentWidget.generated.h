// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_PD3SegmentedPercentWidget_generated_h
#error "PD3SegmentedPercentWidget.generated.h already included, missing '#pragma once' in PD3SegmentedPercentWidget.h"
#endif
#define STARBREEZE_PD3SegmentedPercentWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PD3SegmentedPercentWidget_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_PD3SegmentedPercentWidget_h_10_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_PD3SegmentedPercentWidget_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_PD3SegmentedPercentWidget_h_10_EVENT_PARMS \
	struct PD3SegmentedPercentWidget_eventOnDamageChanged_Parms \
	{ \
		float StartOffset; \
		float EndOffset; \
	}; \
	struct PD3SegmentedPercentWidget_eventOnTraumaRatioChanged_Parms \
	{ \
		float StartOffset; \
		float EndOffset; \
	};


#define PAYDAY3_Source_Starbreeze_Public_PD3SegmentedPercentWidget_h_10_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_PD3SegmentedPercentWidget_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPD3SegmentedPercentWidget(); \
	friend struct Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics; \
public: \
	DECLARE_CLASS(UPD3SegmentedPercentWidget, UPD3AttributePercentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3SegmentedPercentWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3SegmentedPercentWidget_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUPD3SegmentedPercentWidget(); \
	friend struct Z_Construct_UClass_UPD3SegmentedPercentWidget_Statics; \
public: \
	DECLARE_CLASS(UPD3SegmentedPercentWidget, UPD3AttributePercentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3SegmentedPercentWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3SegmentedPercentWidget_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPD3SegmentedPercentWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPD3SegmentedPercentWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3SegmentedPercentWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3SegmentedPercentWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3SegmentedPercentWidget(UPD3SegmentedPercentWidget&&); \
	NO_API UPD3SegmentedPercentWidget(const UPD3SegmentedPercentWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_PD3SegmentedPercentWidget_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3SegmentedPercentWidget(UPD3SegmentedPercentWidget&&); \
	NO_API UPD3SegmentedPercentWidget(const UPD3SegmentedPercentWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3SegmentedPercentWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3SegmentedPercentWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPD3SegmentedPercentWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3SegmentedPercentWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NumberOfChunks() { return STRUCT_OFFSET(UPD3SegmentedPercentWidget, NumberOfChunks); } \
	FORCEINLINE static uint32 __PPO__bIsHealthBar() { return STRUCT_OFFSET(UPD3SegmentedPercentWidget, bIsHealthBar); } \
	FORCEINLINE static uint32 __PPO__OverridenBackgroundColor() { return STRUCT_OFFSET(UPD3SegmentedPercentWidget, OverridenBackgroundColor); } \
	FORCEINLINE static uint32 __PPO__OverridenMainColor() { return STRUCT_OFFSET(UPD3SegmentedPercentWidget, OverridenMainColor); } \
	FORCEINLINE static uint32 __PPO__OverridenLaggingColor() { return STRUCT_OFFSET(UPD3SegmentedPercentWidget, OverridenLaggingColor); } \
	FORCEINLINE static uint32 __PPO__OverridenTraumaColor() { return STRUCT_OFFSET(UPD3SegmentedPercentWidget, OverridenTraumaColor); } \
	FORCEINLINE static uint32 __PPO__bIsArmorColorOverriden() { return STRUCT_OFFSET(UPD3SegmentedPercentWidget, bIsArmorColorOverriden); }


#define PAYDAY3_Source_Starbreeze_Public_PD3SegmentedPercentWidget_h_8_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_PD3SegmentedPercentWidget_h_10_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_PD3SegmentedPercentWidget_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3SegmentedPercentWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3SegmentedPercentWidget_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3SegmentedPercentWidget_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3SegmentedPercentWidget_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3SegmentedPercentWidget_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_PD3SegmentedPercentWidget_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_PD3SegmentedPercentWidget_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3SegmentedPercentWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3SegmentedPercentWidget_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3SegmentedPercentWidget_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3SegmentedPercentWidget_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3SegmentedPercentWidget_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3SegmentedPercentWidget_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class UPD3SegmentedPercentWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PD3SegmentedPercentWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
