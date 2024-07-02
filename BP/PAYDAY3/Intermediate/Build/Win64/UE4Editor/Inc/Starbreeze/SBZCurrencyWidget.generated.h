// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZCurrencyCode : uint8;
#ifdef STARBREEZE_SBZCurrencyWidget_generated_h
#error "SBZCurrencyWidget.generated.h already included, missing '#pragma once' in SBZCurrencyWidget.h"
#endif
#define STARBREEZE_SBZCurrencyWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCurrencyWidget_h_9_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCurrencyWidget_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCurrencyType); \
	DECLARE_FUNCTION(execSetCurrencyValue);


#define PAYDAY3_Source_Starbreeze_Public_SBZCurrencyWidget_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCurrencyType); \
	DECLARE_FUNCTION(execSetCurrencyValue);


#define PAYDAY3_Source_Starbreeze_Public_SBZCurrencyWidget_h_9_EVENT_PARMS \
	struct SBZCurrencyWidget_eventOnAffordedChanged_Parms \
	{ \
		bool bInIsAfforded; \
		bool bIsInitial; \
	}; \
	struct SBZCurrencyWidget_eventOnCurrencyTypeChanged_Parms \
	{ \
		ESBZCurrencyCode InCurrencyType; \
		bool bIsInitial; \
	}; \
	struct SBZCurrencyWidget_eventOnCurrencyValueChanged_Parms \
	{ \
		int32 NewValue; \
		bool bIsInitial; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZCurrencyWidget_h_9_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZCurrencyWidget_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZCurrencyWidget(); \
	friend struct Z_Construct_UClass_USBZCurrencyWidget_Statics; \
public: \
	DECLARE_CLASS(USBZCurrencyWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCurrencyWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZCurrencyWidget_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUSBZCurrencyWidget(); \
	friend struct Z_Construct_UClass_USBZCurrencyWidget_Statics; \
public: \
	DECLARE_CLASS(USBZCurrencyWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCurrencyWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZCurrencyWidget_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZCurrencyWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCurrencyWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCurrencyWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCurrencyWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCurrencyWidget(USBZCurrencyWidget&&); \
	NO_API USBZCurrencyWidget(const USBZCurrencyWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCurrencyWidget_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCurrencyWidget(USBZCurrencyWidget&&); \
	NO_API USBZCurrencyWidget(const USBZCurrencyWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCurrencyWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCurrencyWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZCurrencyWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZCurrencyWidget_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrencyType() { return STRUCT_OFFSET(USBZCurrencyWidget, CurrencyType); } \
	FORCEINLINE static uint32 __PPO__CurrencyValue() { return STRUCT_OFFSET(USBZCurrencyWidget, CurrencyValue); } \
	FORCEINLINE static uint32 __PPO__bIsOwnerCurrency() { return STRUCT_OFFSET(USBZCurrencyWidget, bIsOwnerCurrency); } \
	FORCEINLINE static uint32 __PPO__bIsAffordedChecked() { return STRUCT_OFFSET(USBZCurrencyWidget, bIsAffordedChecked); } \
	FORCEINLINE static uint32 __PPO__bIsAfforded() { return STRUCT_OFFSET(USBZCurrencyWidget, bIsAfforded); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCurrencyWidget_h_7_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZCurrencyWidget_h_9_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZCurrencyWidget_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCurrencyWidget_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCurrencyWidget_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCurrencyWidget_h_9_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCurrencyWidget_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCurrencyWidget_h_9_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCurrencyWidget_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCurrencyWidget_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCurrencyWidget_h_9_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCurrencyWidget_h_9_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCurrencyWidget_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCurrencyWidget_h_9_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCurrencyWidget_h_9_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCurrencyWidget_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZCurrencyWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCurrencyWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
