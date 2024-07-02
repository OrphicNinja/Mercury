// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
struct FSBZRevertDamageAttributeSetData;
struct FSBZSkillTriggeredHurtTargetData;
struct FGameplayEffectSpec;
struct FSBZProjectileTargetData;
struct FSBZFallDamageTargetData;
struct FSBZMeleeTargetData;
struct FSBZActorMultiHitResult;
class ACharacter;
class UObject;
struct FSBZExplosionResult;
struct FPredictionKey;
#ifdef STARBREEZE_SBZAbilitySystemComponent_generated_h
#error "SBZAbilitySystemComponent.generated.h already included, missing '#pragma once' in SBZAbilitySystemComponent.h"
#endif
#define STARBREEZE_SBZAbilitySystemComponent_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAbilitySystemComponent_h_29_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAbilitySystemComponent_h_29_RPC_WRAPPERS \
	virtual void Client_PredictedRagdollDenied_Implementation(APawn* InPawn, int32 HurtReactionIndex); \
	virtual void Client_RevertDamageAttributeSet_Implementation(FSBZRevertDamageAttributeSetData const& AttributeSetData); \
	virtual void Client_RevertDamageAttributeSetArray_Implementation(TArray<FSBZRevertDamageAttributeSetData> const& AttributeSetDataArray); \
	virtual void Multicast_AppliedSkillHurtReaction_Implementation(FSBZSkillTriggeredHurtTargetData const& SkillTriggeredHurtTargetData); \
	virtual void Multicast_ApplyGameplayEffectSpecToSelf_Implementation(FGameplayEffectSpec const& EffectSpec); \
	virtual void Multicast_DebugApplyGameplayEffectSpecToSelf_Implementation(FGameplayEffectSpec EffectSpec, float Duration, const FString& NameMagnitudeString); \
	virtual void Multicast_EnterVolumeDamage_Implementation(uint32 NetID); \
	virtual void Multicast_ExitVolumeDamage_Implementation(uint32 NetID); \
	virtual void Multicast_FireGrenadeProjectile_Implementation(); \
	virtual void Multicast_FireProjectile_Implementation(FSBZProjectileTargetData const& TargetData); \
	virtual void Multicast_FireProjectileSentry_Implementation(FSBZProjectileTargetData const& TargetData); \
	virtual void Multicast_Landed_Implementation(FSBZFallDamageTargetData const& TargetData); \
	virtual void Multicast_MaskOn_Implementation(); \
	virtual void Multicast_Melee_Implementation(FSBZMeleeTargetData const& TargetData); \
	virtual void Multicast_ShoveHumanShield_Implementation(FSBZActorMultiHitResult const& ActorMultiHitResult); \
	virtual void Server_MaskOn_Implementation(); \
	virtual void Server_ReplicateCosmeticExplosion_Implementation(UObject* ExplosiveObject); \
	virtual void Server_ReplicateExplosion_Implementation(UObject* ExplosiveObject, FSBZExplosionResult const& Result, FPredictionKey PredictionKey); \
 \
	DECLARE_FUNCTION(execClient_PredictedRagdollDenied); \
	DECLARE_FUNCTION(execClient_RevertDamageAttributeSet); \
	DECLARE_FUNCTION(execClient_RevertDamageAttributeSetArray); \
	DECLARE_FUNCTION(execMulticast_AppliedSkillHurtReaction); \
	DECLARE_FUNCTION(execMulticast_ApplyGameplayEffectSpecToSelf); \
	DECLARE_FUNCTION(execMulticast_DebugApplyGameplayEffectSpecToSelf); \
	DECLARE_FUNCTION(execMulticast_EnterVolumeDamage); \
	DECLARE_FUNCTION(execMulticast_ExitVolumeDamage); \
	DECLARE_FUNCTION(execMulticast_FireGrenadeProjectile); \
	DECLARE_FUNCTION(execMulticast_FireProjectile); \
	DECLARE_FUNCTION(execMulticast_FireProjectileSentry); \
	DECLARE_FUNCTION(execMulticast_Landed); \
	DECLARE_FUNCTION(execMulticast_MaskOn); \
	DECLARE_FUNCTION(execMulticast_Melee); \
	DECLARE_FUNCTION(execMulticast_ShoveHumanShield); \
	DECLARE_FUNCTION(execOnMovementModeChanged); \
	DECLARE_FUNCTION(execOnRep_AppliedVolumeDamageNetIDArray); \
	DECLARE_FUNCTION(execServer_MaskOn); \
	DECLARE_FUNCTION(execServer_ReplicateCosmeticExplosion); \
	DECLARE_FUNCTION(execServer_ReplicateExplosion);


#define PAYDAY3_Source_Starbreeze_Public_SBZAbilitySystemComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_PredictedRagdollDenied_Implementation(APawn* InPawn, int32 HurtReactionIndex); \
	virtual void Client_RevertDamageAttributeSet_Implementation(FSBZRevertDamageAttributeSetData const& AttributeSetData); \
	virtual void Client_RevertDamageAttributeSetArray_Implementation(TArray<FSBZRevertDamageAttributeSetData> const& AttributeSetDataArray); \
	virtual void Multicast_AppliedSkillHurtReaction_Implementation(FSBZSkillTriggeredHurtTargetData const& SkillTriggeredHurtTargetData); \
	virtual void Multicast_ApplyGameplayEffectSpecToSelf_Implementation(FGameplayEffectSpec const& EffectSpec); \
	virtual void Multicast_DebugApplyGameplayEffectSpecToSelf_Implementation(FGameplayEffectSpec EffectSpec, float Duration, const FString& NameMagnitudeString); \
	virtual void Multicast_EnterVolumeDamage_Implementation(uint32 NetID); \
	virtual void Multicast_ExitVolumeDamage_Implementation(uint32 NetID); \
	virtual void Multicast_FireGrenadeProjectile_Implementation(); \
	virtual void Multicast_FireProjectile_Implementation(FSBZProjectileTargetData const& TargetData); \
	virtual void Multicast_FireProjectileSentry_Implementation(FSBZProjectileTargetData const& TargetData); \
	virtual void Multicast_Landed_Implementation(FSBZFallDamageTargetData const& TargetData); \
	virtual void Multicast_MaskOn_Implementation(); \
	virtual void Multicast_Melee_Implementation(FSBZMeleeTargetData const& TargetData); \
	virtual void Multicast_ShoveHumanShield_Implementation(FSBZActorMultiHitResult const& ActorMultiHitResult); \
	virtual void Server_MaskOn_Implementation(); \
	virtual void Server_ReplicateCosmeticExplosion_Implementation(UObject* ExplosiveObject); \
	virtual void Server_ReplicateExplosion_Implementation(UObject* ExplosiveObject, FSBZExplosionResult const& Result, FPredictionKey PredictionKey); \
 \
	DECLARE_FUNCTION(execClient_PredictedRagdollDenied); \
	DECLARE_FUNCTION(execClient_RevertDamageAttributeSet); \
	DECLARE_FUNCTION(execClient_RevertDamageAttributeSetArray); \
	DECLARE_FUNCTION(execMulticast_AppliedSkillHurtReaction); \
	DECLARE_FUNCTION(execMulticast_ApplyGameplayEffectSpecToSelf); \
	DECLARE_FUNCTION(execMulticast_DebugApplyGameplayEffectSpecToSelf); \
	DECLARE_FUNCTION(execMulticast_EnterVolumeDamage); \
	DECLARE_FUNCTION(execMulticast_ExitVolumeDamage); \
	DECLARE_FUNCTION(execMulticast_FireGrenadeProjectile); \
	DECLARE_FUNCTION(execMulticast_FireProjectile); \
	DECLARE_FUNCTION(execMulticast_FireProjectileSentry); \
	DECLARE_FUNCTION(execMulticast_Landed); \
	DECLARE_FUNCTION(execMulticast_MaskOn); \
	DECLARE_FUNCTION(execMulticast_Melee); \
	DECLARE_FUNCTION(execMulticast_ShoveHumanShield); \
	DECLARE_FUNCTION(execOnMovementModeChanged); \
	DECLARE_FUNCTION(execOnRep_AppliedVolumeDamageNetIDArray); \
	DECLARE_FUNCTION(execServer_MaskOn); \
	DECLARE_FUNCTION(execServer_ReplicateCosmeticExplosion); \
	DECLARE_FUNCTION(execServer_ReplicateExplosion);


#define PAYDAY3_Source_Starbreeze_Public_SBZAbilitySystemComponent_h_29_EVENT_PARMS \
	struct SBZAbilitySystemComponent_eventClient_PredictedRagdollDenied_Parms \
	{ \
		APawn* InPawn; \
		int32 HurtReactionIndex; \
	}; \
	struct SBZAbilitySystemComponent_eventClient_RevertDamageAttributeSet_Parms \
	{ \
		FSBZRevertDamageAttributeSetData AttributeSetData; \
	}; \
	struct SBZAbilitySystemComponent_eventClient_RevertDamageAttributeSetArray_Parms \
	{ \
		TArray<FSBZRevertDamageAttributeSetData> AttributeSetDataArray; \
	}; \
	struct SBZAbilitySystemComponent_eventMulticast_AppliedSkillHurtReaction_Parms \
	{ \
		FSBZSkillTriggeredHurtTargetData SkillTriggeredHurtTargetData; \
	}; \
	struct SBZAbilitySystemComponent_eventMulticast_ApplyGameplayEffectSpecToSelf_Parms \
	{ \
		FGameplayEffectSpec EffectSpec; \
	}; \
	struct SBZAbilitySystemComponent_eventMulticast_DebugApplyGameplayEffectSpecToSelf_Parms \
	{ \
		FGameplayEffectSpec EffectSpec; \
		float Duration; \
		FString NameMagnitudeString; \
	}; \
	struct SBZAbilitySystemComponent_eventMulticast_EnterVolumeDamage_Parms \
	{ \
		uint32 NetID; \
	}; \
	struct SBZAbilitySystemComponent_eventMulticast_ExitVolumeDamage_Parms \
	{ \
		uint32 NetID; \
	}; \
	struct SBZAbilitySystemComponent_eventMulticast_FireProjectile_Parms \
	{ \
		FSBZProjectileTargetData TargetData; \
	}; \
	struct SBZAbilitySystemComponent_eventMulticast_FireProjectileSentry_Parms \
	{ \
		FSBZProjectileTargetData TargetData; \
	}; \
	struct SBZAbilitySystemComponent_eventMulticast_Landed_Parms \
	{ \
		FSBZFallDamageTargetData TargetData; \
	}; \
	struct SBZAbilitySystemComponent_eventMulticast_Melee_Parms \
	{ \
		FSBZMeleeTargetData TargetData; \
	}; \
	struct SBZAbilitySystemComponent_eventMulticast_ShoveHumanShield_Parms \
	{ \
		FSBZActorMultiHitResult ActorMultiHitResult; \
	}; \
	struct SBZAbilitySystemComponent_eventServer_ReplicateCosmeticExplosion_Parms \
	{ \
		UObject* ExplosiveObject; \
	}; \
	struct SBZAbilitySystemComponent_eventServer_ReplicateExplosion_Parms \
	{ \
		UObject* ExplosiveObject; \
		FSBZExplosionResult Result; \
		FPredictionKey PredictionKey; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZAbilitySystemComponent_h_29_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZAbilitySystemComponent_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_USBZAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(USBZAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAbilitySystemComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AppliedVolumeDamageNetIDArray=NETFIELD_REP_START, \
		NETFIELD_REP_END=AppliedVolumeDamageNetIDArray	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZAbilitySystemComponent_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_USBZAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(USBZAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAbilitySystemComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AppliedVolumeDamageNetIDArray=NETFIELD_REP_START, \
		NETFIELD_REP_END=AppliedVolumeDamageNetIDArray	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZAbilitySystemComponent_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAbilitySystemComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAbilitySystemComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAbilitySystemComponent(USBZAbilitySystemComponent&&); \
	NO_API USBZAbilitySystemComponent(const USBZAbilitySystemComponent&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAbilitySystemComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAbilitySystemComponent(USBZAbilitySystemComponent&&); \
	NO_API USBZAbilitySystemComponent(const USBZAbilitySystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAbilitySystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAbilitySystemComponent)


#define PAYDAY3_Source_Starbreeze_Public_SBZAbilitySystemComponent_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Character() { return STRUCT_OFFSET(USBZAbilitySystemComponent, Character); } \
	FORCEINLINE static uint32 __PPO__InputToggledContainer() { return STRUCT_OFFSET(USBZAbilitySystemComponent, InputToggledContainer); } \
	FORCEINLINE static uint32 __PPO__QueuedAbilityArray() { return STRUCT_OFFSET(USBZAbilitySystemComponent, QueuedAbilityArray); } \
	FORCEINLINE static uint32 __PPO__LandingGameplayEffectClass() { return STRUCT_OFFSET(USBZAbilitySystemComponent, LandingGameplayEffectClass); } \
	FORCEINLINE static uint32 __PPO__AppliedVolumeDamageNetIDArray() { return STRUCT_OFFSET(USBZAbilitySystemComponent, AppliedVolumeDamageNetIDArray); } \
	FORCEINLINE static uint32 __PPO__AppliedVolumeDamageArray() { return STRUCT_OFFSET(USBZAbilitySystemComponent, AppliedVolumeDamageArray); } \
	FORCEINLINE static uint32 __PPO__CurrentVolumeDamageDataArray() { return STRUCT_OFFSET(USBZAbilitySystemComponent, CurrentVolumeDamageDataArray); } \
	FORCEINLINE static uint32 __PPO__LastVolumeDamageTypeUpdateTimeMap() { return STRUCT_OFFSET(USBZAbilitySystemComponent, LastVolumeDamageTypeUpdateTimeMap); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAbilitySystemComponent_h_27_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZAbilitySystemComponent_h_29_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZAbilitySystemComponent_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAbilitySystemComponent_h_29_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAbilitySystemComponent_h_29_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAbilitySystemComponent_h_29_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAbilitySystemComponent_h_29_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAbilitySystemComponent_h_29_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAbilitySystemComponent_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAbilitySystemComponent_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAbilitySystemComponent_h_29_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAbilitySystemComponent_h_29_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAbilitySystemComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAbilitySystemComponent_h_29_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAbilitySystemComponent_h_29_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAbilitySystemComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAbilitySystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAbilitySystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
