// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZEquippableConfig;
class USBZEquippableData;
enum class ESBZEquippableLoadoutSlot : uint8;
class USBZModularPartSlotBase;
class USBZEquippablePartDataAsset;
#ifdef STARBREEZE_SBZMainMenuWeaponStatsWidget_generated_h
#error "SBZMainMenuWeaponStatsWidget.generated.h already included, missing '#pragma once' in SBZMainMenuWeaponStatsWidget.h"
#endif
#define STARBREEZE_SBZMainMenuWeaponStatsWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponStatsWidget_h_17_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponStatsWidget_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCompareWithEquippableConfig); \
	DECLARE_FUNCTION(execCompareWithEquippableData); \
	DECLARE_FUNCTION(execCompareWithNothing); \
	DECLARE_FUNCTION(execCompareWithSlot); \
	DECLARE_FUNCTION(execCompareWithWeaponPart); \
	DECLARE_FUNCTION(execHasCompare); \
	DECLARE_FUNCTION(execSetBaseFromEquippableConfig); \
	DECLARE_FUNCTION(execSetBaseFromEquippableData); \
	DECLARE_FUNCTION(execSetBaseFromSlot); \
	DECLARE_FUNCTION(execSetEmpty);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponStatsWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCompareWithEquippableConfig); \
	DECLARE_FUNCTION(execCompareWithEquippableData); \
	DECLARE_FUNCTION(execCompareWithNothing); \
	DECLARE_FUNCTION(execCompareWithSlot); \
	DECLARE_FUNCTION(execCompareWithWeaponPart); \
	DECLARE_FUNCTION(execHasCompare); \
	DECLARE_FUNCTION(execSetBaseFromEquippableConfig); \
	DECLARE_FUNCTION(execSetBaseFromEquippableData); \
	DECLARE_FUNCTION(execSetBaseFromSlot); \
	DECLARE_FUNCTION(execSetEmpty);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponStatsWidget_h_17_EVENT_PARMS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponStatsWidget_h_17_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponStatsWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuWeaponStatsWidget(); \
	friend struct Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuWeaponStatsWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuWeaponStatsWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponStatsWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuWeaponStatsWidget(); \
	friend struct Z_Construct_UClass_USBZMainMenuWeaponStatsWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuWeaponStatsWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuWeaponStatsWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponStatsWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuWeaponStatsWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuWeaponStatsWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuWeaponStatsWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuWeaponStatsWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuWeaponStatsWidget(USBZMainMenuWeaponStatsWidget&&); \
	NO_API USBZMainMenuWeaponStatsWidget(const USBZMainMenuWeaponStatsWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponStatsWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuWeaponStatsWidget(USBZMainMenuWeaponStatsWidget&&); \
	NO_API USBZMainMenuWeaponStatsWidget(const USBZMainMenuWeaponStatsWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuWeaponStatsWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuWeaponStatsWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuWeaponStatsWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponStatsWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UIWeaponStats() { return STRUCT_OFFSET(USBZMainMenuWeaponStatsWidget, UIWeaponStats); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponStatsWidget_h_15_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponStatsWidget_h_17_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponStatsWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponStatsWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponStatsWidget_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponStatsWidget_h_17_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponStatsWidget_h_17_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponStatsWidget_h_17_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponStatsWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponStatsWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponStatsWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponStatsWidget_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponStatsWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponStatsWidget_h_17_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponStatsWidget_h_17_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponStatsWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuWeaponStatsWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponStatsWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
