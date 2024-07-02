// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeNotifPayload();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAICharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolCuttingData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippableData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlaceableData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZThrowableData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolData_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPlatform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3DefeatState();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FPD3PlayerLoadout();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3MiniGameState();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZReplicatedReloadState();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPlayerReadyStatusValue();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZFirstPartyPlatform();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZProgressionSaveGame_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZProgressionSaveChallenges_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnInfamyLevelChangedDynamic__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUICharacterEffectComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPingCallAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerCharacter_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAmmoPickupLookup();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerCharacterData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZTool_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEffectHandleArray();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerMicroCamera_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGrenadeProjectile_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterEffectDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCrewStateInterface_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZPlayerState::execClient_ChallengeCompleted)
	{
		P_GET_STRUCT(FChallengeNotifPayload,Z_Param_ChallengeNotifPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_ChallengeCompleted_Implementation(Z_Param_ChallengeNotifPayload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execClient_CheatSetInfiniteAmmo)
	{
		P_GET_UBOOL(Z_Param_bInHasInifiniteAmmo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_CheatSetInfiniteAmmo_Implementation(Z_Param_bInHasInifiniteAmmo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execClient_OnSaveLoadoutPending)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_OnSaveLoadoutPending_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execClient_PickupAmmo)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_PickupAmmo_Implementation(Z_Param_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execClient_SendOverkillWeaponProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InOverkillWeaponProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_SendOverkillWeaponProgress_Implementation(Z_Param_InOverkillWeaponProgress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execClient_SendPlayerReloadProgressionSaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_SendPlayerReloadProgressionSaveGame_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execClient_SetCustodyReleaseCost)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InNewCustodyReleaseCost);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_SetCustodyReleaseCost_Implementation(Z_Param_InNewCustodyReleaseCost);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execClient_SetReducedCustodyTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InReducedCustodyTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_SetReducedCustodyTime_Implementation(Z_Param_InReducedCustodyTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execClient_SetSurrenderedEnemy)
	{
		P_GET_OBJECT(ASBZAICharacter,Z_Param_InSurrenderedEnemy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_SetSurrenderedEnemy_Implementation(Z_Param_InSurrenderedEnemy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execEquipCuttingToolToLoadout)
	{
		P_GET_OBJECT(USBZToolCuttingData,Z_Param_ItemToEquip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquipCuttingToolToLoadout(Z_Param_ItemToEquip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execEquipEquippableToLoadoutAt)
	{
		P_GET_OBJECT(USBZEquippableData,Z_Param_EquippableToEquip);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquipEquippableToLoadoutAt(Z_Param_EquippableToEquip,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execEquipMaskToLoadout)
	{
		P_GET_OBJECT(USBZMaskData,Z_Param_ItemToEquip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquipMaskToLoadout(Z_Param_ItemToEquip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execEquipPlaceableToLoadout)
	{
		P_GET_OBJECT(USBZPlaceableData,Z_Param_ItemToEquip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquipPlaceableToLoadout(Z_Param_ItemToEquip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execEquipThrowableToLoadout)
	{
		P_GET_OBJECT(USBZThrowableData,Z_Param_ItemToEquip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquipThrowableToLoadout(Z_Param_ItemToEquip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execEquipToolToLoadout)
	{
		P_GET_OBJECT(USBZToolData,Z_Param_ItemToEquip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquipToolToLoadout(Z_Param_ItemToEquip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execGetAccelBytePlayerName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAccelBytePlayerName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execGetCharacterIcon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPaperSprite**)Z_Param__Result=P_THIS->GetCharacterIcon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execGetInfamyLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInfamyLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execGetMergePartySelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMergePartySelected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execGetPlatform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZPlatform*)Z_Param__Result=P_THIS->GetPlatform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execGetPlayerDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetPlayerDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execIsPlayerDisplayNameReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayerDisplayNameReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execIsSkipIntroSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSkipIntroSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execMulticast_DebugConsoleCommand)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Command);
		P_GET_PROPERTY(FStrProperty,Z_Param_InstigatorContextText);
		P_GET_UBOOL(Z_Param_bIsLocallyControlledOnly);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_DebugConsoleCommand_Implementation(Z_Param_Command,Z_Param_InstigatorContextText,Z_Param_bIsLocallyControlledOnly,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execMulticast_OnKill)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_NetID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnKill_Implementation(Z_Param_NetID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execMulticast_RejectEquipStateAndIndex)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InEquipStateAndIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_RejectEquipStateAndIndex_Implementation(Z_Param_InEquipStateAndIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execMulticast_SetAccelByteUserId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InAccelByteUserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetAccelByteUserId_Implementation(Z_Param_InAccelByteUserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execMulticast_SetAccelByteUserName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InAccelByteUserName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetAccelByteUserName_Implementation(Z_Param_InAccelByteUserName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execMulticast_SetCustodyCharacterClass)
	{
		P_GET_STRUCT(FSoftObjectPath,Z_Param_InCharacterClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetCustodyCharacterClass_Implementation(Z_Param_InCharacterClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execMulticast_SetDefeatState)
	{
		P_GET_ENUM(EPD3DefeatState,Z_Param_InDefeatState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetDefeatState_Implementation(EPD3DefeatState(Z_Param_InDefeatState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execMulticast_SetEquipStateAndIndex)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InEquipStateAndIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetEquipStateAndIndex_Implementation(Z_Param_InEquipStateAndIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execMulticast_SetLastArrestedByGuard)
	{
		P_GET_UBOOL(Z_Param_bInIsLastArrestedByGuard);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetLastArrestedByGuard_Implementation(Z_Param_bInIsLastArrestedByGuard);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execMulticast_SetLoadout)
	{
		P_GET_STRUCT(FPD3PlayerLoadout,Z_Param_InLoadout);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetLoadout_Implementation(Z_Param_InLoadout);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execMulticast_SetMiniGameState)
	{
		P_GET_ENUM(EPD3MiniGameState,Z_Param_InMiniGameState);
		P_GET_OBJECT(ASBZPlayerState,Z_Param_InWinningParticipant);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetMiniGameState_Implementation(EPD3MiniGameState(Z_Param_InMiniGameState),Z_Param_InWinningParticipant);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execMulticast_SetPlayerId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InPlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetPlayerId_Implementation(Z_Param_InPlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execMulticast_SetPlayerSlotId)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewSlotId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetPlayerSlotId_Implementation(Z_Param_NewSlotId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execMulticast_SetServerReloadState)
	{
		P_GET_STRUCT(FSBZReplicatedReloadState,Z_Param_InServerReloadState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetServerReloadState_Implementation(Z_Param_InServerReloadState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execMulticast_SetSkipIntroSequence)
	{
		P_GET_UBOOL(Z_Param_bInIsSkipIntroSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetSkipIntroSequence_Implementation(Z_Param_bInIsSkipIntroSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execMulticast_SetSpectateDurationModification)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetSpectateDurationModification_Implementation(Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execMulticast_SetSpectateTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetSpectateTime_Implementation(Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execMulticast_StartDodgeReplenish)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InStartReplenishDodgeServerTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_StartDodgeReplenish_Implementation(Z_Param_InStartReplenishDodgeServerTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execMulticast_StartTargeting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_StartTargeting_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execMulticast_StopTargeting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_StopTargeting_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execOnECMCountChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_OldCount);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AddedTime);
		P_GET_UBOOL(Z_Param_bInIsSignalScanActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnECMCountChanged(Z_Param_NewCount,Z_Param_OldCount,Z_Param_AddedTime,Z_Param_bInIsSignalScanActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execOnIsSkipIntroSequenceChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnIsSkipIntroSequenceChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execOnRep_AccelByteDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AccelByteDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execOnRep_AccelByteUserId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_OldAccelByteUserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AccelByteUserId(Z_Param_OldAccelByteUserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execOnRep_AccelByteUserName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AccelByteUserName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execOnRep_CustodyCharacterClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CustodyCharacterClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execOnRep_CustodyReleaseCost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CustodyReleaseCost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execOnRep_DefeatState)
	{
		P_GET_ENUM(EPD3DefeatState,Z_Param_OldDefeatState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_DefeatState(EPD3DefeatState(Z_Param_OldDefeatState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execOnRep_EquipStateAndIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_EquipStateAndIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execOnRep_FirstPartyPlatform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_FirstPartyPlatform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execOnRep_InfamyLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_InfamyLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execOnRep_IsMaskOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsMaskOn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execOnRep_IsTargeting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsTargeting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execOnRep_Loadout)
	{
		P_GET_STRUCT_REF(FPD3PlayerLoadout,Z_Param_Out_InOldLoadout);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Loadout(Z_Param_Out_InOldLoadout);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execOnRep_MergePartySelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MergePartySelected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execOnRep_MiniGameState)
	{
		P_GET_ENUM(EPD3MiniGameState,Z_Param_OldMiniGameState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MiniGameState(EPD3MiniGameState(Z_Param_OldMiniGameState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execOnRep_OnKillNetID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_OnKillNetID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execOnRep_OverkillWeaponProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_OverkillWeaponProgress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execOnRep_Platform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Platform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execOnRep_ReadyStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReadyStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execOnRep_ReplicatedStartReplenishDodgeServerTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReplicatedStartReplenishDodgeServerTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execOnRep_ServerReloadState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ServerReloadState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execOnRep_SpectateTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_OldSpectateTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SpectateTime(Z_Param_OldSpectateTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execOnRuntimeActorDestroyed)
	{
		P_GET_OBJECT(AActor,Z_Param_InRuntimeActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRuntimeActorDestroyed(Z_Param_InRuntimeActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execOnRuntimeActorEndPlay)
	{
		P_GET_OBJECT(AActor,Z_Param_RuntimeActor);
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRuntimeActorEndPlay(Z_Param_RuntimeActor,EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execOnRuntimeRoutedPingExpired)
	{
		P_GET_OBJECT(AActor,Z_Param_InRuntimeActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRuntimeRoutedPingExpired(Z_Param_InRuntimeActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execOnRuntimeScramblerExpired)
	{
		P_GET_OBJECT(AActor,Z_Param_InRuntimeActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRuntimeScramblerExpired(Z_Param_InRuntimeActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execOnRuntimeSecureLoopExpired)
	{
		P_GET_OBJECT(AActor,Z_Param_InRuntimeActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRuntimeSecureLoopExpired(Z_Param_InRuntimeActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execOnSpectateDurationModificationChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_OldDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSpectateDurationModificationChanged(Z_Param_OldDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execServer_CheatSetLoadout)
	{
		P_GET_STRUCT(FPD3PlayerLoadout,Z_Param_InLoadout);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_CheatSetLoadout_Validate(Z_Param_InLoadout))
		{
			RPC_ValidateFailed(TEXT("Server_CheatSetLoadout_Validate"));
			return;
		}
		P_THIS->Server_CheatSetLoadout_Implementation(Z_Param_InLoadout);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execServer_DebugConsoleCommand)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Command);
		P_GET_PROPERTY(FStrProperty,Z_Param_InstigatorContextText);
		P_GET_UBOOL(Z_Param_bIsLocallyControlledOnly);
		P_GET_UBOOL(Z_Param_bIsExecutedOnAll);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_DebugConsoleCommand_Implementation(Z_Param_Command,Z_Param_InstigatorContextText,Z_Param_bIsLocallyControlledOnly,Z_Param_bIsExecutedOnAll,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execServer_PickupAmmo)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_ID);
		P_GET_UBOOL(Z_Param_bIsSimulatedPickup);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_PickupAmmo_Implementation(Z_Param_ID,Z_Param_bIsSimulatedPickup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execServer_SetDropPlaceableEquippableData)
	{
		P_GET_STRUCT(FSBZDropPlaceableEquippableData,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetDropPlaceableEquippableData_Implementation(Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execServer_SetEquipStateAndIndex)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InEquipStateAndIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetEquipStateAndIndex_Implementation(Z_Param_InEquipStateAndIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execServer_SetMiniGameState)
	{
		P_GET_ENUM(EPD3MiniGameState,Z_Param_InMiniGameState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetMiniGameState_Implementation(EPD3MiniGameState(Z_Param_InMiniGameState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execServer_SetSkipIntroSequence)
	{
		P_GET_UBOOL(Z_Param_bInIsSkipIntroSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetSkipIntroSequence_Implementation(Z_Param_bInIsSkipIntroSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execServer_StartTargeting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_StartTargeting_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execServer_StopTargeting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_StopTargeting_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execServer_UpdateGameSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_UpdateGameSession_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZPlayerState::execSetSkipIntroSequence)
	{
		P_GET_UBOOL(Z_Param_bInIsSkipIntroSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSkipIntroSequence(Z_Param_bInIsSkipIntroSequence);
		P_NATIVE_END;
	}
	static FName NAME_ASBZPlayerState_Client_ChallengeCompleted = FName(TEXT("Client_ChallengeCompleted"));
	void ASBZPlayerState::Client_ChallengeCompleted(FChallengeNotifPayload const& ChallengeNotifPayload)
	{
		SBZPlayerState_eventClient_ChallengeCompleted_Parms Parms;
		Parms.ChallengeNotifPayload=ChallengeNotifPayload;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Client_ChallengeCompleted),&Parms);
	}
	static FName NAME_ASBZPlayerState_Client_CheatSetInfiniteAmmo = FName(TEXT("Client_CheatSetInfiniteAmmo"));
	void ASBZPlayerState::Client_CheatSetInfiniteAmmo(bool bInHasInifiniteAmmo)
	{
		SBZPlayerState_eventClient_CheatSetInfiniteAmmo_Parms Parms;
		Parms.bInHasInifiniteAmmo=bInHasInifiniteAmmo ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Client_CheatSetInfiniteAmmo),&Parms);
	}
	static FName NAME_ASBZPlayerState_Client_OnSaveLoadoutPending = FName(TEXT("Client_OnSaveLoadoutPending"));
	void ASBZPlayerState::Client_OnSaveLoadoutPending()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Client_OnSaveLoadoutPending),NULL);
	}
	static FName NAME_ASBZPlayerState_Client_PickupAmmo = FName(TEXT("Client_PickupAmmo"));
	void ASBZPlayerState::Client_PickupAmmo(uint32 ID)
	{
		SBZPlayerState_eventClient_PickupAmmo_Parms Parms;
		Parms.ID=ID;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Client_PickupAmmo),&Parms);
	}
	static FName NAME_ASBZPlayerState_Client_SendOverkillWeaponProgress = FName(TEXT("Client_SendOverkillWeaponProgress"));
	void ASBZPlayerState::Client_SendOverkillWeaponProgress(float InOverkillWeaponProgress)
	{
		SBZPlayerState_eventClient_SendOverkillWeaponProgress_Parms Parms;
		Parms.InOverkillWeaponProgress=InOverkillWeaponProgress;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Client_SendOverkillWeaponProgress),&Parms);
	}
	static FName NAME_ASBZPlayerState_Client_SendPlayerReloadProgressionSaveGame = FName(TEXT("Client_SendPlayerReloadProgressionSaveGame"));
	void ASBZPlayerState::Client_SendPlayerReloadProgressionSaveGame()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Client_SendPlayerReloadProgressionSaveGame),NULL);
	}
	static FName NAME_ASBZPlayerState_Client_SetCustodyReleaseCost = FName(TEXT("Client_SetCustodyReleaseCost"));
	void ASBZPlayerState::Client_SetCustodyReleaseCost(int32 InNewCustodyReleaseCost)
	{
		SBZPlayerState_eventClient_SetCustodyReleaseCost_Parms Parms;
		Parms.InNewCustodyReleaseCost=InNewCustodyReleaseCost;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Client_SetCustodyReleaseCost),&Parms);
	}
	static FName NAME_ASBZPlayerState_Client_SetReducedCustodyTime = FName(TEXT("Client_SetReducedCustodyTime"));
	void ASBZPlayerState::Client_SetReducedCustodyTime(float InReducedCustodyTime)
	{
		SBZPlayerState_eventClient_SetReducedCustodyTime_Parms Parms;
		Parms.InReducedCustodyTime=InReducedCustodyTime;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Client_SetReducedCustodyTime),&Parms);
	}
	static FName NAME_ASBZPlayerState_Client_SetSurrenderedEnemy = FName(TEXT("Client_SetSurrenderedEnemy"));
	void ASBZPlayerState::Client_SetSurrenderedEnemy(ASBZAICharacter* InSurrenderedEnemy)
	{
		SBZPlayerState_eventClient_SetSurrenderedEnemy_Parms Parms;
		Parms.InSurrenderedEnemy=InSurrenderedEnemy;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Client_SetSurrenderedEnemy),&Parms);
	}
	static FName NAME_ASBZPlayerState_Multicast_DebugConsoleCommand = FName(TEXT("Multicast_DebugConsoleCommand"));
	void ASBZPlayerState::Multicast_DebugConsoleCommand(const FString& Command, const FString& InstigatorContextText, bool bIsLocallyControlledOnly, int32 PlayerIndex)
	{
		SBZPlayerState_eventMulticast_DebugConsoleCommand_Parms Parms;
		Parms.Command=Command;
		Parms.InstigatorContextText=InstigatorContextText;
		Parms.bIsLocallyControlledOnly=bIsLocallyControlledOnly ? true : false;
		Parms.PlayerIndex=PlayerIndex;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Multicast_DebugConsoleCommand),&Parms);
	}
	static FName NAME_ASBZPlayerState_Multicast_OnKill = FName(TEXT("Multicast_OnKill"));
	void ASBZPlayerState::Multicast_OnKill(uint32 NetID)
	{
		SBZPlayerState_eventMulticast_OnKill_Parms Parms;
		Parms.NetID=NetID;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Multicast_OnKill),&Parms);
	}
	static FName NAME_ASBZPlayerState_Multicast_RejectEquipStateAndIndex = FName(TEXT("Multicast_RejectEquipStateAndIndex"));
	void ASBZPlayerState::Multicast_RejectEquipStateAndIndex(uint8 InEquipStateAndIndex)
	{
		SBZPlayerState_eventMulticast_RejectEquipStateAndIndex_Parms Parms;
		Parms.InEquipStateAndIndex=InEquipStateAndIndex;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Multicast_RejectEquipStateAndIndex),&Parms);
	}
	static FName NAME_ASBZPlayerState_Multicast_SetAccelByteUserId = FName(TEXT("Multicast_SetAccelByteUserId"));
	void ASBZPlayerState::Multicast_SetAccelByteUserId(const FString& InAccelByteUserId)
	{
		SBZPlayerState_eventMulticast_SetAccelByteUserId_Parms Parms;
		Parms.InAccelByteUserId=InAccelByteUserId;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Multicast_SetAccelByteUserId),&Parms);
	}
	static FName NAME_ASBZPlayerState_Multicast_SetAccelByteUserName = FName(TEXT("Multicast_SetAccelByteUserName"));
	void ASBZPlayerState::Multicast_SetAccelByteUserName(const FString& InAccelByteUserName)
	{
		SBZPlayerState_eventMulticast_SetAccelByteUserName_Parms Parms;
		Parms.InAccelByteUserName=InAccelByteUserName;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Multicast_SetAccelByteUserName),&Parms);
	}
	static FName NAME_ASBZPlayerState_Multicast_SetCustodyCharacterClass = FName(TEXT("Multicast_SetCustodyCharacterClass"));
	void ASBZPlayerState::Multicast_SetCustodyCharacterClass(FSoftObjectPath InCharacterClass)
	{
		SBZPlayerState_eventMulticast_SetCustodyCharacterClass_Parms Parms;
		Parms.InCharacterClass=InCharacterClass;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Multicast_SetCustodyCharacterClass),&Parms);
	}
	static FName NAME_ASBZPlayerState_Multicast_SetDefeatState = FName(TEXT("Multicast_SetDefeatState"));
	void ASBZPlayerState::Multicast_SetDefeatState(EPD3DefeatState InDefeatState)
	{
		SBZPlayerState_eventMulticast_SetDefeatState_Parms Parms;
		Parms.InDefeatState=InDefeatState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Multicast_SetDefeatState),&Parms);
	}
	static FName NAME_ASBZPlayerState_Multicast_SetEquipStateAndIndex = FName(TEXT("Multicast_SetEquipStateAndIndex"));
	void ASBZPlayerState::Multicast_SetEquipStateAndIndex(uint8 InEquipStateAndIndex)
	{
		SBZPlayerState_eventMulticast_SetEquipStateAndIndex_Parms Parms;
		Parms.InEquipStateAndIndex=InEquipStateAndIndex;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Multicast_SetEquipStateAndIndex),&Parms);
	}
	static FName NAME_ASBZPlayerState_Multicast_SetLastArrestedByGuard = FName(TEXT("Multicast_SetLastArrestedByGuard"));
	void ASBZPlayerState::Multicast_SetLastArrestedByGuard(bool bInIsLastArrestedByGuard)
	{
		SBZPlayerState_eventMulticast_SetLastArrestedByGuard_Parms Parms;
		Parms.bInIsLastArrestedByGuard=bInIsLastArrestedByGuard ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Multicast_SetLastArrestedByGuard),&Parms);
	}
	static FName NAME_ASBZPlayerState_Multicast_SetLoadout = FName(TEXT("Multicast_SetLoadout"));
	void ASBZPlayerState::Multicast_SetLoadout(FPD3PlayerLoadout const& InLoadout)
	{
		SBZPlayerState_eventMulticast_SetLoadout_Parms Parms;
		Parms.InLoadout=InLoadout;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Multicast_SetLoadout),&Parms);
	}
	static FName NAME_ASBZPlayerState_Multicast_SetMiniGameState = FName(TEXT("Multicast_SetMiniGameState"));
	void ASBZPlayerState::Multicast_SetMiniGameState(EPD3MiniGameState InMiniGameState, ASBZPlayerState* InWinningParticipant)
	{
		SBZPlayerState_eventMulticast_SetMiniGameState_Parms Parms;
		Parms.InMiniGameState=InMiniGameState;
		Parms.InWinningParticipant=InWinningParticipant;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Multicast_SetMiniGameState),&Parms);
	}
	static FName NAME_ASBZPlayerState_Multicast_SetPlayerId = FName(TEXT("Multicast_SetPlayerId"));
	void ASBZPlayerState::Multicast_SetPlayerId(int32 InPlayerId)
	{
		SBZPlayerState_eventMulticast_SetPlayerId_Parms Parms;
		Parms.InPlayerId=InPlayerId;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Multicast_SetPlayerId),&Parms);
	}
	static FName NAME_ASBZPlayerState_Multicast_SetPlayerSlotId = FName(TEXT("Multicast_SetPlayerSlotId"));
	void ASBZPlayerState::Multicast_SetPlayerSlotId(uint8 NewSlotId)
	{
		SBZPlayerState_eventMulticast_SetPlayerSlotId_Parms Parms;
		Parms.NewSlotId=NewSlotId;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Multicast_SetPlayerSlotId),&Parms);
	}
	static FName NAME_ASBZPlayerState_Multicast_SetServerReloadState = FName(TEXT("Multicast_SetServerReloadState"));
	void ASBZPlayerState::Multicast_SetServerReloadState(FSBZReplicatedReloadState const& InServerReloadState)
	{
		SBZPlayerState_eventMulticast_SetServerReloadState_Parms Parms;
		Parms.InServerReloadState=InServerReloadState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Multicast_SetServerReloadState),&Parms);
	}
	static FName NAME_ASBZPlayerState_Multicast_SetSkipIntroSequence = FName(TEXT("Multicast_SetSkipIntroSequence"));
	void ASBZPlayerState::Multicast_SetSkipIntroSequence(bool bInIsSkipIntroSequence)
	{
		SBZPlayerState_eventMulticast_SetSkipIntroSequence_Parms Parms;
		Parms.bInIsSkipIntroSequence=bInIsSkipIntroSequence ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Multicast_SetSkipIntroSequence),&Parms);
	}
	static FName NAME_ASBZPlayerState_Multicast_SetSpectateDurationModification = FName(TEXT("Multicast_SetSpectateDurationModification"));
	void ASBZPlayerState::Multicast_SetSpectateDurationModification(float Duration)
	{
		SBZPlayerState_eventMulticast_SetSpectateDurationModification_Parms Parms;
		Parms.Duration=Duration;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Multicast_SetSpectateDurationModification),&Parms);
	}
	static FName NAME_ASBZPlayerState_Multicast_SetSpectateTime = FName(TEXT("Multicast_SetSpectateTime"));
	void ASBZPlayerState::Multicast_SetSpectateTime(float Time)
	{
		SBZPlayerState_eventMulticast_SetSpectateTime_Parms Parms;
		Parms.Time=Time;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Multicast_SetSpectateTime),&Parms);
	}
	static FName NAME_ASBZPlayerState_Multicast_StartDodgeReplenish = FName(TEXT("Multicast_StartDodgeReplenish"));
	void ASBZPlayerState::Multicast_StartDodgeReplenish(float InStartReplenishDodgeServerTime)
	{
		SBZPlayerState_eventMulticast_StartDodgeReplenish_Parms Parms;
		Parms.InStartReplenishDodgeServerTime=InStartReplenishDodgeServerTime;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Multicast_StartDodgeReplenish),&Parms);
	}
	static FName NAME_ASBZPlayerState_Multicast_StartTargeting = FName(TEXT("Multicast_StartTargeting"));
	void ASBZPlayerState::Multicast_StartTargeting()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Multicast_StartTargeting),NULL);
	}
	static FName NAME_ASBZPlayerState_Multicast_StopTargeting = FName(TEXT("Multicast_StopTargeting"));
	void ASBZPlayerState::Multicast_StopTargeting()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Multicast_StopTargeting),NULL);
	}
	static FName NAME_ASBZPlayerState_Server_CheatSetLoadout = FName(TEXT("Server_CheatSetLoadout"));
	void ASBZPlayerState::Server_CheatSetLoadout(FPD3PlayerLoadout const& InLoadout)
	{
		SBZPlayerState_eventServer_CheatSetLoadout_Parms Parms;
		Parms.InLoadout=InLoadout;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Server_CheatSetLoadout),&Parms);
	}
	static FName NAME_ASBZPlayerState_Server_DebugConsoleCommand = FName(TEXT("Server_DebugConsoleCommand"));
	void ASBZPlayerState::Server_DebugConsoleCommand(const FString& Command, const FString& InstigatorContextText, bool bIsLocallyControlledOnly, bool bIsExecutedOnAll, int32 PlayerIndex)
	{
		SBZPlayerState_eventServer_DebugConsoleCommand_Parms Parms;
		Parms.Command=Command;
		Parms.InstigatorContextText=InstigatorContextText;
		Parms.bIsLocallyControlledOnly=bIsLocallyControlledOnly ? true : false;
		Parms.bIsExecutedOnAll=bIsExecutedOnAll ? true : false;
		Parms.PlayerIndex=PlayerIndex;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Server_DebugConsoleCommand),&Parms);
	}
	static FName NAME_ASBZPlayerState_Server_PickupAmmo = FName(TEXT("Server_PickupAmmo"));
	void ASBZPlayerState::Server_PickupAmmo(uint32 ID, bool bIsSimulatedPickup)
	{
		SBZPlayerState_eventServer_PickupAmmo_Parms Parms;
		Parms.ID=ID;
		Parms.bIsSimulatedPickup=bIsSimulatedPickup ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Server_PickupAmmo),&Parms);
	}
	static FName NAME_ASBZPlayerState_Server_SetDropPlaceableEquippableData = FName(TEXT("Server_SetDropPlaceableEquippableData"));
	void ASBZPlayerState::Server_SetDropPlaceableEquippableData(FSBZDropPlaceableEquippableData const& Data)
	{
		SBZPlayerState_eventServer_SetDropPlaceableEquippableData_Parms Parms;
		Parms.Data=Data;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Server_SetDropPlaceableEquippableData),&Parms);
	}
	static FName NAME_ASBZPlayerState_Server_SetEquipStateAndIndex = FName(TEXT("Server_SetEquipStateAndIndex"));
	void ASBZPlayerState::Server_SetEquipStateAndIndex(uint8 InEquipStateAndIndex)
	{
		SBZPlayerState_eventServer_SetEquipStateAndIndex_Parms Parms;
		Parms.InEquipStateAndIndex=InEquipStateAndIndex;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Server_SetEquipStateAndIndex),&Parms);
	}
	static FName NAME_ASBZPlayerState_Server_SetMiniGameState = FName(TEXT("Server_SetMiniGameState"));
	void ASBZPlayerState::Server_SetMiniGameState(EPD3MiniGameState InMiniGameState)
	{
		SBZPlayerState_eventServer_SetMiniGameState_Parms Parms;
		Parms.InMiniGameState=InMiniGameState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Server_SetMiniGameState),&Parms);
	}
	static FName NAME_ASBZPlayerState_Server_SetSkipIntroSequence = FName(TEXT("Server_SetSkipIntroSequence"));
	void ASBZPlayerState::Server_SetSkipIntroSequence(bool bInIsSkipIntroSequence)
	{
		SBZPlayerState_eventServer_SetSkipIntroSequence_Parms Parms;
		Parms.bInIsSkipIntroSequence=bInIsSkipIntroSequence ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Server_SetSkipIntroSequence),&Parms);
	}
	static FName NAME_ASBZPlayerState_Server_StartTargeting = FName(TEXT("Server_StartTargeting"));
	void ASBZPlayerState::Server_StartTargeting()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Server_StartTargeting),NULL);
	}
	static FName NAME_ASBZPlayerState_Server_StopTargeting = FName(TEXT("Server_StopTargeting"));
	void ASBZPlayerState::Server_StopTargeting()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Server_StopTargeting),NULL);
	}
	static FName NAME_ASBZPlayerState_Server_UpdateGameSession = FName(TEXT("Server_UpdateGameSession"));
	void ASBZPlayerState::Server_UpdateGameSession()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZPlayerState_Server_UpdateGameSession),NULL);
	}
	void ASBZPlayerState::StaticRegisterNativesASBZPlayerState()
	{
		UClass* Class = ASBZPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Client_ChallengeCompleted", &ASBZPlayerState::execClient_ChallengeCompleted },
			{ "Client_CheatSetInfiniteAmmo", &ASBZPlayerState::execClient_CheatSetInfiniteAmmo },
			{ "Client_OnSaveLoadoutPending", &ASBZPlayerState::execClient_OnSaveLoadoutPending },
			{ "Client_PickupAmmo", &ASBZPlayerState::execClient_PickupAmmo },
			{ "Client_SendOverkillWeaponProgress", &ASBZPlayerState::execClient_SendOverkillWeaponProgress },
			{ "Client_SendPlayerReloadProgressionSaveGame", &ASBZPlayerState::execClient_SendPlayerReloadProgressionSaveGame },
			{ "Client_SetCustodyReleaseCost", &ASBZPlayerState::execClient_SetCustodyReleaseCost },
			{ "Client_SetReducedCustodyTime", &ASBZPlayerState::execClient_SetReducedCustodyTime },
			{ "Client_SetSurrenderedEnemy", &ASBZPlayerState::execClient_SetSurrenderedEnemy },
			{ "EquipCuttingToolToLoadout", &ASBZPlayerState::execEquipCuttingToolToLoadout },
			{ "EquipEquippableToLoadoutAt", &ASBZPlayerState::execEquipEquippableToLoadoutAt },
			{ "EquipMaskToLoadout", &ASBZPlayerState::execEquipMaskToLoadout },
			{ "EquipPlaceableToLoadout", &ASBZPlayerState::execEquipPlaceableToLoadout },
			{ "EquipThrowableToLoadout", &ASBZPlayerState::execEquipThrowableToLoadout },
			{ "EquipToolToLoadout", &ASBZPlayerState::execEquipToolToLoadout },
			{ "GetAccelBytePlayerName", &ASBZPlayerState::execGetAccelBytePlayerName },
			{ "GetCharacterIcon", &ASBZPlayerState::execGetCharacterIcon },
			{ "GetInfamyLevel", &ASBZPlayerState::execGetInfamyLevel },
			{ "GetMergePartySelected", &ASBZPlayerState::execGetMergePartySelected },
			{ "GetPlatform", &ASBZPlayerState::execGetPlatform },
			{ "GetPlayerDisplayName", &ASBZPlayerState::execGetPlayerDisplayName },
			{ "IsPlayerDisplayNameReady", &ASBZPlayerState::execIsPlayerDisplayNameReady },
			{ "IsSkipIntroSequence", &ASBZPlayerState::execIsSkipIntroSequence },
			{ "Multicast_DebugConsoleCommand", &ASBZPlayerState::execMulticast_DebugConsoleCommand },
			{ "Multicast_OnKill", &ASBZPlayerState::execMulticast_OnKill },
			{ "Multicast_RejectEquipStateAndIndex", &ASBZPlayerState::execMulticast_RejectEquipStateAndIndex },
			{ "Multicast_SetAccelByteUserId", &ASBZPlayerState::execMulticast_SetAccelByteUserId },
			{ "Multicast_SetAccelByteUserName", &ASBZPlayerState::execMulticast_SetAccelByteUserName },
			{ "Multicast_SetCustodyCharacterClass", &ASBZPlayerState::execMulticast_SetCustodyCharacterClass },
			{ "Multicast_SetDefeatState", &ASBZPlayerState::execMulticast_SetDefeatState },
			{ "Multicast_SetEquipStateAndIndex", &ASBZPlayerState::execMulticast_SetEquipStateAndIndex },
			{ "Multicast_SetLastArrestedByGuard", &ASBZPlayerState::execMulticast_SetLastArrestedByGuard },
			{ "Multicast_SetLoadout", &ASBZPlayerState::execMulticast_SetLoadout },
			{ "Multicast_SetMiniGameState", &ASBZPlayerState::execMulticast_SetMiniGameState },
			{ "Multicast_SetPlayerId", &ASBZPlayerState::execMulticast_SetPlayerId },
			{ "Multicast_SetPlayerSlotId", &ASBZPlayerState::execMulticast_SetPlayerSlotId },
			{ "Multicast_SetServerReloadState", &ASBZPlayerState::execMulticast_SetServerReloadState },
			{ "Multicast_SetSkipIntroSequence", &ASBZPlayerState::execMulticast_SetSkipIntroSequence },
			{ "Multicast_SetSpectateDurationModification", &ASBZPlayerState::execMulticast_SetSpectateDurationModification },
			{ "Multicast_SetSpectateTime", &ASBZPlayerState::execMulticast_SetSpectateTime },
			{ "Multicast_StartDodgeReplenish", &ASBZPlayerState::execMulticast_StartDodgeReplenish },
			{ "Multicast_StartTargeting", &ASBZPlayerState::execMulticast_StartTargeting },
			{ "Multicast_StopTargeting", &ASBZPlayerState::execMulticast_StopTargeting },
			{ "OnECMCountChanged", &ASBZPlayerState::execOnECMCountChanged },
			{ "OnIsSkipIntroSequenceChanged", &ASBZPlayerState::execOnIsSkipIntroSequenceChanged },
			{ "OnRep_AccelByteDisplayName", &ASBZPlayerState::execOnRep_AccelByteDisplayName },
			{ "OnRep_AccelByteUserId", &ASBZPlayerState::execOnRep_AccelByteUserId },
			{ "OnRep_AccelByteUserName", &ASBZPlayerState::execOnRep_AccelByteUserName },
			{ "OnRep_CustodyCharacterClass", &ASBZPlayerState::execOnRep_CustodyCharacterClass },
			{ "OnRep_CustodyReleaseCost", &ASBZPlayerState::execOnRep_CustodyReleaseCost },
			{ "OnRep_DefeatState", &ASBZPlayerState::execOnRep_DefeatState },
			{ "OnRep_EquipStateAndIndex", &ASBZPlayerState::execOnRep_EquipStateAndIndex },
			{ "OnRep_FirstPartyPlatform", &ASBZPlayerState::execOnRep_FirstPartyPlatform },
			{ "OnRep_InfamyLevel", &ASBZPlayerState::execOnRep_InfamyLevel },
			{ "OnRep_IsMaskOn", &ASBZPlayerState::execOnRep_IsMaskOn },
			{ "OnRep_IsTargeting", &ASBZPlayerState::execOnRep_IsTargeting },
			{ "OnRep_Loadout", &ASBZPlayerState::execOnRep_Loadout },
			{ "OnRep_MergePartySelected", &ASBZPlayerState::execOnRep_MergePartySelected },
			{ "OnRep_MiniGameState", &ASBZPlayerState::execOnRep_MiniGameState },
			{ "OnRep_OnKillNetID", &ASBZPlayerState::execOnRep_OnKillNetID },
			{ "OnRep_OverkillWeaponProgress", &ASBZPlayerState::execOnRep_OverkillWeaponProgress },
			{ "OnRep_Platform", &ASBZPlayerState::execOnRep_Platform },
			{ "OnRep_ReadyStatus", &ASBZPlayerState::execOnRep_ReadyStatus },
			{ "OnRep_ReplicatedStartReplenishDodgeServerTime", &ASBZPlayerState::execOnRep_ReplicatedStartReplenishDodgeServerTime },
			{ "OnRep_ServerReloadState", &ASBZPlayerState::execOnRep_ServerReloadState },
			{ "OnRep_SpectateTime", &ASBZPlayerState::execOnRep_SpectateTime },
			{ "OnRuntimeActorDestroyed", &ASBZPlayerState::execOnRuntimeActorDestroyed },
			{ "OnRuntimeActorEndPlay", &ASBZPlayerState::execOnRuntimeActorEndPlay },
			{ "OnRuntimeRoutedPingExpired", &ASBZPlayerState::execOnRuntimeRoutedPingExpired },
			{ "OnRuntimeScramblerExpired", &ASBZPlayerState::execOnRuntimeScramblerExpired },
			{ "OnRuntimeSecureLoopExpired", &ASBZPlayerState::execOnRuntimeSecureLoopExpired },
			{ "OnSpectateDurationModificationChanged", &ASBZPlayerState::execOnSpectateDurationModificationChanged },
			{ "Server_CheatSetLoadout", &ASBZPlayerState::execServer_CheatSetLoadout },
			{ "Server_DebugConsoleCommand", &ASBZPlayerState::execServer_DebugConsoleCommand },
			{ "Server_PickupAmmo", &ASBZPlayerState::execServer_PickupAmmo },
			{ "Server_SetDropPlaceableEquippableData", &ASBZPlayerState::execServer_SetDropPlaceableEquippableData },
			{ "Server_SetEquipStateAndIndex", &ASBZPlayerState::execServer_SetEquipStateAndIndex },
			{ "Server_SetMiniGameState", &ASBZPlayerState::execServer_SetMiniGameState },
			{ "Server_SetSkipIntroSequence", &ASBZPlayerState::execServer_SetSkipIntroSequence },
			{ "Server_StartTargeting", &ASBZPlayerState::execServer_StartTargeting },
			{ "Server_StopTargeting", &ASBZPlayerState::execServer_StopTargeting },
			{ "Server_UpdateGameSession", &ASBZPlayerState::execServer_UpdateGameSession },
			{ "SetSkipIntroSequence", &ASBZPlayerState::execSetSkipIntroSequence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Client_ChallengeCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeNotifPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChallengeNotifPayload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Client_ChallengeCompleted_Statics::NewProp_ChallengeNotifPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZPlayerState_Client_ChallengeCompleted_Statics::NewProp_ChallengeNotifPayload = { "ChallengeNotifPayload", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventClient_ChallengeCompleted_Parms, ChallengeNotifPayload), Z_Construct_UScriptStruct_FChallengeNotifPayload, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Client_ChallengeCompleted_Statics::NewProp_ChallengeNotifPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Client_ChallengeCompleted_Statics::NewProp_ChallengeNotifPayload_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_Client_ChallengeCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Client_ChallengeCompleted_Statics::NewProp_ChallengeNotifPayload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Client_ChallengeCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Client_ChallengeCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Client_ChallengeCompleted", nullptr, nullptr, sizeof(SBZPlayerState_eventClient_ChallengeCompleted_Parms), Z_Construct_UFunction_ASBZPlayerState_Client_ChallengeCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Client_ChallengeCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Client_ChallengeCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Client_ChallengeCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Client_ChallengeCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Client_ChallengeCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Client_CheatSetInfiniteAmmo_Statics
	{
		static void NewProp_bInHasInifiniteAmmo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInHasInifiniteAmmo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZPlayerState_Client_CheatSetInfiniteAmmo_Statics::NewProp_bInHasInifiniteAmmo_SetBit(void* Obj)
	{
		((SBZPlayerState_eventClient_CheatSetInfiniteAmmo_Parms*)Obj)->bInHasInifiniteAmmo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlayerState_Client_CheatSetInfiniteAmmo_Statics::NewProp_bInHasInifiniteAmmo = { "bInHasInifiniteAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerState_eventClient_CheatSetInfiniteAmmo_Parms), &Z_Construct_UFunction_ASBZPlayerState_Client_CheatSetInfiniteAmmo_Statics::NewProp_bInHasInifiniteAmmo_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_Client_CheatSetInfiniteAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Client_CheatSetInfiniteAmmo_Statics::NewProp_bInHasInifiniteAmmo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Client_CheatSetInfiniteAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Client_CheatSetInfiniteAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Client_CheatSetInfiniteAmmo", nullptr, nullptr, sizeof(SBZPlayerState_eventClient_CheatSetInfiniteAmmo_Parms), Z_Construct_UFunction_ASBZPlayerState_Client_CheatSetInfiniteAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Client_CheatSetInfiniteAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Client_CheatSetInfiniteAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Client_CheatSetInfiniteAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Client_CheatSetInfiniteAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Client_CheatSetInfiniteAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Client_OnSaveLoadoutPending_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Client_OnSaveLoadoutPending_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Client_OnSaveLoadoutPending_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Client_OnSaveLoadoutPending", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Client_OnSaveLoadoutPending_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Client_OnSaveLoadoutPending_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Client_OnSaveLoadoutPending()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Client_OnSaveLoadoutPending_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Client_PickupAmmo_Statics
	{
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_ASBZPlayerState_Client_PickupAmmo_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventClient_PickupAmmo_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_Client_PickupAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Client_PickupAmmo_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Client_PickupAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Client_PickupAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Client_PickupAmmo", nullptr, nullptr, sizeof(SBZPlayerState_eventClient_PickupAmmo_Parms), Z_Construct_UFunction_ASBZPlayerState_Client_PickupAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Client_PickupAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Client_PickupAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Client_PickupAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Client_PickupAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Client_PickupAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Client_SendOverkillWeaponProgress_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InOverkillWeaponProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZPlayerState_Client_SendOverkillWeaponProgress_Statics::NewProp_InOverkillWeaponProgress = { "InOverkillWeaponProgress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventClient_SendOverkillWeaponProgress_Parms, InOverkillWeaponProgress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_Client_SendOverkillWeaponProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Client_SendOverkillWeaponProgress_Statics::NewProp_InOverkillWeaponProgress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Client_SendOverkillWeaponProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Client_SendOverkillWeaponProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Client_SendOverkillWeaponProgress", nullptr, nullptr, sizeof(SBZPlayerState_eventClient_SendOverkillWeaponProgress_Parms), Z_Construct_UFunction_ASBZPlayerState_Client_SendOverkillWeaponProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Client_SendOverkillWeaponProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05040CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Client_SendOverkillWeaponProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Client_SendOverkillWeaponProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Client_SendOverkillWeaponProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Client_SendOverkillWeaponProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Client_SendPlayerReloadProgressionSaveGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Client_SendPlayerReloadProgressionSaveGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Client_SendPlayerReloadProgressionSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Client_SendPlayerReloadProgressionSaveGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Client_SendPlayerReloadProgressionSaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Client_SendPlayerReloadProgressionSaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Client_SendPlayerReloadProgressionSaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Client_SendPlayerReloadProgressionSaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Client_SetCustodyReleaseCost_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InNewCustodyReleaseCost;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZPlayerState_Client_SetCustodyReleaseCost_Statics::NewProp_InNewCustodyReleaseCost = { "InNewCustodyReleaseCost", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventClient_SetCustodyReleaseCost_Parms, InNewCustodyReleaseCost), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_Client_SetCustodyReleaseCost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Client_SetCustodyReleaseCost_Statics::NewProp_InNewCustodyReleaseCost,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Client_SetCustodyReleaseCost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Client_SetCustodyReleaseCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Client_SetCustodyReleaseCost", nullptr, nullptr, sizeof(SBZPlayerState_eventClient_SetCustodyReleaseCost_Parms), Z_Construct_UFunction_ASBZPlayerState_Client_SetCustodyReleaseCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Client_SetCustodyReleaseCost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05040CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Client_SetCustodyReleaseCost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Client_SetCustodyReleaseCost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Client_SetCustodyReleaseCost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Client_SetCustodyReleaseCost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Client_SetReducedCustodyTime_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InReducedCustodyTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZPlayerState_Client_SetReducedCustodyTime_Statics::NewProp_InReducedCustodyTime = { "InReducedCustodyTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventClient_SetReducedCustodyTime_Parms, InReducedCustodyTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_Client_SetReducedCustodyTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Client_SetReducedCustodyTime_Statics::NewProp_InReducedCustodyTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Client_SetReducedCustodyTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Client_SetReducedCustodyTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Client_SetReducedCustodyTime", nullptr, nullptr, sizeof(SBZPlayerState_eventClient_SetReducedCustodyTime_Parms), Z_Construct_UFunction_ASBZPlayerState_Client_SetReducedCustodyTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Client_SetReducedCustodyTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05040CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Client_SetReducedCustodyTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Client_SetReducedCustodyTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Client_SetReducedCustodyTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Client_SetReducedCustodyTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Client_SetSurrenderedEnemy_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSurrenderedEnemy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPlayerState_Client_SetSurrenderedEnemy_Statics::NewProp_InSurrenderedEnemy = { "InSurrenderedEnemy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventClient_SetSurrenderedEnemy_Parms, InSurrenderedEnemy), Z_Construct_UClass_ASBZAICharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_Client_SetSurrenderedEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Client_SetSurrenderedEnemy_Statics::NewProp_InSurrenderedEnemy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Client_SetSurrenderedEnemy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Client_SetSurrenderedEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Client_SetSurrenderedEnemy", nullptr, nullptr, sizeof(SBZPlayerState_eventClient_SetSurrenderedEnemy_Parms), Z_Construct_UFunction_ASBZPlayerState_Client_SetSurrenderedEnemy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Client_SetSurrenderedEnemy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Client_SetSurrenderedEnemy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Client_SetSurrenderedEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Client_SetSurrenderedEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Client_SetSurrenderedEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_EquipCuttingToolToLoadout_Statics
	{
		struct SBZPlayerState_eventEquipCuttingToolToLoadout_Parms
		{
			USBZToolCuttingData* ItemToEquip;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemToEquip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPlayerState_EquipCuttingToolToLoadout_Statics::NewProp_ItemToEquip = { "ItemToEquip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventEquipCuttingToolToLoadout_Parms, ItemToEquip), Z_Construct_UClass_USBZToolCuttingData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_EquipCuttingToolToLoadout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_EquipCuttingToolToLoadout_Statics::NewProp_ItemToEquip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_EquipCuttingToolToLoadout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_EquipCuttingToolToLoadout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "EquipCuttingToolToLoadout", nullptr, nullptr, sizeof(SBZPlayerState_eventEquipCuttingToolToLoadout_Parms), Z_Construct_UFunction_ASBZPlayerState_EquipCuttingToolToLoadout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_EquipCuttingToolToLoadout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_EquipCuttingToolToLoadout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_EquipCuttingToolToLoadout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_EquipCuttingToolToLoadout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_EquipCuttingToolToLoadout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_EquipEquippableToLoadoutAt_Statics
	{
		struct SBZPlayerState_eventEquipEquippableToLoadoutAt_Parms
		{
			const USBZEquippableData* EquippableToEquip;
			int32 Index;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableToEquip_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippableToEquip;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_EquipEquippableToLoadoutAt_Statics::NewProp_EquippableToEquip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPlayerState_EquipEquippableToLoadoutAt_Statics::NewProp_EquippableToEquip = { "EquippableToEquip", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventEquipEquippableToLoadoutAt_Parms, EquippableToEquip), Z_Construct_UClass_USBZEquippableData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_EquipEquippableToLoadoutAt_Statics::NewProp_EquippableToEquip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_EquipEquippableToLoadoutAt_Statics::NewProp_EquippableToEquip_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZPlayerState_EquipEquippableToLoadoutAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventEquipEquippableToLoadoutAt_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_EquipEquippableToLoadoutAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_EquipEquippableToLoadoutAt_Statics::NewProp_EquippableToEquip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_EquipEquippableToLoadoutAt_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_EquipEquippableToLoadoutAt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_EquipEquippableToLoadoutAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "EquipEquippableToLoadoutAt", nullptr, nullptr, sizeof(SBZPlayerState_eventEquipEquippableToLoadoutAt_Parms), Z_Construct_UFunction_ASBZPlayerState_EquipEquippableToLoadoutAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_EquipEquippableToLoadoutAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_EquipEquippableToLoadoutAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_EquipEquippableToLoadoutAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_EquipEquippableToLoadoutAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_EquipEquippableToLoadoutAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_EquipMaskToLoadout_Statics
	{
		struct SBZPlayerState_eventEquipMaskToLoadout_Parms
		{
			USBZMaskData* ItemToEquip;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemToEquip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPlayerState_EquipMaskToLoadout_Statics::NewProp_ItemToEquip = { "ItemToEquip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventEquipMaskToLoadout_Parms, ItemToEquip), Z_Construct_UClass_USBZMaskData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_EquipMaskToLoadout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_EquipMaskToLoadout_Statics::NewProp_ItemToEquip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_EquipMaskToLoadout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_EquipMaskToLoadout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "EquipMaskToLoadout", nullptr, nullptr, sizeof(SBZPlayerState_eventEquipMaskToLoadout_Parms), Z_Construct_UFunction_ASBZPlayerState_EquipMaskToLoadout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_EquipMaskToLoadout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_EquipMaskToLoadout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_EquipMaskToLoadout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_EquipMaskToLoadout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_EquipMaskToLoadout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_EquipPlaceableToLoadout_Statics
	{
		struct SBZPlayerState_eventEquipPlaceableToLoadout_Parms
		{
			USBZPlaceableData* ItemToEquip;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemToEquip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPlayerState_EquipPlaceableToLoadout_Statics::NewProp_ItemToEquip = { "ItemToEquip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventEquipPlaceableToLoadout_Parms, ItemToEquip), Z_Construct_UClass_USBZPlaceableData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_EquipPlaceableToLoadout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_EquipPlaceableToLoadout_Statics::NewProp_ItemToEquip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_EquipPlaceableToLoadout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_EquipPlaceableToLoadout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "EquipPlaceableToLoadout", nullptr, nullptr, sizeof(SBZPlayerState_eventEquipPlaceableToLoadout_Parms), Z_Construct_UFunction_ASBZPlayerState_EquipPlaceableToLoadout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_EquipPlaceableToLoadout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_EquipPlaceableToLoadout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_EquipPlaceableToLoadout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_EquipPlaceableToLoadout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_EquipPlaceableToLoadout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_EquipThrowableToLoadout_Statics
	{
		struct SBZPlayerState_eventEquipThrowableToLoadout_Parms
		{
			USBZThrowableData* ItemToEquip;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemToEquip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPlayerState_EquipThrowableToLoadout_Statics::NewProp_ItemToEquip = { "ItemToEquip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventEquipThrowableToLoadout_Parms, ItemToEquip), Z_Construct_UClass_USBZThrowableData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_EquipThrowableToLoadout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_EquipThrowableToLoadout_Statics::NewProp_ItemToEquip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_EquipThrowableToLoadout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_EquipThrowableToLoadout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "EquipThrowableToLoadout", nullptr, nullptr, sizeof(SBZPlayerState_eventEquipThrowableToLoadout_Parms), Z_Construct_UFunction_ASBZPlayerState_EquipThrowableToLoadout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_EquipThrowableToLoadout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_EquipThrowableToLoadout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_EquipThrowableToLoadout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_EquipThrowableToLoadout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_EquipThrowableToLoadout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_EquipToolToLoadout_Statics
	{
		struct SBZPlayerState_eventEquipToolToLoadout_Parms
		{
			USBZToolData* ItemToEquip;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemToEquip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPlayerState_EquipToolToLoadout_Statics::NewProp_ItemToEquip = { "ItemToEquip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventEquipToolToLoadout_Parms, ItemToEquip), Z_Construct_UClass_USBZToolData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_EquipToolToLoadout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_EquipToolToLoadout_Statics::NewProp_ItemToEquip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_EquipToolToLoadout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_EquipToolToLoadout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "EquipToolToLoadout", nullptr, nullptr, sizeof(SBZPlayerState_eventEquipToolToLoadout_Parms), Z_Construct_UFunction_ASBZPlayerState_EquipToolToLoadout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_EquipToolToLoadout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_EquipToolToLoadout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_EquipToolToLoadout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_EquipToolToLoadout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_EquipToolToLoadout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_GetAccelBytePlayerName_Statics
	{
		struct SBZPlayerState_eventGetAccelBytePlayerName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZPlayerState_GetAccelBytePlayerName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventGetAccelBytePlayerName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_GetAccelBytePlayerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_GetAccelBytePlayerName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_GetAccelBytePlayerName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_GetAccelBytePlayerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "GetAccelBytePlayerName", nullptr, nullptr, sizeof(SBZPlayerState_eventGetAccelBytePlayerName_Parms), Z_Construct_UFunction_ASBZPlayerState_GetAccelBytePlayerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_GetAccelBytePlayerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_GetAccelBytePlayerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_GetAccelBytePlayerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_GetAccelBytePlayerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_GetAccelBytePlayerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_GetCharacterIcon_Statics
	{
		struct SBZPlayerState_eventGetCharacterIcon_Parms
		{
			UPaperSprite* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPlayerState_GetCharacterIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventGetCharacterIcon_Parms, ReturnValue), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_GetCharacterIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_GetCharacterIcon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_GetCharacterIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_GetCharacterIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "GetCharacterIcon", nullptr, nullptr, sizeof(SBZPlayerState_eventGetCharacterIcon_Parms), Z_Construct_UFunction_ASBZPlayerState_GetCharacterIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_GetCharacterIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_GetCharacterIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_GetCharacterIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_GetCharacterIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_GetCharacterIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_GetInfamyLevel_Statics
	{
		struct SBZPlayerState_eventGetInfamyLevel_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZPlayerState_GetInfamyLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventGetInfamyLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_GetInfamyLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_GetInfamyLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_GetInfamyLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_GetInfamyLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "GetInfamyLevel", nullptr, nullptr, sizeof(SBZPlayerState_eventGetInfamyLevel_Parms), Z_Construct_UFunction_ASBZPlayerState_GetInfamyLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_GetInfamyLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_GetInfamyLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_GetInfamyLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_GetInfamyLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_GetInfamyLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_GetMergePartySelected_Statics
	{
		struct SBZPlayerState_eventGetMergePartySelected_Parms
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
	void Z_Construct_UFunction_ASBZPlayerState_GetMergePartySelected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZPlayerState_eventGetMergePartySelected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlayerState_GetMergePartySelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerState_eventGetMergePartySelected_Parms), &Z_Construct_UFunction_ASBZPlayerState_GetMergePartySelected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_GetMergePartySelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_GetMergePartySelected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_GetMergePartySelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_GetMergePartySelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "GetMergePartySelected", nullptr, nullptr, sizeof(SBZPlayerState_eventGetMergePartySelected_Parms), Z_Construct_UFunction_ASBZPlayerState_GetMergePartySelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_GetMergePartySelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_GetMergePartySelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_GetMergePartySelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_GetMergePartySelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_GetMergePartySelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_GetPlatform_Statics
	{
		struct SBZPlayerState_eventGetPlatform_Parms
		{
			ESBZPlatform ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZPlayerState_GetPlatform_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZPlayerState_GetPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventGetPlatform_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZPlatform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_GetPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_GetPlatform_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_GetPlatform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_GetPlatform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_GetPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "GetPlatform", nullptr, nullptr, sizeof(SBZPlayerState_eventGetPlatform_Parms), Z_Construct_UFunction_ASBZPlayerState_GetPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_GetPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_GetPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_GetPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_GetPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_GetPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_GetPlayerDisplayName_Statics
	{
		struct SBZPlayerState_eventGetPlayerDisplayName_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ASBZPlayerState_GetPlayerDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventGetPlayerDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_GetPlayerDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_GetPlayerDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_GetPlayerDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_GetPlayerDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "GetPlayerDisplayName", nullptr, nullptr, sizeof(SBZPlayerState_eventGetPlayerDisplayName_Parms), Z_Construct_UFunction_ASBZPlayerState_GetPlayerDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_GetPlayerDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_GetPlayerDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_GetPlayerDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_GetPlayerDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_GetPlayerDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_IsPlayerDisplayNameReady_Statics
	{
		struct SBZPlayerState_eventIsPlayerDisplayNameReady_Parms
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
	void Z_Construct_UFunction_ASBZPlayerState_IsPlayerDisplayNameReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZPlayerState_eventIsPlayerDisplayNameReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlayerState_IsPlayerDisplayNameReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerState_eventIsPlayerDisplayNameReady_Parms), &Z_Construct_UFunction_ASBZPlayerState_IsPlayerDisplayNameReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_IsPlayerDisplayNameReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_IsPlayerDisplayNameReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_IsPlayerDisplayNameReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_IsPlayerDisplayNameReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "IsPlayerDisplayNameReady", nullptr, nullptr, sizeof(SBZPlayerState_eventIsPlayerDisplayNameReady_Parms), Z_Construct_UFunction_ASBZPlayerState_IsPlayerDisplayNameReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_IsPlayerDisplayNameReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_IsPlayerDisplayNameReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_IsPlayerDisplayNameReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_IsPlayerDisplayNameReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_IsPlayerDisplayNameReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_IsSkipIntroSequence_Statics
	{
		struct SBZPlayerState_eventIsSkipIntroSequence_Parms
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
	void Z_Construct_UFunction_ASBZPlayerState_IsSkipIntroSequence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZPlayerState_eventIsSkipIntroSequence_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlayerState_IsSkipIntroSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerState_eventIsSkipIntroSequence_Parms), &Z_Construct_UFunction_ASBZPlayerState_IsSkipIntroSequence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_IsSkipIntroSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_IsSkipIntroSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_IsSkipIntroSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_IsSkipIntroSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "IsSkipIntroSequence", nullptr, nullptr, sizeof(SBZPlayerState_eventIsSkipIntroSequence_Parms), Z_Construct_UFunction_ASBZPlayerState_IsSkipIntroSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_IsSkipIntroSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_IsSkipIntroSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_IsSkipIntroSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_IsSkipIntroSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_IsSkipIntroSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Multicast_DebugConsoleCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Command;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstigatorContextText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InstigatorContextText;
		static void NewProp_bIsLocallyControlledOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocallyControlledOnly;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Multicast_DebugConsoleCommand_Statics::NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZPlayerState_Multicast_DebugConsoleCommand_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventMulticast_DebugConsoleCommand_Parms, Command), METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Multicast_DebugConsoleCommand_Statics::NewProp_Command_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_DebugConsoleCommand_Statics::NewProp_Command_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Multicast_DebugConsoleCommand_Statics::NewProp_InstigatorContextText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZPlayerState_Multicast_DebugConsoleCommand_Statics::NewProp_InstigatorContextText = { "InstigatorContextText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventMulticast_DebugConsoleCommand_Parms, InstigatorContextText), METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Multicast_DebugConsoleCommand_Statics::NewProp_InstigatorContextText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_DebugConsoleCommand_Statics::NewProp_InstigatorContextText_MetaData)) };
	void Z_Construct_UFunction_ASBZPlayerState_Multicast_DebugConsoleCommand_Statics::NewProp_bIsLocallyControlledOnly_SetBit(void* Obj)
	{
		((SBZPlayerState_eventMulticast_DebugConsoleCommand_Parms*)Obj)->bIsLocallyControlledOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlayerState_Multicast_DebugConsoleCommand_Statics::NewProp_bIsLocallyControlledOnly = { "bIsLocallyControlledOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerState_eventMulticast_DebugConsoleCommand_Parms), &Z_Construct_UFunction_ASBZPlayerState_Multicast_DebugConsoleCommand_Statics::NewProp_bIsLocallyControlledOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZPlayerState_Multicast_DebugConsoleCommand_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventMulticast_DebugConsoleCommand_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_Multicast_DebugConsoleCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Multicast_DebugConsoleCommand_Statics::NewProp_Command,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Multicast_DebugConsoleCommand_Statics::NewProp_InstigatorContextText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Multicast_DebugConsoleCommand_Statics::NewProp_bIsLocallyControlledOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Multicast_DebugConsoleCommand_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Multicast_DebugConsoleCommand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Multicast_DebugConsoleCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Multicast_DebugConsoleCommand", nullptr, nullptr, sizeof(SBZPlayerState_eventMulticast_DebugConsoleCommand_Parms), Z_Construct_UFunction_ASBZPlayerState_Multicast_DebugConsoleCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_DebugConsoleCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Multicast_DebugConsoleCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_DebugConsoleCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Multicast_DebugConsoleCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Multicast_DebugConsoleCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Multicast_OnKill_Statics
	{
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NetID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_ASBZPlayerState_Multicast_OnKill_Statics::NewProp_NetID = { "NetID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventMulticast_OnKill_Parms, NetID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_Multicast_OnKill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Multicast_OnKill_Statics::NewProp_NetID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Multicast_OnKill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Multicast_OnKill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Multicast_OnKill", nullptr, nullptr, sizeof(SBZPlayerState_eventMulticast_OnKill_Parms), Z_Construct_UFunction_ASBZPlayerState_Multicast_OnKill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_OnKill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Multicast_OnKill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_OnKill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Multicast_OnKill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Multicast_OnKill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Multicast_RejectEquipStateAndIndex_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InEquipStateAndIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZPlayerState_Multicast_RejectEquipStateAndIndex_Statics::NewProp_InEquipStateAndIndex = { "InEquipStateAndIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventMulticast_RejectEquipStateAndIndex_Parms, InEquipStateAndIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_Multicast_RejectEquipStateAndIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Multicast_RejectEquipStateAndIndex_Statics::NewProp_InEquipStateAndIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Multicast_RejectEquipStateAndIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Multicast_RejectEquipStateAndIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Multicast_RejectEquipStateAndIndex", nullptr, nullptr, sizeof(SBZPlayerState_eventMulticast_RejectEquipStateAndIndex_Parms), Z_Construct_UFunction_ASBZPlayerState_Multicast_RejectEquipStateAndIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_RejectEquipStateAndIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Multicast_RejectEquipStateAndIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_RejectEquipStateAndIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Multicast_RejectEquipStateAndIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Multicast_RejectEquipStateAndIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Multicast_SetAccelByteUserId_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAccelByteUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InAccelByteUserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Multicast_SetAccelByteUserId_Statics::NewProp_InAccelByteUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZPlayerState_Multicast_SetAccelByteUserId_Statics::NewProp_InAccelByteUserId = { "InAccelByteUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventMulticast_SetAccelByteUserId_Parms, InAccelByteUserId), METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetAccelByteUserId_Statics::NewProp_InAccelByteUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetAccelByteUserId_Statics::NewProp_InAccelByteUserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_Multicast_SetAccelByteUserId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Multicast_SetAccelByteUserId_Statics::NewProp_InAccelByteUserId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Multicast_SetAccelByteUserId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Multicast_SetAccelByteUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Multicast_SetAccelByteUserId", nullptr, nullptr, sizeof(SBZPlayerState_eventMulticast_SetAccelByteUserId_Parms), Z_Construct_UFunction_ASBZPlayerState_Multicast_SetAccelByteUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetAccelByteUserId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetAccelByteUserId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetAccelByteUserId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Multicast_SetAccelByteUserId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Multicast_SetAccelByteUserId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Multicast_SetAccelByteUserName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAccelByteUserName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InAccelByteUserName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Multicast_SetAccelByteUserName_Statics::NewProp_InAccelByteUserName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZPlayerState_Multicast_SetAccelByteUserName_Statics::NewProp_InAccelByteUserName = { "InAccelByteUserName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventMulticast_SetAccelByteUserName_Parms, InAccelByteUserName), METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetAccelByteUserName_Statics::NewProp_InAccelByteUserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetAccelByteUserName_Statics::NewProp_InAccelByteUserName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_Multicast_SetAccelByteUserName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Multicast_SetAccelByteUserName_Statics::NewProp_InAccelByteUserName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Multicast_SetAccelByteUserName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Multicast_SetAccelByteUserName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Multicast_SetAccelByteUserName", nullptr, nullptr, sizeof(SBZPlayerState_eventMulticast_SetAccelByteUserName_Parms), Z_Construct_UFunction_ASBZPlayerState_Multicast_SetAccelByteUserName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetAccelByteUserName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetAccelByteUserName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetAccelByteUserName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Multicast_SetAccelByteUserName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Multicast_SetAccelByteUserName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Multicast_SetCustodyCharacterClass_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InCharacterClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZPlayerState_Multicast_SetCustodyCharacterClass_Statics::NewProp_InCharacterClass = { "InCharacterClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventMulticast_SetCustodyCharacterClass_Parms, InCharacterClass), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_Multicast_SetCustodyCharacterClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Multicast_SetCustodyCharacterClass_Statics::NewProp_InCharacterClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Multicast_SetCustodyCharacterClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Multicast_SetCustodyCharacterClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Multicast_SetCustodyCharacterClass", nullptr, nullptr, sizeof(SBZPlayerState_eventMulticast_SetCustodyCharacterClass_Parms), Z_Construct_UFunction_ASBZPlayerState_Multicast_SetCustodyCharacterClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetCustodyCharacterClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04844CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetCustodyCharacterClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetCustodyCharacterClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Multicast_SetCustodyCharacterClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Multicast_SetCustodyCharacterClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Multicast_SetDefeatState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InDefeatState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InDefeatState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZPlayerState_Multicast_SetDefeatState_Statics::NewProp_InDefeatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZPlayerState_Multicast_SetDefeatState_Statics::NewProp_InDefeatState = { "InDefeatState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventMulticast_SetDefeatState_Parms, InDefeatState), Z_Construct_UEnum_Starbreeze_EPD3DefeatState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_Multicast_SetDefeatState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Multicast_SetDefeatState_Statics::NewProp_InDefeatState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Multicast_SetDefeatState_Statics::NewProp_InDefeatState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Multicast_SetDefeatState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Multicast_SetDefeatState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Multicast_SetDefeatState", nullptr, nullptr, sizeof(SBZPlayerState_eventMulticast_SetDefeatState_Parms), Z_Construct_UFunction_ASBZPlayerState_Multicast_SetDefeatState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetDefeatState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetDefeatState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetDefeatState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Multicast_SetDefeatState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Multicast_SetDefeatState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Multicast_SetEquipStateAndIndex_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InEquipStateAndIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZPlayerState_Multicast_SetEquipStateAndIndex_Statics::NewProp_InEquipStateAndIndex = { "InEquipStateAndIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventMulticast_SetEquipStateAndIndex_Parms, InEquipStateAndIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_Multicast_SetEquipStateAndIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Multicast_SetEquipStateAndIndex_Statics::NewProp_InEquipStateAndIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Multicast_SetEquipStateAndIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Multicast_SetEquipStateAndIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Multicast_SetEquipStateAndIndex", nullptr, nullptr, sizeof(SBZPlayerState_eventMulticast_SetEquipStateAndIndex_Parms), Z_Construct_UFunction_ASBZPlayerState_Multicast_SetEquipStateAndIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetEquipStateAndIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetEquipStateAndIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetEquipStateAndIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Multicast_SetEquipStateAndIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Multicast_SetEquipStateAndIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Multicast_SetLastArrestedByGuard_Statics
	{
		static void NewProp_bInIsLastArrestedByGuard_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLastArrestedByGuard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZPlayerState_Multicast_SetLastArrestedByGuard_Statics::NewProp_bInIsLastArrestedByGuard_SetBit(void* Obj)
	{
		((SBZPlayerState_eventMulticast_SetLastArrestedByGuard_Parms*)Obj)->bInIsLastArrestedByGuard = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlayerState_Multicast_SetLastArrestedByGuard_Statics::NewProp_bInIsLastArrestedByGuard = { "bInIsLastArrestedByGuard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerState_eventMulticast_SetLastArrestedByGuard_Parms), &Z_Construct_UFunction_ASBZPlayerState_Multicast_SetLastArrestedByGuard_Statics::NewProp_bInIsLastArrestedByGuard_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_Multicast_SetLastArrestedByGuard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Multicast_SetLastArrestedByGuard_Statics::NewProp_bInIsLastArrestedByGuard,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Multicast_SetLastArrestedByGuard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Multicast_SetLastArrestedByGuard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Multicast_SetLastArrestedByGuard", nullptr, nullptr, sizeof(SBZPlayerState_eventMulticast_SetLastArrestedByGuard_Parms), Z_Construct_UFunction_ASBZPlayerState_Multicast_SetLastArrestedByGuard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetLastArrestedByGuard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetLastArrestedByGuard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetLastArrestedByGuard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Multicast_SetLastArrestedByGuard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Multicast_SetLastArrestedByGuard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Multicast_SetLoadout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLoadout_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLoadout;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Multicast_SetLoadout_Statics::NewProp_InLoadout_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZPlayerState_Multicast_SetLoadout_Statics::NewProp_InLoadout = { "InLoadout", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventMulticast_SetLoadout_Parms, InLoadout), Z_Construct_UScriptStruct_FPD3PlayerLoadout, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetLoadout_Statics::NewProp_InLoadout_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetLoadout_Statics::NewProp_InLoadout_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_Multicast_SetLoadout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Multicast_SetLoadout_Statics::NewProp_InLoadout,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Multicast_SetLoadout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Multicast_SetLoadout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Multicast_SetLoadout", nullptr, nullptr, sizeof(SBZPlayerState_eventMulticast_SetLoadout_Parms), Z_Construct_UFunction_ASBZPlayerState_Multicast_SetLoadout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetLoadout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetLoadout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetLoadout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Multicast_SetLoadout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Multicast_SetLoadout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Multicast_SetMiniGameState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InMiniGameState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InMiniGameState;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InWinningParticipant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZPlayerState_Multicast_SetMiniGameState_Statics::NewProp_InMiniGameState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZPlayerState_Multicast_SetMiniGameState_Statics::NewProp_InMiniGameState = { "InMiniGameState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventMulticast_SetMiniGameState_Parms, InMiniGameState), Z_Construct_UEnum_Starbreeze_EPD3MiniGameState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPlayerState_Multicast_SetMiniGameState_Statics::NewProp_InWinningParticipant = { "InWinningParticipant", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventMulticast_SetMiniGameState_Parms, InWinningParticipant), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_Multicast_SetMiniGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Multicast_SetMiniGameState_Statics::NewProp_InMiniGameState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Multicast_SetMiniGameState_Statics::NewProp_InMiniGameState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Multicast_SetMiniGameState_Statics::NewProp_InWinningParticipant,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Multicast_SetMiniGameState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Multicast_SetMiniGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Multicast_SetMiniGameState", nullptr, nullptr, sizeof(SBZPlayerState_eventMulticast_SetMiniGameState_Parms), Z_Construct_UFunction_ASBZPlayerState_Multicast_SetMiniGameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetMiniGameState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetMiniGameState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetMiniGameState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Multicast_SetMiniGameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Multicast_SetMiniGameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Multicast_SetPlayerId_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InPlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZPlayerState_Multicast_SetPlayerId_Statics::NewProp_InPlayerId = { "InPlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventMulticast_SetPlayerId_Parms, InPlayerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_Multicast_SetPlayerId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Multicast_SetPlayerId_Statics::NewProp_InPlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Multicast_SetPlayerId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Multicast_SetPlayerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Multicast_SetPlayerId", nullptr, nullptr, sizeof(SBZPlayerState_eventMulticast_SetPlayerId_Parms), Z_Construct_UFunction_ASBZPlayerState_Multicast_SetPlayerId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetPlayerId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetPlayerId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetPlayerId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Multicast_SetPlayerId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Multicast_SetPlayerId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Multicast_SetPlayerSlotId_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewSlotId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZPlayerState_Multicast_SetPlayerSlotId_Statics::NewProp_NewSlotId = { "NewSlotId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventMulticast_SetPlayerSlotId_Parms, NewSlotId), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_Multicast_SetPlayerSlotId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Multicast_SetPlayerSlotId_Statics::NewProp_NewSlotId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Multicast_SetPlayerSlotId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Multicast_SetPlayerSlotId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Multicast_SetPlayerSlotId", nullptr, nullptr, sizeof(SBZPlayerState_eventMulticast_SetPlayerSlotId_Parms), Z_Construct_UFunction_ASBZPlayerState_Multicast_SetPlayerSlotId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetPlayerSlotId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetPlayerSlotId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetPlayerSlotId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Multicast_SetPlayerSlotId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Multicast_SetPlayerSlotId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Multicast_SetServerReloadState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InServerReloadState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InServerReloadState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Multicast_SetServerReloadState_Statics::NewProp_InServerReloadState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZPlayerState_Multicast_SetServerReloadState_Statics::NewProp_InServerReloadState = { "InServerReloadState", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventMulticast_SetServerReloadState_Parms, InServerReloadState), Z_Construct_UScriptStruct_FSBZReplicatedReloadState, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetServerReloadState_Statics::NewProp_InServerReloadState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetServerReloadState_Statics::NewProp_InServerReloadState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_Multicast_SetServerReloadState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Multicast_SetServerReloadState_Statics::NewProp_InServerReloadState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Multicast_SetServerReloadState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Multicast_SetServerReloadState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Multicast_SetServerReloadState", nullptr, nullptr, sizeof(SBZPlayerState_eventMulticast_SetServerReloadState_Parms), Z_Construct_UFunction_ASBZPlayerState_Multicast_SetServerReloadState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetServerReloadState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetServerReloadState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetServerReloadState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Multicast_SetServerReloadState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Multicast_SetServerReloadState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSkipIntroSequence_Statics
	{
		static void NewProp_bInIsSkipIntroSequence_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsSkipIntroSequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSkipIntroSequence_Statics::NewProp_bInIsSkipIntroSequence_SetBit(void* Obj)
	{
		((SBZPlayerState_eventMulticast_SetSkipIntroSequence_Parms*)Obj)->bInIsSkipIntroSequence = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSkipIntroSequence_Statics::NewProp_bInIsSkipIntroSequence = { "bInIsSkipIntroSequence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerState_eventMulticast_SetSkipIntroSequence_Parms), &Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSkipIntroSequence_Statics::NewProp_bInIsSkipIntroSequence_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSkipIntroSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSkipIntroSequence_Statics::NewProp_bInIsSkipIntroSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSkipIntroSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSkipIntroSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Multicast_SetSkipIntroSequence", nullptr, nullptr, sizeof(SBZPlayerState_eventMulticast_SetSkipIntroSequence_Parms), Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSkipIntroSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSkipIntroSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSkipIntroSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSkipIntroSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSkipIntroSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSkipIntroSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSpectateDurationModification_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSpectateDurationModification_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventMulticast_SetSpectateDurationModification_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSpectateDurationModification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSpectateDurationModification_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSpectateDurationModification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSpectateDurationModification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Multicast_SetSpectateDurationModification", nullptr, nullptr, sizeof(SBZPlayerState_eventMulticast_SetSpectateDurationModification_Parms), Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSpectateDurationModification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSpectateDurationModification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSpectateDurationModification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSpectateDurationModification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSpectateDurationModification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSpectateDurationModification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSpectateTime_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSpectateTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventMulticast_SetSpectateTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSpectateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSpectateTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSpectateTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSpectateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Multicast_SetSpectateTime", nullptr, nullptr, sizeof(SBZPlayerState_eventMulticast_SetSpectateTime_Parms), Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSpectateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSpectateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSpectateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSpectateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSpectateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSpectateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Multicast_StartDodgeReplenish_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InStartReplenishDodgeServerTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZPlayerState_Multicast_StartDodgeReplenish_Statics::NewProp_InStartReplenishDodgeServerTime = { "InStartReplenishDodgeServerTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventMulticast_StartDodgeReplenish_Parms, InStartReplenishDodgeServerTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_Multicast_StartDodgeReplenish_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Multicast_StartDodgeReplenish_Statics::NewProp_InStartReplenishDodgeServerTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Multicast_StartDodgeReplenish_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Multicast_StartDodgeReplenish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Multicast_StartDodgeReplenish", nullptr, nullptr, sizeof(SBZPlayerState_eventMulticast_StartDodgeReplenish_Parms), Z_Construct_UFunction_ASBZPlayerState_Multicast_StartDodgeReplenish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_StartDodgeReplenish_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Multicast_StartDodgeReplenish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_StartDodgeReplenish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Multicast_StartDodgeReplenish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Multicast_StartDodgeReplenish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Multicast_StartTargeting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Multicast_StartTargeting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Multicast_StartTargeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Multicast_StartTargeting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Multicast_StartTargeting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_StartTargeting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Multicast_StartTargeting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Multicast_StartTargeting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Multicast_StopTargeting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Multicast_StopTargeting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Multicast_StopTargeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Multicast_StopTargeting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Multicast_StopTargeting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Multicast_StopTargeting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Multicast_StopTargeting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Multicast_StopTargeting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_OnECMCountChanged_Statics
	{
		struct SBZPlayerState_eventOnECMCountChanged_Parms
		{
			int32 NewCount;
			int32 OldCount;
			float AddedTime;
			bool bInIsSignalScanActive;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OldCount;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AddedTime;
		static void NewProp_bInIsSignalScanActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsSignalScanActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZPlayerState_OnECMCountChanged_Statics::NewProp_NewCount = { "NewCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventOnECMCountChanged_Parms, NewCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZPlayerState_OnECMCountChanged_Statics::NewProp_OldCount = { "OldCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventOnECMCountChanged_Parms, OldCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZPlayerState_OnECMCountChanged_Statics::NewProp_AddedTime = { "AddedTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventOnECMCountChanged_Parms, AddedTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZPlayerState_OnECMCountChanged_Statics::NewProp_bInIsSignalScanActive_SetBit(void* Obj)
	{
		((SBZPlayerState_eventOnECMCountChanged_Parms*)Obj)->bInIsSignalScanActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlayerState_OnECMCountChanged_Statics::NewProp_bInIsSignalScanActive = { "bInIsSignalScanActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerState_eventOnECMCountChanged_Parms), &Z_Construct_UFunction_ASBZPlayerState_OnECMCountChanged_Statics::NewProp_bInIsSignalScanActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_OnECMCountChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_OnECMCountChanged_Statics::NewProp_NewCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_OnECMCountChanged_Statics::NewProp_OldCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_OnECMCountChanged_Statics::NewProp_AddedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_OnECMCountChanged_Statics::NewProp_bInIsSignalScanActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_OnECMCountChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_OnECMCountChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "OnECMCountChanged", nullptr, nullptr, sizeof(SBZPlayerState_eventOnECMCountChanged_Parms), Z_Construct_UFunction_ASBZPlayerState_OnECMCountChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnECMCountChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_OnECMCountChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnECMCountChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_OnECMCountChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_OnECMCountChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_OnIsSkipIntroSequenceChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_OnIsSkipIntroSequenceChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_OnIsSkipIntroSequenceChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "OnIsSkipIntroSequenceChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_OnIsSkipIntroSequenceChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnIsSkipIntroSequenceChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_OnIsSkipIntroSequenceChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_OnIsSkipIntroSequenceChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_OnRep_AccelByteDisplayName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_OnRep_AccelByteDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_OnRep_AccelByteDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "OnRep_AccelByteDisplayName", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_OnRep_AccelByteDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRep_AccelByteDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_OnRep_AccelByteDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_OnRep_AccelByteDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_OnRep_AccelByteUserId_Statics
	{
		struct SBZPlayerState_eventOnRep_AccelByteUserId_Parms
		{
			FString OldAccelByteUserId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldAccelByteUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OldAccelByteUserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_OnRep_AccelByteUserId_Statics::NewProp_OldAccelByteUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZPlayerState_OnRep_AccelByteUserId_Statics::NewProp_OldAccelByteUserId = { "OldAccelByteUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventOnRep_AccelByteUserId_Parms, OldAccelByteUserId), METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_OnRep_AccelByteUserId_Statics::NewProp_OldAccelByteUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRep_AccelByteUserId_Statics::NewProp_OldAccelByteUserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_OnRep_AccelByteUserId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_OnRep_AccelByteUserId_Statics::NewProp_OldAccelByteUserId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_OnRep_AccelByteUserId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_OnRep_AccelByteUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "OnRep_AccelByteUserId", nullptr, nullptr, sizeof(SBZPlayerState_eventOnRep_AccelByteUserId_Parms), Z_Construct_UFunction_ASBZPlayerState_OnRep_AccelByteUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRep_AccelByteUserId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_OnRep_AccelByteUserId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRep_AccelByteUserId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_OnRep_AccelByteUserId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_OnRep_AccelByteUserId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_OnRep_AccelByteUserName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_OnRep_AccelByteUserName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_OnRep_AccelByteUserName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "OnRep_AccelByteUserName", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_OnRep_AccelByteUserName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRep_AccelByteUserName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_OnRep_AccelByteUserName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_OnRep_AccelByteUserName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_OnRep_CustodyCharacterClass_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_OnRep_CustodyCharacterClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_OnRep_CustodyCharacterClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "OnRep_CustodyCharacterClass", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_OnRep_CustodyCharacterClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRep_CustodyCharacterClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_OnRep_CustodyCharacterClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_OnRep_CustodyCharacterClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_OnRep_CustodyReleaseCost_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_OnRep_CustodyReleaseCost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_OnRep_CustodyReleaseCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "OnRep_CustodyReleaseCost", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_OnRep_CustodyReleaseCost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRep_CustodyReleaseCost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_OnRep_CustodyReleaseCost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_OnRep_CustodyReleaseCost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_OnRep_DefeatState_Statics
	{
		struct SBZPlayerState_eventOnRep_DefeatState_Parms
		{
			EPD3DefeatState OldDefeatState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldDefeatState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldDefeatState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZPlayerState_OnRep_DefeatState_Statics::NewProp_OldDefeatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZPlayerState_OnRep_DefeatState_Statics::NewProp_OldDefeatState = { "OldDefeatState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventOnRep_DefeatState_Parms, OldDefeatState), Z_Construct_UEnum_Starbreeze_EPD3DefeatState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_OnRep_DefeatState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_OnRep_DefeatState_Statics::NewProp_OldDefeatState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_OnRep_DefeatState_Statics::NewProp_OldDefeatState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_OnRep_DefeatState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_OnRep_DefeatState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "OnRep_DefeatState", nullptr, nullptr, sizeof(SBZPlayerState_eventOnRep_DefeatState_Parms), Z_Construct_UFunction_ASBZPlayerState_OnRep_DefeatState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRep_DefeatState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_OnRep_DefeatState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRep_DefeatState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_OnRep_DefeatState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_OnRep_DefeatState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_OnRep_EquipStateAndIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_OnRep_EquipStateAndIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_OnRep_EquipStateAndIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "OnRep_EquipStateAndIndex", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_OnRep_EquipStateAndIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRep_EquipStateAndIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_OnRep_EquipStateAndIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_OnRep_EquipStateAndIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_OnRep_FirstPartyPlatform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_OnRep_FirstPartyPlatform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_OnRep_FirstPartyPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "OnRep_FirstPartyPlatform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_OnRep_FirstPartyPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRep_FirstPartyPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_OnRep_FirstPartyPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_OnRep_FirstPartyPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_OnRep_InfamyLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_OnRep_InfamyLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_OnRep_InfamyLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "OnRep_InfamyLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_OnRep_InfamyLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRep_InfamyLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_OnRep_InfamyLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_OnRep_InfamyLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_OnRep_IsMaskOn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_OnRep_IsMaskOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_OnRep_IsMaskOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "OnRep_IsMaskOn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_OnRep_IsMaskOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRep_IsMaskOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_OnRep_IsMaskOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_OnRep_IsMaskOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_OnRep_IsTargeting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_OnRep_IsTargeting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_OnRep_IsTargeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "OnRep_IsTargeting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_OnRep_IsTargeting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRep_IsTargeting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_OnRep_IsTargeting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_OnRep_IsTargeting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_OnRep_Loadout_Statics
	{
		struct SBZPlayerState_eventOnRep_Loadout_Parms
		{
			FPD3PlayerLoadout InOldLoadout;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InOldLoadout_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InOldLoadout;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_OnRep_Loadout_Statics::NewProp_InOldLoadout_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZPlayerState_OnRep_Loadout_Statics::NewProp_InOldLoadout = { "InOldLoadout", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventOnRep_Loadout_Parms, InOldLoadout), Z_Construct_UScriptStruct_FPD3PlayerLoadout, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_OnRep_Loadout_Statics::NewProp_InOldLoadout_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRep_Loadout_Statics::NewProp_InOldLoadout_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_OnRep_Loadout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_OnRep_Loadout_Statics::NewProp_InOldLoadout,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_OnRep_Loadout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_OnRep_Loadout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "OnRep_Loadout", nullptr, nullptr, sizeof(SBZPlayerState_eventOnRep_Loadout_Parms), Z_Construct_UFunction_ASBZPlayerState_OnRep_Loadout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRep_Loadout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_OnRep_Loadout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRep_Loadout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_OnRep_Loadout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_OnRep_Loadout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_OnRep_MergePartySelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_OnRep_MergePartySelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_OnRep_MergePartySelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "OnRep_MergePartySelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_OnRep_MergePartySelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRep_MergePartySelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_OnRep_MergePartySelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_OnRep_MergePartySelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_OnRep_MiniGameState_Statics
	{
		struct SBZPlayerState_eventOnRep_MiniGameState_Parms
		{
			EPD3MiniGameState OldMiniGameState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldMiniGameState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldMiniGameState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZPlayerState_OnRep_MiniGameState_Statics::NewProp_OldMiniGameState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZPlayerState_OnRep_MiniGameState_Statics::NewProp_OldMiniGameState = { "OldMiniGameState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventOnRep_MiniGameState_Parms, OldMiniGameState), Z_Construct_UEnum_Starbreeze_EPD3MiniGameState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_OnRep_MiniGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_OnRep_MiniGameState_Statics::NewProp_OldMiniGameState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_OnRep_MiniGameState_Statics::NewProp_OldMiniGameState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_OnRep_MiniGameState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_OnRep_MiniGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "OnRep_MiniGameState", nullptr, nullptr, sizeof(SBZPlayerState_eventOnRep_MiniGameState_Parms), Z_Construct_UFunction_ASBZPlayerState_OnRep_MiniGameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRep_MiniGameState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_OnRep_MiniGameState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRep_MiniGameState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_OnRep_MiniGameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_OnRep_MiniGameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_OnRep_OnKillNetID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_OnRep_OnKillNetID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_OnRep_OnKillNetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "OnRep_OnKillNetID", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_OnRep_OnKillNetID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRep_OnKillNetID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_OnRep_OnKillNetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_OnRep_OnKillNetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_OnRep_OverkillWeaponProgress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_OnRep_OverkillWeaponProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_OnRep_OverkillWeaponProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "OnRep_OverkillWeaponProgress", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_OnRep_OverkillWeaponProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRep_OverkillWeaponProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_OnRep_OverkillWeaponProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_OnRep_OverkillWeaponProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_OnRep_Platform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_OnRep_Platform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_OnRep_Platform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "OnRep_Platform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_OnRep_Platform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRep_Platform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_OnRep_Platform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_OnRep_Platform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_OnRep_ReadyStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_OnRep_ReadyStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_OnRep_ReadyStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "OnRep_ReadyStatus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_OnRep_ReadyStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRep_ReadyStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_OnRep_ReadyStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_OnRep_ReadyStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_OnRep_ReplicatedStartReplenishDodgeServerTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_OnRep_ReplicatedStartReplenishDodgeServerTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_OnRep_ReplicatedStartReplenishDodgeServerTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "OnRep_ReplicatedStartReplenishDodgeServerTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_OnRep_ReplicatedStartReplenishDodgeServerTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRep_ReplicatedStartReplenishDodgeServerTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_OnRep_ReplicatedStartReplenishDodgeServerTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_OnRep_ReplicatedStartReplenishDodgeServerTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_OnRep_ServerReloadState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_OnRep_ServerReloadState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_OnRep_ServerReloadState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "OnRep_ServerReloadState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_OnRep_ServerReloadState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRep_ServerReloadState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_OnRep_ServerReloadState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_OnRep_ServerReloadState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_OnRep_SpectateTime_Statics
	{
		struct SBZPlayerState_eventOnRep_SpectateTime_Parms
		{
			float OldSpectateTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OldSpectateTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZPlayerState_OnRep_SpectateTime_Statics::NewProp_OldSpectateTime = { "OldSpectateTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventOnRep_SpectateTime_Parms, OldSpectateTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_OnRep_SpectateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_OnRep_SpectateTime_Statics::NewProp_OldSpectateTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_OnRep_SpectateTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_OnRep_SpectateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "OnRep_SpectateTime", nullptr, nullptr, sizeof(SBZPlayerState_eventOnRep_SpectateTime_Parms), Z_Construct_UFunction_ASBZPlayerState_OnRep_SpectateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRep_SpectateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_OnRep_SpectateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRep_SpectateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_OnRep_SpectateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_OnRep_SpectateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_OnRuntimeActorDestroyed_Statics
	{
		struct SBZPlayerState_eventOnRuntimeActorDestroyed_Parms
		{
			AActor* InRuntimeActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InRuntimeActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPlayerState_OnRuntimeActorDestroyed_Statics::NewProp_InRuntimeActor = { "InRuntimeActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventOnRuntimeActorDestroyed_Parms, InRuntimeActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_OnRuntimeActorDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_OnRuntimeActorDestroyed_Statics::NewProp_InRuntimeActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_OnRuntimeActorDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_OnRuntimeActorDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "OnRuntimeActorDestroyed", nullptr, nullptr, sizeof(SBZPlayerState_eventOnRuntimeActorDestroyed_Parms), Z_Construct_UFunction_ASBZPlayerState_OnRuntimeActorDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRuntimeActorDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_OnRuntimeActorDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRuntimeActorDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_OnRuntimeActorDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_OnRuntimeActorDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_OnRuntimeActorEndPlay_Statics
	{
		struct SBZPlayerState_eventOnRuntimeActorEndPlay_Parms
		{
			AActor* RuntimeActor;
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RuntimeActor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPlayerState_OnRuntimeActorEndPlay_Statics::NewProp_RuntimeActor = { "RuntimeActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventOnRuntimeActorEndPlay_Parms, RuntimeActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZPlayerState_OnRuntimeActorEndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventOnRuntimeActorEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_OnRuntimeActorEndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_OnRuntimeActorEndPlay_Statics::NewProp_RuntimeActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_OnRuntimeActorEndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_OnRuntimeActorEndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_OnRuntimeActorEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "OnRuntimeActorEndPlay", nullptr, nullptr, sizeof(SBZPlayerState_eventOnRuntimeActorEndPlay_Parms), Z_Construct_UFunction_ASBZPlayerState_OnRuntimeActorEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRuntimeActorEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_OnRuntimeActorEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRuntimeActorEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_OnRuntimeActorEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_OnRuntimeActorEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_OnRuntimeRoutedPingExpired_Statics
	{
		struct SBZPlayerState_eventOnRuntimeRoutedPingExpired_Parms
		{
			AActor* InRuntimeActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InRuntimeActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPlayerState_OnRuntimeRoutedPingExpired_Statics::NewProp_InRuntimeActor = { "InRuntimeActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventOnRuntimeRoutedPingExpired_Parms, InRuntimeActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_OnRuntimeRoutedPingExpired_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_OnRuntimeRoutedPingExpired_Statics::NewProp_InRuntimeActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_OnRuntimeRoutedPingExpired_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_OnRuntimeRoutedPingExpired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "OnRuntimeRoutedPingExpired", nullptr, nullptr, sizeof(SBZPlayerState_eventOnRuntimeRoutedPingExpired_Parms), Z_Construct_UFunction_ASBZPlayerState_OnRuntimeRoutedPingExpired_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRuntimeRoutedPingExpired_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_OnRuntimeRoutedPingExpired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRuntimeRoutedPingExpired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_OnRuntimeRoutedPingExpired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_OnRuntimeRoutedPingExpired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_OnRuntimeScramblerExpired_Statics
	{
		struct SBZPlayerState_eventOnRuntimeScramblerExpired_Parms
		{
			AActor* InRuntimeActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InRuntimeActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPlayerState_OnRuntimeScramblerExpired_Statics::NewProp_InRuntimeActor = { "InRuntimeActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventOnRuntimeScramblerExpired_Parms, InRuntimeActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_OnRuntimeScramblerExpired_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_OnRuntimeScramblerExpired_Statics::NewProp_InRuntimeActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_OnRuntimeScramblerExpired_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_OnRuntimeScramblerExpired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "OnRuntimeScramblerExpired", nullptr, nullptr, sizeof(SBZPlayerState_eventOnRuntimeScramblerExpired_Parms), Z_Construct_UFunction_ASBZPlayerState_OnRuntimeScramblerExpired_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRuntimeScramblerExpired_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_OnRuntimeScramblerExpired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRuntimeScramblerExpired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_OnRuntimeScramblerExpired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_OnRuntimeScramblerExpired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_OnRuntimeSecureLoopExpired_Statics
	{
		struct SBZPlayerState_eventOnRuntimeSecureLoopExpired_Parms
		{
			AActor* InRuntimeActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InRuntimeActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZPlayerState_OnRuntimeSecureLoopExpired_Statics::NewProp_InRuntimeActor = { "InRuntimeActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventOnRuntimeSecureLoopExpired_Parms, InRuntimeActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_OnRuntimeSecureLoopExpired_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_OnRuntimeSecureLoopExpired_Statics::NewProp_InRuntimeActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_OnRuntimeSecureLoopExpired_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_OnRuntimeSecureLoopExpired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "OnRuntimeSecureLoopExpired", nullptr, nullptr, sizeof(SBZPlayerState_eventOnRuntimeSecureLoopExpired_Parms), Z_Construct_UFunction_ASBZPlayerState_OnRuntimeSecureLoopExpired_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRuntimeSecureLoopExpired_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_OnRuntimeSecureLoopExpired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnRuntimeSecureLoopExpired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_OnRuntimeSecureLoopExpired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_OnRuntimeSecureLoopExpired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_OnSpectateDurationModificationChanged_Statics
	{
		struct SBZPlayerState_eventOnSpectateDurationModificationChanged_Parms
		{
			float OldDuration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OldDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZPlayerState_OnSpectateDurationModificationChanged_Statics::NewProp_OldDuration = { "OldDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventOnSpectateDurationModificationChanged_Parms, OldDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_OnSpectateDurationModificationChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_OnSpectateDurationModificationChanged_Statics::NewProp_OldDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_OnSpectateDurationModificationChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_OnSpectateDurationModificationChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "OnSpectateDurationModificationChanged", nullptr, nullptr, sizeof(SBZPlayerState_eventOnSpectateDurationModificationChanged_Parms), Z_Construct_UFunction_ASBZPlayerState_OnSpectateDurationModificationChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnSpectateDurationModificationChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_OnSpectateDurationModificationChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_OnSpectateDurationModificationChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_OnSpectateDurationModificationChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_OnSpectateDurationModificationChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Server_CheatSetLoadout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLoadout_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLoadout;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Server_CheatSetLoadout_Statics::NewProp_InLoadout_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZPlayerState_Server_CheatSetLoadout_Statics::NewProp_InLoadout = { "InLoadout", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventServer_CheatSetLoadout_Parms, InLoadout), Z_Construct_UScriptStruct_FPD3PlayerLoadout, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Server_CheatSetLoadout_Statics::NewProp_InLoadout_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Server_CheatSetLoadout_Statics::NewProp_InLoadout_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_Server_CheatSetLoadout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Server_CheatSetLoadout_Statics::NewProp_InLoadout,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Server_CheatSetLoadout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Server_CheatSetLoadout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Server_CheatSetLoadout", nullptr, nullptr, sizeof(SBZPlayerState_eventServer_CheatSetLoadout_Parms), Z_Construct_UFunction_ASBZPlayerState_Server_CheatSetLoadout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Server_CheatSetLoadout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Server_CheatSetLoadout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Server_CheatSetLoadout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Server_CheatSetLoadout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Server_CheatSetLoadout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Server_DebugConsoleCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Command;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstigatorContextText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InstigatorContextText;
		static void NewProp_bIsLocallyControlledOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocallyControlledOnly;
		static void NewProp_bIsExecutedOnAll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsExecutedOnAll;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Server_DebugConsoleCommand_Statics::NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZPlayerState_Server_DebugConsoleCommand_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventServer_DebugConsoleCommand_Parms, Command), METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Server_DebugConsoleCommand_Statics::NewProp_Command_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Server_DebugConsoleCommand_Statics::NewProp_Command_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Server_DebugConsoleCommand_Statics::NewProp_InstigatorContextText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASBZPlayerState_Server_DebugConsoleCommand_Statics::NewProp_InstigatorContextText = { "InstigatorContextText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventServer_DebugConsoleCommand_Parms, InstigatorContextText), METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Server_DebugConsoleCommand_Statics::NewProp_InstigatorContextText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Server_DebugConsoleCommand_Statics::NewProp_InstigatorContextText_MetaData)) };
	void Z_Construct_UFunction_ASBZPlayerState_Server_DebugConsoleCommand_Statics::NewProp_bIsLocallyControlledOnly_SetBit(void* Obj)
	{
		((SBZPlayerState_eventServer_DebugConsoleCommand_Parms*)Obj)->bIsLocallyControlledOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlayerState_Server_DebugConsoleCommand_Statics::NewProp_bIsLocallyControlledOnly = { "bIsLocallyControlledOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerState_eventServer_DebugConsoleCommand_Parms), &Z_Construct_UFunction_ASBZPlayerState_Server_DebugConsoleCommand_Statics::NewProp_bIsLocallyControlledOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZPlayerState_Server_DebugConsoleCommand_Statics::NewProp_bIsExecutedOnAll_SetBit(void* Obj)
	{
		((SBZPlayerState_eventServer_DebugConsoleCommand_Parms*)Obj)->bIsExecutedOnAll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlayerState_Server_DebugConsoleCommand_Statics::NewProp_bIsExecutedOnAll = { "bIsExecutedOnAll", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerState_eventServer_DebugConsoleCommand_Parms), &Z_Construct_UFunction_ASBZPlayerState_Server_DebugConsoleCommand_Statics::NewProp_bIsExecutedOnAll_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZPlayerState_Server_DebugConsoleCommand_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventServer_DebugConsoleCommand_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_Server_DebugConsoleCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Server_DebugConsoleCommand_Statics::NewProp_Command,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Server_DebugConsoleCommand_Statics::NewProp_InstigatorContextText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Server_DebugConsoleCommand_Statics::NewProp_bIsLocallyControlledOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Server_DebugConsoleCommand_Statics::NewProp_bIsExecutedOnAll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Server_DebugConsoleCommand_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Server_DebugConsoleCommand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Server_DebugConsoleCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Server_DebugConsoleCommand", nullptr, nullptr, sizeof(SBZPlayerState_eventServer_DebugConsoleCommand_Parms), Z_Construct_UFunction_ASBZPlayerState_Server_DebugConsoleCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Server_DebugConsoleCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Server_DebugConsoleCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Server_DebugConsoleCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Server_DebugConsoleCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Server_DebugConsoleCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Server_PickupAmmo_Statics
	{
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ID;
		static void NewProp_bIsSimulatedPickup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSimulatedPickup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_ASBZPlayerState_Server_PickupAmmo_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventServer_PickupAmmo_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZPlayerState_Server_PickupAmmo_Statics::NewProp_bIsSimulatedPickup_SetBit(void* Obj)
	{
		((SBZPlayerState_eventServer_PickupAmmo_Parms*)Obj)->bIsSimulatedPickup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlayerState_Server_PickupAmmo_Statics::NewProp_bIsSimulatedPickup = { "bIsSimulatedPickup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerState_eventServer_PickupAmmo_Parms), &Z_Construct_UFunction_ASBZPlayerState_Server_PickupAmmo_Statics::NewProp_bIsSimulatedPickup_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_Server_PickupAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Server_PickupAmmo_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Server_PickupAmmo_Statics::NewProp_bIsSimulatedPickup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Server_PickupAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Server_PickupAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Server_PickupAmmo", nullptr, nullptr, sizeof(SBZPlayerState_eventServer_PickupAmmo_Parms), Z_Construct_UFunction_ASBZPlayerState_Server_PickupAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Server_PickupAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Server_PickupAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Server_PickupAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Server_PickupAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Server_PickupAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Server_SetDropPlaceableEquippableData_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Server_SetDropPlaceableEquippableData_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZPlayerState_Server_SetDropPlaceableEquippableData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventServer_SetDropPlaceableEquippableData_Parms, Data), Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Server_SetDropPlaceableEquippableData_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Server_SetDropPlaceableEquippableData_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_Server_SetDropPlaceableEquippableData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Server_SetDropPlaceableEquippableData_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Server_SetDropPlaceableEquippableData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Server_SetDropPlaceableEquippableData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Server_SetDropPlaceableEquippableData", nullptr, nullptr, sizeof(SBZPlayerState_eventServer_SetDropPlaceableEquippableData_Parms), Z_Construct_UFunction_ASBZPlayerState_Server_SetDropPlaceableEquippableData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Server_SetDropPlaceableEquippableData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Server_SetDropPlaceableEquippableData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Server_SetDropPlaceableEquippableData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Server_SetDropPlaceableEquippableData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Server_SetDropPlaceableEquippableData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Server_SetEquipStateAndIndex_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InEquipStateAndIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZPlayerState_Server_SetEquipStateAndIndex_Statics::NewProp_InEquipStateAndIndex = { "InEquipStateAndIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventServer_SetEquipStateAndIndex_Parms, InEquipStateAndIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_Server_SetEquipStateAndIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Server_SetEquipStateAndIndex_Statics::NewProp_InEquipStateAndIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Server_SetEquipStateAndIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Server_SetEquipStateAndIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Server_SetEquipStateAndIndex", nullptr, nullptr, sizeof(SBZPlayerState_eventServer_SetEquipStateAndIndex_Parms), Z_Construct_UFunction_ASBZPlayerState_Server_SetEquipStateAndIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Server_SetEquipStateAndIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Server_SetEquipStateAndIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Server_SetEquipStateAndIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Server_SetEquipStateAndIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Server_SetEquipStateAndIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Server_SetMiniGameState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InMiniGameState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InMiniGameState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZPlayerState_Server_SetMiniGameState_Statics::NewProp_InMiniGameState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZPlayerState_Server_SetMiniGameState_Statics::NewProp_InMiniGameState = { "InMiniGameState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerState_eventServer_SetMiniGameState_Parms, InMiniGameState), Z_Construct_UEnum_Starbreeze_EPD3MiniGameState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_Server_SetMiniGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Server_SetMiniGameState_Statics::NewProp_InMiniGameState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Server_SetMiniGameState_Statics::NewProp_InMiniGameState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Server_SetMiniGameState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Server_SetMiniGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Server_SetMiniGameState", nullptr, nullptr, sizeof(SBZPlayerState_eventServer_SetMiniGameState_Parms), Z_Construct_UFunction_ASBZPlayerState_Server_SetMiniGameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Server_SetMiniGameState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Server_SetMiniGameState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Server_SetMiniGameState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Server_SetMiniGameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Server_SetMiniGameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Server_SetSkipIntroSequence_Statics
	{
		static void NewProp_bInIsSkipIntroSequence_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsSkipIntroSequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZPlayerState_Server_SetSkipIntroSequence_Statics::NewProp_bInIsSkipIntroSequence_SetBit(void* Obj)
	{
		((SBZPlayerState_eventServer_SetSkipIntroSequence_Parms*)Obj)->bInIsSkipIntroSequence = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlayerState_Server_SetSkipIntroSequence_Statics::NewProp_bInIsSkipIntroSequence = { "bInIsSkipIntroSequence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerState_eventServer_SetSkipIntroSequence_Parms), &Z_Construct_UFunction_ASBZPlayerState_Server_SetSkipIntroSequence_Statics::NewProp_bInIsSkipIntroSequence_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_Server_SetSkipIntroSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_Server_SetSkipIntroSequence_Statics::NewProp_bInIsSkipIntroSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Server_SetSkipIntroSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Server_SetSkipIntroSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Server_SetSkipIntroSequence", nullptr, nullptr, sizeof(SBZPlayerState_eventServer_SetSkipIntroSequence_Parms), Z_Construct_UFunction_ASBZPlayerState_Server_SetSkipIntroSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Server_SetSkipIntroSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Server_SetSkipIntroSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Server_SetSkipIntroSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Server_SetSkipIntroSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Server_SetSkipIntroSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Server_StartTargeting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Server_StartTargeting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Server_StartTargeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Server_StartTargeting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Server_StartTargeting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Server_StartTargeting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Server_StartTargeting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Server_StartTargeting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Server_StopTargeting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Server_StopTargeting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Server_StopTargeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Server_StopTargeting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Server_StopTargeting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Server_StopTargeting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Server_StopTargeting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Server_StopTargeting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_Server_UpdateGameSession_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_Server_UpdateGameSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_Server_UpdateGameSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "Server_UpdateGameSession", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_Server_UpdateGameSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_Server_UpdateGameSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_Server_UpdateGameSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_Server_UpdateGameSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZPlayerState_SetSkipIntroSequence_Statics
	{
		struct SBZPlayerState_eventSetSkipIntroSequence_Parms
		{
			bool bInIsSkipIntroSequence;
		};
		static void NewProp_bInIsSkipIntroSequence_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsSkipIntroSequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZPlayerState_SetSkipIntroSequence_Statics::NewProp_bInIsSkipIntroSequence_SetBit(void* Obj)
	{
		((SBZPlayerState_eventSetSkipIntroSequence_Parms*)Obj)->bInIsSkipIntroSequence = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZPlayerState_SetSkipIntroSequence_Statics::NewProp_bInIsSkipIntroSequence = { "bInIsSkipIntroSequence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerState_eventSetSkipIntroSequence_Parms), &Z_Construct_UFunction_ASBZPlayerState_SetSkipIntroSequence_Statics::NewProp_bInIsSkipIntroSequence_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerState_SetSkipIntroSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerState_SetSkipIntroSequence_Statics::NewProp_bInIsSkipIntroSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerState_SetSkipIntroSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerState_SetSkipIntroSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerState, nullptr, "SetSkipIntroSequence", nullptr, nullptr, sizeof(SBZPlayerState_eventSetSkipIntroSequence_Parms), Z_Construct_UFunction_ASBZPlayerState_SetSkipIntroSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_SetSkipIntroSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerState_SetSkipIntroSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerState_SetSkipIntroSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerState_SetSkipIntroSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerState_SetSkipIntroSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZPlayerState_NoRegister()
	{
		return ASBZPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_ASBZPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReadyStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReadyStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReadyStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfamyLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InfamyLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Platform_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Platform;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FirstPartyPlatform_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPartyPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FirstPartyPlatform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelByteDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccelByteDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelByteUserName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccelByteUserName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelByteUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccelByteUserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelByteSessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccelByteSessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressionSaveGame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProgressionSaveGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressionSaveChallenges_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProgressionSaveChallenges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInfamyLevelChangedDynamic_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInfamyLevelChangedDynamic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSkipIntroSequence_MetaData[];
#endif
		static void NewProp_bIsSkipIntroSequence_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSkipIntroSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerRegion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerRegion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UICharacterEffects_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UICharacterEffects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerSlotId_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayerSlotId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerColors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerColors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeaponTags;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippablePings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippablePings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EquippablePings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillDataLookupMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkillDataLookupMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillDataLookupMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SkillDataLookupMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkillTagSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillTagSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_SkillTagSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedStartReplenishDodgeServerTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReplicatedStartReplenishDodgeServerTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartReplenishDodgeServerTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartReplenishDodgeServerTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartReplenishDodgeValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartReplenishDodgeValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMaskOn_MetaData[];
#endif
		static void NewProp_bIsMaskOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMaskOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Loadout_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Loadout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldLoadout_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldLoadout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLocallyControlled_MetaData[];
#endif
		static void NewProp_bIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocallyControlled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipStateAndIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EquipStateAndIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerReloadState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ServerReloadState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CharacterClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustodyCharacterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustodyCharacterClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsValidLoadout_MetaData[];
#endif
		static void NewProp_bIsValidLoadout_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsValidLoadout;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefeatState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefeatState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefeatState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnKillNetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_OnKillNetID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MiniGameState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiniGameState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MiniGameState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsNetInitialized_MetaData[];
#endif
		static void NewProp_bIsNetInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsNetInitialized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAttributeSetInitialized_MetaData[];
#endif
		static void NewProp_bIsAttributeSetInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAttributeSetInitialized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAttributeSetInitializedOnce_MetaData[];
#endif
		static void NewProp_bIsAttributeSetInitializedOnce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAttributeSetInitializedOnce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPendingReconnectData_MetaData[];
#endif
		static void NewProp_bIsPendingReconnectData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPendingReconnectData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AmmoPickupLookupMap_ValueProp;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_AmmoPickupLookupMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoPickupLookupMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AmmoPickupLookupMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLoadoutLoaded_MetaData[];
#endif
		static void NewProp_bIsLoadoutLoaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLoadoutLoaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsApplyingLoadout_MetaData[];
#endif
		static void NewProp_bIsApplyingLoadout_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsApplyingLoadout;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastLoadedAssetRefArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastLoadedAssetRefArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LastLoadedAssetRefArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCharacterData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentCharacterData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlaceableToolsArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaceableToolsArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlaceableToolsArray;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TagCounterMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagCounterMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagCounterMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TagCounterMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacterArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacterArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerCharacterArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AppliedLoadoutEffectArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppliedLoadoutEffectArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AppliedLoadoutEffectArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AppliedCrewSkillEffectMap_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AppliedCrewSkillEffectMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppliedCrewSkillEffectMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AppliedCrewSkillEffectMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerMicroCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerMicroCamera;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerGrenadeProjectileArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerGrenadeProjectileArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ServerGrenadeProjectileArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSaveLoadoutPending_MetaData[];
#endif
		static void NewProp_bIsSaveLoadoutPending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSaveLoadoutPending;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectateDurationArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpectateDurationArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReconnectDefeatedCustodyDurationReductionArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReconnectDefeatedCustodyDurationReductionArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumSpectateDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumSpectateDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpectateTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReducedCustodyTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReducedCustodyTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectateDurationModification_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpectateDurationModification;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ECMGUIEffectData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ECMGUIEffectData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillTankDisengageActivatedTimeSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SkillTankDisengageActivatedTimeSeconds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RuntimeActorArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimeActorArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RuntimeActorArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurrenderedEnemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SurrenderedEnemy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnforcerSkillKillCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EnforcerSkillKillCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnforcerSkillLastKillTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnforcerSkillLastKillTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnforcerAcedSkillKillCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EnforcerAcedSkillKillCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectedCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverkillWeaponProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverkillWeaponProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverkillWeaponProgressKillIncrease_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverkillWeaponProgressKillIncrease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverkillWeaponProgressHeadshotAdditionalIncrease_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverkillWeaponProgressHeadshotAdditionalIncrease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverkillWeaponProgressObjectiveIncrease_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverkillWeaponProgressObjectiveIncrease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverkillWeaponProgressSubObjectiveIncrease_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverkillWeaponProgressSubObjectiveIncrease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLastArrestedByGuard_MetaData[];
#endif
		static void NewProp_bIsLastArrestedByGuard_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLastArrestedByGuard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTargeting_MetaData[];
#endif
		static void NewProp_bIsTargeting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTargeting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustodyCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CustodyCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustodyReleaseCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CustodyReleaseCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTradeReduction_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentTradeReduction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bServerIsHardBargainCustody_MetaData[];
#endif
		static void NewProp_bServerIsHardBargainCustody_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bServerIsHardBargainCustody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMergePartySelected_MetaData[];
#endif
		static void NewProp_bIsMergePartySelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMergePartySelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZPlayerState_Client_ChallengeCompleted, "Client_ChallengeCompleted" }, // 991265426
		{ &Z_Construct_UFunction_ASBZPlayerState_Client_CheatSetInfiniteAmmo, "Client_CheatSetInfiniteAmmo" }, // 2527425229
		{ &Z_Construct_UFunction_ASBZPlayerState_Client_OnSaveLoadoutPending, "Client_OnSaveLoadoutPending" }, // 2151355327
		{ &Z_Construct_UFunction_ASBZPlayerState_Client_PickupAmmo, "Client_PickupAmmo" }, // 1204255819
		{ &Z_Construct_UFunction_ASBZPlayerState_Client_SendOverkillWeaponProgress, "Client_SendOverkillWeaponProgress" }, // 1547170926
		{ &Z_Construct_UFunction_ASBZPlayerState_Client_SendPlayerReloadProgressionSaveGame, "Client_SendPlayerReloadProgressionSaveGame" }, // 4138611995
		{ &Z_Construct_UFunction_ASBZPlayerState_Client_SetCustodyReleaseCost, "Client_SetCustodyReleaseCost" }, // 4087919991
		{ &Z_Construct_UFunction_ASBZPlayerState_Client_SetReducedCustodyTime, "Client_SetReducedCustodyTime" }, // 3004313955
		{ &Z_Construct_UFunction_ASBZPlayerState_Client_SetSurrenderedEnemy, "Client_SetSurrenderedEnemy" }, // 3646704269
		{ &Z_Construct_UFunction_ASBZPlayerState_EquipCuttingToolToLoadout, "EquipCuttingToolToLoadout" }, // 874917812
		{ &Z_Construct_UFunction_ASBZPlayerState_EquipEquippableToLoadoutAt, "EquipEquippableToLoadoutAt" }, // 3211872031
		{ &Z_Construct_UFunction_ASBZPlayerState_EquipMaskToLoadout, "EquipMaskToLoadout" }, // 4021610160
		{ &Z_Construct_UFunction_ASBZPlayerState_EquipPlaceableToLoadout, "EquipPlaceableToLoadout" }, // 377856531
		{ &Z_Construct_UFunction_ASBZPlayerState_EquipThrowableToLoadout, "EquipThrowableToLoadout" }, // 2271298417
		{ &Z_Construct_UFunction_ASBZPlayerState_EquipToolToLoadout, "EquipToolToLoadout" }, // 990333199
		{ &Z_Construct_UFunction_ASBZPlayerState_GetAccelBytePlayerName, "GetAccelBytePlayerName" }, // 2226243721
		{ &Z_Construct_UFunction_ASBZPlayerState_GetCharacterIcon, "GetCharacterIcon" }, // 1721699507
		{ &Z_Construct_UFunction_ASBZPlayerState_GetInfamyLevel, "GetInfamyLevel" }, // 2367407110
		{ &Z_Construct_UFunction_ASBZPlayerState_GetMergePartySelected, "GetMergePartySelected" }, // 3300049003
		{ &Z_Construct_UFunction_ASBZPlayerState_GetPlatform, "GetPlatform" }, // 2870348422
		{ &Z_Construct_UFunction_ASBZPlayerState_GetPlayerDisplayName, "GetPlayerDisplayName" }, // 490480658
		{ &Z_Construct_UFunction_ASBZPlayerState_IsPlayerDisplayNameReady, "IsPlayerDisplayNameReady" }, // 3917395366
		{ &Z_Construct_UFunction_ASBZPlayerState_IsSkipIntroSequence, "IsSkipIntroSequence" }, // 2087972784
		{ &Z_Construct_UFunction_ASBZPlayerState_Multicast_DebugConsoleCommand, "Multicast_DebugConsoleCommand" }, // 660646037
		{ &Z_Construct_UFunction_ASBZPlayerState_Multicast_OnKill, "Multicast_OnKill" }, // 3176915560
		{ &Z_Construct_UFunction_ASBZPlayerState_Multicast_RejectEquipStateAndIndex, "Multicast_RejectEquipStateAndIndex" }, // 2520076402
		{ &Z_Construct_UFunction_ASBZPlayerState_Multicast_SetAccelByteUserId, "Multicast_SetAccelByteUserId" }, // 1361431874
		{ &Z_Construct_UFunction_ASBZPlayerState_Multicast_SetAccelByteUserName, "Multicast_SetAccelByteUserName" }, // 3415819844
		{ &Z_Construct_UFunction_ASBZPlayerState_Multicast_SetCustodyCharacterClass, "Multicast_SetCustodyCharacterClass" }, // 170046103
		{ &Z_Construct_UFunction_ASBZPlayerState_Multicast_SetDefeatState, "Multicast_SetDefeatState" }, // 2325964364
		{ &Z_Construct_UFunction_ASBZPlayerState_Multicast_SetEquipStateAndIndex, "Multicast_SetEquipStateAndIndex" }, // 387251408
		{ &Z_Construct_UFunction_ASBZPlayerState_Multicast_SetLastArrestedByGuard, "Multicast_SetLastArrestedByGuard" }, // 3035291721
		{ &Z_Construct_UFunction_ASBZPlayerState_Multicast_SetLoadout, "Multicast_SetLoadout" }, // 3329960757
		{ &Z_Construct_UFunction_ASBZPlayerState_Multicast_SetMiniGameState, "Multicast_SetMiniGameState" }, // 2234149801
		{ &Z_Construct_UFunction_ASBZPlayerState_Multicast_SetPlayerId, "Multicast_SetPlayerId" }, // 3456244660
		{ &Z_Construct_UFunction_ASBZPlayerState_Multicast_SetPlayerSlotId, "Multicast_SetPlayerSlotId" }, // 628032788
		{ &Z_Construct_UFunction_ASBZPlayerState_Multicast_SetServerReloadState, "Multicast_SetServerReloadState" }, // 3717515461
		{ &Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSkipIntroSequence, "Multicast_SetSkipIntroSequence" }, // 1005920999
		{ &Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSpectateDurationModification, "Multicast_SetSpectateDurationModification" }, // 249818485
		{ &Z_Construct_UFunction_ASBZPlayerState_Multicast_SetSpectateTime, "Multicast_SetSpectateTime" }, // 2922084160
		{ &Z_Construct_UFunction_ASBZPlayerState_Multicast_StartDodgeReplenish, "Multicast_StartDodgeReplenish" }, // 3561294461
		{ &Z_Construct_UFunction_ASBZPlayerState_Multicast_StartTargeting, "Multicast_StartTargeting" }, // 2835222615
		{ &Z_Construct_UFunction_ASBZPlayerState_Multicast_StopTargeting, "Multicast_StopTargeting" }, // 381598199
		{ &Z_Construct_UFunction_ASBZPlayerState_OnECMCountChanged, "OnECMCountChanged" }, // 2507465361
		{ &Z_Construct_UFunction_ASBZPlayerState_OnIsSkipIntroSequenceChanged, "OnIsSkipIntroSequenceChanged" }, // 3865774847
		{ &Z_Construct_UFunction_ASBZPlayerState_OnRep_AccelByteDisplayName, "OnRep_AccelByteDisplayName" }, // 3010250040
		{ &Z_Construct_UFunction_ASBZPlayerState_OnRep_AccelByteUserId, "OnRep_AccelByteUserId" }, // 3258179630
		{ &Z_Construct_UFunction_ASBZPlayerState_OnRep_AccelByteUserName, "OnRep_AccelByteUserName" }, // 1928827016
		{ &Z_Construct_UFunction_ASBZPlayerState_OnRep_CustodyCharacterClass, "OnRep_CustodyCharacterClass" }, // 232687004
		{ &Z_Construct_UFunction_ASBZPlayerState_OnRep_CustodyReleaseCost, "OnRep_CustodyReleaseCost" }, // 3991848294
		{ &Z_Construct_UFunction_ASBZPlayerState_OnRep_DefeatState, "OnRep_DefeatState" }, // 4101171170
		{ &Z_Construct_UFunction_ASBZPlayerState_OnRep_EquipStateAndIndex, "OnRep_EquipStateAndIndex" }, // 2474172975
		{ &Z_Construct_UFunction_ASBZPlayerState_OnRep_FirstPartyPlatform, "OnRep_FirstPartyPlatform" }, // 2489154216
		{ &Z_Construct_UFunction_ASBZPlayerState_OnRep_InfamyLevel, "OnRep_InfamyLevel" }, // 1409866999
		{ &Z_Construct_UFunction_ASBZPlayerState_OnRep_IsMaskOn, "OnRep_IsMaskOn" }, // 3118749394
		{ &Z_Construct_UFunction_ASBZPlayerState_OnRep_IsTargeting, "OnRep_IsTargeting" }, // 1958578305
		{ &Z_Construct_UFunction_ASBZPlayerState_OnRep_Loadout, "OnRep_Loadout" }, // 2031640827
		{ &Z_Construct_UFunction_ASBZPlayerState_OnRep_MergePartySelected, "OnRep_MergePartySelected" }, // 2591421716
		{ &Z_Construct_UFunction_ASBZPlayerState_OnRep_MiniGameState, "OnRep_MiniGameState" }, // 3845536441
		{ &Z_Construct_UFunction_ASBZPlayerState_OnRep_OnKillNetID, "OnRep_OnKillNetID" }, // 1174512033
		{ &Z_Construct_UFunction_ASBZPlayerState_OnRep_OverkillWeaponProgress, "OnRep_OverkillWeaponProgress" }, // 2534182185
		{ &Z_Construct_UFunction_ASBZPlayerState_OnRep_Platform, "OnRep_Platform" }, // 2188292123
		{ &Z_Construct_UFunction_ASBZPlayerState_OnRep_ReadyStatus, "OnRep_ReadyStatus" }, // 336173429
		{ &Z_Construct_UFunction_ASBZPlayerState_OnRep_ReplicatedStartReplenishDodgeServerTime, "OnRep_ReplicatedStartReplenishDodgeServerTime" }, // 1198559619
		{ &Z_Construct_UFunction_ASBZPlayerState_OnRep_ServerReloadState, "OnRep_ServerReloadState" }, // 3371661843
		{ &Z_Construct_UFunction_ASBZPlayerState_OnRep_SpectateTime, "OnRep_SpectateTime" }, // 1232337038
		{ &Z_Construct_UFunction_ASBZPlayerState_OnRuntimeActorDestroyed, "OnRuntimeActorDestroyed" }, // 689301073
		{ &Z_Construct_UFunction_ASBZPlayerState_OnRuntimeActorEndPlay, "OnRuntimeActorEndPlay" }, // 2540027710
		{ &Z_Construct_UFunction_ASBZPlayerState_OnRuntimeRoutedPingExpired, "OnRuntimeRoutedPingExpired" }, // 1860903577
		{ &Z_Construct_UFunction_ASBZPlayerState_OnRuntimeScramblerExpired, "OnRuntimeScramblerExpired" }, // 1429028354
		{ &Z_Construct_UFunction_ASBZPlayerState_OnRuntimeSecureLoopExpired, "OnRuntimeSecureLoopExpired" }, // 3949752403
		{ &Z_Construct_UFunction_ASBZPlayerState_OnSpectateDurationModificationChanged, "OnSpectateDurationModificationChanged" }, // 2835590052
		{ &Z_Construct_UFunction_ASBZPlayerState_Server_CheatSetLoadout, "Server_CheatSetLoadout" }, // 2273206531
		{ &Z_Construct_UFunction_ASBZPlayerState_Server_DebugConsoleCommand, "Server_DebugConsoleCommand" }, // 1159567724
		{ &Z_Construct_UFunction_ASBZPlayerState_Server_PickupAmmo, "Server_PickupAmmo" }, // 3218490690
		{ &Z_Construct_UFunction_ASBZPlayerState_Server_SetDropPlaceableEquippableData, "Server_SetDropPlaceableEquippableData" }, // 4158420579
		{ &Z_Construct_UFunction_ASBZPlayerState_Server_SetEquipStateAndIndex, "Server_SetEquipStateAndIndex" }, // 1111706061
		{ &Z_Construct_UFunction_ASBZPlayerState_Server_SetMiniGameState, "Server_SetMiniGameState" }, // 3929049656
		{ &Z_Construct_UFunction_ASBZPlayerState_Server_SetSkipIntroSequence, "Server_SetSkipIntroSequence" }, // 3168660330
		{ &Z_Construct_UFunction_ASBZPlayerState_Server_StartTargeting, "Server_StartTargeting" }, // 2622195377
		{ &Z_Construct_UFunction_ASBZPlayerState_Server_StopTargeting, "Server_StopTargeting" }, // 3806259196
		{ &Z_Construct_UFunction_ASBZPlayerState_Server_UpdateGameSession, "Server_UpdateGameSession" }, // 3119288243
		{ &Z_Construct_UFunction_ASBZPlayerState_SetSkipIntroSequence, "SetSkipIntroSequence" }, // 1583667754
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SBZPlayerState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ReadyStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ReadyStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ReadyStatus = { "ReadyStatus", "OnRep_ReadyStatus", (EPropertyFlags)0x0010000100000025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, ReadyStatus), Z_Construct_UEnum_Starbreeze_EPlayerReadyStatusValue, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ReadyStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ReadyStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_InfamyLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_InfamyLevel = { "InfamyLevel", "OnRep_InfamyLevel", (EPropertyFlags)0x0010000100002025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, InfamyLevel), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_InfamyLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_InfamyLevel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_Platform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_Platform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_Platform = { "Platform", "OnRep_Platform", (EPropertyFlags)0x0010000100002025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, Platform), Z_Construct_UEnum_Starbreeze_ESBZPlatform, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_Platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_Platform_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_FirstPartyPlatform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_FirstPartyPlatform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_FirstPartyPlatform = { "FirstPartyPlatform", "OnRep_FirstPartyPlatform", (EPropertyFlags)0x0010000100002025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, FirstPartyPlatform), Z_Construct_UEnum_Starbreeze_ESBZFirstPartyPlatform, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_FirstPartyPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_FirstPartyPlatform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AccelByteDisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AccelByteDisplayName = { "AccelByteDisplayName", "OnRep_AccelByteDisplayName", (EPropertyFlags)0x0010000100002025, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, AccelByteDisplayName), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AccelByteDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AccelByteDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AccelByteUserName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AccelByteUserName = { "AccelByteUserName", "OnRep_AccelByteUserName", (EPropertyFlags)0x0010000100002025, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, AccelByteUserName), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AccelByteUserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AccelByteUserName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AccelByteUserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AccelByteUserId = { "AccelByteUserId", "OnRep_AccelByteUserId", (EPropertyFlags)0x0010000100002025, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, AccelByteUserId), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AccelByteUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AccelByteUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AccelByteSessionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AccelByteSessionId = { "AccelByteSessionId", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, AccelByteSessionId), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AccelByteSessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AccelByteSessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ProgressionSaveGame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ProgressionSaveGame = { "ProgressionSaveGame", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, ProgressionSaveGame), Z_Construct_UClass_USBZProgressionSaveGame_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ProgressionSaveGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ProgressionSaveGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ProgressionSaveChallenges_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ProgressionSaveChallenges = { "ProgressionSaveChallenges", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, ProgressionSaveChallenges), Z_Construct_UClass_USBZProgressionSaveChallenges_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ProgressionSaveChallenges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ProgressionSaveChallenges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OnInfamyLevelChangedDynamic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OnInfamyLevelChangedDynamic = { "OnInfamyLevelChangedDynamic", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, OnInfamyLevelChangedDynamic), Z_Construct_UDelegateFunction_Starbreeze_SBZOnInfamyLevelChangedDynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OnInfamyLevelChangedDynamic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OnInfamyLevelChangedDynamic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsSkipIntroSequence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsSkipIntroSequence_SetBit(void* Obj)
	{
		((ASBZPlayerState*)Obj)->bIsSkipIntroSequence = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsSkipIntroSequence = { "bIsSkipIntroSequence", "OnIsSkipIntroSequenceChanged", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPlayerState), &Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsSkipIntroSequence_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsSkipIntroSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsSkipIntroSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ServerRegion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ServerRegion = { "ServerRegion", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, ServerRegion), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ServerRegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ServerRegion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, AttributeSet), Z_Construct_UClass_USBZPlayerAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AttributeSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AbilitySystem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AbilitySystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AbilitySystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_UICharacterEffects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_UICharacterEffects = { "UICharacterEffects", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, UICharacterEffects), Z_Construct_UClass_USBZUICharacterEffectComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_UICharacterEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_UICharacterEffects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_PlayerSlotId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_PlayerSlotId = { "PlayerSlotId", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, PlayerSlotId), nullptr, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_PlayerSlotId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_PlayerSlotId_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_PlayerColors_Inner = { "PlayerColors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_PlayerColors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_PlayerColors = { "PlayerColors", nullptr, (EPropertyFlags)0x0020080000000045, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, PlayerColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_PlayerColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_PlayerColors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_WeaponTags_Inner = { "WeaponTags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_WeaponTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_WeaponTags = { "WeaponTags", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, WeaponTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_WeaponTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_WeaponTags_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_EquippablePings_Inner = { "EquippablePings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZPingCallAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_EquippablePings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_EquippablePings = { "EquippablePings", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, EquippablePings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_EquippablePings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_EquippablePings_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SkillDataLookupMap_ValueProp = { "SkillDataLookupMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZSkillData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SkillDataLookupMap_Key_KeyProp = { "SkillDataLookupMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SkillDataLookupMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SkillDataLookupMap = { "SkillDataLookupMap", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, SkillDataLookupMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SkillDataLookupMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SkillDataLookupMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SkillTagSet_ElementProp = { "SkillTagSet", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SkillTagSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SkillTagSet = { "SkillTagSet", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, SkillTagSet), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SkillTagSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SkillTagSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ReplicatedStartReplenishDodgeServerTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ReplicatedStartReplenishDodgeServerTime = { "ReplicatedStartReplenishDodgeServerTime", "OnRep_ReplicatedStartReplenishDodgeServerTime", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, ReplicatedStartReplenishDodgeServerTime), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ReplicatedStartReplenishDodgeServerTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ReplicatedStartReplenishDodgeServerTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_StartReplenishDodgeServerTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_StartReplenishDodgeServerTime = { "StartReplenishDodgeServerTime", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, StartReplenishDodgeServerTime), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_StartReplenishDodgeServerTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_StartReplenishDodgeServerTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_StartReplenishDodgeValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_StartReplenishDodgeValue = { "StartReplenishDodgeValue", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, StartReplenishDodgeValue), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_StartReplenishDodgeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_StartReplenishDodgeValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsMaskOn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsMaskOn_SetBit(void* Obj)
	{
		((ASBZPlayerState*)Obj)->bIsMaskOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsMaskOn = { "bIsMaskOn", "OnRep_IsMaskOn", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPlayerState), &Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsMaskOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsMaskOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsMaskOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_Loadout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_Loadout = { "Loadout", "OnRep_Loadout", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, Loadout), Z_Construct_UScriptStruct_FPD3PlayerLoadout, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_Loadout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_Loadout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OldLoadout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OldLoadout = { "OldLoadout", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, OldLoadout), Z_Construct_UScriptStruct_FPD3PlayerLoadout, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OldLoadout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OldLoadout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsLocallyControlled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsLocallyControlled_SetBit(void* Obj)
	{
		((ASBZPlayerState*)Obj)->bIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsLocallyControlled = { "bIsLocallyControlled", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPlayerState), &Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsLocallyControlled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsLocallyControlled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsLocallyControlled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_EquipStateAndIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_EquipStateAndIndex = { "EquipStateAndIndex", "OnRep_EquipStateAndIndex", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, EquipStateAndIndex), nullptr, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_EquipStateAndIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_EquipStateAndIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ServerReloadState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ServerReloadState = { "ServerReloadState", "OnRep_ServerReloadState", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, ServerReloadState), Z_Construct_UScriptStruct_FSBZReplicatedReloadState, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ServerReloadState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ServerReloadState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_CharacterClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_CharacterClass = { "CharacterClass", nullptr, (EPropertyFlags)0x0044000000002005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, CharacterClass), Z_Construct_UClass_ASBZPlayerCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_CharacterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_CharacterClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_CustodyCharacterClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_CustodyCharacterClass = { "CustodyCharacterClass", "OnRep_CustodyCharacterClass", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, CustodyCharacterClass), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_CustodyCharacterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_CustodyCharacterClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsValidLoadout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsValidLoadout_SetBit(void* Obj)
	{
		((ASBZPlayerState*)Obj)->bIsValidLoadout = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsValidLoadout = { "bIsValidLoadout", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPlayerState), &Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsValidLoadout_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsValidLoadout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsValidLoadout_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_DefeatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_DefeatState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_DefeatState = { "DefeatState", "OnRep_DefeatState", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, DefeatState), Z_Construct_UEnum_Starbreeze_EPD3DefeatState, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_DefeatState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_DefeatState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OnKillNetID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OnKillNetID = { "OnKillNetID", "OnRep_OnKillNetID", (EPropertyFlags)0x0040000100002021, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, OnKillNetID), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OnKillNetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OnKillNetID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_MiniGameState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_MiniGameState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_MiniGameState = { "MiniGameState", "OnRep_MiniGameState", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, MiniGameState), Z_Construct_UEnum_Starbreeze_EPD3MiniGameState, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_MiniGameState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_MiniGameState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ResultData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ResultData = { "ResultData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, ResultData), Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ResultData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ResultData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsNetInitialized_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsNetInitialized_SetBit(void* Obj)
	{
		((ASBZPlayerState*)Obj)->bIsNetInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsNetInitialized = { "bIsNetInitialized", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPlayerState), &Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsNetInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsNetInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsNetInitialized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsAttributeSetInitialized_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsAttributeSetInitialized_SetBit(void* Obj)
	{
		((ASBZPlayerState*)Obj)->bIsAttributeSetInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsAttributeSetInitialized = { "bIsAttributeSetInitialized", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPlayerState), &Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsAttributeSetInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsAttributeSetInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsAttributeSetInitialized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsAttributeSetInitializedOnce_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsAttributeSetInitializedOnce_SetBit(void* Obj)
	{
		((ASBZPlayerState*)Obj)->bIsAttributeSetInitializedOnce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsAttributeSetInitializedOnce = { "bIsAttributeSetInitializedOnce", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPlayerState), &Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsAttributeSetInitializedOnce_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsAttributeSetInitializedOnce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsAttributeSetInitializedOnce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsPendingReconnectData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsPendingReconnectData_SetBit(void* Obj)
	{
		((ASBZPlayerState*)Obj)->bIsPendingReconnectData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsPendingReconnectData = { "bIsPendingReconnectData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPlayerState), &Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsPendingReconnectData_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsPendingReconnectData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsPendingReconnectData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AmmoPickupLookupMap_ValueProp = { "AmmoPickupLookupMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZAmmoPickupLookup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AmmoPickupLookupMap_Key_KeyProp = { "AmmoPickupLookupMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AmmoPickupLookupMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AmmoPickupLookupMap = { "AmmoPickupLookupMap", nullptr, (EPropertyFlags)0x0040000000002001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, AmmoPickupLookupMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AmmoPickupLookupMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AmmoPickupLookupMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsLoadoutLoaded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsLoadoutLoaded_SetBit(void* Obj)
	{
		((ASBZPlayerState*)Obj)->bIsLoadoutLoaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsLoadoutLoaded = { "bIsLoadoutLoaded", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPlayerState), &Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsLoadoutLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsLoadoutLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsLoadoutLoaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsApplyingLoadout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsApplyingLoadout_SetBit(void* Obj)
	{
		((ASBZPlayerState*)Obj)->bIsApplyingLoadout = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsApplyingLoadout = { "bIsApplyingLoadout", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPlayerState), &Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsApplyingLoadout_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsApplyingLoadout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsApplyingLoadout_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_LastLoadedAssetRefArray_Inner = { "LastLoadedAssetRefArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_LastLoadedAssetRefArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_LastLoadedAssetRefArray = { "LastLoadedAssetRefArray", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, LastLoadedAssetRefArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_LastLoadedAssetRefArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_LastLoadedAssetRefArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_CurrentCharacterData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_CurrentCharacterData = { "CurrentCharacterData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, CurrentCharacterData), Z_Construct_UClass_USBZPlayerCharacterData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_CurrentCharacterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_CurrentCharacterData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_PlaceableToolsArray_Inner = { "PlaceableToolsArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_PlaceableToolsArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_PlaceableToolsArray = { "PlaceableToolsArray", nullptr, (EPropertyFlags)0x0040000000002025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, PlaceableToolsArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_PlaceableToolsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_PlaceableToolsArray_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_TagCounterMap_ValueProp = { "TagCounterMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_TagCounterMap_Key_KeyProp = { "TagCounterMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_TagCounterMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_TagCounterMap = { "TagCounterMap", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, TagCounterMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_TagCounterMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_TagCounterMap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_PlayerCharacterArray_Inner = { "PlayerCharacterArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZPlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_PlayerCharacterArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_PlayerCharacterArray = { "PlayerCharacterArray", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, PlayerCharacterArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_PlayerCharacterArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_PlayerCharacterArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AppliedLoadoutEffectArray_Inner = { "AppliedLoadoutEffectArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AppliedLoadoutEffectArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AppliedLoadoutEffectArray = { "AppliedLoadoutEffectArray", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, AppliedLoadoutEffectArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AppliedLoadoutEffectArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AppliedLoadoutEffectArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AppliedCrewSkillEffectMap_ValueProp = { "AppliedCrewSkillEffectMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZEffectHandleArray, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AppliedCrewSkillEffectMap_Key_KeyProp = { "AppliedCrewSkillEffectMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZSkillData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AppliedCrewSkillEffectMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AppliedCrewSkillEffectMap = { "AppliedCrewSkillEffectMap", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, AppliedCrewSkillEffectMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AppliedCrewSkillEffectMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AppliedCrewSkillEffectMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_PlayerMicroCamera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_PlayerMicroCamera = { "PlayerMicroCamera", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, PlayerMicroCamera), Z_Construct_UClass_ASBZPlayerMicroCamera_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_PlayerMicroCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_PlayerMicroCamera_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ServerGrenadeProjectileArray_Inner = { "ServerGrenadeProjectileArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZGrenadeProjectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ServerGrenadeProjectileArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ServerGrenadeProjectileArray = { "ServerGrenadeProjectileArray", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, ServerGrenadeProjectileArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ServerGrenadeProjectileArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ServerGrenadeProjectileArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsSaveLoadoutPending_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsSaveLoadoutPending_SetBit(void* Obj)
	{
		((ASBZPlayerState*)Obj)->bIsSaveLoadoutPending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsSaveLoadoutPending = { "bIsSaveLoadoutPending", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPlayerState), &Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsSaveLoadoutPending_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsSaveLoadoutPending_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsSaveLoadoutPending_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SpectateDurationArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SpectateDurationArray = { "SpectateDurationArray", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(SpectateDurationArray, ASBZPlayerState), STRUCT_OFFSET(ASBZPlayerState, SpectateDurationArray), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SpectateDurationArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SpectateDurationArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ReconnectDefeatedCustodyDurationReductionArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ReconnectDefeatedCustodyDurationReductionArray = { "ReconnectDefeatedCustodyDurationReductionArray", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(ReconnectDefeatedCustodyDurationReductionArray, ASBZPlayerState), STRUCT_OFFSET(ASBZPlayerState, ReconnectDefeatedCustodyDurationReductionArray), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ReconnectDefeatedCustodyDurationReductionArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ReconnectDefeatedCustodyDurationReductionArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_MinimumSpectateDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_MinimumSpectateDuration = { "MinimumSpectateDuration", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, MinimumSpectateDuration), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_MinimumSpectateDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_MinimumSpectateDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SpectateTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SpectateTime = { "SpectateTime", "OnRep_SpectateTime", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, SpectateTime), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SpectateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SpectateTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ReducedCustodyTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ReducedCustodyTime = { "ReducedCustodyTime", nullptr, (EPropertyFlags)0x0040000000002025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, ReducedCustodyTime), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ReducedCustodyTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ReducedCustodyTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SpectateDurationModification_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SpectateDurationModification = { "SpectateDurationModification", "OnSpectateDurationModificationChanged", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, SpectateDurationModification), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SpectateDurationModification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SpectateDurationModification_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ECMGUIEffectData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ECMGUIEffectData = { "ECMGUIEffectData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, ECMGUIEffectData), Z_Construct_UClass_USBZCharacterEffectDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ECMGUIEffectData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ECMGUIEffectData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SkillTankDisengageActivatedTimeSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SkillTankDisengageActivatedTimeSeconds = { "SkillTankDisengageActivatedTimeSeconds", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, SkillTankDisengageActivatedTimeSeconds), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SkillTankDisengageActivatedTimeSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SkillTankDisengageActivatedTimeSeconds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_RuntimeActorArray_Inner = { "RuntimeActorArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_RuntimeActorArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_RuntimeActorArray = { "RuntimeActorArray", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, RuntimeActorArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_RuntimeActorArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_RuntimeActorArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SurrenderedEnemy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SurrenderedEnemy = { "SurrenderedEnemy", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, SurrenderedEnemy), Z_Construct_UClass_ASBZAICharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SurrenderedEnemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SurrenderedEnemy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_EnforcerSkillKillCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_EnforcerSkillKillCount = { "EnforcerSkillKillCount", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, EnforcerSkillKillCount), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_EnforcerSkillKillCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_EnforcerSkillKillCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_EnforcerSkillLastKillTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_EnforcerSkillLastKillTime = { "EnforcerSkillLastKillTime", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, EnforcerSkillLastKillTime), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_EnforcerSkillLastKillTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_EnforcerSkillLastKillTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_EnforcerAcedSkillKillCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_EnforcerAcedSkillKillCount = { "EnforcerAcedSkillKillCount", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, EnforcerAcedSkillKillCount), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_EnforcerAcedSkillKillCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_EnforcerAcedSkillKillCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SelectedCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SelectedCharacter = { "SelectedCharacter", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, SelectedCharacter), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SelectedCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SelectedCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OverkillWeaponProgress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OverkillWeaponProgress = { "OverkillWeaponProgress", "OnRep_OverkillWeaponProgress", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, OverkillWeaponProgress), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OverkillWeaponProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OverkillWeaponProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OverkillWeaponProgressKillIncrease_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OverkillWeaponProgressKillIncrease = { "OverkillWeaponProgressKillIncrease", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, OverkillWeaponProgressKillIncrease), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OverkillWeaponProgressKillIncrease_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OverkillWeaponProgressKillIncrease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OverkillWeaponProgressHeadshotAdditionalIncrease_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OverkillWeaponProgressHeadshotAdditionalIncrease = { "OverkillWeaponProgressHeadshotAdditionalIncrease", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, OverkillWeaponProgressHeadshotAdditionalIncrease), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OverkillWeaponProgressHeadshotAdditionalIncrease_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OverkillWeaponProgressHeadshotAdditionalIncrease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OverkillWeaponProgressObjectiveIncrease_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OverkillWeaponProgressObjectiveIncrease = { "OverkillWeaponProgressObjectiveIncrease", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, OverkillWeaponProgressObjectiveIncrease), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OverkillWeaponProgressObjectiveIncrease_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OverkillWeaponProgressObjectiveIncrease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OverkillWeaponProgressSubObjectiveIncrease_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OverkillWeaponProgressSubObjectiveIncrease = { "OverkillWeaponProgressSubObjectiveIncrease", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, OverkillWeaponProgressSubObjectiveIncrease), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OverkillWeaponProgressSubObjectiveIncrease_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OverkillWeaponProgressSubObjectiveIncrease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsLastArrestedByGuard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsLastArrestedByGuard_SetBit(void* Obj)
	{
		((ASBZPlayerState*)Obj)->bIsLastArrestedByGuard = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsLastArrestedByGuard = { "bIsLastArrestedByGuard", nullptr, (EPropertyFlags)0x0040000000002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPlayerState), &Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsLastArrestedByGuard_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsLastArrestedByGuard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsLastArrestedByGuard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsTargeting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsTargeting_SetBit(void* Obj)
	{
		((ASBZPlayerState*)Obj)->bIsTargeting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsTargeting = { "bIsTargeting", "OnRep_IsTargeting", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPlayerState), &Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsTargeting_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsTargeting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsTargeting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_CustodyCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_CustodyCount = { "CustodyCount", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, CustodyCount), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_CustodyCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_CustodyCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_CustodyReleaseCost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_CustodyReleaseCost = { "CustodyReleaseCost", "OnRep_CustodyReleaseCost", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, CustodyReleaseCost), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_CustodyReleaseCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_CustodyReleaseCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_CurrentTradeReduction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_CurrentTradeReduction = { "CurrentTradeReduction", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerState, CurrentTradeReduction), METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_CurrentTradeReduction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_CurrentTradeReduction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bServerIsHardBargainCustody_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bServerIsHardBargainCustody_SetBit(void* Obj)
	{
		((ASBZPlayerState*)Obj)->bServerIsHardBargainCustody = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bServerIsHardBargainCustody = { "bServerIsHardBargainCustody", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPlayerState), &Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bServerIsHardBargainCustody_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bServerIsHardBargainCustody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bServerIsHardBargainCustody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsMergePartySelected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerState" },
		{ "ModuleRelativePath", "Public/SBZPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsMergePartySelected_SetBit(void* Obj)
	{
		((ASBZPlayerState*)Obj)->bIsMergePartySelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsMergePartySelected = { "bIsMergePartySelected", "OnRep_MergePartySelected", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZPlayerState), &Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsMergePartySelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsMergePartySelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsMergePartySelected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ReadyStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ReadyStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_InfamyLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_Platform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_Platform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_FirstPartyPlatform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_FirstPartyPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AccelByteDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AccelByteUserName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AccelByteUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AccelByteSessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ProgressionSaveGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ProgressionSaveChallenges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OnInfamyLevelChangedDynamic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsSkipIntroSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ServerRegion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AttributeSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AbilitySystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_UICharacterEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_PlayerSlotId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_PlayerColors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_PlayerColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_WeaponTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_WeaponTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_EquippablePings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_EquippablePings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SkillDataLookupMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SkillDataLookupMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SkillDataLookupMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SkillTagSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SkillTagSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ReplicatedStartReplenishDodgeServerTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_StartReplenishDodgeServerTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_StartReplenishDodgeValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsMaskOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_Loadout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OldLoadout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsLocallyControlled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_EquipStateAndIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ServerReloadState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_CharacterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_CustodyCharacterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsValidLoadout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_DefeatState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_DefeatState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OnKillNetID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_MiniGameState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_MiniGameState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ResultData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsNetInitialized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsAttributeSetInitialized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsAttributeSetInitializedOnce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsPendingReconnectData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AmmoPickupLookupMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AmmoPickupLookupMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AmmoPickupLookupMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsLoadoutLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsApplyingLoadout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_LastLoadedAssetRefArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_LastLoadedAssetRefArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_CurrentCharacterData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_PlaceableToolsArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_PlaceableToolsArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_TagCounterMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_TagCounterMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_TagCounterMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_PlayerCharacterArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_PlayerCharacterArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AppliedLoadoutEffectArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AppliedLoadoutEffectArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AppliedCrewSkillEffectMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AppliedCrewSkillEffectMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_AppliedCrewSkillEffectMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_PlayerMicroCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ServerGrenadeProjectileArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ServerGrenadeProjectileArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsSaveLoadoutPending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SpectateDurationArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ReconnectDefeatedCustodyDurationReductionArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_MinimumSpectateDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SpectateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ReducedCustodyTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SpectateDurationModification,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_ECMGUIEffectData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SkillTankDisengageActivatedTimeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_RuntimeActorArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_RuntimeActorArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SurrenderedEnemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_EnforcerSkillKillCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_EnforcerSkillLastKillTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_EnforcerAcedSkillKillCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_SelectedCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OverkillWeaponProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OverkillWeaponProgressKillIncrease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OverkillWeaponProgressHeadshotAdditionalIncrease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OverkillWeaponProgressObjectiveIncrease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_OverkillWeaponProgressSubObjectiveIncrease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsLastArrestedByGuard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsTargeting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_CustodyCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_CustodyReleaseCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_CurrentTradeReduction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bServerIsHardBargainCustody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerState_Statics::NewProp_bIsMergePartySelected,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZPlayerState_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZCrewStateInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZPlayerState, ISBZCrewStateInterface), false },
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZPlayerState, IAbilitySystemInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZPlayerState_Statics::ClassParams = {
		&ASBZPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZPlayerState_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZPlayerState, 1372334678);
	template<> STARBREEZE_API UClass* StaticClass<ASBZPlayerState>()
	{
		return ASBZPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZPlayerState(Z_Construct_UClass_ASBZPlayerState, &ASBZPlayerState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZPlayerState"), false, nullptr, nullptr, nullptr);

	void ASBZPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReadyStatus(TEXT("ReadyStatus"));
		static const FName Name_InfamyLevel(TEXT("InfamyLevel"));
		static const FName Name_Platform(TEXT("Platform"));
		static const FName Name_FirstPartyPlatform(TEXT("FirstPartyPlatform"));
		static const FName Name_AccelByteDisplayName(TEXT("AccelByteDisplayName"));
		static const FName Name_AccelByteUserName(TEXT("AccelByteUserName"));
		static const FName Name_AccelByteUserId(TEXT("AccelByteUserId"));
		static const FName Name_bIsSkipIntroSequence(TEXT("bIsSkipIntroSequence"));
		static const FName Name_PlayerSlotId(TEXT("PlayerSlotId"));
		static const FName Name_ReplicatedStartReplenishDodgeServerTime(TEXT("ReplicatedStartReplenishDodgeServerTime"));
		static const FName Name_bIsMaskOn(TEXT("bIsMaskOn"));
		static const FName Name_Loadout(TEXT("Loadout"));
		static const FName Name_EquipStateAndIndex(TEXT("EquipStateAndIndex"));
		static const FName Name_ServerReloadState(TEXT("ServerReloadState"));
		static const FName Name_CustodyCharacterClass(TEXT("CustodyCharacterClass"));
		static const FName Name_DefeatState(TEXT("DefeatState"));
		static const FName Name_OnKillNetID(TEXT("OnKillNetID"));
		static const FName Name_MiniGameState(TEXT("MiniGameState"));
		static const FName Name_PlaceableToolsArray(TEXT("PlaceableToolsArray"));
		static const FName Name_SpectateTime(TEXT("SpectateTime"));
		static const FName Name_ReducedCustodyTime(TEXT("ReducedCustodyTime"));
		static const FName Name_SpectateDurationModification(TEXT("SpectateDurationModification"));
		static const FName Name_OverkillWeaponProgress(TEXT("OverkillWeaponProgress"));
		static const FName Name_bIsLastArrestedByGuard(TEXT("bIsLastArrestedByGuard"));
		static const FName Name_bIsTargeting(TEXT("bIsTargeting"));
		static const FName Name_CustodyReleaseCost(TEXT("CustodyReleaseCost"));
		static const FName Name_bIsMergePartySelected(TEXT("bIsMergePartySelected"));

		const bool bIsValid = true
			&& Name_ReadyStatus == ClassReps[(int32)ENetFields_Private::ReadyStatus].Property->GetFName()
			&& Name_InfamyLevel == ClassReps[(int32)ENetFields_Private::InfamyLevel].Property->GetFName()
			&& Name_Platform == ClassReps[(int32)ENetFields_Private::Platform].Property->GetFName()
			&& Name_FirstPartyPlatform == ClassReps[(int32)ENetFields_Private::FirstPartyPlatform].Property->GetFName()
			&& Name_AccelByteDisplayName == ClassReps[(int32)ENetFields_Private::AccelByteDisplayName].Property->GetFName()
			&& Name_AccelByteUserName == ClassReps[(int32)ENetFields_Private::AccelByteUserName].Property->GetFName()
			&& Name_AccelByteUserId == ClassReps[(int32)ENetFields_Private::AccelByteUserId].Property->GetFName()
			&& Name_bIsSkipIntroSequence == ClassReps[(int32)ENetFields_Private::bIsSkipIntroSequence].Property->GetFName()
			&& Name_PlayerSlotId == ClassReps[(int32)ENetFields_Private::PlayerSlotId].Property->GetFName()
			&& Name_ReplicatedStartReplenishDodgeServerTime == ClassReps[(int32)ENetFields_Private::ReplicatedStartReplenishDodgeServerTime].Property->GetFName()
			&& Name_bIsMaskOn == ClassReps[(int32)ENetFields_Private::bIsMaskOn].Property->GetFName()
			&& Name_Loadout == ClassReps[(int32)ENetFields_Private::Loadout].Property->GetFName()
			&& Name_EquipStateAndIndex == ClassReps[(int32)ENetFields_Private::EquipStateAndIndex].Property->GetFName()
			&& Name_ServerReloadState == ClassReps[(int32)ENetFields_Private::ServerReloadState].Property->GetFName()
			&& Name_CustodyCharacterClass == ClassReps[(int32)ENetFields_Private::CustodyCharacterClass].Property->GetFName()
			&& Name_DefeatState == ClassReps[(int32)ENetFields_Private::DefeatState].Property->GetFName()
			&& Name_OnKillNetID == ClassReps[(int32)ENetFields_Private::OnKillNetID].Property->GetFName()
			&& Name_MiniGameState == ClassReps[(int32)ENetFields_Private::MiniGameState].Property->GetFName()
			&& Name_PlaceableToolsArray == ClassReps[(int32)ENetFields_Private::PlaceableToolsArray].Property->GetFName()
			&& Name_SpectateTime == ClassReps[(int32)ENetFields_Private::SpectateTime].Property->GetFName()
			&& Name_ReducedCustodyTime == ClassReps[(int32)ENetFields_Private::ReducedCustodyTime].Property->GetFName()
			&& Name_SpectateDurationModification == ClassReps[(int32)ENetFields_Private::SpectateDurationModification].Property->GetFName()
			&& Name_OverkillWeaponProgress == ClassReps[(int32)ENetFields_Private::OverkillWeaponProgress].Property->GetFName()
			&& Name_bIsLastArrestedByGuard == ClassReps[(int32)ENetFields_Private::bIsLastArrestedByGuard].Property->GetFName()
			&& Name_bIsTargeting == ClassReps[(int32)ENetFields_Private::bIsTargeting].Property->GetFName()
			&& Name_CustodyReleaseCost == ClassReps[(int32)ENetFields_Private::CustodyReleaseCost].Property->GetFName()
			&& Name_bIsMergePartySelected == ClassReps[(int32)ENetFields_Private::bIsMergePartySelected].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZPlayerState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
