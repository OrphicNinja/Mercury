// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZMenuButton;
struct FSBZPlayerLoadoutConfig;
#ifdef STARBREEZE_SBZMainMenuLoadoutDisplayWidget_generated_h
#error "SBZMainMenuLoadoutDisplayWidget.generated.h already included, missing '#pragma once' in SBZMainMenuLoadoutDisplayWidget.h"
#endif
#define STARBREEZE_SBZMainMenuLoadoutDisplayWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutDisplayWidget_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutDisplayWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNativeOnItemArmourButtonSelected); \
	DECLARE_FUNCTION(execNativeOnItemPlaceableButtonSelected); \
	DECLARE_FUNCTION(execNativeOnItemThrowableButtonSelected); \
	DECLARE_FUNCTION(execNativeOnItemToolButtonSelected); \
	DECLARE_FUNCTION(execNativeOnOverkillWeaponButtonSelected); \
	DECLARE_FUNCTION(execNativeOnWeaponButtonSelected); \
	DECLARE_FUNCTION(execOnLocalLoadoutChanged); \
	DECLARE_FUNCTION(execUpdateLoadoutConfig); \
	DECLARE_FUNCTION(execUpdateLoadoutConfigFromIndex);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutDisplayWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNativeOnItemArmourButtonSelected); \
	DECLARE_FUNCTION(execNativeOnItemPlaceableButtonSelected); \
	DECLARE_FUNCTION(execNativeOnItemThrowableButtonSelected); \
	DECLARE_FUNCTION(execNativeOnItemToolButtonSelected); \
	DECLARE_FUNCTION(execNativeOnOverkillWeaponButtonSelected); \
	DECLARE_FUNCTION(execNativeOnWeaponButtonSelected); \
	DECLARE_FUNCTION(execOnLocalLoadoutChanged); \
	DECLARE_FUNCTION(execUpdateLoadoutConfig); \
	DECLARE_FUNCTION(execUpdateLoadoutConfigFromIndex);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutDisplayWidget_h_15_EVENT_PARMS \
	struct SBZMainMenuLoadoutDisplayWidget_eventOnNewConfigUpdated_Parms \
	{ \
		FSBZPlayerLoadoutConfig PlayerLoadoutConfig; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutDisplayWidget_h_15_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutDisplayWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuLoadoutDisplayWidget(); \
	friend struct Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuLoadoutDisplayWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuLoadoutDisplayWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutDisplayWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuLoadoutDisplayWidget(); \
	friend struct Z_Construct_UClass_USBZMainMenuLoadoutDisplayWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuLoadoutDisplayWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuLoadoutDisplayWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutDisplayWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuLoadoutDisplayWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuLoadoutDisplayWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuLoadoutDisplayWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuLoadoutDisplayWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuLoadoutDisplayWidget(USBZMainMenuLoadoutDisplayWidget&&); \
	NO_API USBZMainMenuLoadoutDisplayWidget(const USBZMainMenuLoadoutDisplayWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutDisplayWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuLoadoutDisplayWidget(USBZMainMenuLoadoutDisplayWidget&&); \
	NO_API USBZMainMenuLoadoutDisplayWidget(const USBZMainMenuLoadoutDisplayWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuLoadoutDisplayWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuLoadoutDisplayWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuLoadoutDisplayWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutDisplayWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Button_PrimaryWeapon() { return STRUCT_OFFSET(USBZMainMenuLoadoutDisplayWidget, Button_PrimaryWeapon); } \
	FORCEINLINE static uint32 __PPO__Button_SecondaryWeapon() { return STRUCT_OFFSET(USBZMainMenuLoadoutDisplayWidget, Button_SecondaryWeapon); } \
	FORCEINLINE static uint32 __PPO__Button_OverkillWeapon() { return STRUCT_OFFSET(USBZMainMenuLoadoutDisplayWidget, Button_OverkillWeapon); } \
	FORCEINLINE static uint32 __PPO__Button_Armour() { return STRUCT_OFFSET(USBZMainMenuLoadoutDisplayWidget, Button_Armour); } \
	FORCEINLINE static uint32 __PPO__Button_Throwable() { return STRUCT_OFFSET(USBZMainMenuLoadoutDisplayWidget, Button_Throwable); } \
	FORCEINLINE static uint32 __PPO__Button_Tool() { return STRUCT_OFFSET(USBZMainMenuLoadoutDisplayWidget, Button_Tool); } \
	FORCEINLINE static uint32 __PPO__Button_Placeable() { return STRUCT_OFFSET(USBZMainMenuLoadoutDisplayWidget, Button_Placeable); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutDisplayWidget_h_13_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutDisplayWidget_h_15_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutDisplayWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutDisplayWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutDisplayWidget_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutDisplayWidget_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutDisplayWidget_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutDisplayWidget_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutDisplayWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutDisplayWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutDisplayWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutDisplayWidget_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutDisplayWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutDisplayWidget_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutDisplayWidget_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutDisplayWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuLoadoutDisplayWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuLoadoutDisplayWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
