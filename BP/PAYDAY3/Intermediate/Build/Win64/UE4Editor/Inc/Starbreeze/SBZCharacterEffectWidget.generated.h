// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZCharacterEffectRuntime;
#ifdef STARBREEZE_SBZCharacterEffectWidget_generated_h
#error "SBZCharacterEffectWidget.generated.h already included, missing '#pragma once' in SBZCharacterEffectWidget.h"
#endif
#define STARBREEZE_SBZCharacterEffectWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectWidget_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectWidget_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitializeCharacterEffect); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execSetEffectValue); \
	DECLARE_FUNCTION(execSetProgress);


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitializeCharacterEffect); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execSetEffectValue); \
	DECLARE_FUNCTION(execSetProgress);


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectWidget_h_11_EVENT_PARMS \
	struct SBZCharacterEffectWidget_eventOnCharacterEffectInitialized_Parms \
	{ \
		FSBZCharacterEffectRuntime InCharacterEffectRuntime; \
	}; \
	struct SBZCharacterEffectWidget_eventOnCooldownProgressChanged_Parms \
	{ \
		float InNewProgress; \
	}; \
	struct SBZCharacterEffectWidget_eventOnEffectValueChanged_Parms \
	{ \
		int32 InNewEffectValue; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectWidget_h_11_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectWidget_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZCharacterEffectWidget(); \
	friend struct Z_Construct_UClass_USBZCharacterEffectWidget_Statics; \
public: \
	DECLARE_CLASS(USBZCharacterEffectWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCharacterEffectWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectWidget_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZCharacterEffectWidget(); \
	friend struct Z_Construct_UClass_USBZCharacterEffectWidget_Statics; \
public: \
	DECLARE_CLASS(USBZCharacterEffectWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCharacterEffectWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectWidget_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZCharacterEffectWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCharacterEffectWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCharacterEffectWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCharacterEffectWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCharacterEffectWidget(USBZCharacterEffectWidget&&); \
	NO_API USBZCharacterEffectWidget(const USBZCharacterEffectWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCharacterEffectWidget(USBZCharacterEffectWidget&&); \
	NO_API USBZCharacterEffectWidget(const USBZCharacterEffectWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCharacterEffectWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCharacterEffectWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZCharacterEffectWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BuffDataAsset() { return STRUCT_OFFSET(USBZCharacterEffectWidget, BuffDataAsset); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectWidget_h_9_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectWidget_h_11_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectWidget_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectWidget_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectWidget_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectWidget_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectWidget_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectWidget_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectWidget_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectWidget_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZCharacterEffectWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCharacterEffectWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
