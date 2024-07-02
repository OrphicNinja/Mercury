// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZMenuStackScreenWidget_generated_h
#error "SBZMenuStackScreenWidget.generated.h already included, missing '#pragma once' in SBZMenuStackScreenWidget.h"
#endif
#define STARBREEZE_SBZMenuStackScreenWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMenuStackScreenWidget_h_8_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMenuStackScreenWidget_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNativeOnBackPressed);


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuStackScreenWidget_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNativeOnBackPressed);


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuStackScreenWidget_h_8_EVENT_PARMS
#define PAYDAY3_Source_Starbreeze_Public_SBZMenuStackScreenWidget_h_8_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMenuStackScreenWidget_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMenuStackScreenWidget(); \
	friend struct Z_Construct_UClass_USBZMenuStackScreenWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMenuStackScreenWidget, USBZMenuStackWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMenuStackScreenWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuStackScreenWidget_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMenuStackScreenWidget(); \
	friend struct Z_Construct_UClass_USBZMenuStackScreenWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMenuStackScreenWidget, USBZMenuStackWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMenuStackScreenWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuStackScreenWidget_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMenuStackScreenWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMenuStackScreenWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMenuStackScreenWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMenuStackScreenWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMenuStackScreenWidget(USBZMenuStackScreenWidget&&); \
	NO_API USBZMenuStackScreenWidget(const USBZMenuStackScreenWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuStackScreenWidget_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMenuStackScreenWidget(USBZMenuStackScreenWidget&&); \
	NO_API USBZMenuStackScreenWidget(const USBZMenuStackScreenWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMenuStackScreenWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMenuStackScreenWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMenuStackScreenWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuStackScreenWidget_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bShouldListenForUIBackEvent() { return STRUCT_OFFSET(USBZMenuStackScreenWidget, bShouldListenForUIBackEvent); } \
	FORCEINLINE static uint32 __PPO__bPopStackOnBackPressed() { return STRUCT_OFFSET(USBZMenuStackScreenWidget, bPopStackOnBackPressed); } \
	FORCEINLINE static uint32 __PPO__BackActionName() { return STRUCT_OFFSET(USBZMenuStackScreenWidget, BackActionName); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuStackScreenWidget_h_6_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuStackScreenWidget_h_8_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuStackScreenWidget_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuStackScreenWidget_h_8_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuStackScreenWidget_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuStackScreenWidget_h_8_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuStackScreenWidget_h_8_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuStackScreenWidget_h_8_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuStackScreenWidget_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMenuStackScreenWidget_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuStackScreenWidget_h_8_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuStackScreenWidget_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuStackScreenWidget_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuStackScreenWidget_h_8_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuStackScreenWidget_h_8_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMenuStackScreenWidget_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMenuStackScreenWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMenuStackScreenWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
