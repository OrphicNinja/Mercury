// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTagContainer;
struct FGameplayTag;
struct FVector;
enum class ESBZRuntimeState : uint8;
struct FSBZExplosionResult;
class AActor;
class USBZBaseInteractableComponent;
class USBZInteractorComponent;
#ifdef STARBREEZE_SBZAIDrone_generated_h
#error "SBZAIDrone.generated.h already included, missing '#pragma once' in SBZAIDrone.h"
#endif
#define STARBREEZE_SBZAIDrone_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAIDrone_h_58_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAIDrone_h_58_RPC_WRAPPERS \
	virtual void Multicast_OnKill_Implementation(); \
	virtual void Multicast_PredictedRagdollDenied_Implementation(int32 HurtReactionIndex); \
	virtual void Multicast_RemoveRuntime_Implementation(ESBZRuntimeState InRuntimeToRemove); \
	virtual void Multicast_ReplicateExplosion_Implementation(FSBZExplosionResult const& Result); \
	virtual void Multicast_SetCurrentTarget_Implementation(AActor* NewTarget); \
	virtual void Multicast_SetRuntimed_Implementation(ESBZRuntimeState InRuntimeState); \
	virtual void Multicast_StartHackingSentry_Implementation(); \
	virtual void Multicast_StopHackingSentry_Implementation(); \
	virtual void Multicast_TelegraphAttack_Implementation(bool bInIsTelegraphingAttack); \
 \
	DECLARE_FUNCTION(execGetOwnedGameplayTags); \
	DECLARE_FUNCTION(execHasAllMatchingGameplayTags); \
	DECLARE_FUNCTION(execHasAnyMatchingGameplayTags); \
	DECLARE_FUNCTION(execHasMatchingGameplayTag); \
	DECLARE_FUNCTION(execAddForce); \
	DECLARE_FUNCTION(execMulticast_OnKill); \
	DECLARE_FUNCTION(execMulticast_PredictedRagdollDenied); \
	DECLARE_FUNCTION(execMulticast_RemoveRuntime); \
	DECLARE_FUNCTION(execMulticast_ReplicateExplosion); \
	DECLARE_FUNCTION(execMulticast_SetCurrentTarget); \
	DECLARE_FUNCTION(execMulticast_SetRuntimed); \
	DECLARE_FUNCTION(execMulticast_StartHackingSentry); \
	DECLARE_FUNCTION(execMulticast_StopHackingSentry); \
	DECLARE_FUNCTION(execMulticast_TelegraphAttack); \
	DECLARE_FUNCTION(execOnAckAbortInteraction); \
	DECLARE_FUNCTION(execOnAckCompleteInteraction); \
	DECLARE_FUNCTION(execOnECMCountChanged); \
	DECLARE_FUNCTION(execOnPredictedAbortInteraction); \
	DECLARE_FUNCTION(execOnRep_IsHackingSentry); \
	DECLARE_FUNCTION(execOnRep_RuntimeState); \
	DECLARE_FUNCTION(execOnServerAbortInteraction);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIDrone_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_OnKill_Implementation(); \
	virtual void Multicast_PredictedRagdollDenied_Implementation(int32 HurtReactionIndex); \
	virtual void Multicast_RemoveRuntime_Implementation(ESBZRuntimeState InRuntimeToRemove); \
	virtual void Multicast_ReplicateExplosion_Implementation(FSBZExplosionResult const& Result); \
	virtual void Multicast_SetCurrentTarget_Implementation(AActor* NewTarget); \
	virtual void Multicast_SetRuntimed_Implementation(ESBZRuntimeState InRuntimeState); \
	virtual void Multicast_StartHackingSentry_Implementation(); \
	virtual void Multicast_StopHackingSentry_Implementation(); \
	virtual void Multicast_TelegraphAttack_Implementation(bool bInIsTelegraphingAttack); \
 \
	DECLARE_FUNCTION(execGetOwnedGameplayTags); \
	DECLARE_FUNCTION(execHasAllMatchingGameplayTags); \
	DECLARE_FUNCTION(execHasAnyMatchingGameplayTags); \
	DECLARE_FUNCTION(execHasMatchingGameplayTag); \
	DECLARE_FUNCTION(execAddForce); \
	DECLARE_FUNCTION(execMulticast_OnKill); \
	DECLARE_FUNCTION(execMulticast_PredictedRagdollDenied); \
	DECLARE_FUNCTION(execMulticast_RemoveRuntime); \
	DECLARE_FUNCTION(execMulticast_ReplicateExplosion); \
	DECLARE_FUNCTION(execMulticast_SetCurrentTarget); \
	DECLARE_FUNCTION(execMulticast_SetRuntimed); \
	DECLARE_FUNCTION(execMulticast_StartHackingSentry); \
	DECLARE_FUNCTION(execMulticast_StopHackingSentry); \
	DECLARE_FUNCTION(execMulticast_TelegraphAttack); \
	DECLARE_FUNCTION(execOnAckAbortInteraction); \
	DECLARE_FUNCTION(execOnAckCompleteInteraction); \
	DECLARE_FUNCTION(execOnECMCountChanged); \
	DECLARE_FUNCTION(execOnPredictedAbortInteraction); \
	DECLARE_FUNCTION(execOnRep_IsHackingSentry); \
	DECLARE_FUNCTION(execOnRep_RuntimeState); \
	DECLARE_FUNCTION(execOnServerAbortInteraction);


#define PAYDAY3_Source_Starbreeze_Public_SBZAIDrone_h_58_EVENT_PARMS \
	struct SBZAIDrone_eventMulticast_PredictedRagdollDenied_Parms \
	{ \
		int32 HurtReactionIndex; \
	}; \
	struct SBZAIDrone_eventMulticast_RemoveRuntime_Parms \
	{ \
		ESBZRuntimeState InRuntimeToRemove; \
	}; \
	struct SBZAIDrone_eventMulticast_ReplicateExplosion_Parms \
	{ \
		FSBZExplosionResult Result; \
	}; \
	struct SBZAIDrone_eventMulticast_SetCurrentTarget_Parms \
	{ \
		AActor* NewTarget; \
	}; \
	struct SBZAIDrone_eventMulticast_SetRuntimed_Parms \
	{ \
		ESBZRuntimeState InRuntimeState; \
	}; \
	struct SBZAIDrone_eventMulticast_TelegraphAttack_Parms \
	{ \
		bool bInIsTelegraphingAttack; \
	}; \
	struct SBZAIDrone_eventOnRuntimeStateApplied_Parms \
	{ \
		ESBZRuntimeState AppliedState; \
	}; \
	struct SBZAIDrone_eventOnRuntimeStateRemoved_Parms \
	{ \
		ESBZRuntimeState AppliedState; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZAIDrone_h_58_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZAIDrone_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZAIDrone(); \
	friend struct Z_Construct_UClass_ASBZAIDrone_Statics; \
public: \
	DECLARE_CLASS(ASBZAIDrone, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAIDrone) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZAIDrone*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TeamId=NETFIELD_REP_START, \
		RuntimeState, \
		CurrentTarget, \
		bIsHackingSentry, \
		NETFIELD_REP_END=bIsHackingSentry	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZAIDrone_h_58_INCLASS \
private: \
	static void StaticRegisterNativesASBZAIDrone(); \
	friend struct Z_Construct_UClass_ASBZAIDrone_Statics; \
public: \
	DECLARE_CLASS(ASBZAIDrone, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZAIDrone) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZAIDrone*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TeamId=NETFIELD_REP_START, \
		RuntimeState, \
		CurrentTarget, \
		bIsHackingSentry, \
		NETFIELD_REP_END=bIsHackingSentry	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZAIDrone_h_58_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZAIDrone(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAIDrone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAIDrone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAIDrone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAIDrone(ASBZAIDrone&&); \
	NO_API ASBZAIDrone(const ASBZAIDrone&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAIDrone_h_58_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZAIDrone(ASBZAIDrone&&); \
	NO_API ASBZAIDrone(const ASBZAIDrone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZAIDrone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZAIDrone); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZAIDrone)


#define PAYDAY3_Source_Starbreeze_Public_SBZAIDrone_h_58_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AttributeSet() { return STRUCT_OFFSET(ASBZAIDrone, AttributeSet); } \
	FORCEINLINE static uint32 __PPO__DestroyedEffect() { return STRUCT_OFFSET(ASBZAIDrone, DestroyedEffect); } \
	FORCEINLINE static uint32 __PPO__DestroyedEvent() { return STRUCT_OFFSET(ASBZAIDrone, DestroyedEvent); } \
	FORCEINLINE static uint32 __PPO__EquippableConfigArray() { return STRUCT_OFFSET(ASBZAIDrone, EquippableConfigArray); } \
	FORCEINLINE static uint32 __PPO__EquippableArray() { return STRUCT_OFFSET(ASBZAIDrone, EquippableArray); } \
	FORCEINLINE static uint32 __PPO__PreferredRangeBuffer() { return STRUCT_OFFSET(ASBZAIDrone, PreferredRangeBuffer); } \
	FORCEINLINE static uint32 __PPO__AbilitySystemComponent() { return STRUCT_OFFSET(ASBZAIDrone, AbilitySystemComponent); } \
	FORCEINLINE static uint32 __PPO__AbilityData() { return STRUCT_OFFSET(ASBZAIDrone, AbilityData); } \
	FORCEINLINE static uint32 __PPO__Type() { return STRUCT_OFFSET(ASBZAIDrone, Type); } \
	FORCEINLINE static uint32 __PPO__AIVisibilityNodeComputationFrequency() { return STRUCT_OFFSET(ASBZAIDrone, AIVisibilityNodeComputationFrequency); } \
	FORCEINLINE static uint32 __PPO__VoiceComponent() { return STRUCT_OFFSET(ASBZAIDrone, VoiceComponent); } \
	FORCEINLINE static uint32 __PPO__StimuliSourceComponent() { return STRUCT_OFFSET(ASBZAIDrone, StimuliSourceComponent); } \
	FORCEINLINE static uint32 __PPO__OutlineComponent() { return STRUCT_OFFSET(ASBZAIDrone, OutlineComponent); } \
	FORCEINLINE static uint32 __PPO__ShoutTarget() { return STRUCT_OFFSET(ASBZAIDrone, ShoutTarget); } \
	FORCEINLINE static uint32 __PPO__RangedWeapon() { return STRUCT_OFFSET(ASBZAIDrone, RangedWeapon); } \
	FORCEINLINE static uint32 __PPO__TeamId() { return STRUCT_OFFSET(ASBZAIDrone, TeamId); } \
	FORCEINLINE static uint32 __PPO__RangedWeaponAttachmentSocket() { return STRUCT_OFFSET(ASBZAIDrone, RangedWeaponAttachmentSocket); } \
	FORCEINLINE static uint32 __PPO__RoomVolumes() { return STRUCT_OFFSET(ASBZAIDrone, RoomVolumes); } \
	FORCEINLINE static uint32 __PPO__HackableInteractable() { return STRUCT_OFFSET(ASBZAIDrone, HackableInteractable); } \
	FORCEINLINE static uint32 __PPO__RuntimeState() { return STRUCT_OFFSET(ASBZAIDrone, RuntimeState); } \
	FORCEINLINE static uint32 __PPO__HackedFactionId() { return STRUCT_OFFSET(ASBZAIDrone, HackedFactionId); } \
	FORCEINLINE static uint32 __PPO__PlayerExplosionRange() { return STRUCT_OFFSET(ASBZAIDrone, PlayerExplosionRange); } \
	FORCEINLINE static uint32 __PPO__AIExplosionRange() { return STRUCT_OFFSET(ASBZAIDrone, AIExplosionRange); } \
	FORCEINLINE static uint32 __PPO__EMPEffectClass() { return STRUCT_OFFSET(ASBZAIDrone, EMPEffectClass); } \
	FORCEINLINE static uint32 __PPO__EMPExplodedEvent() { return STRUCT_OFFSET(ASBZAIDrone, EMPExplodedEvent); } \
	FORCEINLINE static uint32 __PPO__EMPDetonationEffect() { return STRUCT_OFFSET(ASBZAIDrone, EMPDetonationEffect); } \
	FORCEINLINE static uint32 __PPO__EMPStunDuration() { return STRUCT_OFFSET(ASBZAIDrone, EMPStunDuration); } \
	FORCEINLINE static uint32 __PPO__TacticalFlashEffectClass() { return STRUCT_OFFSET(ASBZAIDrone, TacticalFlashEffectClass); } \
	FORCEINLINE static uint32 __PPO__TacticalFlashPlayerFeedback() { return STRUCT_OFFSET(ASBZAIDrone, TacticalFlashPlayerFeedback); } \
	FORCEINLINE static uint32 __PPO__GuaranteedFlashDistance() { return STRUCT_OFFSET(ASBZAIDrone, GuaranteedFlashDistance); } \
	FORCEINLINE static uint32 __PPO__MaximumAngleDifference() { return STRUCT_OFFSET(ASBZAIDrone, MaximumAngleDifference); } \
	FORCEINLINE static uint32 __PPO__FlashPlayerFalloffExponent() { return STRUCT_OFFSET(ASBZAIDrone, FlashPlayerFalloffExponent); } \
	FORCEINLINE static uint32 __PPO__TacticalFlashFeedbackCurve() { return STRUCT_OFFSET(ASBZAIDrone, TacticalFlashFeedbackCurve); } \
	FORCEINLINE static uint32 __PPO__TacticalFlashTag() { return STRUCT_OFFSET(ASBZAIDrone, TacticalFlashTag); } \
	FORCEINLINE static uint32 __PPO__FlashTagEffectDuration() { return STRUCT_OFFSET(ASBZAIDrone, FlashTagEffectDuration); } \
	FORCEINLINE static uint32 __PPO__TacticalFlashRange() { return STRUCT_OFFSET(ASBZAIDrone, TacticalFlashRange); } \
	FORCEINLINE static uint32 __PPO__BuffBlockMinThreshold() { return STRUCT_OFFSET(ASBZAIDrone, BuffBlockMinThreshold); } \
	FORCEINLINE static uint32 __PPO__BuffBlockCooldownAmount() { return STRUCT_OFFSET(ASBZAIDrone, BuffBlockCooldownAmount); } \
	FORCEINLINE static uint32 __PPO__HurtReactionData() { return STRUCT_OFFSET(ASBZAIDrone, HurtReactionData); } \
	FORCEINLINE static uint32 __PPO__RuntimedComment() { return STRUCT_OFFSET(ASBZAIDrone, RuntimedComment); } \
	FORCEINLINE static uint32 __PPO__FireWeaponComment() { return STRUCT_OFFSET(ASBZAIDrone, FireWeaponComment); } \
	FORCEINLINE static uint32 __PPO__ExplosionInstigator() { return STRUCT_OFFSET(ASBZAIDrone, ExplosionInstigator); } \
	FORCEINLINE static uint32 __PPO__CurrentTarget() { return STRUCT_OFFSET(ASBZAIDrone, CurrentTarget); } \
	FORCEINLINE static uint32 __PPO__StatisticsMarkDrone() { return STRUCT_OFFSET(ASBZAIDrone, StatisticsMarkDrone); } \
	FORCEINLINE static uint32 __PPO__StatisticsMarkEnemy() { return STRUCT_OFFSET(ASBZAIDrone, StatisticsMarkEnemy); } \
	FORCEINLINE static uint32 __PPO__StatisticsMarkEnemyCamera() { return STRUCT_OFFSET(ASBZAIDrone, StatisticsMarkEnemyCamera); } \
	FORCEINLINE static uint32 __PPO__StatisticsMarkEnemyMicroCamera() { return STRUCT_OFFSET(ASBZAIDrone, StatisticsMarkEnemyMicroCamera); } \
	FORCEINLINE static uint32 __PPO__AIDamageModifier() { return STRUCT_OFFSET(ASBZAIDrone, AIDamageModifier); } \
	FORCEINLINE static uint32 __PPO__MarkedGameplayEffectClass() { return STRUCT_OFFSET(ASBZAIDrone, MarkedGameplayEffectClass); } \
	FORCEINLINE static uint32 __PPO__MarkedOutline() { return STRUCT_OFFSET(ASBZAIDrone, MarkedOutline); } \
	FORCEINLINE static uint32 __PPO__AKComponent() { return STRUCT_OFFSET(ASBZAIDrone, AKComponent); } \
	FORCEINLINE static uint32 __PPO__SentryHackDamageAmount() { return STRUCT_OFFSET(ASBZAIDrone, SentryHackDamageAmount); } \
	FORCEINLINE static uint32 __PPO__SentryHackDamageInterval() { return STRUCT_OFFSET(ASBZAIDrone, SentryHackDamageInterval); } \
	FORCEINLINE static uint32 __PPO__bShouldTelegraphAttack() { return STRUCT_OFFSET(ASBZAIDrone, bShouldTelegraphAttack); } \
	FORCEINLINE static uint32 __PPO__bIsHackingSentry() { return STRUCT_OFFSET(ASBZAIDrone, bIsHackingSentry); } \
	FORCEINLINE static uint32 __PPO__HackingSentryEffectComponent() { return STRUCT_OFFSET(ASBZAIDrone, HackingSentryEffectComponent); } \
	FORCEINLINE static uint32 __PPO__HackingSentryEffect() { return STRUCT_OFFSET(ASBZAIDrone, HackingSentryEffect); } \
	FORCEINLINE static uint32 __PPO__TraceEffectDistanceName() { return STRUCT_OFFSET(ASBZAIDrone, TraceEffectDistanceName); } \
	FORCEINLINE static uint32 __PPO__TraceEffectStunDurationName() { return STRUCT_OFFSET(ASBZAIDrone, TraceEffectStunDurationName); } \
	FORCEINLINE static uint32 __PPO__TraceEndBone() { return STRUCT_OFFSET(ASBZAIDrone, TraceEndBone); } \
	FORCEINLINE static uint32 __PPO__HackingSentryEventStart() { return STRUCT_OFFSET(ASBZAIDrone, HackingSentryEventStart); } \
	FORCEINLINE static uint32 __PPO__HackingSentryEventStop() { return STRUCT_OFFSET(ASBZAIDrone, HackingSentryEventStop); }


#define PAYDAY3_Source_Starbreeze_Public_SBZAIDrone_h_56_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZAIDrone_h_58_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIDrone_h_58_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIDrone_h_58_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIDrone_h_58_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIDrone_h_58_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIDrone_h_58_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIDrone_h_58_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIDrone_h_58_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAIDrone_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAIDrone_h_58_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAIDrone_h_58_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAIDrone_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIDrone_h_58_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIDrone_h_58_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAIDrone_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZAIDrone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAIDrone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
