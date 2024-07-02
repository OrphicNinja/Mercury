// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUniqueNetIdRepl;
class ASBZCharacter;
enum class ESBZDifficulty : uint8;
enum class ESBZEndMissionResult : uint8;
struct FSBZEndMissionResultData;
class UObject;
struct FRandomStream;
class ASBZMissionState;
enum class ESBZSecurityCompany : uint8;
struct FGameplayTag;
class USBZVariationSetData;
struct FGameplayTagContainer;
enum class ESBZMilestoneType : uint8;
class ASBZPowerUp;
class AActor;
struct FSBZPlayerStateRemovedEvent;
struct FSBZDamageEvent;
#ifdef STARBREEZE_SBZMissionState_generated_h
#error "SBZMissionState.generated.h already included, missing '#pragma once' in SBZMissionState.h"
#endif
#define STARBREEZE_SBZMissionState_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMissionState_h_54_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMissionState_h_54_RPC_WRAPPERS \
	virtual void Multicast_MissionEnd_Implementation(const int32 OutroVariation); \
	virtual void Multicast_MissionResult_Implementation(FSBZEndMissionResultData const& InMissionResultData); \
	virtual void Multicast_OnAmmoSpecialistHighGrainSkillActivated_Implementation(); \
	virtual void Multicast_OnAmmoSpecialistHighGrainSkillDeactivated_Implementation(); \
	virtual void Multicast_SetBlockedBagMarkers_Implementation(FGameplayTagContainer const& InBlockedBagMarkers); \
	virtual void Multicast_SetEscapeTimeLeft_Implementation(const int32 NewTime); \
	virtual void Multicast_SetEscapeVolumeData_Implementation(const uint8 InPlayersInVolume, const uint8 InTotal); \
	virtual void Multicast_SkipIntroSequence_Implementation(); \
	virtual void Multicast_StartOverkillCooldown_Implementation(); \
	virtual void NotifyClientPassedMilestone_Implementation(ESBZMilestoneType MilestoneType, const FString& MilestoneName); \
 \
	DECLARE_FUNCTION(execAddPreplanningAsset); \
	DECLARE_FUNCTION(execApplyPreplanningAssets); \
	DECLARE_FUNCTION(execGetCharacterSeed); \
	DECLARE_FUNCTION(execGetDifficulty); \
	DECLARE_FUNCTION(execGetDifficultyIdx); \
	DECLARE_FUNCTION(execGetMissionResult); \
	DECLARE_FUNCTION(execGetMissionResultData); \
	DECLARE_FUNCTION(execGetMissionTime); \
	DECLARE_FUNCTION(execGetMixedRandomSeed); \
	DECLARE_FUNCTION(execGetMixedRandomStream); \
	DECLARE_FUNCTION(execGetRandomSeed); \
	DECLARE_FUNCTION(execGetSBZMissionState); \
	DECLARE_FUNCTION(execGetSecurityCompanies); \
	DECLARE_FUNCTION(execHandleSharedKeyItemTagChanged); \
	DECLARE_FUNCTION(execHasAttributedAllVariations); \
	DECLARE_FUNCTION(execHasPreplanningTag); \
	DECLARE_FUNCTION(execHasSharedKeyItemTag); \
	DECLARE_FUNCTION(execIsFBIActive); \
	DECLARE_FUNCTION(execIsTutorialLevel); \
	DECLARE_FUNCTION(execMulticast_MissionEnd); \
	DECLARE_FUNCTION(execMulticast_MissionResult); \
	DECLARE_FUNCTION(execMulticast_OnAmmoSpecialistHighGrainSkillActivated); \
	DECLARE_FUNCTION(execMulticast_OnAmmoSpecialistHighGrainSkillDeactivated); \
	DECLARE_FUNCTION(execMulticast_SetBlockedBagMarkers); \
	DECLARE_FUNCTION(execMulticast_SetEscapeTimeLeft); \
	DECLARE_FUNCTION(execMulticast_SetEscapeVolumeData); \
	DECLARE_FUNCTION(execMulticast_SkipIntroSequence); \
	DECLARE_FUNCTION(execMulticast_StartOverkillCooldown); \
	DECLARE_FUNCTION(execNotifyClientPassedMilestone); \
	DECLARE_FUNCTION(execOnActionPhaseExited); \
	DECLARE_FUNCTION(execOnActionPhaseStarted); \
	DECLARE_FUNCTION(execOnAmmoSpecialistHighGrainSkillTimeChanged); \
	DECLARE_FUNCTION(execOnBlackScreenStarted); \
	DECLARE_FUNCTION(execOnRep_BlockedBagMarkers); \
	DECLARE_FUNCTION(execOnRep_Difficulty); \
	DECLARE_FUNCTION(execOnRep_EscapeTimeLeft); \
	DECLARE_FUNCTION(execOnRep_IsIntroSequenceSkipped); \
	DECLARE_FUNCTION(execOnRep_PlayersInEscapeVolume); \
	DECLARE_FUNCTION(execOnRep_PlayersRequiredInEscapeVolume); \
	DECLARE_FUNCTION(execOnRep_PreplanningAssetsApplied); \
	DECLARE_FUNCTION(execOnRep_RandomSeed); \
	DECLARE_FUNCTION(execOnRep_ServerChangelist); \
	DECLARE_FUNCTION(execOnSecurityCompaniesChanged); \
	DECLARE_FUNCTION(execOnServerPowerUpPickedUp); \
	DECLARE_FUNCTION(execOnStandaloneNetIDEndPlay); \
	DECLARE_FUNCTION(execPlayerStateRemovedDuringEndMission); \
	DECLARE_FUNCTION(execRemovePreplanningAsset); \
	DECLARE_FUNCTION(execResetPreplanningAssets); \
	DECLARE_FUNCTION(execRewardCompleteExperienceMilestone); \
	DECLARE_FUNCTION(execRewardCompleteExperienceObjective); \
	DECLARE_FUNCTION(execServerPostOnTakenDamageEvent);


#define PAYDAY3_Source_Starbreeze_Public_SBZMissionState_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_MissionEnd_Implementation(const int32 OutroVariation); \
	virtual void Multicast_MissionResult_Implementation(FSBZEndMissionResultData const& InMissionResultData); \
	virtual void Multicast_OnAmmoSpecialistHighGrainSkillActivated_Implementation(); \
	virtual void Multicast_OnAmmoSpecialistHighGrainSkillDeactivated_Implementation(); \
	virtual void Multicast_SetBlockedBagMarkers_Implementation(FGameplayTagContainer const& InBlockedBagMarkers); \
	virtual void Multicast_SetEscapeTimeLeft_Implementation(const int32 NewTime); \
	virtual void Multicast_SetEscapeVolumeData_Implementation(const uint8 InPlayersInVolume, const uint8 InTotal); \
	virtual void Multicast_SkipIntroSequence_Implementation(); \
	virtual void Multicast_StartOverkillCooldown_Implementation(); \
	virtual void NotifyClientPassedMilestone_Implementation(ESBZMilestoneType MilestoneType, const FString& MilestoneName); \
 \
	DECLARE_FUNCTION(execAddPreplanningAsset); \
	DECLARE_FUNCTION(execApplyPreplanningAssets); \
	DECLARE_FUNCTION(execGetCharacterSeed); \
	DECLARE_FUNCTION(execGetDifficulty); \
	DECLARE_FUNCTION(execGetDifficultyIdx); \
	DECLARE_FUNCTION(execGetMissionResult); \
	DECLARE_FUNCTION(execGetMissionResultData); \
	DECLARE_FUNCTION(execGetMissionTime); \
	DECLARE_FUNCTION(execGetMixedRandomSeed); \
	DECLARE_FUNCTION(execGetMixedRandomStream); \
	DECLARE_FUNCTION(execGetRandomSeed); \
	DECLARE_FUNCTION(execGetSBZMissionState); \
	DECLARE_FUNCTION(execGetSecurityCompanies); \
	DECLARE_FUNCTION(execHandleSharedKeyItemTagChanged); \
	DECLARE_FUNCTION(execHasAttributedAllVariations); \
	DECLARE_FUNCTION(execHasPreplanningTag); \
	DECLARE_FUNCTION(execHasSharedKeyItemTag); \
	DECLARE_FUNCTION(execIsFBIActive); \
	DECLARE_FUNCTION(execIsTutorialLevel); \
	DECLARE_FUNCTION(execMulticast_MissionEnd); \
	DECLARE_FUNCTION(execMulticast_MissionResult); \
	DECLARE_FUNCTION(execMulticast_OnAmmoSpecialistHighGrainSkillActivated); \
	DECLARE_FUNCTION(execMulticast_OnAmmoSpecialistHighGrainSkillDeactivated); \
	DECLARE_FUNCTION(execMulticast_SetBlockedBagMarkers); \
	DECLARE_FUNCTION(execMulticast_SetEscapeTimeLeft); \
	DECLARE_FUNCTION(execMulticast_SetEscapeVolumeData); \
	DECLARE_FUNCTION(execMulticast_SkipIntroSequence); \
	DECLARE_FUNCTION(execMulticast_StartOverkillCooldown); \
	DECLARE_FUNCTION(execNotifyClientPassedMilestone); \
	DECLARE_FUNCTION(execOnActionPhaseExited); \
	DECLARE_FUNCTION(execOnActionPhaseStarted); \
	DECLARE_FUNCTION(execOnAmmoSpecialistHighGrainSkillTimeChanged); \
	DECLARE_FUNCTION(execOnBlackScreenStarted); \
	DECLARE_FUNCTION(execOnRep_BlockedBagMarkers); \
	DECLARE_FUNCTION(execOnRep_Difficulty); \
	DECLARE_FUNCTION(execOnRep_EscapeTimeLeft); \
	DECLARE_FUNCTION(execOnRep_IsIntroSequenceSkipped); \
	DECLARE_FUNCTION(execOnRep_PlayersInEscapeVolume); \
	DECLARE_FUNCTION(execOnRep_PlayersRequiredInEscapeVolume); \
	DECLARE_FUNCTION(execOnRep_PreplanningAssetsApplied); \
	DECLARE_FUNCTION(execOnRep_RandomSeed); \
	DECLARE_FUNCTION(execOnRep_ServerChangelist); \
	DECLARE_FUNCTION(execOnSecurityCompaniesChanged); \
	DECLARE_FUNCTION(execOnServerPowerUpPickedUp); \
	DECLARE_FUNCTION(execOnStandaloneNetIDEndPlay); \
	DECLARE_FUNCTION(execPlayerStateRemovedDuringEndMission); \
	DECLARE_FUNCTION(execRemovePreplanningAsset); \
	DECLARE_FUNCTION(execResetPreplanningAssets); \
	DECLARE_FUNCTION(execRewardCompleteExperienceMilestone); \
	DECLARE_FUNCTION(execRewardCompleteExperienceObjective); \
	DECLARE_FUNCTION(execServerPostOnTakenDamageEvent);


#define PAYDAY3_Source_Starbreeze_Public_SBZMissionState_h_54_EVENT_PARMS \
	struct SBZMissionState_eventBP_OnHideAllOutlinesChanged_Parms \
	{ \
		bool bIsHidden; \
	}; \
	struct SBZMissionState_eventMulticast_MissionEnd_Parms \
	{ \
		int32 OutroVariation; \
	}; \
	struct SBZMissionState_eventMulticast_MissionResult_Parms \
	{ \
		FSBZEndMissionResultData InMissionResultData; \
	}; \
	struct SBZMissionState_eventMulticast_SetBlockedBagMarkers_Parms \
	{ \
		FGameplayTagContainer InBlockedBagMarkers; \
	}; \
	struct SBZMissionState_eventMulticast_SetEscapeTimeLeft_Parms \
	{ \
		int32 NewTime; \
	}; \
	struct SBZMissionState_eventMulticast_SetEscapeVolumeData_Parms \
	{ \
		uint8 InPlayersInVolume; \
		uint8 InTotal; \
	}; \
	struct SBZMissionState_eventNotifyClientPassedMilestone_Parms \
	{ \
		ESBZMilestoneType MilestoneType; \
		FString MilestoneName; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZMissionState_h_54_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZMissionState_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZMissionState(); \
	friend struct Z_Construct_UClass_ASBZMissionState_Statics; \
public: \
	DECLARE_CLASS(ASBZMissionState, ASBZGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZMissionState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RandomSeed=NETFIELD_REP_START, \
		ServerChangelist, \
		Difficulty, \
		SecurityCompanies, \
		ReplicatedSharedKeyItemTagCount, \
		MissionStartTime, \
		BlockedBagMarkers, \
		PlayersInEscapeVolume, \
		PlayersRequiredInEscapeVolume, \
		EscapeTimeLeft, \
		PreplanningAssets, \
		AmmoSpecialistHighGrainSkillTime, \
		bIsIntroSequenceSkipped, \
		NETFIELD_REP_END=bIsIntroSequenceSkipped	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZMissionState_h_54_INCLASS \
private: \
	static void StaticRegisterNativesASBZMissionState(); \
	friend struct Z_Construct_UClass_ASBZMissionState_Statics; \
public: \
	DECLARE_CLASS(ASBZMissionState, ASBZGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZMissionState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RandomSeed=NETFIELD_REP_START, \
		ServerChangelist, \
		Difficulty, \
		SecurityCompanies, \
		ReplicatedSharedKeyItemTagCount, \
		MissionStartTime, \
		BlockedBagMarkers, \
		PlayersInEscapeVolume, \
		PlayersRequiredInEscapeVolume, \
		EscapeTimeLeft, \
		PreplanningAssets, \
		AmmoSpecialistHighGrainSkillTime, \
		bIsIntroSequenceSkipped, \
		NETFIELD_REP_END=bIsIntroSequenceSkipped	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZMissionState_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZMissionState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZMissionState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZMissionState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZMissionState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZMissionState(ASBZMissionState&&); \
	NO_API ASBZMissionState(const ASBZMissionState&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMissionState_h_54_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZMissionState(ASBZMissionState&&); \
	NO_API ASBZMissionState(const ASBZMissionState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZMissionState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZMissionState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZMissionState)


#define PAYDAY3_Source_Starbreeze_Public_SBZMissionState_h_54_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RandomSeed() { return STRUCT_OFFSET(ASBZMissionState, RandomSeed); } \
	FORCEINLINE static uint32 __PPO__ServerChangelist() { return STRUCT_OFFSET(ASBZMissionState, ServerChangelist); } \
	FORCEINLINE static uint32 __PPO__Difficulty() { return STRUCT_OFFSET(ASBZMissionState, Difficulty); } \
	FORCEINLINE static uint32 __PPO__SecurityCompanies() { return STRUCT_OFFSET(ASBZMissionState, SecurityCompanies); } \
	FORCEINLINE static uint32 __PPO__ReplicatedSharedKeyItemTagCount() { return STRUCT_OFFSET(ASBZMissionState, ReplicatedSharedKeyItemTagCount); } \
	FORCEINLINE static uint32 __PPO__PredictionTimeOutSeconds() { return STRUCT_OFFSET(ASBZMissionState, PredictionTimeOutSeconds); } \
	FORCEINLINE static uint32 __PPO__ServerUnblockAbilityEarlierSeconds() { return STRUCT_OFFSET(ASBZMissionState, ServerUnblockAbilityEarlierSeconds); } \
	FORCEINLINE static uint32 __PPO__MissionStartTime() { return STRUCT_OFFSET(ASBZMissionState, MissionStartTime); } \
	FORCEINLINE static uint32 __PPO__SharedKeyItemDataMap() { return STRUCT_OFFSET(ASBZMissionState, SharedKeyItemDataMap); } \
	FORCEINLINE static uint32 __PPO__BagManager() { return STRUCT_OFFSET(ASBZMissionState, BagManager); } \
	FORCEINLINE static uint32 __PPO__AICrewStateArray() { return STRUCT_OFFSET(ASBZMissionState, AICrewStateArray); } \
	FORCEINLINE static uint32 __PPO__RequestedOverkillWeaponConfig() { return STRUCT_OFFSET(ASBZMissionState, RequestedOverkillWeaponConfig); } \
	FORCEINLINE static uint32 __PPO__BlockedBagMarkers() { return STRUCT_OFFSET(ASBZMissionState, BlockedBagMarkers); } \
	FORCEINLINE static uint32 __PPO__SoundBanks() { return STRUCT_OFFSET(ASBZMissionState, SoundBanks); } \
	FORCEINLINE static uint32 __PPO__DialogManager() { return STRUCT_OFFSET(ASBZMissionState, DialogManager); } \
	FORCEINLINE static uint32 __PPO__AgentManager() { return STRUCT_OFFSET(ASBZMissionState, AgentManager); } \
	FORCEINLINE static uint32 __PPO__RagdollSyncManager() { return STRUCT_OFFSET(ASBZMissionState, RagdollSyncManager); } \
	FORCEINLINE static uint32 __PPO__VehicleManager() { return STRUCT_OFFSET(ASBZMissionState, VehicleManager); } \
	FORCEINLINE static uint32 __PPO__MarkerManager() { return STRUCT_OFFSET(ASBZMissionState, MarkerManager); } \
	FORCEINLINE static uint32 __PPO__LifeActionManager() { return STRUCT_OFFSET(ASBZMissionState, LifeActionManager); } \
	FORCEINLINE static uint32 __PPO__ActorPoolManager() { return STRUCT_OFFSET(ASBZMissionState, ActorPoolManager); } \
	FORCEINLINE static uint32 __PPO__SmallTalkManager() { return STRUCT_OFFSET(ASBZMissionState, SmallTalkManager); } \
	FORCEINLINE static uint32 __PPO__WindManager() { return STRUCT_OFFSET(ASBZMissionState, WindManager); } \
	FORCEINLINE static uint32 __PPO__StateMachineSharedState() { return STRUCT_OFFSET(ASBZMissionState, StateMachineSharedState); } \
	FORCEINLINE static uint32 __PPO__bPlayerFriendlyFire() { return STRUCT_OFFSET(ASBZMissionState, bPlayerFriendlyFire); } \
	FORCEINLINE static uint32 __PPO__PlayersInEscapeVolume() { return STRUCT_OFFSET(ASBZMissionState, PlayersInEscapeVolume); } \
	FORCEINLINE static uint32 __PPO__PlayersRequiredInEscapeVolume() { return STRUCT_OFFSET(ASBZMissionState, PlayersRequiredInEscapeVolume); } \
	FORCEINLINE static uint32 __PPO__EscapeTimeLeft() { return STRUCT_OFFSET(ASBZMissionState, EscapeTimeLeft); } \
	FORCEINLINE static uint32 __PPO__KillingSpreeAmount() { return STRUCT_OFFSET(ASBZMissionState, KillingSpreeAmount); } \
	FORCEINLINE static uint32 __PPO__DropKillingSpreeWaitTime() { return STRUCT_OFFSET(ASBZMissionState, DropKillingSpreeWaitTime); } \
	FORCEINLINE static uint32 __PPO__PreplanningAssets() { return STRUCT_OFFSET(ASBZMissionState, PreplanningAssets); } \
	FORCEINLINE static uint32 __PPO__MaxQueuedCosmeticDestruction() { return STRUCT_OFFSET(ASBZMissionState, MaxQueuedCosmeticDestruction); } \
	FORCEINLINE static uint32 __PPO__TimeBetweenQueuedCosmeticDestruction() { return STRUCT_OFFSET(ASBZMissionState, TimeBetweenQueuedCosmeticDestruction); } \
	FORCEINLINE static uint32 __PPO__QueuedCosmeticDestructionExplosions() { return STRUCT_OFFSET(ASBZMissionState, QueuedCosmeticDestructionExplosions); } \
	FORCEINLINE static uint32 __PPO__HeavyEnemiesTagContainer() { return STRUCT_OFFSET(ASBZMissionState, HeavyEnemiesTagContainer); } \
	FORCEINLINE static uint32 __PPO__VariationSeedGenerator() { return STRUCT_OFFSET(ASBZMissionState, VariationSeedGenerator); } \
	FORCEINLINE static uint32 __PPO__SeasonalEventItemCount() { return STRUCT_OFFSET(ASBZMissionState, SeasonalEventItemCount); } \
	FORCEINLINE static uint32 __PPO__DSChallengeManager() { return STRUCT_OFFSET(ASBZMissionState, DSChallengeManager); } \
	FORCEINLINE static uint32 __PPO__OverkillWeaponCooldown() { return STRUCT_OFFSET(ASBZMissionState, OverkillWeaponCooldown); } \
	FORCEINLINE static uint32 __PPO__CurrentHeistData() { return STRUCT_OFFSET(ASBZMissionState, CurrentHeistData); } \
	FORCEINLINE static uint32 __PPO__TutorialPlayerCharacterData() { return STRUCT_OFFSET(ASBZMissionState, TutorialPlayerCharacterData); } \
	FORCEINLINE static uint32 __PPO__bIsAmmoSpecialistHighGrainSkillActive() { return STRUCT_OFFSET(ASBZMissionState, bIsAmmoSpecialistHighGrainSkillActive); } \
	FORCEINLINE static uint32 __PPO__AmmoSpecialistHighGrainSkillTime() { return STRUCT_OFFSET(ASBZMissionState, AmmoSpecialistHighGrainSkillTime); } \
	FORCEINLINE static uint32 __PPO__bIsIntroSequenceSkipped() { return STRUCT_OFFSET(ASBZMissionState, bIsIntroSequenceSkipped); } \
	FORCEINLINE static uint32 __PPO__PlayerToRewardArray() { return STRUCT_OFFSET(ASBZMissionState, PlayerToRewardArray); } \
	FORCEINLINE static uint32 __PPO__WeaponArmorPenetrationModifier() { return STRUCT_OFFSET(ASBZMissionState, WeaponArmorPenetrationModifier); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMissionState_h_52_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZMissionState_h_54_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZMissionState_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMissionState_h_54_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMissionState_h_54_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMissionState_h_54_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMissionState_h_54_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMissionState_h_54_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMissionState_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMissionState_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMissionState_h_54_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMissionState_h_54_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMissionState_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMissionState_h_54_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMissionState_h_54_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMissionState_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZMissionState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMissionState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
