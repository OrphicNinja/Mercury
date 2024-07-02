// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZCosmeticsDataAsset;
class USBZEquippablePartConfig;
class USBZCosmeticsPartSlot;
struct FSBZCosmeticsInventoryItem;
enum class ESBZMetaRequestResult : uint8;
enum class ESBZEquippableLoadoutSlot : uint8;
#ifdef STARBREEZE_SBZWeaponCustomizationSubscreen_generated_h
#error "SBZWeaponCustomizationSubscreen.generated.h already included, missing '#pragma once' in SBZWeaponCustomizationSubscreen.h"
#endif
#define STARBREEZE_SBZWeaponCustomizationSubscreen_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponCustomizationSubscreen_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponCustomizationSubscreen_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyCosmeticConfig); \
	DECLARE_FUNCTION(execApplyCosmeticData); \
	DECLARE_FUNCTION(execApplyCosmeticOnBackend); \
	DECLARE_FUNCTION(execGetCosmeticConfig); \
	DECLARE_FUNCTION(execGetCosmeticItems); \
	DECLARE_FUNCTION(execGetCosmeticPart); \
	DECLARE_FUNCTION(execGetCosmeticSlot); \
	DECLARE_FUNCTION(execOnApplyCosmeticDone); \
	DECLARE_FUNCTION(execRefreshEquippableConfig); \
	DECLARE_FUNCTION(execSetupScreen);


#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponCustomizationSubscreen_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyCosmeticConfig); \
	DECLARE_FUNCTION(execApplyCosmeticData); \
	DECLARE_FUNCTION(execApplyCosmeticOnBackend); \
	DECLARE_FUNCTION(execGetCosmeticConfig); \
	DECLARE_FUNCTION(execGetCosmeticItems); \
	DECLARE_FUNCTION(execGetCosmeticPart); \
	DECLARE_FUNCTION(execGetCosmeticSlot); \
	DECLARE_FUNCTION(execOnApplyCosmeticDone); \
	DECLARE_FUNCTION(execRefreshEquippableConfig); \
	DECLARE_FUNCTION(execSetupScreen);


#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponCustomizationSubscreen_h_16_EVENT_PARMS \
	struct SBZWeaponCustomizationSubscreen_eventOnTryApplyDone_Parms \
	{ \
		ESBZMetaRequestResult Result; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponCustomizationSubscreen_h_16_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponCustomizationSubscreen_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZWeaponCustomizationSubscreen(); \
	friend struct Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics; \
public: \
	DECLARE_CLASS(USBZWeaponCustomizationSubscreen, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZWeaponCustomizationSubscreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponCustomizationSubscreen_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSBZWeaponCustomizationSubscreen(); \
	friend struct Z_Construct_UClass_USBZWeaponCustomizationSubscreen_Statics; \
public: \
	DECLARE_CLASS(USBZWeaponCustomizationSubscreen, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZWeaponCustomizationSubscreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponCustomizationSubscreen_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZWeaponCustomizationSubscreen(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZWeaponCustomizationSubscreen) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZWeaponCustomizationSubscreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZWeaponCustomizationSubscreen); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZWeaponCustomizationSubscreen(USBZWeaponCustomizationSubscreen&&); \
	NO_API USBZWeaponCustomizationSubscreen(const USBZWeaponCustomizationSubscreen&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponCustomizationSubscreen_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZWeaponCustomizationSubscreen(USBZWeaponCustomizationSubscreen&&); \
	NO_API USBZWeaponCustomizationSubscreen(const USBZWeaponCustomizationSubscreen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZWeaponCustomizationSubscreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZWeaponCustomizationSubscreen); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZWeaponCustomizationSubscreen)


#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponCustomizationSubscreen_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EquippableConfig() { return STRUCT_OFFSET(USBZWeaponCustomizationSubscreen, EquippableConfig); } \
	FORCEINLINE static uint32 __PPO__CosmeticSlot() { return STRUCT_OFFSET(USBZWeaponCustomizationSubscreen, CosmeticSlot); } \
	FORCEINLINE static uint32 __PPO__CosmeticData() { return STRUCT_OFFSET(USBZWeaponCustomizationSubscreen, CosmeticData); } \
	FORCEINLINE static uint32 __PPO__CosmeticConfig() { return STRUCT_OFFSET(USBZWeaponCustomizationSubscreen, CosmeticConfig); } \
	FORCEINLINE static uint32 __PPO__EquippableSlot() { return STRUCT_OFFSET(USBZWeaponCustomizationSubscreen, EquippableSlot); } \
	FORCEINLINE static uint32 __PPO__WeaponSlotIndex() { return STRUCT_OFFSET(USBZWeaponCustomizationSubscreen, WeaponSlotIndex); }


#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponCustomizationSubscreen_h_14_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZWeaponCustomizationSubscreen_h_16_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponCustomizationSubscreen_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZWeaponCustomizationSubscreen_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZWeaponCustomizationSubscreen_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZWeaponCustomizationSubscreen_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZWeaponCustomizationSubscreen_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZWeaponCustomizationSubscreen_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZWeaponCustomizationSubscreen_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZWeaponCustomizationSubscreen_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZWeaponCustomizationSubscreen_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZWeaponCustomizationSubscreen_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZWeaponCustomizationSubscreen_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZWeaponCustomizationSubscreen_h_16_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZWeaponCustomizationSubscreen_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZWeaponCustomizationSubscreen_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZWeaponCustomizationSubscreen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZWeaponCustomizationSubscreen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
