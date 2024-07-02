// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZCosmeticsPartSlot;
struct FSBZMaskPartConfigGroup;
class ASBZCustomizationManager;
class ASBZMask;
class USBZCustomizableSuitMeshComponent;
struct FSBZMaskConfig;
struct FSBZSuitConfig;
class USBZSuitPartConfig;
class USBZModularPartDataAsset;
struct FSBZSuitInventorySlot;
struct FSBZSuitPartConfigGroup;
class USBZCosmeticsDataAsset;
#ifdef STARBREEZE_SBZCustomizationLibrary_generated_h
#error "SBZCustomizationLibrary.generated.h already included, missing '#pragma once' in SBZCustomizationLibrary.h"
#endif
#define STARBREEZE_SBZCustomizationLibrary_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCustomizationLibrary_h_21_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCustomizationLibrary_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyAllCosmeticPartsFromPreviewOnMask); \
	DECLARE_FUNCTION(execApplyAllCosmeticPartsFromPreviewOnSuit); \
	DECLARE_FUNCTION(execApplyCosmeticPartOnMask); \
	DECLARE_FUNCTION(execGetCustomizationManager); \
	DECLARE_FUNCTION(execGetGlobalMaskPreviewActor); \
	DECLARE_FUNCTION(execGetMainMenuMannequinCustomizableSuitComponent); \
	DECLARE_FUNCTION(execGetPreviewMaskConfig); \
	DECLARE_FUNCTION(execGetPreviewSuitConfig); \
	DECLARE_FUNCTION(execGetPreviewSuitCosmeticDataAsset); \
	DECLARE_FUNCTION(execGetSuitCosmeticDataAssetFromInventorySlot); \
	DECLARE_FUNCTION(execMaskPreviewAssetInSlot); \
	DECLARE_FUNCTION(execPreviewEquippedMask); \
	DECLARE_FUNCTION(execPreviewSuitAssetInSlot); \
	DECLARE_FUNCTION(execRemoveMaskPreviewAssetFromSlot); \
	DECLARE_FUNCTION(execRemoveSuitPreviewAssetFromSlot); \
	DECLARE_FUNCTION(execSetDefaultMaskOnPreviewMaskConfig); \
	DECLARE_FUNCTION(execSetDefaultSuitOnPreviewSuitConfig); \
	DECLARE_FUNCTION(execSetPartInPreview); \
	DECLARE_FUNCTION(execSetPreviewMaskConfig); \
	DECLARE_FUNCTION(execSetPreviewSuitConfig); \
	DECLARE_FUNCTION(execUseDefaultMask);


#define PAYDAY3_Source_Starbreeze_Public_SBZCustomizationLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyAllCosmeticPartsFromPreviewOnMask); \
	DECLARE_FUNCTION(execApplyAllCosmeticPartsFromPreviewOnSuit); \
	DECLARE_FUNCTION(execApplyCosmeticPartOnMask); \
	DECLARE_FUNCTION(execGetCustomizationManager); \
	DECLARE_FUNCTION(execGetGlobalMaskPreviewActor); \
	DECLARE_FUNCTION(execGetMainMenuMannequinCustomizableSuitComponent); \
	DECLARE_FUNCTION(execGetPreviewMaskConfig); \
	DECLARE_FUNCTION(execGetPreviewSuitConfig); \
	DECLARE_FUNCTION(execGetPreviewSuitCosmeticDataAsset); \
	DECLARE_FUNCTION(execGetSuitCosmeticDataAssetFromInventorySlot); \
	DECLARE_FUNCTION(execMaskPreviewAssetInSlot); \
	DECLARE_FUNCTION(execPreviewEquippedMask); \
	DECLARE_FUNCTION(execPreviewSuitAssetInSlot); \
	DECLARE_FUNCTION(execRemoveMaskPreviewAssetFromSlot); \
	DECLARE_FUNCTION(execRemoveSuitPreviewAssetFromSlot); \
	DECLARE_FUNCTION(execSetDefaultMaskOnPreviewMaskConfig); \
	DECLARE_FUNCTION(execSetDefaultSuitOnPreviewSuitConfig); \
	DECLARE_FUNCTION(execSetPartInPreview); \
	DECLARE_FUNCTION(execSetPreviewMaskConfig); \
	DECLARE_FUNCTION(execSetPreviewSuitConfig); \
	DECLARE_FUNCTION(execUseDefaultMask);


#define PAYDAY3_Source_Starbreeze_Public_SBZCustomizationLibrary_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZCustomizationLibrary(); \
	friend struct Z_Construct_UClass_USBZCustomizationLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZCustomizationLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCustomizationLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZCustomizationLibrary_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUSBZCustomizationLibrary(); \
	friend struct Z_Construct_UClass_USBZCustomizationLibrary_Statics; \
public: \
	DECLARE_CLASS(USBZCustomizationLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZCustomizationLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZCustomizationLibrary_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZCustomizationLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZCustomizationLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCustomizationLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCustomizationLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCustomizationLibrary(USBZCustomizationLibrary&&); \
	NO_API USBZCustomizationLibrary(const USBZCustomizationLibrary&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCustomizationLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZCustomizationLibrary(USBZCustomizationLibrary&&); \
	NO_API USBZCustomizationLibrary(const USBZCustomizationLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZCustomizationLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZCustomizationLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZCustomizationLibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZCustomizationLibrary_h_21_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZCustomizationLibrary_h_19_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZCustomizationLibrary_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCustomizationLibrary_h_21_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCustomizationLibrary_h_21_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCustomizationLibrary_h_21_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCustomizationLibrary_h_21_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCustomizationLibrary_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCustomizationLibrary_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCustomizationLibrary_h_21_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCustomizationLibrary_h_21_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCustomizationLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCustomizationLibrary_h_21_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCustomizationLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZCustomizationLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCustomizationLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
