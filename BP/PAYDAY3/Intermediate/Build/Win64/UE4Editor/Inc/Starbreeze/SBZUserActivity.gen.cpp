// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZUserActivity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZUserActivity() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZUserActivity();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZOnlineJoinType();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZHostingProvider();
// End Cross Module References
class UScriptStruct* FSBZUserActivity::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZUserActivity_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZUserActivity, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZUserActivity"), sizeof(FSBZUserActivity), Get_Z_Construct_UScriptStruct_FSBZUserActivity_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZUserActivity>()
{
	return FSBZUserActivity::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZUserActivity(FSBZUserActivity::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZUserActivity"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZUserActivity
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZUserActivity()
	{
		UScriptStruct::DeferCppStructOps<FSBZUserActivity>(FName(TEXT("SBZUserActivity")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZUserActivity;
	struct Z_Construct_UScriptStruct_FSBZUserActivity_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PortBeacon_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PortBeacon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LevelIdx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PartyCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCrossPlayEnabled_MetaData[];
#endif
		static void NewProp_bCrossPlayEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrossPlayEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInCrossPlayLobby_MetaData[];
#endif
		static void NewProp_bInCrossPlayLobby_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInCrossPlayLobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInCrossPlayAllowedLobby_MetaData[];
#endif
		static void NewProp_bInCrossPlayAllowedLobby_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInCrossPlayAllowedLobby;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_JoinType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_JoinType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameState_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GameState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameSessionMembers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GameSessionMembers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartySessionMembers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PartySessionMembers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfamyLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InfamyLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenownLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RenownLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HostingProvider_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostingProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HostingProvider;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUserActivity_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZUserActivity.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZUserActivity>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_IP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUserActivity" },
		{ "ModuleRelativePath", "Public/SBZUserActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZUserActivity, IP), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_IP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_IP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_Port_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUserActivity" },
		{ "ModuleRelativePath", "Public/SBZUserActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZUserActivity, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_PortBeacon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUserActivity" },
		{ "ModuleRelativePath", "Public/SBZUserActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_PortBeacon = { "PortBeacon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZUserActivity, PortBeacon), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_PortBeacon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_PortBeacon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_MatchID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUserActivity" },
		{ "ModuleRelativePath", "Public/SBZUserActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_MatchID = { "MatchID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZUserActivity, MatchID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_MatchID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_MatchID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_ServerVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUserActivity" },
		{ "ModuleRelativePath", "Public/SBZUserActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_ServerVersion = { "ServerVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZUserActivity, ServerVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_ServerVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_ServerVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_LevelIdx_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUserActivity" },
		{ "ModuleRelativePath", "Public/SBZUserActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_LevelIdx = { "LevelIdx", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZUserActivity, LevelIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_LevelIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_LevelIdx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_PartyCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUserActivity" },
		{ "ModuleRelativePath", "Public/SBZUserActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_PartyCode = { "PartyCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZUserActivity, PartyCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_PartyCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_PartyCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_BuildVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUserActivity" },
		{ "ModuleRelativePath", "Public/SBZUserActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_BuildVersion = { "BuildVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZUserActivity, BuildVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_BuildVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_BuildVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_bCrossPlayEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUserActivity" },
		{ "ModuleRelativePath", "Public/SBZUserActivity.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_bCrossPlayEnabled_SetBit(void* Obj)
	{
		((FSBZUserActivity*)Obj)->bCrossPlayEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_bCrossPlayEnabled = { "bCrossPlayEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZUserActivity), &Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_bCrossPlayEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_bCrossPlayEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_bCrossPlayEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_bInCrossPlayLobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUserActivity" },
		{ "ModuleRelativePath", "Public/SBZUserActivity.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_bInCrossPlayLobby_SetBit(void* Obj)
	{
		((FSBZUserActivity*)Obj)->bInCrossPlayLobby = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_bInCrossPlayLobby = { "bInCrossPlayLobby", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZUserActivity), &Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_bInCrossPlayLobby_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_bInCrossPlayLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_bInCrossPlayLobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_bInCrossPlayAllowedLobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUserActivity" },
		{ "ModuleRelativePath", "Public/SBZUserActivity.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_bInCrossPlayAllowedLobby_SetBit(void* Obj)
	{
		((FSBZUserActivity*)Obj)->bInCrossPlayAllowedLobby = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_bInCrossPlayAllowedLobby = { "bInCrossPlayAllowedLobby", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZUserActivity), &Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_bInCrossPlayAllowedLobby_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_bInCrossPlayAllowedLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_bInCrossPlayAllowedLobby_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_JoinType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_JoinType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUserActivity" },
		{ "ModuleRelativePath", "Public/SBZUserActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_JoinType = { "JoinType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZUserActivity, JoinType), Z_Construct_UEnum_Starbreeze_ESBZOnlineJoinType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_JoinType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_JoinType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_GameState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUserActivity" },
		{ "ModuleRelativePath", "Public/SBZUserActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_GameState = { "GameState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZUserActivity, GameState), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_GameState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_GameState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_GameSessionMembers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUserActivity" },
		{ "ModuleRelativePath", "Public/SBZUserActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_GameSessionMembers = { "GameSessionMembers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZUserActivity, GameSessionMembers), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_GameSessionMembers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_GameSessionMembers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_PartySessionMembers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUserActivity" },
		{ "ModuleRelativePath", "Public/SBZUserActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_PartySessionMembers = { "PartySessionMembers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZUserActivity, PartySessionMembers), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_PartySessionMembers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_PartySessionMembers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_InfamyLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUserActivity" },
		{ "ModuleRelativePath", "Public/SBZUserActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_InfamyLevel = { "InfamyLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZUserActivity, InfamyLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_InfamyLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_InfamyLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_RenownLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUserActivity" },
		{ "ModuleRelativePath", "Public/SBZUserActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_RenownLevel = { "RenownLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZUserActivity, RenownLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_RenownLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_RenownLevel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_HostingProvider_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_HostingProvider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUserActivity" },
		{ "ModuleRelativePath", "Public/SBZUserActivity.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_HostingProvider = { "HostingProvider", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZUserActivity, HostingProvider), Z_Construct_UEnum_Starbreeze_ESBZHostingProvider, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_HostingProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_HostingProvider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZUserActivity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_IP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_PortBeacon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_MatchID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_ServerVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_LevelIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_PartyCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_BuildVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_bCrossPlayEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_bInCrossPlayLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_bInCrossPlayAllowedLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_JoinType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_JoinType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_GameState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_GameSessionMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_PartySessionMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_InfamyLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_RenownLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_HostingProvider_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUserActivity_Statics::NewProp_HostingProvider,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZUserActivity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZUserActivity",
		sizeof(FSBZUserActivity),
		alignof(FSBZUserActivity),
		Z_Construct_UScriptStruct_FSBZUserActivity_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUserActivity_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZUserActivity()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZUserActivity_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZUserActivity"), sizeof(FSBZUserActivity), Get_Z_Construct_UScriptStruct_FSBZUserActivity_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZUserActivity_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZUserActivity_Hash() { return 130451268U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
