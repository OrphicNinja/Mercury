// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZDoubleAttributeWidget_generated_h
#error "SBZDoubleAttributeWidget.generated.h already included, missing '#pragma once' in SBZDoubleAttributeWidget.h"
#endif
#define STARBREEZE_SBZDoubleAttributeWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZDoubleAttributeWidget_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZDoubleAttributeWidget_h_9_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZDoubleAttributeWidget_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZDoubleAttributeWidget_h_9_EVENT_PARMS \
	struct SBZDoubleAttributeWidget_eventOnPrimaryAttributeUpdate_Parms \
	{ \
		float NewValue; \
		float OldValue; \
	}; \
	struct SBZDoubleAttributeWidget_eventOnSecondaryAttributeUpdate_Parms \
	{ \
		float NewValue; \
		float OldValue; \
	}; \
	struct SBZDoubleAttributeWidget_eventOnSetup_Parms \
	{ \
		float PrimaryValue; \
		float SecondaryValue; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZDoubleAttributeWidget_h_9_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZDoubleAttributeWidget_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZDoubleAttributeWidget(); \
	friend struct Z_Construct_UClass_USBZDoubleAttributeWidget_Statics; \
public: \
	DECLARE_CLASS(USBZDoubleAttributeWidget, USBZPlayerStateWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZDoubleAttributeWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZDoubleAttributeWidget_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUSBZDoubleAttributeWidget(); \
	friend struct Z_Construct_UClass_USBZDoubleAttributeWidget_Statics; \
public: \
	DECLARE_CLASS(USBZDoubleAttributeWidget, USBZPlayerStateWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZDoubleAttributeWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZDoubleAttributeWidget_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZDoubleAttributeWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZDoubleAttributeWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZDoubleAttributeWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZDoubleAttributeWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZDoubleAttributeWidget(USBZDoubleAttributeWidget&&); \
	NO_API USBZDoubleAttributeWidget(const USBZDoubleAttributeWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZDoubleAttributeWidget_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZDoubleAttributeWidget(USBZDoubleAttributeWidget&&); \
	NO_API USBZDoubleAttributeWidget(const USBZDoubleAttributeWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZDoubleAttributeWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZDoubleAttributeWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZDoubleAttributeWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZDoubleAttributeWidget_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PrimaryGameplayAttribute() { return STRUCT_OFFSET(USBZDoubleAttributeWidget, PrimaryGameplayAttribute); } \
	FORCEINLINE static uint32 __PPO__SecondaryGameplayAttribute() { return STRUCT_OFFSET(USBZDoubleAttributeWidget, SecondaryGameplayAttribute); }


#define PAYDAY3_Source_Starbreeze_Public_SBZDoubleAttributeWidget_h_7_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZDoubleAttributeWidget_h_9_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZDoubleAttributeWidget_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZDoubleAttributeWidget_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZDoubleAttributeWidget_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZDoubleAttributeWidget_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZDoubleAttributeWidget_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZDoubleAttributeWidget_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZDoubleAttributeWidget_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZDoubleAttributeWidget_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZDoubleAttributeWidget_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZDoubleAttributeWidget_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZDoubleAttributeWidget_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZDoubleAttributeWidget_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZDoubleAttributeWidget_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZDoubleAttributeWidget_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZDoubleAttributeWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZDoubleAttributeWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
