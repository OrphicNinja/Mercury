// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USBZInventoryBaseData;
struct FSBZGloveInventorySlot;
struct FSBZSuitInventorySlot;
enum class ESBZEquippableLoadoutSlot : uint8;
struct FSBZWeaponInventorySlot;
struct FSBZPlayerLoadoutConfig;
class USBZCosmeticsPartSlot;
class USBZCosmeticsDataAsset;
struct FSBZEquippablePartConfigGroup;
class USBZWeaponPartSlot;
class USBZEquippablePartDataAsset;
#ifdef STARBREEZE_SBZLoadoutLibrary_generated_h
#error "SBZLoadoutLibrary.generated.h already included, missing '#pragma once' in SBZLoadoutLibrary.h"
#endif
#define STARBREEZE_SBZLoadoutLibrary_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutLibrary_h_21_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutLibrary_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetActivePlayerLoadoutIndex); \
	DECLARE_FUNCTION(execGetGloveData); \
	DECLARE_FUNCTION(execGetInventoryGloveSlotAt); \
	DECLARE_FUNCTION(execGetInventorySuitSlotAt); \
	DECLARE_FUNCTION(execGetMaskData); \
	DECLARE_FUNCTION(execGetSuitData); \
	DECLARE_FUNCTION(execGetWeaponConfigSlot); \
	DECLARE_FUNCTION(execGetWeaponConfigSlotsForEquippable); \
	DECLARE_FUNCTION(execIsValidLoadout); \
	DECLARE_FUNCTION(execRemoveCosmeticPartOnWeapon); \
	DECLARE_FUNCTION(execSetCosmeticPartOnWeapon); \
	DECLARE_FUNCTION(execSetWeaponPartOnWeapon);


#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetActivePlayerLoadoutIndex); \
	DECLARE_FUNCTION(execGetGloveData); \
	DECLARE_FUNCTION(execGetInventoryGloveSlotAt); \
	DECLARE_FUNCTION(execGetInventorySuitSlotAt); \
	DECLARE_FUNCTION(execGetMaskData); \
	DECLARE_FUNCTION(execGetSuitData); \
	DECLARE_FUNCTION(execGetWeaponConfigSlot); \
	DECLARE_FUNCTION(execGetWeaponConfigSlotsForEquippable); \
	DECLARE_FUNCTION(execIsValidLoadout); \
	DECLARE_FUNCTION(execRemoveCosmeticPartOnWeapon); \
	DECLARE_FUNCTION(execSetCosmeticPartOnWeapon); \
	DECLARE_FUNCTION(execSetWeaponPartOnWeapon);


#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutLibrary_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZLoadoutLibrary(); \
	friend struct Z_Construct_UClass_USBZLoadoutLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZLoadoutLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZLoadoutLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutLibrary_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUSBZLoadoutLibrary(); \
	friend struct Z_Construct_UClass_USBZLoadoutLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZLoadoutLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZLoadoutLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutLibrary_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZLoadoutLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZLoadoutLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZLoadoutLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZLoadoutLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZLoadoutLibrary(USBZLoadoutLibrary&&); \
	NO_API USBZLoadoutLibrary(const USBZLoadoutLibrary&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZLoadoutLibrary(USBZLoadoutLibrary&&); \
	NO_API USBZLoadoutLibrary(const USBZLoadoutLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZLoadoutLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZLoadoutLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZLoadoutLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutLibrary_h_21_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutLibrary_h_19_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutLibrary_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadoutLibrary_h_21_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadoutLibrary_h_21_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadoutLibrary_h_21_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadoutLibrary_h_21_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadoutLibrary_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZLoadoutLibrary_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadoutLibrary_h_21_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadoutLibrary_h_21_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadoutLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadoutLibrary_h_21_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLoadoutLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZLoadoutLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZLoadoutLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
