// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZBreachingEquipmentState : uint8;
#ifdef STARBREEZE_SBZThermalLanceWidget_generated_h
#error "SBZThermalLanceWidget.generated.h already included, missing '#pragma once' in SBZThermalLanceWidget.h"
#endif
#define STARBREEZE_SBZThermalLanceWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZThermalLanceWidget_h_13_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZThermalLanceWidget_h_13_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZThermalLanceWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZThermalLanceWidget_h_13_EVENT_PARMS \
	struct SBZThermalLanceWidget_eventBP_OnRefuelingNeeded_Parms \
	{ \
		bool bIsFuelingNeeded; \
	}; \
	struct SBZThermalLanceWidget_eventBP_OnStateChanged_Parms \
	{ \
		ESBZBreachingEquipmentState NewState; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZThermalLanceWidget_h_13_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZThermalLanceWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZThermalLanceWidget(); \
	friend struct Z_Construct_UClass_USBZThermalLanceWidget_Statics; \
public: \
	DECLARE_CLASS(USBZThermalLanceWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZThermalLanceWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZThermalLanceWidget_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSBZThermalLanceWidget(); \
	friend struct Z_Construct_UClass_USBZThermalLanceWidget_Statics; \
public: \
	DECLARE_CLASS(USBZThermalLanceWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZThermalLanceWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZThermalLanceWidget_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZThermalLanceWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZThermalLanceWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZThermalLanceWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZThermalLanceWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZThermalLanceWidget(USBZThermalLanceWidget&&); \
	NO_API USBZThermalLanceWidget(const USBZThermalLanceWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZThermalLanceWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZThermalLanceWidget(USBZThermalLanceWidget&&); \
	NO_API USBZThermalLanceWidget(const USBZThermalLanceWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZThermalLanceWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZThermalLanceWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZThermalLanceWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZThermalLanceWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FuelBar() { return STRUCT_OFFSET(USBZThermalLanceWidget, FuelBar); } \
	FORCEINLINE static uint32 __PPO__TimeLeftText() { return STRUCT_OFFSET(USBZThermalLanceWidget, TimeLeftText); } \
	FORCEINLINE static uint32 __PPO__ThermalLance() { return STRUCT_OFFSET(USBZThermalLanceWidget, ThermalLance); } \
	FORCEINLINE static uint32 __PPO__RefuelingPercent() { return STRUCT_OFFSET(USBZThermalLanceWidget, RefuelingPercent); }


#define PAYDAY3_Source_Starbreeze_Public_SBZThermalLanceWidget_h_11_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZThermalLanceWidget_h_13_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZThermalLanceWidget_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZThermalLanceWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZThermalLanceWidget_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZThermalLanceWidget_h_13_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZThermalLanceWidget_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZThermalLanceWidget_h_13_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZThermalLanceWidget_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZThermalLanceWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZThermalLanceWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZThermalLanceWidget_h_13_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZThermalLanceWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZThermalLanceWidget_h_13_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZThermalLanceWidget_h_13_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZThermalLanceWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZThermalLanceWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZThermalLanceWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
