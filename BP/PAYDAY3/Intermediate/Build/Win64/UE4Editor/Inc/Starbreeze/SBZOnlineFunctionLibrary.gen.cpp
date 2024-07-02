// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZOnlineFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZOnlineFunctionLibrary() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineFunctionLibrary_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZOnlineSearchResult();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformType();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZFirstPartyPlatform();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMissionInfo();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLoginFieldInfo();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZHostingProvider();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMatchmakingProvider();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMergePlayerData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPartyData();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZOnlineJoinType();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPlatform();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOnlineSession_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSecurityCompany();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDifficulty();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EOnlineSessionInfo();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZUserPrivilegesProxy();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo();
// End Cross Module References
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execActivatePartyInviteOverlay)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZOnlineFunctionLibrary::ActivatePartyInviteOverlay(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execActivateProfileOverlay)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZOnlineFunctionLibrary::ActivateProfileOverlay(Z_Param_WorldContextObject,Z_Param_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execActivateSessionInviteOverlay)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZOnlineFunctionLibrary::ActivateSessionInviteOverlay(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execCanVoteForStayInParty)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::CanVoteForStayInParty(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execDebugGetSessionParameters)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USBZOnlineFunctionLibrary::DebugGetSessionParameters(Z_Param_WorldContextObject,Z_Param_SessionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execDebugJoinByInvite)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FSBZOnlineSearchResult,Z_Param_Out_InSessionToJoin);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZOnlineFunctionLibrary::DebugJoinByInvite(Z_Param_WorldContextObject,Z_Param_Out_InSessionToJoin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetAccelByteLinkedAccountsUrl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USBZOnlineFunctionLibrary::GetAccelByteLinkedAccountsUrl();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetAccelBytePlatformType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAccelBytePlatformType*)Z_Param__Result=USBZOnlineFunctionLibrary::GetAccelBytePlatformType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetAccelbytePlatformTypeFromFirstPartyPlatformType)
	{
		P_GET_ENUM(ESBZFirstPartyPlatform,Z_Param_FirstPartyPlatform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAccelBytePlatformType*)Z_Param__Result=USBZOnlineFunctionLibrary::GetAccelbytePlatformTypeFromFirstPartyPlatformType(ESBZFirstPartyPlatform(Z_Param_FirstPartyPlatform));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetAllPlayersUniqueNetIds)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(FUniqueNetIdRepl,Z_Param_Out_OutParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZOnlineFunctionLibrary::GetAllPlayersUniqueNetIds(Z_Param_WorldContextObject,Z_Param_Out_OutParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetBeaconMissionInfo)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FSBZMissionInfo,Z_Param_Out_OutInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZOnlineFunctionLibrary::GetBeaconMissionInfo(Z_Param_WorldContextObject,Z_Param_Out_OutInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetConnectionsCount)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZOnlineFunctionLibrary::GetConnectionsCount(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetDebugLoginAndPassword)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZLoginFieldInfo*)Z_Param__Result=USBZOnlineFunctionLibrary::GetDebugLoginAndPassword(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetDebugMatchmakingGroup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZOnlineFunctionLibrary::GetDebugMatchmakingGroup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetDebugRandomSeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZOnlineFunctionLibrary::GetDebugRandomSeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetDifficultyIdxArgument)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=USBZOnlineFunctionLibrary::GetDifficultyIdxArgument(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetFirstPartyPlatform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZFirstPartyPlatform*)Z_Param__Result=USBZOnlineFunctionLibrary::GetFirstPartyPlatform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetFoundPlayersCount)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZOnlineFunctionLibrary::GetFoundPlayersCount(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetHostingProvider)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZHostingProvider*)Z_Param__Result=USBZOnlineFunctionLibrary::GetHostingProvider(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetLastMatchID)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USBZOnlineFunctionLibrary::GetLastMatchID(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetMatchmakingParameters)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZOnlineMatchmakingParams*)Z_Param__Result=USBZOnlineFunctionLibrary::GetMatchmakingParameters(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetMatchmakingProvider)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZMatchmakingProvider*)Z_Param__Result=USBZOnlineFunctionLibrary::GetMatchmakingProvider(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetMaxPlayersArgument)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=USBZOnlineFunctionLibrary::GetMaxPlayersArgument(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetMaxPlayersForSession)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=USBZOnlineFunctionLibrary::GetMaxPlayersForSession(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetMergePartyInformation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSBZMergePlayerData>*)Z_Param__Result=USBZOnlineFunctionLibrary::GetMergePartyInformation(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetOverrideAccelbyteGameMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USBZOnlineFunctionLibrary::GetOverrideAccelbyteGameMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetOverrideLevelName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USBZOnlineFunctionLibrary::GetOverrideLevelName(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetPartyData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FSBZPartyData,Z_Param_Out_OutPartyData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::GetPartyData(Z_Param_WorldContextObject,Z_Param_Out_OutPartyData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetPartyJoinType)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZOnlineJoinType*)Z_Param__Result=USBZOnlineFunctionLibrary::GetPartyJoinType(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetPartyMemberAvatar)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=USBZOnlineFunctionLibrary::GetPartyMemberAvatar(Z_Param_WorldContextObject,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetPartyMembersCount)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZOnlineFunctionLibrary::GetPartyMembersCount(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetPathNameFromLevelIdx)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_LevelIdx);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSoftObjectPath*)Z_Param__Result=USBZOnlineFunctionLibrary::GetPathNameFromLevelIdx(Z_Param_WorldContextObject,Z_Param_LevelIdx);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetPlatform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZPlatform*)Z_Param__Result=USBZOnlineFunctionLibrary::GetPlatform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetPlatformFromAccelbytePlatformId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AccelbytePlatformId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZPlatform*)Z_Param__Result=USBZOnlineFunctionLibrary::GetPlatformFromAccelbytePlatformId(Z_Param_AccelbytePlatformId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetPlayerAvatar)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=USBZOnlineFunctionLibrary::GetPlayerAvatar(Z_Param_WorldContextObject,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetPlayerAvatarByUniqueId)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UniqueNetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=USBZOnlineFunctionLibrary::GetPlayerAvatarByUniqueId(Z_Param_WorldContextObject,Z_Param_UniqueNetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetPlayerDisplayNameByUniqueId)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UniqueNetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USBZOnlineFunctionLibrary::GetPlayerDisplayNameByUniqueId(Z_Param_WorldContextObject,Z_Param_UniqueNetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetPlayersCount)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZOnlineFunctionLibrary::GetPlayersCount(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetSBZOnline)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZOnlineSession**)Z_Param__Result=USBZOnlineFunctionLibrary::GetSBZOnline(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetSecurityCompaniesArgument)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ESBZSecurityCompany>*)Z_Param__Result=USBZOnlineFunctionLibrary::GetSecurityCompaniesArgument();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetSecurityCompanyListForDifficulty)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_LevelName);
		P_GET_ENUM(ESBZDifficulty,Z_Param_Difficulty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ESBZSecurityCompany>*)Z_Param__Result=USBZOnlineFunctionLibrary::GetSecurityCompanyListForDifficulty(Z_Param_WorldContextObject,Z_Param_LevelName,ESBZDifficulty(Z_Param_Difficulty));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetSessionInfo)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOnlineSessionInfo*)Z_Param__Result=USBZOnlineFunctionLibrary::GetSessionInfo(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetSingleNameToShow)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PlatformName);
		P_GET_PROPERTY(FStrProperty,Z_Param_NebulaName);
		P_GET_ENUM(ESBZPlatform,Z_Param_Platform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USBZOnlineFunctionLibrary::GetSingleNameToShow(Z_Param_PlatformName,Z_Param_NebulaName,ESBZPlatform(Z_Param_Platform));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execGetUiLobbyInfo)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(FSBZLobbyCharacterInfoUi,Z_Param_Out_OutInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZOnlineFunctionLibrary::GetUiLobbyInfo(Z_Param_WorldContextObject,Z_Param_Out_OutInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execHasPrivilege)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESBZUserPrivilegesProxy,Z_Param_Privilege);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::HasPrivilege(Z_Param_WorldContextObject,ESBZUserPrivilegesProxy(Z_Param_Privilege));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execHideSessionFromJoin)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZOnlineFunctionLibrary::HideSessionFromJoin(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execIsAccelByteMatchmakingDisabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::IsAccelByteMatchmakingDisabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execIsAccelByteV2SessionsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::IsAccelByteV2SessionsEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execIsActionPhaseClient)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::IsActionPhaseClient(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execIsDebugRandomSeedProvided)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::IsDebugRandomSeedProvided();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execIsDifficultyArgumentProvided)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::IsDifficultyArgumentProvided(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execIsEOSActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::IsEOSActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execIsForceLocalProgressionSaveFile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::IsForceLocalProgressionSaveFile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execIsInParty)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::IsInParty(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execIsInSession)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::IsInSession(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execIsLobbyClient)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::IsLobbyClient(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execIsLobbyHost)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::IsLobbyHost(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execIsLocalClientReady)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::IsLocalClientReady(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execIsLocalPlayerInDropInLobby)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::IsLocalPlayerInDropInLobby(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execIsNoChallenges)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::IsNoChallenges();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execIsNoHud)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::IsNoHud();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execIsNoSteam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::IsNoSteam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execIsOwnUniqueId)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UniqueNetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::IsOwnUniqueId(Z_Param_WorldContextObject,Z_Param_UniqueNetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execIsPartyClient)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::IsPartyClient(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execIsPartyOwner)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::IsPartyOwner(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execIsPlayerInParty)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UniqueNetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::IsPlayerInParty(Z_Param_WorldContextObject,Z_Param_UniqueNetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execIsPlayerMuted)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UniqueNetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::IsPlayerMuted(Z_Param_WorldContextObject,Z_Param_UniqueNetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execIsPlayerPartyOwner)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UniqueNetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::IsPlayerPartyOwner(Z_Param_WorldContextObject,Z_Param_UniqueNetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execIsProductOwned)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ProductId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::IsProductOwned(Z_Param_ProductId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execIsRequestInProgress)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::IsRequestInProgress(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execIsSameUniqueId)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UniqueNetIdA);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UniqueNetIdB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::IsSameUniqueId(Z_Param_UniqueNetIdA,Z_Param_UniqueNetIdB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execIsSecurityCompaniesProvided)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::IsSecurityCompaniesProvided();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execIsServerAcceptingSlots)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::IsServerAcceptingSlots(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execIsShippingBuild)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::IsShippingBuild();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execIsSoloGame)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::IsSoloGame(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execIsSoloGameEnabled)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::IsSoloGameEnabled(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execIsSteamActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::IsSteamActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execIsTitleOnline)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::IsTitleOnline(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execIsUserOnline)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::IsUserOnline(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execIsWinGDKActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZOnlineFunctionLibrary::IsWinGDKActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execLevelIdxToPath)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSoftObjectPath*)Z_Param__Result=USBZOnlineFunctionLibrary::LevelIdxToPath(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execMutePlayer)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UniqueNetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZOnlineFunctionLibrary::MutePlayer(Z_Param_WorldContextObject,Z_Param_UniqueNetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execRequestCreateAccount)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FSBZRegistrationFieldInfo,Z_Param_Out_RegistrationFieldInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZOnlineFunctionLibrary::RequestCreateAccount(Z_Param_WorldContextObject,Z_Param_Out_RegistrationFieldInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execRequestDirectJoin)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZOnlineFunctionLibrary::RequestDirectJoin(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execRequestLogin)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FSBZLoginFieldInfo,Z_Param_Out_LoginFieldInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZOnlineFunctionLibrary::RequestLogin(Z_Param_WorldContextObject,Z_Param_Out_LoginFieldInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execRequestLoginWithDeviceID)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZOnlineFunctionLibrary::RequestLoginWithDeviceID(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execRequestMergeParty)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_bIsSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZOnlineFunctionLibrary::RequestMergeParty(Z_Param_WorldContextObject,Z_Param_bIsSelected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execRequestRestartLevel)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZOnlineFunctionLibrary::RequestRestartLevel(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execRequestSteamLogin)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZOnlineFunctionLibrary::RequestSteamLogin(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execRequestVoteKickPlayer)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_PlayerTargeted);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZOnlineFunctionLibrary::RequestVoteKickPlayer(Z_Param_WorldContextObject,Z_Param_Out_PlayerTargeted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execRequestVoteRestartLevel)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZOnlineFunctionLibrary::RequestVoteRestartLevel(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execSetLocalClientReady)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_bIsClientReady);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZOnlineFunctionLibrary::SetLocalClientReady(Z_Param_WorldContextObject,Z_Param_bIsClientReady);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execSetMatchmakingRegion)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_MatchmakingRegion);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZOnlineFunctionLibrary::SetMatchmakingRegion(Z_Param_WorldContextObject,Z_Param_MatchmakingRegion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execSetSoloGameDisabled)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZOnlineFunctionLibrary::SetSoloGameDisabled(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execSetSoloGameEnabled)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZOnlineFunctionLibrary::SetSoloGameEnabled(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZOnlineFunctionLibrary::execUnmutePlayer)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_UniqueNetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZOnlineFunctionLibrary::UnmutePlayer(Z_Param_WorldContextObject,Z_Param_UniqueNetId);
		P_NATIVE_END;
	}
	void USBZOnlineFunctionLibrary::StaticRegisterNativesUSBZOnlineFunctionLibrary()
	{
		UClass* Class = USBZOnlineFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivatePartyInviteOverlay", &USBZOnlineFunctionLibrary::execActivatePartyInviteOverlay },
			{ "ActivateProfileOverlay", &USBZOnlineFunctionLibrary::execActivateProfileOverlay },
			{ "ActivateSessionInviteOverlay", &USBZOnlineFunctionLibrary::execActivateSessionInviteOverlay },
			{ "CanVoteForStayInParty", &USBZOnlineFunctionLibrary::execCanVoteForStayInParty },
			{ "DebugGetSessionParameters", &USBZOnlineFunctionLibrary::execDebugGetSessionParameters },
			{ "DebugJoinByInvite", &USBZOnlineFunctionLibrary::execDebugJoinByInvite },
			{ "GetAccelByteLinkedAccountsUrl", &USBZOnlineFunctionLibrary::execGetAccelByteLinkedAccountsUrl },
			{ "GetAccelBytePlatformType", &USBZOnlineFunctionLibrary::execGetAccelBytePlatformType },
			{ "GetAccelbytePlatformTypeFromFirstPartyPlatformType", &USBZOnlineFunctionLibrary::execGetAccelbytePlatformTypeFromFirstPartyPlatformType },
			{ "GetAllPlayersUniqueNetIds", &USBZOnlineFunctionLibrary::execGetAllPlayersUniqueNetIds },
			{ "GetBeaconMissionInfo", &USBZOnlineFunctionLibrary::execGetBeaconMissionInfo },
			{ "GetConnectionsCount", &USBZOnlineFunctionLibrary::execGetConnectionsCount },
			{ "GetDebugLoginAndPassword", &USBZOnlineFunctionLibrary::execGetDebugLoginAndPassword },
			{ "GetDebugMatchmakingGroup", &USBZOnlineFunctionLibrary::execGetDebugMatchmakingGroup },
			{ "GetDebugRandomSeed", &USBZOnlineFunctionLibrary::execGetDebugRandomSeed },
			{ "GetDifficultyIdxArgument", &USBZOnlineFunctionLibrary::execGetDifficultyIdxArgument },
			{ "GetFirstPartyPlatform", &USBZOnlineFunctionLibrary::execGetFirstPartyPlatform },
			{ "GetFoundPlayersCount", &USBZOnlineFunctionLibrary::execGetFoundPlayersCount },
			{ "GetHostingProvider", &USBZOnlineFunctionLibrary::execGetHostingProvider },
			{ "GetLastMatchID", &USBZOnlineFunctionLibrary::execGetLastMatchID },
			{ "GetMatchmakingParameters", &USBZOnlineFunctionLibrary::execGetMatchmakingParameters },
			{ "GetMatchmakingProvider", &USBZOnlineFunctionLibrary::execGetMatchmakingProvider },
			{ "GetMaxPlayersArgument", &USBZOnlineFunctionLibrary::execGetMaxPlayersArgument },
			{ "GetMaxPlayersForSession", &USBZOnlineFunctionLibrary::execGetMaxPlayersForSession },
			{ "GetMergePartyInformation", &USBZOnlineFunctionLibrary::execGetMergePartyInformation },
			{ "GetOverrideAccelbyteGameMode", &USBZOnlineFunctionLibrary::execGetOverrideAccelbyteGameMode },
			{ "GetOverrideLevelName", &USBZOnlineFunctionLibrary::execGetOverrideLevelName },
			{ "GetPartyData", &USBZOnlineFunctionLibrary::execGetPartyData },
			{ "GetPartyJoinType", &USBZOnlineFunctionLibrary::execGetPartyJoinType },
			{ "GetPartyMemberAvatar", &USBZOnlineFunctionLibrary::execGetPartyMemberAvatar },
			{ "GetPartyMembersCount", &USBZOnlineFunctionLibrary::execGetPartyMembersCount },
			{ "GetPathNameFromLevelIdx", &USBZOnlineFunctionLibrary::execGetPathNameFromLevelIdx },
			{ "GetPlatform", &USBZOnlineFunctionLibrary::execGetPlatform },
			{ "GetPlatformFromAccelbytePlatformId", &USBZOnlineFunctionLibrary::execGetPlatformFromAccelbytePlatformId },
			{ "GetPlayerAvatar", &USBZOnlineFunctionLibrary::execGetPlayerAvatar },
			{ "GetPlayerAvatarByUniqueId", &USBZOnlineFunctionLibrary::execGetPlayerAvatarByUniqueId },
			{ "GetPlayerDisplayNameByUniqueId", &USBZOnlineFunctionLibrary::execGetPlayerDisplayNameByUniqueId },
			{ "GetPlayersCount", &USBZOnlineFunctionLibrary::execGetPlayersCount },
			{ "GetSBZOnline", &USBZOnlineFunctionLibrary::execGetSBZOnline },
			{ "GetSecurityCompaniesArgument", &USBZOnlineFunctionLibrary::execGetSecurityCompaniesArgument },
			{ "GetSecurityCompanyListForDifficulty", &USBZOnlineFunctionLibrary::execGetSecurityCompanyListForDifficulty },
			{ "GetSessionInfo", &USBZOnlineFunctionLibrary::execGetSessionInfo },
			{ "GetSingleNameToShow", &USBZOnlineFunctionLibrary::execGetSingleNameToShow },
			{ "GetUiLobbyInfo", &USBZOnlineFunctionLibrary::execGetUiLobbyInfo },
			{ "HasPrivilege", &USBZOnlineFunctionLibrary::execHasPrivilege },
			{ "HideSessionFromJoin", &USBZOnlineFunctionLibrary::execHideSessionFromJoin },
			{ "IsAccelByteMatchmakingDisabled", &USBZOnlineFunctionLibrary::execIsAccelByteMatchmakingDisabled },
			{ "IsAccelByteV2SessionsEnabled", &USBZOnlineFunctionLibrary::execIsAccelByteV2SessionsEnabled },
			{ "IsActionPhaseClient", &USBZOnlineFunctionLibrary::execIsActionPhaseClient },
			{ "IsDebugRandomSeedProvided", &USBZOnlineFunctionLibrary::execIsDebugRandomSeedProvided },
			{ "IsDifficultyArgumentProvided", &USBZOnlineFunctionLibrary::execIsDifficultyArgumentProvided },
			{ "IsEOSActive", &USBZOnlineFunctionLibrary::execIsEOSActive },
			{ "IsForceLocalProgressionSaveFile", &USBZOnlineFunctionLibrary::execIsForceLocalProgressionSaveFile },
			{ "IsInParty", &USBZOnlineFunctionLibrary::execIsInParty },
			{ "IsInSession", &USBZOnlineFunctionLibrary::execIsInSession },
			{ "IsLobbyClient", &USBZOnlineFunctionLibrary::execIsLobbyClient },
			{ "IsLobbyHost", &USBZOnlineFunctionLibrary::execIsLobbyHost },
			{ "IsLocalClientReady", &USBZOnlineFunctionLibrary::execIsLocalClientReady },
			{ "IsLocalPlayerInDropInLobby", &USBZOnlineFunctionLibrary::execIsLocalPlayerInDropInLobby },
			{ "IsNoChallenges", &USBZOnlineFunctionLibrary::execIsNoChallenges },
			{ "IsNoHud", &USBZOnlineFunctionLibrary::execIsNoHud },
			{ "IsNoSteam", &USBZOnlineFunctionLibrary::execIsNoSteam },
			{ "IsOwnUniqueId", &USBZOnlineFunctionLibrary::execIsOwnUniqueId },
			{ "IsPartyClient", &USBZOnlineFunctionLibrary::execIsPartyClient },
			{ "IsPartyOwner", &USBZOnlineFunctionLibrary::execIsPartyOwner },
			{ "IsPlayerInParty", &USBZOnlineFunctionLibrary::execIsPlayerInParty },
			{ "IsPlayerMuted", &USBZOnlineFunctionLibrary::execIsPlayerMuted },
			{ "IsPlayerPartyOwner", &USBZOnlineFunctionLibrary::execIsPlayerPartyOwner },
			{ "IsProductOwned", &USBZOnlineFunctionLibrary::execIsProductOwned },
			{ "IsRequestInProgress", &USBZOnlineFunctionLibrary::execIsRequestInProgress },
			{ "IsSameUniqueId", &USBZOnlineFunctionLibrary::execIsSameUniqueId },
			{ "IsSecurityCompaniesProvided", &USBZOnlineFunctionLibrary::execIsSecurityCompaniesProvided },
			{ "IsServerAcceptingSlots", &USBZOnlineFunctionLibrary::execIsServerAcceptingSlots },
			{ "IsShippingBuild", &USBZOnlineFunctionLibrary::execIsShippingBuild },
			{ "IsSoloGame", &USBZOnlineFunctionLibrary::execIsSoloGame },
			{ "IsSoloGameEnabled", &USBZOnlineFunctionLibrary::execIsSoloGameEnabled },
			{ "IsSteamActive", &USBZOnlineFunctionLibrary::execIsSteamActive },
			{ "IsTitleOnline", &USBZOnlineFunctionLibrary::execIsTitleOnline },
			{ "IsUserOnline", &USBZOnlineFunctionLibrary::execIsUserOnline },
			{ "IsWinGDKActive", &USBZOnlineFunctionLibrary::execIsWinGDKActive },
			{ "LevelIdxToPath", &USBZOnlineFunctionLibrary::execLevelIdxToPath },
			{ "MutePlayer", &USBZOnlineFunctionLibrary::execMutePlayer },
			{ "RequestCreateAccount", &USBZOnlineFunctionLibrary::execRequestCreateAccount },
			{ "RequestDirectJoin", &USBZOnlineFunctionLibrary::execRequestDirectJoin },
			{ "RequestLogin", &USBZOnlineFunctionLibrary::execRequestLogin },
			{ "RequestLoginWithDeviceID", &USBZOnlineFunctionLibrary::execRequestLoginWithDeviceID },
			{ "RequestMergeParty", &USBZOnlineFunctionLibrary::execRequestMergeParty },
			{ "RequestRestartLevel", &USBZOnlineFunctionLibrary::execRequestRestartLevel },
			{ "RequestSteamLogin", &USBZOnlineFunctionLibrary::execRequestSteamLogin },
			{ "RequestVoteKickPlayer", &USBZOnlineFunctionLibrary::execRequestVoteKickPlayer },
			{ "RequestVoteRestartLevel", &USBZOnlineFunctionLibrary::execRequestVoteRestartLevel },
			{ "SetLocalClientReady", &USBZOnlineFunctionLibrary::execSetLocalClientReady },
			{ "SetMatchmakingRegion", &USBZOnlineFunctionLibrary::execSetMatchmakingRegion },
			{ "SetSoloGameDisabled", &USBZOnlineFunctionLibrary::execSetSoloGameDisabled },
			{ "SetSoloGameEnabled", &USBZOnlineFunctionLibrary::execSetSoloGameEnabled },
			{ "UnmutePlayer", &USBZOnlineFunctionLibrary::execUnmutePlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivatePartyInviteOverlay_Statics
	{
		struct SBZOnlineFunctionLibrary_eventActivatePartyInviteOverlay_Parms
		{
			UObject* WorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivatePartyInviteOverlay_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventActivatePartyInviteOverlay_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivatePartyInviteOverlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivatePartyInviteOverlay_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivatePartyInviteOverlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivatePartyInviteOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "ActivatePartyInviteOverlay", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventActivatePartyInviteOverlay_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivatePartyInviteOverlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivatePartyInviteOverlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivatePartyInviteOverlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivatePartyInviteOverlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivatePartyInviteOverlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivatePartyInviteOverlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivateProfileOverlay_Statics
	{
		struct SBZOnlineFunctionLibrary_eventActivateProfileOverlay_Parms
		{
			UObject* WorldContextObject;
			FUniqueNetIdRepl PlayerId;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivateProfileOverlay_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventActivateProfileOverlay_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivateProfileOverlay_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventActivateProfileOverlay_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivateProfileOverlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivateProfileOverlay_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivateProfileOverlay_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivateProfileOverlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivateProfileOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "ActivateProfileOverlay", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventActivateProfileOverlay_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivateProfileOverlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivateProfileOverlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivateProfileOverlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivateProfileOverlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivateProfileOverlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivateProfileOverlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivateSessionInviteOverlay_Statics
	{
		struct SBZOnlineFunctionLibrary_eventActivateSessionInviteOverlay_Parms
		{
			UObject* WorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivateSessionInviteOverlay_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventActivateSessionInviteOverlay_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivateSessionInviteOverlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivateSessionInviteOverlay_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivateSessionInviteOverlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivateSessionInviteOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "ActivateSessionInviteOverlay", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventActivateSessionInviteOverlay_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivateSessionInviteOverlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivateSessionInviteOverlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivateSessionInviteOverlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivateSessionInviteOverlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivateSessionInviteOverlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivateSessionInviteOverlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_CanVoteForStayInParty_Statics
	{
		struct SBZOnlineFunctionLibrary_eventCanVoteForStayInParty_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_CanVoteForStayInParty_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventCanVoteForStayInParty_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_CanVoteForStayInParty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventCanVoteForStayInParty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_CanVoteForStayInParty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventCanVoteForStayInParty_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_CanVoteForStayInParty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_CanVoteForStayInParty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_CanVoteForStayInParty_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_CanVoteForStayInParty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_CanVoteForStayInParty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_CanVoteForStayInParty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "CanVoteForStayInParty", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventCanVoteForStayInParty_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_CanVoteForStayInParty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_CanVoteForStayInParty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_CanVoteForStayInParty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_CanVoteForStayInParty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_CanVoteForStayInParty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_CanVoteForStayInParty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugGetSessionParameters_Statics
	{
		struct SBZOnlineFunctionLibrary_eventDebugGetSessionParameters_Parms
		{
			const UObject* WorldContextObject;
			FName SessionName;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SessionName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugGetSessionParameters_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugGetSessionParameters_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventDebugGetSessionParameters_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugGetSessionParameters_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugGetSessionParameters_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugGetSessionParameters_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventDebugGetSessionParameters_Parms, SessionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugGetSessionParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventDebugGetSessionParameters_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugGetSessionParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugGetSessionParameters_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugGetSessionParameters_Statics::NewProp_SessionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugGetSessionParameters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugGetSessionParameters_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugGetSessionParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "DebugGetSessionParameters", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventDebugGetSessionParameters_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugGetSessionParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugGetSessionParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugGetSessionParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugGetSessionParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugGetSessionParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugGetSessionParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugJoinByInvite_Statics
	{
		struct SBZOnlineFunctionLibrary_eventDebugJoinByInvite_Parms
		{
			UObject* WorldContextObject;
			FSBZOnlineSearchResult InSessionToJoin;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSessionToJoin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSessionToJoin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugJoinByInvite_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventDebugJoinByInvite_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugJoinByInvite_Statics::NewProp_InSessionToJoin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugJoinByInvite_Statics::NewProp_InSessionToJoin = { "InSessionToJoin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventDebugJoinByInvite_Parms, InSessionToJoin), Z_Construct_UScriptStruct_FSBZOnlineSearchResult, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugJoinByInvite_Statics::NewProp_InSessionToJoin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugJoinByInvite_Statics::NewProp_InSessionToJoin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugJoinByInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugJoinByInvite_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugJoinByInvite_Statics::NewProp_InSessionToJoin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugJoinByInvite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugJoinByInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "DebugJoinByInvite", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventDebugJoinByInvite_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugJoinByInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugJoinByInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugJoinByInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugJoinByInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugJoinByInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugJoinByInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelByteLinkedAccountsUrl_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetAccelByteLinkedAccountsUrl_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelByteLinkedAccountsUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetAccelByteLinkedAccountsUrl_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelByteLinkedAccountsUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelByteLinkedAccountsUrl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelByteLinkedAccountsUrl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelByteLinkedAccountsUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetAccelByteLinkedAccountsUrl", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetAccelByteLinkedAccountsUrl_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelByteLinkedAccountsUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelByteLinkedAccountsUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelByteLinkedAccountsUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelByteLinkedAccountsUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelByteLinkedAccountsUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelByteLinkedAccountsUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelBytePlatformType_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetAccelBytePlatformType_Parms
		{
			EAccelBytePlatformType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelBytePlatformType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelBytePlatformType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetAccelBytePlatformType_Parms, ReturnValue), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelBytePlatformType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelBytePlatformType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelBytePlatformType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelBytePlatformType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelBytePlatformType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetAccelBytePlatformType", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetAccelBytePlatformType_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelBytePlatformType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelBytePlatformType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelBytePlatformType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelBytePlatformType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelBytePlatformType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelBytePlatformType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelbytePlatformTypeFromFirstPartyPlatformType_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetAccelbytePlatformTypeFromFirstPartyPlatformType_Parms
		{
			ESBZFirstPartyPlatform FirstPartyPlatform;
			EAccelBytePlatformType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FirstPartyPlatform_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FirstPartyPlatform;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelbytePlatformTypeFromFirstPartyPlatformType_Statics::NewProp_FirstPartyPlatform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelbytePlatformTypeFromFirstPartyPlatformType_Statics::NewProp_FirstPartyPlatform = { "FirstPartyPlatform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetAccelbytePlatformTypeFromFirstPartyPlatformType_Parms, FirstPartyPlatform), Z_Construct_UEnum_Starbreeze_ESBZFirstPartyPlatform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelbytePlatformTypeFromFirstPartyPlatformType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelbytePlatformTypeFromFirstPartyPlatformType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetAccelbytePlatformTypeFromFirstPartyPlatformType_Parms, ReturnValue), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelBytePlatformType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelbytePlatformTypeFromFirstPartyPlatformType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelbytePlatformTypeFromFirstPartyPlatformType_Statics::NewProp_FirstPartyPlatform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelbytePlatformTypeFromFirstPartyPlatformType_Statics::NewProp_FirstPartyPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelbytePlatformTypeFromFirstPartyPlatformType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelbytePlatformTypeFromFirstPartyPlatformType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelbytePlatformTypeFromFirstPartyPlatformType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelbytePlatformTypeFromFirstPartyPlatformType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetAccelbytePlatformTypeFromFirstPartyPlatformType", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetAccelbytePlatformTypeFromFirstPartyPlatformType_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelbytePlatformTypeFromFirstPartyPlatformType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelbytePlatformTypeFromFirstPartyPlatformType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelbytePlatformTypeFromFirstPartyPlatformType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelbytePlatformTypeFromFirstPartyPlatformType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelbytePlatformTypeFromFirstPartyPlatformType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelbytePlatformTypeFromFirstPartyPlatformType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAllPlayersUniqueNetIds_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetAllPlayersUniqueNetIds_Parms
		{
			UObject* WorldContextObject;
			TArray<FUniqueNetIdRepl> OutParam;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutParam_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAllPlayersUniqueNetIds_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetAllPlayersUniqueNetIds_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAllPlayersUniqueNetIds_Statics::NewProp_OutParam_Inner = { "OutParam", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAllPlayersUniqueNetIds_Statics::NewProp_OutParam = { "OutParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetAllPlayersUniqueNetIds_Parms, OutParam), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAllPlayersUniqueNetIds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAllPlayersUniqueNetIds_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAllPlayersUniqueNetIds_Statics::NewProp_OutParam_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAllPlayersUniqueNetIds_Statics::NewProp_OutParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAllPlayersUniqueNetIds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAllPlayersUniqueNetIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetAllPlayersUniqueNetIds", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetAllPlayersUniqueNetIds_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAllPlayersUniqueNetIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAllPlayersUniqueNetIds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAllPlayersUniqueNetIds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAllPlayersUniqueNetIds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAllPlayersUniqueNetIds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAllPlayersUniqueNetIds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetBeaconMissionInfo_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetBeaconMissionInfo_Parms
		{
			UObject* WorldContextObject;
			FSBZMissionInfo OutInfo;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetBeaconMissionInfo_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetBeaconMissionInfo_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetBeaconMissionInfo_Statics::NewProp_OutInfo = { "OutInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetBeaconMissionInfo_Parms, OutInfo), Z_Construct_UScriptStruct_FSBZMissionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetBeaconMissionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetBeaconMissionInfo_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetBeaconMissionInfo_Statics::NewProp_OutInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetBeaconMissionInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetBeaconMissionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetBeaconMissionInfo", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetBeaconMissionInfo_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetBeaconMissionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetBeaconMissionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetBeaconMissionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetBeaconMissionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetBeaconMissionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetBeaconMissionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetConnectionsCount_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetConnectionsCount_Parms
		{
			UObject* WorldContextObject;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetConnectionsCount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetConnectionsCount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetConnectionsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetConnectionsCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetConnectionsCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetConnectionsCount_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetConnectionsCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetConnectionsCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetConnectionsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetConnectionsCount", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetConnectionsCount_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetConnectionsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetConnectionsCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetConnectionsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetConnectionsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetConnectionsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetConnectionsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugLoginAndPassword_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetDebugLoginAndPassword_Parms
		{
			const UObject* WorldContextObject;
			FSBZLoginFieldInfo ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugLoginAndPassword_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugLoginAndPassword_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetDebugLoginAndPassword_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugLoginAndPassword_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugLoginAndPassword_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugLoginAndPassword_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetDebugLoginAndPassword_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZLoginFieldInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugLoginAndPassword_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugLoginAndPassword_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugLoginAndPassword_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugLoginAndPassword_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugLoginAndPassword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetDebugLoginAndPassword", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetDebugLoginAndPassword_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugLoginAndPassword_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugLoginAndPassword_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugLoginAndPassword_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugLoginAndPassword_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugLoginAndPassword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugLoginAndPassword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugMatchmakingGroup_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetDebugMatchmakingGroup_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugMatchmakingGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetDebugMatchmakingGroup_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugMatchmakingGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugMatchmakingGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugMatchmakingGroup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugMatchmakingGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetDebugMatchmakingGroup", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetDebugMatchmakingGroup_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugMatchmakingGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugMatchmakingGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugMatchmakingGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugMatchmakingGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugMatchmakingGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugMatchmakingGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugRandomSeed_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetDebugRandomSeed_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugRandomSeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetDebugRandomSeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugRandomSeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugRandomSeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugRandomSeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugRandomSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetDebugRandomSeed", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetDebugRandomSeed_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugRandomSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugRandomSeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugRandomSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugRandomSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugRandomSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugRandomSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDifficultyIdxArgument_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetDifficultyIdxArgument_Parms
		{
			const UObject* WorldContextObject;
			uint8 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDifficultyIdxArgument_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDifficultyIdxArgument_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetDifficultyIdxArgument_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDifficultyIdxArgument_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDifficultyIdxArgument_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDifficultyIdxArgument_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetDifficultyIdxArgument_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDifficultyIdxArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDifficultyIdxArgument_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDifficultyIdxArgument_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDifficultyIdxArgument_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDifficultyIdxArgument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetDifficultyIdxArgument", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetDifficultyIdxArgument_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDifficultyIdxArgument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDifficultyIdxArgument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDifficultyIdxArgument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDifficultyIdxArgument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDifficultyIdxArgument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDifficultyIdxArgument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetFirstPartyPlatform_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetFirstPartyPlatform_Parms
		{
			ESBZFirstPartyPlatform ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetFirstPartyPlatform_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetFirstPartyPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetFirstPartyPlatform_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZFirstPartyPlatform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetFirstPartyPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetFirstPartyPlatform_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetFirstPartyPlatform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetFirstPartyPlatform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetFirstPartyPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetFirstPartyPlatform", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetFirstPartyPlatform_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetFirstPartyPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetFirstPartyPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetFirstPartyPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetFirstPartyPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetFirstPartyPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetFirstPartyPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetFoundPlayersCount_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetFoundPlayersCount_Parms
		{
			UObject* WorldContextObject;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetFoundPlayersCount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetFoundPlayersCount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetFoundPlayersCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetFoundPlayersCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetFoundPlayersCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetFoundPlayersCount_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetFoundPlayersCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetFoundPlayersCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetFoundPlayersCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetFoundPlayersCount", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetFoundPlayersCount_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetFoundPlayersCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetFoundPlayersCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetFoundPlayersCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetFoundPlayersCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetFoundPlayersCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetFoundPlayersCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetHostingProvider_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetHostingProvider_Parms
		{
			const UObject* WorldContextObject;
			ESBZHostingProvider ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetHostingProvider_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetHostingProvider_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetHostingProvider_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetHostingProvider_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetHostingProvider_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetHostingProvider_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetHostingProvider_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetHostingProvider_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZHostingProvider, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetHostingProvider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetHostingProvider_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetHostingProvider_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetHostingProvider_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetHostingProvider_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetHostingProvider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetHostingProvider", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetHostingProvider_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetHostingProvider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetHostingProvider_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetHostingProvider_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetHostingProvider_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetHostingProvider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetHostingProvider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetLastMatchID_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetLastMatchID_Parms
		{
			const UObject* WorldContextObject;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetLastMatchID_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetLastMatchID_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetLastMatchID_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetLastMatchID_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetLastMatchID_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetLastMatchID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetLastMatchID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetLastMatchID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetLastMatchID_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetLastMatchID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetLastMatchID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetLastMatchID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetLastMatchID", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetLastMatchID_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetLastMatchID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetLastMatchID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetLastMatchID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetLastMatchID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetLastMatchID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetLastMatchID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingParameters_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetMatchmakingParameters_Parms
		{
			UObject* WorldContextObject;
			FSBZOnlineMatchmakingParams ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingParameters_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetMatchmakingParameters_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetMatchmakingParameters_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZOnlineMatchmakingParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingParameters_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingParameters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingParameters_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetMatchmakingParameters", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetMatchmakingParameters_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingProvider_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetMatchmakingProvider_Parms
		{
			const UObject* WorldContextObject;
			ESBZMatchmakingProvider ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingProvider_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingProvider_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetMatchmakingProvider_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingProvider_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingProvider_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingProvider_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingProvider_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetMatchmakingProvider_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZMatchmakingProvider, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingProvider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingProvider_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingProvider_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingProvider_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingProvider_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingProvider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetMatchmakingProvider", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetMatchmakingProvider_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingProvider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingProvider_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingProvider_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingProvider_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingProvider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingProvider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersArgument_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetMaxPlayersArgument_Parms
		{
			const UObject* WorldContextObject;
			uint8 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersArgument_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersArgument_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetMaxPlayersArgument_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersArgument_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersArgument_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersArgument_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetMaxPlayersArgument_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersArgument_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersArgument_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersArgument_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersArgument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetMaxPlayersArgument", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetMaxPlayersArgument_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersArgument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersArgument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersArgument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersArgument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersArgument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersArgument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersForSession_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetMaxPlayersForSession_Parms
		{
			const UObject* WorldContextObject;
			uint8 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersForSession_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersForSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetMaxPlayersForSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersForSession_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersForSession_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersForSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetMaxPlayersForSession_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersForSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersForSession_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersForSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersForSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersForSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetMaxPlayersForSession", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetMaxPlayersForSession_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersForSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersForSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersForSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersForSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersForSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersForSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMergePartyInformation_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetMergePartyInformation_Parms
		{
			UObject* WorldContextObject;
			TArray<FSBZMergePlayerData> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMergePartyInformation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetMergePartyInformation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMergePartyInformation_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZMergePlayerData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMergePartyInformation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetMergePartyInformation_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMergePartyInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMergePartyInformation_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMergePartyInformation_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMergePartyInformation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMergePartyInformation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMergePartyInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetMergePartyInformation", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetMergePartyInformation_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMergePartyInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMergePartyInformation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMergePartyInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMergePartyInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMergePartyInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMergePartyInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetOverrideAccelbyteGameMode_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetOverrideAccelbyteGameMode_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetOverrideAccelbyteGameMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetOverrideAccelbyteGameMode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetOverrideAccelbyteGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetOverrideAccelbyteGameMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetOverrideAccelbyteGameMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetOverrideAccelbyteGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetOverrideAccelbyteGameMode", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetOverrideAccelbyteGameMode_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetOverrideAccelbyteGameMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetOverrideAccelbyteGameMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetOverrideAccelbyteGameMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetOverrideAccelbyteGameMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetOverrideAccelbyteGameMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetOverrideAccelbyteGameMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetOverrideLevelName_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetOverrideLevelName_Parms
		{
			const UObject* WorldContextObject;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetOverrideLevelName_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetOverrideLevelName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetOverrideLevelName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetOverrideLevelName_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetOverrideLevelName_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetOverrideLevelName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetOverrideLevelName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetOverrideLevelName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetOverrideLevelName_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetOverrideLevelName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetOverrideLevelName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetOverrideLevelName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetOverrideLevelName", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetOverrideLevelName_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetOverrideLevelName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetOverrideLevelName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetOverrideLevelName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetOverrideLevelName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetOverrideLevelName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetOverrideLevelName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyData_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetPartyData_Parms
		{
			UObject* WorldContextObject;
			FSBZPartyData OutPartyData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPartyData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetPartyData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyData_Statics::NewProp_OutPartyData = { "OutPartyData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetPartyData_Parms, OutPartyData), Z_Construct_UScriptStruct_FSBZPartyData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventGetPartyData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventGetPartyData_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyData_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyData_Statics::NewProp_OutPartyData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetPartyData", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetPartyData_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyJoinType_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetPartyJoinType_Parms
		{
			UObject* WorldContextObject;
			ESBZOnlineJoinType ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyJoinType_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetPartyJoinType_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyJoinType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyJoinType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetPartyJoinType_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZOnlineJoinType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyJoinType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyJoinType_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyJoinType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyJoinType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyJoinType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyJoinType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetPartyJoinType", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetPartyJoinType_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyJoinType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyJoinType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyJoinType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyJoinType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyJoinType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyJoinType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyMemberAvatar_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetPartyMemberAvatar_Parms
		{
			UObject* WorldContextObject;
			int32 PlayerIndex;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyMemberAvatar_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetPartyMemberAvatar_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyMemberAvatar_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetPartyMemberAvatar_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyMemberAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetPartyMemberAvatar_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyMemberAvatar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyMemberAvatar_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyMemberAvatar_Statics::NewProp_PlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyMemberAvatar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyMemberAvatar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyMemberAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetPartyMemberAvatar", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetPartyMemberAvatar_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyMemberAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyMemberAvatar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyMemberAvatar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyMemberAvatar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyMemberAvatar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyMemberAvatar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyMembersCount_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetPartyMembersCount_Parms
		{
			UObject* WorldContextObject;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyMembersCount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetPartyMembersCount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyMembersCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetPartyMembersCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyMembersCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyMembersCount_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyMembersCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyMembersCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyMembersCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetPartyMembersCount", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetPartyMembersCount_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyMembersCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyMembersCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyMembersCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyMembersCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyMembersCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyMembersCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPathNameFromLevelIdx_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetPathNameFromLevelIdx_Parms
		{
			const UObject* WorldContextObject;
			int32 LevelIdx;
			FSoftObjectPath ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LevelIdx;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPathNameFromLevelIdx_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPathNameFromLevelIdx_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetPathNameFromLevelIdx_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPathNameFromLevelIdx_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPathNameFromLevelIdx_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPathNameFromLevelIdx_Statics::NewProp_LevelIdx = { "LevelIdx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetPathNameFromLevelIdx_Parms, LevelIdx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPathNameFromLevelIdx_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetPathNameFromLevelIdx_Parms, ReturnValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPathNameFromLevelIdx_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPathNameFromLevelIdx_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPathNameFromLevelIdx_Statics::NewProp_LevelIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPathNameFromLevelIdx_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPathNameFromLevelIdx_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPathNameFromLevelIdx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetPathNameFromLevelIdx", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetPathNameFromLevelIdx_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPathNameFromLevelIdx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPathNameFromLevelIdx_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPathNameFromLevelIdx_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPathNameFromLevelIdx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPathNameFromLevelIdx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPathNameFromLevelIdx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatform_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetPlatform_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatform_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetPlatform_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZPlatform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatform_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetPlatform", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetPlatform_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatformFromAccelbytePlatformId_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetPlatformFromAccelbytePlatformId_Parms
		{
			FString AccelbytePlatformId;
			ESBZPlatform ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelbytePlatformId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccelbytePlatformId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatformFromAccelbytePlatformId_Statics::NewProp_AccelbytePlatformId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatformFromAccelbytePlatformId_Statics::NewProp_AccelbytePlatformId = { "AccelbytePlatformId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetPlatformFromAccelbytePlatformId_Parms, AccelbytePlatformId), METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatformFromAccelbytePlatformId_Statics::NewProp_AccelbytePlatformId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatformFromAccelbytePlatformId_Statics::NewProp_AccelbytePlatformId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatformFromAccelbytePlatformId_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatformFromAccelbytePlatformId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetPlatformFromAccelbytePlatformId_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZPlatform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatformFromAccelbytePlatformId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatformFromAccelbytePlatformId_Statics::NewProp_AccelbytePlatformId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatformFromAccelbytePlatformId_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatformFromAccelbytePlatformId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatformFromAccelbytePlatformId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatformFromAccelbytePlatformId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetPlatformFromAccelbytePlatformId", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetPlatformFromAccelbytePlatformId_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatformFromAccelbytePlatformId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatformFromAccelbytePlatformId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatformFromAccelbytePlatformId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatformFromAccelbytePlatformId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatformFromAccelbytePlatformId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatformFromAccelbytePlatformId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerAvatar_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetPlayerAvatar_Parms
		{
			UObject* WorldContextObject;
			int32 PlayerIndex;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerAvatar_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetPlayerAvatar_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerAvatar_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetPlayerAvatar_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetPlayerAvatar_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerAvatar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerAvatar_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerAvatar_Statics::NewProp_PlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerAvatar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerAvatar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetPlayerAvatar", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetPlayerAvatar_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerAvatar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerAvatar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerAvatar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerAvatar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerAvatar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerAvatarByUniqueId_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetPlayerAvatarByUniqueId_Parms
		{
			UObject* WorldContextObject;
			FUniqueNetIdRepl UniqueNetId;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerAvatarByUniqueId_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetPlayerAvatarByUniqueId_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerAvatarByUniqueId_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetPlayerAvatarByUniqueId_Parms, UniqueNetId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerAvatarByUniqueId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetPlayerAvatarByUniqueId_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerAvatarByUniqueId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerAvatarByUniqueId_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerAvatarByUniqueId_Statics::NewProp_UniqueNetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerAvatarByUniqueId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerAvatarByUniqueId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerAvatarByUniqueId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetPlayerAvatarByUniqueId", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetPlayerAvatarByUniqueId_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerAvatarByUniqueId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerAvatarByUniqueId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerAvatarByUniqueId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerAvatarByUniqueId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerAvatarByUniqueId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerAvatarByUniqueId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerDisplayNameByUniqueId_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetPlayerDisplayNameByUniqueId_Parms
		{
			UObject* WorldContextObject;
			FUniqueNetIdRepl UniqueNetId;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerDisplayNameByUniqueId_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetPlayerDisplayNameByUniqueId_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerDisplayNameByUniqueId_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetPlayerDisplayNameByUniqueId_Parms, UniqueNetId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerDisplayNameByUniqueId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetPlayerDisplayNameByUniqueId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerDisplayNameByUniqueId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerDisplayNameByUniqueId_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerDisplayNameByUniqueId_Statics::NewProp_UniqueNetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerDisplayNameByUniqueId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerDisplayNameByUniqueId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerDisplayNameByUniqueId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetPlayerDisplayNameByUniqueId", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetPlayerDisplayNameByUniqueId_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerDisplayNameByUniqueId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerDisplayNameByUniqueId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerDisplayNameByUniqueId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerDisplayNameByUniqueId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerDisplayNameByUniqueId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerDisplayNameByUniqueId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayersCount_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetPlayersCount_Parms
		{
			UObject* WorldContextObject;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayersCount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetPlayersCount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayersCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetPlayersCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayersCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayersCount_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayersCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayersCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayersCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetPlayersCount", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetPlayersCount_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayersCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayersCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayersCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayersCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayersCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayersCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSBZOnline_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetSBZOnline_Parms
		{
			const UObject* WorldContextObject;
			USBZOnlineSession* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSBZOnline_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSBZOnline_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetSBZOnline_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSBZOnline_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSBZOnline_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSBZOnline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetSBZOnline_Parms, ReturnValue), Z_Construct_UClass_USBZOnlineSession_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSBZOnline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSBZOnline_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSBZOnline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSBZOnline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSBZOnline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetSBZOnline", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetSBZOnline_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSBZOnline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSBZOnline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSBZOnline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSBZOnline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSBZOnline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSBZOnline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompaniesArgument_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetSecurityCompaniesArgument_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompaniesArgument_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompaniesArgument_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZSecurityCompany, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompaniesArgument_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetSecurityCompaniesArgument_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompaniesArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompaniesArgument_Statics::NewProp_ReturnValue_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompaniesArgument_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompaniesArgument_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompaniesArgument_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompaniesArgument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetSecurityCompaniesArgument", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetSecurityCompaniesArgument_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompaniesArgument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompaniesArgument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompaniesArgument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompaniesArgument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompaniesArgument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompaniesArgument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompanyListForDifficulty_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetSecurityCompanyListForDifficulty_Parms
		{
			const UObject* WorldContextObject;
			FString LevelName;
			ESBZDifficulty Difficulty;
			TArray<ESBZSecurityCompany> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Difficulty_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Difficulty;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompanyListForDifficulty_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompanyListForDifficulty_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetSecurityCompanyListForDifficulty_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompanyListForDifficulty_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompanyListForDifficulty_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompanyListForDifficulty_Statics::NewProp_LevelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompanyListForDifficulty_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetSecurityCompanyListForDifficulty_Parms, LevelName), METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompanyListForDifficulty_Statics::NewProp_LevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompanyListForDifficulty_Statics::NewProp_LevelName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompanyListForDifficulty_Statics::NewProp_Difficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompanyListForDifficulty_Statics::NewProp_Difficulty = { "Difficulty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetSecurityCompanyListForDifficulty_Parms, Difficulty), Z_Construct_UEnum_Starbreeze_ESBZDifficulty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompanyListForDifficulty_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompanyListForDifficulty_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZSecurityCompany, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompanyListForDifficulty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetSecurityCompanyListForDifficulty_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompanyListForDifficulty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompanyListForDifficulty_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompanyListForDifficulty_Statics::NewProp_LevelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompanyListForDifficulty_Statics::NewProp_Difficulty_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompanyListForDifficulty_Statics::NewProp_Difficulty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompanyListForDifficulty_Statics::NewProp_ReturnValue_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompanyListForDifficulty_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompanyListForDifficulty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompanyListForDifficulty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompanyListForDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetSecurityCompanyListForDifficulty", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetSecurityCompanyListForDifficulty_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompanyListForDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompanyListForDifficulty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompanyListForDifficulty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompanyListForDifficulty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompanyListForDifficulty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompanyListForDifficulty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSessionInfo_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetSessionInfo_Parms
		{
			UObject* WorldContextObject;
			EOnlineSessionInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSessionInfo_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetSessionInfo_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSessionInfo_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSessionInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetSessionInfo_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_EOnlineSessionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSessionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSessionInfo_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSessionInfo_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSessionInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSessionInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSessionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetSessionInfo", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetSessionInfo_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSessionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSessionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSessionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSessionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSessionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSessionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSingleNameToShow_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetSingleNameToShow_Parms
		{
			FString PlatformName;
			FString NebulaName;
			ESBZPlatform Platform;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NebulaName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NebulaName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Platform_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Platform;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSingleNameToShow_Statics::NewProp_PlatformName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSingleNameToShow_Statics::NewProp_PlatformName = { "PlatformName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetSingleNameToShow_Parms, PlatformName), METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSingleNameToShow_Statics::NewProp_PlatformName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSingleNameToShow_Statics::NewProp_PlatformName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSingleNameToShow_Statics::NewProp_NebulaName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSingleNameToShow_Statics::NewProp_NebulaName = { "NebulaName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetSingleNameToShow_Parms, NebulaName), METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSingleNameToShow_Statics::NewProp_NebulaName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSingleNameToShow_Statics::NewProp_NebulaName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSingleNameToShow_Statics::NewProp_Platform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSingleNameToShow_Statics::NewProp_Platform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSingleNameToShow_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetSingleNameToShow_Parms, Platform), Z_Construct_UEnum_Starbreeze_ESBZPlatform, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSingleNameToShow_Statics::NewProp_Platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSingleNameToShow_Statics::NewProp_Platform_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSingleNameToShow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetSingleNameToShow_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSingleNameToShow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSingleNameToShow_Statics::NewProp_PlatformName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSingleNameToShow_Statics::NewProp_NebulaName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSingleNameToShow_Statics::NewProp_Platform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSingleNameToShow_Statics::NewProp_Platform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSingleNameToShow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSingleNameToShow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSingleNameToShow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetSingleNameToShow", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetSingleNameToShow_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSingleNameToShow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSingleNameToShow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSingleNameToShow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSingleNameToShow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSingleNameToShow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSingleNameToShow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetUiLobbyInfo_Statics
	{
		struct SBZOnlineFunctionLibrary_eventGetUiLobbyInfo_Parms
		{
			UObject* WorldContextObject;
			TArray<FSBZLobbyCharacterInfoUi> OutInfo;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutInfo_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetUiLobbyInfo_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetUiLobbyInfo_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetUiLobbyInfo_Statics::NewProp_OutInfo_Inner = { "OutInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZLobbyCharacterInfoUi, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetUiLobbyInfo_Statics::NewProp_OutInfo = { "OutInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventGetUiLobbyInfo_Parms, OutInfo), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetUiLobbyInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetUiLobbyInfo_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetUiLobbyInfo_Statics::NewProp_OutInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetUiLobbyInfo_Statics::NewProp_OutInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetUiLobbyInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetUiLobbyInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "GetUiLobbyInfo", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventGetUiLobbyInfo_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetUiLobbyInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetUiLobbyInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetUiLobbyInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetUiLobbyInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetUiLobbyInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetUiLobbyInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_HasPrivilege_Statics
	{
		struct SBZOnlineFunctionLibrary_eventHasPrivilege_Parms
		{
			const UObject* WorldContextObject;
			ESBZUserPrivilegesProxy Privilege;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Privilege_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Privilege;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_HasPrivilege_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_HasPrivilege_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventHasPrivilege_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_HasPrivilege_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_HasPrivilege_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_HasPrivilege_Statics::NewProp_Privilege_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_HasPrivilege_Statics::NewProp_Privilege = { "Privilege", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventHasPrivilege_Parms, Privilege), Z_Construct_UEnum_Starbreeze_ESBZUserPrivilegesProxy, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_HasPrivilege_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventHasPrivilege_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_HasPrivilege_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventHasPrivilege_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_HasPrivilege_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_HasPrivilege_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_HasPrivilege_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_HasPrivilege_Statics::NewProp_Privilege_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_HasPrivilege_Statics::NewProp_Privilege,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_HasPrivilege_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_HasPrivilege_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_HasPrivilege_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "HasPrivilege", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventHasPrivilege_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_HasPrivilege_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_HasPrivilege_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_HasPrivilege_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_HasPrivilege_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_HasPrivilege()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_HasPrivilege_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_HideSessionFromJoin_Statics
	{
		struct SBZOnlineFunctionLibrary_eventHideSessionFromJoin_Parms
		{
			UObject* WorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_HideSessionFromJoin_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventHideSessionFromJoin_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_HideSessionFromJoin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_HideSessionFromJoin_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_HideSessionFromJoin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_HideSessionFromJoin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "HideSessionFromJoin", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventHideSessionFromJoin_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_HideSessionFromJoin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_HideSessionFromJoin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_HideSessionFromJoin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_HideSessionFromJoin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_HideSessionFromJoin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_HideSessionFromJoin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsAccelByteMatchmakingDisabled_Statics
	{
		struct SBZOnlineFunctionLibrary_eventIsAccelByteMatchmakingDisabled_Parms
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
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsAccelByteMatchmakingDisabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventIsAccelByteMatchmakingDisabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsAccelByteMatchmakingDisabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventIsAccelByteMatchmakingDisabled_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsAccelByteMatchmakingDisabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsAccelByteMatchmakingDisabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsAccelByteMatchmakingDisabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsAccelByteMatchmakingDisabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsAccelByteMatchmakingDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "IsAccelByteMatchmakingDisabled", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventIsAccelByteMatchmakingDisabled_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsAccelByteMatchmakingDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsAccelByteMatchmakingDisabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsAccelByteMatchmakingDisabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsAccelByteMatchmakingDisabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsAccelByteMatchmakingDisabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsAccelByteMatchmakingDisabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsAccelByteV2SessionsEnabled_Statics
	{
		struct SBZOnlineFunctionLibrary_eventIsAccelByteV2SessionsEnabled_Parms
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
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsAccelByteV2SessionsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventIsAccelByteV2SessionsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsAccelByteV2SessionsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventIsAccelByteV2SessionsEnabled_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsAccelByteV2SessionsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsAccelByteV2SessionsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsAccelByteV2SessionsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsAccelByteV2SessionsEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsAccelByteV2SessionsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "IsAccelByteV2SessionsEnabled", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventIsAccelByteV2SessionsEnabled_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsAccelByteV2SessionsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsAccelByteV2SessionsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsAccelByteV2SessionsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsAccelByteV2SessionsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsAccelByteV2SessionsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsAccelByteV2SessionsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsActionPhaseClient_Statics
	{
		struct SBZOnlineFunctionLibrary_eventIsActionPhaseClient_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsActionPhaseClient_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventIsActionPhaseClient_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsActionPhaseClient_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventIsActionPhaseClient_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsActionPhaseClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventIsActionPhaseClient_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsActionPhaseClient_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsActionPhaseClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsActionPhaseClient_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsActionPhaseClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsActionPhaseClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsActionPhaseClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "IsActionPhaseClient", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventIsActionPhaseClient_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsActionPhaseClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsActionPhaseClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsActionPhaseClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsActionPhaseClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsActionPhaseClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsActionPhaseClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDebugRandomSeedProvided_Statics
	{
		struct SBZOnlineFunctionLibrary_eventIsDebugRandomSeedProvided_Parms
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
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDebugRandomSeedProvided_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventIsDebugRandomSeedProvided_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDebugRandomSeedProvided_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventIsDebugRandomSeedProvided_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDebugRandomSeedProvided_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDebugRandomSeedProvided_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDebugRandomSeedProvided_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDebugRandomSeedProvided_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDebugRandomSeedProvided_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "IsDebugRandomSeedProvided", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventIsDebugRandomSeedProvided_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDebugRandomSeedProvided_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDebugRandomSeedProvided_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDebugRandomSeedProvided_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDebugRandomSeedProvided_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDebugRandomSeedProvided()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDebugRandomSeedProvided_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDifficultyArgumentProvided_Statics
	{
		struct SBZOnlineFunctionLibrary_eventIsDifficultyArgumentProvided_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDifficultyArgumentProvided_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDifficultyArgumentProvided_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventIsDifficultyArgumentProvided_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDifficultyArgumentProvided_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDifficultyArgumentProvided_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDifficultyArgumentProvided_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventIsDifficultyArgumentProvided_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDifficultyArgumentProvided_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventIsDifficultyArgumentProvided_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDifficultyArgumentProvided_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDifficultyArgumentProvided_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDifficultyArgumentProvided_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDifficultyArgumentProvided_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDifficultyArgumentProvided_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDifficultyArgumentProvided_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "IsDifficultyArgumentProvided", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventIsDifficultyArgumentProvided_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDifficultyArgumentProvided_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDifficultyArgumentProvided_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDifficultyArgumentProvided_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDifficultyArgumentProvided_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDifficultyArgumentProvided()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDifficultyArgumentProvided_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsEOSActive_Statics
	{
		struct SBZOnlineFunctionLibrary_eventIsEOSActive_Parms
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
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsEOSActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventIsEOSActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsEOSActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventIsEOSActive_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsEOSActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsEOSActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsEOSActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsEOSActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsEOSActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "IsEOSActive", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventIsEOSActive_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsEOSActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsEOSActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsEOSActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsEOSActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsEOSActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsEOSActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsForceLocalProgressionSaveFile_Statics
	{
		struct SBZOnlineFunctionLibrary_eventIsForceLocalProgressionSaveFile_Parms
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
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsForceLocalProgressionSaveFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventIsForceLocalProgressionSaveFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsForceLocalProgressionSaveFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventIsForceLocalProgressionSaveFile_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsForceLocalProgressionSaveFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsForceLocalProgressionSaveFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsForceLocalProgressionSaveFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsForceLocalProgressionSaveFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsForceLocalProgressionSaveFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "IsForceLocalProgressionSaveFile", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventIsForceLocalProgressionSaveFile_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsForceLocalProgressionSaveFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsForceLocalProgressionSaveFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsForceLocalProgressionSaveFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsForceLocalProgressionSaveFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsForceLocalProgressionSaveFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsForceLocalProgressionSaveFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsInParty_Statics
	{
		struct SBZOnlineFunctionLibrary_eventIsInParty_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsInParty_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventIsInParty_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsInParty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventIsInParty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsInParty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventIsInParty_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsInParty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsInParty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsInParty_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsInParty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsInParty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsInParty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "IsInParty", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventIsInParty_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsInParty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsInParty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsInParty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsInParty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsInParty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsInParty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsInSession_Statics
	{
		struct SBZOnlineFunctionLibrary_eventIsInSession_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsInSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventIsInSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsInSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventIsInSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsInSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventIsInSession_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsInSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsInSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsInSession_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsInSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsInSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsInSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "IsInSession", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventIsInSession_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsInSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsInSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsInSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsInSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsInSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsInSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLobbyClient_Statics
	{
		struct SBZOnlineFunctionLibrary_eventIsLobbyClient_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLobbyClient_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventIsLobbyClient_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLobbyClient_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventIsLobbyClient_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLobbyClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventIsLobbyClient_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLobbyClient_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLobbyClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLobbyClient_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLobbyClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLobbyClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLobbyClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "IsLobbyClient", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventIsLobbyClient_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLobbyClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLobbyClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLobbyClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLobbyClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLobbyClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLobbyClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLobbyHost_Statics
	{
		struct SBZOnlineFunctionLibrary_eventIsLobbyHost_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLobbyHost_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventIsLobbyHost_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLobbyHost_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventIsLobbyHost_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLobbyHost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventIsLobbyHost_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLobbyHost_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLobbyHost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLobbyHost_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLobbyHost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLobbyHost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLobbyHost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "IsLobbyHost", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventIsLobbyHost_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLobbyHost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLobbyHost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLobbyHost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLobbyHost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLobbyHost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLobbyHost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLocalClientReady_Statics
	{
		struct SBZOnlineFunctionLibrary_eventIsLocalClientReady_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLocalClientReady_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventIsLocalClientReady_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLocalClientReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventIsLocalClientReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLocalClientReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventIsLocalClientReady_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLocalClientReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLocalClientReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLocalClientReady_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLocalClientReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLocalClientReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLocalClientReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "IsLocalClientReady", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventIsLocalClientReady_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLocalClientReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLocalClientReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLocalClientReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLocalClientReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLocalClientReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLocalClientReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLocalPlayerInDropInLobby_Statics
	{
		struct SBZOnlineFunctionLibrary_eventIsLocalPlayerInDropInLobby_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLocalPlayerInDropInLobby_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventIsLocalPlayerInDropInLobby_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLocalPlayerInDropInLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventIsLocalPlayerInDropInLobby_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLocalPlayerInDropInLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventIsLocalPlayerInDropInLobby_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLocalPlayerInDropInLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLocalPlayerInDropInLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLocalPlayerInDropInLobby_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLocalPlayerInDropInLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLocalPlayerInDropInLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLocalPlayerInDropInLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "IsLocalPlayerInDropInLobby", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventIsLocalPlayerInDropInLobby_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLocalPlayerInDropInLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLocalPlayerInDropInLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLocalPlayerInDropInLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLocalPlayerInDropInLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLocalPlayerInDropInLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLocalPlayerInDropInLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoChallenges_Statics
	{
		struct SBZOnlineFunctionLibrary_eventIsNoChallenges_Parms
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
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoChallenges_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventIsNoChallenges_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoChallenges_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventIsNoChallenges_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoChallenges_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoChallenges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoChallenges_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoChallenges_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoChallenges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "IsNoChallenges", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventIsNoChallenges_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoChallenges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoChallenges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoChallenges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoChallenges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoChallenges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoChallenges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoHud_Statics
	{
		struct SBZOnlineFunctionLibrary_eventIsNoHud_Parms
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
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoHud_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventIsNoHud_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoHud_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventIsNoHud_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoHud_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoHud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoHud_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoHud_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoHud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "IsNoHud", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventIsNoHud_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoHud_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoHud_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoHud_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoHud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoHud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoHud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoSteam_Statics
	{
		struct SBZOnlineFunctionLibrary_eventIsNoSteam_Parms
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
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoSteam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventIsNoSteam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoSteam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventIsNoSteam_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoSteam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoSteam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoSteam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoSteam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoSteam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "IsNoSteam", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventIsNoSteam_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoSteam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoSteam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoSteam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoSteam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoSteam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoSteam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsOwnUniqueId_Statics
	{
		struct SBZOnlineFunctionLibrary_eventIsOwnUniqueId_Parms
		{
			UObject* WorldContextObject;
			FUniqueNetIdRepl UniqueNetId;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsOwnUniqueId_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventIsOwnUniqueId_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsOwnUniqueId_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventIsOwnUniqueId_Parms, UniqueNetId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsOwnUniqueId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventIsOwnUniqueId_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsOwnUniqueId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventIsOwnUniqueId_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsOwnUniqueId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsOwnUniqueId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsOwnUniqueId_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsOwnUniqueId_Statics::NewProp_UniqueNetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsOwnUniqueId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsOwnUniqueId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsOwnUniqueId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "IsOwnUniqueId", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventIsOwnUniqueId_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsOwnUniqueId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsOwnUniqueId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsOwnUniqueId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsOwnUniqueId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsOwnUniqueId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsOwnUniqueId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPartyClient_Statics
	{
		struct SBZOnlineFunctionLibrary_eventIsPartyClient_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPartyClient_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventIsPartyClient_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPartyClient_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventIsPartyClient_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPartyClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventIsPartyClient_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPartyClient_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPartyClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPartyClient_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPartyClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPartyClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPartyClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "IsPartyClient", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventIsPartyClient_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPartyClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPartyClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPartyClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPartyClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPartyClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPartyClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPartyOwner_Statics
	{
		struct SBZOnlineFunctionLibrary_eventIsPartyOwner_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPartyOwner_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventIsPartyOwner_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPartyOwner_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventIsPartyOwner_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPartyOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventIsPartyOwner_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPartyOwner_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPartyOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPartyOwner_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPartyOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPartyOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPartyOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "IsPartyOwner", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventIsPartyOwner_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPartyOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPartyOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPartyOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPartyOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPartyOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPartyOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerInParty_Statics
	{
		struct SBZOnlineFunctionLibrary_eventIsPlayerInParty_Parms
		{
			UObject* WorldContextObject;
			FUniqueNetIdRepl UniqueNetId;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerInParty_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventIsPlayerInParty_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerInParty_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventIsPlayerInParty_Parms, UniqueNetId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerInParty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventIsPlayerInParty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerInParty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventIsPlayerInParty_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerInParty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerInParty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerInParty_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerInParty_Statics::NewProp_UniqueNetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerInParty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerInParty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerInParty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "IsPlayerInParty", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventIsPlayerInParty_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerInParty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerInParty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerInParty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerInParty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerInParty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerInParty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerMuted_Statics
	{
		struct SBZOnlineFunctionLibrary_eventIsPlayerMuted_Parms
		{
			UObject* WorldContextObject;
			FUniqueNetIdRepl UniqueNetId;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerMuted_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventIsPlayerMuted_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerMuted_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventIsPlayerMuted_Parms, UniqueNetId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerMuted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventIsPlayerMuted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerMuted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventIsPlayerMuted_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerMuted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerMuted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerMuted_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerMuted_Statics::NewProp_UniqueNetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerMuted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerMuted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerMuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "IsPlayerMuted", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventIsPlayerMuted_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerMuted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerMuted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerMuted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerMuted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerMuted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerPartyOwner_Statics
	{
		struct SBZOnlineFunctionLibrary_eventIsPlayerPartyOwner_Parms
		{
			UObject* WorldContextObject;
			FUniqueNetIdRepl UniqueNetId;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerPartyOwner_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventIsPlayerPartyOwner_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerPartyOwner_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventIsPlayerPartyOwner_Parms, UniqueNetId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerPartyOwner_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventIsPlayerPartyOwner_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerPartyOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventIsPlayerPartyOwner_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerPartyOwner_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerPartyOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerPartyOwner_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerPartyOwner_Statics::NewProp_UniqueNetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerPartyOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerPartyOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerPartyOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "IsPlayerPartyOwner", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventIsPlayerPartyOwner_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerPartyOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerPartyOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerPartyOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerPartyOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerPartyOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerPartyOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsProductOwned_Statics
	{
		struct SBZOnlineFunctionLibrary_eventIsProductOwned_Parms
		{
			int32 ProductId;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProductId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsProductOwned_Statics::NewProp_ProductId = { "ProductId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventIsProductOwned_Parms, ProductId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsProductOwned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventIsProductOwned_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsProductOwned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventIsProductOwned_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsProductOwned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsProductOwned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsProductOwned_Statics::NewProp_ProductId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsProductOwned_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsProductOwned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsProductOwned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "IsProductOwned", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventIsProductOwned_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsProductOwned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsProductOwned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsProductOwned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsProductOwned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsProductOwned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsProductOwned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsRequestInProgress_Statics
	{
		struct SBZOnlineFunctionLibrary_eventIsRequestInProgress_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsRequestInProgress_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventIsRequestInProgress_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsRequestInProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventIsRequestInProgress_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsRequestInProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventIsRequestInProgress_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsRequestInProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsRequestInProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsRequestInProgress_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsRequestInProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsRequestInProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsRequestInProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "IsRequestInProgress", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventIsRequestInProgress_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsRequestInProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsRequestInProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsRequestInProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsRequestInProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsRequestInProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsRequestInProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSameUniqueId_Statics
	{
		struct SBZOnlineFunctionLibrary_eventIsSameUniqueId_Parms
		{
			FUniqueNetIdRepl UniqueNetIdA;
			FUniqueNetIdRepl UniqueNetIdB;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetIdA;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetIdB;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSameUniqueId_Statics::NewProp_UniqueNetIdA = { "UniqueNetIdA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventIsSameUniqueId_Parms, UniqueNetIdA), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSameUniqueId_Statics::NewProp_UniqueNetIdB = { "UniqueNetIdB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventIsSameUniqueId_Parms, UniqueNetIdB), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSameUniqueId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventIsSameUniqueId_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSameUniqueId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventIsSameUniqueId_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSameUniqueId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSameUniqueId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSameUniqueId_Statics::NewProp_UniqueNetIdA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSameUniqueId_Statics::NewProp_UniqueNetIdB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSameUniqueId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSameUniqueId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSameUniqueId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "IsSameUniqueId", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventIsSameUniqueId_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSameUniqueId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSameUniqueId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSameUniqueId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSameUniqueId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSameUniqueId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSameUniqueId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSecurityCompaniesProvided_Statics
	{
		struct SBZOnlineFunctionLibrary_eventIsSecurityCompaniesProvided_Parms
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
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSecurityCompaniesProvided_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventIsSecurityCompaniesProvided_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSecurityCompaniesProvided_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventIsSecurityCompaniesProvided_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSecurityCompaniesProvided_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSecurityCompaniesProvided_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSecurityCompaniesProvided_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSecurityCompaniesProvided_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSecurityCompaniesProvided_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "IsSecurityCompaniesProvided", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventIsSecurityCompaniesProvided_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSecurityCompaniesProvided_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSecurityCompaniesProvided_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSecurityCompaniesProvided_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSecurityCompaniesProvided_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSecurityCompaniesProvided()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSecurityCompaniesProvided_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsServerAcceptingSlots_Statics
	{
		struct SBZOnlineFunctionLibrary_eventIsServerAcceptingSlots_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsServerAcceptingSlots_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventIsServerAcceptingSlots_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsServerAcceptingSlots_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventIsServerAcceptingSlots_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsServerAcceptingSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventIsServerAcceptingSlots_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsServerAcceptingSlots_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsServerAcceptingSlots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsServerAcceptingSlots_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsServerAcceptingSlots_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsServerAcceptingSlots_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsServerAcceptingSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "IsServerAcceptingSlots", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventIsServerAcceptingSlots_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsServerAcceptingSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsServerAcceptingSlots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsServerAcceptingSlots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsServerAcceptingSlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsServerAcceptingSlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsServerAcceptingSlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsShippingBuild_Statics
	{
		struct SBZOnlineFunctionLibrary_eventIsShippingBuild_Parms
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
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsShippingBuild_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventIsShippingBuild_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsShippingBuild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventIsShippingBuild_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsShippingBuild_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsShippingBuild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsShippingBuild_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsShippingBuild_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsShippingBuild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "IsShippingBuild", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventIsShippingBuild_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsShippingBuild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsShippingBuild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsShippingBuild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsShippingBuild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsShippingBuild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsShippingBuild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGame_Statics
	{
		struct SBZOnlineFunctionLibrary_eventIsSoloGame_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGame_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventIsSoloGame_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventIsSoloGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventIsSoloGame_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGame_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "IsSoloGame", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventIsSoloGame_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGameEnabled_Statics
	{
		struct SBZOnlineFunctionLibrary_eventIsSoloGameEnabled_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGameEnabled_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGameEnabled_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventIsSoloGameEnabled_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGameEnabled_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGameEnabled_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGameEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventIsSoloGameEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGameEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventIsSoloGameEnabled_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGameEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGameEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGameEnabled_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGameEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGameEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGameEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "IsSoloGameEnabled", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventIsSoloGameEnabled_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGameEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGameEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGameEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGameEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGameEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGameEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSteamActive_Statics
	{
		struct SBZOnlineFunctionLibrary_eventIsSteamActive_Parms
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
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSteamActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventIsSteamActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSteamActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventIsSteamActive_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSteamActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSteamActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSteamActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSteamActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSteamActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "IsSteamActive", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventIsSteamActive_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSteamActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSteamActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSteamActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSteamActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSteamActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSteamActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsTitleOnline_Statics
	{
		struct SBZOnlineFunctionLibrary_eventIsTitleOnline_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsTitleOnline_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventIsTitleOnline_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsTitleOnline_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventIsTitleOnline_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsTitleOnline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventIsTitleOnline_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsTitleOnline_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsTitleOnline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsTitleOnline_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsTitleOnline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsTitleOnline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsTitleOnline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "IsTitleOnline", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventIsTitleOnline_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsTitleOnline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsTitleOnline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsTitleOnline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsTitleOnline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsTitleOnline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsTitleOnline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsUserOnline_Statics
	{
		struct SBZOnlineFunctionLibrary_eventIsUserOnline_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsUserOnline_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventIsUserOnline_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsUserOnline_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventIsUserOnline_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsUserOnline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventIsUserOnline_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsUserOnline_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsUserOnline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsUserOnline_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsUserOnline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsUserOnline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsUserOnline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "IsUserOnline", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventIsUserOnline_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsUserOnline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsUserOnline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsUserOnline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsUserOnline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsUserOnline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsUserOnline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsWinGDKActive_Statics
	{
		struct SBZOnlineFunctionLibrary_eventIsWinGDKActive_Parms
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
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsWinGDKActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventIsWinGDKActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsWinGDKActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventIsWinGDKActive_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsWinGDKActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsWinGDKActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsWinGDKActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsWinGDKActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsWinGDKActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "IsWinGDKActive", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventIsWinGDKActive_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsWinGDKActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsWinGDKActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsWinGDKActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsWinGDKActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsWinGDKActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsWinGDKActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_LevelIdxToPath_Statics
	{
		struct SBZOnlineFunctionLibrary_eventLevelIdxToPath_Parms
		{
			const UObject* WorldContextObject;
			FSoftObjectPath ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_LevelIdxToPath_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_LevelIdxToPath_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventLevelIdxToPath_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_LevelIdxToPath_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_LevelIdxToPath_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_LevelIdxToPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventLevelIdxToPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_LevelIdxToPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_LevelIdxToPath_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_LevelIdxToPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_LevelIdxToPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_LevelIdxToPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "LevelIdxToPath", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventLevelIdxToPath_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_LevelIdxToPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_LevelIdxToPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_LevelIdxToPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_LevelIdxToPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_LevelIdxToPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_LevelIdxToPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_MutePlayer_Statics
	{
		struct SBZOnlineFunctionLibrary_eventMutePlayer_Parms
		{
			UObject* WorldContextObject;
			FUniqueNetIdRepl UniqueNetId;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_MutePlayer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventMutePlayer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_MutePlayer_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventMutePlayer_Parms, UniqueNetId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_MutePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_MutePlayer_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_MutePlayer_Statics::NewProp_UniqueNetId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_MutePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_MutePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "MutePlayer", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventMutePlayer_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_MutePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_MutePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_MutePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_MutePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_MutePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_MutePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestCreateAccount_Statics
	{
		struct SBZOnlineFunctionLibrary_eventRequestCreateAccount_Parms
		{
			UObject* WorldContextObject;
			FSBZRegistrationFieldInfo RegistrationFieldInfo;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegistrationFieldInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RegistrationFieldInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestCreateAccount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventRequestCreateAccount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestCreateAccount_Statics::NewProp_RegistrationFieldInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestCreateAccount_Statics::NewProp_RegistrationFieldInfo = { "RegistrationFieldInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventRequestCreateAccount_Parms, RegistrationFieldInfo), Z_Construct_UScriptStruct_FSBZRegistrationFieldInfo, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestCreateAccount_Statics::NewProp_RegistrationFieldInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestCreateAccount_Statics::NewProp_RegistrationFieldInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestCreateAccount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestCreateAccount_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestCreateAccount_Statics::NewProp_RegistrationFieldInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestCreateAccount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestCreateAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "RequestCreateAccount", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventRequestCreateAccount_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestCreateAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestCreateAccount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestCreateAccount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestCreateAccount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestCreateAccount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestCreateAccount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestDirectJoin_Statics
	{
		struct SBZOnlineFunctionLibrary_eventRequestDirectJoin_Parms
		{
			UObject* WorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestDirectJoin_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventRequestDirectJoin_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestDirectJoin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestDirectJoin_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestDirectJoin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestDirectJoin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "RequestDirectJoin", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventRequestDirectJoin_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestDirectJoin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestDirectJoin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestDirectJoin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestDirectJoin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestDirectJoin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestDirectJoin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestLogin_Statics
	{
		struct SBZOnlineFunctionLibrary_eventRequestLogin_Parms
		{
			UObject* WorldContextObject;
			FSBZLoginFieldInfo LoginFieldInfo;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoginFieldInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoginFieldInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestLogin_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventRequestLogin_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestLogin_Statics::NewProp_LoginFieldInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestLogin_Statics::NewProp_LoginFieldInfo = { "LoginFieldInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventRequestLogin_Parms, LoginFieldInfo), Z_Construct_UScriptStruct_FSBZLoginFieldInfo, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestLogin_Statics::NewProp_LoginFieldInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestLogin_Statics::NewProp_LoginFieldInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestLogin_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestLogin_Statics::NewProp_LoginFieldInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestLogin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "RequestLogin", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventRequestLogin_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestLoginWithDeviceID_Statics
	{
		struct SBZOnlineFunctionLibrary_eventRequestLoginWithDeviceID_Parms
		{
			UObject* WorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestLoginWithDeviceID_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventRequestLoginWithDeviceID_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestLoginWithDeviceID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestLoginWithDeviceID_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestLoginWithDeviceID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestLoginWithDeviceID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "RequestLoginWithDeviceID", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventRequestLoginWithDeviceID_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestLoginWithDeviceID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestLoginWithDeviceID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestLoginWithDeviceID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestLoginWithDeviceID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestLoginWithDeviceID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestLoginWithDeviceID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestMergeParty_Statics
	{
		struct SBZOnlineFunctionLibrary_eventRequestMergeParty_Parms
		{
			UObject* WorldContextObject;
			bool bIsSelected;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_bIsSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestMergeParty_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventRequestMergeParty_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestMergeParty_Statics::NewProp_bIsSelected_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventRequestMergeParty_Parms*)Obj)->bIsSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestMergeParty_Statics::NewProp_bIsSelected = { "bIsSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventRequestMergeParty_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestMergeParty_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestMergeParty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestMergeParty_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestMergeParty_Statics::NewProp_bIsSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestMergeParty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestMergeParty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "RequestMergeParty", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventRequestMergeParty_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestMergeParty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestMergeParty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestMergeParty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestMergeParty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestMergeParty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestMergeParty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestRestartLevel_Statics
	{
		struct SBZOnlineFunctionLibrary_eventRequestRestartLevel_Parms
		{
			UObject* WorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestRestartLevel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventRequestRestartLevel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestRestartLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestRestartLevel_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestRestartLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestRestartLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "RequestRestartLevel", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventRequestRestartLevel_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestRestartLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestRestartLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestRestartLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestRestartLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestRestartLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestRestartLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestSteamLogin_Statics
	{
		struct SBZOnlineFunctionLibrary_eventRequestSteamLogin_Parms
		{
			UObject* WorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestSteamLogin_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventRequestSteamLogin_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestSteamLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestSteamLogin_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestSteamLogin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestSteamLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "RequestSteamLogin", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventRequestSteamLogin_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestSteamLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestSteamLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestSteamLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestSteamLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestSteamLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestSteamLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestVoteKickPlayer_Statics
	{
		struct SBZOnlineFunctionLibrary_eventRequestVoteKickPlayer_Parms
		{
			UObject* WorldContextObject;
			FUniqueNetIdRepl PlayerTargeted;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerTargeted_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerTargeted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestVoteKickPlayer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventRequestVoteKickPlayer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestVoteKickPlayer_Statics::NewProp_PlayerTargeted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestVoteKickPlayer_Statics::NewProp_PlayerTargeted = { "PlayerTargeted", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventRequestVoteKickPlayer_Parms, PlayerTargeted), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestVoteKickPlayer_Statics::NewProp_PlayerTargeted_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestVoteKickPlayer_Statics::NewProp_PlayerTargeted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestVoteKickPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestVoteKickPlayer_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestVoteKickPlayer_Statics::NewProp_PlayerTargeted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestVoteKickPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestVoteKickPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "RequestVoteKickPlayer", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventRequestVoteKickPlayer_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestVoteKickPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestVoteKickPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestVoteKickPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestVoteKickPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestVoteKickPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestVoteKickPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestVoteRestartLevel_Statics
	{
		struct SBZOnlineFunctionLibrary_eventRequestVoteRestartLevel_Parms
		{
			UObject* WorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestVoteRestartLevel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventRequestVoteRestartLevel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestVoteRestartLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestVoteRestartLevel_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestVoteRestartLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestVoteRestartLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "RequestVoteRestartLevel", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventRequestVoteRestartLevel_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestVoteRestartLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestVoteRestartLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestVoteRestartLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestVoteRestartLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestVoteRestartLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestVoteRestartLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetLocalClientReady_Statics
	{
		struct SBZOnlineFunctionLibrary_eventSetLocalClientReady_Parms
		{
			UObject* WorldContextObject;
			bool bIsClientReady;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_bIsClientReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsClientReady;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetLocalClientReady_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventSetLocalClientReady_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetLocalClientReady_Statics::NewProp_bIsClientReady_SetBit(void* Obj)
	{
		((SBZOnlineFunctionLibrary_eventSetLocalClientReady_Parms*)Obj)->bIsClientReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetLocalClientReady_Statics::NewProp_bIsClientReady = { "bIsClientReady", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZOnlineFunctionLibrary_eventSetLocalClientReady_Parms), &Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetLocalClientReady_Statics::NewProp_bIsClientReady_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetLocalClientReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetLocalClientReady_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetLocalClientReady_Statics::NewProp_bIsClientReady,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetLocalClientReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetLocalClientReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "SetLocalClientReady", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventSetLocalClientReady_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetLocalClientReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetLocalClientReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetLocalClientReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetLocalClientReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetLocalClientReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetLocalClientReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetMatchmakingRegion_Statics
	{
		struct SBZOnlineFunctionLibrary_eventSetMatchmakingRegion_Parms
		{
			const UObject* WorldContextObject;
			FString MatchmakingRegion;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchmakingRegion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchmakingRegion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetMatchmakingRegion_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetMatchmakingRegion_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventSetMatchmakingRegion_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetMatchmakingRegion_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetMatchmakingRegion_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetMatchmakingRegion_Statics::NewProp_MatchmakingRegion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetMatchmakingRegion_Statics::NewProp_MatchmakingRegion = { "MatchmakingRegion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventSetMatchmakingRegion_Parms, MatchmakingRegion), METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetMatchmakingRegion_Statics::NewProp_MatchmakingRegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetMatchmakingRegion_Statics::NewProp_MatchmakingRegion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetMatchmakingRegion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetMatchmakingRegion_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetMatchmakingRegion_Statics::NewProp_MatchmakingRegion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetMatchmakingRegion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetMatchmakingRegion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "SetMatchmakingRegion", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventSetMatchmakingRegion_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetMatchmakingRegion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetMatchmakingRegion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetMatchmakingRegion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetMatchmakingRegion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetMatchmakingRegion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetMatchmakingRegion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetSoloGameDisabled_Statics
	{
		struct SBZOnlineFunctionLibrary_eventSetSoloGameDisabled_Parms
		{
			UObject* WorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetSoloGameDisabled_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventSetSoloGameDisabled_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetSoloGameDisabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetSoloGameDisabled_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetSoloGameDisabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetSoloGameDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "SetSoloGameDisabled", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventSetSoloGameDisabled_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetSoloGameDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetSoloGameDisabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetSoloGameDisabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetSoloGameDisabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetSoloGameDisabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetSoloGameDisabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetSoloGameEnabled_Statics
	{
		struct SBZOnlineFunctionLibrary_eventSetSoloGameEnabled_Parms
		{
			UObject* WorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetSoloGameEnabled_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventSetSoloGameEnabled_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetSoloGameEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetSoloGameEnabled_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetSoloGameEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetSoloGameEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "SetSoloGameEnabled", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventSetSoloGameEnabled_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetSoloGameEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetSoloGameEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetSoloGameEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetSoloGameEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetSoloGameEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetSoloGameEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZOnlineFunctionLibrary_UnmutePlayer_Statics
	{
		struct SBZOnlineFunctionLibrary_eventUnmutePlayer_Parms
		{
			UObject* WorldContextObject;
			FUniqueNetIdRepl UniqueNetId;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_UnmutePlayer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventUnmutePlayer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_UnmutePlayer_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZOnlineFunctionLibrary_eventUnmutePlayer_Parms, UniqueNetId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZOnlineFunctionLibrary_UnmutePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_UnmutePlayer_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZOnlineFunctionLibrary_UnmutePlayer_Statics::NewProp_UniqueNetId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZOnlineFunctionLibrary_UnmutePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZOnlineFunctionLibrary_UnmutePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZOnlineFunctionLibrary, nullptr, "UnmutePlayer", nullptr, nullptr, sizeof(SBZOnlineFunctionLibrary_eventUnmutePlayer_Parms), Z_Construct_UFunction_USBZOnlineFunctionLibrary_UnmutePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_UnmutePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZOnlineFunctionLibrary_UnmutePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZOnlineFunctionLibrary_UnmutePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZOnlineFunctionLibrary_UnmutePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZOnlineFunctionLibrary_UnmutePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZOnlineFunctionLibrary_NoRegister()
	{
		return USBZOnlineFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USBZOnlineFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZOnlineFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZOnlineFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivatePartyInviteOverlay, "ActivatePartyInviteOverlay" }, // 4248166881
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivateProfileOverlay, "ActivateProfileOverlay" }, // 604994516
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_ActivateSessionInviteOverlay, "ActivateSessionInviteOverlay" }, // 1268020959
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_CanVoteForStayInParty, "CanVoteForStayInParty" }, // 2572046624
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugGetSessionParameters, "DebugGetSessionParameters" }, // 1001103623
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_DebugJoinByInvite, "DebugJoinByInvite" }, // 3442997272
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelByteLinkedAccountsUrl, "GetAccelByteLinkedAccountsUrl" }, // 3425855370
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelBytePlatformType, "GetAccelBytePlatformType" }, // 2176022682
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAccelbytePlatformTypeFromFirstPartyPlatformType, "GetAccelbytePlatformTypeFromFirstPartyPlatformType" }, // 2423221218
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetAllPlayersUniqueNetIds, "GetAllPlayersUniqueNetIds" }, // 3396361602
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetBeaconMissionInfo, "GetBeaconMissionInfo" }, // 3466544350
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetConnectionsCount, "GetConnectionsCount" }, // 19620945
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugLoginAndPassword, "GetDebugLoginAndPassword" }, // 3427590227
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugMatchmakingGroup, "GetDebugMatchmakingGroup" }, // 2099930539
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDebugRandomSeed, "GetDebugRandomSeed" }, // 2699657102
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetDifficultyIdxArgument, "GetDifficultyIdxArgument" }, // 446026208
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetFirstPartyPlatform, "GetFirstPartyPlatform" }, // 2280512248
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetFoundPlayersCount, "GetFoundPlayersCount" }, // 745709640
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetHostingProvider, "GetHostingProvider" }, // 2228197497
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetLastMatchID, "GetLastMatchID" }, // 2299061198
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingParameters, "GetMatchmakingParameters" }, // 1933393841
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMatchmakingProvider, "GetMatchmakingProvider" }, // 2990115940
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersArgument, "GetMaxPlayersArgument" }, // 465197676
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMaxPlayersForSession, "GetMaxPlayersForSession" }, // 298904492
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetMergePartyInformation, "GetMergePartyInformation" }, // 1876899167
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetOverrideAccelbyteGameMode, "GetOverrideAccelbyteGameMode" }, // 1898225768
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetOverrideLevelName, "GetOverrideLevelName" }, // 4240896139
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyData, "GetPartyData" }, // 1434774554
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyJoinType, "GetPartyJoinType" }, // 3329949434
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyMemberAvatar, "GetPartyMemberAvatar" }, // 1860770394
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPartyMembersCount, "GetPartyMembersCount" }, // 4122515276
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPathNameFromLevelIdx, "GetPathNameFromLevelIdx" }, // 3464027737
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatform, "GetPlatform" }, // 3458453226
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlatformFromAccelbytePlatformId, "GetPlatformFromAccelbytePlatformId" }, // 666981315
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerAvatar, "GetPlayerAvatar" }, // 261971376
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerAvatarByUniqueId, "GetPlayerAvatarByUniqueId" }, // 2172374540
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayerDisplayNameByUniqueId, "GetPlayerDisplayNameByUniqueId" }, // 2661833582
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetPlayersCount, "GetPlayersCount" }, // 2187861384
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSBZOnline, "GetSBZOnline" }, // 1612755898
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompaniesArgument, "GetSecurityCompaniesArgument" }, // 2707198810
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSecurityCompanyListForDifficulty, "GetSecurityCompanyListForDifficulty" }, // 188157747
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSessionInfo, "GetSessionInfo" }, // 304504240
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetSingleNameToShow, "GetSingleNameToShow" }, // 2359104063
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_GetUiLobbyInfo, "GetUiLobbyInfo" }, // 962672671
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_HasPrivilege, "HasPrivilege" }, // 868812629
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_HideSessionFromJoin, "HideSessionFromJoin" }, // 2891448746
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsAccelByteMatchmakingDisabled, "IsAccelByteMatchmakingDisabled" }, // 2329809624
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsAccelByteV2SessionsEnabled, "IsAccelByteV2SessionsEnabled" }, // 4123600081
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsActionPhaseClient, "IsActionPhaseClient" }, // 3517415950
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDebugRandomSeedProvided, "IsDebugRandomSeedProvided" }, // 240047608
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsDifficultyArgumentProvided, "IsDifficultyArgumentProvided" }, // 4079941978
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsEOSActive, "IsEOSActive" }, // 1586167246
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsForceLocalProgressionSaveFile, "IsForceLocalProgressionSaveFile" }, // 1509203577
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsInParty, "IsInParty" }, // 1878550345
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsInSession, "IsInSession" }, // 1271864654
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLobbyClient, "IsLobbyClient" }, // 1632984174
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLobbyHost, "IsLobbyHost" }, // 3127582419
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLocalClientReady, "IsLocalClientReady" }, // 3821122882
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsLocalPlayerInDropInLobby, "IsLocalPlayerInDropInLobby" }, // 2532284486
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoChallenges, "IsNoChallenges" }, // 417657811
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoHud, "IsNoHud" }, // 2992970195
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsNoSteam, "IsNoSteam" }, // 1610249142
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsOwnUniqueId, "IsOwnUniqueId" }, // 3805436453
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPartyClient, "IsPartyClient" }, // 1535309534
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPartyOwner, "IsPartyOwner" }, // 1350774298
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerInParty, "IsPlayerInParty" }, // 31445865
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerMuted, "IsPlayerMuted" }, // 3079785744
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsPlayerPartyOwner, "IsPlayerPartyOwner" }, // 3736673786
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsProductOwned, "IsProductOwned" }, // 2009401023
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsRequestInProgress, "IsRequestInProgress" }, // 1501663223
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSameUniqueId, "IsSameUniqueId" }, // 1468615380
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSecurityCompaniesProvided, "IsSecurityCompaniesProvided" }, // 4193817296
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsServerAcceptingSlots, "IsServerAcceptingSlots" }, // 2594285497
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsShippingBuild, "IsShippingBuild" }, // 3523470362
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGame, "IsSoloGame" }, // 3566434642
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSoloGameEnabled, "IsSoloGameEnabled" }, // 1297292532
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsSteamActive, "IsSteamActive" }, // 2396058501
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsTitleOnline, "IsTitleOnline" }, // 4079641471
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsUserOnline, "IsUserOnline" }, // 1177202160
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_IsWinGDKActive, "IsWinGDKActive" }, // 2953553351
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_LevelIdxToPath, "LevelIdxToPath" }, // 577490830
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_MutePlayer, "MutePlayer" }, // 2119271852
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestCreateAccount, "RequestCreateAccount" }, // 4037008304
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestDirectJoin, "RequestDirectJoin" }, // 1724218248
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestLogin, "RequestLogin" }, // 3493952621
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestLoginWithDeviceID, "RequestLoginWithDeviceID" }, // 1343103076
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestMergeParty, "RequestMergeParty" }, // 2948942700
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestRestartLevel, "RequestRestartLevel" }, // 3310404635
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestSteamLogin, "RequestSteamLogin" }, // 4232712877
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestVoteKickPlayer, "RequestVoteKickPlayer" }, // 2852747670
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_RequestVoteRestartLevel, "RequestVoteRestartLevel" }, // 3433388919
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetLocalClientReady, "SetLocalClientReady" }, // 2291132327
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetMatchmakingRegion, "SetMatchmakingRegion" }, // 872822183
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetSoloGameDisabled, "SetSoloGameDisabled" }, // 1711001631
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_SetSoloGameEnabled, "SetSoloGameEnabled" }, // 3727991692
		{ &Z_Construct_UFunction_USBZOnlineFunctionLibrary_UnmutePlayer, "UnmutePlayer" }, // 1090644135
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOnlineFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZOnlineFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZOnlineFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZOnlineFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZOnlineFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZOnlineFunctionLibrary_Statics::ClassParams = {
		&USBZOnlineFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZOnlineFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOnlineFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZOnlineFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZOnlineFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZOnlineFunctionLibrary, 2691255797);
	template<> STARBREEZE_API UClass* StaticClass<USBZOnlineFunctionLibrary>()
	{
		return USBZOnlineFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZOnlineFunctionLibrary(Z_Construct_UClass_USBZOnlineFunctionLibrary, &USBZOnlineFunctionLibrary::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZOnlineFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZOnlineFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
