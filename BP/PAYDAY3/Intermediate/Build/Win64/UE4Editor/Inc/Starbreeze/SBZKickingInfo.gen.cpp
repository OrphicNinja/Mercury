// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZKickingInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZKickingInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZKickingInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZKickingMode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FSBZKickingInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZKickingInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZKickingInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZKickingInfo"), sizeof(FSBZKickingInfo), Get_Z_Construct_UScriptStruct_FSBZKickingInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZKickingInfo>()
{
	return FSBZKickingInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZKickingInfo(FSBZKickingInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZKickingInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZKickingInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZKickingInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZKickingInfo>(FName(TEXT("SBZKickingInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZKickingInfo;
	struct Z_Construct_UScriptStruct_FSBZKickingInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[];
#endif
		static void NewProp_bActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerToKick_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerToKick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerProposed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerProposed;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KickVotes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickVotes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KickVotes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeepVotes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeepVotes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeepVotes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VotesNeededToKick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VotesNeededToKick;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModeKick_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModeKick_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ModeKick;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayersVoted_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayersVoted_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayersVoted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeKickStarted_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimeKickStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWasClientKicked_MetaData[];
#endif
		static void NewProp_bWasClientKicked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasClientKicked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZKickingInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZKickingInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_bActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKickingInfo" },
		{ "ModuleRelativePath", "Public/SBZKickingInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((FSBZKickingInfo*)Obj)->bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZKickingInfo), &Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_bActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_bActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_PlayerToKick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKickingInfo" },
		{ "ModuleRelativePath", "Public/SBZKickingInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_PlayerToKick = { "PlayerToKick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZKickingInfo, PlayerToKick), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_PlayerToKick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_PlayerToKick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_PlayerProposed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKickingInfo" },
		{ "ModuleRelativePath", "Public/SBZKickingInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_PlayerProposed = { "PlayerProposed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZKickingInfo, PlayerProposed), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_PlayerProposed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_PlayerProposed_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_KickVotes_Inner = { "KickVotes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_KickVotes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKickingInfo" },
		{ "ModuleRelativePath", "Public/SBZKickingInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_KickVotes = { "KickVotes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZKickingInfo, KickVotes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_KickVotes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_KickVotes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_KeepVotes_Inner = { "KeepVotes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_KeepVotes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKickingInfo" },
		{ "ModuleRelativePath", "Public/SBZKickingInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_KeepVotes = { "KeepVotes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZKickingInfo, KeepVotes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_KeepVotes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_KeepVotes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_VotesNeededToKick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKickingInfo" },
		{ "ModuleRelativePath", "Public/SBZKickingInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_VotesNeededToKick = { "VotesNeededToKick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZKickingInfo, VotesNeededToKick), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_VotesNeededToKick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_VotesNeededToKick_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_ModeKick_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_ModeKick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKickingInfo" },
		{ "ModuleRelativePath", "Public/SBZKickingInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_ModeKick = { "ModeKick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZKickingInfo, ModeKick), Z_Construct_UEnum_Starbreeze_ESBZKickingMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_ModeKick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_ModeKick_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_PlayersVoted_Inner = { "PlayersVoted", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_PlayersVoted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKickingInfo" },
		{ "ModuleRelativePath", "Public/SBZKickingInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_PlayersVoted = { "PlayersVoted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZKickingInfo, PlayersVoted), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_PlayersVoted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_PlayersVoted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_TimeLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKickingInfo" },
		{ "ModuleRelativePath", "Public/SBZKickingInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_TimeLeft = { "TimeLeft", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZKickingInfo, TimeLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_TimeLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_TimeLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_TimeKickStarted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKickingInfo" },
		{ "ModuleRelativePath", "Public/SBZKickingInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_TimeKickStarted = { "TimeKickStarted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZKickingInfo, TimeKickStarted), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_TimeKickStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_TimeKickStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_bWasClientKicked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKickingInfo" },
		{ "ModuleRelativePath", "Public/SBZKickingInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_bWasClientKicked_SetBit(void* Obj)
	{
		((FSBZKickingInfo*)Obj)->bWasClientKicked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_bWasClientKicked = { "bWasClientKicked", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZKickingInfo), &Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_bWasClientKicked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_bWasClientKicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_bWasClientKicked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_bActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_PlayerToKick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_PlayerProposed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_KickVotes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_KickVotes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_KeepVotes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_KeepVotes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_VotesNeededToKick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_ModeKick_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_ModeKick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_PlayersVoted_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_PlayersVoted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_TimeLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_TimeKickStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::NewProp_bWasClientKicked,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZKickingInfo",
		sizeof(FSBZKickingInfo),
		alignof(FSBZKickingInfo),
		Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZKickingInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZKickingInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZKickingInfo"), sizeof(FSBZKickingInfo), Get_Z_Construct_UScriptStruct_FSBZKickingInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZKickingInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZKickingInfo_Hash() { return 2466512565U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
