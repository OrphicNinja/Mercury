// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/HostMigrationInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHostMigrationInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FHostMigrationInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FMigratableHost();
// End Cross Module References
class UScriptStruct* FHostMigrationInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FHostMigrationInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHostMigrationInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("HostMigrationInfo"), sizeof(FHostMigrationInfo), Get_Z_Construct_UScriptStruct_FHostMigrationInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FHostMigrationInfo>()
{
	return FHostMigrationInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHostMigrationInfo(FHostMigrationInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("HostMigrationInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFHostMigrationInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFHostMigrationInfo()
	{
		UScriptStruct::DeferCppStructOps<FHostMigrationInfo>(FName(TEXT("HostMigrationInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFHostMigrationInfo;
	struct Z_Construct_UScriptStruct_FHostMigrationInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MigratableHosts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MigratableHosts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MigratableHosts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissionSeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MissionSeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHostMigrationInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HostMigrationInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHostMigrationInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHostMigrationInfo>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHostMigrationInfo_Statics::NewProp_MigratableHosts_Inner = { "MigratableHosts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMigratableHost, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHostMigrationInfo_Statics::NewProp_MigratableHosts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HostMigrationInfo" },
		{ "ModuleRelativePath", "Public/HostMigrationInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHostMigrationInfo_Statics::NewProp_MigratableHosts = { "MigratableHosts", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHostMigrationInfo, MigratableHosts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHostMigrationInfo_Statics::NewProp_MigratableHosts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHostMigrationInfo_Statics::NewProp_MigratableHosts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHostMigrationInfo_Statics::NewProp_MissionSeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HostMigrationInfo" },
		{ "ModuleRelativePath", "Public/HostMigrationInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHostMigrationInfo_Statics::NewProp_MissionSeed = { "MissionSeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHostMigrationInfo, MissionSeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FHostMigrationInfo_Statics::NewProp_MissionSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHostMigrationInfo_Statics::NewProp_MissionSeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHostMigrationInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHostMigrationInfo_Statics::NewProp_MigratableHosts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHostMigrationInfo_Statics::NewProp_MigratableHosts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHostMigrationInfo_Statics::NewProp_MissionSeed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHostMigrationInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"HostMigrationInfo",
		sizeof(FHostMigrationInfo),
		alignof(FHostMigrationInfo),
		Z_Construct_UScriptStruct_FHostMigrationInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHostMigrationInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHostMigrationInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHostMigrationInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHostMigrationInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHostMigrationInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HostMigrationInfo"), sizeof(FHostMigrationInfo), Get_Z_Construct_UScriptStruct_FHostMigrationInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHostMigrationInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHostMigrationInfo_Hash() { return 1594550659U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
