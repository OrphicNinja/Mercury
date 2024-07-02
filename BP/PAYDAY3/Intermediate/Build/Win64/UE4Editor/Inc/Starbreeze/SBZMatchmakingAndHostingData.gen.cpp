// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMatchmakingAndHostingData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMatchmakingAndHostingData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZMatchmakingAndHostingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZMatchmakingAndHostingData"), sizeof(FSBZMatchmakingAndHostingData), Get_Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZMatchmakingAndHostingData>()
{
	return FSBZMatchmakingAndHostingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZMatchmakingAndHostingData(FSBZMatchmakingAndHostingData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZMatchmakingAndHostingData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMatchmakingAndHostingData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMatchmakingAndHostingData()
	{
		UScriptStruct::DeferCppStructOps<FSBZMatchmakingAndHostingData>(FName(TEXT("SBZMatchmakingAndHostingData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZMatchmakingAndHostingData;
	struct Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchmakingProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchmakingProvider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostingProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HostingProvider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchmakerURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchmakerURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchmakerToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchmakerToken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZMatchmakingAndHostingData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZMatchmakingAndHostingData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Statics::NewProp_MatchmakingProvider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMatchmakingAndHostingData" },
		{ "ModuleRelativePath", "Public/SBZMatchmakingAndHostingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Statics::NewProp_MatchmakingProvider = { "MatchmakingProvider", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMatchmakingAndHostingData, MatchmakingProvider), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Statics::NewProp_MatchmakingProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Statics::NewProp_MatchmakingProvider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Statics::NewProp_HostingProvider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMatchmakingAndHostingData" },
		{ "ModuleRelativePath", "Public/SBZMatchmakingAndHostingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Statics::NewProp_HostingProvider = { "HostingProvider", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMatchmakingAndHostingData, HostingProvider), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Statics::NewProp_HostingProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Statics::NewProp_HostingProvider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Statics::NewProp_MatchmakerURL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMatchmakingAndHostingData" },
		{ "ModuleRelativePath", "Public/SBZMatchmakingAndHostingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Statics::NewProp_MatchmakerURL = { "MatchmakerURL", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMatchmakingAndHostingData, MatchmakerURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Statics::NewProp_MatchmakerURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Statics::NewProp_MatchmakerURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Statics::NewProp_MatchmakerToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMatchmakingAndHostingData" },
		{ "ModuleRelativePath", "Public/SBZMatchmakingAndHostingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Statics::NewProp_MatchmakerToken = { "MatchmakerToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMatchmakingAndHostingData, MatchmakerToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Statics::NewProp_MatchmakerToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Statics::NewProp_MatchmakerToken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Statics::NewProp_MatchmakingProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Statics::NewProp_HostingProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Statics::NewProp_MatchmakerURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Statics::NewProp_MatchmakerToken,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZMatchmakingAndHostingData",
		sizeof(FSBZMatchmakingAndHostingData),
		alignof(FSBZMatchmakingAndHostingData),
		Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZMatchmakingAndHostingData"), sizeof(FSBZMatchmakingAndHostingData), Get_Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZMatchmakingAndHostingData_Hash() { return 2953191174U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
