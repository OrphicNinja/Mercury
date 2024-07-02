// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_PD3HUDPlayerCombinedHealthWidget_generated_h
#error "PD3HUDPlayerCombinedHealthWidget.generated.h already included, missing '#pragma once' in PD3HUDPlayerCombinedHealthWidget.h"
#endif
#define STARBREEZE_PD3HUDPlayerCombinedHealthWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCombinedHealthWidget_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCombinedHealthWidget_h_10_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCombinedHealthWidget_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCombinedHealthWidget_h_10_EVENT_PARMS \
	struct PD3HUDPlayerCombinedHealthWidget_eventBP_OnReplenishArmorChanged_Parms \
	{ \
		bool bIsReplenishingArmor; \
	};


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCombinedHealthWidget_h_10_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCombinedHealthWidget_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPD3HUDPlayerCombinedHealthWidget(); \
	friend struct Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics; \
public: \
	DECLARE_CLASS(UPD3HUDPlayerCombinedHealthWidget, USBZPlayerStateWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3HUDPlayerCombinedHealthWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCombinedHealthWidget_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUPD3HUDPlayerCombinedHealthWidget(); \
	friend struct Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics; \
public: \
	DECLARE_CLASS(UPD3HUDPlayerCombinedHealthWidget, USBZPlayerStateWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3HUDPlayerCombinedHealthWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCombinedHealthWidget_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPD3HUDPlayerCombinedHealthWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPD3HUDPlayerCombinedHealthWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3HUDPlayerCombinedHealthWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3HUDPlayerCombinedHealthWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3HUDPlayerCombinedHealthWidget(UPD3HUDPlayerCombinedHealthWidget&&); \
	NO_API UPD3HUDPlayerCombinedHealthWidget(const UPD3HUDPlayerCombinedHealthWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCombinedHealthWidget_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3HUDPlayerCombinedHealthWidget(UPD3HUDPlayerCombinedHealthWidget&&); \
	NO_API UPD3HUDPlayerCombinedHealthWidget(const UPD3HUDPlayerCombinedHealthWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3HUDPlayerCombinedHealthWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3HUDPlayerCombinedHealthWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPD3HUDPlayerCombinedHealthWidget)


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCombinedHealthWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Widget_HealthGauge() { return STRUCT_OFFSET(UPD3HUDPlayerCombinedHealthWidget, Widget_HealthGauge); } \
	FORCEINLINE static uint32 __PPO__Widget_ArmorGauge() { return STRUCT_OFFSET(UPD3HUDPlayerCombinedHealthWidget, Widget_ArmorGauge); } \
	FORCEINLINE static uint32 __PPO__Widget_OverHealGauge() { return STRUCT_OFFSET(UPD3HUDPlayerCombinedHealthWidget, Widget_OverHealGauge); } \
	FORCEINLINE static uint32 __PPO__Widget_HealthTraumaGauge() { return STRUCT_OFFSET(UPD3HUDPlayerCombinedHealthWidget, Widget_HealthTraumaGauge); } \
	FORCEINLINE static uint32 __PPO__MaskOffOpacity() { return STRUCT_OFFSET(UPD3HUDPlayerCombinedHealthWidget, MaskOffOpacity); } \
	FORCEINLINE static uint32 __PPO__MaskOnOpacity() { return STRUCT_OFFSET(UPD3HUDPlayerCombinedHealthWidget, MaskOnOpacity); }


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCombinedHealthWidget_h_8_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCombinedHealthWidget_h_10_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCombinedHealthWidget_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCombinedHealthWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCombinedHealthWidget_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCombinedHealthWidget_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCombinedHealthWidget_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCombinedHealthWidget_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCombinedHealthWidget_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCombinedHealthWidget_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCombinedHealthWidget_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCombinedHealthWidget_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCombinedHealthWidget_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCombinedHealthWidget_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCombinedHealthWidget_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCombinedHealthWidget_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class UPD3HUDPlayerCombinedHealthWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PD3HUDPlayerCombinedHealthWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
