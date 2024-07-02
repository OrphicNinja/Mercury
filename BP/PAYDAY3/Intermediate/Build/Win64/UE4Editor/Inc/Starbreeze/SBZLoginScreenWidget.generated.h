// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZMenuButton;
#ifdef STARBREEZE_SBZLoginScreenWidget_generated_h
#error "SBZLoginScreenWidget.generated.h already included, missing '#pragma once' in SBZLoginScreenWidget.h"
#endif
#define STARBREEZE_SBZLoginScreenWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenWidget_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenWidget_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCreateAccountBrowserSelected); \
	DECLARE_FUNCTION(execOnWebPageClosed);


#define PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCreateAccountBrowserSelected); \
	DECLARE_FUNCTION(execOnWebPageClosed);


#define PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenWidget_h_12_EVENT_PARMS \
	struct SBZLoginScreenWidget_eventOnCreateAccountWindowClosed_Parms \
	{ \
		FString InLastURL; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenWidget_h_12_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenWidget_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZLoginScreenWidget(); \
	friend struct Z_Construct_UClass_USBZLoginScreenWidget_Statics; \
public: \
	DECLARE_CLASS(USBZLoginScreenWidget, USBZMenuStackWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZLoginScreenWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenWidget_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZLoginScreenWidget(); \
	friend struct Z_Construct_UClass_USBZLoginScreenWidget_Statics; \
public: \
	DECLARE_CLASS(USBZLoginScreenWidget, USBZMenuStackWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZLoginScreenWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenWidget_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZLoginScreenWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZLoginScreenWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZLoginScreenWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZLoginScreenWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZLoginScreenWidget(USBZLoginScreenWidget&&); \
	NO_API USBZLoginScreenWidget(const USBZLoginScreenWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenWidget_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZLoginScreenWidget(USBZLoginScreenWidget&&); \
	NO_API USBZLoginScreenWidget(const USBZLoginScreenWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZLoginScreenWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZLoginScreenWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZLoginScreenWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProdAccountCreateURLGameSense() { return STRUCT_OFFSET(USBZLoginScreenWidget, ProdAccountCreateURLGameSense); } \
	FORCEINLINE static uint32 __PPO__DevAccountCreateURLGameSense() { return STRUCT_OFFSET(USBZLoginScreenWidget, DevAccountCreateURLGameSense); } \
	FORCEINLINE static uint32 __PPO__ProdAccountCreateURL() { return STRUCT_OFFSET(USBZLoginScreenWidget, ProdAccountCreateURL); } \
	FORCEINLINE static uint32 __PPO__DevAccountCreateURL() { return STRUCT_OFFSET(USBZLoginScreenWidget, DevAccountCreateURL); } \
	FORCEINLINE static uint32 __PPO__bShouldHideCursor() { return STRUCT_OFFSET(USBZLoginScreenWidget, bShouldHideCursor); } \
	FORCEINLINE static uint32 __PPO__bShowCloseButton() { return STRUCT_OFFSET(USBZLoginScreenWidget, bShowCloseButton); } \
	FORCEINLINE static uint32 __PPO__Button_CreateAccountWebBrowser() { return STRUCT_OFFSET(USBZLoginScreenWidget, Button_CreateAccountWebBrowser); } \
	FORCEINLINE static uint32 __PPO__Text_PlatformName() { return STRUCT_OFFSET(USBZLoginScreenWidget, Text_PlatformName); } \
	FORCEINLINE static uint32 __PPO__Image_PlatformSprite() { return STRUCT_OFFSET(USBZLoginScreenWidget, Image_PlatformSprite); }


#define PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenWidget_h_10_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenWidget_h_12_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenWidget_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenWidget_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenWidget_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenWidget_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenWidget_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenWidget_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenWidget_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenWidget_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenWidget_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenWidget_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenWidget_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZLoginScreenWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
