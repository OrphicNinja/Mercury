// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerSlotInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerSlotInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerSlotInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
// End Cross Module References
class UScriptStruct* FSBZPlayerSlotInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPlayerSlotInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPlayerSlotInfo"), sizeof(FSBZPlayerSlotInfo), Get_Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPlayerSlotInfo>()
{
	return FSBZPlayerSlotInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPlayerSlotInfo(FSBZPlayerSlotInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPlayerSlotInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerSlotInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerSlotInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZPlayerSlotInfo>(FName(TEXT("SBZPlayerSlotInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerSlotInfo;
	struct Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackendPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BackendPlayerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PartyCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPartyLeader_MetaData[];
#endif
		static void NewProp_bIsPartyLeader_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPartyLeader;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerSlotInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPlayerSlotInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Statics::NewProp_PlayerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerSlotInfo" },
		{ "ModuleRelativePath", "Public/SBZPlayerSlotInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerSlotInfo, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Statics::NewProp_PlayerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Statics::NewProp_BackendPlayerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerSlotInfo" },
		{ "ModuleRelativePath", "Public/SBZPlayerSlotInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Statics::NewProp_BackendPlayerId = { "BackendPlayerId", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerSlotInfo, BackendPlayerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Statics::NewProp_BackendPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Statics::NewProp_BackendPlayerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Statics::NewProp_PartyCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerSlotInfo" },
		{ "ModuleRelativePath", "Public/SBZPlayerSlotInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Statics::NewProp_PartyCode = { "PartyCode", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerSlotInfo, PartyCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Statics::NewProp_PartyCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Statics::NewProp_PartyCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Statics::NewProp_bIsPartyLeader_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerSlotInfo" },
		{ "ModuleRelativePath", "Public/SBZPlayerSlotInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Statics::NewProp_bIsPartyLeader_SetBit(void* Obj)
	{
		((FSBZPlayerSlotInfo*)Obj)->bIsPartyLeader = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Statics::NewProp_bIsPartyLeader = { "bIsPartyLeader", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZPlayerSlotInfo), &Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Statics::NewProp_bIsPartyLeader_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Statics::NewProp_bIsPartyLeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Statics::NewProp_bIsPartyLeader_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Statics::NewProp_PlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Statics::NewProp_BackendPlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Statics::NewProp_PartyCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Statics::NewProp_bIsPartyLeader,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZPlayerSlotInfo",
		sizeof(FSBZPlayerSlotInfo),
		alignof(FSBZPlayerSlotInfo),
		Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerSlotInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPlayerSlotInfo"), sizeof(FSBZPlayerSlotInfo), Get_Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerSlotInfo_Hash() { return 969134594U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
