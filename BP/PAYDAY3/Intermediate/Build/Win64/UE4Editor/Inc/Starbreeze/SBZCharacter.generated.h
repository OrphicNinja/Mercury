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
class ASBZRoomVolume;
struct FSBZBagHandle;
class USBZCarryType;
class AActor;
class AController;
struct FVector;
class UPrimitiveComponent;
class UDamageType;
struct FSBZHurtReactionPrediction;
class UAnimMontage;
struct FTransform;
struct FSBZReplicatedReloadState;
enum class ESBZCharacterStance : uint8;
class ASBZCharacter;
struct FSBZAgilityTraversalTrajectory;
class ASBZZipline;
enum class EPD3HeistState : uint8;
#ifdef STARBREEZE_SBZCharacter_generated_h
#error "SBZCharacter.generated.h already included, missing '#pragma once' in SBZCharacter.h"
#endif
#define STARBREEZE_SBZCharacter_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCharacter_h_100_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCharacter_h_100_RPC_WRAPPERS \
	virtual void Client_OnPickupCarryActorFailed_Implementation(uint32 NetID); \
	virtual void Client_OnThrowCarryActorFailed_Implementation(uint32 NetID); \
	virtual void Multicast_ActivateMelee_Implementation(); \
	virtual void Multicast_ApplyHurtReaction_Implementation(FSBZHurtReactionPrediction const& HurtReactionPrediction); \
	virtual void Multicast_CancelMelee_Implementation(); \
	virtual void Multicast_DisableThrowState_Implementation(); \
	virtual void Multicast_EnableThrowState_Implementation(); \
	virtual void Multicast_HumanShieldInstigatorSlotReached_Implementation(); \
	virtual void Multicast_OnKill_Implementation(); \
	virtual void Multicast_OnPickupCarryActor_Implementation(uint32 NetID); \
	virtual void Multicast_OnThrowCarryActor_Implementation(uint32 NetID); \
	virtual void Multicast_OverrideMaxWalkSpeed_Implementation(float MaxWalkSpeed); \
	virtual void Multicast_PlayMontage_Implementation(UAnimMontage* Montage, bool bPlayOnDedicatedServer, bool bStopAllActiveMontages); \
	virtual void Multicast_PlayMontageMove_Implementation(FName MontageName, FVector const& EndMoveToWorldPosition, float PlayRate); \
	virtual void Multicast_PlayMontageMoveMulti_Implementation(FName MontageName, TArray<FTransform> const& TargetTransforms); \
	virtual void Multicast_PlayMontageMoveTo_Implementation(UAnimMontage* Montage, TArray<FTransform> const& TargetTransforms, bool bDisableAutoBlendOut); \
	virtual void Multicast_PredictedRagdollDenied_Implementation(int32 HurtReactionIndex); \
	virtual void Multicast_SetActiveGadget_Implementation(int32 NewIndex); \
	virtual void Multicast_SetCurrentPlaceableIndex_Implementation(int32 NewPlaceableIndex); \
	virtual void Multicast_SetCurrentThrowableIndex_Implementation(int32 NewThrowableIndex); \
	virtual void Multicast_SetEnableRandomMeshScale_Implementation(bool bInEnableRandomMeshScale); \
	virtual void Multicast_SetEquipStateAndIndex_Implementation(uint8 InEquipStateAndIndex); \
	virtual void Multicast_SetMarked_Implementation(bool bIsMarked); \
	virtual void Multicast_SetMontageNextSection_Implementation(UAnimMontage* Montage, FName const& NextSectionName); \
	virtual void Multicast_SetReloadState_Implementation(FSBZReplicatedReloadState const& InReplicatedReloadState); \
	virtual void Multicast_SetStance_Implementation(ESBZCharacterStance NewStance); \
	virtual void Multicast_SetThrowBagAnimationActive_Implementation(bool bActive); \
	virtual void Multicast_SnapVictimOntoInstigator_Implementation(FVector const& SnapLocation, const ASBZCharacter* HSInstigator); \
	virtual void Multicast_StartTargeting_Implementation(); \
	virtual void Multicast_StopMontage_Implementation(UAnimMontage* Montage, bool bAllowExitSectionSwitch); \
	virtual void Multicast_StopOverrideMaxWalkSpeed_Implementation(); \
	virtual void Multicast_StopRecoil_Implementation(bool bWasCancelled); \
	virtual void Multicast_StopTargeting_Implementation(); \
	virtual void Multicast_SwitchMontageSection_Implementation(UAnimMontage* Montage, FName const& SectionName); \
	virtual void OnStartSlide_Implementation(); \
	virtual void OnStartTraversal_Implementation(FSBZAgilityTraversalTrajectory const& Trajectory); \
	virtual void OnStartZipline_Implementation(const ASBZZipline* Zipline, bool bIsMovingZiplineForward); \
	virtual void OnStopSlide_Implementation(); \
	virtual void OnStopTraversal_Implementation(FSBZAgilityTraversalTrajectory const& Trajectory); \
	virtual void OnStopZipline_Implementation(const ASBZZipline* Zipline, bool bIsMovingZiplineForward); \
	virtual bool Server_HumanShieldInstigatorSlotReached_Validate(); \
	virtual void Server_HumanShieldInstigatorSlotReached_Implementation(); \
	virtual void Server_OnPickupCarryActorFailed_Implementation(uint32 NetID); \
	virtual void Server_OnThrowCarryActorFailed_Implementation(uint32 NetID); \
	virtual void Server_SetEquipStateAndIndex_Implementation(uint8 InEquipStateAndIndex); \
	virtual void Server_TransferBagFrom_Implementation(ASBZCharacter* ToCharacter); \
 \
	DECLARE_FUNCTION(execGetOwnedGameplayTags); \
	DECLARE_FUNCTION(execHasAllMatchingGameplayTags); \
	DECLARE_FUNCTION(execHasAnyMatchingGameplayTags); \
	DECLARE_FUNCTION(execHasMatchingGameplayTag); \
	DECLARE_FUNCTION(execAddLooseGameplayTag); \
	DECLARE_FUNCTION(execAddLooseGameplayTags); \
	DECLARE_FUNCTION(execClient_OnPickupCarryActorFailed); \
	DECLARE_FUNCTION(execClient_OnThrowCarryActorFailed); \
	DECLARE_FUNCTION(execGetCurrentRoom_Implementation); \
	DECLARE_FUNCTION(execGetLastBagHandle); \
	DECLARE_FUNCTION(execGetLastCurrentCarryType); \
	DECLARE_FUNCTION(execGetLastKnownRoom); \
	DECLARE_FUNCTION(execGetSeed); \
	DECLARE_FUNCTION(execHandleTakePointDamage); \
	DECLARE_FUNCTION(execMulticast_ActivateMelee); \
	DECLARE_FUNCTION(execMulticast_ApplyHurtReaction); \
	DECLARE_FUNCTION(execMulticast_CancelMelee); \
	DECLARE_FUNCTION(execMulticast_DisableThrowState); \
	DECLARE_FUNCTION(execMulticast_EnableThrowState); \
	DECLARE_FUNCTION(execMulticast_HumanShieldInstigatorSlotReached); \
	DECLARE_FUNCTION(execMulticast_OnKill); \
	DECLARE_FUNCTION(execMulticast_OnPickupCarryActor); \
	DECLARE_FUNCTION(execMulticast_OnThrowCarryActor); \
	DECLARE_FUNCTION(execMulticast_OverrideMaxWalkSpeed); \
	DECLARE_FUNCTION(execMulticast_PlayMontage); \
	DECLARE_FUNCTION(execMulticast_PlayMontageMove); \
	DECLARE_FUNCTION(execMulticast_PlayMontageMoveMulti); \
	DECLARE_FUNCTION(execMulticast_PlayMontageMoveTo); \
	DECLARE_FUNCTION(execMulticast_PredictedRagdollDenied); \
	DECLARE_FUNCTION(execMulticast_SetActiveGadget); \
	DECLARE_FUNCTION(execMulticast_SetCurrentPlaceableIndex); \
	DECLARE_FUNCTION(execMulticast_SetCurrentThrowableIndex); \
	DECLARE_FUNCTION(execMulticast_SetEnableRandomMeshScale); \
	DECLARE_FUNCTION(execMulticast_SetEquipStateAndIndex); \
	DECLARE_FUNCTION(execMulticast_SetMarked); \
	DECLARE_FUNCTION(execMulticast_SetMontageNextSection); \
	DECLARE_FUNCTION(execMulticast_SetReloadState); \
	DECLARE_FUNCTION(execMulticast_SetStance); \
	DECLARE_FUNCTION(execMulticast_SetThrowBagAnimationActive); \
	DECLARE_FUNCTION(execMulticast_SnapVictimOntoInstigator); \
	DECLARE_FUNCTION(execMulticast_StartTargeting); \
	DECLARE_FUNCTION(execMulticast_StopMontage); \
	DECLARE_FUNCTION(execMulticast_StopOverrideMaxWalkSpeed); \
	DECLARE_FUNCTION(execMulticast_StopRecoil); \
	DECLARE_FUNCTION(execMulticast_StopTargeting); \
	DECLARE_FUNCTION(execMulticast_SwitchMontageSection); \
	DECLARE_FUNCTION(execOnCharacterMontageInstanceEnded); \
	DECLARE_FUNCTION(execOnEquipStateTimerDone); \
	DECLARE_FUNCTION(execOnRep_BagHandleArray); \
	DECLARE_FUNCTION(execOnRep_CurrentPlaceableIndex); \
	DECLARE_FUNCTION(execOnRep_CurrentThrowableIndex); \
	DECLARE_FUNCTION(execOnRep_EquipStateAndIndex); \
	DECLARE_FUNCTION(execOnRep_HumanShieldInstigatorState); \
	DECLARE_FUNCTION(execOnRep_IsAlive); \
	DECLARE_FUNCTION(execOnRep_RandomMeshScaleEnabled); \
	DECLARE_FUNCTION(execOnRep_ReplicatedReloadState); \
	DECLARE_FUNCTION(execOnRep_Seed); \
	DECLARE_FUNCTION(execOnRep_Stance); \
	DECLARE_FUNCTION(execOnReplicatedEquippableDestroyedOnClient); \
	DECLARE_FUNCTION(execOnStartSlide); \
	DECLARE_FUNCTION(execOnStartTraversal); \
	DECLARE_FUNCTION(execOnStartZipline); \
	DECLARE_FUNCTION(execOnStopSlide); \
	DECLARE_FUNCTION(execOnStopTraversal); \
	DECLARE_FUNCTION(execOnStopZipline); \
	DECLARE_FUNCTION(execRemoveLooseGameplayTag); \
	DECLARE_FUNCTION(execRemoveLooseGameplayTags); \
	DECLARE_FUNCTION(execServer_HumanShieldInstigatorSlotReached); \
	DECLARE_FUNCTION(execServer_OnPickupCarryActorFailed); \
	DECLARE_FUNCTION(execServer_OnThrowCarryActorFailed); \
	DECLARE_FUNCTION(execServer_SetEquipStateAndIndex); \
	DECLARE_FUNCTION(execServer_TransferBagFrom); \
	DECLARE_FUNCTION(execSetStance);


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacter_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_OnPickupCarryActorFailed_Implementation(uint32 NetID); \
	virtual void Client_OnThrowCarryActorFailed_Implementation(uint32 NetID); \
	virtual void Multicast_ActivateMelee_Implementation(); \
	virtual void Multicast_ApplyHurtReaction_Implementation(FSBZHurtReactionPrediction const& HurtReactionPrediction); \
	virtual void Multicast_CancelMelee_Implementation(); \
	virtual void Multicast_DisableThrowState_Implementation(); \
	virtual void Multicast_EnableThrowState_Implementation(); \
	virtual void Multicast_HumanShieldInstigatorSlotReached_Implementation(); \
	virtual void Multicast_OnKill_Implementation(); \
	virtual void Multicast_OnPickupCarryActor_Implementation(uint32 NetID); \
	virtual void Multicast_OnThrowCarryActor_Implementation(uint32 NetID); \
	virtual void Multicast_OverrideMaxWalkSpeed_Implementation(float MaxWalkSpeed); \
	virtual void Multicast_PlayMontage_Implementation(UAnimMontage* Montage, bool bPlayOnDedicatedServer, bool bStopAllActiveMontages); \
	virtual void Multicast_PlayMontageMove_Implementation(FName MontageName, FVector const& EndMoveToWorldPosition, float PlayRate); \
	virtual void Multicast_PlayMontageMoveMulti_Implementation(FName MontageName, TArray<FTransform> const& TargetTransforms); \
	virtual void Multicast_PlayMontageMoveTo_Implementation(UAnimMontage* Montage, TArray<FTransform> const& TargetTransforms, bool bDisableAutoBlendOut); \
	virtual void Multicast_PredictedRagdollDenied_Implementation(int32 HurtReactionIndex); \
	virtual void Multicast_SetActiveGadget_Implementation(int32 NewIndex); \
	virtual void Multicast_SetCurrentPlaceableIndex_Implementation(int32 NewPlaceableIndex); \
	virtual void Multicast_SetCurrentThrowableIndex_Implementation(int32 NewThrowableIndex); \
	virtual void Multicast_SetEnableRandomMeshScale_Implementation(bool bInEnableRandomMeshScale); \
	virtual void Multicast_SetEquipStateAndIndex_Implementation(uint8 InEquipStateAndIndex); \
	virtual void Multicast_SetMarked_Implementation(bool bIsMarked); \
	virtual void Multicast_SetMontageNextSection_Implementation(UAnimMontage* Montage, FName const& NextSectionName); \
	virtual void Multicast_SetReloadState_Implementation(FSBZReplicatedReloadState const& InReplicatedReloadState); \
	virtual void Multicast_SetStance_Implementation(ESBZCharacterStance NewStance); \
	virtual void Multicast_SetThrowBagAnimationActive_Implementation(bool bActive); \
	virtual void Multicast_SnapVictimOntoInstigator_Implementation(FVector const& SnapLocation, const ASBZCharacter* HSInstigator); \
	virtual void Multicast_StartTargeting_Implementation(); \
	virtual void Multicast_StopMontage_Implementation(UAnimMontage* Montage, bool bAllowExitSectionSwitch); \
	virtual void Multicast_StopOverrideMaxWalkSpeed_Implementation(); \
	virtual void Multicast_StopRecoil_Implementation(bool bWasCancelled); \
	virtual void Multicast_StopTargeting_Implementation(); \
	virtual void Multicast_SwitchMontageSection_Implementation(UAnimMontage* Montage, FName const& SectionName); \
	virtual void OnStartSlide_Implementation(); \
	virtual void OnStartTraversal_Implementation(FSBZAgilityTraversalTrajectory const& Trajectory); \
	virtual void OnStartZipline_Implementation(const ASBZZipline* Zipline, bool bIsMovingZiplineForward); \
	virtual void OnStopSlide_Implementation(); \
	virtual void OnStopTraversal_Implementation(FSBZAgilityTraversalTrajectory const& Trajectory); \
	virtual void OnStopZipline_Implementation(const ASBZZipline* Zipline, bool bIsMovingZiplineForward); \
	virtual bool Server_HumanShieldInstigatorSlotReached_Validate(); \
	virtual void Server_HumanShieldInstigatorSlotReached_Implementation(); \
	virtual void Server_OnPickupCarryActorFailed_Implementation(uint32 NetID); \
	virtual void Server_OnThrowCarryActorFailed_Implementation(uint32 NetID); \
	virtual void Server_SetEquipStateAndIndex_Implementation(uint8 InEquipStateAndIndex); \
	virtual void Server_TransferBagFrom_Implementation(ASBZCharacter* ToCharacter); \
 \
	DECLARE_FUNCTION(execGetOwnedGameplayTags); \
	DECLARE_FUNCTION(execHasAllMatchingGameplayTags); \
	DECLARE_FUNCTION(execHasAnyMatchingGameplayTags); \
	DECLARE_FUNCTION(execHasMatchingGameplayTag); \
	DECLARE_FUNCTION(execAddLooseGameplayTag); \
	DECLARE_FUNCTION(execAddLooseGameplayTags); \
	DECLARE_FUNCTION(execClient_OnPickupCarryActorFailed); \
	DECLARE_FUNCTION(execClient_OnThrowCarryActorFailed); \
	DECLARE_FUNCTION(execGetCurrentRoom_Implementation); \
	DECLARE_FUNCTION(execGetLastBagHandle); \
	DECLARE_FUNCTION(execGetLastCurrentCarryType); \
	DECLARE_FUNCTION(execGetLastKnownRoom); \
	DECLARE_FUNCTION(execGetSeed); \
	DECLARE_FUNCTION(execHandleTakePointDamage); \
	DECLARE_FUNCTION(execMulticast_ActivateMelee); \
	DECLARE_FUNCTION(execMulticast_ApplyHurtReaction); \
	DECLARE_FUNCTION(execMulticast_CancelMelee); \
	DECLARE_FUNCTION(execMulticast_DisableThrowState); \
	DECLARE_FUNCTION(execMulticast_EnableThrowState); \
	DECLARE_FUNCTION(execMulticast_HumanShieldInstigatorSlotReached); \
	DECLARE_FUNCTION(execMulticast_OnKill); \
	DECLARE_FUNCTION(execMulticast_OnPickupCarryActor); \
	DECLARE_FUNCTION(execMulticast_OnThrowCarryActor); \
	DECLARE_FUNCTION(execMulticast_OverrideMaxWalkSpeed); \
	DECLARE_FUNCTION(execMulticast_PlayMontage); \
	DECLARE_FUNCTION(execMulticast_PlayMontageMove); \
	DECLARE_FUNCTION(execMulticast_PlayMontageMoveMulti); \
	DECLARE_FUNCTION(execMulticast_PlayMontageMoveTo); \
	DECLARE_FUNCTION(execMulticast_PredictedRagdollDenied); \
	DECLARE_FUNCTION(execMulticast_SetActiveGadget); \
	DECLARE_FUNCTION(execMulticast_SetCurrentPlaceableIndex); \
	DECLARE_FUNCTION(execMulticast_SetCurrentThrowableIndex); \
	DECLARE_FUNCTION(execMulticast_SetEnableRandomMeshScale); \
	DECLARE_FUNCTION(execMulticast_SetEquipStateAndIndex); \
	DECLARE_FUNCTION(execMulticast_SetMarked); \
	DECLARE_FUNCTION(execMulticast_SetMontageNextSection); \
	DECLARE_FUNCTION(execMulticast_SetReloadState); \
	DECLARE_FUNCTION(execMulticast_SetStance); \
	DECLARE_FUNCTION(execMulticast_SetThrowBagAnimationActive); \
	DECLARE_FUNCTION(execMulticast_SnapVictimOntoInstigator); \
	DECLARE_FUNCTION(execMulticast_StartTargeting); \
	DECLARE_FUNCTION(execMulticast_StopMontage); \
	DECLARE_FUNCTION(execMulticast_StopOverrideMaxWalkSpeed); \
	DECLARE_FUNCTION(execMulticast_StopRecoil); \
	DECLARE_FUNCTION(execMulticast_StopTargeting); \
	DECLARE_FUNCTION(execMulticast_SwitchMontageSection); \
	DECLARE_FUNCTION(execOnCharacterMontageInstanceEnded); \
	DECLARE_FUNCTION(execOnEquipStateTimerDone); \
	DECLARE_FUNCTION(execOnRep_BagHandleArray); \
	DECLARE_FUNCTION(execOnRep_CurrentPlaceableIndex); \
	DECLARE_FUNCTION(execOnRep_CurrentThrowableIndex); \
	DECLARE_FUNCTION(execOnRep_EquipStateAndIndex); \
	DECLARE_FUNCTION(execOnRep_HumanShieldInstigatorState); \
	DECLARE_FUNCTION(execOnRep_IsAlive); \
	DECLARE_FUNCTION(execOnRep_RandomMeshScaleEnabled); \
	DECLARE_FUNCTION(execOnRep_ReplicatedReloadState); \
	DECLARE_FUNCTION(execOnRep_Seed); \
	DECLARE_FUNCTION(execOnRep_Stance); \
	DECLARE_FUNCTION(execOnReplicatedEquippableDestroyedOnClient); \
	DECLARE_FUNCTION(execOnStartSlide); \
	DECLARE_FUNCTION(execOnStartTraversal); \
	DECLARE_FUNCTION(execOnStartZipline); \
	DECLARE_FUNCTION(execOnStopSlide); \
	DECLARE_FUNCTION(execOnStopTraversal); \
	DECLARE_FUNCTION(execOnStopZipline); \
	DECLARE_FUNCTION(execRemoveLooseGameplayTag); \
	DECLARE_FUNCTION(execRemoveLooseGameplayTags); \
	DECLARE_FUNCTION(execServer_HumanShieldInstigatorSlotReached); \
	DECLARE_FUNCTION(execServer_OnPickupCarryActorFailed); \
	DECLARE_FUNCTION(execServer_OnThrowCarryActorFailed); \
	DECLARE_FUNCTION(execServer_SetEquipStateAndIndex); \
	DECLARE_FUNCTION(execServer_TransferBagFrom); \
	DECLARE_FUNCTION(execSetStance);


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacter_h_100_EVENT_PARMS \
	struct SBZCharacter_eventBP_OnHeistStateChanged_Parms \
	{ \
		EPD3HeistState OldState; \
		EPD3HeistState NewState; \
	}; \
	struct SBZCharacter_eventClient_OnPickupCarryActorFailed_Parms \
	{ \
		uint32 NetID; \
	}; \
	struct SBZCharacter_eventClient_OnThrowCarryActorFailed_Parms \
	{ \
		uint32 NetID; \
	}; \
	struct SBZCharacter_eventMulticast_ApplyHurtReaction_Parms \
	{ \
		FSBZHurtReactionPrediction HurtReactionPrediction; \
	}; \
	struct SBZCharacter_eventMulticast_OnPickupCarryActor_Parms \
	{ \
		uint32 NetID; \
	}; \
	struct SBZCharacter_eventMulticast_OnThrowCarryActor_Parms \
	{ \
		uint32 NetID; \
	}; \
	struct SBZCharacter_eventMulticast_OverrideMaxWalkSpeed_Parms \
	{ \
		float MaxWalkSpeed; \
	}; \
	struct SBZCharacter_eventMulticast_PlayMontage_Parms \
	{ \
		UAnimMontage* Montage; \
		bool bPlayOnDedicatedServer; \
		bool bStopAllActiveMontages; \
	}; \
	struct SBZCharacter_eventMulticast_PlayMontageMove_Parms \
	{ \
		FName MontageName; \
		FVector EndMoveToWorldPosition; \
		float PlayRate; \
	}; \
	struct SBZCharacter_eventMulticast_PlayMontageMoveMulti_Parms \
	{ \
		FName MontageName; \
		TArray<FTransform> TargetTransforms; \
	}; \
	struct SBZCharacter_eventMulticast_PlayMontageMoveTo_Parms \
	{ \
		UAnimMontage* Montage; \
		TArray<FTransform> TargetTransforms; \
		bool bDisableAutoBlendOut; \
	}; \
	struct SBZCharacter_eventMulticast_PredictedRagdollDenied_Parms \
	{ \
		int32 HurtReactionIndex; \
	}; \
	struct SBZCharacter_eventMulticast_SetActiveGadget_Parms \
	{ \
		int32 NewIndex; \
	}; \
	struct SBZCharacter_eventMulticast_SetCurrentPlaceableIndex_Parms \
	{ \
		int32 NewPlaceableIndex; \
	}; \
	struct SBZCharacter_eventMulticast_SetCurrentThrowableIndex_Parms \
	{ \
		int32 NewThrowableIndex; \
	}; \
	struct SBZCharacter_eventMulticast_SetEnableRandomMeshScale_Parms \
	{ \
		bool bInEnableRandomMeshScale; \
	}; \
	struct SBZCharacter_eventMulticast_SetEquipStateAndIndex_Parms \
	{ \
		uint8 InEquipStateAndIndex; \
	}; \
	struct SBZCharacter_eventMulticast_SetMarked_Parms \
	{ \
		bool bIsMarked; \
	}; \
	struct SBZCharacter_eventMulticast_SetMontageNextSection_Parms \
	{ \
		UAnimMontage* Montage; \
		FName NextSectionName; \
	}; \
	struct SBZCharacter_eventMulticast_SetReloadState_Parms \
	{ \
		FSBZReplicatedReloadState InReplicatedReloadState; \
	}; \
	struct SBZCharacter_eventMulticast_SetStance_Parms \
	{ \
		ESBZCharacterStance NewStance; \
	}; \
	struct SBZCharacter_eventMulticast_SetThrowBagAnimationActive_Parms \
	{ \
		bool bActive; \
	}; \
	struct SBZCharacter_eventMulticast_SnapVictimOntoInstigator_Parms \
	{ \
		FVector SnapLocation; \
		const ASBZCharacter* HSInstigator; \
	}; \
	struct SBZCharacter_eventMulticast_StopMontage_Parms \
	{ \
		UAnimMontage* Montage; \
		bool bAllowExitSectionSwitch; \
	}; \
	struct SBZCharacter_eventMulticast_StopRecoil_Parms \
	{ \
		bool bWasCancelled; \
	}; \
	struct SBZCharacter_eventMulticast_SwitchMontageSection_Parms \
	{ \
		UAnimMontage* Montage; \
		FName SectionName; \
	}; \
	struct SBZCharacter_eventOnStartTraversal_Parms \
	{ \
		FSBZAgilityTraversalTrajectory Trajectory; \
	}; \
	struct SBZCharacter_eventOnStartZipline_Parms \
	{ \
		const ASBZZipline* Zipline; \
		bool bIsMovingZiplineForward; \
	}; \
	struct SBZCharacter_eventOnStopTraversal_Parms \
	{ \
		FSBZAgilityTraversalTrajectory Trajectory; \
	}; \
	struct SBZCharacter_eventOnStopZipline_Parms \
	{ \
		const ASBZZipline* Zipline; \
		bool bIsMovingZiplineForward; \
	}; \
	struct SBZCharacter_eventServer_OnPickupCarryActorFailed_Parms \
	{ \
		uint32 NetID; \
	}; \
	struct SBZCharacter_eventServer_OnThrowCarryActorFailed_Parms \
	{ \
		uint32 NetID; \
	}; \
	struct SBZCharacter_eventServer_SetEquipStateAndIndex_Parms \
	{ \
		uint8 InEquipStateAndIndex; \
	}; \
	struct SBZCharacter_eventServer_TransferBagFrom_Parms \
	{ \
		ASBZCharacter* ToCharacter; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacter_h_100_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZCharacter_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZCharacter(); \
	friend struct Z_Construct_UClass_ASBZCharacter_Statics; \
public: \
	DECLARE_CLASS(ASBZCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bRandomMeshScaleEnabled=NETFIELD_REP_START, \
		BagHandleArray, \
		ReplicatedMontage, \
		bIsAlive, \
		bIsTargeting, \
		ReplicatedReloadState, \
		Stance, \
		RemoteViewYaw, \
		EquipStateAndIndex, \
		TeamId, \
		CurrentThrowableIndex, \
		GadgetIndexArray, \
		CurrentPlaceableIndex, \
		HumanShieldInstigatorState, \
		Seed, \
		NETFIELD_REP_END=Seed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacter_h_100_INCLASS \
private: \
	static void StaticRegisterNativesASBZCharacter(); \
	friend struct Z_Construct_UClass_ASBZCharacter_Statics; \
public: \
	DECLARE_CLASS(ASBZCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bRandomMeshScaleEnabled=NETFIELD_REP_START, \
		BagHandleArray, \
		ReplicatedMontage, \
		bIsAlive, \
		bIsTargeting, \
		ReplicatedReloadState, \
		Stance, \
		RemoteViewYaw, \
		EquipStateAndIndex, \
		TeamId, \
		CurrentThrowableIndex, \
		GadgetIndexArray, \
		CurrentPlaceableIndex, \
		HumanShieldInstigatorState, \
		Seed, \
		NETFIELD_REP_END=Seed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacter_h_100_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZCharacter(ASBZCharacter&&); \
	NO_API ASBZCharacter(const ASBZCharacter&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacter_h_100_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZCharacter(ASBZCharacter&&); \
	NO_API ASBZCharacter(const ASBZCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZCharacter)


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacter_h_100_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AdditiveBoundExtent() { return STRUCT_OFFSET(ASBZCharacter, AdditiveBoundExtent); } \
	FORCEINLINE static uint32 __PPO__RagdollAdditiveBoundExtent() { return STRUCT_OFFSET(ASBZCharacter, RagdollAdditiveBoundExtent); } \
	FORCEINLINE static uint32 __PPO__EventReactionComponent() { return STRUCT_OFFSET(ASBZCharacter, EventReactionComponent); } \
	FORCEINLINE static uint32 __PPO__BagActorArray() { return STRUCT_OFFSET(ASBZCharacter, BagActorArray); } \
	FORCEINLINE static uint32 __PPO__BagHandleArray() { return STRUCT_OFFSET(ASBZCharacter, BagHandleArray); } \
	FORCEINLINE static uint32 __PPO__MaxCarryBagCount() { return STRUCT_OFFSET(ASBZCharacter, MaxCarryBagCount); } \
	FORCEINLINE static uint32 __PPO__CurrentCarryTypeArray() { return STRUCT_OFFSET(ASBZCharacter, CurrentCarryTypeArray); } \
	FORCEINLINE static uint32 __PPO__ReplicatedMontage() { return STRUCT_OFFSET(ASBZCharacter, ReplicatedMontage); } \
	FORCEINLINE static uint32 __PPO__bIsDropAndCarryScope() { return STRUCT_OFFSET(ASBZCharacter, bIsDropAndCarryScope); } \
	FORCEINLINE static uint32 __PPO__bIsCarryChangedUsingInteraction() { return STRUCT_OFFSET(ASBZCharacter, bIsCarryChangedUsingInteraction); } \
	FORCEINLINE static uint32 __PPO__ReplicatedReloadState() { return STRUCT_OFFSET(ASBZCharacter, ReplicatedReloadState); } \
	FORCEINLINE static uint32 __PPO__StartReloadState() { return STRUCT_OFFSET(ASBZCharacter, StartReloadState); } \
	FORCEINLINE static uint32 __PPO__bIsCurrentAnimationMagazineRemoved() { return STRUCT_OFFSET(ASBZCharacter, bIsCurrentAnimationMagazineRemoved); } \
	FORCEINLINE static uint32 __PPO__LastReloadAnimationName() { return STRUCT_OFFSET(ASBZCharacter, LastReloadAnimationName); } \
	FORCEINLINE static uint32 __PPO__LastLocalReloadMontage() { return STRUCT_OFFSET(ASBZCharacter, LastLocalReloadMontage); } \
	FORCEINLINE static uint32 __PPO__LastRecoilMontage() { return STRUCT_OFFSET(ASBZCharacter, LastRecoilMontage); } \
	FORCEINLINE static uint32 __PPO__MovementSettings() { return STRUCT_OFFSET(ASBZCharacter, MovementSettings); } \
	FORCEINLINE static uint32 __PPO__Stance() { return STRUCT_OFFSET(ASBZCharacter, Stance); } \
	FORCEINLINE static uint32 __PPO__CompatibleStances() { return STRUCT_OFFSET(ASBZCharacter, CompatibleStances); } \
	FORCEINLINE static uint32 __PPO__MaxStartAimOffsetYawDegrees() { return STRUCT_OFFSET(ASBZCharacter, MaxStartAimOffsetYawDegrees); } \
	FORCEINLINE static uint32 __PPO__MaxAimOffsetYawDegrees() { return STRUCT_OFFSET(ASBZCharacter, MaxAimOffsetYawDegrees); } \
	FORCEINLINE static uint32 __PPO__MaxStartAimOffsetYawDegreesTargeting() { return STRUCT_OFFSET(ASBZCharacter, MaxStartAimOffsetYawDegreesTargeting); } \
	FORCEINLINE static uint32 __PPO__MaxAimOffsetYawDegreesTargeting() { return STRUCT_OFFSET(ASBZCharacter, MaxAimOffsetYawDegreesTargeting); } \
	FORCEINLINE static uint32 __PPO__RemoteViewYaw() { return STRUCT_OFFSET(ASBZCharacter, RemoteViewYaw); } \
	FORCEINLINE static uint32 __PPO__AbilitySystem() { return STRUCT_OFFSET(ASBZCharacter, AbilitySystem); } \
	FORCEINLINE static uint32 __PPO__EquippableConfigArray() { return STRUCT_OFFSET(ASBZCharacter, EquippableConfigArray); } \
	FORCEINLINE static uint32 __PPO__LoadedEquippableConfigArray() { return STRUCT_OFFSET(ASBZCharacter, LoadedEquippableConfigArray); } \
	FORCEINLINE static uint32 __PPO__CurrentEquippableIndex() { return STRUCT_OFFSET(ASBZCharacter, CurrentEquippableIndex); } \
	FORCEINLINE static uint32 __PPO__LastEquippableIndex() { return STRUCT_OFFSET(ASBZCharacter, LastEquippableIndex); } \
	FORCEINLINE static uint32 __PPO__LastRequiredEquippableIndex() { return STRUCT_OFFSET(ASBZCharacter, LastRequiredEquippableIndex); } \
	FORCEINLINE static uint32 __PPO__EquippableArray() { return STRUCT_OFFSET(ASBZCharacter, EquippableArray); } \
	FORCEINLINE static uint32 __PPO__PendingReplicatedEquippableArray() { return STRUCT_OFFSET(ASBZCharacter, PendingReplicatedEquippableArray); } \
	FORCEINLINE static uint32 __PPO__CurrentEquippableConfig() { return STRUCT_OFFSET(ASBZCharacter, CurrentEquippableConfig); } \
	FORCEINLINE static uint32 __PPO__CurrentEquippableRuntime() { return STRUCT_OFFSET(ASBZCharacter, CurrentEquippableRuntime); } \
	FORCEINLINE static uint32 __PPO__CurrentEquippable() { return STRUCT_OFFSET(ASBZCharacter, CurrentEquippable); } \
	FORCEINLINE static uint32 __PPO__EquippableRuntimeArray() { return STRUCT_OFFSET(ASBZCharacter, EquippableRuntimeArray); } \
	FORCEINLINE static uint32 __PPO__EquipState() { return STRUCT_OFFSET(ASBZCharacter, EquipState); } \
	FORCEINLINE static uint32 __PPO__EquipStateAndIndex() { return STRUCT_OFFSET(ASBZCharacter, EquipStateAndIndex); } \
	FORCEINLINE static uint32 __PPO__EquippableAttachementSocketName() { return STRUCT_OFFSET(ASBZCharacter, EquippableAttachementSocketName); } \
	FORCEINLINE static uint32 __PPO__LinkedAnimationClass() { return STRUCT_OFFSET(ASBZCharacter, LinkedAnimationClass); } \
	FORCEINLINE static uint32 __PPO__AnimationCollection() { return STRUCT_OFFSET(ASBZCharacter, AnimationCollection); } \
	FORCEINLINE static uint32 __PPO__FacialAnimationCollection() { return STRUCT_OFFSET(ASBZCharacter, FacialAnimationCollection); } \
	FORCEINLINE static uint32 __PPO__EmotionMapping() { return STRUCT_OFFSET(ASBZCharacter, EmotionMapping); } \
	FORCEINLINE static uint32 __PPO__AnimationData() { return STRUCT_OFFSET(ASBZCharacter, AnimationData); } \
	FORCEINLINE static uint32 __PPO__DefaultLifeActionAffinityData() { return STRUCT_OFFSET(ASBZCharacter, DefaultLifeActionAffinityData); } \
	FORCEINLINE static uint32 __PPO__RandomizedMeshScaleLifeActionAffinityData() { return STRUCT_OFFSET(ASBZCharacter, RandomizedMeshScaleLifeActionAffinityData); } \
	FORCEINLINE static uint32 __PPO__bCanEverHaveFacialAnimation() { return STRUCT_OFFSET(ASBZCharacter, bCanEverHaveFacialAnimation); } \
	FORCEINLINE static uint32 __PPO__MontageSectionSwitchRequests() { return STRUCT_OFFSET(ASBZCharacter, MontageSectionSwitchRequests); } \
	FORCEINLINE static uint32 __PPO__TargetEquippableIndex() { return STRUCT_OFFSET(ASBZCharacter, TargetEquippableIndex); } \
	FORCEINLINE static uint32 __PPO__InitialEquippableIndex() { return STRUCT_OFFSET(ASBZCharacter, InitialEquippableIndex); } \
	FORCEINLINE static uint32 __PPO__ForbiddenEquippableIndexCountArray() { return STRUCT_OFFSET(ASBZCharacter, ForbiddenEquippableIndexCountArray); } \
	FORCEINLINE static uint32 __PPO__EquippableVisibleCount() { return STRUCT_OFFSET(ASBZCharacter, EquippableVisibleCount); } \
	FORCEINLINE static uint32 __PPO__EquippedCount() { return STRUCT_OFFSET(ASBZCharacter, EquippedCount); } \
	FORCEINLINE static uint32 __PPO__bIsInitialEquipped() { return STRUCT_OFFSET(ASBZCharacter, bIsInitialEquipped); } \
	FORCEINLINE static uint32 __PPO__TeamId() { return STRUCT_OFFSET(ASBZCharacter, TeamId); } \
	FORCEINLINE static uint32 __PPO__VoiceComponent() { return STRUCT_OFFSET(ASBZCharacter, VoiceComponent); } \
	FORCEINLINE static uint32 __PPO__DamageTracker() { return STRUCT_OFFSET(ASBZCharacter, DamageTracker); } \
	FORCEINLINE static uint32 __PPO__FootStepComponent() { return STRUCT_OFFSET(ASBZCharacter, FootStepComponent); } \
	FORCEINLINE static uint32 __PPO__SlidingComponent() { return STRUCT_OFFSET(ASBZCharacter, SlidingComponent); } \
	FORCEINLINE static uint32 __PPO__MantlingComponent() { return STRUCT_OFFSET(ASBZCharacter, MantlingComponent); } \
	FORCEINLINE static uint32 __PPO__VaultingComponent() { return STRUCT_OFFSET(ASBZCharacter, VaultingComponent); } \
	FORCEINLINE static uint32 __PPO__AIVisibilityNodeComputationFrequency() { return STRUCT_OFFSET(ASBZCharacter, AIVisibilityNodeComputationFrequency); } \
	FORCEINLINE static uint32 __PPO__AIVisibilityNode() { return STRUCT_OFFSET(ASBZCharacter, AIVisibilityNode); } \
	FORCEINLINE static uint32 __PPO__AbilityData() { return STRUCT_OFFSET(ASBZCharacter, AbilityData); } \
	FORCEINLINE static uint32 __PPO__FloorHitLeftFoot() { return STRUCT_OFFSET(ASBZCharacter, FloorHitLeftFoot); } \
	FORCEINLINE static uint32 __PPO__FloorHitRightFoot() { return STRUCT_OFFSET(ASBZCharacter, FloorHitRightFoot); } \
	FORCEINLINE static uint32 __PPO__BoneDamageMultiplierMap() { return STRUCT_OFFSET(ASBZCharacter, BoneDamageMultiplierMap); } \
	FORCEINLINE static uint32 __PPO__TagReactionAsset() { return STRUCT_OFFSET(ASBZCharacter, TagReactionAsset); } \
	FORCEINLINE static uint32 __PPO__CurrentTagReactionAsset() { return STRUCT_OFFSET(ASBZCharacter, CurrentTagReactionAsset); } \
	FORCEINLINE static uint32 __PPO__TagReactionStanceMap() { return STRUCT_OFFSET(ASBZCharacter, TagReactionStanceMap); } \
	FORCEINLINE static uint32 __PPO__CurrentTagReactionEffects() { return STRUCT_OFFSET(ASBZCharacter, CurrentTagReactionEffects); } \
	FORCEINLINE static uint32 __PPO__LastTagReactionMontage() { return STRUCT_OFFSET(ASBZCharacter, LastTagReactionMontage); } \
	FORCEINLINE static uint32 __PPO__HurtReactionArray() { return STRUCT_OFFSET(ASBZCharacter, HurtReactionArray); } \
	FORCEINLINE static uint32 __PPO__SprintForwardHurtVelocityInterval() { return STRUCT_OFFSET(ASBZCharacter, SprintForwardHurtVelocityInterval); } \
	FORCEINLINE static uint32 __PPO__LandSoundEvent() { return STRUCT_OFFSET(ASBZCharacter, LandSoundEvent); } \
	FORCEINLINE static uint32 __PPO__VictimDropCharacterSound() { return STRUCT_OFFSET(ASBZCharacter, VictimDropCharacterSound); } \
	FORCEINLINE static uint32 __PPO__InstigatorDropCharacterSound() { return STRUCT_OFFSET(ASBZCharacter, InstigatorDropCharacterSound); } \
	FORCEINLINE static uint32 __PPO__MinInteractionDurationToUnequip() { return STRUCT_OFFSET(ASBZCharacter, MinInteractionDurationToUnequip); } \
	FORCEINLINE static uint32 __PPO__CurrentThrowableIndex() { return STRUCT_OFFSET(ASBZCharacter, CurrentThrowableIndex); } \
	FORCEINLINE static uint32 __PPO__GadgetIndexArray() { return STRUCT_OFFSET(ASBZCharacter, GadgetIndexArray); } \
	FORCEINLINE static uint32 __PPO__GadgetMaxIndexArray() { return STRUCT_OFFSET(ASBZCharacter, GadgetMaxIndexArray); } \
	FORCEINLINE static uint32 __PPO__CurrentPlaceableIndex() { return STRUCT_OFFSET(ASBZCharacter, CurrentPlaceableIndex); } \
	FORCEINLINE static uint32 __PPO__Interactable() { return STRUCT_OFFSET(ASBZCharacter, Interactable); } \
	FORCEINLINE static uint32 __PPO__MeleeComponent() { return STRUCT_OFFSET(ASBZCharacter, MeleeComponent); } \
	FORCEINLINE static uint32 __PPO__MeleeDamageData() { return STRUCT_OFFSET(ASBZCharacter, MeleeDamageData); } \
	FORCEINLINE static uint32 __PPO__CurrentCarryActor() { return STRUCT_OFFSET(ASBZCharacter, CurrentCarryActor); } \
	FORCEINLINE static uint32 __PPO__CurrentCarryInstigator() { return STRUCT_OFFSET(ASBZCharacter, CurrentCarryInstigator); } \
	FORCEINLINE static uint32 __PPO__CarryActorSocketName() { return STRUCT_OFFSET(ASBZCharacter, CarryActorSocketName); } \
	FORCEINLINE static uint32 __PPO__PhysicsAssetWhenCarried() { return STRUCT_OFFSET(ASBZCharacter, PhysicsAssetWhenCarried); } \
	FORCEINLINE static uint32 __PPO__PhysicsAssetWhenNotCarried() { return STRUCT_OFFSET(ASBZCharacter, PhysicsAssetWhenNotCarried); } \
	FORCEINLINE static uint32 __PPO__AnimClassWhenCarriedDead() { return STRUCT_OFFSET(ASBZCharacter, AnimClassWhenCarriedDead); } \
	FORCEINLINE static uint32 __PPO__HumanShieldInstigatorState() { return STRUCT_OFFSET(ASBZCharacter, HumanShieldInstigatorState); } \
	FORCEINLINE static uint32 __PPO__OffsetWhenCarried() { return STRUCT_OFFSET(ASBZCharacter, OffsetWhenCarried); } \
	FORCEINLINE static uint32 __PPO__OffsetWhenHumanShield() { return STRUCT_OFFSET(ASBZCharacter, OffsetWhenHumanShield); } \
	FORCEINLINE static uint32 __PPO__HumanShieldInstigatorAcceptableRadius() { return STRUCT_OFFSET(ASBZCharacter, HumanShieldInstigatorAcceptableRadius); } \
	FORCEINLINE static uint32 __PPO__HumanShieldSlotParameters() { return STRUCT_OFFSET(ASBZCharacter, HumanShieldSlotParameters); } \
	FORCEINLINE static uint32 __PPO__MeleeComment() { return STRUCT_OFFSET(ASBZCharacter, MeleeComment); } \
	FORCEINLINE static uint32 __PPO__CurrentHumanShieldInstigatorEnterMontage() { return STRUCT_OFFSET(ASBZCharacter, CurrentHumanShieldInstigatorEnterMontage); } \
	FORCEINLINE static uint32 __PPO__CarryingFromCrouchAcceptableRadius() { return STRUCT_OFFSET(ASBZCharacter, CarryingFromCrouchAcceptableRadius); } \
	FORCEINLINE static uint32 __PPO__Seed() { return STRUCT_OFFSET(ASBZCharacter, Seed); } \
	FORCEINLINE static uint32 __PPO__SharedAnimBehavior() { return STRUCT_OFFSET(ASBZCharacter, SharedAnimBehavior); } \
	FORCEINLINE static uint32 __PPO__LastController() { return STRUCT_OFFSET(ASBZCharacter, LastController); } \
	FORCEINLINE static uint32 __PPO__CharacterTag() { return STRUCT_OFFSET(ASBZCharacter, CharacterTag); } \
	FORCEINLINE static uint32 __PPO__DialogBodyGesturesData() { return STRUCT_OFFSET(ASBZCharacter, DialogBodyGesturesData); } \
	FORCEINLINE static uint32 __PPO__ForcedFacialAnimaton() { return STRUCT_OFFSET(ASBZCharacter, ForcedFacialAnimaton); } \
	FORCEINLINE static uint32 __PPO__CharacterName() { return STRUCT_OFFSET(ASBZCharacter, CharacterName); } \
	FORCEINLINE static uint32 __PPO__EquippedMask() { return STRUCT_OFFSET(ASBZCharacter, EquippedMask); } \
	FORCEINLINE static uint32 __PPO__DisplayIcon() { return STRUCT_OFFSET(ASBZCharacter, DisplayIcon); } \
	FORCEINLINE static uint32 __PPO__HitImmunityGrantingTags() { return STRUCT_OFFSET(ASBZCharacter, HitImmunityGrantingTags); } \
	FORCEINLINE static uint32 __PPO__MarkedGameplayEffectClass() { return STRUCT_OFFSET(ASBZCharacter, MarkedGameplayEffectClass); } \
	FORCEINLINE static uint32 __PPO__HurtReactionOffset() { return STRUCT_OFFSET(ASBZCharacter, HurtReactionOffset); } \
	FORCEINLINE static uint32 __PPO__LastAppliedHurtReactionIndex() { return STRUCT_OFFSET(ASBZCharacter, LastAppliedHurtReactionIndex); } \
	FORCEINLINE static uint32 __PPO__CurrentHurtReactionType() { return STRUCT_OFFSET(ASBZCharacter, CurrentHurtReactionType); } \
	FORCEINLINE static uint32 __PPO__HurtReactionEndTime() { return STRUCT_OFFSET(ASBZCharacter, HurtReactionEndTime); } \
	FORCEINLINE static uint32 __PPO__PredictedHurtReactionEndTime() { return STRUCT_OFFSET(ASBZCharacter, PredictedHurtReactionEndTime); } \
	FORCEINLINE static uint32 __PPO__CurrentMeleeMontage() { return STRUCT_OFFSET(ASBZCharacter, CurrentMeleeMontage); } \
	FORCEINLINE static uint32 __PPO__RoomVolumes() { return STRUCT_OFFSET(ASBZCharacter, RoomVolumes); } \
	FORCEINLINE static uint32 __PPO__LastKnownRoom() { return STRUCT_OFFSET(ASBZCharacter, LastKnownRoom); } \
	FORCEINLINE static uint32 __PPO__ExplosionLineTraceBoneArray() { return STRUCT_OFFSET(ASBZCharacter, ExplosionLineTraceBoneArray); } \
	FORCEINLINE static uint32 __PPO__HeadBone() { return STRUCT_OFFSET(ASBZCharacter, HeadBone); } \
	FORCEINLINE static uint32 __PPO__StatisticName() { return STRUCT_OFFSET(ASBZCharacter, StatisticName); } \
	FORCEINLINE static uint32 __PPO__StatisticKillString() { return STRUCT_OFFSET(ASBZCharacter, StatisticKillString); } \
	FORCEINLINE static uint32 __PPO__CarryWeightTierOffset() { return STRUCT_OFFSET(ASBZCharacter, CarryWeightTierOffset); } \
	FORCEINLINE static uint32 __PPO__CurrentlyUsedThrowable() { return STRUCT_OFFSET(ASBZCharacter, CurrentlyUsedThrowable); } \
	FORCEINLINE static uint32 __PPO__ReplicatedThrowableArray() { return STRUCT_OFFSET(ASBZCharacter, ReplicatedThrowableArray); } \
	FORCEINLINE static uint32 __PPO__ReplicatedGrenadeProjectileArray() { return STRUCT_OFFSET(ASBZCharacter, ReplicatedGrenadeProjectileArray); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacter_h_98_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacter_h_100_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacter_h_100_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacter_h_100_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacter_h_100_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacter_h_100_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacter_h_100_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacter_h_100_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacter_h_100_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCharacter_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacter_h_100_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacter_h_100_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacter_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacter_h_100_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacter_h_100_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCharacter_h_100_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
