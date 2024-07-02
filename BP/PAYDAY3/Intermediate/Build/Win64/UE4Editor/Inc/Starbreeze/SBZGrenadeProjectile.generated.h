// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
struct FVector_NetQuantize;
struct FSBZExplosionResult;
struct FVector_NetQuantizeNormal;
class UPrimitiveComponent;
class AActor;
struct FVector;
#ifdef STARBREEZE_SBZGrenadeProjectile_generated_h
#error "SBZGrenadeProjectile.generated.h already included, missing '#pragma once' in SBZGrenadeProjectile.h"
#endif
#define STARBREEZE_SBZGrenadeProjectile_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZGrenadeProjectile_h_33_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZGrenadeProjectile_h_33_RPC_WRAPPERS \
	virtual void Multicast_DestroyBreakable_Implementation(FHitResult const& InBreakableHitResult); \
	virtual void Multicast_OnServerCollision_Implementation(FVector_NetQuantize const& InLocation); \
	virtual void Multicast_ReplicateExplosion_Implementation(FSBZExplosionResult const& Result); \
	virtual void Multicast_SetEquippableIndex_Implementation(int32 InIndex); \
	virtual void Multicast_SetGrenadeProjectileVelocity_Implementation(FVector_NetQuantizeNormal const& ProjectileDirection); \
 \
	DECLARE_FUNCTION(execMulticast_DestroyBreakable); \
	DECLARE_FUNCTION(execMulticast_OnServerCollision); \
	DECLARE_FUNCTION(execMulticast_ReplicateExplosion); \
	DECLARE_FUNCTION(execMulticast_SetEquippableIndex); \
	DECLARE_FUNCTION(execMulticast_SetGrenadeProjectileVelocity); \
	DECLARE_FUNCTION(execOnCollisionComponentHit); \
	DECLARE_FUNCTION(execOnOwnerEndPlay); \
	DECLARE_FUNCTION(execOnProjectileBeginOverlap); \
	DECLARE_FUNCTION(execOnProjectileBounce); \
	DECLARE_FUNCTION(execOnProjectileStopped); \
	DECLARE_FUNCTION(execOnRep_EquippableIndex);


#define PAYDAY3_Source_Starbreeze_Public_SBZGrenadeProjectile_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_DestroyBreakable_Implementation(FHitResult const& InBreakableHitResult); \
	virtual void Multicast_OnServerCollision_Implementation(FVector_NetQuantize const& InLocation); \
	virtual void Multicast_ReplicateExplosion_Implementation(FSBZExplosionResult const& Result); \
	virtual void Multicast_SetEquippableIndex_Implementation(int32 InIndex); \
	virtual void Multicast_SetGrenadeProjectileVelocity_Implementation(FVector_NetQuantizeNormal const& ProjectileDirection); \
 \
	DECLARE_FUNCTION(execMulticast_DestroyBreakable); \
	DECLARE_FUNCTION(execMulticast_OnServerCollision); \
	DECLARE_FUNCTION(execMulticast_ReplicateExplosion); \
	DECLARE_FUNCTION(execMulticast_SetEquippableIndex); \
	DECLARE_FUNCTION(execMulticast_SetGrenadeProjectileVelocity); \
	DECLARE_FUNCTION(execOnCollisionComponentHit); \
	DECLARE_FUNCTION(execOnOwnerEndPlay); \
	DECLARE_FUNCTION(execOnProjectileBeginOverlap); \
	DECLARE_FUNCTION(execOnProjectileBounce); \
	DECLARE_FUNCTION(execOnProjectileStopped); \
	DECLARE_FUNCTION(execOnRep_EquippableIndex);


#define PAYDAY3_Source_Starbreeze_Public_SBZGrenadeProjectile_h_33_EVENT_PARMS \
	struct SBZGrenadeProjectile_eventMulticast_DestroyBreakable_Parms \
	{ \
		FHitResult InBreakableHitResult; \
	}; \
	struct SBZGrenadeProjectile_eventMulticast_OnServerCollision_Parms \
	{ \
		FVector_NetQuantize InLocation; \
	}; \
	struct SBZGrenadeProjectile_eventMulticast_ReplicateExplosion_Parms \
	{ \
		FSBZExplosionResult Result; \
	}; \
	struct SBZGrenadeProjectile_eventMulticast_SetEquippableIndex_Parms \
	{ \
		int32 InIndex; \
	}; \
	struct SBZGrenadeProjectile_eventMulticast_SetGrenadeProjectileVelocity_Parms \
	{ \
		FVector_NetQuantizeNormal ProjectileDirection; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZGrenadeProjectile_h_33_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZGrenadeProjectile_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZGrenadeProjectile(); \
	friend struct Z_Construct_UClass_ASBZGrenadeProjectile_Statics; \
public: \
	DECLARE_CLASS(ASBZGrenadeProjectile, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZGrenadeProjectile) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZGrenadeProjectile*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EquippableIndex=NETFIELD_REP_START, \
		NETFIELD_REP_END=EquippableIndex	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZGrenadeProjectile_h_33_INCLASS \
private: \
	static void StaticRegisterNativesASBZGrenadeProjectile(); \
	friend struct Z_Construct_UClass_ASBZGrenadeProjectile_Statics; \
public: \
	DECLARE_CLASS(ASBZGrenadeProjectile, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZGrenadeProjectile) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZGrenadeProjectile*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EquippableIndex=NETFIELD_REP_START, \
		NETFIELD_REP_END=EquippableIndex	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZGrenadeProjectile_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZGrenadeProjectile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZGrenadeProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZGrenadeProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZGrenadeProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZGrenadeProjectile(ASBZGrenadeProjectile&&); \
	NO_API ASBZGrenadeProjectile(const ASBZGrenadeProjectile&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZGrenadeProjectile_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZGrenadeProjectile(ASBZGrenadeProjectile&&); \
	NO_API ASBZGrenadeProjectile(const ASBZGrenadeProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZGrenadeProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZGrenadeProjectile); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZGrenadeProjectile)


#define PAYDAY3_Source_Starbreeze_Public_SBZGrenadeProjectile_h_33_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MarkerAsset() { return STRUCT_OFFSET(ASBZGrenadeProjectile, MarkerAsset); } \
	FORCEINLINE static uint32 __PPO__MarkerOffset() { return STRUCT_OFFSET(ASBZGrenadeProjectile, MarkerOffset); } \
	FORCEINLINE static uint32 __PPO__MarkerActivationDelay() { return STRUCT_OFFSET(ASBZGrenadeProjectile, MarkerActivationDelay); } \
	FORCEINLINE static uint32 __PPO__EquippableIndex() { return STRUCT_OFFSET(ASBZGrenadeProjectile, EquippableIndex); } \
	FORCEINLINE static uint32 __PPO__StaticMesh() { return STRUCT_OFFSET(ASBZGrenadeProjectile, StaticMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovementComponent() { return STRUCT_OFFSET(ASBZGrenadeProjectile, ProjectileMovementComponent); } \
	FORCEINLINE static uint32 __PPO__SphereCollision() { return STRUCT_OFFSET(ASBZGrenadeProjectile, SphereCollision); } \
	FORCEINLINE static uint32 __PPO__PendingDataExplosionResult() { return STRUCT_OFFSET(ASBZGrenadeProjectile, PendingDataExplosionResult); } \
	FORCEINLINE static uint32 __PPO__OwnerCharacter() { return STRUCT_OFFSET(ASBZGrenadeProjectile, OwnerCharacter); } \
	FORCEINLINE static uint32 __PPO__Delay() { return STRUCT_OFFSET(ASBZGrenadeProjectile, Delay); } \
	FORCEINLINE static uint32 __PPO__DetonationEvent() { return STRUCT_OFFSET(ASBZGrenadeProjectile, DetonationEvent); } \
	FORCEINLINE static uint32 __PPO__FiredEvent() { return STRUCT_OFFSET(ASBZGrenadeProjectile, FiredEvent); } \
	FORCEINLINE static uint32 __PPO__DetonationEffect() { return STRUCT_OFFSET(ASBZGrenadeProjectile, DetonationEffect); } \
	FORCEINLINE static uint32 __PPO__DamageGameplayEffectClass() { return STRUCT_OFFSET(ASBZGrenadeProjectile, DamageGameplayEffectClass); } \
	FORCEINLINE static uint32 __PPO__DamageTypeClass() { return STRUCT_OFFSET(ASBZGrenadeProjectile, DamageTypeClass); } \
	FORCEINLINE static uint32 __PPO__LocalPlayerFeedback() { return STRUCT_OFFSET(ASBZGrenadeProjectile, LocalPlayerFeedback); } \
	FORCEINLINE static uint32 __PPO__LocalPlayerInstigatorFeedback() { return STRUCT_OFFSET(ASBZGrenadeProjectile, LocalPlayerInstigatorFeedback); } \
	FORCEINLINE static uint32 __PPO__PlayerFeedbackCurve() { return STRUCT_OFFSET(ASBZGrenadeProjectile, PlayerFeedbackCurve); } \
	FORCEINLINE static uint32 __PPO__Data() { return STRUCT_OFFSET(ASBZGrenadeProjectile, Data); } \
	FORCEINLINE static uint32 __PPO__RangedWeaponData() { return STRUCT_OFFSET(ASBZGrenadeProjectile, RangedWeaponData); } \
	FORCEINLINE static uint32 __PPO__bReduceBouncinessPerBounce() { return STRUCT_OFFSET(ASBZGrenadeProjectile, bReduceBouncinessPerBounce); } \
	FORCEINLINE static uint32 __PPO__BouncinessReductionValue() { return STRUCT_OFFSET(ASBZGrenadeProjectile, BouncinessReductionValue); } \
	FORCEINLINE static uint32 __PPO__MaxTimesToReduceBounciness() { return STRUCT_OFFSET(ASBZGrenadeProjectile, MaxTimesToReduceBounciness); } \
	FORCEINLINE static uint32 __PPO__MaxBounces() { return STRUCT_OFFSET(ASBZGrenadeProjectile, MaxBounces); } \
	FORCEINLINE static uint32 __PPO__bEnablePhysicsOnStopped() { return STRUCT_OFFSET(ASBZGrenadeProjectile, bEnablePhysicsOnStopped); } \
	FORCEINLINE static uint32 __PPO__bWantsLocationRotation() { return STRUCT_OFFSET(ASBZGrenadeProjectile, bWantsLocationRotation); } \
	FORCEINLINE static uint32 __PPO__PostDamagePhysicsEffectData() { return STRUCT_OFFSET(ASBZGrenadeProjectile, PostDamagePhysicsEffectData); }


#define PAYDAY3_Source_Starbreeze_Public_SBZGrenadeProjectile_h_31_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZGrenadeProjectile_h_33_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZGrenadeProjectile_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGrenadeProjectile_h_33_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGrenadeProjectile_h_33_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGrenadeProjectile_h_33_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZGrenadeProjectile_h_33_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZGrenadeProjectile_h_33_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZGrenadeProjectile_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZGrenadeProjectile_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGrenadeProjectile_h_33_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGrenadeProjectile_h_33_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGrenadeProjectile_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGrenadeProjectile_h_33_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZGrenadeProjectile_h_33_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGrenadeProjectile_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZGrenadeProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZGrenadeProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
