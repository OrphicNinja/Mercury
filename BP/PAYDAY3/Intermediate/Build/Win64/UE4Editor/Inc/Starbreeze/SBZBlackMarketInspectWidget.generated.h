// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZGloveData;
class USBZInventoryBaseData;
#ifdef STARBREEZE_SBZBlackMarketInspectWidget_generated_h
#error "SBZBlackMarketInspectWidget.generated.h already included, missing '#pragma once' in SBZBlackMarketInspectWidget.h"
#endif
#define STARBREEZE_SBZBlackMarketInspectWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketInspectWidget_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketInspectWidget_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetGlovesOnMannequin); \
	DECLARE_FUNCTION(execSetInspectCamera);


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketInspectWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetGlovesOnMannequin); \
	DECLARE_FUNCTION(execSetInspectCamera);


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketInspectWidget_h_12_EVENT_PARMS \
	struct SBZBlackMarketInspectWidget_eventCanInspectItem_Parms \
	{ \
		USBZInventoryBaseData* InInspectData; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SBZBlackMarketInspectWidget_eventCanInspectItem_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct SBZBlackMarketInspectWidget_eventOnCustomizationActorLoadingChanged_Parms \
	{ \
		bool bIsLoading; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketInspectWidget_h_12_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketInspectWidget_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZBlackMarketInspectWidget(); \
	friend struct Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics; \
public: \
	DECLARE_CLASS(USBZBlackMarketInspectWidget, USBZMenuStackScreenWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZBlackMarketInspectWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketInspectWidget_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZBlackMarketInspectWidget(); \
	friend struct Z_Construct_UClass_USBZBlackMarketInspectWidget_Statics; \
public: \
	DECLARE_CLASS(USBZBlackMarketInspectWidget, USBZMenuStackScreenWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZBlackMarketInspectWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketInspectWidget_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZBlackMarketInspectWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZBlackMarketInspectWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZBlackMarketInspectWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZBlackMarketInspectWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZBlackMarketInspectWidget(USBZBlackMarketInspectWidget&&); \
	NO_API USBZBlackMarketInspectWidget(const USBZBlackMarketInspectWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketInspectWidget_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZBlackMarketInspectWidget(USBZBlackMarketInspectWidget&&); \
	NO_API USBZBlackMarketInspectWidget(const USBZBlackMarketInspectWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZBlackMarketInspectWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZBlackMarketInspectWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZBlackMarketInspectWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketInspectWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentInspectData() { return STRUCT_OFFSET(USBZBlackMarketInspectWidget, CurrentInspectData); } \
	FORCEINLINE static uint32 __PPO__CurrentCameraName() { return STRUCT_OFFSET(USBZBlackMarketInspectWidget, CurrentCameraName); } \
	FORCEINLINE static uint32 __PPO__ZoomSpeedRatio() { return STRUCT_OFFSET(USBZBlackMarketInspectWidget, ZoomSpeedRatio); } \
	FORCEINLINE static uint32 __PPO__ZoomMax() { return STRUCT_OFFSET(USBZBlackMarketInspectWidget, ZoomMax); } \
	FORCEINLINE static uint32 __PPO__ZoomMin() { return STRUCT_OFFSET(USBZBlackMarketInspectWidget, ZoomMin); } \
	FORCEINLINE static uint32 __PPO__ZoomInputAxisName() { return STRUCT_OFFSET(USBZBlackMarketInspectWidget, ZoomInputAxisName); } \
	FORCEINLINE static uint32 __PPO__ZoomCameraRotationInputAxisName() { return STRUCT_OFFSET(USBZBlackMarketInspectWidget, ZoomCameraRotationInputAxisName); } \
	FORCEINLINE static uint32 __PPO__AxisDeadZone() { return STRUCT_OFFSET(USBZBlackMarketInspectWidget, AxisDeadZone); } \
	FORCEINLINE static uint32 __PPO__InspectCamera() { return STRUCT_OFFSET(USBZBlackMarketInspectWidget, InspectCamera); } \
	FORCEINLINE static uint32 __PPO__LoadoutEquippedGloveData() { return STRUCT_OFFSET(USBZBlackMarketInspectWidget, LoadoutEquippedGloveData); } \
	FORCEINLINE static uint32 __PPO__MaxZoomCameraPitch() { return STRUCT_OFFSET(USBZBlackMarketInspectWidget, MaxZoomCameraPitch); } \
	FORCEINLINE static uint32 __PPO__MinZoomCameraPitch() { return STRUCT_OFFSET(USBZBlackMarketInspectWidget, MinZoomCameraPitch); }


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketInspectWidget_h_10_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketInspectWidget_h_12_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketInspectWidget_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketInspectWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketInspectWidget_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketInspectWidget_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketInspectWidget_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketInspectWidget_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketInspectWidget_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketInspectWidget_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketInspectWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketInspectWidget_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketInspectWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketInspectWidget_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketInspectWidget_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketInspectWidget_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZBlackMarketInspectWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZBlackMarketInspectWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
