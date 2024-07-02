// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPreplanningAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPreplanningAsset() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPreplanningAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
// End Cross Module References
class UScriptStruct* FSBZPreplanningAsset::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPreplanningAsset_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPreplanningAsset, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPreplanningAsset"), sizeof(FSBZPreplanningAsset), Get_Z_Construct_UScriptStruct_FSBZPreplanningAsset_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPreplanningAsset>()
{
	return FSBZPreplanningAsset::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPreplanningAsset(FSBZPreplanningAsset::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPreplanningAsset"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPreplanningAsset
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPreplanningAsset()
	{
		UScriptStruct::DeferCppStructOps<FSBZPreplanningAsset>(FName(TEXT("SBZPreplanningAsset")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPreplanningAsset;
	struct Z_Construct_UScriptStruct_FSBZPreplanningAsset_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkuNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SkuNo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPreplanningAsset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPreplanningAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPreplanningAsset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPreplanningAsset>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPreplanningAsset_Statics::NewProp_PlayerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPreplanningAsset" },
		{ "ModuleRelativePath", "Public/SBZPreplanningAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPreplanningAsset_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPreplanningAsset, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPreplanningAsset_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPreplanningAsset_Statics::NewProp_PlayerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPreplanningAsset_Statics::NewProp_SkuNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPreplanningAsset" },
		{ "ModuleRelativePath", "Public/SBZPreplanningAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZPreplanningAsset_Statics::NewProp_SkuNo = { "SkuNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPreplanningAsset, SkuNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPreplanningAsset_Statics::NewProp_SkuNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPreplanningAsset_Statics::NewProp_SkuNo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPreplanningAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPreplanningAsset_Statics::NewProp_PlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPreplanningAsset_Statics::NewProp_SkuNo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPreplanningAsset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZPreplanningAsset",
		sizeof(FSBZPreplanningAsset),
		alignof(FSBZPreplanningAsset),
		Z_Construct_UScriptStruct_FSBZPreplanningAsset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPreplanningAsset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPreplanningAsset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPreplanningAsset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPreplanningAsset()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPreplanningAsset_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPreplanningAsset"), sizeof(FSBZPreplanningAsset), Get_Z_Construct_UScriptStruct_FSBZPreplanningAsset_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPreplanningAsset_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPreplanningAsset_Hash() { return 4128393882U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
