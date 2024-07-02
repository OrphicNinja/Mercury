// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UPD3AssaultManager;
struct FSBZDamageEvent;
enum class EPD3HeistState : uint8;
class USBZSpawnManager;
class APawn;
class USBZAssaultVehicleSpawnerData;
class ASBZSpline;
#ifdef STARBREEZE_PD3AssaultManager_generated_h
#error "PD3AssaultManager.generated.h already included, missing '#pragma once' in PD3AssaultManager.h"
#endif
#define STARBREEZE_PD3AssaultManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PD3AssaultManager_h_22_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_PD3AssaultManager_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execIsAssaultActive); \
	DECLARE_FUNCTION(execOnDamageTakenEvent); \
	DECLARE_FUNCTION(execOnECMCountChanged); \
	DECLARE_FUNCTION(execOnHeistStateChanged); \
	DECLARE_FUNCTION(execOnPawnSpawned); \
	DECLARE_FUNCTION(execOnPlayersAliveChanged); \
	DECLARE_FUNCTION(execRequestVehicleSpawn); \
	DECLARE_FUNCTION(execSetAdditionalDistanceScoreWeight); \
	DECLARE_FUNCTION(execSetAdditionalTimeScoreWeight); \
	DECLARE_FUNCTION(execSetAssaultActive); \
	DECLARE_FUNCTION(execSetLevelProgression); \
	DECLARE_FUNCTION(execSetVehicleSpawnEnabled); \
	DECLARE_FUNCTION(execStartEndlessAssault);


#define PAYDAY3_Source_Starbreeze_Public_PD3AssaultManager_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execIsAssaultActive); \
	DECLARE_FUNCTION(execOnDamageTakenEvent); \
	DECLARE_FUNCTION(execOnECMCountChanged); \
	DECLARE_FUNCTION(execOnHeistStateChanged); \
	DECLARE_FUNCTION(execOnPawnSpawned); \
	DECLARE_FUNCTION(execOnPlayersAliveChanged); \
	DECLARE_FUNCTION(execRequestVehicleSpawn); \
	DECLARE_FUNCTION(execSetAdditionalDistanceScoreWeight); \
	DECLARE_FUNCTION(execSetAdditionalTimeScoreWeight); \
	DECLARE_FUNCTION(execSetAssaultActive); \
	DECLARE_FUNCTION(execSetLevelProgression); \
	DECLARE_FUNCTION(execSetVehicleSpawnEnabled); \
	DECLARE_FUNCTION(execStartEndlessAssault);


#define PAYDAY3_Source_Starbreeze_Public_PD3AssaultManager_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPD3AssaultManager(); \
	friend struct Z_Construct_UClass_UPD3AssaultManager_Statics; \
public: \
	DECLARE_CLASS(UPD3AssaultManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3AssaultManager) \
	DECLARE_WITHIN(APD3HeistGameMode)


#define PAYDAY3_Source_Starbreeze_Public_PD3AssaultManager_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUPD3AssaultManager(); \
	friend struct Z_Construct_UClass_UPD3AssaultManager_Statics; \
public: \
	DECLARE_CLASS(UPD3AssaultManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3AssaultManager) \
	DECLARE_WITHIN(APD3HeistGameMode)


#define PAYDAY3_Source_Starbreeze_Public_PD3AssaultManager_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPD3AssaultManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPD3AssaultManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3AssaultManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3AssaultManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3AssaultManager(UPD3AssaultManager&&); \
	NO_API UPD3AssaultManager(const UPD3AssaultManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_PD3AssaultManager_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3AssaultManager(UPD3AssaultManager&&); \
	NO_API UPD3AssaultManager(const UPD3AssaultManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3AssaultManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3AssaultManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPD3AssaultManager)


#define PAYDAY3_Source_Starbreeze_Public_PD3AssaultManager_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Settings() { return STRUCT_OFFSET(UPD3AssaultManager, Settings); } \
	FORCEINLINE static uint32 __PPO__CachedSpawnOrders() { return STRUCT_OFFSET(UPD3AssaultManager, CachedSpawnOrders); } \
	FORCEINLINE static uint32 __PPO__SpawnGroupSet() { return STRUCT_OFFSET(UPD3AssaultManager, SpawnGroupSet); } \
	FORCEINLINE static uint32 __PPO__CountedTypes() { return STRUCT_OFFSET(UPD3AssaultManager, CountedTypes); } \
	FORCEINLINE static uint32 __PPO__ECMBlockedTypes() { return STRUCT_OFFSET(UPD3AssaultManager, ECMBlockedTypes); } \
	FORCEINLINE static uint32 __PPO__VehicleSpawnRequests() { return STRUCT_OFFSET(UPD3AssaultManager, VehicleSpawnRequests); } \
	FORCEINLINE static uint32 __PPO__ThrowableTypeCooldown() { return STRUCT_OFFSET(UPD3AssaultManager, ThrowableTypeCooldown); } \
	FORCEINLINE static uint32 __PPO__BuddySystemAdditionalSpecials() { return STRUCT_OFFSET(UPD3AssaultManager, BuddySystemAdditionalSpecials); }


#define PAYDAY3_Source_Starbreeze_Public_PD3AssaultManager_h_20_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_PD3AssaultManager_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3AssaultManager_h_22_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3AssaultManager_h_22_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3AssaultManager_h_22_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3AssaultManager_h_22_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_PD3AssaultManager_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_PD3AssaultManager_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3AssaultManager_h_22_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3AssaultManager_h_22_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3AssaultManager_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3AssaultManager_h_22_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3AssaultManager_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class UPD3AssaultManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PD3AssaultManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
