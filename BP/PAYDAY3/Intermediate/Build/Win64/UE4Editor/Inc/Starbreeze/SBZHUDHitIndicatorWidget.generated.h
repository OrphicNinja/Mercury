// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZDamageEvent;
#ifdef STARBREEZE_SBZHUDHitIndicatorWidget_generated_h
#error "SBZHUDHitIndicatorWidget.generated.h already included, missing '#pragma once' in SBZHUDHitIndicatorWidget.h"
#endif
#define STARBREEZE_SBZHUDHitIndicatorWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZHUDHitIndicatorWidget_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZHUDHitIndicatorWidget_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPostOnTakenDamageEvent);


#define PAYDAY3_Source_Starbreeze_Public_SBZHUDHitIndicatorWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPostOnTakenDamageEvent);


#define PAYDAY3_Source_Starbreeze_Public_SBZHUDHitIndicatorWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZHUDHitIndicatorWidget(); \
	friend struct Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics; \
public: \
	DECLARE_CLASS(USBZHUDHitIndicatorWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZHUDHitIndicatorWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZHUDHitIndicatorWidget_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZHUDHitIndicatorWidget(); \
	friend struct Z_Construct_UClass_USBZHUDHitIndicatorWidget_Statics; \
public: \
	DECLARE_CLASS(USBZHUDHitIndicatorWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZHUDHitIndicatorWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZHUDHitIndicatorWidget_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZHUDHitIndicatorWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZHUDHitIndicatorWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZHUDHitIndicatorWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZHUDHitIndicatorWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZHUDHitIndicatorWidget(USBZHUDHitIndicatorWidget&&); \
	NO_API USBZHUDHitIndicatorWidget(const USBZHUDHitIndicatorWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZHUDHitIndicatorWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZHUDHitIndicatorWidget(USBZHUDHitIndicatorWidget&&); \
	NO_API USBZHUDHitIndicatorWidget(const USBZHUDHitIndicatorWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZHUDHitIndicatorWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZHUDHitIndicatorWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZHUDHitIndicatorWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZHUDHitIndicatorWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Image_HitIndicator() { return STRUCT_OFFSET(USBZHUDHitIndicatorWidget, Image_HitIndicator); } \
	FORCEINLINE static uint32 __PPO__EnemyHitAudioEvent() { return STRUCT_OFFSET(USBZHUDHitIndicatorWidget, EnemyHitAudioEvent); } \
	FORCEINLINE static uint32 __PPO__CriticalHitAudioEvent() { return STRUCT_OFFSET(USBZHUDHitIndicatorWidget, CriticalHitAudioEvent); } \
	FORCEINLINE static uint32 __PPO__EnemyKilledAudioEvent() { return STRUCT_OFFSET(USBZHUDHitIndicatorWidget, EnemyKilledAudioEvent); } \
	FORCEINLINE static uint32 __PPO__EnemyCriticalKilledAudioEvent() { return STRUCT_OFFSET(USBZHUDHitIndicatorWidget, EnemyCriticalKilledAudioEvent); } \
	FORCEINLINE static uint32 __PPO__NoDamageAudioEvent() { return STRUCT_OFFSET(USBZHUDHitIndicatorWidget, NoDamageAudioEvent); } \
	FORCEINLINE static uint32 __PPO__ArmorHitAudioEvent() { return STRUCT_OFFSET(USBZHUDHitIndicatorWidget, ArmorHitAudioEvent); } \
	FORCEINLINE static uint32 __PPO__ArmorPenetrationAudioEvent() { return STRUCT_OFFSET(USBZHUDHitIndicatorWidget, ArmorPenetrationAudioEvent); } \
	FORCEINLINE static uint32 __PPO__ArmorBreakAudioEvent() { return STRUCT_OFFSET(USBZHUDHitIndicatorWidget, ArmorBreakAudioEvent); } \
	FORCEINLINE static uint32 __PPO__HitIndicatorSettings() { return STRUCT_OFFSET(USBZHUDHitIndicatorWidget, HitIndicatorSettings); }


#define PAYDAY3_Source_Starbreeze_Public_SBZHUDHitIndicatorWidget_h_11_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZHUDHitIndicatorWidget_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDHitIndicatorWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDHitIndicatorWidget_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDHitIndicatorWidget_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDHitIndicatorWidget_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDHitIndicatorWidget_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZHUDHitIndicatorWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDHitIndicatorWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDHitIndicatorWidget_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDHitIndicatorWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDHitIndicatorWidget_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHUDHitIndicatorWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZHUDHitIndicatorWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZHUDHitIndicatorWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
