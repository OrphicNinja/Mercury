// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCheatManagerBase.h"
#include "Engine/Classes/GameFramework/PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCheatManagerBase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCheatManagerBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCheatManagerBase();
	ENGINE_API UClass* Z_Construct_UClass_UCheatManager();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCurrencyCode();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZGameMachineStateError();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDebugNetEmulationType();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDebugNetEmulationTarget();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDebugSelection();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAccelByteAdminHelper_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZCheatManagerBase::execAddCurrency)
	{
		P_GET_ENUM(ESBZCurrencyCode,Z_Param_Type);
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCurrency(ESBZCurrencyCode(Z_Param_Type),Z_Param_Amount,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execChangeStatCode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StatCode);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeStatCode(Z_Param_StatCode,Z_Param_Count,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execClearFriends)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearFriends();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execCompleteChallenge)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CompleteChallenge(Z_Param_Count,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execDebugChallengeRecords)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Tag);
		P_GET_PROPERTY(FStrProperty,Z_Param_Status);
		P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
		P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugChallengeRecords(Z_Param_Tag,Z_Param_Status,Z_Param_Offset,Z_Param_Limit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execDebugIncrementPlayerStat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StatCode);
		P_GET_PROPERTY(FIntProperty,Z_Param_Increment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugIncrementPlayerStat(Z_Param_StatCode,Z_Param_Increment);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execDebugVoteInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugVoteInit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execDebugVoteNegative)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugVoteNegative();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execDebugVotePositive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugVotePositive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execDebugVoteRecall)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugVoteRecall();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execDeleteMyAccount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteMyAccount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execDeleteProgressionSaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteProgressionSaveGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execDisableTimeouts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableTimeouts();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execDisconnectPlayer)
	{
		P_GET_UBOOL(Z_Param_bIsLocallyDisconnected);
		P_GET_UBOOL(Z_Param_bIsGraceful);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisconnectPlayer(Z_Param_bIsLocallyDisconnected,Z_Param_bIsGraceful,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execDisconnectServer)
	{
		P_GET_UBOOL(Z_Param_bIsGraceful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisconnectServer(Z_Param_bIsGraceful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execDumpActiveLoadout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpActiveLoadout();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execDumpAllPlayersAccelByteDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpAllPlayersAccelByteDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execDumpAllPlayersInfamyAndPlatform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpAllPlayersInfamyAndPlatform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execDumpAllPlayerStatistics)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpAllPlayerStatistics(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execDumpAssetDatabase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpAssetDatabase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execDumpWeaponPresetAssets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpWeaponPresetAssets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execExecF)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecF(Z_Param_File);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execFakeInvite)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FakeInvite(Z_Param_UserId,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execFetchAllVendorItems)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FetchAllVendorItems(Z_Param_MaxCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execLoadProgressionSaveChallenges)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadProgressionSaveChallenges();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execLoadProgressionSaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadProgressionSaveGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execOnEndPlay)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndPlay(Z_Param_Actor,EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execPrintAbilitySystem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintAbilitySystem(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execPrintAbilitySystemBothCurrent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintAbilitySystemBothCurrent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execPrintError)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_UBOOL(Z_Param_bIsDecodingNeeded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintError(Z_Param_Text,Z_Param_bIsDecodingNeeded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execPrintInputEnabled)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintInputEnabled(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execPrintInputEnabledBothCurrent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintInputEnabledBothCurrent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execPrintLog)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_UBOOL(Z_Param_bIsDecodingNeeded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintLog(Z_Param_Text,Z_Param_bIsDecodingNeeded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execPrintSelection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintSelection(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execPrintSelectionHierarchy)
	{
		P_GET_UBOOL(Z_Param_bIsChildActorIncluded);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintSelectionHierarchy(Z_Param_bIsChildActorIncluded,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execPrintStuckInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintStuckInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execPrintTargetAbilitySystem)
	{
		P_GET_UBOOL(Z_Param_bIsLocallyControlledOnly);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintTargetAbilitySystem(Z_Param_bIsLocallyControlledOnly,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execPrintVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execPrintWarning)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_UBOOL(Z_Param_bIsDecodingNeeded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintWarning(Z_Param_Text,Z_Param_bIsDecodingNeeded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execRemoveCurrency)
	{
		P_GET_ENUM(ESBZCurrencyCode,Z_Param_Type);
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveCurrency(ESBZCurrencyCode(Z_Param_Type),Z_Param_Amount,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execRequestGameError)
	{
		P_GET_ENUM(ESBZGameMachineStateError,Z_Param_State);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestGameError(ESBZGameMachineStateError(Z_Param_State),Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execRequestSwitchUser)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestSwitchUser();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execResetMyAccount)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetMyAccount(Z_Param_Password);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execResetProgressionSaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetProgressionSaveGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execResetSettingsSaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetSettingsSaveGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execSaveProgressionSaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveProgressionSaveGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execSelectActorClass)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ClassName);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectActorClass(Z_Param_Out_ClassName,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execSelectActorName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectActorName(Z_Param_Out_Name,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execSelectChild)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectChild(Z_Param_Index,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execSelectComponentClass)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ClassName);
		P_GET_PROPERTY(FIntProperty,Z_Param_DepthStencil);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectComponentClass(Z_Param_Out_ClassName,Z_Param_DepthStencil,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execSelectComponentIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_DepthStencil);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectComponentIndex(Z_Param_Index,Z_Param_DepthStencil,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execSelectComponentName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_DepthStencil);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectComponentName(Z_Param_Out_Name,Z_Param_DepthStencil,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execSelectLast)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectLast(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execSelectParentActor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectParentActor(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execSelectParentSocket)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectParentSocket(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execSelectSocketIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectSocketIndex(Z_Param_Index,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execSelectSocketName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectSocketName(Z_Param_Out_Name,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execSelectTarget)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectTarget(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execServerCommand)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Command);
		P_GET_UBOOL(Z_Param_bIsExecutedOnAll);
		P_GET_UBOOL(Z_Param_bIsLocallyControlledOnly);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerCommand(Z_Param_Command,Z_Param_bIsExecutedOnAll,Z_Param_bIsLocallyControlledOnly,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execSetAudioRTPCValue)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAudioRTPCValue(Z_Param_Out_Name,Z_Param_Value,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execSetCameraMode)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_CameraMode);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCameraMode(Z_Param_Out_CameraMode,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execSetCulture)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCulture(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execSetCurrency)
	{
		P_GET_ENUM(ESBZCurrencyCode,Z_Param_Type);
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrency(ESBZCurrencyCode(Z_Param_Type),Z_Param_Amount,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execSetDebugEarnedExperiencePoints)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EarnedExperiencePoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDebugEarnedExperiencePoints(Z_Param_EarnedExperiencePoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execSetInfamyExperience)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInfamyExperience(Z_Param_Amount,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execSetInfamyLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInfamyLevel(Z_Param_Amount,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execSetInfamyLevelExperience)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Level);
		P_GET_PROPERTY(FIntProperty,Z_Param_Experience);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInfamyLevelExperience(Z_Param_Level,Z_Param_Experience);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execSetInputTypeOverride)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Override);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputTypeOverride(Z_Param_Override);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execSetListenerEnabled)
	{
		P_GET_UBOOL(Z_Param_bIsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetListenerEnabled(Z_Param_bIsEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execSetNetEmulationType)
	{
		P_GET_ENUM(ESBZDebugNetEmulationType,Z_Param_Type);
		P_GET_ENUM(ESBZDebugNetEmulationTarget,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNetEmulationType(ESBZDebugNetEmulationType(Z_Param_Type),ESBZDebugNetEmulationTarget(Z_Param_Target));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execSetPaused)
	{
		P_GET_UBOOL(Z_Param_bIsPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPaused(Z_Param_bIsPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execSetPreMatchInfamyExperience)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Experience);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPreMatchInfamyExperience(Z_Param_Experience,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execSimulateLobbyCloseConnection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SimulateLobbyCloseConnection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execSimulateLobbyConnectSuccess)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SimulateLobbyConnectSuccess();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execToggleCVar)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CVar);
		P_GET_PROPERTY(FIntProperty,Z_Param_First);
		P_GET_PROPERTY(FIntProperty,Z_Param_Second);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleCVar(Z_Param_CVar,Z_Param_First,Z_Param_Second);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execToggleDrawDebugSpread)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleDrawDebugSpread();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execToggleInGameCheatMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleInGameCheatMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execToggleMuteMusic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleMuteMusic();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execUnselect)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Unselect(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execUnselectComponent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnselectComponent(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execUnselectSocket)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnselectSocket(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execVoteKickPlayer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->VoteKickPlayer(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManagerBase::execVoteRestartLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->VoteRestartLevel();
		P_NATIVE_END;
	}
	void USBZCheatManagerBase::StaticRegisterNativesUSBZCheatManagerBase()
	{
		UClass* Class = USBZCheatManagerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCurrency", &USBZCheatManagerBase::execAddCurrency },
			{ "ChangeStatCode", &USBZCheatManagerBase::execChangeStatCode },
			{ "ClearFriends", &USBZCheatManagerBase::execClearFriends },
			{ "CompleteChallenge", &USBZCheatManagerBase::execCompleteChallenge },
			{ "DebugChallengeRecords", &USBZCheatManagerBase::execDebugChallengeRecords },
			{ "DebugIncrementPlayerStat", &USBZCheatManagerBase::execDebugIncrementPlayerStat },
			{ "DebugVoteInit", &USBZCheatManagerBase::execDebugVoteInit },
			{ "DebugVoteNegative", &USBZCheatManagerBase::execDebugVoteNegative },
			{ "DebugVotePositive", &USBZCheatManagerBase::execDebugVotePositive },
			{ "DebugVoteRecall", &USBZCheatManagerBase::execDebugVoteRecall },
			{ "DeleteMyAccount", &USBZCheatManagerBase::execDeleteMyAccount },
			{ "DeleteProgressionSaveGame", &USBZCheatManagerBase::execDeleteProgressionSaveGame },
			{ "DisableTimeouts", &USBZCheatManagerBase::execDisableTimeouts },
			{ "DisconnectPlayer", &USBZCheatManagerBase::execDisconnectPlayer },
			{ "DisconnectServer", &USBZCheatManagerBase::execDisconnectServer },
			{ "DumpActiveLoadout", &USBZCheatManagerBase::execDumpActiveLoadout },
			{ "DumpAllPlayersAccelByteDisplayName", &USBZCheatManagerBase::execDumpAllPlayersAccelByteDisplayName },
			{ "DumpAllPlayersInfamyAndPlatform", &USBZCheatManagerBase::execDumpAllPlayersInfamyAndPlatform },
			{ "DumpAllPlayerStatistics", &USBZCheatManagerBase::execDumpAllPlayerStatistics },
			{ "DumpAssetDatabase", &USBZCheatManagerBase::execDumpAssetDatabase },
			{ "DumpWeaponPresetAssets", &USBZCheatManagerBase::execDumpWeaponPresetAssets },
			{ "ExecF", &USBZCheatManagerBase::execExecF },
			{ "FakeInvite", &USBZCheatManagerBase::execFakeInvite },
			{ "FetchAllVendorItems", &USBZCheatManagerBase::execFetchAllVendorItems },
			{ "LoadProgressionSaveChallenges", &USBZCheatManagerBase::execLoadProgressionSaveChallenges },
			{ "LoadProgressionSaveGame", &USBZCheatManagerBase::execLoadProgressionSaveGame },
			{ "OnEndPlay", &USBZCheatManagerBase::execOnEndPlay },
			{ "PrintAbilitySystem", &USBZCheatManagerBase::execPrintAbilitySystem },
			{ "PrintAbilitySystemBothCurrent", &USBZCheatManagerBase::execPrintAbilitySystemBothCurrent },
			{ "PrintError", &USBZCheatManagerBase::execPrintError },
			{ "PrintInputEnabled", &USBZCheatManagerBase::execPrintInputEnabled },
			{ "PrintInputEnabledBothCurrent", &USBZCheatManagerBase::execPrintInputEnabledBothCurrent },
			{ "PrintLog", &USBZCheatManagerBase::execPrintLog },
			{ "PrintSelection", &USBZCheatManagerBase::execPrintSelection },
			{ "PrintSelectionHierarchy", &USBZCheatManagerBase::execPrintSelectionHierarchy },
			{ "PrintStuckInfo", &USBZCheatManagerBase::execPrintStuckInfo },
			{ "PrintTargetAbilitySystem", &USBZCheatManagerBase::execPrintTargetAbilitySystem },
			{ "PrintVersion", &USBZCheatManagerBase::execPrintVersion },
			{ "PrintWarning", &USBZCheatManagerBase::execPrintWarning },
			{ "RemoveCurrency", &USBZCheatManagerBase::execRemoveCurrency },
			{ "RequestGameError", &USBZCheatManagerBase::execRequestGameError },
			{ "RequestSwitchUser", &USBZCheatManagerBase::execRequestSwitchUser },
			{ "ResetMyAccount", &USBZCheatManagerBase::execResetMyAccount },
			{ "ResetProgressionSaveGame", &USBZCheatManagerBase::execResetProgressionSaveGame },
			{ "ResetSettingsSaveGame", &USBZCheatManagerBase::execResetSettingsSaveGame },
			{ "SaveProgressionSaveGame", &USBZCheatManagerBase::execSaveProgressionSaveGame },
			{ "SelectActorClass", &USBZCheatManagerBase::execSelectActorClass },
			{ "SelectActorName", &USBZCheatManagerBase::execSelectActorName },
			{ "SelectChild", &USBZCheatManagerBase::execSelectChild },
			{ "SelectComponentClass", &USBZCheatManagerBase::execSelectComponentClass },
			{ "SelectComponentIndex", &USBZCheatManagerBase::execSelectComponentIndex },
			{ "SelectComponentName", &USBZCheatManagerBase::execSelectComponentName },
			{ "SelectLast", &USBZCheatManagerBase::execSelectLast },
			{ "SelectParentActor", &USBZCheatManagerBase::execSelectParentActor },
			{ "SelectParentSocket", &USBZCheatManagerBase::execSelectParentSocket },
			{ "SelectSocketIndex", &USBZCheatManagerBase::execSelectSocketIndex },
			{ "SelectSocketName", &USBZCheatManagerBase::execSelectSocketName },
			{ "SelectTarget", &USBZCheatManagerBase::execSelectTarget },
			{ "ServerCommand", &USBZCheatManagerBase::execServerCommand },
			{ "SetAudioRTPCValue", &USBZCheatManagerBase::execSetAudioRTPCValue },
			{ "SetCameraMode", &USBZCheatManagerBase::execSetCameraMode },
			{ "SetCulture", &USBZCheatManagerBase::execSetCulture },
			{ "SetCurrency", &USBZCheatManagerBase::execSetCurrency },
			{ "SetDebugEarnedExperiencePoints", &USBZCheatManagerBase::execSetDebugEarnedExperiencePoints },
			{ "SetInfamyExperience", &USBZCheatManagerBase::execSetInfamyExperience },
			{ "SetInfamyLevel", &USBZCheatManagerBase::execSetInfamyLevel },
			{ "SetInfamyLevelExperience", &USBZCheatManagerBase::execSetInfamyLevelExperience },
			{ "SetInputTypeOverride", &USBZCheatManagerBase::execSetInputTypeOverride },
			{ "SetListenerEnabled", &USBZCheatManagerBase::execSetListenerEnabled },
			{ "SetNetEmulationType", &USBZCheatManagerBase::execSetNetEmulationType },
			{ "SetPaused", &USBZCheatManagerBase::execSetPaused },
			{ "SetPreMatchInfamyExperience", &USBZCheatManagerBase::execSetPreMatchInfamyExperience },
			{ "SimulateLobbyCloseConnection", &USBZCheatManagerBase::execSimulateLobbyCloseConnection },
			{ "SimulateLobbyConnectSuccess", &USBZCheatManagerBase::execSimulateLobbyConnectSuccess },
			{ "ToggleCVar", &USBZCheatManagerBase::execToggleCVar },
			{ "ToggleDrawDebugSpread", &USBZCheatManagerBase::execToggleDrawDebugSpread },
			{ "ToggleInGameCheatMenu", &USBZCheatManagerBase::execToggleInGameCheatMenu },
			{ "ToggleMuteMusic", &USBZCheatManagerBase::execToggleMuteMusic },
			{ "Unselect", &USBZCheatManagerBase::execUnselect },
			{ "UnselectComponent", &USBZCheatManagerBase::execUnselectComponent },
			{ "UnselectSocket", &USBZCheatManagerBase::execUnselectSocket },
			{ "VoteKickPlayer", &USBZCheatManagerBase::execVoteKickPlayer },
			{ "VoteRestartLevel", &USBZCheatManagerBase::execVoteRestartLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_AddCurrency_Statics
	{
		struct SBZCheatManagerBase_eventAddCurrency_Parms
		{
			ESBZCurrencyCode Type;
			int32 Amount;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCheatManagerBase_AddCurrency_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_AddCurrency_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventAddCurrency_Parms, Type), Z_Construct_UEnum_Starbreeze_ESBZCurrencyCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_AddCurrency_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventAddCurrency_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_AddCurrency_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventAddCurrency_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_AddCurrency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_AddCurrency_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_AddCurrency_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_AddCurrency_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_AddCurrency_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_AddCurrency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_AddCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "AddCurrency", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventAddCurrency_Parms), Z_Construct_UFunction_USBZCheatManagerBase_AddCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_AddCurrency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_AddCurrency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_AddCurrency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_AddCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_AddCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_ChangeStatCode_Statics
	{
		struct SBZCheatManagerBase_eventChangeStatCode_Parms
		{
			FString StatCode;
			int32 Count;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatCode;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_ChangeStatCode_Statics::NewProp_StatCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_ChangeStatCode_Statics::NewProp_StatCode = { "StatCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventChangeStatCode_Parms, StatCode), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_ChangeStatCode_Statics::NewProp_StatCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_ChangeStatCode_Statics::NewProp_StatCode_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_ChangeStatCode_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventChangeStatCode_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_ChangeStatCode_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventChangeStatCode_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_ChangeStatCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_ChangeStatCode_Statics::NewProp_StatCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_ChangeStatCode_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_ChangeStatCode_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_ChangeStatCode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_ChangeStatCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "ChangeStatCode", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventChangeStatCode_Parms), Z_Construct_UFunction_USBZCheatManagerBase_ChangeStatCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_ChangeStatCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_ChangeStatCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_ChangeStatCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_ChangeStatCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_ChangeStatCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_ClearFriends_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_ClearFriends_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_ClearFriends_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "ClearFriends", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_ClearFriends_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_ClearFriends_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_ClearFriends()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_ClearFriends_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_CompleteChallenge_Statics
	{
		struct SBZCheatManagerBase_eventCompleteChallenge_Parms
		{
			int32 Count;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_CompleteChallenge_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventCompleteChallenge_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_CompleteChallenge_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventCompleteChallenge_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_CompleteChallenge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_CompleteChallenge_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_CompleteChallenge_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_CompleteChallenge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_CompleteChallenge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "CompleteChallenge", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventCompleteChallenge_Parms), Z_Construct_UFunction_USBZCheatManagerBase_CompleteChallenge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_CompleteChallenge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_CompleteChallenge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_CompleteChallenge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_CompleteChallenge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_CompleteChallenge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_DebugChallengeRecords_Statics
	{
		struct SBZCheatManagerBase_eventDebugChallengeRecords_Parms
		{
			FString Tag;
			FString Status;
			int32 Offset;
			int32 Limit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Limit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_DebugChallengeRecords_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_DebugChallengeRecords_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventDebugChallengeRecords_Parms, Tag), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_DebugChallengeRecords_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_DebugChallengeRecords_Statics::NewProp_Tag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_DebugChallengeRecords_Statics::NewProp_Status_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_DebugChallengeRecords_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventDebugChallengeRecords_Parms, Status), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_DebugChallengeRecords_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_DebugChallengeRecords_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_DebugChallengeRecords_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventDebugChallengeRecords_Parms, Offset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_DebugChallengeRecords_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventDebugChallengeRecords_Parms, Limit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_DebugChallengeRecords_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_DebugChallengeRecords_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_DebugChallengeRecords_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_DebugChallengeRecords_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_DebugChallengeRecords_Statics::NewProp_Limit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_DebugChallengeRecords_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_DebugChallengeRecords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "DebugChallengeRecords", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventDebugChallengeRecords_Parms), Z_Construct_UFunction_USBZCheatManagerBase_DebugChallengeRecords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_DebugChallengeRecords_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_DebugChallengeRecords_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_DebugChallengeRecords_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_DebugChallengeRecords()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_DebugChallengeRecords_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_DebugIncrementPlayerStat_Statics
	{
		struct SBZCheatManagerBase_eventDebugIncrementPlayerStat_Parms
		{
			FString StatCode;
			int32 Increment;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatCode;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Increment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_DebugIncrementPlayerStat_Statics::NewProp_StatCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_DebugIncrementPlayerStat_Statics::NewProp_StatCode = { "StatCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventDebugIncrementPlayerStat_Parms, StatCode), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_DebugIncrementPlayerStat_Statics::NewProp_StatCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_DebugIncrementPlayerStat_Statics::NewProp_StatCode_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_DebugIncrementPlayerStat_Statics::NewProp_Increment = { "Increment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventDebugIncrementPlayerStat_Parms, Increment), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_DebugIncrementPlayerStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_DebugIncrementPlayerStat_Statics::NewProp_StatCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_DebugIncrementPlayerStat_Statics::NewProp_Increment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_DebugIncrementPlayerStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_DebugIncrementPlayerStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "DebugIncrementPlayerStat", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventDebugIncrementPlayerStat_Parms), Z_Construct_UFunction_USBZCheatManagerBase_DebugIncrementPlayerStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_DebugIncrementPlayerStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_DebugIncrementPlayerStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_DebugIncrementPlayerStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_DebugIncrementPlayerStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_DebugIncrementPlayerStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_DebugVoteInit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_DebugVoteInit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_DebugVoteInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "DebugVoteInit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_DebugVoteInit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_DebugVoteInit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_DebugVoteInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_DebugVoteInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_DebugVoteNegative_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_DebugVoteNegative_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_DebugVoteNegative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "DebugVoteNegative", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_DebugVoteNegative_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_DebugVoteNegative_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_DebugVoteNegative()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_DebugVoteNegative_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_DebugVotePositive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_DebugVotePositive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_DebugVotePositive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "DebugVotePositive", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_DebugVotePositive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_DebugVotePositive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_DebugVotePositive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_DebugVotePositive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_DebugVoteRecall_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_DebugVoteRecall_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_DebugVoteRecall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "DebugVoteRecall", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_DebugVoteRecall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_DebugVoteRecall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_DebugVoteRecall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_DebugVoteRecall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_DeleteMyAccount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_DeleteMyAccount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_DeleteMyAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "DeleteMyAccount", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_DeleteMyAccount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_DeleteMyAccount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_DeleteMyAccount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_DeleteMyAccount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_DeleteProgressionSaveGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_DeleteProgressionSaveGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_DeleteProgressionSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "DeleteProgressionSaveGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_DeleteProgressionSaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_DeleteProgressionSaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_DeleteProgressionSaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_DeleteProgressionSaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_DisableTimeouts_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_DisableTimeouts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_DisableTimeouts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "DisableTimeouts", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_DisableTimeouts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_DisableTimeouts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_DisableTimeouts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_DisableTimeouts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_DisconnectPlayer_Statics
	{
		struct SBZCheatManagerBase_eventDisconnectPlayer_Parms
		{
			bool bIsLocallyDisconnected;
			bool bIsGraceful;
			int32 PlayerIndex;
		};
		static void NewProp_bIsLocallyDisconnected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocallyDisconnected;
		static void NewProp_bIsGraceful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsGraceful;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCheatManagerBase_DisconnectPlayer_Statics::NewProp_bIsLocallyDisconnected_SetBit(void* Obj)
	{
		((SBZCheatManagerBase_eventDisconnectPlayer_Parms*)Obj)->bIsLocallyDisconnected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_DisconnectPlayer_Statics::NewProp_bIsLocallyDisconnected = { "bIsLocallyDisconnected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManagerBase_eventDisconnectPlayer_Parms), &Z_Construct_UFunction_USBZCheatManagerBase_DisconnectPlayer_Statics::NewProp_bIsLocallyDisconnected_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZCheatManagerBase_DisconnectPlayer_Statics::NewProp_bIsGraceful_SetBit(void* Obj)
	{
		((SBZCheatManagerBase_eventDisconnectPlayer_Parms*)Obj)->bIsGraceful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_DisconnectPlayer_Statics::NewProp_bIsGraceful = { "bIsGraceful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManagerBase_eventDisconnectPlayer_Parms), &Z_Construct_UFunction_USBZCheatManagerBase_DisconnectPlayer_Statics::NewProp_bIsGraceful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_DisconnectPlayer_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventDisconnectPlayer_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_DisconnectPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_DisconnectPlayer_Statics::NewProp_bIsLocallyDisconnected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_DisconnectPlayer_Statics::NewProp_bIsGraceful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_DisconnectPlayer_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_DisconnectPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_DisconnectPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "DisconnectPlayer", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventDisconnectPlayer_Parms), Z_Construct_UFunction_USBZCheatManagerBase_DisconnectPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_DisconnectPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_DisconnectPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_DisconnectPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_DisconnectPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_DisconnectPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_DisconnectServer_Statics
	{
		struct SBZCheatManagerBase_eventDisconnectServer_Parms
		{
			bool bIsGraceful;
		};
		static void NewProp_bIsGraceful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsGraceful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCheatManagerBase_DisconnectServer_Statics::NewProp_bIsGraceful_SetBit(void* Obj)
	{
		((SBZCheatManagerBase_eventDisconnectServer_Parms*)Obj)->bIsGraceful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_DisconnectServer_Statics::NewProp_bIsGraceful = { "bIsGraceful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManagerBase_eventDisconnectServer_Parms), &Z_Construct_UFunction_USBZCheatManagerBase_DisconnectServer_Statics::NewProp_bIsGraceful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_DisconnectServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_DisconnectServer_Statics::NewProp_bIsGraceful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_DisconnectServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_DisconnectServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "DisconnectServer", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventDisconnectServer_Parms), Z_Construct_UFunction_USBZCheatManagerBase_DisconnectServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_DisconnectServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_DisconnectServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_DisconnectServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_DisconnectServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_DisconnectServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_DumpActiveLoadout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_DumpActiveLoadout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_DumpActiveLoadout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "DumpActiveLoadout", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_DumpActiveLoadout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_DumpActiveLoadout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_DumpActiveLoadout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_DumpActiveLoadout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_DumpAllPlayersAccelByteDisplayName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_DumpAllPlayersAccelByteDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_DumpAllPlayersAccelByteDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "DumpAllPlayersAccelByteDisplayName", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_DumpAllPlayersAccelByteDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_DumpAllPlayersAccelByteDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_DumpAllPlayersAccelByteDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_DumpAllPlayersAccelByteDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_DumpAllPlayersInfamyAndPlatform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_DumpAllPlayersInfamyAndPlatform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_DumpAllPlayersInfamyAndPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "DumpAllPlayersInfamyAndPlatform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_DumpAllPlayersInfamyAndPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_DumpAllPlayersInfamyAndPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_DumpAllPlayersInfamyAndPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_DumpAllPlayersInfamyAndPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_DumpAllPlayerStatistics_Statics
	{
		struct SBZCheatManagerBase_eventDumpAllPlayerStatistics_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_DumpAllPlayerStatistics_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventDumpAllPlayerStatistics_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_DumpAllPlayerStatistics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_DumpAllPlayerStatistics_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_DumpAllPlayerStatistics_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_DumpAllPlayerStatistics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "DumpAllPlayerStatistics", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventDumpAllPlayerStatistics_Parms), Z_Construct_UFunction_USBZCheatManagerBase_DumpAllPlayerStatistics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_DumpAllPlayerStatistics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_DumpAllPlayerStatistics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_DumpAllPlayerStatistics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_DumpAllPlayerStatistics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_DumpAllPlayerStatistics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_DumpAssetDatabase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_DumpAssetDatabase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_DumpAssetDatabase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "DumpAssetDatabase", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_DumpAssetDatabase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_DumpAssetDatabase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_DumpAssetDatabase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_DumpAssetDatabase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_DumpWeaponPresetAssets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_DumpWeaponPresetAssets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_DumpWeaponPresetAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "DumpWeaponPresetAssets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_DumpWeaponPresetAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_DumpWeaponPresetAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_DumpWeaponPresetAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_DumpWeaponPresetAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_ExecF_Statics
	{
		struct SBZCheatManagerBase_eventExecF_Parms
		{
			FString File;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_File;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_ExecF_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_ExecF_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventExecF_Parms, File), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_ExecF_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_ExecF_Statics::NewProp_File_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_ExecF_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_ExecF_Statics::NewProp_File,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_ExecF_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_ExecF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "ExecF", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventExecF_Parms), Z_Construct_UFunction_USBZCheatManagerBase_ExecF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_ExecF_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_ExecF_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_ExecF_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_ExecF()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_ExecF_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_FakeInvite_Statics
	{
		struct SBZCheatManagerBase_eventFakeInvite_Parms
		{
			FString UserId;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_FakeInvite_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_FakeInvite_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventFakeInvite_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_FakeInvite_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_FakeInvite_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_FakeInvite_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventFakeInvite_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_FakeInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_FakeInvite_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_FakeInvite_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_FakeInvite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_FakeInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "FakeInvite", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventFakeInvite_Parms), Z_Construct_UFunction_USBZCheatManagerBase_FakeInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_FakeInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_FakeInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_FakeInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_FakeInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_FakeInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_FetchAllVendorItems_Statics
	{
		struct SBZCheatManagerBase_eventFetchAllVendorItems_Parms
		{
			int32 MaxCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_FetchAllVendorItems_Statics::NewProp_MaxCount = { "MaxCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventFetchAllVendorItems_Parms, MaxCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_FetchAllVendorItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_FetchAllVendorItems_Statics::NewProp_MaxCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_FetchAllVendorItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_FetchAllVendorItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "FetchAllVendorItems", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventFetchAllVendorItems_Parms), Z_Construct_UFunction_USBZCheatManagerBase_FetchAllVendorItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_FetchAllVendorItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_FetchAllVendorItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_FetchAllVendorItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_FetchAllVendorItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_FetchAllVendorItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_LoadProgressionSaveChallenges_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_LoadProgressionSaveChallenges_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_LoadProgressionSaveChallenges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "LoadProgressionSaveChallenges", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_LoadProgressionSaveChallenges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_LoadProgressionSaveChallenges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_LoadProgressionSaveChallenges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_LoadProgressionSaveChallenges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_LoadProgressionSaveGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_LoadProgressionSaveGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_LoadProgressionSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "LoadProgressionSaveGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_LoadProgressionSaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_LoadProgressionSaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_LoadProgressionSaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_LoadProgressionSaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_OnEndPlay_Statics
	{
		struct SBZCheatManagerBase_eventOnEndPlay_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_OnEndPlay_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventOnEndPlay_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCheatManagerBase_OnEndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventOnEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_OnEndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_OnEndPlay_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_OnEndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_OnEndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_OnEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "OnEndPlay", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventOnEndPlay_Parms), Z_Construct_UFunction_USBZCheatManagerBase_OnEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_OnEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_OnEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_OnEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_OnEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_OnEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_PrintAbilitySystem_Statics
	{
		struct SBZCheatManagerBase_eventPrintAbilitySystem_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_PrintAbilitySystem_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventPrintAbilitySystem_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_PrintAbilitySystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_PrintAbilitySystem_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_PrintAbilitySystem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_PrintAbilitySystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "PrintAbilitySystem", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventPrintAbilitySystem_Parms), Z_Construct_UFunction_USBZCheatManagerBase_PrintAbilitySystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_PrintAbilitySystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_PrintAbilitySystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_PrintAbilitySystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_PrintAbilitySystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_PrintAbilitySystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_PrintAbilitySystemBothCurrent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_PrintAbilitySystemBothCurrent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_PrintAbilitySystemBothCurrent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "PrintAbilitySystemBothCurrent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_PrintAbilitySystemBothCurrent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_PrintAbilitySystemBothCurrent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_PrintAbilitySystemBothCurrent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_PrintAbilitySystemBothCurrent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_PrintError_Statics
	{
		struct SBZCheatManagerBase_eventPrintError_Parms
		{
			FString Text;
			bool bIsDecodingNeeded;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static void NewProp_bIsDecodingNeeded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDecodingNeeded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_PrintError_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_PrintError_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventPrintError_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_PrintError_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_PrintError_Statics::NewProp_Text_MetaData)) };
	void Z_Construct_UFunction_USBZCheatManagerBase_PrintError_Statics::NewProp_bIsDecodingNeeded_SetBit(void* Obj)
	{
		((SBZCheatManagerBase_eventPrintError_Parms*)Obj)->bIsDecodingNeeded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_PrintError_Statics::NewProp_bIsDecodingNeeded = { "bIsDecodingNeeded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManagerBase_eventPrintError_Parms), &Z_Construct_UFunction_USBZCheatManagerBase_PrintError_Statics::NewProp_bIsDecodingNeeded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_PrintError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_PrintError_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_PrintError_Statics::NewProp_bIsDecodingNeeded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_PrintError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_PrintError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "PrintError", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventPrintError_Parms), Z_Construct_UFunction_USBZCheatManagerBase_PrintError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_PrintError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_PrintError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_PrintError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_PrintError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_PrintError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_PrintInputEnabled_Statics
	{
		struct SBZCheatManagerBase_eventPrintInputEnabled_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_PrintInputEnabled_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventPrintInputEnabled_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_PrintInputEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_PrintInputEnabled_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_PrintInputEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_PrintInputEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "PrintInputEnabled", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventPrintInputEnabled_Parms), Z_Construct_UFunction_USBZCheatManagerBase_PrintInputEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_PrintInputEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_PrintInputEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_PrintInputEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_PrintInputEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_PrintInputEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_PrintInputEnabledBothCurrent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_PrintInputEnabledBothCurrent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_PrintInputEnabledBothCurrent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "PrintInputEnabledBothCurrent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_PrintInputEnabledBothCurrent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_PrintInputEnabledBothCurrent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_PrintInputEnabledBothCurrent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_PrintInputEnabledBothCurrent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_PrintLog_Statics
	{
		struct SBZCheatManagerBase_eventPrintLog_Parms
		{
			FString Text;
			bool bIsDecodingNeeded;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static void NewProp_bIsDecodingNeeded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDecodingNeeded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_PrintLog_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_PrintLog_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventPrintLog_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_PrintLog_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_PrintLog_Statics::NewProp_Text_MetaData)) };
	void Z_Construct_UFunction_USBZCheatManagerBase_PrintLog_Statics::NewProp_bIsDecodingNeeded_SetBit(void* Obj)
	{
		((SBZCheatManagerBase_eventPrintLog_Parms*)Obj)->bIsDecodingNeeded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_PrintLog_Statics::NewProp_bIsDecodingNeeded = { "bIsDecodingNeeded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManagerBase_eventPrintLog_Parms), &Z_Construct_UFunction_USBZCheatManagerBase_PrintLog_Statics::NewProp_bIsDecodingNeeded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_PrintLog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_PrintLog_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_PrintLog_Statics::NewProp_bIsDecodingNeeded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_PrintLog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_PrintLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "PrintLog", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventPrintLog_Parms), Z_Construct_UFunction_USBZCheatManagerBase_PrintLog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_PrintLog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_PrintLog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_PrintLog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_PrintLog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_PrintLog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_PrintSelection_Statics
	{
		struct SBZCheatManagerBase_eventPrintSelection_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_PrintSelection_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventPrintSelection_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_PrintSelection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_PrintSelection_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_PrintSelection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_PrintSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "PrintSelection", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventPrintSelection_Parms), Z_Construct_UFunction_USBZCheatManagerBase_PrintSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_PrintSelection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_PrintSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_PrintSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_PrintSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_PrintSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_PrintSelectionHierarchy_Statics
	{
		struct SBZCheatManagerBase_eventPrintSelectionHierarchy_Parms
		{
			bool bIsChildActorIncluded;
			int32 PlayerIndex;
		};
		static void NewProp_bIsChildActorIncluded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsChildActorIncluded;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCheatManagerBase_PrintSelectionHierarchy_Statics::NewProp_bIsChildActorIncluded_SetBit(void* Obj)
	{
		((SBZCheatManagerBase_eventPrintSelectionHierarchy_Parms*)Obj)->bIsChildActorIncluded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_PrintSelectionHierarchy_Statics::NewProp_bIsChildActorIncluded = { "bIsChildActorIncluded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManagerBase_eventPrintSelectionHierarchy_Parms), &Z_Construct_UFunction_USBZCheatManagerBase_PrintSelectionHierarchy_Statics::NewProp_bIsChildActorIncluded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_PrintSelectionHierarchy_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventPrintSelectionHierarchy_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_PrintSelectionHierarchy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_PrintSelectionHierarchy_Statics::NewProp_bIsChildActorIncluded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_PrintSelectionHierarchy_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_PrintSelectionHierarchy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_PrintSelectionHierarchy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "PrintSelectionHierarchy", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventPrintSelectionHierarchy_Parms), Z_Construct_UFunction_USBZCheatManagerBase_PrintSelectionHierarchy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_PrintSelectionHierarchy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_PrintSelectionHierarchy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_PrintSelectionHierarchy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_PrintSelectionHierarchy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_PrintSelectionHierarchy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_PrintStuckInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_PrintStuckInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_PrintStuckInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "PrintStuckInfo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_PrintStuckInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_PrintStuckInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_PrintStuckInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_PrintStuckInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_PrintTargetAbilitySystem_Statics
	{
		struct SBZCheatManagerBase_eventPrintTargetAbilitySystem_Parms
		{
			bool bIsLocallyControlledOnly;
			int32 PlayerIndex;
		};
		static void NewProp_bIsLocallyControlledOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocallyControlledOnly;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCheatManagerBase_PrintTargetAbilitySystem_Statics::NewProp_bIsLocallyControlledOnly_SetBit(void* Obj)
	{
		((SBZCheatManagerBase_eventPrintTargetAbilitySystem_Parms*)Obj)->bIsLocallyControlledOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_PrintTargetAbilitySystem_Statics::NewProp_bIsLocallyControlledOnly = { "bIsLocallyControlledOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManagerBase_eventPrintTargetAbilitySystem_Parms), &Z_Construct_UFunction_USBZCheatManagerBase_PrintTargetAbilitySystem_Statics::NewProp_bIsLocallyControlledOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_PrintTargetAbilitySystem_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventPrintTargetAbilitySystem_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_PrintTargetAbilitySystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_PrintTargetAbilitySystem_Statics::NewProp_bIsLocallyControlledOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_PrintTargetAbilitySystem_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_PrintTargetAbilitySystem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_PrintTargetAbilitySystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "PrintTargetAbilitySystem", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventPrintTargetAbilitySystem_Parms), Z_Construct_UFunction_USBZCheatManagerBase_PrintTargetAbilitySystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_PrintTargetAbilitySystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_PrintTargetAbilitySystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_PrintTargetAbilitySystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_PrintTargetAbilitySystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_PrintTargetAbilitySystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_PrintVersion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_PrintVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_PrintVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "PrintVersion", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_PrintVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_PrintVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_PrintVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_PrintVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_PrintWarning_Statics
	{
		struct SBZCheatManagerBase_eventPrintWarning_Parms
		{
			FString Text;
			bool bIsDecodingNeeded;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static void NewProp_bIsDecodingNeeded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDecodingNeeded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_PrintWarning_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_PrintWarning_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventPrintWarning_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_PrintWarning_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_PrintWarning_Statics::NewProp_Text_MetaData)) };
	void Z_Construct_UFunction_USBZCheatManagerBase_PrintWarning_Statics::NewProp_bIsDecodingNeeded_SetBit(void* Obj)
	{
		((SBZCheatManagerBase_eventPrintWarning_Parms*)Obj)->bIsDecodingNeeded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_PrintWarning_Statics::NewProp_bIsDecodingNeeded = { "bIsDecodingNeeded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManagerBase_eventPrintWarning_Parms), &Z_Construct_UFunction_USBZCheatManagerBase_PrintWarning_Statics::NewProp_bIsDecodingNeeded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_PrintWarning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_PrintWarning_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_PrintWarning_Statics::NewProp_bIsDecodingNeeded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_PrintWarning_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_PrintWarning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "PrintWarning", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventPrintWarning_Parms), Z_Construct_UFunction_USBZCheatManagerBase_PrintWarning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_PrintWarning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_PrintWarning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_PrintWarning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_PrintWarning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_PrintWarning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_RemoveCurrency_Statics
	{
		struct SBZCheatManagerBase_eventRemoveCurrency_Parms
		{
			ESBZCurrencyCode Type;
			int32 Amount;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCheatManagerBase_RemoveCurrency_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_RemoveCurrency_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventRemoveCurrency_Parms, Type), Z_Construct_UEnum_Starbreeze_ESBZCurrencyCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_RemoveCurrency_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventRemoveCurrency_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_RemoveCurrency_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventRemoveCurrency_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_RemoveCurrency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_RemoveCurrency_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_RemoveCurrency_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_RemoveCurrency_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_RemoveCurrency_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_RemoveCurrency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_RemoveCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "RemoveCurrency", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventRemoveCurrency_Parms), Z_Construct_UFunction_USBZCheatManagerBase_RemoveCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_RemoveCurrency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_RemoveCurrency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_RemoveCurrency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_RemoveCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_RemoveCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_RequestGameError_Statics
	{
		struct SBZCheatManagerBase_eventRequestGameError_Parms
		{
			ESBZGameMachineStateError State;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCheatManagerBase_RequestGameError_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_RequestGameError_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventRequestGameError_Parms, State), Z_Construct_UEnum_Starbreeze_ESBZGameMachineStateError, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_RequestGameError_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventRequestGameError_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_RequestGameError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_RequestGameError_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_RequestGameError_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_RequestGameError_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_RequestGameError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_RequestGameError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "RequestGameError", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventRequestGameError_Parms), Z_Construct_UFunction_USBZCheatManagerBase_RequestGameError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_RequestGameError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_RequestGameError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_RequestGameError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_RequestGameError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_RequestGameError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_RequestSwitchUser_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_RequestSwitchUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_RequestSwitchUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "RequestSwitchUser", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_RequestSwitchUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_RequestSwitchUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_RequestSwitchUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_RequestSwitchUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_ResetMyAccount_Statics
	{
		struct SBZCheatManagerBase_eventResetMyAccount_Parms
		{
			FString Password;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_ResetMyAccount_Statics::NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_ResetMyAccount_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventResetMyAccount_Parms, Password), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_ResetMyAccount_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_ResetMyAccount_Statics::NewProp_Password_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_ResetMyAccount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_ResetMyAccount_Statics::NewProp_Password,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_ResetMyAccount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_ResetMyAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "ResetMyAccount", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventResetMyAccount_Parms), Z_Construct_UFunction_USBZCheatManagerBase_ResetMyAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_ResetMyAccount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_ResetMyAccount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_ResetMyAccount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_ResetMyAccount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_ResetMyAccount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_ResetProgressionSaveGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_ResetProgressionSaveGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_ResetProgressionSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "ResetProgressionSaveGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_ResetProgressionSaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_ResetProgressionSaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_ResetProgressionSaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_ResetProgressionSaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_ResetSettingsSaveGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_ResetSettingsSaveGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_ResetSettingsSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "ResetSettingsSaveGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_ResetSettingsSaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_ResetSettingsSaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_ResetSettingsSaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_ResetSettingsSaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_SaveProgressionSaveGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SaveProgressionSaveGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_SaveProgressionSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "SaveProgressionSaveGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SaveProgressionSaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SaveProgressionSaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_SaveProgressionSaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_SaveProgressionSaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_SelectActorClass_Statics
	{
		struct SBZCheatManagerBase_eventSelectActorClass_Parms
		{
			FName ClassName;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClassName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SelectActorClass_Statics::NewProp_ClassName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SelectActorClass_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSelectActorClass_Parms, ClassName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SelectActorClass_Statics::NewProp_ClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SelectActorClass_Statics::NewProp_ClassName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SelectActorClass_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSelectActorClass_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_SelectActorClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SelectActorClass_Statics::NewProp_ClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SelectActorClass_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SelectActorClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_SelectActorClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "SelectActorClass", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventSelectActorClass_Parms), Z_Construct_UFunction_USBZCheatManagerBase_SelectActorClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SelectActorClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SelectActorClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SelectActorClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_SelectActorClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_SelectActorClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_SelectActorName_Statics
	{
		struct SBZCheatManagerBase_eventSelectActorName_Parms
		{
			FName Name;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SelectActorName_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SelectActorName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSelectActorName_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SelectActorName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SelectActorName_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SelectActorName_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSelectActorName_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_SelectActorName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SelectActorName_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SelectActorName_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SelectActorName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_SelectActorName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "SelectActorName", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventSelectActorName_Parms), Z_Construct_UFunction_USBZCheatManagerBase_SelectActorName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SelectActorName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SelectActorName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SelectActorName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_SelectActorName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_SelectActorName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_SelectChild_Statics
	{
		struct SBZCheatManagerBase_eventSelectChild_Parms
		{
			int32 Index;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SelectChild_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSelectChild_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SelectChild_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSelectChild_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_SelectChild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SelectChild_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SelectChild_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SelectChild_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_SelectChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "SelectChild", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventSelectChild_Parms), Z_Construct_UFunction_USBZCheatManagerBase_SelectChild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SelectChild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SelectChild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SelectChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_SelectChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_SelectChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentClass_Statics
	{
		struct SBZCheatManagerBase_eventSelectComponentClass_Parms
		{
			FName ClassName;
			int32 DepthStencil;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClassName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DepthStencil;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentClass_Statics::NewProp_ClassName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentClass_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSelectComponentClass_Parms, ClassName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentClass_Statics::NewProp_ClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentClass_Statics::NewProp_ClassName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentClass_Statics::NewProp_DepthStencil = { "DepthStencil", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSelectComponentClass_Parms, DepthStencil), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentClass_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSelectComponentClass_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentClass_Statics::NewProp_ClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentClass_Statics::NewProp_DepthStencil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentClass_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "SelectComponentClass", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventSelectComponentClass_Parms), Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentIndex_Statics
	{
		struct SBZCheatManagerBase_eventSelectComponentIndex_Parms
		{
			int32 Index;
			int32 DepthStencil;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DepthStencil;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSelectComponentIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentIndex_Statics::NewProp_DepthStencil = { "DepthStencil", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSelectComponentIndex_Parms, DepthStencil), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentIndex_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSelectComponentIndex_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentIndex_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentIndex_Statics::NewProp_DepthStencil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentIndex_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "SelectComponentIndex", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventSelectComponentIndex_Parms), Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentName_Statics
	{
		struct SBZCheatManagerBase_eventSelectComponentName_Parms
		{
			FName Name;
			int32 DepthStencil;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DepthStencil;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentName_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSelectComponentName_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentName_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentName_Statics::NewProp_DepthStencil = { "DepthStencil", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSelectComponentName_Parms, DepthStencil), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentName_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSelectComponentName_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentName_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentName_Statics::NewProp_DepthStencil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentName_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "SelectComponentName", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventSelectComponentName_Parms), Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_SelectLast_Statics
	{
		struct SBZCheatManagerBase_eventSelectLast_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SelectLast_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSelectLast_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_SelectLast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SelectLast_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SelectLast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_SelectLast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "SelectLast", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventSelectLast_Parms), Z_Construct_UFunction_USBZCheatManagerBase_SelectLast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SelectLast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SelectLast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SelectLast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_SelectLast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_SelectLast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_SelectParentActor_Statics
	{
		struct SBZCheatManagerBase_eventSelectParentActor_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SelectParentActor_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSelectParentActor_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_SelectParentActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SelectParentActor_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SelectParentActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_SelectParentActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "SelectParentActor", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventSelectParentActor_Parms), Z_Construct_UFunction_USBZCheatManagerBase_SelectParentActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SelectParentActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SelectParentActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SelectParentActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_SelectParentActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_SelectParentActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_SelectParentSocket_Statics
	{
		struct SBZCheatManagerBase_eventSelectParentSocket_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SelectParentSocket_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSelectParentSocket_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_SelectParentSocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SelectParentSocket_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SelectParentSocket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_SelectParentSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "SelectParentSocket", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventSelectParentSocket_Parms), Z_Construct_UFunction_USBZCheatManagerBase_SelectParentSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SelectParentSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SelectParentSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SelectParentSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_SelectParentSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_SelectParentSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_SelectSocketIndex_Statics
	{
		struct SBZCheatManagerBase_eventSelectSocketIndex_Parms
		{
			int32 Index;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SelectSocketIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSelectSocketIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SelectSocketIndex_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSelectSocketIndex_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_SelectSocketIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SelectSocketIndex_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SelectSocketIndex_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SelectSocketIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_SelectSocketIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "SelectSocketIndex", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventSelectSocketIndex_Parms), Z_Construct_UFunction_USBZCheatManagerBase_SelectSocketIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SelectSocketIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SelectSocketIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SelectSocketIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_SelectSocketIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_SelectSocketIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_SelectSocketName_Statics
	{
		struct SBZCheatManagerBase_eventSelectSocketName_Parms
		{
			FName Name;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SelectSocketName_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SelectSocketName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSelectSocketName_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SelectSocketName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SelectSocketName_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SelectSocketName_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSelectSocketName_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_SelectSocketName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SelectSocketName_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SelectSocketName_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SelectSocketName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_SelectSocketName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "SelectSocketName", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventSelectSocketName_Parms), Z_Construct_UFunction_USBZCheatManagerBase_SelectSocketName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SelectSocketName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SelectSocketName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SelectSocketName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_SelectSocketName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_SelectSocketName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_SelectTarget_Statics
	{
		struct SBZCheatManagerBase_eventSelectTarget_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SelectTarget_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSelectTarget_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_SelectTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SelectTarget_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SelectTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_SelectTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "SelectTarget", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventSelectTarget_Parms), Z_Construct_UFunction_USBZCheatManagerBase_SelectTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SelectTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SelectTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SelectTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_SelectTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_SelectTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_ServerCommand_Statics
	{
		struct SBZCheatManagerBase_eventServerCommand_Parms
		{
			FString Command;
			bool bIsExecutedOnAll;
			bool bIsLocallyControlledOnly;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Command;
		static void NewProp_bIsExecutedOnAll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsExecutedOnAll;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_ServerCommand_Statics::NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_ServerCommand_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventServerCommand_Parms, Command), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_ServerCommand_Statics::NewProp_Command_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_ServerCommand_Statics::NewProp_Command_MetaData)) };
	void Z_Construct_UFunction_USBZCheatManagerBase_ServerCommand_Statics::NewProp_bIsExecutedOnAll_SetBit(void* Obj)
	{
		((SBZCheatManagerBase_eventServerCommand_Parms*)Obj)->bIsExecutedOnAll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_ServerCommand_Statics::NewProp_bIsExecutedOnAll = { "bIsExecutedOnAll", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManagerBase_eventServerCommand_Parms), &Z_Construct_UFunction_USBZCheatManagerBase_ServerCommand_Statics::NewProp_bIsExecutedOnAll_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZCheatManagerBase_ServerCommand_Statics::NewProp_bIsLocallyControlledOnly_SetBit(void* Obj)
	{
		((SBZCheatManagerBase_eventServerCommand_Parms*)Obj)->bIsLocallyControlledOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_ServerCommand_Statics::NewProp_bIsLocallyControlledOnly = { "bIsLocallyControlledOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManagerBase_eventServerCommand_Parms), &Z_Construct_UFunction_USBZCheatManagerBase_ServerCommand_Statics::NewProp_bIsLocallyControlledOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_ServerCommand_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventServerCommand_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_ServerCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_ServerCommand_Statics::NewProp_Command,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_ServerCommand_Statics::NewProp_bIsExecutedOnAll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_ServerCommand_Statics::NewProp_bIsLocallyControlledOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_ServerCommand_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_ServerCommand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_ServerCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "ServerCommand", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventServerCommand_Parms), Z_Construct_UFunction_USBZCheatManagerBase_ServerCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_ServerCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_ServerCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_ServerCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_ServerCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_ServerCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_SetAudioRTPCValue_Statics
	{
		struct SBZCheatManagerBase_eventSetAudioRTPCValue_Parms
		{
			FName Name;
			float Value;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SetAudioRTPCValue_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SetAudioRTPCValue_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSetAudioRTPCValue_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SetAudioRTPCValue_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SetAudioRTPCValue_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SetAudioRTPCValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSetAudioRTPCValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SetAudioRTPCValue_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSetAudioRTPCValue_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_SetAudioRTPCValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SetAudioRTPCValue_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SetAudioRTPCValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SetAudioRTPCValue_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SetAudioRTPCValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_SetAudioRTPCValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "SetAudioRTPCValue", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventSetAudioRTPCValue_Parms), Z_Construct_UFunction_USBZCheatManagerBase_SetAudioRTPCValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SetAudioRTPCValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SetAudioRTPCValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SetAudioRTPCValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_SetAudioRTPCValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_SetAudioRTPCValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_SetCameraMode_Statics
	{
		struct SBZCheatManagerBase_eventSetCameraMode_Parms
		{
			FName CameraMode;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CameraMode;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SetCameraMode_Statics::NewProp_CameraMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SetCameraMode_Statics::NewProp_CameraMode = { "CameraMode", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSetCameraMode_Parms, CameraMode), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SetCameraMode_Statics::NewProp_CameraMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SetCameraMode_Statics::NewProp_CameraMode_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SetCameraMode_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSetCameraMode_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_SetCameraMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SetCameraMode_Statics::NewProp_CameraMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SetCameraMode_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SetCameraMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_SetCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "SetCameraMode", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventSetCameraMode_Parms), Z_Construct_UFunction_USBZCheatManagerBase_SetCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SetCameraMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SetCameraMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SetCameraMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_SetCameraMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_SetCameraMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_SetCulture_Statics
	{
		struct SBZCheatManagerBase_eventSetCulture_Parms
		{
			FString Name;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SetCulture_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SetCulture_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSetCulture_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SetCulture_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SetCulture_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_SetCulture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SetCulture_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SetCulture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_SetCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "SetCulture", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventSetCulture_Parms), Z_Construct_UFunction_USBZCheatManagerBase_SetCulture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SetCulture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SetCulture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SetCulture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_SetCulture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_SetCulture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_SetCurrency_Statics
	{
		struct SBZCheatManagerBase_eventSetCurrency_Parms
		{
			ESBZCurrencyCode Type;
			int32 Amount;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SetCurrency_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SetCurrency_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSetCurrency_Parms, Type), Z_Construct_UEnum_Starbreeze_ESBZCurrencyCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SetCurrency_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSetCurrency_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SetCurrency_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSetCurrency_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_SetCurrency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SetCurrency_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SetCurrency_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SetCurrency_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SetCurrency_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SetCurrency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_SetCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "SetCurrency", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventSetCurrency_Parms), Z_Construct_UFunction_USBZCheatManagerBase_SetCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SetCurrency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SetCurrency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SetCurrency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_SetCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_SetCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_SetDebugEarnedExperiencePoints_Statics
	{
		struct SBZCheatManagerBase_eventSetDebugEarnedExperiencePoints_Parms
		{
			int32 EarnedExperiencePoints;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EarnedExperiencePoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SetDebugEarnedExperiencePoints_Statics::NewProp_EarnedExperiencePoints = { "EarnedExperiencePoints", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSetDebugEarnedExperiencePoints_Parms, EarnedExperiencePoints), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_SetDebugEarnedExperiencePoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SetDebugEarnedExperiencePoints_Statics::NewProp_EarnedExperiencePoints,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SetDebugEarnedExperiencePoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_SetDebugEarnedExperiencePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "SetDebugEarnedExperiencePoints", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventSetDebugEarnedExperiencePoints_Parms), Z_Construct_UFunction_USBZCheatManagerBase_SetDebugEarnedExperiencePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SetDebugEarnedExperiencePoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SetDebugEarnedExperiencePoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SetDebugEarnedExperiencePoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_SetDebugEarnedExperiencePoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_SetDebugEarnedExperiencePoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyExperience_Statics
	{
		struct SBZCheatManagerBase_eventSetInfamyExperience_Parms
		{
			int32 Amount;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyExperience_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSetInfamyExperience_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyExperience_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSetInfamyExperience_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyExperience_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyExperience_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyExperience_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyExperience_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyExperience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "SetInfamyExperience", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventSetInfamyExperience_Parms), Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyExperience_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyExperience_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyExperience_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyExperience_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyExperience()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyExperience_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyLevel_Statics
	{
		struct SBZCheatManagerBase_eventSetInfamyLevel_Parms
		{
			int32 Amount;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyLevel_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSetInfamyLevel_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyLevel_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSetInfamyLevel_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyLevel_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyLevel_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "SetInfamyLevel", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventSetInfamyLevel_Parms), Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyLevelExperience_Statics
	{
		struct SBZCheatManagerBase_eventSetInfamyLevelExperience_Parms
		{
			int32 Level;
			int32 Experience;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Experience;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyLevelExperience_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSetInfamyLevelExperience_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyLevelExperience_Statics::NewProp_Experience = { "Experience", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSetInfamyLevelExperience_Parms, Experience), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyLevelExperience_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyLevelExperience_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyLevelExperience_Statics::NewProp_Experience,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyLevelExperience_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyLevelExperience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "SetInfamyLevelExperience", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventSetInfamyLevelExperience_Parms), Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyLevelExperience_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyLevelExperience_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyLevelExperience_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyLevelExperience_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyLevelExperience()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyLevelExperience_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_SetInputTypeOverride_Statics
	{
		struct SBZCheatManagerBase_eventSetInputTypeOverride_Parms
		{
			int32 Override;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Override;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SetInputTypeOverride_Statics::NewProp_Override = { "Override", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSetInputTypeOverride_Parms, Override), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_SetInputTypeOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SetInputTypeOverride_Statics::NewProp_Override,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SetInputTypeOverride_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_SetInputTypeOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "SetInputTypeOverride", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventSetInputTypeOverride_Parms), Z_Construct_UFunction_USBZCheatManagerBase_SetInputTypeOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SetInputTypeOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SetInputTypeOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SetInputTypeOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_SetInputTypeOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_SetInputTypeOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_SetListenerEnabled_Statics
	{
		struct SBZCheatManagerBase_eventSetListenerEnabled_Parms
		{
			bool bIsEnabled;
		};
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCheatManagerBase_SetListenerEnabled_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((SBZCheatManagerBase_eventSetListenerEnabled_Parms*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SetListenerEnabled_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManagerBase_eventSetListenerEnabled_Parms), &Z_Construct_UFunction_USBZCheatManagerBase_SetListenerEnabled_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_SetListenerEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SetListenerEnabled_Statics::NewProp_bIsEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SetListenerEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_SetListenerEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "SetListenerEnabled", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventSetListenerEnabled_Parms), Z_Construct_UFunction_USBZCheatManagerBase_SetListenerEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SetListenerEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SetListenerEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SetListenerEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_SetListenerEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_SetListenerEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_SetNetEmulationType_Statics
	{
		struct SBZCheatManagerBase_eventSetNetEmulationType_Parms
		{
			ESBZDebugNetEmulationType Type;
			ESBZDebugNetEmulationTarget Target;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Target_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SetNetEmulationType_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SetNetEmulationType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSetNetEmulationType_Parms, Type), Z_Construct_UEnum_Starbreeze_ESBZDebugNetEmulationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SetNetEmulationType_Statics::NewProp_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SetNetEmulationType_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSetNetEmulationType_Parms, Target), Z_Construct_UEnum_Starbreeze_ESBZDebugNetEmulationTarget, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_SetNetEmulationType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SetNetEmulationType_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SetNetEmulationType_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SetNetEmulationType_Statics::NewProp_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SetNetEmulationType_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SetNetEmulationType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_SetNetEmulationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "SetNetEmulationType", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventSetNetEmulationType_Parms), Z_Construct_UFunction_USBZCheatManagerBase_SetNetEmulationType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SetNetEmulationType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SetNetEmulationType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SetNetEmulationType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_SetNetEmulationType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_SetNetEmulationType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_SetPaused_Statics
	{
		struct SBZCheatManagerBase_eventSetPaused_Parms
		{
			bool bIsPaused;
		};
		static void NewProp_bIsPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPaused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCheatManagerBase_SetPaused_Statics::NewProp_bIsPaused_SetBit(void* Obj)
	{
		((SBZCheatManagerBase_eventSetPaused_Parms*)Obj)->bIsPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SetPaused_Statics::NewProp_bIsPaused = { "bIsPaused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManagerBase_eventSetPaused_Parms), &Z_Construct_UFunction_USBZCheatManagerBase_SetPaused_Statics::NewProp_bIsPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_SetPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SetPaused_Statics::NewProp_bIsPaused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SetPaused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_SetPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "SetPaused", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventSetPaused_Parms), Z_Construct_UFunction_USBZCheatManagerBase_SetPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SetPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SetPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SetPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_SetPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_SetPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_SetPreMatchInfamyExperience_Statics
	{
		struct SBZCheatManagerBase_eventSetPreMatchInfamyExperience_Parms
		{
			int32 Experience;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Experience;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SetPreMatchInfamyExperience_Statics::NewProp_Experience = { "Experience", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSetPreMatchInfamyExperience_Parms, Experience), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_SetPreMatchInfamyExperience_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventSetPreMatchInfamyExperience_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_SetPreMatchInfamyExperience_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SetPreMatchInfamyExperience_Statics::NewProp_Experience,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_SetPreMatchInfamyExperience_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SetPreMatchInfamyExperience_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_SetPreMatchInfamyExperience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "SetPreMatchInfamyExperience", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventSetPreMatchInfamyExperience_Parms), Z_Construct_UFunction_USBZCheatManagerBase_SetPreMatchInfamyExperience_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SetPreMatchInfamyExperience_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SetPreMatchInfamyExperience_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SetPreMatchInfamyExperience_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_SetPreMatchInfamyExperience()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_SetPreMatchInfamyExperience_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_SimulateLobbyCloseConnection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SimulateLobbyCloseConnection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_SimulateLobbyCloseConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "SimulateLobbyCloseConnection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SimulateLobbyCloseConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SimulateLobbyCloseConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_SimulateLobbyCloseConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_SimulateLobbyCloseConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_SimulateLobbyConnectSuccess_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_SimulateLobbyConnectSuccess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_SimulateLobbyConnectSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "SimulateLobbyConnectSuccess", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_SimulateLobbyConnectSuccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_SimulateLobbyConnectSuccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_SimulateLobbyConnectSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_SimulateLobbyConnectSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_ToggleCVar_Statics
	{
		struct SBZCheatManagerBase_eventToggleCVar_Parms
		{
			FString CVar;
			int32 First;
			int32 Second;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CVar_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CVar;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_First;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Second;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_ToggleCVar_Statics::NewProp_CVar_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_ToggleCVar_Statics::NewProp_CVar = { "CVar", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventToggleCVar_Parms, CVar), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_ToggleCVar_Statics::NewProp_CVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_ToggleCVar_Statics::NewProp_CVar_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_ToggleCVar_Statics::NewProp_First = { "First", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventToggleCVar_Parms, First), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_ToggleCVar_Statics::NewProp_Second = { "Second", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventToggleCVar_Parms, Second), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_ToggleCVar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_ToggleCVar_Statics::NewProp_CVar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_ToggleCVar_Statics::NewProp_First,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_ToggleCVar_Statics::NewProp_Second,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_ToggleCVar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_ToggleCVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "ToggleCVar", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventToggleCVar_Parms), Z_Construct_UFunction_USBZCheatManagerBase_ToggleCVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_ToggleCVar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_ToggleCVar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_ToggleCVar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_ToggleCVar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_ToggleCVar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_ToggleDrawDebugSpread_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_ToggleDrawDebugSpread_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_ToggleDrawDebugSpread_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "ToggleDrawDebugSpread", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_ToggleDrawDebugSpread_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_ToggleDrawDebugSpread_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_ToggleDrawDebugSpread()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_ToggleDrawDebugSpread_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_ToggleInGameCheatMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_ToggleInGameCheatMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_ToggleInGameCheatMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "ToggleInGameCheatMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_ToggleInGameCheatMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_ToggleInGameCheatMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_ToggleInGameCheatMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_ToggleInGameCheatMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_ToggleMuteMusic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_ToggleMuteMusic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_ToggleMuteMusic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "ToggleMuteMusic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_ToggleMuteMusic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_ToggleMuteMusic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_ToggleMuteMusic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_ToggleMuteMusic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_Unselect_Statics
	{
		struct SBZCheatManagerBase_eventUnselect_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_Unselect_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventUnselect_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_Unselect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_Unselect_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_Unselect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_Unselect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "Unselect", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventUnselect_Parms), Z_Construct_UFunction_USBZCheatManagerBase_Unselect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_Unselect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_Unselect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_Unselect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_Unselect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_Unselect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_UnselectComponent_Statics
	{
		struct SBZCheatManagerBase_eventUnselectComponent_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_UnselectComponent_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventUnselectComponent_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_UnselectComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_UnselectComponent_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_UnselectComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_UnselectComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "UnselectComponent", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventUnselectComponent_Parms), Z_Construct_UFunction_USBZCheatManagerBase_UnselectComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_UnselectComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_UnselectComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_UnselectComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_UnselectComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_UnselectComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_UnselectSocket_Statics
	{
		struct SBZCheatManagerBase_eventUnselectSocket_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_UnselectSocket_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventUnselectSocket_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_UnselectSocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_UnselectSocket_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_UnselectSocket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_UnselectSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "UnselectSocket", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventUnselectSocket_Parms), Z_Construct_UFunction_USBZCheatManagerBase_UnselectSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_UnselectSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_UnselectSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_UnselectSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_UnselectSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_UnselectSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_VoteKickPlayer_Statics
	{
		struct SBZCheatManagerBase_eventVoteKickPlayer_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManagerBase_VoteKickPlayer_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManagerBase_eventVoteKickPlayer_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManagerBase_VoteKickPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManagerBase_VoteKickPlayer_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_VoteKickPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_VoteKickPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "VoteKickPlayer", nullptr, nullptr, sizeof(SBZCheatManagerBase_eventVoteKickPlayer_Parms), Z_Construct_UFunction_USBZCheatManagerBase_VoteKickPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_VoteKickPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_VoteKickPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_VoteKickPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_VoteKickPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_VoteKickPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManagerBase_VoteRestartLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManagerBase_VoteRestartLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManagerBase_VoteRestartLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManagerBase, nullptr, "VoteRestartLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManagerBase_VoteRestartLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManagerBase_VoteRestartLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManagerBase_VoteRestartLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManagerBase_VoteRestartLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZCheatManagerBase_NoRegister()
	{
		return USBZCheatManagerBase::StaticClass();
	}
	struct Z_Construct_UClass_USBZCheatManagerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Selection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Selection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSelection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastSelection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelByteAdminHelper_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AccelByteAdminHelper;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectedEmulationType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedEmulationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SelectedEmulationType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCheatManagerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCheatManager,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZCheatManagerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZCheatManagerBase_AddCurrency, "AddCurrency" }, // 751550794
		{ &Z_Construct_UFunction_USBZCheatManagerBase_ChangeStatCode, "ChangeStatCode" }, // 1530845961
		{ &Z_Construct_UFunction_USBZCheatManagerBase_ClearFriends, "ClearFriends" }, // 2036583199
		{ &Z_Construct_UFunction_USBZCheatManagerBase_CompleteChallenge, "CompleteChallenge" }, // 2565807990
		{ &Z_Construct_UFunction_USBZCheatManagerBase_DebugChallengeRecords, "DebugChallengeRecords" }, // 86781594
		{ &Z_Construct_UFunction_USBZCheatManagerBase_DebugIncrementPlayerStat, "DebugIncrementPlayerStat" }, // 828377791
		{ &Z_Construct_UFunction_USBZCheatManagerBase_DebugVoteInit, "DebugVoteInit" }, // 1346640996
		{ &Z_Construct_UFunction_USBZCheatManagerBase_DebugVoteNegative, "DebugVoteNegative" }, // 1190580419
		{ &Z_Construct_UFunction_USBZCheatManagerBase_DebugVotePositive, "DebugVotePositive" }, // 3235950928
		{ &Z_Construct_UFunction_USBZCheatManagerBase_DebugVoteRecall, "DebugVoteRecall" }, // 1836156191
		{ &Z_Construct_UFunction_USBZCheatManagerBase_DeleteMyAccount, "DeleteMyAccount" }, // 629319686
		{ &Z_Construct_UFunction_USBZCheatManagerBase_DeleteProgressionSaveGame, "DeleteProgressionSaveGame" }, // 3341071864
		{ &Z_Construct_UFunction_USBZCheatManagerBase_DisableTimeouts, "DisableTimeouts" }, // 2615739990
		{ &Z_Construct_UFunction_USBZCheatManagerBase_DisconnectPlayer, "DisconnectPlayer" }, // 1339168784
		{ &Z_Construct_UFunction_USBZCheatManagerBase_DisconnectServer, "DisconnectServer" }, // 3526397068
		{ &Z_Construct_UFunction_USBZCheatManagerBase_DumpActiveLoadout, "DumpActiveLoadout" }, // 411199432
		{ &Z_Construct_UFunction_USBZCheatManagerBase_DumpAllPlayersAccelByteDisplayName, "DumpAllPlayersAccelByteDisplayName" }, // 2636524570
		{ &Z_Construct_UFunction_USBZCheatManagerBase_DumpAllPlayersInfamyAndPlatform, "DumpAllPlayersInfamyAndPlatform" }, // 3864230639
		{ &Z_Construct_UFunction_USBZCheatManagerBase_DumpAllPlayerStatistics, "DumpAllPlayerStatistics" }, // 3376754450
		{ &Z_Construct_UFunction_USBZCheatManagerBase_DumpAssetDatabase, "DumpAssetDatabase" }, // 1182276084
		{ &Z_Construct_UFunction_USBZCheatManagerBase_DumpWeaponPresetAssets, "DumpWeaponPresetAssets" }, // 1441171835
		{ &Z_Construct_UFunction_USBZCheatManagerBase_ExecF, "ExecF" }, // 4280984381
		{ &Z_Construct_UFunction_USBZCheatManagerBase_FakeInvite, "FakeInvite" }, // 3064364788
		{ &Z_Construct_UFunction_USBZCheatManagerBase_FetchAllVendorItems, "FetchAllVendorItems" }, // 2779597615
		{ &Z_Construct_UFunction_USBZCheatManagerBase_LoadProgressionSaveChallenges, "LoadProgressionSaveChallenges" }, // 3020119960
		{ &Z_Construct_UFunction_USBZCheatManagerBase_LoadProgressionSaveGame, "LoadProgressionSaveGame" }, // 1232098264
		{ &Z_Construct_UFunction_USBZCheatManagerBase_OnEndPlay, "OnEndPlay" }, // 783926237
		{ &Z_Construct_UFunction_USBZCheatManagerBase_PrintAbilitySystem, "PrintAbilitySystem" }, // 3922230634
		{ &Z_Construct_UFunction_USBZCheatManagerBase_PrintAbilitySystemBothCurrent, "PrintAbilitySystemBothCurrent" }, // 1221819034
		{ &Z_Construct_UFunction_USBZCheatManagerBase_PrintError, "PrintError" }, // 2721629192
		{ &Z_Construct_UFunction_USBZCheatManagerBase_PrintInputEnabled, "PrintInputEnabled" }, // 4056665049
		{ &Z_Construct_UFunction_USBZCheatManagerBase_PrintInputEnabledBothCurrent, "PrintInputEnabledBothCurrent" }, // 1920689588
		{ &Z_Construct_UFunction_USBZCheatManagerBase_PrintLog, "PrintLog" }, // 261160008
		{ &Z_Construct_UFunction_USBZCheatManagerBase_PrintSelection, "PrintSelection" }, // 1377992011
		{ &Z_Construct_UFunction_USBZCheatManagerBase_PrintSelectionHierarchy, "PrintSelectionHierarchy" }, // 557455839
		{ &Z_Construct_UFunction_USBZCheatManagerBase_PrintStuckInfo, "PrintStuckInfo" }, // 2164006020
		{ &Z_Construct_UFunction_USBZCheatManagerBase_PrintTargetAbilitySystem, "PrintTargetAbilitySystem" }, // 4164680980
		{ &Z_Construct_UFunction_USBZCheatManagerBase_PrintVersion, "PrintVersion" }, // 460571171
		{ &Z_Construct_UFunction_USBZCheatManagerBase_PrintWarning, "PrintWarning" }, // 4091892790
		{ &Z_Construct_UFunction_USBZCheatManagerBase_RemoveCurrency, "RemoveCurrency" }, // 3900931467
		{ &Z_Construct_UFunction_USBZCheatManagerBase_RequestGameError, "RequestGameError" }, // 3216444238
		{ &Z_Construct_UFunction_USBZCheatManagerBase_RequestSwitchUser, "RequestSwitchUser" }, // 3576085518
		{ &Z_Construct_UFunction_USBZCheatManagerBase_ResetMyAccount, "ResetMyAccount" }, // 201629644
		{ &Z_Construct_UFunction_USBZCheatManagerBase_ResetProgressionSaveGame, "ResetProgressionSaveGame" }, // 3370174692
		{ &Z_Construct_UFunction_USBZCheatManagerBase_ResetSettingsSaveGame, "ResetSettingsSaveGame" }, // 509763522
		{ &Z_Construct_UFunction_USBZCheatManagerBase_SaveProgressionSaveGame, "SaveProgressionSaveGame" }, // 4173116609
		{ &Z_Construct_UFunction_USBZCheatManagerBase_SelectActorClass, "SelectActorClass" }, // 842362540
		{ &Z_Construct_UFunction_USBZCheatManagerBase_SelectActorName, "SelectActorName" }, // 3944649186
		{ &Z_Construct_UFunction_USBZCheatManagerBase_SelectChild, "SelectChild" }, // 3816985619
		{ &Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentClass, "SelectComponentClass" }, // 38950996
		{ &Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentIndex, "SelectComponentIndex" }, // 2628050037
		{ &Z_Construct_UFunction_USBZCheatManagerBase_SelectComponentName, "SelectComponentName" }, // 4172756343
		{ &Z_Construct_UFunction_USBZCheatManagerBase_SelectLast, "SelectLast" }, // 2129060525
		{ &Z_Construct_UFunction_USBZCheatManagerBase_SelectParentActor, "SelectParentActor" }, // 4141022957
		{ &Z_Construct_UFunction_USBZCheatManagerBase_SelectParentSocket, "SelectParentSocket" }, // 939912420
		{ &Z_Construct_UFunction_USBZCheatManagerBase_SelectSocketIndex, "SelectSocketIndex" }, // 2388092454
		{ &Z_Construct_UFunction_USBZCheatManagerBase_SelectSocketName, "SelectSocketName" }, // 2170606808
		{ &Z_Construct_UFunction_USBZCheatManagerBase_SelectTarget, "SelectTarget" }, // 886726703
		{ &Z_Construct_UFunction_USBZCheatManagerBase_ServerCommand, "ServerCommand" }, // 3912704600
		{ &Z_Construct_UFunction_USBZCheatManagerBase_SetAudioRTPCValue, "SetAudioRTPCValue" }, // 3016797303
		{ &Z_Construct_UFunction_USBZCheatManagerBase_SetCameraMode, "SetCameraMode" }, // 2894061804
		{ &Z_Construct_UFunction_USBZCheatManagerBase_SetCulture, "SetCulture" }, // 3002407470
		{ &Z_Construct_UFunction_USBZCheatManagerBase_SetCurrency, "SetCurrency" }, // 2746406711
		{ &Z_Construct_UFunction_USBZCheatManagerBase_SetDebugEarnedExperiencePoints, "SetDebugEarnedExperiencePoints" }, // 3266624833
		{ &Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyExperience, "SetInfamyExperience" }, // 1153795886
		{ &Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyLevel, "SetInfamyLevel" }, // 1568585556
		{ &Z_Construct_UFunction_USBZCheatManagerBase_SetInfamyLevelExperience, "SetInfamyLevelExperience" }, // 180374683
		{ &Z_Construct_UFunction_USBZCheatManagerBase_SetInputTypeOverride, "SetInputTypeOverride" }, // 2063433679
		{ &Z_Construct_UFunction_USBZCheatManagerBase_SetListenerEnabled, "SetListenerEnabled" }, // 3574678991
		{ &Z_Construct_UFunction_USBZCheatManagerBase_SetNetEmulationType, "SetNetEmulationType" }, // 628847325
		{ &Z_Construct_UFunction_USBZCheatManagerBase_SetPaused, "SetPaused" }, // 689689953
		{ &Z_Construct_UFunction_USBZCheatManagerBase_SetPreMatchInfamyExperience, "SetPreMatchInfamyExperience" }, // 914715263
		{ &Z_Construct_UFunction_USBZCheatManagerBase_SimulateLobbyCloseConnection, "SimulateLobbyCloseConnection" }, // 2535476674
		{ &Z_Construct_UFunction_USBZCheatManagerBase_SimulateLobbyConnectSuccess, "SimulateLobbyConnectSuccess" }, // 3793220092
		{ &Z_Construct_UFunction_USBZCheatManagerBase_ToggleCVar, "ToggleCVar" }, // 3816467002
		{ &Z_Construct_UFunction_USBZCheatManagerBase_ToggleDrawDebugSpread, "ToggleDrawDebugSpread" }, // 3400469365
		{ &Z_Construct_UFunction_USBZCheatManagerBase_ToggleInGameCheatMenu, "ToggleInGameCheatMenu" }, // 2487643067
		{ &Z_Construct_UFunction_USBZCheatManagerBase_ToggleMuteMusic, "ToggleMuteMusic" }, // 337627376
		{ &Z_Construct_UFunction_USBZCheatManagerBase_Unselect, "Unselect" }, // 1431541691
		{ &Z_Construct_UFunction_USBZCheatManagerBase_UnselectComponent, "UnselectComponent" }, // 2474323517
		{ &Z_Construct_UFunction_USBZCheatManagerBase_UnselectSocket, "UnselectSocket" }, // 175715708
		{ &Z_Construct_UFunction_USBZCheatManagerBase_VoteKickPlayer, "VoteKickPlayer" }, // 3914741673
		{ &Z_Construct_UFunction_USBZCheatManagerBase_VoteRestartLevel, "VoteRestartLevel" }, // 716538390
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCheatManagerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCheatManagerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCheatManagerBase_Statics::NewProp_InputComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCheatManagerBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCheatManagerBase_Statics::NewProp_InputComponent = { "InputComponent", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCheatManagerBase, InputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCheatManagerBase_Statics::NewProp_InputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCheatManagerBase_Statics::NewProp_InputComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCheatManagerBase_Statics::NewProp_Selection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCheatManagerBase" },
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCheatManagerBase_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCheatManagerBase, Selection), Z_Construct_UScriptStruct_FSBZDebugSelection, METADATA_PARAMS(Z_Construct_UClass_USBZCheatManagerBase_Statics::NewProp_Selection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCheatManagerBase_Statics::NewProp_Selection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCheatManagerBase_Statics::NewProp_LastSelection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCheatManagerBase" },
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCheatManagerBase_Statics::NewProp_LastSelection = { "LastSelection", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCheatManagerBase, LastSelection), Z_Construct_UScriptStruct_FSBZDebugSelection, METADATA_PARAMS(Z_Construct_UClass_USBZCheatManagerBase_Statics::NewProp_LastSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCheatManagerBase_Statics::NewProp_LastSelection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCheatManagerBase_Statics::NewProp_AccelByteAdminHelper_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCheatManagerBase" },
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCheatManagerBase_Statics::NewProp_AccelByteAdminHelper = { "AccelByteAdminHelper", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCheatManagerBase, AccelByteAdminHelper), Z_Construct_UClass_USBZAccelByteAdminHelper_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCheatManagerBase_Statics::NewProp_AccelByteAdminHelper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCheatManagerBase_Statics::NewProp_AccelByteAdminHelper_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZCheatManagerBase_Statics::NewProp_SelectedEmulationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCheatManagerBase_Statics::NewProp_SelectedEmulationType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCheatManagerBase" },
		{ "ModuleRelativePath", "Public/SBZCheatManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZCheatManagerBase_Statics::NewProp_SelectedEmulationType = { "SelectedEmulationType", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCheatManagerBase, SelectedEmulationType), Z_Construct_UEnum_Starbreeze_ESBZDebugNetEmulationType, METADATA_PARAMS(Z_Construct_UClass_USBZCheatManagerBase_Statics::NewProp_SelectedEmulationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCheatManagerBase_Statics::NewProp_SelectedEmulationType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCheatManagerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCheatManagerBase_Statics::NewProp_InputComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCheatManagerBase_Statics::NewProp_Selection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCheatManagerBase_Statics::NewProp_LastSelection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCheatManagerBase_Statics::NewProp_AccelByteAdminHelper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCheatManagerBase_Statics::NewProp_SelectedEmulationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCheatManagerBase_Statics::NewProp_SelectedEmulationType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCheatManagerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCheatManagerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCheatManagerBase_Statics::ClassParams = {
		&USBZCheatManagerBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZCheatManagerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCheatManagerBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCheatManagerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCheatManagerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCheatManagerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCheatManagerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCheatManagerBase, 2360373248);
	template<> STARBREEZE_API UClass* StaticClass<USBZCheatManagerBase>()
	{
		return USBZCheatManagerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCheatManagerBase(Z_Construct_UClass_USBZCheatManagerBase, &USBZCheatManagerBase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCheatManagerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCheatManagerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
