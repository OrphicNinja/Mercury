// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZBaseWeaponData;
struct FSBZEquippableConfig;
class USBZModularPartSlotBase;
class USBZEquippablePartDataAsset;
#ifdef STARBREEZE_SBZModularWeaponDisplay_generated_h
#error "SBZModularWeaponDisplay.generated.h already included, missing '#pragma once' in SBZModularWeaponDisplay.h"
#endif
#define STARBREEZE_SBZModularWeaponDisplay_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZModularWeaponDisplay_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZModularWeaponDisplay_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBuildWeapon); \
	DECLARE_FUNCTION(execGetWeaponData); \
	DECLARE_FUNCTION(execGetWeaponModMap); \
	DECLARE_FUNCTION(execModuleMeshLoadingDone); \
	DECLARE_FUNCTION(execRemoveSlot); \
	DECLARE_FUNCTION(execSetupWeaponData); \
	DECLARE_FUNCTION(execSetupWeaponModMap); \
	DECLARE_FUNCTION(execSetVisible); \
	DECLARE_FUNCTION(execSwapModPart);


#define PAYDAY3_Source_Starbreeze_Public_SBZModularWeaponDisplay_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBuildWeapon); \
	DECLARE_FUNCTION(execGetWeaponData); \
	DECLARE_FUNCTION(execGetWeaponModMap); \
	DECLARE_FUNCTION(execModuleMeshLoadingDone); \
	DECLARE_FUNCTION(execRemoveSlot); \
	DECLARE_FUNCTION(execSetupWeaponData); \
	DECLARE_FUNCTION(execSetupWeaponModMap); \
	DECLARE_FUNCTION(execSetVisible); \
	DECLARE_FUNCTION(execSwapModPart);


#define PAYDAY3_Source_Starbreeze_Public_SBZModularWeaponDisplay_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZModularWeaponDisplay(); \
	friend struct Z_Construct_UClass_ASBZModularWeaponDisplay_Statics; \
public: \
	DECLARE_CLASS(ASBZModularWeaponDisplay, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZModularWeaponDisplay)


#define PAYDAY3_Source_Starbreeze_Public_SBZModularWeaponDisplay_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASBZModularWeaponDisplay(); \
	friend struct Z_Construct_UClass_ASBZModularWeaponDisplay_Statics; \
public: \
	DECLARE_CLASS(ASBZModularWeaponDisplay, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZModularWeaponDisplay)


#define PAYDAY3_Source_Starbreeze_Public_SBZModularWeaponDisplay_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZModularWeaponDisplay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZModularWeaponDisplay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZModularWeaponDisplay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZModularWeaponDisplay); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZModularWeaponDisplay(ASBZModularWeaponDisplay&&); \
	NO_API ASBZModularWeaponDisplay(const ASBZModularWeaponDisplay&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZModularWeaponDisplay_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZModularWeaponDisplay(ASBZModularWeaponDisplay&&); \
	NO_API ASBZModularWeaponDisplay(const ASBZModularWeaponDisplay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZModularWeaponDisplay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZModularWeaponDisplay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZModularWeaponDisplay)


#define PAYDAY3_Source_Starbreeze_Public_SBZModularWeaponDisplay_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ModularMeshComponent() { return STRUCT_OFFSET(ASBZModularWeaponDisplay, ModularMeshComponent); } \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(ASBZModularWeaponDisplay, Mesh); } \
	FORCEINLINE static uint32 __PPO__WeaponData() { return STRUCT_OFFSET(ASBZModularWeaponDisplay, WeaponData); } \
	FORCEINLINE static uint32 __PPO__WeaponModMap() { return STRUCT_OFFSET(ASBZModularWeaponDisplay, WeaponModMap); }


#define PAYDAY3_Source_Starbreeze_Public_SBZModularWeaponDisplay_h_14_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZModularWeaponDisplay_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZModularWeaponDisplay_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZModularWeaponDisplay_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZModularWeaponDisplay_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZModularWeaponDisplay_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZModularWeaponDisplay_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZModularWeaponDisplay_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZModularWeaponDisplay_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZModularWeaponDisplay_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZModularWeaponDisplay_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZModularWeaponDisplay_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZModularWeaponDisplay_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZModularWeaponDisplay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZModularWeaponDisplay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
