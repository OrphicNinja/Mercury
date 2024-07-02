// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMissionState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMissionState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMissionState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMissionState();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGameStateBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDifficulty();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZEndMissionResult();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEndMissionResultData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSecurityCompany();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVariationSetData_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMilestoneType();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPowerUp_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerStateRemovedEvent();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDamageEvent();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnFBIActivationChanged__DelegateSignature();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStatisticCodeCollection();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRepSharedKeyItemTags();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZKeyItemData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBagManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAICrewState_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippableConfig();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDialogManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAgentManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRagdollSyncManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVehicleManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActorPoolManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSmallTalkManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWindManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineSharedState_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPreplanningAsset();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticDestructionComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVariationSeedGenerator();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDSChallengeManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HeistDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerCharacterData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZMissionState::execAddPreplanningAsset)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_InPlayerId);
		P_GET_PROPERTY(FStrProperty,Z_Param_InSkuNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddPreplanningAsset(Z_Param_Out_InPlayerId,Z_Param_InSkuNo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execApplyPreplanningAssets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyPreplanningAssets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execGetCharacterSeed)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_GET_PROPERTY(FIntProperty,Z_Param_MixSeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCharacterSeed(Z_Param_Character,Z_Param_MixSeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execGetDifficulty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZDifficulty*)Z_Param__Result=P_THIS->GetDifficulty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execGetDifficultyIdx)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetDifficultyIdx();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execGetMissionResult)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZEndMissionResult*)Z_Param__Result=P_THIS->GetMissionResult();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execGetMissionResultData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZEndMissionResultData*)Z_Param__Result=P_THIS->GetMissionResultData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execGetMissionTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMissionTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execGetMixedRandomSeed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MixSeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMixedRandomSeed(Z_Param_MixSeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execGetMixedRandomStream)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MixSeed);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRandomStream*)Z_Param__Result=ASBZMissionState::GetMixedRandomStream(Z_Param_MixSeed,Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execGetRandomSeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRandomSeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execGetSBZMissionState)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASBZMissionState**)Z_Param__Result=ASBZMissionState::GetSBZMissionState(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execGetSecurityCompanies)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ESBZSecurityCompany>*)Z_Param__Result=P_THIS->GetSecurityCompanies();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execHandleSharedKeyItemTagChanged)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleSharedKeyItemTagChanged(Z_Param_Tag,Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execHasAttributedAllVariations)
	{
		P_GET_OBJECT(USBZVariationSetData,Z_Param_VariationData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAttributedAllVariations(Z_Param_VariationData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execHasPreplanningTag)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InTag);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ASBZMissionState::HasPreplanningTag(Z_Param_Out_InTag,Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execHasSharedKeyItemTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_InTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasSharedKeyItemTag(Z_Param_InTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execIsFBIActive)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ASBZMissionState::IsFBIActive(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execIsTutorialLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTutorialLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execMulticast_MissionEnd)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OutroVariation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_MissionEnd_Implementation(Z_Param_OutroVariation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execMulticast_MissionResult)
	{
		P_GET_STRUCT(FSBZEndMissionResultData,Z_Param_InMissionResultData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_MissionResult_Implementation(Z_Param_InMissionResultData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execMulticast_OnAmmoSpecialistHighGrainSkillActivated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnAmmoSpecialistHighGrainSkillActivated_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execMulticast_OnAmmoSpecialistHighGrainSkillDeactivated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnAmmoSpecialistHighGrainSkillDeactivated_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execMulticast_SetBlockedBagMarkers)
	{
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_InBlockedBagMarkers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetBlockedBagMarkers_Implementation(Z_Param_InBlockedBagMarkers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execMulticast_SetEscapeTimeLeft)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetEscapeTimeLeft_Implementation(Z_Param_NewTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execMulticast_SetEscapeVolumeData)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InPlayersInVolume);
		P_GET_PROPERTY(FByteProperty,Z_Param_InTotal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetEscapeVolumeData_Implementation(Z_Param_InPlayersInVolume,Z_Param_InTotal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execMulticast_SkipIntroSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SkipIntroSequence_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execMulticast_StartOverkillCooldown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_StartOverkillCooldown_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execNotifyClientPassedMilestone)
	{
		P_GET_ENUM(ESBZMilestoneType,Z_Param_MilestoneType);
		P_GET_PROPERTY(FStrProperty,Z_Param_MilestoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyClientPassedMilestone_Implementation(ESBZMilestoneType(Z_Param_MilestoneType),Z_Param_MilestoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execOnActionPhaseExited)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionPhaseExited();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execOnActionPhaseStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionPhaseStarted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execOnAmmoSpecialistHighGrainSkillTimeChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_OldTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAmmoSpecialistHighGrainSkillTimeChanged(Z_Param_OldTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execOnBlackScreenStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBlackScreenStarted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execOnRep_BlockedBagMarkers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BlockedBagMarkers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execOnRep_Difficulty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Difficulty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execOnRep_EscapeTimeLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_EscapeTimeLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execOnRep_IsIntroSequenceSkipped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsIntroSequenceSkipped();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execOnRep_PlayersInEscapeVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PlayersInEscapeVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execOnRep_PlayersRequiredInEscapeVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PlayersRequiredInEscapeVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execOnRep_PreplanningAssetsApplied)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PreplanningAssetsApplied();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execOnRep_RandomSeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_RandomSeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execOnRep_ServerChangelist)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ServerChangelist();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execOnSecurityCompaniesChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSecurityCompaniesChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execOnServerPowerUpPickedUp)
	{
		P_GET_OBJECT(ASBZPowerUp,Z_Param_PowerUp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnServerPowerUpPickedUp(Z_Param_PowerUp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execOnStandaloneNetIDEndPlay)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStandaloneNetIDEndPlay(Z_Param_Actor,EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execPlayerStateRemovedDuringEndMission)
	{
		P_GET_STRUCT_REF(FSBZPlayerStateRemovedEvent,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerStateRemovedDuringEndMission(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execRemovePreplanningAsset)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_InPlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePreplanningAsset(Z_Param_Out_InPlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execResetPreplanningAssets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetPreplanningAssets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execRewardCompleteExperienceMilestone)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MilestoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RewardCompleteExperienceMilestone(Z_Param_MilestoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execRewardCompleteExperienceObjective)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ObjectName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RewardCompleteExperienceObjective(Z_Param_ObjectName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionState::execServerPostOnTakenDamageEvent)
	{
		P_GET_STRUCT_REF(FSBZDamageEvent,Z_Param_Out_DamageEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerPostOnTakenDamageEvent(Z_Param_Out_DamageEventData);
		P_NATIVE_END;
	}
	static FName NAME_ASBZMissionState_BP_OnHideAllOutlinesChanged = FName(TEXT("BP_OnHideAllOutlinesChanged"));
	void ASBZMissionState::BP_OnHideAllOutlinesChanged(bool bIsHidden)
	{
		SBZMissionState_eventBP_OnHideAllOutlinesChanged_Parms Parms;
		Parms.bIsHidden=bIsHidden ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZMissionState_BP_OnHideAllOutlinesChanged),&Parms);
	}
	static FName NAME_ASBZMissionState_Multicast_MissionEnd = FName(TEXT("Multicast_MissionEnd"));
	void ASBZMissionState::Multicast_MissionEnd(const int32 OutroVariation)
	{
		SBZMissionState_eventMulticast_MissionEnd_Parms Parms;
		Parms.OutroVariation=OutroVariation;
		ProcessEvent(FindFunctionChecked(NAME_ASBZMissionState_Multicast_MissionEnd),&Parms);
	}
	static FName NAME_ASBZMissionState_Multicast_MissionResult = FName(TEXT("Multicast_MissionResult"));
	void ASBZMissionState::Multicast_MissionResult(FSBZEndMissionResultData const& InMissionResultData)
	{
		SBZMissionState_eventMulticast_MissionResult_Parms Parms;
		Parms.InMissionResultData=InMissionResultData;
		ProcessEvent(FindFunctionChecked(NAME_ASBZMissionState_Multicast_MissionResult),&Parms);
	}
	static FName NAME_ASBZMissionState_Multicast_OnAmmoSpecialistHighGrainSkillActivated = FName(TEXT("Multicast_OnAmmoSpecialistHighGrainSkillActivated"));
	void ASBZMissionState::Multicast_OnAmmoSpecialistHighGrainSkillActivated()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZMissionState_Multicast_OnAmmoSpecialistHighGrainSkillActivated),NULL);
	}
	static FName NAME_ASBZMissionState_Multicast_OnAmmoSpecialistHighGrainSkillDeactivated = FName(TEXT("Multicast_OnAmmoSpecialistHighGrainSkillDeactivated"));
	void ASBZMissionState::Multicast_OnAmmoSpecialistHighGrainSkillDeactivated()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZMissionState_Multicast_OnAmmoSpecialistHighGrainSkillDeactivated),NULL);
	}
	static FName NAME_ASBZMissionState_Multicast_SetBlockedBagMarkers = FName(TEXT("Multicast_SetBlockedBagMarkers"));
	void ASBZMissionState::Multicast_SetBlockedBagMarkers(FGameplayTagContainer const& InBlockedBagMarkers)
	{
		SBZMissionState_eventMulticast_SetBlockedBagMarkers_Parms Parms;
		Parms.InBlockedBagMarkers=InBlockedBagMarkers;
		ProcessEvent(FindFunctionChecked(NAME_ASBZMissionState_Multicast_SetBlockedBagMarkers),&Parms);
	}
	static FName NAME_ASBZMissionState_Multicast_SetEscapeTimeLeft = FName(TEXT("Multicast_SetEscapeTimeLeft"));
	void ASBZMissionState::Multicast_SetEscapeTimeLeft(const int32 NewTime)
	{
		SBZMissionState_eventMulticast_SetEscapeTimeLeft_Parms Parms;
		Parms.NewTime=NewTime;
		ProcessEvent(FindFunctionChecked(NAME_ASBZMissionState_Multicast_SetEscapeTimeLeft),&Parms);
	}
	static FName NAME_ASBZMissionState_Multicast_SetEscapeVolumeData = FName(TEXT("Multicast_SetEscapeVolumeData"));
	void ASBZMissionState::Multicast_SetEscapeVolumeData(const uint8 InPlayersInVolume, const uint8 InTotal)
	{
		SBZMissionState_eventMulticast_SetEscapeVolumeData_Parms Parms;
		Parms.InPlayersInVolume=InPlayersInVolume;
		Parms.InTotal=InTotal;
		ProcessEvent(FindFunctionChecked(NAME_ASBZMissionState_Multicast_SetEscapeVolumeData),&Parms);
	}
	static FName NAME_ASBZMissionState_Multicast_SkipIntroSequence = FName(TEXT("Multicast_SkipIntroSequence"));
	void ASBZMissionState::Multicast_SkipIntroSequence()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZMissionState_Multicast_SkipIntroSequence),NULL);
	}
	static FName NAME_ASBZMissionState_Multicast_StartOverkillCooldown = FName(TEXT("Multicast_StartOverkillCooldown"));
	void ASBZMissionState::Multicast_StartOverkillCooldown()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZMissionState_Multicast_StartOverkillCooldown),NULL);
	}
	static FName NAME_ASBZMissionState_NotifyClientPassedMilestone = FName(TEXT("NotifyClientPassedMilestone"));
	void ASBZMissionState::NotifyClientPassedMilestone(ESBZMilestoneType MilestoneType, const FString& MilestoneName)
	{
		SBZMissionState_eventNotifyClientPassedMilestone_Parms Parms;
		Parms.MilestoneType=MilestoneType;
		Parms.MilestoneName=MilestoneName;
		ProcessEvent(FindFunctionChecked(NAME_ASBZMissionState_NotifyClientPassedMilestone),&Parms);
	}
	void ASBZMissionState::StaticRegisterNativesASBZMissionState()
	{
		UClass* Class = ASBZMissionState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPreplanningAsset", &ASBZMissionState::execAddPreplanningAsset },
			{ "ApplyPreplanningAssets", &ASBZMissionState::execApplyPreplanningAssets },
			{ "GetCharacterSeed", &ASBZMissionState::execGetCharacterSeed },
			{ "GetDifficulty", &ASBZMissionState::execGetDifficulty },
			{ "GetDifficultyIdx", &ASBZMissionState::execGetDifficultyIdx },
			{ "GetMissionResult", &ASBZMissionState::execGetMissionResult },
			{ "GetMissionResultData", &ASBZMissionState::execGetMissionResultData },
			{ "GetMissionTime", &ASBZMissionState::execGetMissionTime },
			{ "GetMixedRandomSeed", &ASBZMissionState::execGetMixedRandomSeed },
			{ "GetMixedRandomStream", &ASBZMissionState::execGetMixedRandomStream },
			{ "GetRandomSeed", &ASBZMissionState::execGetRandomSeed },
			{ "GetSBZMissionState", &ASBZMissionState::execGetSBZMissionState },
			{ "GetSecurityCompanies", &ASBZMissionState::execGetSecurityCompanies },
			{ "HandleSharedKeyItemTagChanged", &ASBZMissionState::execHandleSharedKeyItemTagChanged },
			{ "HasAttributedAllVariations", &ASBZMissionState::execHasAttributedAllVariations },
			{ "HasPreplanningTag", &ASBZMissionState::execHasPreplanningTag },
			{ "HasSharedKeyItemTag", &ASBZMissionState::execHasSharedKeyItemTag },
			{ "IsFBIActive", &ASBZMissionState::execIsFBIActive },
			{ "IsTutorialLevel", &ASBZMissionState::execIsTutorialLevel },
			{ "Multicast_MissionEnd", &ASBZMissionState::execMulticast_MissionEnd },
			{ "Multicast_MissionResult", &ASBZMissionState::execMulticast_MissionResult },
			{ "Multicast_OnAmmoSpecialistHighGrainSkillActivated", &ASBZMissionState::execMulticast_OnAmmoSpecialistHighGrainSkillActivated },
			{ "Multicast_OnAmmoSpecialistHighGrainSkillDeactivated", &ASBZMissionState::execMulticast_OnAmmoSpecialistHighGrainSkillDeactivated },
			{ "Multicast_SetBlockedBagMarkers", &ASBZMissionState::execMulticast_SetBlockedBagMarkers },
			{ "Multicast_SetEscapeTimeLeft", &ASBZMissionState::execMulticast_SetEscapeTimeLeft },
			{ "Multicast_SetEscapeVolumeData", &ASBZMissionState::execMulticast_SetEscapeVolumeData },
			{ "Multicast_SkipIntroSequence", &ASBZMissionState::execMulticast_SkipIntroSequence },
			{ "Multicast_StartOverkillCooldown", &ASBZMissionState::execMulticast_StartOverkillCooldown },
			{ "NotifyClientPassedMilestone", &ASBZMissionState::execNotifyClientPassedMilestone },
			{ "OnActionPhaseExited", &ASBZMissionState::execOnActionPhaseExited },
			{ "OnActionPhaseStarted", &ASBZMissionState::execOnActionPhaseStarted },
			{ "OnAmmoSpecialistHighGrainSkillTimeChanged", &ASBZMissionState::execOnAmmoSpecialistHighGrainSkillTimeChanged },
			{ "OnBlackScreenStarted", &ASBZMissionState::execOnBlackScreenStarted },
			{ "OnRep_BlockedBagMarkers", &ASBZMissionState::execOnRep_BlockedBagMarkers },
			{ "OnRep_Difficulty", &ASBZMissionState::execOnRep_Difficulty },
			{ "OnRep_EscapeTimeLeft", &ASBZMissionState::execOnRep_EscapeTimeLeft },
			{ "OnRep_IsIntroSequenceSkipped", &ASBZMissionState::execOnRep_IsIntroSequenceSkipped },
			{ "OnRep_PlayersInEscapeVolume", &ASBZMissionState::execOnRep_PlayersInEscapeVolume },
			{ "OnRep_PlayersRequiredInEscapeVolume", &ASBZMissionState::execOnRep_PlayersRequiredInEscapeVolume },
			{ "OnRep_PreplanningAssetsApplied", &ASBZMissionState::execOnRep_PreplanningAssetsApplied },
			{ "OnRep_RandomSeed", &ASBZMissionState::execOnRep_RandomSeed },
			{ "OnRep_ServerChangelist", &ASBZMissionState::execOnRep_ServerChangelist },
			{ "OnSecurityCompaniesChanged", &ASBZMissionState::execOnSecurityCompaniesChanged },
			{ "OnServerPowerUpPickedUp", &ASBZMissionState::execOnServerPowerUpPickedUp },
			{ "OnStandaloneNetIDEndPlay", &ASBZMissionState::execOnStandaloneNetIDEndPlay },
			{ "PlayerStateRemovedDuringEndMission", &ASBZMissionState::execPlayerStateRemovedDuringEndMission },
			{ "RemovePreplanningAsset", &ASBZMissionState::execRemovePreplanningAsset },
			{ "ResetPreplanningAssets", &ASBZMissionState::execResetPreplanningAssets },
			{ "RewardCompleteExperienceMilestone", &ASBZMissionState::execRewardCompleteExperienceMilestone },
			{ "RewardCompleteExperienceObjective", &ASBZMissionState::execRewardCompleteExperienceObjective },
			{ "ServerPostOnTakenDamageEvent", &ASBZMissionState::execServerPostOnTakenDamageEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZMissionState_AddPreplanningAsset_Statics
	{
		struct SBZMissionState_eventAddPreplanningAsset_Parms
		{
			FUniqueNetIdRepl InPlayerId;
			FString InSkuNo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPlayerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSkuNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InSkuNo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_AddPreplanningAsset_Statics::NewProp_InPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZMissionState_AddPreplanningAsset_Statics::NewProp_InPlayerId = { "InPlayerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventAddPreplanningAsset_Parms, InPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_AddPreplanningAsset_Statics::NewProp_InPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_AddPreplanningAsset_Statics::NewProp_InPlayerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_AddPreplanningAsset_Statics::NewProp_InSkuNo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZMissionState_AddPreplanningAsset_Statics::NewProp_InSkuNo = { "InSkuNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventAddPreplanningAsset_Parms, InSkuNo), METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_AddPreplanningAsset_Statics::NewProp_InSkuNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_AddPreplanningAsset_Statics::NewProp_InSkuNo_MetaData)) };
	void Z_Construct_UFunction_ASBZMissionState_AddPreplanningAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMissionState_eventAddPreplanningAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZMissionState_AddPreplanningAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMissionState_eventAddPreplanningAsset_Parms), &Z_Construct_UFunction_ASBZMissionState_AddPreplanningAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMissionState_AddPreplanningAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_AddPreplanningAsset_Statics::NewProp_InPlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_AddPreplanningAsset_Statics::NewProp_InSkuNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_AddPreplanningAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_AddPreplanningAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_AddPreplanningAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "AddPreplanningAsset", nullptr, nullptr, sizeof(SBZMissionState_eventAddPreplanningAsset_Parms), Z_Construct_UFunction_ASBZMissionState_AddPreplanningAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_AddPreplanningAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_AddPreplanningAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_AddPreplanningAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_AddPreplanningAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_AddPreplanningAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_ApplyPreplanningAssets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_ApplyPreplanningAssets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_ApplyPreplanningAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "ApplyPreplanningAssets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_ApplyPreplanningAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_ApplyPreplanningAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_ApplyPreplanningAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_ApplyPreplanningAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_BP_OnHideAllOutlinesChanged_Statics
	{
		static void NewProp_bIsHidden_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHidden;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZMissionState_BP_OnHideAllOutlinesChanged_Statics::NewProp_bIsHidden_SetBit(void* Obj)
	{
		((SBZMissionState_eventBP_OnHideAllOutlinesChanged_Parms*)Obj)->bIsHidden = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZMissionState_BP_OnHideAllOutlinesChanged_Statics::NewProp_bIsHidden = { "bIsHidden", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMissionState_eventBP_OnHideAllOutlinesChanged_Parms), &Z_Construct_UFunction_ASBZMissionState_BP_OnHideAllOutlinesChanged_Statics::NewProp_bIsHidden_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMissionState_BP_OnHideAllOutlinesChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_BP_OnHideAllOutlinesChanged_Statics::NewProp_bIsHidden,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_BP_OnHideAllOutlinesChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_BP_OnHideAllOutlinesChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "BP_OnHideAllOutlinesChanged", nullptr, nullptr, sizeof(SBZMissionState_eventBP_OnHideAllOutlinesChanged_Parms), Z_Construct_UFunction_ASBZMissionState_BP_OnHideAllOutlinesChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_BP_OnHideAllOutlinesChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_BP_OnHideAllOutlinesChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_BP_OnHideAllOutlinesChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_BP_OnHideAllOutlinesChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_BP_OnHideAllOutlinesChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_GetCharacterSeed_Statics
	{
		struct SBZMissionState_eventGetCharacterSeed_Parms
		{
			const ASBZCharacter* Character;
			int32 MixSeed;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MixSeed;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_GetCharacterSeed_Statics::NewProp_Character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZMissionState_GetCharacterSeed_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventGetCharacterSeed_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_GetCharacterSeed_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_GetCharacterSeed_Statics::NewProp_Character_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZMissionState_GetCharacterSeed_Statics::NewProp_MixSeed = { "MixSeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventGetCharacterSeed_Parms, MixSeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZMissionState_GetCharacterSeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventGetCharacterSeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMissionState_GetCharacterSeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_GetCharacterSeed_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_GetCharacterSeed_Statics::NewProp_MixSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_GetCharacterSeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_GetCharacterSeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_GetCharacterSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "GetCharacterSeed", nullptr, nullptr, sizeof(SBZMissionState_eventGetCharacterSeed_Parms), Z_Construct_UFunction_ASBZMissionState_GetCharacterSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_GetCharacterSeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_GetCharacterSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_GetCharacterSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_GetCharacterSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_GetCharacterSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_GetDifficulty_Statics
	{
		struct SBZMissionState_eventGetDifficulty_Parms
		{
			ESBZDifficulty ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZMissionState_GetDifficulty_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZMissionState_GetDifficulty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventGetDifficulty_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZDifficulty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMissionState_GetDifficulty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_GetDifficulty_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_GetDifficulty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_GetDifficulty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_GetDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "GetDifficulty", nullptr, nullptr, sizeof(SBZMissionState_eventGetDifficulty_Parms), Z_Construct_UFunction_ASBZMissionState_GetDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_GetDifficulty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_GetDifficulty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_GetDifficulty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_GetDifficulty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_GetDifficulty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_GetDifficultyIdx_Statics
	{
		struct SBZMissionState_eventGetDifficultyIdx_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZMissionState_GetDifficultyIdx_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventGetDifficultyIdx_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMissionState_GetDifficultyIdx_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_GetDifficultyIdx_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_GetDifficultyIdx_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_GetDifficultyIdx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "GetDifficultyIdx", nullptr, nullptr, sizeof(SBZMissionState_eventGetDifficultyIdx_Parms), Z_Construct_UFunction_ASBZMissionState_GetDifficultyIdx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_GetDifficultyIdx_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_GetDifficultyIdx_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_GetDifficultyIdx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_GetDifficultyIdx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_GetDifficultyIdx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_GetMissionResult_Statics
	{
		struct SBZMissionState_eventGetMissionResult_Parms
		{
			ESBZEndMissionResult ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZMissionState_GetMissionResult_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZMissionState_GetMissionResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventGetMissionResult_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZEndMissionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMissionState_GetMissionResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_GetMissionResult_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_GetMissionResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_GetMissionResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_GetMissionResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "GetMissionResult", nullptr, nullptr, sizeof(SBZMissionState_eventGetMissionResult_Parms), Z_Construct_UFunction_ASBZMissionState_GetMissionResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_GetMissionResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_GetMissionResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_GetMissionResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_GetMissionResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_GetMissionResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_GetMissionResultData_Statics
	{
		struct SBZMissionState_eventGetMissionResultData_Parms
		{
			FSBZEndMissionResultData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZMissionState_GetMissionResultData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventGetMissionResultData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZEndMissionResultData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMissionState_GetMissionResultData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_GetMissionResultData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_GetMissionResultData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_GetMissionResultData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "GetMissionResultData", nullptr, nullptr, sizeof(SBZMissionState_eventGetMissionResultData_Parms), Z_Construct_UFunction_ASBZMissionState_GetMissionResultData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_GetMissionResultData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_GetMissionResultData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_GetMissionResultData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_GetMissionResultData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_GetMissionResultData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_GetMissionTime_Statics
	{
		struct SBZMissionState_eventGetMissionTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZMissionState_GetMissionTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventGetMissionTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMissionState_GetMissionTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_GetMissionTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_GetMissionTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_GetMissionTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "GetMissionTime", nullptr, nullptr, sizeof(SBZMissionState_eventGetMissionTime_Parms), Z_Construct_UFunction_ASBZMissionState_GetMissionTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_GetMissionTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_GetMissionTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_GetMissionTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_GetMissionTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_GetMissionTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_GetMixedRandomSeed_Statics
	{
		struct SBZMissionState_eventGetMixedRandomSeed_Parms
		{
			int32 MixSeed;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MixSeed;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZMissionState_GetMixedRandomSeed_Statics::NewProp_MixSeed = { "MixSeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventGetMixedRandomSeed_Parms, MixSeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZMissionState_GetMixedRandomSeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventGetMixedRandomSeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMissionState_GetMixedRandomSeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_GetMixedRandomSeed_Statics::NewProp_MixSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_GetMixedRandomSeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_GetMixedRandomSeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_GetMixedRandomSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "GetMixedRandomSeed", nullptr, nullptr, sizeof(SBZMissionState_eventGetMixedRandomSeed_Parms), Z_Construct_UFunction_ASBZMissionState_GetMixedRandomSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_GetMixedRandomSeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_GetMixedRandomSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_GetMixedRandomSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_GetMixedRandomSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_GetMixedRandomSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_GetMixedRandomStream_Statics
	{
		struct SBZMissionState_eventGetMixedRandomStream_Parms
		{
			int32 MixSeed;
			const UObject* WorldContextObject;
			FRandomStream ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MixSeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZMissionState_GetMixedRandomStream_Statics::NewProp_MixSeed = { "MixSeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventGetMixedRandomStream_Parms, MixSeed), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_GetMixedRandomStream_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZMissionState_GetMixedRandomStream_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventGetMixedRandomStream_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_GetMixedRandomStream_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_GetMixedRandomStream_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZMissionState_GetMixedRandomStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventGetMixedRandomStream_Parms, ReturnValue), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMissionState_GetMixedRandomStream_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_GetMixedRandomStream_Statics::NewProp_MixSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_GetMixedRandomStream_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_GetMixedRandomStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_GetMixedRandomStream_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_GetMixedRandomStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "GetMixedRandomStream", nullptr, nullptr, sizeof(SBZMissionState_eventGetMixedRandomStream_Parms), Z_Construct_UFunction_ASBZMissionState_GetMixedRandomStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_GetMixedRandomStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_GetMixedRandomStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_GetMixedRandomStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_GetMixedRandomStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_GetMixedRandomStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_GetRandomSeed_Statics
	{
		struct SBZMissionState_eventGetRandomSeed_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZMissionState_GetRandomSeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventGetRandomSeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMissionState_GetRandomSeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_GetRandomSeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_GetRandomSeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_GetRandomSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "GetRandomSeed", nullptr, nullptr, sizeof(SBZMissionState_eventGetRandomSeed_Parms), Z_Construct_UFunction_ASBZMissionState_GetRandomSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_GetRandomSeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_GetRandomSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_GetRandomSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_GetRandomSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_GetRandomSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_GetSBZMissionState_Statics
	{
		struct SBZMissionState_eventGetSBZMissionState_Parms
		{
			const UObject* WorldContextObject;
			ASBZMissionState* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_GetSBZMissionState_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZMissionState_GetSBZMissionState_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventGetSBZMissionState_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_GetSBZMissionState_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_GetSBZMissionState_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZMissionState_GetSBZMissionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventGetSBZMissionState_Parms, ReturnValue), Z_Construct_UClass_ASBZMissionState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMissionState_GetSBZMissionState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_GetSBZMissionState_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_GetSBZMissionState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_GetSBZMissionState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_GetSBZMissionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "GetSBZMissionState", nullptr, nullptr, sizeof(SBZMissionState_eventGetSBZMissionState_Parms), Z_Construct_UFunction_ASBZMissionState_GetSBZMissionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_GetSBZMissionState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_GetSBZMissionState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_GetSBZMissionState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_GetSBZMissionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_GetSBZMissionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_GetSecurityCompanies_Statics
	{
		struct SBZMissionState_eventGetSecurityCompanies_Parms
		{
			TArray<ESBZSecurityCompany> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZMissionState_GetSecurityCompanies_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZMissionState_GetSecurityCompanies_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZSecurityCompany, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZMissionState_GetSecurityCompanies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventGetSecurityCompanies_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMissionState_GetSecurityCompanies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_GetSecurityCompanies_Statics::NewProp_ReturnValue_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_GetSecurityCompanies_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_GetSecurityCompanies_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_GetSecurityCompanies_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_GetSecurityCompanies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "GetSecurityCompanies", nullptr, nullptr, sizeof(SBZMissionState_eventGetSecurityCompanies_Parms), Z_Construct_UFunction_ASBZMissionState_GetSecurityCompanies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_GetSecurityCompanies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_GetSecurityCompanies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_GetSecurityCompanies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_GetSecurityCompanies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_GetSecurityCompanies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_HandleSharedKeyItemTagChanged_Statics
	{
		struct SBZMissionState_eventHandleSharedKeyItemTagChanged_Parms
		{
			FGameplayTag Tag;
			int32 Count;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_HandleSharedKeyItemTagChanged_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZMissionState_HandleSharedKeyItemTagChanged_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventHandleSharedKeyItemTagChanged_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_HandleSharedKeyItemTagChanged_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_HandleSharedKeyItemTagChanged_Statics::NewProp_Tag_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZMissionState_HandleSharedKeyItemTagChanged_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventHandleSharedKeyItemTagChanged_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMissionState_HandleSharedKeyItemTagChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_HandleSharedKeyItemTagChanged_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_HandleSharedKeyItemTagChanged_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_HandleSharedKeyItemTagChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_HandleSharedKeyItemTagChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "HandleSharedKeyItemTagChanged", nullptr, nullptr, sizeof(SBZMissionState_eventHandleSharedKeyItemTagChanged_Parms), Z_Construct_UFunction_ASBZMissionState_HandleSharedKeyItemTagChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_HandleSharedKeyItemTagChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_HandleSharedKeyItemTagChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_HandleSharedKeyItemTagChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_HandleSharedKeyItemTagChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_HandleSharedKeyItemTagChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_HasAttributedAllVariations_Statics
	{
		struct SBZMissionState_eventHasAttributedAllVariations_Parms
		{
			const USBZVariationSetData* VariationData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VariationData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_HasAttributedAllVariations_Statics::NewProp_VariationData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZMissionState_HasAttributedAllVariations_Statics::NewProp_VariationData = { "VariationData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventHasAttributedAllVariations_Parms, VariationData), Z_Construct_UClass_USBZVariationSetData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_HasAttributedAllVariations_Statics::NewProp_VariationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_HasAttributedAllVariations_Statics::NewProp_VariationData_MetaData)) };
	void Z_Construct_UFunction_ASBZMissionState_HasAttributedAllVariations_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMissionState_eventHasAttributedAllVariations_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZMissionState_HasAttributedAllVariations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMissionState_eventHasAttributedAllVariations_Parms), &Z_Construct_UFunction_ASBZMissionState_HasAttributedAllVariations_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMissionState_HasAttributedAllVariations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_HasAttributedAllVariations_Statics::NewProp_VariationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_HasAttributedAllVariations_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_HasAttributedAllVariations_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_HasAttributedAllVariations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "HasAttributedAllVariations", nullptr, nullptr, sizeof(SBZMissionState_eventHasAttributedAllVariations_Parms), Z_Construct_UFunction_ASBZMissionState_HasAttributedAllVariations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_HasAttributedAllVariations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_HasAttributedAllVariations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_HasAttributedAllVariations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_HasAttributedAllVariations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_HasAttributedAllVariations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_HasPreplanningTag_Statics
	{
		struct SBZMissionState_eventHasPreplanningTag_Parms
		{
			FGameplayTag InTag;
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_HasPreplanningTag_Statics::NewProp_InTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZMissionState_HasPreplanningTag_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventHasPreplanningTag_Parms, InTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_HasPreplanningTag_Statics::NewProp_InTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_HasPreplanningTag_Statics::NewProp_InTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_HasPreplanningTag_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZMissionState_HasPreplanningTag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventHasPreplanningTag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_HasPreplanningTag_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_HasPreplanningTag_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_ASBZMissionState_HasPreplanningTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMissionState_eventHasPreplanningTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZMissionState_HasPreplanningTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMissionState_eventHasPreplanningTag_Parms), &Z_Construct_UFunction_ASBZMissionState_HasPreplanningTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMissionState_HasPreplanningTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_HasPreplanningTag_Statics::NewProp_InTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_HasPreplanningTag_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_HasPreplanningTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_HasPreplanningTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_HasPreplanningTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "HasPreplanningTag", nullptr, nullptr, sizeof(SBZMissionState_eventHasPreplanningTag_Parms), Z_Construct_UFunction_ASBZMissionState_HasPreplanningTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_HasPreplanningTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_HasPreplanningTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_HasPreplanningTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_HasPreplanningTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_HasPreplanningTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_HasSharedKeyItemTag_Statics
	{
		struct SBZMissionState_eventHasSharedKeyItemTag_Parms
		{
			FGameplayTag InTag;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZMissionState_HasSharedKeyItemTag_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventHasSharedKeyItemTag_Parms, InTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZMissionState_HasSharedKeyItemTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMissionState_eventHasSharedKeyItemTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZMissionState_HasSharedKeyItemTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMissionState_eventHasSharedKeyItemTag_Parms), &Z_Construct_UFunction_ASBZMissionState_HasSharedKeyItemTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMissionState_HasSharedKeyItemTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_HasSharedKeyItemTag_Statics::NewProp_InTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_HasSharedKeyItemTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_HasSharedKeyItemTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_HasSharedKeyItemTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "HasSharedKeyItemTag", nullptr, nullptr, sizeof(SBZMissionState_eventHasSharedKeyItemTag_Parms), Z_Construct_UFunction_ASBZMissionState_HasSharedKeyItemTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_HasSharedKeyItemTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_HasSharedKeyItemTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_HasSharedKeyItemTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_HasSharedKeyItemTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_HasSharedKeyItemTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_IsFBIActive_Statics
	{
		struct SBZMissionState_eventIsFBIActive_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_IsFBIActive_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZMissionState_IsFBIActive_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventIsFBIActive_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_IsFBIActive_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_IsFBIActive_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_ASBZMissionState_IsFBIActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMissionState_eventIsFBIActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZMissionState_IsFBIActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMissionState_eventIsFBIActive_Parms), &Z_Construct_UFunction_ASBZMissionState_IsFBIActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMissionState_IsFBIActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_IsFBIActive_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_IsFBIActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_IsFBIActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_IsFBIActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "IsFBIActive", nullptr, nullptr, sizeof(SBZMissionState_eventIsFBIActive_Parms), Z_Construct_UFunction_ASBZMissionState_IsFBIActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_IsFBIActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_IsFBIActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_IsFBIActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_IsFBIActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_IsFBIActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_IsTutorialLevel_Statics
	{
		struct SBZMissionState_eventIsTutorialLevel_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZMissionState_IsTutorialLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMissionState_eventIsTutorialLevel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZMissionState_IsTutorialLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMissionState_eventIsTutorialLevel_Parms), &Z_Construct_UFunction_ASBZMissionState_IsTutorialLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMissionState_IsTutorialLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_IsTutorialLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_IsTutorialLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_IsTutorialLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "IsTutorialLevel", nullptr, nullptr, sizeof(SBZMissionState_eventIsTutorialLevel_Parms), Z_Construct_UFunction_ASBZMissionState_IsTutorialLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_IsTutorialLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_IsTutorialLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_IsTutorialLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_IsTutorialLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_IsTutorialLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_Multicast_MissionEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutroVariation_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutroVariation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_Multicast_MissionEnd_Statics::NewProp_OutroVariation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZMissionState_Multicast_MissionEnd_Statics::NewProp_OutroVariation = { "OutroVariation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventMulticast_MissionEnd_Parms, OutroVariation), METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_Multicast_MissionEnd_Statics::NewProp_OutroVariation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_Multicast_MissionEnd_Statics::NewProp_OutroVariation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMissionState_Multicast_MissionEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_Multicast_MissionEnd_Statics::NewProp_OutroVariation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_Multicast_MissionEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_Multicast_MissionEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "Multicast_MissionEnd", nullptr, nullptr, sizeof(SBZMissionState_eventMulticast_MissionEnd_Parms), Z_Construct_UFunction_ASBZMissionState_Multicast_MissionEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_Multicast_MissionEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_Multicast_MissionEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_Multicast_MissionEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_Multicast_MissionEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_Multicast_MissionEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_Multicast_MissionResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMissionResultData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InMissionResultData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_Multicast_MissionResult_Statics::NewProp_InMissionResultData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZMissionState_Multicast_MissionResult_Statics::NewProp_InMissionResultData = { "InMissionResultData", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventMulticast_MissionResult_Parms, InMissionResultData), Z_Construct_UScriptStruct_FSBZEndMissionResultData, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_Multicast_MissionResult_Statics::NewProp_InMissionResultData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_Multicast_MissionResult_Statics::NewProp_InMissionResultData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMissionState_Multicast_MissionResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_Multicast_MissionResult_Statics::NewProp_InMissionResultData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_Multicast_MissionResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_Multicast_MissionResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "Multicast_MissionResult", nullptr, nullptr, sizeof(SBZMissionState_eventMulticast_MissionResult_Parms), Z_Construct_UFunction_ASBZMissionState_Multicast_MissionResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_Multicast_MissionResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_Multicast_MissionResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_Multicast_MissionResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_Multicast_MissionResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_Multicast_MissionResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_Multicast_OnAmmoSpecialistHighGrainSkillActivated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_Multicast_OnAmmoSpecialistHighGrainSkillActivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_Multicast_OnAmmoSpecialistHighGrainSkillActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "Multicast_OnAmmoSpecialistHighGrainSkillActivated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_Multicast_OnAmmoSpecialistHighGrainSkillActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_Multicast_OnAmmoSpecialistHighGrainSkillActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_Multicast_OnAmmoSpecialistHighGrainSkillActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_Multicast_OnAmmoSpecialistHighGrainSkillActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_Multicast_OnAmmoSpecialistHighGrainSkillDeactivated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_Multicast_OnAmmoSpecialistHighGrainSkillDeactivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_Multicast_OnAmmoSpecialistHighGrainSkillDeactivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "Multicast_OnAmmoSpecialistHighGrainSkillDeactivated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_Multicast_OnAmmoSpecialistHighGrainSkillDeactivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_Multicast_OnAmmoSpecialistHighGrainSkillDeactivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_Multicast_OnAmmoSpecialistHighGrainSkillDeactivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_Multicast_OnAmmoSpecialistHighGrainSkillDeactivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_Multicast_SetBlockedBagMarkers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBlockedBagMarkers_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBlockedBagMarkers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_Multicast_SetBlockedBagMarkers_Statics::NewProp_InBlockedBagMarkers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZMissionState_Multicast_SetBlockedBagMarkers_Statics::NewProp_InBlockedBagMarkers = { "InBlockedBagMarkers", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventMulticast_SetBlockedBagMarkers_Parms, InBlockedBagMarkers), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_Multicast_SetBlockedBagMarkers_Statics::NewProp_InBlockedBagMarkers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_Multicast_SetBlockedBagMarkers_Statics::NewProp_InBlockedBagMarkers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMissionState_Multicast_SetBlockedBagMarkers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_Multicast_SetBlockedBagMarkers_Statics::NewProp_InBlockedBagMarkers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_Multicast_SetBlockedBagMarkers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_Multicast_SetBlockedBagMarkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "Multicast_SetBlockedBagMarkers", nullptr, nullptr, sizeof(SBZMissionState_eventMulticast_SetBlockedBagMarkers_Parms), Z_Construct_UFunction_ASBZMissionState_Multicast_SetBlockedBagMarkers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_Multicast_SetBlockedBagMarkers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_Multicast_SetBlockedBagMarkers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_Multicast_SetBlockedBagMarkers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_Multicast_SetBlockedBagMarkers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_Multicast_SetBlockedBagMarkers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeTimeLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeTimeLeft_Statics::NewProp_NewTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeTimeLeft_Statics::NewProp_NewTime = { "NewTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventMulticast_SetEscapeTimeLeft_Parms, NewTime), METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeTimeLeft_Statics::NewProp_NewTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeTimeLeft_Statics::NewProp_NewTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeTimeLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeTimeLeft_Statics::NewProp_NewTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeTimeLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeTimeLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "Multicast_SetEscapeTimeLeft", nullptr, nullptr, sizeof(SBZMissionState_eventMulticast_SetEscapeTimeLeft_Parms), Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeTimeLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeTimeLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeTimeLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeTimeLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeTimeLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeTimeLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeVolumeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlayersInVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPlayersInVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTotal_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InTotal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeVolumeData_Statics::NewProp_InPlayersInVolume_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeVolumeData_Statics::NewProp_InPlayersInVolume = { "InPlayersInVolume", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventMulticast_SetEscapeVolumeData_Parms, InPlayersInVolume), nullptr, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeVolumeData_Statics::NewProp_InPlayersInVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeVolumeData_Statics::NewProp_InPlayersInVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeVolumeData_Statics::NewProp_InTotal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeVolumeData_Statics::NewProp_InTotal = { "InTotal", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventMulticast_SetEscapeVolumeData_Parms, InTotal), nullptr, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeVolumeData_Statics::NewProp_InTotal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeVolumeData_Statics::NewProp_InTotal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeVolumeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeVolumeData_Statics::NewProp_InPlayersInVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeVolumeData_Statics::NewProp_InTotal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeVolumeData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeVolumeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "Multicast_SetEscapeVolumeData", nullptr, nullptr, sizeof(SBZMissionState_eventMulticast_SetEscapeVolumeData_Parms), Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeVolumeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeVolumeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeVolumeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeVolumeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeVolumeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeVolumeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_Multicast_SkipIntroSequence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_Multicast_SkipIntroSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_Multicast_SkipIntroSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "Multicast_SkipIntroSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_Multicast_SkipIntroSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_Multicast_SkipIntroSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_Multicast_SkipIntroSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_Multicast_SkipIntroSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_Multicast_StartOverkillCooldown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_Multicast_StartOverkillCooldown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_Multicast_StartOverkillCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "Multicast_StartOverkillCooldown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_Multicast_StartOverkillCooldown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_Multicast_StartOverkillCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_Multicast_StartOverkillCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_Multicast_StartOverkillCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_NotifyClientPassedMilestone_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MilestoneType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MilestoneType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MilestoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MilestoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZMissionState_NotifyClientPassedMilestone_Statics::NewProp_MilestoneType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZMissionState_NotifyClientPassedMilestone_Statics::NewProp_MilestoneType = { "MilestoneType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventNotifyClientPassedMilestone_Parms, MilestoneType), Z_Construct_UEnum_Starbreeze_ESBZMilestoneType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_NotifyClientPassedMilestone_Statics::NewProp_MilestoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZMissionState_NotifyClientPassedMilestone_Statics::NewProp_MilestoneName = { "MilestoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventNotifyClientPassedMilestone_Parms, MilestoneName), METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_NotifyClientPassedMilestone_Statics::NewProp_MilestoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_NotifyClientPassedMilestone_Statics::NewProp_MilestoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMissionState_NotifyClientPassedMilestone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_NotifyClientPassedMilestone_Statics::NewProp_MilestoneType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_NotifyClientPassedMilestone_Statics::NewProp_MilestoneType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_NotifyClientPassedMilestone_Statics::NewProp_MilestoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_NotifyClientPassedMilestone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_NotifyClientPassedMilestone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "NotifyClientPassedMilestone", nullptr, nullptr, sizeof(SBZMissionState_eventNotifyClientPassedMilestone_Parms), Z_Construct_UFunction_ASBZMissionState_NotifyClientPassedMilestone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_NotifyClientPassedMilestone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_NotifyClientPassedMilestone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_NotifyClientPassedMilestone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_NotifyClientPassedMilestone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_NotifyClientPassedMilestone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_OnActionPhaseExited_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_OnActionPhaseExited_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_OnActionPhaseExited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "OnActionPhaseExited", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_OnActionPhaseExited_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_OnActionPhaseExited_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_OnActionPhaseExited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_OnActionPhaseExited_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_OnActionPhaseStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_OnActionPhaseStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_OnActionPhaseStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "OnActionPhaseStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_OnActionPhaseStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_OnActionPhaseStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_OnActionPhaseStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_OnActionPhaseStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_OnAmmoSpecialistHighGrainSkillTimeChanged_Statics
	{
		struct SBZMissionState_eventOnAmmoSpecialistHighGrainSkillTimeChanged_Parms
		{
			float OldTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OldTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZMissionState_OnAmmoSpecialistHighGrainSkillTimeChanged_Statics::NewProp_OldTime = { "OldTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventOnAmmoSpecialistHighGrainSkillTimeChanged_Parms, OldTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMissionState_OnAmmoSpecialistHighGrainSkillTimeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_OnAmmoSpecialistHighGrainSkillTimeChanged_Statics::NewProp_OldTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_OnAmmoSpecialistHighGrainSkillTimeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_OnAmmoSpecialistHighGrainSkillTimeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "OnAmmoSpecialistHighGrainSkillTimeChanged", nullptr, nullptr, sizeof(SBZMissionState_eventOnAmmoSpecialistHighGrainSkillTimeChanged_Parms), Z_Construct_UFunction_ASBZMissionState_OnAmmoSpecialistHighGrainSkillTimeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_OnAmmoSpecialistHighGrainSkillTimeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_OnAmmoSpecialistHighGrainSkillTimeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_OnAmmoSpecialistHighGrainSkillTimeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_OnAmmoSpecialistHighGrainSkillTimeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_OnAmmoSpecialistHighGrainSkillTimeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_OnBlackScreenStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_OnBlackScreenStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_OnBlackScreenStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "OnBlackScreenStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_OnBlackScreenStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_OnBlackScreenStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_OnBlackScreenStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_OnBlackScreenStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_OnRep_BlockedBagMarkers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_OnRep_BlockedBagMarkers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_OnRep_BlockedBagMarkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "OnRep_BlockedBagMarkers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_OnRep_BlockedBagMarkers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_OnRep_BlockedBagMarkers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_OnRep_BlockedBagMarkers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_OnRep_BlockedBagMarkers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_OnRep_Difficulty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_OnRep_Difficulty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_OnRep_Difficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "OnRep_Difficulty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_OnRep_Difficulty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_OnRep_Difficulty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_OnRep_Difficulty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_OnRep_Difficulty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_OnRep_EscapeTimeLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_OnRep_EscapeTimeLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_OnRep_EscapeTimeLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "OnRep_EscapeTimeLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_OnRep_EscapeTimeLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_OnRep_EscapeTimeLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_OnRep_EscapeTimeLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_OnRep_EscapeTimeLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_OnRep_IsIntroSequenceSkipped_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_OnRep_IsIntroSequenceSkipped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_OnRep_IsIntroSequenceSkipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "OnRep_IsIntroSequenceSkipped", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_OnRep_IsIntroSequenceSkipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_OnRep_IsIntroSequenceSkipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_OnRep_IsIntroSequenceSkipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_OnRep_IsIntroSequenceSkipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_OnRep_PlayersInEscapeVolume_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_OnRep_PlayersInEscapeVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_OnRep_PlayersInEscapeVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "OnRep_PlayersInEscapeVolume", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_OnRep_PlayersInEscapeVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_OnRep_PlayersInEscapeVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_OnRep_PlayersInEscapeVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_OnRep_PlayersInEscapeVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_OnRep_PlayersRequiredInEscapeVolume_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_OnRep_PlayersRequiredInEscapeVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_OnRep_PlayersRequiredInEscapeVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "OnRep_PlayersRequiredInEscapeVolume", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_OnRep_PlayersRequiredInEscapeVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_OnRep_PlayersRequiredInEscapeVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_OnRep_PlayersRequiredInEscapeVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_OnRep_PlayersRequiredInEscapeVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_OnRep_PreplanningAssetsApplied_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_OnRep_PreplanningAssetsApplied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_OnRep_PreplanningAssetsApplied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "OnRep_PreplanningAssetsApplied", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_OnRep_PreplanningAssetsApplied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_OnRep_PreplanningAssetsApplied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_OnRep_PreplanningAssetsApplied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_OnRep_PreplanningAssetsApplied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_OnRep_RandomSeed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_OnRep_RandomSeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_OnRep_RandomSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "OnRep_RandomSeed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_OnRep_RandomSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_OnRep_RandomSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_OnRep_RandomSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_OnRep_RandomSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_OnRep_ServerChangelist_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_OnRep_ServerChangelist_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_OnRep_ServerChangelist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "OnRep_ServerChangelist", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_OnRep_ServerChangelist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_OnRep_ServerChangelist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_OnRep_ServerChangelist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_OnRep_ServerChangelist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_OnSecurityCompaniesChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_OnSecurityCompaniesChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_OnSecurityCompaniesChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "OnSecurityCompaniesChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_OnSecurityCompaniesChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_OnSecurityCompaniesChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_OnSecurityCompaniesChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_OnSecurityCompaniesChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_OnServerPowerUpPickedUp_Statics
	{
		struct SBZMissionState_eventOnServerPowerUpPickedUp_Parms
		{
			ASBZPowerUp* PowerUp;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PowerUp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZMissionState_OnServerPowerUpPickedUp_Statics::NewProp_PowerUp = { "PowerUp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventOnServerPowerUpPickedUp_Parms, PowerUp), Z_Construct_UClass_ASBZPowerUp_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMissionState_OnServerPowerUpPickedUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_OnServerPowerUpPickedUp_Statics::NewProp_PowerUp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_OnServerPowerUpPickedUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_OnServerPowerUpPickedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "OnServerPowerUpPickedUp", nullptr, nullptr, sizeof(SBZMissionState_eventOnServerPowerUpPickedUp_Parms), Z_Construct_UFunction_ASBZMissionState_OnServerPowerUpPickedUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_OnServerPowerUpPickedUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_OnServerPowerUpPickedUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_OnServerPowerUpPickedUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_OnServerPowerUpPickedUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_OnServerPowerUpPickedUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_OnStandaloneNetIDEndPlay_Statics
	{
		struct SBZMissionState_eventOnStandaloneNetIDEndPlay_Parms
		{
			AActor* Actor;
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZMissionState_OnStandaloneNetIDEndPlay_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventOnStandaloneNetIDEndPlay_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZMissionState_OnStandaloneNetIDEndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventOnStandaloneNetIDEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMissionState_OnStandaloneNetIDEndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_OnStandaloneNetIDEndPlay_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_OnStandaloneNetIDEndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_OnStandaloneNetIDEndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_OnStandaloneNetIDEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "OnStandaloneNetIDEndPlay", nullptr, nullptr, sizeof(SBZMissionState_eventOnStandaloneNetIDEndPlay_Parms), Z_Construct_UFunction_ASBZMissionState_OnStandaloneNetIDEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_OnStandaloneNetIDEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_OnStandaloneNetIDEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_OnStandaloneNetIDEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_OnStandaloneNetIDEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_OnStandaloneNetIDEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_PlayerStateRemovedDuringEndMission_Statics
	{
		struct SBZMissionState_eventPlayerStateRemovedDuringEndMission_Parms
		{
			FSBZPlayerStateRemovedEvent Data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_PlayerStateRemovedDuringEndMission_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZMissionState_PlayerStateRemovedDuringEndMission_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventPlayerStateRemovedDuringEndMission_Parms, Data), Z_Construct_UScriptStruct_FSBZPlayerStateRemovedEvent, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_PlayerStateRemovedDuringEndMission_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_PlayerStateRemovedDuringEndMission_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMissionState_PlayerStateRemovedDuringEndMission_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_PlayerStateRemovedDuringEndMission_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_PlayerStateRemovedDuringEndMission_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_PlayerStateRemovedDuringEndMission_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "PlayerStateRemovedDuringEndMission", nullptr, nullptr, sizeof(SBZMissionState_eventPlayerStateRemovedDuringEndMission_Parms), Z_Construct_UFunction_ASBZMissionState_PlayerStateRemovedDuringEndMission_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_PlayerStateRemovedDuringEndMission_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_PlayerStateRemovedDuringEndMission_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_PlayerStateRemovedDuringEndMission_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_PlayerStateRemovedDuringEndMission()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_PlayerStateRemovedDuringEndMission_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_RemovePreplanningAsset_Statics
	{
		struct SBZMissionState_eventRemovePreplanningAsset_Parms
		{
			FUniqueNetIdRepl InPlayerId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_RemovePreplanningAsset_Statics::NewProp_InPlayerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZMissionState_RemovePreplanningAsset_Statics::NewProp_InPlayerId = { "InPlayerId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventRemovePreplanningAsset_Parms, InPlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_RemovePreplanningAsset_Statics::NewProp_InPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_RemovePreplanningAsset_Statics::NewProp_InPlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMissionState_RemovePreplanningAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_RemovePreplanningAsset_Statics::NewProp_InPlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_RemovePreplanningAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_RemovePreplanningAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "RemovePreplanningAsset", nullptr, nullptr, sizeof(SBZMissionState_eventRemovePreplanningAsset_Parms), Z_Construct_UFunction_ASBZMissionState_RemovePreplanningAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_RemovePreplanningAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_RemovePreplanningAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_RemovePreplanningAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_RemovePreplanningAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_RemovePreplanningAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_ResetPreplanningAssets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_ResetPreplanningAssets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_ResetPreplanningAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "ResetPreplanningAssets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_ResetPreplanningAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_ResetPreplanningAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_ResetPreplanningAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_ResetPreplanningAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_RewardCompleteExperienceMilestone_Statics
	{
		struct SBZMissionState_eventRewardCompleteExperienceMilestone_Parms
		{
			FString MilestoneName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MilestoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MilestoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_RewardCompleteExperienceMilestone_Statics::NewProp_MilestoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZMissionState_RewardCompleteExperienceMilestone_Statics::NewProp_MilestoneName = { "MilestoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventRewardCompleteExperienceMilestone_Parms, MilestoneName), METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_RewardCompleteExperienceMilestone_Statics::NewProp_MilestoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_RewardCompleteExperienceMilestone_Statics::NewProp_MilestoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMissionState_RewardCompleteExperienceMilestone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_RewardCompleteExperienceMilestone_Statics::NewProp_MilestoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_RewardCompleteExperienceMilestone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_RewardCompleteExperienceMilestone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "RewardCompleteExperienceMilestone", nullptr, nullptr, sizeof(SBZMissionState_eventRewardCompleteExperienceMilestone_Parms), Z_Construct_UFunction_ASBZMissionState_RewardCompleteExperienceMilestone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_RewardCompleteExperienceMilestone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_RewardCompleteExperienceMilestone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_RewardCompleteExperienceMilestone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_RewardCompleteExperienceMilestone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_RewardCompleteExperienceMilestone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_RewardCompleteExperienceObjective_Statics
	{
		struct SBZMissionState_eventRewardCompleteExperienceObjective_Parms
		{
			FString ObjectName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ObjectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_RewardCompleteExperienceObjective_Statics::NewProp_ObjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZMissionState_RewardCompleteExperienceObjective_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventRewardCompleteExperienceObjective_Parms, ObjectName), METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_RewardCompleteExperienceObjective_Statics::NewProp_ObjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_RewardCompleteExperienceObjective_Statics::NewProp_ObjectName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMissionState_RewardCompleteExperienceObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_RewardCompleteExperienceObjective_Statics::NewProp_ObjectName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_RewardCompleteExperienceObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_RewardCompleteExperienceObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "RewardCompleteExperienceObjective", nullptr, nullptr, sizeof(SBZMissionState_eventRewardCompleteExperienceObjective_Parms), Z_Construct_UFunction_ASBZMissionState_RewardCompleteExperienceObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_RewardCompleteExperienceObjective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_RewardCompleteExperienceObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_RewardCompleteExperienceObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_RewardCompleteExperienceObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_RewardCompleteExperienceObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionState_ServerPostOnTakenDamageEvent_Statics
	{
		struct SBZMissionState_eventServerPostOnTakenDamageEvent_Parms
		{
			FSBZDamageEvent DamageEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageEventData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_ServerPostOnTakenDamageEvent_Statics::NewProp_DamageEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZMissionState_ServerPostOnTakenDamageEvent_Statics::NewProp_DamageEventData = { "DamageEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionState_eventServerPostOnTakenDamageEvent_Parms, DamageEventData), Z_Construct_UScriptStruct_FSBZDamageEvent, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_ServerPostOnTakenDamageEvent_Statics::NewProp_DamageEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_ServerPostOnTakenDamageEvent_Statics::NewProp_DamageEventData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMissionState_ServerPostOnTakenDamageEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMissionState_ServerPostOnTakenDamageEvent_Statics::NewProp_DamageEventData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionState_ServerPostOnTakenDamageEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionState_ServerPostOnTakenDamageEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionState, nullptr, "ServerPostOnTakenDamageEvent", nullptr, nullptr, sizeof(SBZMissionState_eventServerPostOnTakenDamageEvent_Parms), Z_Construct_UFunction_ASBZMissionState_ServerPostOnTakenDamageEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_ServerPostOnTakenDamageEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionState_ServerPostOnTakenDamageEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionState_ServerPostOnTakenDamageEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionState_ServerPostOnTakenDamageEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionState_ServerPostOnTakenDamageEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZMissionState_NoRegister()
	{
		return ASBZMissionState::StaticClass();
	}
	struct Z_Construct_UClass_ASBZMissionState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFBIActivationChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFBIActivationChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatisticCodeCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StatisticCodeCollection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatisticsCriteriaDataCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StatisticsCriteriaDataCollection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerChangelist_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ServerChangelist;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Difficulty_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Difficulty_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Difficulty;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SecurityCompanies_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SecurityCompanies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecurityCompanies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SecurityCompanies;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedSharedKeyItemTagCount_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedSharedKeyItemTagCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReplicatedSharedKeyItemTagCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredictionTimeOutSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PredictionTimeOutSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerUnblockAbilityEarlierSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ServerUnblockAbilityEarlierSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissionStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt16PropertyParams NewProp_MissionStartTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SharedKeyItemDataMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SharedKeyItemDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedKeyItemDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SharedKeyItemDataMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BagManager;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AICrewStateArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AICrewStateArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AICrewStateArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestedOverkillWeaponConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequestedOverkillWeaponConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockedBagMarkers_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlockedBagMarkers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundBanks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundBanks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SoundBanks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DialogManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AgentManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RagdollSyncManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RagdollSyncManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VehicleManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MarkerManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeActionManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LifeActionManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorPoolManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorPoolManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmallTalkManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SmallTalkManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WindManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateMachineSharedState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StateMachineSharedState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayerFriendlyFire_MetaData[];
#endif
		static void NewProp_bPlayerFriendlyFire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayerFriendlyFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayersInEscapeVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayersInEscapeVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayersRequiredInEscapeVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayersRequiredInEscapeVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscapeTimeLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EscapeTimeLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillingSpreeAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KillingSpreeAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropKillingSpreeWaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DropKillingSpreeWaitTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreplanningAssets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreplanningAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreplanningAssets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxQueuedCosmeticDestruction_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxQueuedCosmeticDestruction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenQueuedCosmeticDestruction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimeBetweenQueuedCosmeticDestruction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueuedCosmeticDestructionExplosions_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QueuedCosmeticDestructionExplosions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueuedCosmeticDestructionExplosions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QueuedCosmeticDestructionExplosions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeavyEnemiesTagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeavyEnemiesTagContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariationSeedGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VariationSeedGenerator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeasonalEventItemCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SeasonalEventItemCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DSChallengeManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DSChallengeManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverkillWeaponCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverkillWeaponCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHeistData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentHeistData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TutorialPlayerCharacterData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TutorialPlayerCharacterData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAmmoSpecialistHighGrainSkillActive_MetaData[];
#endif
		static void NewProp_bIsAmmoSpecialistHighGrainSkillActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAmmoSpecialistHighGrainSkillActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoSpecialistHighGrainSkillTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmmoSpecialistHighGrainSkillTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsIntroSequenceSkipped_MetaData[];
#endif
		static void NewProp_bIsIntroSequenceSkipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsIntroSequenceSkipped;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerToRewardArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerToRewardArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerToRewardArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponArmorPenetrationModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponArmorPenetrationModifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZMissionState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZMissionState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZMissionState_AddPreplanningAsset, "AddPreplanningAsset" }, // 3354705789
		{ &Z_Construct_UFunction_ASBZMissionState_ApplyPreplanningAssets, "ApplyPreplanningAssets" }, // 1122533650
		{ &Z_Construct_UFunction_ASBZMissionState_BP_OnHideAllOutlinesChanged, "BP_OnHideAllOutlinesChanged" }, // 2859371942
		{ &Z_Construct_UFunction_ASBZMissionState_GetCharacterSeed, "GetCharacterSeed" }, // 1930184465
		{ &Z_Construct_UFunction_ASBZMissionState_GetDifficulty, "GetDifficulty" }, // 354414141
		{ &Z_Construct_UFunction_ASBZMissionState_GetDifficultyIdx, "GetDifficultyIdx" }, // 2329354848
		{ &Z_Construct_UFunction_ASBZMissionState_GetMissionResult, "GetMissionResult" }, // 1736785644
		{ &Z_Construct_UFunction_ASBZMissionState_GetMissionResultData, "GetMissionResultData" }, // 936246536
		{ &Z_Construct_UFunction_ASBZMissionState_GetMissionTime, "GetMissionTime" }, // 983330253
		{ &Z_Construct_UFunction_ASBZMissionState_GetMixedRandomSeed, "GetMixedRandomSeed" }, // 1295377592
		{ &Z_Construct_UFunction_ASBZMissionState_GetMixedRandomStream, "GetMixedRandomStream" }, // 455791888
		{ &Z_Construct_UFunction_ASBZMissionState_GetRandomSeed, "GetRandomSeed" }, // 789568403
		{ &Z_Construct_UFunction_ASBZMissionState_GetSBZMissionState, "GetSBZMissionState" }, // 3773149942
		{ &Z_Construct_UFunction_ASBZMissionState_GetSecurityCompanies, "GetSecurityCompanies" }, // 2485365566
		{ &Z_Construct_UFunction_ASBZMissionState_HandleSharedKeyItemTagChanged, "HandleSharedKeyItemTagChanged" }, // 2107806505
		{ &Z_Construct_UFunction_ASBZMissionState_HasAttributedAllVariations, "HasAttributedAllVariations" }, // 4123804609
		{ &Z_Construct_UFunction_ASBZMissionState_HasPreplanningTag, "HasPreplanningTag" }, // 805436428
		{ &Z_Construct_UFunction_ASBZMissionState_HasSharedKeyItemTag, "HasSharedKeyItemTag" }, // 2269458211
		{ &Z_Construct_UFunction_ASBZMissionState_IsFBIActive, "IsFBIActive" }, // 2985137174
		{ &Z_Construct_UFunction_ASBZMissionState_IsTutorialLevel, "IsTutorialLevel" }, // 923293878
		{ &Z_Construct_UFunction_ASBZMissionState_Multicast_MissionEnd, "Multicast_MissionEnd" }, // 1696846184
		{ &Z_Construct_UFunction_ASBZMissionState_Multicast_MissionResult, "Multicast_MissionResult" }, // 3921175619
		{ &Z_Construct_UFunction_ASBZMissionState_Multicast_OnAmmoSpecialistHighGrainSkillActivated, "Multicast_OnAmmoSpecialistHighGrainSkillActivated" }, // 1416728645
		{ &Z_Construct_UFunction_ASBZMissionState_Multicast_OnAmmoSpecialistHighGrainSkillDeactivated, "Multicast_OnAmmoSpecialistHighGrainSkillDeactivated" }, // 1234359420
		{ &Z_Construct_UFunction_ASBZMissionState_Multicast_SetBlockedBagMarkers, "Multicast_SetBlockedBagMarkers" }, // 1045765743
		{ &Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeTimeLeft, "Multicast_SetEscapeTimeLeft" }, // 1538788932
		{ &Z_Construct_UFunction_ASBZMissionState_Multicast_SetEscapeVolumeData, "Multicast_SetEscapeVolumeData" }, // 200429393
		{ &Z_Construct_UFunction_ASBZMissionState_Multicast_SkipIntroSequence, "Multicast_SkipIntroSequence" }, // 4088796803
		{ &Z_Construct_UFunction_ASBZMissionState_Multicast_StartOverkillCooldown, "Multicast_StartOverkillCooldown" }, // 2350483981
		{ &Z_Construct_UFunction_ASBZMissionState_NotifyClientPassedMilestone, "NotifyClientPassedMilestone" }, // 1836184377
		{ &Z_Construct_UFunction_ASBZMissionState_OnActionPhaseExited, "OnActionPhaseExited" }, // 2268527948
		{ &Z_Construct_UFunction_ASBZMissionState_OnActionPhaseStarted, "OnActionPhaseStarted" }, // 3090985299
		{ &Z_Construct_UFunction_ASBZMissionState_OnAmmoSpecialistHighGrainSkillTimeChanged, "OnAmmoSpecialistHighGrainSkillTimeChanged" }, // 569967630
		{ &Z_Construct_UFunction_ASBZMissionState_OnBlackScreenStarted, "OnBlackScreenStarted" }, // 1337785341
		{ &Z_Construct_UFunction_ASBZMissionState_OnRep_BlockedBagMarkers, "OnRep_BlockedBagMarkers" }, // 3099970850
		{ &Z_Construct_UFunction_ASBZMissionState_OnRep_Difficulty, "OnRep_Difficulty" }, // 3530456736
		{ &Z_Construct_UFunction_ASBZMissionState_OnRep_EscapeTimeLeft, "OnRep_EscapeTimeLeft" }, // 4021025789
		{ &Z_Construct_UFunction_ASBZMissionState_OnRep_IsIntroSequenceSkipped, "OnRep_IsIntroSequenceSkipped" }, // 726868057
		{ &Z_Construct_UFunction_ASBZMissionState_OnRep_PlayersInEscapeVolume, "OnRep_PlayersInEscapeVolume" }, // 2843122578
		{ &Z_Construct_UFunction_ASBZMissionState_OnRep_PlayersRequiredInEscapeVolume, "OnRep_PlayersRequiredInEscapeVolume" }, // 2922341572
		{ &Z_Construct_UFunction_ASBZMissionState_OnRep_PreplanningAssetsApplied, "OnRep_PreplanningAssetsApplied" }, // 987574393
		{ &Z_Construct_UFunction_ASBZMissionState_OnRep_RandomSeed, "OnRep_RandomSeed" }, // 4138004419
		{ &Z_Construct_UFunction_ASBZMissionState_OnRep_ServerChangelist, "OnRep_ServerChangelist" }, // 749528069
		{ &Z_Construct_UFunction_ASBZMissionState_OnSecurityCompaniesChanged, "OnSecurityCompaniesChanged" }, // 1073617203
		{ &Z_Construct_UFunction_ASBZMissionState_OnServerPowerUpPickedUp, "OnServerPowerUpPickedUp" }, // 1564038607
		{ &Z_Construct_UFunction_ASBZMissionState_OnStandaloneNetIDEndPlay, "OnStandaloneNetIDEndPlay" }, // 3754188893
		{ &Z_Construct_UFunction_ASBZMissionState_PlayerStateRemovedDuringEndMission, "PlayerStateRemovedDuringEndMission" }, // 1723500488
		{ &Z_Construct_UFunction_ASBZMissionState_RemovePreplanningAsset, "RemovePreplanningAsset" }, // 2354142699
		{ &Z_Construct_UFunction_ASBZMissionState_ResetPreplanningAssets, "ResetPreplanningAssets" }, // 2615952187
		{ &Z_Construct_UFunction_ASBZMissionState_RewardCompleteExperienceMilestone, "RewardCompleteExperienceMilestone" }, // 1515712069
		{ &Z_Construct_UFunction_ASBZMissionState_RewardCompleteExperienceObjective, "RewardCompleteExperienceObjective" }, // 890588147
		{ &Z_Construct_UFunction_ASBZMissionState_ServerPostOnTakenDamageEvent, "ServerPostOnTakenDamageEvent" }, // 912207447
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SBZMissionState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_OnFBIActivationChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_OnFBIActivationChanged = { "OnFBIActivationChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, OnFBIActivationChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZOnFBIActivationChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_OnFBIActivationChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_OnFBIActivationChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_StatisticCodeCollection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_StatisticCodeCollection = { "StatisticCodeCollection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, StatisticCodeCollection), Z_Construct_UScriptStruct_FSBZStatisticCodeCollection, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_StatisticCodeCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_StatisticCodeCollection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_StatisticsCriteriaDataCollection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_StatisticsCriteriaDataCollection = { "StatisticsCriteriaDataCollection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, StatisticsCriteriaDataCollection), Z_Construct_UScriptStruct_FSBZStatisticCriteriaDataCollection, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_StatisticsCriteriaDataCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_StatisticsCriteriaDataCollection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_RandomSeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_RandomSeed = { "RandomSeed", "OnRep_RandomSeed", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, RandomSeed), METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_RandomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_RandomSeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_ServerChangelist_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_ServerChangelist = { "ServerChangelist", "OnRep_ServerChangelist", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, ServerChangelist), METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_ServerChangelist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_ServerChangelist_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_Difficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_Difficulty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_Difficulty = { "Difficulty", "OnRep_Difficulty", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, Difficulty), Z_Construct_UEnum_Starbreeze_ESBZDifficulty, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_Difficulty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_Difficulty_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SecurityCompanies_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SecurityCompanies_Inner = { "SecurityCompanies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZSecurityCompany, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SecurityCompanies_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SecurityCompanies = { "SecurityCompanies", "OnSecurityCompaniesChanged", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, SecurityCompanies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SecurityCompanies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SecurityCompanies_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_ReplicatedSharedKeyItemTagCount_Inner = { "ReplicatedSharedKeyItemTagCount", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZRepSharedKeyItemTags, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_ReplicatedSharedKeyItemTagCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_ReplicatedSharedKeyItemTagCount = { "ReplicatedSharedKeyItemTagCount", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, ReplicatedSharedKeyItemTagCount), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_ReplicatedSharedKeyItemTagCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_ReplicatedSharedKeyItemTagCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_PredictionTimeOutSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_PredictionTimeOutSeconds = { "PredictionTimeOutSeconds", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, PredictionTimeOutSeconds), METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_PredictionTimeOutSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_PredictionTimeOutSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_ServerUnblockAbilityEarlierSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_ServerUnblockAbilityEarlierSeconds = { "ServerUnblockAbilityEarlierSeconds", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, ServerUnblockAbilityEarlierSeconds), METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_ServerUnblockAbilityEarlierSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_ServerUnblockAbilityEarlierSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_MissionStartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FInt16PropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_MissionStartTime = { "MissionStartTime", nullptr, (EPropertyFlags)0x0020080000000021, UE4CodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, MissionStartTime), METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_MissionStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_MissionStartTime_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SharedKeyItemDataMap_ValueProp = { "SharedKeyItemDataMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZKeyItemData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SharedKeyItemDataMap_Key_KeyProp = { "SharedKeyItemDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SharedKeyItemDataMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SharedKeyItemDataMap = { "SharedKeyItemDataMap", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, SharedKeyItemDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SharedKeyItemDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SharedKeyItemDataMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_BagManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_BagManager = { "BagManager", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, BagManager), Z_Construct_UClass_USBZBagManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_BagManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_BagManager_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_AICrewStateArray_Inner = { "AICrewStateArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZAICrewState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_AICrewStateArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_AICrewStateArray = { "AICrewStateArray", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, AICrewStateArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_AICrewStateArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_AICrewStateArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_RequestedOverkillWeaponConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_RequestedOverkillWeaponConfig = { "RequestedOverkillWeaponConfig", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, RequestedOverkillWeaponConfig), Z_Construct_UScriptStruct_FSBZEquippableConfig, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_RequestedOverkillWeaponConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_RequestedOverkillWeaponConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_BlockedBagMarkers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_BlockedBagMarkers = { "BlockedBagMarkers", "OnRep_BlockedBagMarkers", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, BlockedBagMarkers), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_BlockedBagMarkers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_BlockedBagMarkers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SoundBanks_Inner = { "SoundBanks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAkAudioBank_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SoundBanks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SoundBanks = { "SoundBanks", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, SoundBanks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SoundBanks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SoundBanks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_DialogManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_DialogManager = { "DialogManager", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, DialogManager), Z_Construct_UClass_USBZDialogManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_DialogManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_DialogManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_AgentManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_AgentManager = { "AgentManager", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, AgentManager), Z_Construct_UClass_USBZAgentManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_AgentManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_AgentManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_RagdollSyncManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_RagdollSyncManager = { "RagdollSyncManager", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, RagdollSyncManager), Z_Construct_UClass_USBZRagdollSyncManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_RagdollSyncManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_RagdollSyncManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_VehicleManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_VehicleManager = { "VehicleManager", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, VehicleManager), Z_Construct_UClass_USBZVehicleManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_VehicleManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_VehicleManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_MarkerManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_MarkerManager = { "MarkerManager", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, MarkerManager), Z_Construct_UClass_USBZMarkerManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_MarkerManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_MarkerManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_LifeActionManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_LifeActionManager = { "LifeActionManager", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, LifeActionManager), Z_Construct_UClass_USBZLifeActionManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_LifeActionManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_LifeActionManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_ActorPoolManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_ActorPoolManager = { "ActorPoolManager", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, ActorPoolManager), Z_Construct_UClass_USBZActorPoolManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_ActorPoolManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_ActorPoolManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SmallTalkManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SmallTalkManager = { "SmallTalkManager", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, SmallTalkManager), Z_Construct_UClass_USBZSmallTalkManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SmallTalkManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SmallTalkManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_WindManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_WindManager = { "WindManager", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, WindManager), Z_Construct_UClass_USBZWindManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_WindManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_WindManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_StateMachineSharedState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_StateMachineSharedState = { "StateMachineSharedState", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, StateMachineSharedState), Z_Construct_UClass_USBZStateMachineSharedState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_StateMachineSharedState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_StateMachineSharedState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_bPlayerFriendlyFire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	void Z_Construct_UClass_ASBZMissionState_Statics::NewProp_bPlayerFriendlyFire_SetBit(void* Obj)
	{
		((ASBZMissionState*)Obj)->bPlayerFriendlyFire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_bPlayerFriendlyFire = { "bPlayerFriendlyFire", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZMissionState), &Z_Construct_UClass_ASBZMissionState_Statics::NewProp_bPlayerFriendlyFire_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_bPlayerFriendlyFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_bPlayerFriendlyFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_PlayersInEscapeVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_PlayersInEscapeVolume = { "PlayersInEscapeVolume", "OnRep_PlayersInEscapeVolume", (EPropertyFlags)0x0040000100000025, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, PlayersInEscapeVolume), nullptr, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_PlayersInEscapeVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_PlayersInEscapeVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_PlayersRequiredInEscapeVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_PlayersRequiredInEscapeVolume = { "PlayersRequiredInEscapeVolume", "OnRep_PlayersRequiredInEscapeVolume", (EPropertyFlags)0x0040000100000025, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, PlayersRequiredInEscapeVolume), nullptr, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_PlayersRequiredInEscapeVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_PlayersRequiredInEscapeVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_EscapeTimeLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_EscapeTimeLeft = { "EscapeTimeLeft", "OnRep_EscapeTimeLeft", (EPropertyFlags)0x0040000100000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, EscapeTimeLeft), METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_EscapeTimeLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_EscapeTimeLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_KillingSpreeAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_KillingSpreeAmount = { "KillingSpreeAmount", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, KillingSpreeAmount), nullptr, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_KillingSpreeAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_KillingSpreeAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_DropKillingSpreeWaitTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_DropKillingSpreeWaitTime = { "DropKillingSpreeWaitTime", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, DropKillingSpreeWaitTime), METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_DropKillingSpreeWaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_DropKillingSpreeWaitTime_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_PreplanningAssets_Inner = { "PreplanningAssets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZPreplanningAsset, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_PreplanningAssets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_PreplanningAssets = { "PreplanningAssets", "OnRep_PreplanningAssetsApplied", (EPropertyFlags)0x0040000100000025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, PreplanningAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_PreplanningAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_PreplanningAssets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_MaxQueuedCosmeticDestruction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_MaxQueuedCosmeticDestruction = { "MaxQueuedCosmeticDestruction", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, MaxQueuedCosmeticDestruction), METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_MaxQueuedCosmeticDestruction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_MaxQueuedCosmeticDestruction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_TimeBetweenQueuedCosmeticDestruction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_TimeBetweenQueuedCosmeticDestruction = { "TimeBetweenQueuedCosmeticDestruction", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, TimeBetweenQueuedCosmeticDestruction), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_TimeBetweenQueuedCosmeticDestruction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_TimeBetweenQueuedCosmeticDestruction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_QueuedCosmeticDestructionExplosions_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_QueuedCosmeticDestructionExplosions_Inner = { "QueuedCosmeticDestructionExplosions", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZCosmeticDestructionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_QueuedCosmeticDestructionExplosions_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_QueuedCosmeticDestructionExplosions_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_QueuedCosmeticDestructionExplosions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_QueuedCosmeticDestructionExplosions = { "QueuedCosmeticDestructionExplosions", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, QueuedCosmeticDestructionExplosions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_QueuedCosmeticDestructionExplosions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_QueuedCosmeticDestructionExplosions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_HeavyEnemiesTagContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_HeavyEnemiesTagContainer = { "HeavyEnemiesTagContainer", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, HeavyEnemiesTagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_HeavyEnemiesTagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_HeavyEnemiesTagContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_VariationSeedGenerator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_VariationSeedGenerator = { "VariationSeedGenerator", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, VariationSeedGenerator), Z_Construct_UScriptStruct_FSBZVariationSeedGenerator, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_VariationSeedGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_VariationSeedGenerator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SeasonalEventItemCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SeasonalEventItemCount = { "SeasonalEventItemCount", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, SeasonalEventItemCount), METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SeasonalEventItemCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SeasonalEventItemCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_DSChallengeManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_DSChallengeManager = { "DSChallengeManager", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, DSChallengeManager), Z_Construct_UClass_USBZDSChallengeManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_DSChallengeManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_DSChallengeManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_OverkillWeaponCooldown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_OverkillWeaponCooldown = { "OverkillWeaponCooldown", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, OverkillWeaponCooldown), METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_OverkillWeaponCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_OverkillWeaponCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_CurrentHeistData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_CurrentHeistData = { "CurrentHeistData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, CurrentHeistData), Z_Construct_UClass_UPD3HeistDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_CurrentHeistData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_CurrentHeistData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_TutorialPlayerCharacterData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_TutorialPlayerCharacterData = { "TutorialPlayerCharacterData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, TutorialPlayerCharacterData), Z_Construct_UClass_USBZPlayerCharacterData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_TutorialPlayerCharacterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_TutorialPlayerCharacterData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_bIsAmmoSpecialistHighGrainSkillActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	void Z_Construct_UClass_ASBZMissionState_Statics::NewProp_bIsAmmoSpecialistHighGrainSkillActive_SetBit(void* Obj)
	{
		((ASBZMissionState*)Obj)->bIsAmmoSpecialistHighGrainSkillActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_bIsAmmoSpecialistHighGrainSkillActive = { "bIsAmmoSpecialistHighGrainSkillActive", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZMissionState), &Z_Construct_UClass_ASBZMissionState_Statics::NewProp_bIsAmmoSpecialistHighGrainSkillActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_bIsAmmoSpecialistHighGrainSkillActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_bIsAmmoSpecialistHighGrainSkillActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_AmmoSpecialistHighGrainSkillTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_AmmoSpecialistHighGrainSkillTime = { "AmmoSpecialistHighGrainSkillTime", "OnAmmoSpecialistHighGrainSkillTimeChanged", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, AmmoSpecialistHighGrainSkillTime), METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_AmmoSpecialistHighGrainSkillTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_AmmoSpecialistHighGrainSkillTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_bIsIntroSequenceSkipped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	void Z_Construct_UClass_ASBZMissionState_Statics::NewProp_bIsIntroSequenceSkipped_SetBit(void* Obj)
	{
		((ASBZMissionState*)Obj)->bIsIntroSequenceSkipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_bIsIntroSequenceSkipped = { "bIsIntroSequenceSkipped", "OnRep_IsIntroSequenceSkipped", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZMissionState), &Z_Construct_UClass_ASBZMissionState_Statics::NewProp_bIsIntroSequenceSkipped_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_bIsIntroSequenceSkipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_bIsIntroSequenceSkipped_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_PlayerToRewardArray_Inner = { "PlayerToRewardArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_PlayerToRewardArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_PlayerToRewardArray = { "PlayerToRewardArray", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, PlayerToRewardArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_PlayerToRewardArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_PlayerToRewardArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionState_Statics::NewProp_WeaponArmorPenetrationModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionState" },
		{ "ModuleRelativePath", "Public/SBZMissionState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZMissionState_Statics::NewProp_WeaponArmorPenetrationModifier = { "WeaponArmorPenetrationModifier", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionState, WeaponArmorPenetrationModifier), METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_WeaponArmorPenetrationModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::NewProp_WeaponArmorPenetrationModifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZMissionState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_OnFBIActivationChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_StatisticCodeCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_StatisticsCriteriaDataCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_RandomSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_ServerChangelist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_Difficulty_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_Difficulty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SecurityCompanies_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SecurityCompanies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SecurityCompanies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_ReplicatedSharedKeyItemTagCount_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_ReplicatedSharedKeyItemTagCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_PredictionTimeOutSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_ServerUnblockAbilityEarlierSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_MissionStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SharedKeyItemDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SharedKeyItemDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SharedKeyItemDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_BagManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_AICrewStateArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_AICrewStateArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_RequestedOverkillWeaponConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_BlockedBagMarkers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SoundBanks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SoundBanks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_DialogManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_AgentManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_RagdollSyncManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_VehicleManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_MarkerManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_LifeActionManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_ActorPoolManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SmallTalkManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_WindManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_StateMachineSharedState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_bPlayerFriendlyFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_PlayersInEscapeVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_PlayersRequiredInEscapeVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_EscapeTimeLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_KillingSpreeAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_DropKillingSpreeWaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_PreplanningAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_PreplanningAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_MaxQueuedCosmeticDestruction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_TimeBetweenQueuedCosmeticDestruction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_QueuedCosmeticDestructionExplosions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_QueuedCosmeticDestructionExplosions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_HeavyEnemiesTagContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_VariationSeedGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_SeasonalEventItemCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_DSChallengeManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_OverkillWeaponCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_CurrentHeistData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_TutorialPlayerCharacterData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_bIsAmmoSpecialistHighGrainSkillActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_AmmoSpecialistHighGrainSkillTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_bIsIntroSequenceSkipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_PlayerToRewardArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_PlayerToRewardArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionState_Statics::NewProp_WeaponArmorPenetrationModifier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZMissionState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZMissionState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZMissionState_Statics::ClassParams = {
		&ASBZMissionState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZMissionState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZMissionState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZMissionState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZMissionState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZMissionState, 1563548840);
	template<> STARBREEZE_API UClass* StaticClass<ASBZMissionState>()
	{
		return ASBZMissionState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZMissionState(Z_Construct_UClass_ASBZMissionState, &ASBZMissionState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZMissionState"), false, nullptr, nullptr, nullptr);

	void ASBZMissionState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_RandomSeed(TEXT("RandomSeed"));
		static const FName Name_ServerChangelist(TEXT("ServerChangelist"));
		static const FName Name_Difficulty(TEXT("Difficulty"));
		static const FName Name_SecurityCompanies(TEXT("SecurityCompanies"));
		static const FName Name_ReplicatedSharedKeyItemTagCount(TEXT("ReplicatedSharedKeyItemTagCount"));
		static const FName Name_MissionStartTime(TEXT("MissionStartTime"));
		static const FName Name_BlockedBagMarkers(TEXT("BlockedBagMarkers"));
		static const FName Name_PlayersInEscapeVolume(TEXT("PlayersInEscapeVolume"));
		static const FName Name_PlayersRequiredInEscapeVolume(TEXT("PlayersRequiredInEscapeVolume"));
		static const FName Name_EscapeTimeLeft(TEXT("EscapeTimeLeft"));
		static const FName Name_PreplanningAssets(TEXT("PreplanningAssets"));
		static const FName Name_AmmoSpecialistHighGrainSkillTime(TEXT("AmmoSpecialistHighGrainSkillTime"));
		static const FName Name_bIsIntroSequenceSkipped(TEXT("bIsIntroSequenceSkipped"));

		const bool bIsValid = true
			&& Name_RandomSeed == ClassReps[(int32)ENetFields_Private::RandomSeed].Property->GetFName()
			&& Name_ServerChangelist == ClassReps[(int32)ENetFields_Private::ServerChangelist].Property->GetFName()
			&& Name_Difficulty == ClassReps[(int32)ENetFields_Private::Difficulty].Property->GetFName()
			&& Name_SecurityCompanies == ClassReps[(int32)ENetFields_Private::SecurityCompanies].Property->GetFName()
			&& Name_ReplicatedSharedKeyItemTagCount == ClassReps[(int32)ENetFields_Private::ReplicatedSharedKeyItemTagCount].Property->GetFName()
			&& Name_MissionStartTime == ClassReps[(int32)ENetFields_Private::MissionStartTime].Property->GetFName()
			&& Name_BlockedBagMarkers == ClassReps[(int32)ENetFields_Private::BlockedBagMarkers].Property->GetFName()
			&& Name_PlayersInEscapeVolume == ClassReps[(int32)ENetFields_Private::PlayersInEscapeVolume].Property->GetFName()
			&& Name_PlayersRequiredInEscapeVolume == ClassReps[(int32)ENetFields_Private::PlayersRequiredInEscapeVolume].Property->GetFName()
			&& Name_EscapeTimeLeft == ClassReps[(int32)ENetFields_Private::EscapeTimeLeft].Property->GetFName()
			&& Name_PreplanningAssets == ClassReps[(int32)ENetFields_Private::PreplanningAssets].Property->GetFName()
			&& Name_AmmoSpecialistHighGrainSkillTime == ClassReps[(int32)ENetFields_Private::AmmoSpecialistHighGrainSkillTime].Property->GetFName()
			&& Name_bIsIntroSequenceSkipped == ClassReps[(int32)ENetFields_Private::bIsIntroSequenceSkipped].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZMissionState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZMissionState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
