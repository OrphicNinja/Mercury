// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZWheeledVehicle;
enum class EPD3HeistState : uint8;
class AActor;
class UWorld;
#ifdef STARBREEZE_SBZTrafficManager_generated_h
#error "SBZTrafficManager.generated.h already included, missing '#pragma once' in SBZTrafficManager.h"
#endif
#define STARBREEZE_SBZTrafficManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficManager_h_24_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficManager_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCivilianArrived); \
	DECLARE_FUNCTION(execHandleEscapeVanArrived); \
	DECLARE_FUNCTION(execHandleFirstResponderArrived); \
	DECLARE_FUNCTION(execHandleHeistStateChanged); \
	DECLARE_FUNCTION(execHandleSwatVanArrived); \
	DECLARE_FUNCTION(execHandleVehicleBeginObstacle); \
	DECLARE_FUNCTION(execHandleVehicleEndObstacle); \
	DECLARE_FUNCTION(execHandleVehicleStopped); \
	DECLARE_FUNCTION(execOnEnteredActionPhase); \
	DECLARE_FUNCTION(execOnExitedActionPhase);


#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficManager_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCivilianArrived); \
	DECLARE_FUNCTION(execHandleEscapeVanArrived); \
	DECLARE_FUNCTION(execHandleFirstResponderArrived); \
	DECLARE_FUNCTION(execHandleHeistStateChanged); \
	DECLARE_FUNCTION(execHandleSwatVanArrived); \
	DECLARE_FUNCTION(execHandleVehicleBeginObstacle); \
	DECLARE_FUNCTION(execHandleVehicleEndObstacle); \
	DECLARE_FUNCTION(execHandleVehicleStopped); \
	DECLARE_FUNCTION(execOnEnteredActionPhase); \
	DECLARE_FUNCTION(execOnExitedActionPhase);


#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficManager_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZTrafficManager(); \
	friend struct Z_Construct_UClass_USBZTrafficManager_Statics; \
public: \
	DECLARE_CLASS(USBZTrafficManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZTrafficManager) \
	DECLARE_WITHIN(APD3HeistGameMode)


#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficManager_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUSBZTrafficManager(); \
	friend struct Z_Construct_UClass_USBZTrafficManager_Statics; \
public: \
	DECLARE_CLASS(USBZTrafficManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZTrafficManager) \
	DECLARE_WITHIN(APD3HeistGameMode)


#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficManager_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZTrafficManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZTrafficManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZTrafficManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZTrafficManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZTrafficManager(USBZTrafficManager&&); \
	NO_API USBZTrafficManager(const USBZTrafficManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficManager_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZTrafficManager(USBZTrafficManager&&); \
	NO_API USBZTrafficManager(const USBZTrafficManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZTrafficManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZTrafficManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZTrafficManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficManager_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TrafficNodeGraph() { return STRUCT_OFFSET(USBZTrafficManager, TrafficNodeGraph); } \
	FORCEINLINE static uint32 __PPO__DestinationNodeGraph() { return STRUCT_OFFSET(USBZTrafficManager, DestinationNodeGraph); } \
	FORCEINLINE static uint32 __PPO__SpawnerNodeGraph() { return STRUCT_OFFSET(USBZTrafficManager, SpawnerNodeGraph); } \
	FORCEINLINE static uint32 __PPO__VehicleArray() { return STRUCT_OFFSET(USBZTrafficManager, VehicleArray); } \
	FORCEINLINE static uint32 __PPO__VehiclesToSpawn() { return STRUCT_OFFSET(USBZTrafficManager, VehiclesToSpawn); } \
	FORCEINLINE static uint32 __PPO__PedestrianTrafficNavLinks() { return STRUCT_OFFSET(USBZTrafficManager, PedestrianTrafficNavLinks); } \
	FORCEINLINE static uint32 __PPO__TimeToNextSpawnAttempt() { return STRUCT_OFFSET(USBZTrafficManager, TimeToNextSpawnAttempt); } \
	FORCEINLINE static uint32 __PPO__AmountFirstRespondersLeftToArrive() { return STRUCT_OFFSET(USBZTrafficManager, AmountFirstRespondersLeftToArrive); } \
	FORCEINLINE static uint32 __PPO__EscapeVan() { return STRUCT_OFFSET(USBZTrafficManager, EscapeVan); } \
	FORCEINLINE static uint32 __PPO__bCivilianTrafficEnabled() { return STRUCT_OFFSET(USBZTrafficManager, bCivilianTrafficEnabled); } \
	FORCEINLINE static uint32 __PPO__TimeToNextCivilianSpawn() { return STRUCT_OFFSET(USBZTrafficManager, TimeToNextCivilianSpawn); } \
	FORCEINLINE static uint32 __PPO__AmountActiveCivilianVehicles() { return STRUCT_OFFSET(USBZTrafficManager, AmountActiveCivilianVehicles); } \
	FORCEINLINE static uint32 __PPO__ParkedCivilianVehicles() { return STRUCT_OFFSET(USBZTrafficManager, ParkedCivilianVehicles); } \
	FORCEINLINE static uint32 __PPO__GridlockArray() { return STRUCT_OFFSET(USBZTrafficManager, GridlockArray); } \
	FORCEINLINE static uint32 __PPO__TrafficLightArray() { return STRUCT_OFFSET(USBZTrafficManager, TrafficLightArray); } \
	FORCEINLINE static uint32 __PPO__SoundHornTimerGraph() { return STRUCT_OFFSET(USBZTrafficManager, SoundHornTimerGraph); } \
	FORCEINLINE static uint32 __PPO__CachedCivilianRouteArrayGraph() { return STRUCT_OFFSET(USBZTrafficManager, CachedCivilianRouteArrayGraph); } \
	FORCEINLINE static uint32 __PPO__CachedFirstResponderRouteArrayGraph() { return STRUCT_OFFSET(USBZTrafficManager, CachedFirstResponderRouteArrayGraph); } \
	FORCEINLINE static uint32 __PPO__CachedFBIVanRouteArrayGraph() { return STRUCT_OFFSET(USBZTrafficManager, CachedFBIVanRouteArrayGraph); } \
	FORCEINLINE static uint32 __PPO__bIsInActionPhase() { return STRUCT_OFFSET(USBZTrafficManager, bIsInActionPhase); }


#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficManager_h_22_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficManager_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficManager_h_24_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficManager_h_24_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficManager_h_24_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficManager_h_24_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficManager_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZTrafficManager_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficManager_h_24_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficManager_h_24_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficManager_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficManager_h_24_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZTrafficManager_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZTrafficManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZTrafficManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
