// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class USBZSpawnManager;
#ifdef STARBREEZE_SBZHoldOutKillEnemiesObjective_generated_h
#error "SBZHoldOutKillEnemiesObjective.generated.h already included, missing '#pragma once' in SBZHoldOutKillEnemiesObjective.h"
#endif
#define STARBREEZE_SBZHoldOutKillEnemiesObjective_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutKillEnemiesObjective_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutKillEnemiesObjective_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEnemyKilled); \
	DECLARE_FUNCTION(execOnEnemySpawned);


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutKillEnemiesObjective_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEnemyKilled); \
	DECLARE_FUNCTION(execOnEnemySpawned);


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutKillEnemiesObjective_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZHoldOutKillEnemiesObjective(); \
	friend struct Z_Construct_UClass_USBZHoldOutKillEnemiesObjective_Statics; \
public: \
	DECLARE_CLASS(USBZHoldOutKillEnemiesObjective, USBZHoldOutObjectiveBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZHoldOutKillEnemiesObjective)


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutKillEnemiesObjective_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSBZHoldOutKillEnemiesObjective(); \
	friend struct Z_Construct_UClass_USBZHoldOutKillEnemiesObjective_Statics; \
public: \
	DECLARE_CLASS(USBZHoldOutKillEnemiesObjective, USBZHoldOutObjectiveBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZHoldOutKillEnemiesObjective)


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutKillEnemiesObjective_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZHoldOutKillEnemiesObjective(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZHoldOutKillEnemiesObjective) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZHoldOutKillEnemiesObjective); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZHoldOutKillEnemiesObjective); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZHoldOutKillEnemiesObjective(USBZHoldOutKillEnemiesObjective&&); \
	NO_API USBZHoldOutKillEnemiesObjective(const USBZHoldOutKillEnemiesObjective&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutKillEnemiesObjective_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZHoldOutKillEnemiesObjective(USBZHoldOutKillEnemiesObjective&&); \
	NO_API USBZHoldOutKillEnemiesObjective(const USBZHoldOutKillEnemiesObjective&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZHoldOutKillEnemiesObjective); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZHoldOutKillEnemiesObjective); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZHoldOutKillEnemiesObjective)


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutKillEnemiesObjective_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NumEnemiesToKill() { return STRUCT_OFFSET(USBZHoldOutKillEnemiesObjective, NumEnemiesToKill); } \
	FORCEINLINE static uint32 __PPO__PawnTypes() { return STRUCT_OFFSET(USBZHoldOutKillEnemiesObjective, PawnTypes); } \
	FORCEINLINE static uint32 __PPO__SpawnedEnemies() { return STRUCT_OFFSET(USBZHoldOutKillEnemiesObjective, SpawnedEnemies); }


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutKillEnemiesObjective_h_10_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutKillEnemiesObjective_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutKillEnemiesObjective_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutKillEnemiesObjective_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutKillEnemiesObjective_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutKillEnemiesObjective_h_12_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutKillEnemiesObjective_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZHoldOutKillEnemiesObjective_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutKillEnemiesObjective_h_12_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutKillEnemiesObjective_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutKillEnemiesObjective_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutKillEnemiesObjective_h_12_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHoldOutKillEnemiesObjective_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZHoldOutKillEnemiesObjective>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZHoldOutKillEnemiesObjective_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
