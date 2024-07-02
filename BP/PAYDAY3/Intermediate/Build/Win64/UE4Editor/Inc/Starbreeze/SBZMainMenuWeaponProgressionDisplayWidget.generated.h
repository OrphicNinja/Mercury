// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZInventoryBaseData;
class USBZBaseWeaponData;
enum class ESBZEquippableLoadoutSlot : uint8;
#ifdef STARBREEZE_SBZMainMenuWeaponProgressionDisplayWidget_generated_h
#error "SBZMainMenuWeaponProgressionDisplayWidget.generated.h already included, missing '#pragma once' in SBZMainMenuWeaponProgressionDisplayWidget.h"
#endif
#define STARBREEZE_SBZMainMenuWeaponProgressionDisplayWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionDisplayWidget_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionDisplayWidget_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitilizeWithBaseInventoryData); \
	DECLARE_FUNCTION(execSetEmpty); \
	DECLARE_FUNCTION(execUpdateBaseWeaponVisuals); \
	DECLARE_FUNCTION(execUpdateWeaponVisuals);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionDisplayWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitilizeWithBaseInventoryData); \
	DECLARE_FUNCTION(execSetEmpty); \
	DECLARE_FUNCTION(execUpdateBaseWeaponVisuals); \
	DECLARE_FUNCTION(execUpdateWeaponVisuals);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionDisplayWidget_h_16_EVENT_PARMS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionDisplayWidget_h_16_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionDisplayWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMainMenuWeaponProgressionDisplayWidget(); \
	friend struct Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuWeaponProgressionDisplayWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuWeaponProgressionDisplayWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionDisplayWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMainMenuWeaponProgressionDisplayWidget(); \
	friend struct Z_Construct_UClass_USBZMainMenuWeaponProgressionDisplayWidget_Statics; \
public: \
	DECLARE_CLASS(USBZMainMenuWeaponProgressionDisplayWidget, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMainMenuWeaponProgressionDisplayWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionDisplayWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMainMenuWeaponProgressionDisplayWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMainMenuWeaponProgressionDisplayWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuWeaponProgressionDisplayWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuWeaponProgressionDisplayWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuWeaponProgressionDisplayWidget(USBZMainMenuWeaponProgressionDisplayWidget&&); \
	NO_API USBZMainMenuWeaponProgressionDisplayWidget(const USBZMainMenuWeaponProgressionDisplayWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionDisplayWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMainMenuWeaponProgressionDisplayWidget(USBZMainMenuWeaponProgressionDisplayWidget&&); \
	NO_API USBZMainMenuWeaponProgressionDisplayWidget(const USBZMainMenuWeaponProgressionDisplayWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMainMenuWeaponProgressionDisplayWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMainMenuWeaponProgressionDisplayWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMainMenuWeaponProgressionDisplayWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionDisplayWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponLevel() { return STRUCT_OFFSET(USBZMainMenuWeaponProgressionDisplayWidget, WeaponLevel); } \
	FORCEINLINE static uint32 __PPO__MaxWeaponLevel() { return STRUCT_OFFSET(USBZMainMenuWeaponProgressionDisplayWidget, MaxWeaponLevel); } \
	FORCEINLINE static uint32 __PPO__CurrentWeaponXP() { return STRUCT_OFFSET(USBZMainMenuWeaponProgressionDisplayWidget, CurrentWeaponXP); } \
	FORCEINLINE static uint32 __PPO__WeaponXPAtNextLevel() { return STRUCT_OFFSET(USBZMainMenuWeaponProgressionDisplayWidget, WeaponXPAtNextLevel); } \
	FORCEINLINE static uint32 __PPO__WeaponLevelProgression() { return STRUCT_OFFSET(USBZMainMenuWeaponProgressionDisplayWidget, WeaponLevelProgression); } \
	FORCEINLINE static uint32 __PPO__BaseItemData() { return STRUCT_OFFSET(USBZMainMenuWeaponProgressionDisplayWidget, BaseItemData); } \
	FORCEINLINE static uint32 __PPO__EquippableSlot() { return STRUCT_OFFSET(USBZMainMenuWeaponProgressionDisplayWidget, EquippableSlot); } \
	FORCEINLINE static uint32 __PPO__WeaponSlotIndex() { return STRUCT_OFFSET(USBZMainMenuWeaponProgressionDisplayWidget, WeaponSlotIndex); } \
	FORCEINLINE static uint32 __PPO__MaxModifierSlots() { return STRUCT_OFFSET(USBZMainMenuWeaponProgressionDisplayWidget, MaxModifierSlots); } \
	FORCEINLINE static uint32 __PPO__WeaponSlotPartArray() { return STRUCT_OFFSET(USBZMainMenuWeaponProgressionDisplayWidget, WeaponSlotPartArray); } \
	FORCEINLINE static uint32 __PPO__WeaponPartArray() { return STRUCT_OFFSET(USBZMainMenuWeaponProgressionDisplayWidget, WeaponPartArray); } \
	FORCEINLINE static uint32 __PPO__WeaponStatDamageFalloff() { return STRUCT_OFFSET(USBZMainMenuWeaponProgressionDisplayWidget, WeaponStatDamageFalloff); } \
	FORCEINLINE static uint32 __PPO__EquippableConfig() { return STRUCT_OFFSET(USBZMainMenuWeaponProgressionDisplayWidget, EquippableConfig); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionDisplayWidget_h_14_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionDisplayWidget_h_16_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionDisplayWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionDisplayWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionDisplayWidget_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionDisplayWidget_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionDisplayWidget_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionDisplayWidget_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionDisplayWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionDisplayWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionDisplayWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionDisplayWidget_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionDisplayWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionDisplayWidget_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionDisplayWidget_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionDisplayWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMainMenuWeaponProgressionDisplayWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuWeaponProgressionDisplayWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
