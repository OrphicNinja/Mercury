// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZPlayerWeaponFireData;
#ifdef STARBREEZE_SBZMainMenuDamageFalloffWidget_generated_h
#error "SBZMainMenuDamageFalloffWidget.generated.h already included, missing '#pragma once' in SBZMainMenuDamageFalloffWidget.h"
#endif
#define STARBREEZE_SBZMainMenuDamageFalloffWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuDamageFalloffWidget_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuDamageFalloffWidget_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetFireData);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuDamageFalloffWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetFireData);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuDamageFalloffWidget_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuDamageFalloffWidget(); \
	friend struct Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuDamageFalloffWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuDamageFalloffWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuDamageFalloffWidget_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuDamageFalloffWidget(); \
	friend struct Z_Construct_UClass_USBZMainMenuDamageFalloffWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuDamageFalloffWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuDamageFalloffWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuDamageFalloffWidget_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuDamageFalloffWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuDamageFalloffWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuDamageFalloffWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuDamageFalloffWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuDamageFalloffWidget(USBZMainMenuDamageFalloffWidget&&); \
	NO_API USBZMainMenuDamageFalloffWidget(const USBZMainMenuDamageFalloffWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuDamageFalloffWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuDamageFalloffWidget(USBZMainMenuDamageFalloffWidget&&); \
	NO_API USBZMainMenuDamageFalloffWidget(const USBZMainMenuDamageFalloffWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuDamageFalloffWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuDamageFalloffWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuDamageFalloffWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuDamageFalloffWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FireData() { return STRUCT_OFFSET(USBZMainMenuDamageFalloffWidget, FireData); } \
	FORCEINLINE static uint32 __PPO__CachedDamageArray() { return STRUCT_OFFSET(USBZMainMenuDamageFalloffWidget, CachedDamageArray); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuDamageFalloffWidget_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuDamageFalloffWidget_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuDamageFalloffWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuDamageFalloffWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuDamageFalloffWidget_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuDamageFalloffWidget_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuDamageFalloffWidget_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuDamageFalloffWidget_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuDamageFalloffWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuDamageFalloffWidget_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuDamageFalloffWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuDamageFalloffWidget_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuDamageFalloffWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuDamageFalloffWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuDamageFalloffWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
