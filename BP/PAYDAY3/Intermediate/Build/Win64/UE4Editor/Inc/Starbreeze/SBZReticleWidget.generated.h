// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZCrosshairSettings;
#ifdef STARBREEZE_SBZReticleWidget_generated_h
#error "SBZReticleWidget.generated.h already included, missing '#pragma once' in SBZReticleWidget.h"
#endif
#define STARBREEZE_SBZReticleWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZReticleWidget_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZReticleWidget_h_13_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZReticleWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZReticleWidget_h_13_EVENT_PARMS \
	struct SBZReticleWidget_eventOnCrossHairScaleChanged_Parms \
	{ \
		float CurrentSpread; \
	}; \
	struct SBZReticleWidget_eventOnCrosshairSettingsChanged_Parms \
	{ \
		FSBZCrosshairSettings CrosshairSettings; \
	}; \
	struct SBZReticleWidget_eventOnCrossHairVisibilityChanged_Parms \
	{ \
		bool bIsVisible; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZReticleWidget_h_13_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZReticleWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZReticleWidget(); \
	friend struct Z_Construct_UClass_USBZReticleWidget_Statics; \
public: \
	DECLARE_CLASS(USBZReticleWidget, USBZPlayerStatePawnWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZReticleWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZReticleWidget_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZReticleWidget(); \
	friend struct Z_Construct_UClass_USBZReticleWidget_Statics; \
public: \
	DECLARE_CLASS(USBZReticleWidget, USBZPlayerStatePawnWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZReticleWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZReticleWidget_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZReticleWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZReticleWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZReticleWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZReticleWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZReticleWidget(USBZReticleWidget&&); \
	NO_API USBZReticleWidget(const USBZReticleWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZReticleWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZReticleWidget(USBZReticleWidget&&); \
	NO_API USBZReticleWidget(const USBZReticleWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZReticleWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZReticleWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZReticleWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZReticleWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProgressionCurve() { return STRUCT_OFFSET(USBZReticleWidget, ProgressionCurve); } \
	FORCEINLINE static uint32 __PPO__SpreadMod() { return STRUCT_OFFSET(USBZReticleWidget, SpreadMod); } \
	FORCEINLINE static uint32 __PPO__CurrentEquippableIndex() { return STRUCT_OFFSET(USBZReticleWidget, CurrentEquippableIndex); } \
	FORCEINLINE static uint32 __PPO__MaxSpreadAngle() { return STRUCT_OFFSET(USBZReticleWidget, MaxSpreadAngle); } \
	FORCEINLINE static uint32 __PPO__CurrentWeapon() { return STRUCT_OFFSET(USBZReticleWidget, CurrentWeapon); } \
	FORCEINLINE static uint32 __PPO__SpreadData() { return STRUCT_OFFSET(USBZReticleWidget, SpreadData); } \
	FORCEINLINE static uint32 __PPO__CurrentScale() { return STRUCT_OFFSET(USBZReticleWidget, CurrentScale); }


#define PAYDAY3_Source_Starbreeze_Public_SBZReticleWidget_h_11_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZReticleWidget_h_13_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZReticleWidget_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZReticleWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZReticleWidget_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZReticleWidget_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZReticleWidget_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZReticleWidget_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZReticleWidget_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZReticleWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZReticleWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZReticleWidget_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZReticleWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZReticleWidget_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZReticleWidget_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZReticleWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZReticleWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZReticleWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
