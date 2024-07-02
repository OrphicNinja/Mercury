// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLobbyCharacterInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLobbyCharacterInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
// End Cross Module References
class UScriptStruct* FSBZLobbyCharacterInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZLobbyCharacterInfo"), sizeof(FSBZLobbyCharacterInfo), Get_Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZLobbyCharacterInfo>()
{
	return FSBZLobbyCharacterInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZLobbyCharacterInfo(FSBZLobbyCharacterInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZLobbyCharacterInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLobbyCharacterInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLobbyCharacterInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZLobbyCharacterInfo>(FName(TEXT("SBZLobbyCharacterInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZLobbyCharacterInfo;
	struct Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerUid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerUid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPlayerReady_MetaData[];
#endif
		static void NewProp_bIsPlayerReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPlayerReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayerAcceptedMatch_MetaData[];
#endif
		static void NewProp_bPlayerAcceptedMatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayerAcceptedMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LevelIdx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PowerLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nickname_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Nickname;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZLobbyCharacterInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZLobbyCharacterInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewProp_PlayerUid_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyCharacterInfo" },
		{ "ModuleRelativePath", "Public/SBZLobbyCharacterInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewProp_PlayerUid = { "PlayerUid", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLobbyCharacterInfo, PlayerUid), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewProp_PlayerUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewProp_PlayerUid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewProp_bIsPlayerReady_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyCharacterInfo" },
		{ "ModuleRelativePath", "Public/SBZLobbyCharacterInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewProp_bIsPlayerReady_SetBit(void* Obj)
	{
		((FSBZLobbyCharacterInfo*)Obj)->bIsPlayerReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewProp_bIsPlayerReady = { "bIsPlayerReady", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZLobbyCharacterInfo), &Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewProp_bIsPlayerReady_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewProp_bIsPlayerReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewProp_bIsPlayerReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewProp_bPlayerAcceptedMatch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyCharacterInfo" },
		{ "ModuleRelativePath", "Public/SBZLobbyCharacterInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewProp_bPlayerAcceptedMatch_SetBit(void* Obj)
	{
		((FSBZLobbyCharacterInfo*)Obj)->bPlayerAcceptedMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewProp_bPlayerAcceptedMatch = { "bPlayerAcceptedMatch", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZLobbyCharacterInfo), &Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewProp_bPlayerAcceptedMatch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewProp_bPlayerAcceptedMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewProp_bPlayerAcceptedMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewProp_LevelIdx_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyCharacterInfo" },
		{ "ModuleRelativePath", "Public/SBZLobbyCharacterInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewProp_LevelIdx = { "LevelIdx", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLobbyCharacterInfo, LevelIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewProp_LevelIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewProp_LevelIdx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewProp_PowerLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyCharacterInfo" },
		{ "ModuleRelativePath", "Public/SBZLobbyCharacterInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewProp_PowerLevel = { "PowerLevel", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLobbyCharacterInfo, PowerLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewProp_PowerLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewProp_PowerLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewProp_Nickname_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLobbyCharacterInfo" },
		{ "ModuleRelativePath", "Public/SBZLobbyCharacterInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewProp_Nickname = { "Nickname", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLobbyCharacterInfo, Nickname), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewProp_Nickname_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewProp_Nickname_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewProp_PlayerUid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewProp_bIsPlayerReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewProp_bPlayerAcceptedMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewProp_LevelIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewProp_PowerLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::NewProp_Nickname,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZLobbyCharacterInfo",
		sizeof(FSBZLobbyCharacterInfo),
		alignof(FSBZLobbyCharacterInfo),
		Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZLobbyCharacterInfo"), sizeof(FSBZLobbyCharacterInfo), Get_Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZLobbyCharacterInfo_Hash() { return 2588924983U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
