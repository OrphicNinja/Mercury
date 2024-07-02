// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraComponent;
class ASBZCharacter;
struct FVector;
#ifdef STARBREEZE_SBZGasVolumeComponent_generated_h
#error "SBZGasVolumeComponent.generated.h already included, missing '#pragma once' in SBZGasVolumeComponent.h"
#endif
#define STARBREEZE_SBZGasVolumeComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZGasVolumeComponent_h_16_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZGasVolumeComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFeedNiagaraWithParticleLocations); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execIsCharacterOverlapping); \
	DECLARE_FUNCTION(execIsLocationOverlapping); \
	DECLARE_FUNCTION(execIsSegmentOverlapping);


#define PAYDAY3_Source_Starbreeze_Public_SBZGasVolumeComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFeedNiagaraWithParticleLocations); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execIsCharacterOverlapping); \
	DECLARE_FUNCTION(execIsLocationOverlapping); \
	DECLARE_FUNCTION(execIsSegmentOverlapping);


#define PAYDAY3_Source_Starbreeze_Public_SBZGasVolumeComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZGasVolumeComponent(); \
	friend struct Z_Construct_UClass_USBZGasVolumeComponent_Statics; \
public: \
	DECLARE_CLASS(USBZGasVolumeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZGasVolumeComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedLocalLocations=NETFIELD_REP_START, \
		ReplicatedLocalBorderLocations, \
		NETFIELD_REP_END=ReplicatedLocalBorderLocations	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZGasVolumeComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSBZGasVolumeComponent(); \
	friend struct Z_Construct_UClass_USBZGasVolumeComponent_Statics; \
public: \
	DECLARE_CLASS(USBZGasVolumeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZGasVolumeComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedLocalLocations=NETFIELD_REP_START, \
		ReplicatedLocalBorderLocations, \
		NETFIELD_REP_END=ReplicatedLocalBorderLocations	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZGasVolumeComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZGasVolumeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZGasVolumeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZGasVolumeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZGasVolumeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZGasVolumeComponent(USBZGasVolumeComponent&&); \
	NO_API USBZGasVolumeComponent(const USBZGasVolumeComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZGasVolumeComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZGasVolumeComponent(USBZGasVolumeComponent&&); \
	NO_API USBZGasVolumeComponent(const USBZGasVolumeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZGasVolumeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZGasVolumeComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZGasVolumeComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZGasVolumeComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LineBatchComponent() { return STRUCT_OFFSET(USBZGasVolumeComponent, LineBatchComponent); } \
	FORCEINLINE static uint32 __PPO__bInitOnBeginPlay() { return STRUCT_OFFSET(USBZGasVolumeComponent, bInitOnBeginPlay); } \
	FORCEINLINE static uint32 __PPO__Duration() { return STRUCT_OFFSET(USBZGasVolumeComponent, Duration); } \
	FORCEINLINE static uint32 __PPO__TimeBeforeDieToStartKillingCells() { return STRUCT_OFFSET(USBZGasVolumeComponent, TimeBeforeDieToStartKillingCells); } \
	FORCEINLINE static uint32 __PPO__CellSize() { return STRUCT_OFFSET(USBZGasVolumeComponent, CellSize); } \
	FORCEINLINE static uint32 __PPO__MaxTravelDistance() { return STRUCT_OFFSET(USBZGasVolumeComponent, MaxTravelDistance); } \
	FORCEINLINE static uint32 __PPO__HorizontalSize() { return STRUCT_OFFSET(USBZGasVolumeComponent, HorizontalSize); } \
	FORCEINLINE static uint32 __PPO__VerticalSize() { return STRUCT_OFFSET(USBZGasVolumeComponent, VerticalSize); } \
	FORCEINLINE static uint32 __PPO__MaxComputationPerSecond() { return STRUCT_OFFSET(USBZGasVolumeComponent, MaxComputationPerSecond); } \
	FORCEINLINE static uint32 __PPO__MaxCellDensity() { return STRUCT_OFFSET(USBZGasVolumeComponent, MaxCellDensity); } \
	FORCEINLINE static uint32 __PPO__MinCellDensityToHurt() { return STRUCT_OFFSET(USBZGasVolumeComponent, MinCellDensityToHurt); } \
	FORCEINLINE static uint32 __PPO__MinCellDensityToGrow() { return STRUCT_OFFSET(USBZGasVolumeComponent, MinCellDensityToGrow); } \
	FORCEINLINE static uint32 __PPO__DensityToAddPerSecond() { return STRUCT_OFFSET(USBZGasVolumeComponent, DensityToAddPerSecond); } \
	FORCEINLINE static uint32 __PPO__DensityToLoosePerSecond() { return STRUCT_OFFSET(USBZGasVolumeComponent, DensityToLoosePerSecond); } \
	FORCEINLINE static uint32 __PPO__MaxCellIndexToBoost() { return STRUCT_OFFSET(USBZGasVolumeComponent, MaxCellIndexToBoost); } \
	FORCEINLINE static uint32 __PPO__StartupDensityBoostMultiplier() { return STRUCT_OFFSET(USBZGasVolumeComponent, StartupDensityBoostMultiplier); } \
	FORCEINLINE static uint32 __PPO__GrowMode() { return STRUCT_OFFSET(USBZGasVolumeComponent, GrowMode); } \
	FORCEINLINE static uint32 __PPO__CollisionProfileName() { return STRUCT_OFFSET(USBZGasVolumeComponent, CollisionProfileName); } \
	FORCEINLINE static uint32 __PPO__NiagaraParticleArrayName() { return STRUCT_OFFSET(USBZGasVolumeComponent, NiagaraParticleArrayName); } \
	FORCEINLINE static uint32 __PPO__NiagaraBorderParticleArrayName() { return STRUCT_OFFSET(USBZGasVolumeComponent, NiagaraBorderParticleArrayName); } \
	FORCEINLINE static uint32 __PPO__NiagaraParticleCountName() { return STRUCT_OFFSET(USBZGasVolumeComponent, NiagaraParticleCountName); } \
	FORCEINLINE static uint32 __PPO__NiagaraBorderParticleCountName() { return STRUCT_OFFSET(USBZGasVolumeComponent, NiagaraBorderParticleCountName); } \
	FORCEINLINE static uint32 __PPO__MaxParticleCount() { return STRUCT_OFFSET(USBZGasVolumeComponent, MaxParticleCount); } \
	FORCEINLINE static uint32 __PPO__ParticleCountMultiplier() { return STRUCT_OFFSET(USBZGasVolumeComponent, ParticleCountMultiplier); } \
	FORCEINLINE static uint32 __PPO__UpdateParticleLocationsInterval() { return STRUCT_OFFSET(USBZGasVolumeComponent, UpdateParticleLocationsInterval); } \
	FORCEINLINE static uint32 __PPO__MaxUpdateLocationPerFrame() { return STRUCT_OFFSET(USBZGasVolumeComponent, MaxUpdateLocationPerFrame); } \
	FORCEINLINE static uint32 __PPO__OverdrawOptimisationPoolID() { return STRUCT_OFFSET(USBZGasVolumeComponent, OverdrawOptimisationPoolID); } \
	FORCEINLINE static uint32 __PPO__ReplicatedLocalLocations() { return STRUCT_OFFSET(USBZGasVolumeComponent, ReplicatedLocalLocations); } \
	FORCEINLINE static uint32 __PPO__ReplicatedLocalBorderLocations() { return STRUCT_OFFSET(USBZGasVolumeComponent, ReplicatedLocalBorderLocations); } \
	FORCEINLINE static uint32 __PPO__CellHitData() { return STRUCT_OFFSET(USBZGasVolumeComponent, CellHitData); }


#define PAYDAY3_Source_Starbreeze_Public_SBZGasVolumeComponent_h_14_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZGasVolumeComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGasVolumeComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGasVolumeComponent_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGasVolumeComponent_h_16_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZGasVolumeComponent_h_16_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZGasVolumeComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZGasVolumeComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGasVolumeComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGasVolumeComponent_h_16_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGasVolumeComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGasVolumeComponent_h_16_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGasVolumeComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZGasVolumeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZGasVolumeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
