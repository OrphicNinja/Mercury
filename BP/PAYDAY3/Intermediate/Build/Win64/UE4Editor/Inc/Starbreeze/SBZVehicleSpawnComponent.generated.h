// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZAerialVehicle;
class ASBZSpline;
enum class EPD3HeistState : uint8;
class APD3PawnSpawnGroup;
class ASBZPawnSpawnBase;
class APawn;
class ASBZWheeledVehicle;
enum class ESBZVehicleSpawnResult : uint8;
#ifdef STARBREEZE_SBZVehicleSpawnComponent_generated_h
#error "SBZVehicleSpawnComponent.generated.h already included, missing '#pragma once' in SBZVehicleSpawnComponent.h"
#endif
#define STARBREEZE_SBZVehicleSpawnComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleSpawnComponent_h_20_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleSpawnComponent_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAerialReachedPathEnd); \
	DECLARE_FUNCTION(execOnAerialStarted); \
	DECLARE_FUNCTION(execOnHeistStateChanged); \
	DECLARE_FUNCTION(execOnPawnSpawned); \
	DECLARE_FUNCTION(execOnWheeledReachedPathEnd); \
	DECLARE_FUNCTION(execOnWheeledStarted); \
	DECLARE_FUNCTION(execSpawnCompleted);


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleSpawnComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAerialReachedPathEnd); \
	DECLARE_FUNCTION(execOnAerialStarted); \
	DECLARE_FUNCTION(execOnHeistStateChanged); \
	DECLARE_FUNCTION(execOnPawnSpawned); \
	DECLARE_FUNCTION(execOnWheeledReachedPathEnd); \
	DECLARE_FUNCTION(execOnWheeledStarted); \
	DECLARE_FUNCTION(execSpawnCompleted);


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleSpawnComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZVehicleSpawnComponent(); \
	friend struct Z_Construct_UClass_USBZVehicleSpawnComponent_Statics; \
public: \
	DECLARE_CLASS(USBZVehicleSpawnComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZVehicleSpawnComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleSpawnComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSBZVehicleSpawnComponent(); \
	friend struct Z_Construct_UClass_USBZVehicleSpawnComponent_Statics; \
public: \
	DECLARE_CLASS(USBZVehicleSpawnComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZVehicleSpawnComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleSpawnComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZVehicleSpawnComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZVehicleSpawnComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZVehicleSpawnComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZVehicleSpawnComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZVehicleSpawnComponent(USBZVehicleSpawnComponent&&); \
	NO_API USBZVehicleSpawnComponent(const USBZVehicleSpawnComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleSpawnComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZVehicleSpawnComponent(USBZVehicleSpawnComponent&&); \
	NO_API USBZVehicleSpawnComponent(const USBZVehicleSpawnComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZVehicleSpawnComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZVehicleSpawnComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZVehicleSpawnComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleSpawnComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpawnGroupSelector() { return STRUCT_OFFSET(USBZVehicleSpawnComponent, SpawnGroupSelector); } \
	FORCEINLINE static uint32 __PPO__SpawnerSelectors() { return STRUCT_OFFSET(USBZVehicleSpawnComponent, SpawnerSelectors); } \
	FORCEINLINE static uint32 __PPO__bEnableForAssault() { return STRUCT_OFFSET(USBZVehicleSpawnComponent, bEnableForAssault); } \
	FORCEINLINE static uint32 __PPO__MaxNumSpawn() { return STRUCT_OFFSET(USBZVehicleSpawnComponent, MaxNumSpawn); } \
	FORCEINLINE static uint32 __PPO__bInitialSpawnOnly() { return STRUCT_OFFSET(USBZVehicleSpawnComponent, bInitialSpawnOnly); } \
	FORCEINLINE static uint32 __PPO__bCustomSpawnCompleted() { return STRUCT_OFFSET(USBZVehicleSpawnComponent, bCustomSpawnCompleted); } \
	FORCEINLINE static uint32 __PPO__SpawnGroup() { return STRUCT_OFFSET(USBZVehicleSpawnComponent, SpawnGroup); } \
	FORCEINLINE static uint32 __PPO__Spawners() { return STRUCT_OFFSET(USBZVehicleSpawnComponent, Spawners); }


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleSpawnComponent_h_18_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleSpawnComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleSpawnComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleSpawnComponent_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleSpawnComponent_h_20_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleSpawnComponent_h_20_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleSpawnComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZVehicleSpawnComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleSpawnComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleSpawnComponent_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleSpawnComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleSpawnComponent_h_20_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZVehicleSpawnComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZVehicleSpawnComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZVehicleSpawnComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
