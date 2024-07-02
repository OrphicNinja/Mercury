// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USBZSpawnWaveManager;
class USBZSpawnWaveSettingsProxyComponent;
class APawn;
class USBZSpawnManager;
struct FSBZSpawnWaveSettings;
enum class ESBZDifficulty : uint8;
struct FSBZSpawnWaveFilteredOrder;
#ifdef STARBREEZE_SBZSpawnWaveManager_generated_h
#error "SBZSpawnWaveManager.generated.h already included, missing '#pragma once' in SBZSpawnWaveManager.h"
#endif
#define STARBREEZE_SBZSpawnWaveManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnWaveManager_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnWaveManager_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execGetSpawnWaveSettingsProxy); \
	DECLARE_FUNCTION(execOnPawnKilled); \
	DECLARE_FUNCTION(execOnPawnSpawned); \
	DECLARE_FUNCTION(execPopulateSpawnTypeLimitsOnWave); \
	DECLARE_FUNCTION(execSetDifficulty); \
	DECLARE_FUNCTION(execSetOrderOnSpawnedPawns); \
	DECLARE_FUNCTION(execSetSpawnWaveSettingsProxy);


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnWaveManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execGetSpawnWaveSettingsProxy); \
	DECLARE_FUNCTION(execOnPawnKilled); \
	DECLARE_FUNCTION(execOnPawnSpawned); \
	DECLARE_FUNCTION(execPopulateSpawnTypeLimitsOnWave); \
	DECLARE_FUNCTION(execSetDifficulty); \
	DECLARE_FUNCTION(execSetOrderOnSpawnedPawns); \
	DECLARE_FUNCTION(execSetSpawnWaveSettingsProxy);


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnWaveManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZSpawnWaveManager(); \
	friend struct Z_Construct_UClass_USBZSpawnWaveManager_Statics; \
public: \
	DECLARE_CLASS(USBZSpawnWaveManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSpawnWaveManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnWaveManager_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSBZSpawnWaveManager(); \
	friend struct Z_Construct_UClass_USBZSpawnWaveManager_Statics; \
public: \
	DECLARE_CLASS(USBZSpawnWaveManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSpawnWaveManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnWaveManager_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZSpawnWaveManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSpawnWaveManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSpawnWaveManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSpawnWaveManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSpawnWaveManager(USBZSpawnWaveManager&&); \
	NO_API USBZSpawnWaveManager(const USBZSpawnWaveManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnWaveManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSpawnWaveManager(USBZSpawnWaveManager&&); \
	NO_API USBZSpawnWaveManager(const USBZSpawnWaveManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSpawnWaveManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSpawnWaveManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZSpawnWaveManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnWaveManager_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpawnWaveSettingsProxy() { return STRUCT_OFFSET(USBZSpawnWaveManager, SpawnWaveSettingsProxy); } \
	FORCEINLINE static uint32 __PPO__SpawnedPawns() { return STRUCT_OFFSET(USBZSpawnWaveManager, SpawnedPawns); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnWaveManager_h_14_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnWaveManager_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnWaveManager_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnWaveManager_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnWaveManager_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnWaveManager_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnWaveManager_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnWaveManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnWaveManager_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnWaveManager_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnWaveManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnWaveManager_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnWaveManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZSpawnWaveManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSpawnWaveManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
