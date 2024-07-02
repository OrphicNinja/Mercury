// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZOnlineSessionParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZOnlineSessionParams() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZOnlineSessionParams();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZOnlineSessionPhase();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZOnlineJoinType();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZServerSessionType();
// End Cross Module References
class UScriptStruct* FSBZOnlineSessionParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZOnlineSessionParams, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZOnlineSessionParams"), sizeof(FSBZOnlineSessionParams), Get_Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZOnlineSessionParams>()
{
	return FSBZOnlineSessionParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZOnlineSessionParams(FSBZOnlineSessionParams::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZOnlineSessionParams"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZOnlineSessionParams
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZOnlineSessionParams()
	{
		UScriptStruct::DeferCppStructOps<FSBZOnlineSessionParams>(FName(TEXT("SBZOnlineSessionParams")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZOnlineSessionParams;
	struct Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SessionPhase_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionPhase_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SessionPhase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsParty_MetaData[];
#endif
		static void NewProp_bIsParty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsParty;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_JoinType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_JoinType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LevelIdx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DifficultyIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DifficultyIdx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecurityCompaniesList_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SecurityCompaniesList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDebugSession_MetaData[];
#endif
		static void NewProp_bIsDebugSession_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDebugSession;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FreeSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FreeSlots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreFullSession_MetaData[];
#endif
		static void NewProp_bIgnoreFullSession_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreFullSession;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SessionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SessionType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetworkVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NetworkVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchMakingGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchMakingGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchMakingGroupLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchMakingGroupLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostingIpAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HostingIpAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PingInMs_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PingInMs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZOnlineSessionParams>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_SessionPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_SessionPhase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSessionParams" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionParams.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_SessionPhase = { "SessionPhase", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZOnlineSessionParams, SessionPhase), Z_Construct_UEnum_Starbreeze_ESBZOnlineSessionPhase, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_SessionPhase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_SessionPhase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_bIsParty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSessionParams" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionParams.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_bIsParty_SetBit(void* Obj)
	{
		((FSBZOnlineSessionParams*)Obj)->bIsParty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_bIsParty = { "bIsParty", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZOnlineSessionParams), &Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_bIsParty_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_bIsParty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_bIsParty_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_JoinType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_JoinType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSessionParams" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionParams.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_JoinType = { "JoinType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZOnlineSessionParams, JoinType), Z_Construct_UEnum_Starbreeze_ESBZOnlineJoinType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_JoinType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_JoinType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_LevelIdx_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSessionParams" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionParams.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_LevelIdx = { "LevelIdx", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZOnlineSessionParams, LevelIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_LevelIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_LevelIdx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_DifficultyIdx_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSessionParams" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionParams.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_DifficultyIdx = { "DifficultyIdx", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZOnlineSessionParams, DifficultyIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_DifficultyIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_DifficultyIdx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_SecurityCompaniesList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSessionParams" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_SecurityCompaniesList = { "SecurityCompaniesList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZOnlineSessionParams, SecurityCompaniesList), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_SecurityCompaniesList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_SecurityCompaniesList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_bIsDebugSession_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSessionParams" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionParams.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_bIsDebugSession_SetBit(void* Obj)
	{
		((FSBZOnlineSessionParams*)Obj)->bIsDebugSession = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_bIsDebugSession = { "bIsDebugSession", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZOnlineSessionParams), &Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_bIsDebugSession_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_bIsDebugSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_bIsDebugSession_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_FreeSlots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSessionParams" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionParams.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_FreeSlots = { "FreeSlots", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZOnlineSessionParams, FreeSlots), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_FreeSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_FreeSlots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_bIgnoreFullSession_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSessionParams" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionParams.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_bIgnoreFullSession_SetBit(void* Obj)
	{
		((FSBZOnlineSessionParams*)Obj)->bIgnoreFullSession = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_bIgnoreFullSession = { "bIgnoreFullSession", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZOnlineSessionParams), &Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_bIgnoreFullSession_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_bIgnoreFullSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_bIgnoreFullSession_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_SessionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_SessionType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSessionParams" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionParams.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_SessionType = { "SessionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZOnlineSessionParams, SessionType), Z_Construct_UEnum_Starbreeze_ESBZServerSessionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_SessionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_SessionType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_NetworkVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSessionParams" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionParams.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_NetworkVersion = { "NetworkVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZOnlineSessionParams, NetworkVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_NetworkVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_NetworkVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_MatchMakingGroup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSessionParams" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_MatchMakingGroup = { "MatchMakingGroup", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZOnlineSessionParams, MatchMakingGroup), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_MatchMakingGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_MatchMakingGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_MatchMakingGroupLabel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSessionParams" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_MatchMakingGroupLabel = { "MatchMakingGroupLabel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZOnlineSessionParams, MatchMakingGroupLabel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_MatchMakingGroupLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_MatchMakingGroupLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_HostingIpAddress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSessionParams" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_HostingIpAddress = { "HostingIpAddress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZOnlineSessionParams, HostingIpAddress), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_HostingIpAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_HostingIpAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_PingInMs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOnlineSessionParams" },
		{ "ModuleRelativePath", "Public/SBZOnlineSessionParams.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_PingInMs = { "PingInMs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZOnlineSessionParams, PingInMs), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_PingInMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_PingInMs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_SessionPhase_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_SessionPhase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_bIsParty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_JoinType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_JoinType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_LevelIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_DifficultyIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_SecurityCompaniesList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_bIsDebugSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_FreeSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_bIgnoreFullSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_SessionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_SessionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_NetworkVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_MatchMakingGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_MatchMakingGroupLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_HostingIpAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::NewProp_PingInMs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZOnlineSessionParams",
		sizeof(FSBZOnlineSessionParams),
		alignof(FSBZOnlineSessionParams),
		Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZOnlineSessionParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZOnlineSessionParams"), sizeof(FSBZOnlineSessionParams), Get_Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZOnlineSessionParams_Hash() { return 268516555U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
