// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZArmadaInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZArmadaInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZArmadaInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZArmadaInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZArmadaInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZArmadaInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZArmadaInfo"), sizeof(FSBZArmadaInfo), Get_Z_Construct_UScriptStruct_FSBZArmadaInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZArmadaInfo>()
{
	return FSBZArmadaInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZArmadaInfo(FSBZArmadaInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZArmadaInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZArmadaInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZArmadaInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZArmadaInfo>(FName(TEXT("SBZArmadaInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZArmadaInfo;
	struct Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PortGame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PortGame;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Region;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameSessionCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameSessionCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZArmadaInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZArmadaInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_IP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmadaInfo" },
		{ "ModuleRelativePath", "Public/SBZArmadaInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZArmadaInfo, IP), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_IP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_IP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_PortGame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmadaInfo" },
		{ "ModuleRelativePath", "Public/SBZArmadaInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_PortGame = { "PortGame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZArmadaInfo, PortGame), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_PortGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_PortGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_PortBeacon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmadaInfo" },
		{ "ModuleRelativePath", "Public/SBZArmadaInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_PortBeacon = { "PortBeacon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZArmadaInfo, PortBeacon), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_PortBeacon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_PortBeacon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_MatchID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmadaInfo" },
		{ "ModuleRelativePath", "Public/SBZArmadaInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_MatchID = { "MatchID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZArmadaInfo, MatchID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_MatchID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_MatchID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_ServerVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmadaInfo" },
		{ "ModuleRelativePath", "Public/SBZArmadaInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_ServerVersion = { "ServerVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZArmadaInfo, ServerVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_ServerVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_ServerVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_Region_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmadaInfo" },
		{ "ModuleRelativePath", "Public/SBZArmadaInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZArmadaInfo, Region), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_Region_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_GameSessionCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmadaInfo" },
		{ "ModuleRelativePath", "Public/SBZArmadaInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_GameSessionCode = { "GameSessionCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZArmadaInfo, GameSessionCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_GameSessionCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_GameSessionCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_IP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_PortGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_PortBeacon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_MatchID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_ServerVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_Region,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::NewProp_GameSessionCode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZArmadaInfo",
		sizeof(FSBZArmadaInfo),
		alignof(FSBZArmadaInfo),
		Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZArmadaInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZArmadaInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZArmadaInfo"), sizeof(FSBZArmadaInfo), Get_Z_Construct_UScriptStruct_FSBZArmadaInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZArmadaInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZArmadaInfo_Hash() { return 2752213925U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
