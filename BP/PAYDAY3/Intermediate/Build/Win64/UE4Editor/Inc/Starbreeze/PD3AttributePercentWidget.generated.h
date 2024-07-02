// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_PD3AttributePercentWidget_generated_h
#error "PD3AttributePercentWidget.generated.h already included, missing '#pragma once' in PD3AttributePercentWidget.h"
#endif
#define STARBREEZE_PD3AttributePercentWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PD3AttributePercentWidget_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_PD3AttributePercentWidget_h_9_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_PD3AttributePercentWidget_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_PD3AttributePercentWidget_h_9_EVENT_PARMS \
	struct PD3AttributePercentWidget_eventOnCurrentAttributeUpdate_Parms \
	{ \
		float NewValue; \
		float OldPercentage; \
		float NewPercentage; \
	}; \
	struct PD3AttributePercentWidget_eventOnMaxAttributeUpdate_Parms \
	{ \
		float NewValue; \
		float OldPercentage; \
		float NewPercentage; \
	}; \
	struct PD3AttributePercentWidget_eventOnSetup_Parms \
	{ \
		float CurrentValueSetup; \
		float MaxValueSetup; \
		float PercentageSetup; \
	};


#define PAYDAY3_Source_Starbreeze_Public_PD3AttributePercentWidget_h_9_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_PD3AttributePercentWidget_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPD3AttributePercentWidget(); \
	friend struct Z_Construct_UClass_UPD3AttributePercentWidget_Statics; \
public: \
	DECLARE_CLASS(UPD3AttributePercentWidget, USBZPlayerStateWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3AttributePercentWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3AttributePercentWidget_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUPD3AttributePercentWidget(); \
	friend struct Z_Construct_UClass_UPD3AttributePercentWidget_Statics; \
public: \
	DECLARE_CLASS(UPD3AttributePercentWidget, USBZPlayerStateWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3AttributePercentWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3AttributePercentWidget_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPD3AttributePercentWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPD3AttributePercentWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3AttributePercentWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3AttributePercentWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3AttributePercentWidget(UPD3AttributePercentWidget&&); \
	NO_API UPD3AttributePercentWidget(const UPD3AttributePercentWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_PD3AttributePercentWidget_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3AttributePercentWidget(UPD3AttributePercentWidget&&); \
	NO_API UPD3AttributePercentWidget(const UPD3AttributePercentWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3AttributePercentWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3AttributePercentWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPD3AttributePercentWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3AttributePercentWidget_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ValueGameplayAttribute() { return STRUCT_OFFSET(UPD3AttributePercentWidget, ValueGameplayAttribute); } \
	FORCEINLINE static uint32 __PPO__MaxGameplayAttribute() { return STRUCT_OFFSET(UPD3AttributePercentWidget, MaxGameplayAttribute); } \
	FORCEINLINE static uint32 __PPO__MinNonEmptyScale() { return STRUCT_OFFSET(UPD3AttributePercentWidget, MinNonEmptyScale); }


#define PAYDAY3_Source_Starbreeze_Public_PD3AttributePercentWidget_h_7_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_PD3AttributePercentWidget_h_9_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_PD3AttributePercentWidget_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3AttributePercentWidget_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3AttributePercentWidget_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3AttributePercentWidget_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3AttributePercentWidget_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3AttributePercentWidget_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_PD3AttributePercentWidget_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_PD3AttributePercentWidget_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3AttributePercentWidget_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3AttributePercentWidget_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3AttributePercentWidget_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3AttributePercentWidget_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3AttributePercentWidget_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3AttributePercentWidget_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class UPD3AttributePercentWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PD3AttributePercentWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
