// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZMainMenuCosmeticItemButton;
class USBZMenuButton;
#ifdef STARBREEZE_SBZMaskCustomizationPattern_generated_h
#error "SBZMaskCustomizationPattern.generated.h already included, missing '#pragma once' in SBZMaskCustomizationPattern.h"
#endif
#define STARBREEZE_SBZMaskCustomizationPattern_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMaskCustomizationPattern_h_18_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMaskCustomizationPattern_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCosmeticPanelButtonSelected); \
	DECLARE_FUNCTION(execCosmeticPanelDefaultButtonSelected); \
	DECLARE_FUNCTION(execIncrementSprayCanSlotIndex); \
	DECLARE_FUNCTION(execSetActiveSprayCanSlotIndex); \
	DECLARE_FUNCTION(execShowPatterns); \
	DECLARE_FUNCTION(execShowSprayCans); \
	DECLARE_FUNCTION(execSprayCanSelectorButtonSelected);


#define PAYDAY3_Source_Starbreeze_Public_SBZMaskCustomizationPattern_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCosmeticPanelButtonSelected); \
	DECLARE_FUNCTION(execCosmeticPanelDefaultButtonSelected); \
	DECLARE_FUNCTION(execIncrementSprayCanSlotIndex); \
	DECLARE_FUNCTION(execSetActiveSprayCanSlotIndex); \
	DECLARE_FUNCTION(execShowPatterns); \
	DECLARE_FUNCTION(execShowSprayCans); \
	DECLARE_FUNCTION(execSprayCanSelectorButtonSelected);


#define PAYDAY3_Source_Starbreeze_Public_SBZMaskCustomizationPattern_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZMaskCustomizationPattern(); \
	friend struct Z_Construct_UClass_USBZMaskCustomizationPattern_Statics; \
public: \
	DECLARE_CLASS(USBZMaskCustomizationPattern, USBZMaskCustomizationSlotScreenBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMaskCustomizationPattern)


#define PAYDAY3_Source_Starbreeze_Public_SBZMaskCustomizationPattern_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUSBZMaskCustomizationPattern(); \
	friend struct Z_Construct_UClass_USBZMaskCustomizationPattern_Statics; \
public: \
	DECLARE_CLASS(USBZMaskCustomizationPattern, USBZMaskCustomizationSlotScreenBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZMaskCustomizationPattern)


#define PAYDAY3_Source_Starbreeze_Public_SBZMaskCustomizationPattern_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZMaskCustomizationPattern(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZMaskCustomizationPattern) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMaskCustomizationPattern); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMaskCustomizationPattern); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMaskCustomizationPattern(USBZMaskCustomizationPattern&&); \
	NO_API USBZMaskCustomizationPattern(const USBZMaskCustomizationPattern&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMaskCustomizationPattern_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZMaskCustomizationPattern(USBZMaskCustomizationPattern&&); \
	NO_API USBZMaskCustomizationPattern(const USBZMaskCustomizationPattern&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZMaskCustomizationPattern); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZMaskCustomizationPattern); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZMaskCustomizationPattern)


#define PAYDAY3_Source_Starbreeze_Public_SBZMaskCustomizationPattern_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PatternSlotAsset() { return STRUCT_OFFSET(USBZMaskCustomizationPattern, PatternSlotAsset); } \
	FORCEINLINE static uint32 __PPO__SprayCanSlotAsset() { return STRUCT_OFFSET(USBZMaskCustomizationPattern, SprayCanSlotAsset); } \
	FORCEINLINE static uint32 __PPO__PatternSprayCanSlotAssets() { return STRUCT_OFFSET(USBZMaskCustomizationPattern, PatternSprayCanSlotAssets); } \
	FORCEINLINE static uint32 __PPO__CurrentMenuMode() { return STRUCT_OFFSET(USBZMaskCustomizationPattern, CurrentMenuMode); } \
	FORCEINLINE static uint32 __PPO__MaxSprayCans() { return STRUCT_OFFSET(USBZMaskCustomizationPattern, MaxSprayCans); } \
	FORCEINLINE static uint32 __PPO__ReturnPattern() { return STRUCT_OFFSET(USBZMaskCustomizationPattern, ReturnPattern); } \
	FORCEINLINE static uint32 __PPO__ReturnSprayCanArray() { return STRUCT_OFFSET(USBZMaskCustomizationPattern, ReturnSprayCanArray); } \
	FORCEINLINE static uint32 __PPO__SprayCanSelectorButtonClass() { return STRUCT_OFFSET(USBZMaskCustomizationPattern, SprayCanSelectorButtonClass); } \
	FORCEINLINE static uint32 __PPO__SprayCanSelectorButtonMargin() { return STRUCT_OFFSET(USBZMaskCustomizationPattern, SprayCanSelectorButtonMargin); } \
	FORCEINLINE static uint32 __PPO__CosmeticPanelDefaultButtonText() { return STRUCT_OFFSET(USBZMaskCustomizationPattern, CosmeticPanelDefaultButtonText); } \
	FORCEINLINE static uint32 __PPO__ActiveSprayCanSlotIndex() { return STRUCT_OFFSET(USBZMaskCustomizationPattern, ActiveSprayCanSlotIndex); } \
	FORCEINLINE static uint32 __PPO__Cosmetic_Panel() { return STRUCT_OFFSET(USBZMaskCustomizationPattern, Cosmetic_Panel); } \
	FORCEINLINE static uint32 __PPO__SprayCanHorizontalPanel() { return STRUCT_OFFSET(USBZMaskCustomizationPattern, SprayCanHorizontalPanel); } \
	FORCEINLINE static uint32 __PPO__CurrentPatternSelectedItemButton() { return STRUCT_OFFSET(USBZMaskCustomizationPattern, CurrentPatternSelectedItemButton); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMaskCustomizationPattern_h_16_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZMaskCustomizationPattern_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMaskCustomizationPattern_h_18_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMaskCustomizationPattern_h_18_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMaskCustomizationPattern_h_18_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMaskCustomizationPattern_h_18_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMaskCustomizationPattern_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMaskCustomizationPattern_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMaskCustomizationPattern_h_18_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMaskCustomizationPattern_h_18_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMaskCustomizationPattern_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMaskCustomizationPattern_h_18_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMaskCustomizationPattern_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZMaskCustomizationPattern>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMaskCustomizationPattern_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
