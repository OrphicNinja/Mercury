// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef STARBREEZE_SBZExplosiveTrapGas_generated_h
#error "SBZExplosiveTrapGas.generated.h already included, missing '#pragma once' in SBZExplosiveTrapGas.h"
#endif
#define STARBREEZE_SBZExplosiveTrapGas_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrapGas_h_20_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrapGas_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap); \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnRep_GasDurationLeft);


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrapGas_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap); \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnRep_GasDurationLeft);


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrapGas_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZExplosiveTrapGas(); \
	friend struct Z_Construct_UClass_ASBZExplosiveTrapGas_Statics; \
public: \
	DECLARE_CLASS(ASBZExplosiveTrapGas, ASBZExplosiveTrap, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZExplosiveTrapGas) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZExplosiveTrapGas*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GasLifetimeLeft=NETFIELD_REP_START, \
		NETFIELD_REP_END=GasLifetimeLeft	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrapGas_h_20_INCLASS \
private: \
	static void StaticRegisterNativesASBZExplosiveTrapGas(); \
	friend struct Z_Construct_UClass_ASBZExplosiveTrapGas_Statics; \
public: \
	DECLARE_CLASS(ASBZExplosiveTrapGas, ASBZExplosiveTrap, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZExplosiveTrapGas) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZExplosiveTrapGas*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GasLifetimeLeft=NETFIELD_REP_START, \
		NETFIELD_REP_END=GasLifetimeLeft	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrapGas_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZExplosiveTrapGas(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZExplosiveTrapGas) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZExplosiveTrapGas); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZExplosiveTrapGas); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZExplosiveTrapGas(ASBZExplosiveTrapGas&&); \
	NO_API ASBZExplosiveTrapGas(const ASBZExplosiveTrapGas&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrapGas_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZExplosiveTrapGas(ASBZExplosiveTrapGas&&); \
	NO_API ASBZExplosiveTrapGas(const ASBZExplosiveTrapGas&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZExplosiveTrapGas); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZExplosiveTrapGas); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZExplosiveTrapGas)


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrapGas_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SphereComponent() { return STRUCT_OFFSET(ASBZExplosiveTrapGas, SphereComponent); } \
	FORCEINLINE static uint32 __PPO__GasVolumeComponent() { return STRUCT_OFFSET(ASBZExplosiveTrapGas, GasVolumeComponent); } \
	FORCEINLINE static uint32 __PPO__VolumeDamageType() { return STRUCT_OFFSET(ASBZExplosiveTrapGas, VolumeDamageType); } \
	FORCEINLINE static uint32 __PPO__DamagePerSecond() { return STRUCT_OFFSET(ASBZExplosiveTrapGas, DamagePerSecond); } \
	FORCEINLINE static uint32 __PPO__TickSeconds() { return STRUCT_OFFSET(ASBZExplosiveTrapGas, TickSeconds); } \
	FORCEINLINE static uint32 __PPO__GasArmorPenetration() { return STRUCT_OFFSET(ASBZExplosiveTrapGas, GasArmorPenetration); } \
	FORCEINLINE static uint32 __PPO__VolumeDamageAddedTagContainer() { return STRUCT_OFFSET(ASBZExplosiveTrapGas, VolumeDamageAddedTagContainer); } \
	FORCEINLINE static uint32 __PPO__VolumeDamageEffect() { return STRUCT_OFFSET(ASBZExplosiveTrapGas, VolumeDamageEffect); } \
	FORCEINLINE static uint32 __PPO__GasDuration() { return STRUCT_OFFSET(ASBZExplosiveTrapGas, GasDuration); } \
	FORCEINLINE static uint32 __PPO__UpdateOverlapsFrequency() { return STRUCT_OFFSET(ASBZExplosiveTrapGas, UpdateOverlapsFrequency); } \
	FORCEINLINE static uint32 __PPO__UpdateRemainingLifeTimeInterval() { return STRUCT_OFFSET(ASBZExplosiveTrapGas, UpdateRemainingLifeTimeInterval); } \
	FORCEINLINE static uint32 __PPO__NiagaraParticleUpdateInterval() { return STRUCT_OFFSET(ASBZExplosiveTrapGas, NiagaraParticleUpdateInterval); } \
	FORCEINLINE static uint32 __PPO__GasLifetimeLeft() { return STRUCT_OFFSET(ASBZExplosiveTrapGas, GasLifetimeLeft); } \
	FORCEINLINE static uint32 __PPO__GasTargetArray() { return STRUCT_OFFSET(ASBZExplosiveTrapGas, GasTargetArray); }


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrapGas_h_18_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrapGas_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrapGas_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrapGas_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrapGas_h_20_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrapGas_h_20_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrapGas_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrapGas_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrapGas_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrapGas_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrapGas_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrapGas_h_20_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrapGas_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZExplosiveTrapGas>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZExplosiveTrapGas_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
