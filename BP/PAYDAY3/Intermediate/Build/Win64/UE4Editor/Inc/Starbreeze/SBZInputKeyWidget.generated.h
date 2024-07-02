// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
class UPaperSprite;
#ifdef STARBREEZE_SBZInputKeyWidget_generated_h
#error "SBZInputKeyWidget.generated.h already included, missing '#pragma once' in SBZInputKeyWidget.h"
#endif
#define STARBREEZE_SBZInputKeyWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZInputKeyWidget_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZInputKeyWidget_h_11_RPC_WRAPPERS \
	virtual void SetInverted_Implementation(bool bInInverted); \
 \
	DECLARE_FUNCTION(execSetInverted); \
	DECLARE_FUNCTION(execSetKey);


#define PAYDAY3_Source_Starbreeze_Public_SBZInputKeyWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetInverted_Implementation(bool bInInverted); \
 \
	DECLARE_FUNCTION(execSetInverted); \
	DECLARE_FUNCTION(execSetKey);


#define PAYDAY3_Source_Starbreeze_Public_SBZInputKeyWidget_h_11_EVENT_PARMS \
	struct SBZInputKeyWidget_eventOnKeyIconChanged_Parms \
	{ \
		UPaperSprite* NewActionKeyIcon; \
	}; \
	struct SBZInputKeyWidget_eventOnKeyNameChanged_Parms \
	{ \
		FString NewActionKeyName; \
	}; \
	struct SBZInputKeyWidget_eventSetInverted_Parms \
	{ \
		bool bInInverted; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZInputKeyWidget_h_11_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZInputKeyWidget_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZInputKeyWidget(); \
	friend struct Z_Construct_UClass_USBZInputKeyWidget_Statics; \
public: \
	DECLARE_CLASS(USBZInputKeyWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZInputKeyWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZInputKeyWidget_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZInputKeyWidget(); \
	friend struct Z_Construct_UClass_USBZInputKeyWidget_Statics; \
public: \
	DECLARE_CLASS(USBZInputKeyWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZInputKeyWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZInputKeyWidget_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZInputKeyWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZInputKeyWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZInputKeyWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZInputKeyWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZInputKeyWidget(USBZInputKeyWidget&&); \
	NO_API USBZInputKeyWidget(const USBZInputKeyWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZInputKeyWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZInputKeyWidget(USBZInputKeyWidget&&); \
	NO_API USBZInputKeyWidget(const USBZInputKeyWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZInputKeyWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZInputKeyWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZInputKeyWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZInputKeyWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Key() { return STRUCT_OFFSET(USBZInputKeyWidget, Key); } \
	FORCEINLINE static uint32 __PPO__bInverted() { return STRUCT_OFFSET(USBZInputKeyWidget, bInverted); }


#define PAYDAY3_Source_Starbreeze_Public_SBZInputKeyWidget_h_9_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZInputKeyWidget_h_11_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZInputKeyWidget_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZInputKeyWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZInputKeyWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZInputKeyWidget_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZInputKeyWidget_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZInputKeyWidget_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZInputKeyWidget_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZInputKeyWidget_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZInputKeyWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZInputKeyWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZInputKeyWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZInputKeyWidget_h_11_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZInputKeyWidget_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZInputKeyWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZInputKeyWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZInputKeyWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
