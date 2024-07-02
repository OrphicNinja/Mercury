// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/MigratableHost.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMigratableHost() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FMigratableHost();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
// End Cross Module References
class UScriptStruct* FMigratableHost::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FMigratableHost_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMigratableHost, Z_Construct_UPackage__Script_Starbreeze(), TEXT("MigratableHost"), sizeof(FMigratableHost), Get_Z_Construct_UScriptStruct_FMigratableHost_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FMigratableHost>()
{
	return FMigratableHost::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMigratableHost(FMigratableHost::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("MigratableHost"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFMigratableHost
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFMigratableHost()
	{
		UScriptStruct::DeferCppStructOps<FMigratableHost>(FName(TEXT("MigratableHost")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFMigratableHost;
	struct Z_Construct_UScriptStruct_FMigratableHost_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerUniqueId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerUniqueId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HostAddress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMigratableHost_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MigratableHost.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMigratableHost_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMigratableHost>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMigratableHost_Statics::NewProp_PlayerUniqueId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MigratableHost" },
		{ "ModuleRelativePath", "Public/MigratableHost.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMigratableHost_Statics::NewProp_PlayerUniqueId = { "PlayerUniqueId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMigratableHost, PlayerUniqueId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UScriptStruct_FMigratableHost_Statics::NewProp_PlayerUniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMigratableHost_Statics::NewProp_PlayerUniqueId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMigratableHost_Statics::NewProp_HostAddress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MigratableHost" },
		{ "ModuleRelativePath", "Public/MigratableHost.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMigratableHost_Statics::NewProp_HostAddress = { "HostAddress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMigratableHost, HostAddress), METADATA_PARAMS(Z_Construct_UScriptStruct_FMigratableHost_Statics::NewProp_HostAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMigratableHost_Statics::NewProp_HostAddress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMigratableHost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMigratableHost_Statics::NewProp_PlayerUniqueId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMigratableHost_Statics::NewProp_HostAddress,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMigratableHost_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"MigratableHost",
		sizeof(FMigratableHost),
		alignof(FMigratableHost),
		Z_Construct_UScriptStruct_FMigratableHost_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMigratableHost_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMigratableHost_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMigratableHost_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMigratableHost()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMigratableHost_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MigratableHost"), sizeof(FMigratableHost), Get_Z_Construct_UScriptStruct_FMigratableHost_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMigratableHost_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMigratableHost_Hash() { return 3977346882U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
