// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FQuat;
struct FRotator;
struct FSBZExplosionResult;
class AActor;
class USBZBaseInteractableComponent;
class USBZInteractorComponent;
class APawn;
#ifdef STARBREEZE_SBZSentryGun_generated_h
#error "SBZSentryGun.generated.h already included, missing '#pragma once' in SBZSentryGun.h"
#endif
#define STARBREEZE_SBZSentryGun_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSentryGun_h_42_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSentryGun_h_42_RPC_WRAPPERS \
	virtual void Multicast_Fall_Implementation(FVector const& InStartLocation, FVector const& InTargetLocation, FQuat const& InTargetQuat); \
	virtual void Multicast_ReachedTargetLocation_Implementation(FVector const& InTargetLocation, FRotator const& InTargetRotation); \
	virtual void Multicast_ReplicateExplosion_Implementation(FSBZExplosionResult const& Result); \
	virtual void Multicast_SetCurrentTarget_Implementation(AActor* NewCurrentTarget); \
 \
	DECLARE_FUNCTION(execMulticast_Fall); \
	DECLARE_FUNCTION(execMulticast_ReachedTargetLocation); \
	DECLARE_FUNCTION(execMulticast_ReplicateExplosion); \
	DECLARE_FUNCTION(execMulticast_SetCurrentTarget); \
	DECLARE_FUNCTION(execOnAckCompleteInteraction); \
	DECLARE_FUNCTION(execOnOwnerEndPlay); \
	DECLARE_FUNCTION(execOnParentActorEndPlay); \
	DECLARE_FUNCTION(execOnRep_OwnerPlayerState); \
	DECLARE_FUNCTION(execOnRep_TargetLocation); \
	DECLARE_FUNCTION(execOnRep_YawRotation); \
	DECLARE_FUNCTION(execOnSentryEnemyMarked); \
	DECLARE_FUNCTION(execOnServerCompleteInteraction);


#define PAYDAY3_Source_Starbreeze_Public_SBZSentryGun_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_Fall_Implementation(FVector const& InStartLocation, FVector const& InTargetLocation, FQuat const& InTargetQuat); \
	virtual void Multicast_ReachedTargetLocation_Implementation(FVector const& InTargetLocation, FRotator const& InTargetRotation); \
	virtual void Multicast_ReplicateExplosion_Implementation(FSBZExplosionResult const& Result); \
	virtual void Multicast_SetCurrentTarget_Implementation(AActor* NewCurrentTarget); \
 \
	DECLARE_FUNCTION(execMulticast_Fall); \
	DECLARE_FUNCTION(execMulticast_ReachedTargetLocation); \
	DECLARE_FUNCTION(execMulticast_ReplicateExplosion); \
	DECLARE_FUNCTION(execMulticast_SetCurrentTarget); \
	DECLARE_FUNCTION(execOnAckCompleteInteraction); \
	DECLARE_FUNCTION(execOnOwnerEndPlay); \
	DECLARE_FUNCTION(execOnParentActorEndPlay); \
	DECLARE_FUNCTION(execOnRep_OwnerPlayerState); \
	DECLARE_FUNCTION(execOnRep_TargetLocation); \
	DECLARE_FUNCTION(execOnRep_YawRotation); \
	DECLARE_FUNCTION(execOnSentryEnemyMarked); \
	DECLARE_FUNCTION(execOnServerCompleteInteraction);


#define PAYDAY3_Source_Starbreeze_Public_SBZSentryGun_h_42_EVENT_PARMS \
	struct SBZSentryGun_eventMulticast_Fall_Parms \
	{ \
		FVector InStartLocation; \
		FVector InTargetLocation; \
		FQuat InTargetQuat; \
	}; \
	struct SBZSentryGun_eventMulticast_ReachedTargetLocation_Parms \
	{ \
		FVector InTargetLocation; \
		FRotator InTargetRotation; \
	}; \
	struct SBZSentryGun_eventMulticast_ReplicateExplosion_Parms \
	{ \
		FSBZExplosionResult Result; \
	}; \
	struct SBZSentryGun_eventMulticast_SetCurrentTarget_Parms \
	{ \
		AActor* NewCurrentTarget; \
	}; \
	struct SBZSentryGun_eventOnOverheatDamageTaken_Parms \
	{ \
		float InHealth; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZSentryGun_h_42_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZSentryGun_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZSentryGun(); \
	friend struct Z_Construct_UClass_ASBZSentryGun_Statics; \
public: \
	DECLARE_CLASS(ASBZSentryGun, ASBZArmedPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZSentryGun) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZSentryGun*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		YawRotation=NETFIELD_REP_START, \
		CurrentScanTargetDirection, \
		OwnerPlayerState, \
		CurrentSentryRotation, \
		CurrentSentryRotationCooldown, \
		TargetLocation, \
		NETFIELD_REP_END=TargetLocation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZSentryGun_h_42_INCLASS \
private: \
	static void StaticRegisterNativesASBZSentryGun(); \
	friend struct Z_Construct_UClass_ASBZSentryGun_Statics; \
public: \
	DECLARE_CLASS(ASBZSentryGun, ASBZArmedPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZSentryGun) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZSentryGun*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		YawRotation=NETFIELD_REP_START, \
		CurrentScanTargetDirection, \
		OwnerPlayerState, \
		CurrentSentryRotation, \
		CurrentSentryRotationCooldown, \
		TargetLocation, \
		NETFIELD_REP_END=TargetLocation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZSentryGun_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZSentryGun(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZSentryGun) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZSentryGun); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZSentryGun); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZSentryGun(ASBZSentryGun&&); \
	NO_API ASBZSentryGun(const ASBZSentryGun&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSentryGun_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZSentryGun(ASBZSentryGun&&); \
	NO_API ASBZSentryGun(const ASBZSentryGun&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZSentryGun); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZSentryGun); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZSentryGun)


#define PAYDAY3_Source_Starbreeze_Public_SBZSentryGun_h_42_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FireCooldown() { return STRUCT_OFFSET(ASBZSentryGun, FireCooldown); } \
	FORCEINLINE static uint32 __PPO__FireTime() { return STRUCT_OFFSET(ASBZSentryGun, FireTime); } \
	FORCEINLINE static uint32 __PPO__YawRotation() { return STRUCT_OFFSET(ASBZSentryGun, YawRotation); } \
	FORCEINLINE static uint32 __PPO__RotationCooldown() { return STRUCT_OFFSET(ASBZSentryGun, RotationCooldown); } \
	FORCEINLINE static uint32 __PPO__RotationSpeed() { return STRUCT_OFFSET(ASBZSentryGun, RotationSpeed); } \
	FORCEINLINE static uint32 __PPO__SelfOverheatDamagePerShot() { return STRUCT_OFFSET(ASBZSentryGun, SelfOverheatDamagePerShot); } \
	FORCEINLINE static uint32 __PPO__DeployMontage() { return STRUCT_OFFSET(ASBZSentryGun, DeployMontage); } \
	FORCEINLINE static uint32 __PPO__CurrentTarget() { return STRUCT_OFFSET(ASBZSentryGun, CurrentTarget); } \
	FORCEINLINE static uint32 __PPO__LastTarget() { return STRUCT_OFFSET(ASBZSentryGun, LastTarget); } \
	FORCEINLINE static uint32 __PPO__CurrentMarkedTarget() { return STRUCT_OFFSET(ASBZSentryGun, CurrentMarkedTarget); } \
	FORCEINLINE static uint32 __PPO__CurrentScanTargetDirection() { return STRUCT_OFFSET(ASBZSentryGun, CurrentScanTargetDirection); } \
	FORCEINLINE static uint32 __PPO__AttributeSet() { return STRUCT_OFFSET(ASBZSentryGun, AttributeSet); } \
	FORCEINLINE static uint32 __PPO__AudioComponent() { return STRUCT_OFFSET(ASBZSentryGun, AudioComponent); } \
	FORCEINLINE static uint32 __PPO__RotationEvent() { return STRUCT_OFFSET(ASBZSentryGun, RotationEvent); } \
	FORCEINLINE static uint32 __PPO__RotationStopEvent() { return STRUCT_OFFSET(ASBZSentryGun, RotationStopEvent); } \
	FORCEINLINE static uint32 __PPO__OverheatEvent() { return STRUCT_OFFSET(ASBZSentryGun, OverheatEvent); } \
	FORCEINLINE static uint32 __PPO__DetonationEvent() { return STRUCT_OFFSET(ASBZSentryGun, DetonationEvent); } \
	FORCEINLINE static uint32 __PPO__Interactable() { return STRUCT_OFFSET(ASBZSentryGun, Interactable); } \
	FORCEINLINE static uint32 __PPO__OwnerPlayerState() { return STRUCT_OFFSET(ASBZSentryGun, OwnerPlayerState); } \
	FORCEINLINE static uint32 __PPO__SkeletalMeshComponent() { return STRUCT_OFFSET(ASBZSentryGun, SkeletalMeshComponent); } \
	FORCEINLINE static uint32 __PPO__CurrentSentryRotation() { return STRUCT_OFFSET(ASBZSentryGun, CurrentSentryRotation); } \
	FORCEINLINE static uint32 __PPO__LastSentryRotation() { return STRUCT_OFFSET(ASBZSentryGun, LastSentryRotation); } \
	FORCEINLINE static uint32 __PPO__CurrentSentryRotationCooldown() { return STRUCT_OFFSET(ASBZSentryGun, CurrentSentryRotationCooldown); } \
	FORCEINLINE static uint32 __PPO__LocallyControlledOutline() { return STRUCT_OFFSET(ASBZSentryGun, LocallyControlledOutline); } \
	FORCEINLINE static uint32 __PPO__ExplosionRange() { return STRUCT_OFFSET(ASBZSentryGun, ExplosionRange); } \
	FORCEINLINE static uint32 __PPO__DetonationEffect() { return STRUCT_OFFSET(ASBZSentryGun, DetonationEffect); } \
	FORCEINLINE static uint32 __PPO__DamageGameplayEffectClass() { return STRUCT_OFFSET(ASBZSentryGun, DamageGameplayEffectClass); } \
	FORCEINLINE static uint32 __PPO__DamageTypeClass() { return STRUCT_OFFSET(ASBZSentryGun, DamageTypeClass); } \
	FORCEINLINE static uint32 __PPO__LocalplayerFeedback() { return STRUCT_OFFSET(ASBZSentryGun, LocalplayerFeedback); } \
	FORCEINLINE static uint32 __PPO__PlayerFeedbackCurve() { return STRUCT_OFFSET(ASBZSentryGun, PlayerFeedbackCurve); } \
	FORCEINLINE static uint32 __PPO__HurtReactionData() { return STRUCT_OFFSET(ASBZSentryGun, HurtReactionData); } \
	FORCEINLINE static uint32 __PPO__DamageDistanceArray() { return STRUCT_OFFSET(ASBZSentryGun, DamageDistanceArray); } \
	FORCEINLINE static uint32 __PPO__FriendlyPlayerDamageScale() { return STRUCT_OFFSET(ASBZSentryGun, FriendlyPlayerDamageScale); } \
	FORCEINLINE static uint32 __PPO__bUseInstigatorPlayerDamageScale() { return STRUCT_OFFSET(ASBZSentryGun, bUseInstigatorPlayerDamageScale); } \
	FORCEINLINE static uint32 __PPO__InstigatorPlayerDamageScale() { return STRUCT_OFFSET(ASBZSentryGun, InstigatorPlayerDamageScale); } \
	FORCEINLINE static uint32 __PPO__ExplosionArmorPenetration() { return STRUCT_OFFSET(ASBZSentryGun, ExplosionArmorPenetration); } \
	FORCEINLINE static uint32 __PPO__PostDamagePhysicsEffectData() { return STRUCT_OFFSET(ASBZSentryGun, PostDamagePhysicsEffectData); } \
	FORCEINLINE static uint32 __PPO__OutOfBoundsBoxComponent() { return STRUCT_OFFSET(ASBZSentryGun, OutOfBoundsBoxComponent); } \
	FORCEINLINE static uint32 __PPO__BoxComponent() { return STRUCT_OFFSET(ASBZSentryGun, BoxComponent); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovementComponent() { return STRUCT_OFFSET(ASBZSentryGun, ProjectileMovementComponent); } \
	FORCEINLINE static uint32 __PPO__InvalidTargetTags() { return STRUCT_OFFSET(ASBZSentryGun, InvalidTargetTags); } \
	FORCEINLINE static uint32 __PPO__TargetLocation() { return STRUCT_OFFSET(ASBZSentryGun, TargetLocation); } \
	FORCEINLINE static uint32 __PPO__HackingDrone() { return STRUCT_OFFSET(ASBZSentryGun, HackingDrone); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSentryGun_h_40_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZSentryGun_h_42_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZSentryGun_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSentryGun_h_42_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSentryGun_h_42_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSentryGun_h_42_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSentryGun_h_42_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSentryGun_h_42_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSentryGun_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSentryGun_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSentryGun_h_42_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSentryGun_h_42_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSentryGun_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSentryGun_h_42_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSentryGun_h_42_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSentryGun_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZSentryGun>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSentryGun_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
