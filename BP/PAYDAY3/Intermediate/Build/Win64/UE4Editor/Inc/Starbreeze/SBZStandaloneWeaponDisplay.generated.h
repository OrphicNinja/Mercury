// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZModularPartSlotBase;
class USBZEquippablePartDataAsset;
class USBZEquippablePartConfig;
struct FSBZEquippableConfig;
class USBZBaseWeaponData;
#ifdef STARBREEZE_SBZStandaloneWeaponDisplay_generated_h
#error "SBZStandaloneWeaponDisplay.generated.h already included, missing '#pragma once' in SBZStandaloneWeaponDisplay.h"
#endif
#define STARBREEZE_SBZStandaloneWeaponDisplay_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZStandaloneWeaponDisplay_h_17_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZStandaloneWeaponDisplay_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemovePart); \
	DECLARE_FUNCTION(execSetPart); \
	DECLARE_FUNCTION(execSetupWeaponConfig); \
	DECLARE_FUNCTION(execSetupWeaponData);


#define PAYDAY3_Source_Starbreeze_Public_SBZStandaloneWeaponDisplay_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemovePart); \
	DECLARE_FUNCTION(execSetPart); \
	DECLARE_FUNCTION(execSetupWeaponConfig); \
	DECLARE_FUNCTION(execSetupWeaponData);


#define PAYDAY3_Source_Starbreeze_Public_SBZStandaloneWeaponDisplay_h_17_EVENT_PARMS
#define PAYDAY3_Source_Starbreeze_Public_SBZStandaloneWeaponDisplay_h_17_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZStandaloneWeaponDisplay_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZStandaloneWeaponDisplay(); \
	friend struct Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics; \
public: \
	DECLARE_CLASS(ASBZStandaloneWeaponDisplay, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZStandaloneWeaponDisplay)


#define PAYDAY3_Source_Starbreeze_Public_SBZStandaloneWeaponDisplay_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASBZStandaloneWeaponDisplay(); \
	friend struct Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics; \
public: \
	DECLARE_CLASS(ASBZStandaloneWeaponDisplay, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZStandaloneWeaponDisplay)


#define PAYDAY3_Source_Starbreeze_Public_SBZStandaloneWeaponDisplay_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZStandaloneWeaponDisplay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZStandaloneWeaponDisplay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZStandaloneWeaponDisplay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZStandaloneWeaponDisplay); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZStandaloneWeaponDisplay(ASBZStandaloneWeaponDisplay&&); \
	NO_API ASBZStandaloneWeaponDisplay(const ASBZStandaloneWeaponDisplay&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZStandaloneWeaponDisplay_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZStandaloneWeaponDisplay(ASBZStandaloneWeaponDisplay&&); \
	NO_API ASBZStandaloneWeaponDisplay(const ASBZStandaloneWeaponDisplay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZStandaloneWeaponDisplay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZStandaloneWeaponDisplay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZStandaloneWeaponDisplay)


#define PAYDAY3_Source_Starbreeze_Public_SBZStandaloneWeaponDisplay_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponConfig() { return STRUCT_OFFSET(ASBZStandaloneWeaponDisplay, WeaponConfig); } \
	FORCEINLINE static uint32 __PPO__SpawnTransform() { return STRUCT_OFFSET(ASBZStandaloneWeaponDisplay, SpawnTransform); } \
	FORCEINLINE static uint32 __PPO__bMergeWeaponMeshes() { return STRUCT_OFFSET(ASBZStandaloneWeaponDisplay, bMergeWeaponMeshes); } \
	FORCEINLINE static uint32 __PPO__bRespawnAlways() { return STRUCT_OFFSET(ASBZStandaloneWeaponDisplay, bRespawnAlways); } \
	FORCEINLINE static uint32 __PPO__SpawnedWeapon() { return STRUCT_OFFSET(ASBZStandaloneWeaponDisplay, SpawnedWeapon); } \
	FORCEINLINE static uint32 __PPO__PivotPointToSpawn() { return STRUCT_OFFSET(ASBZStandaloneWeaponDisplay, PivotPointToSpawn); } \
	FORCEINLINE static uint32 __PPO__bForceWithoutPivotPoint() { return STRUCT_OFFSET(ASBZStandaloneWeaponDisplay, bForceWithoutPivotPoint); } \
	FORCEINLINE static uint32 __PPO__FOVMultiplier() { return STRUCT_OFFSET(ASBZStandaloneWeaponDisplay, FOVMultiplier); } \
	FORCEINLINE static uint32 __PPO__SpawnedPivotPoint() { return STRUCT_OFFSET(ASBZStandaloneWeaponDisplay, SpawnedPivotPoint); }


#define PAYDAY3_Source_Starbreeze_Public_SBZStandaloneWeaponDisplay_h_15_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZStandaloneWeaponDisplay_h_17_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZStandaloneWeaponDisplay_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStandaloneWeaponDisplay_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStandaloneWeaponDisplay_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStandaloneWeaponDisplay_h_17_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZStandaloneWeaponDisplay_h_17_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZStandaloneWeaponDisplay_h_17_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZStandaloneWeaponDisplay_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZStandaloneWeaponDisplay_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZStandaloneWeaponDisplay_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZStandaloneWeaponDisplay_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZStandaloneWeaponDisplay_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStandaloneWeaponDisplay_h_17_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZStandaloneWeaponDisplay_h_17_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZStandaloneWeaponDisplay_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZStandaloneWeaponDisplay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZStandaloneWeaponDisplay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
