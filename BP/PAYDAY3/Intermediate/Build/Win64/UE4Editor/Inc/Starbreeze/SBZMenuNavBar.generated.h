// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZNavButtonParameters;
#ifdef STARBREEZE_SBZMenuNavBar_generated_h
#error "SBZMenuNavBar.generated.h already included, missing '#pragma once' in SBZMenuNavBar.h"
#endif
#define STARBREEZE_SBZMenuNavBar_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBar_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBar_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNavigationParameters); \
	DECLARE_FUNCTION(execHasStackFocus); \
	DECLARE_FUNCTION(execOnBackwardInputPressed); \
	DECLARE_FUNCTION(execOnForwardInputPressed); \
	DECLARE_FUNCTION(execOnInstallStateChanged); \
	DECLARE_FUNCTION(execSetActiveTab);


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBar_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNavigationParameters); \
	DECLARE_FUNCTION(execHasStackFocus); \
	DECLARE_FUNCTION(execOnBackwardInputPressed); \
	DECLARE_FUNCTION(execOnForwardInputPressed); \
	DECLARE_FUNCTION(execOnInstallStateChanged); \
	DECLARE_FUNCTION(execSetActiveTab);


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBar_h_13_EVENT_PARMS
#define PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBar_h_13_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBar_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMenuNavBar(); \
	friend struct Z_Construct_UClass_USBZMenuNavBar_Statics; \
public: \
	DECLARE_CLASS(USBZMenuNavBar, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMenuNavBar)


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBar_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMenuNavBar(); \
	friend struct Z_Construct_UClass_USBZMenuNavBar_Statics; \
public: \
	DECLARE_CLASS(USBZMenuNavBar, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMenuNavBar)


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBar_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMenuNavBar(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMenuNavBar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMenuNavBar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMenuNavBar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMenuNavBar(USBZMenuNavBar&&); \
	NO_API USBZMenuNavBar(const USBZMenuNavBar&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBar_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMenuNavBar(USBZMenuNavBar&&); \
	NO_API USBZMenuNavBar(const USBZMenuNavBar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMenuNavBar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMenuNavBar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMenuNavBar)


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBar_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MoveForwardActionName() { return STRUCT_OFFSET(USBZMenuNavBar, MoveForwardActionName); } \
	FORCEINLINE static uint32 __PPO__MoveBackwardActionName() { return STRUCT_OFFSET(USBZMenuNavBar, MoveBackwardActionName); } \
	FORCEINLINE static uint32 __PPO__NavigationButtons() { return STRUCT_OFFSET(USBZMenuNavBar, NavigationButtons); } \
	FORCEINLINE static uint32 __PPO__NavigationButtonClass() { return STRUCT_OFFSET(USBZMenuNavBar, NavigationButtonClass); } \
	FORCEINLINE static uint32 __PPO__Panel_ButtonContainer() { return STRUCT_OFFSET(USBZMenuNavBar, Panel_ButtonContainer); } \
	FORCEINLINE static uint32 __PPO__bIsAffectedByInstallProgress() { return STRUCT_OFFSET(USBZMenuNavBar, bIsAffectedByInstallProgress); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBar_h_11_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBar_h_13_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBar_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBar_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBar_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBar_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBar_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBar_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBar_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBar_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBar_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBar_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBar_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBar_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBar_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBar_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMenuNavBar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMenuNavBar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
