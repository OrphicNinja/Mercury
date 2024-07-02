// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZItemRewardConfiguration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZItemRewardConfiguration() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZItemRewardConfiguration();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZItemRewardConfiguration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZItemRewardConfiguration_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZItemRewardConfiguration, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZItemRewardConfiguration"), sizeof(FSBZItemRewardConfiguration), Get_Z_Construct_UScriptStruct_FSBZItemRewardConfiguration_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZItemRewardConfiguration>()
{
	return FSBZItemRewardConfiguration::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZItemRewardConfiguration(FSBZItemRewardConfiguration::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZItemRewardConfiguration"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZItemRewardConfiguration
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZItemRewardConfiguration()
	{
		UScriptStruct::DeferCppStructOps<FSBZItemRewardConfiguration>(FName(TEXT("SBZItemRewardConfiguration")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZItemRewardConfiguration;
	struct Z_Construct_UScriptStruct_FSBZItemRewardConfiguration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSku_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemSku;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZItemRewardConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZItemRewardConfiguration.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZItemRewardConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZItemRewardConfiguration>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZItemRewardConfiguration_Statics::NewProp_ItemSku_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZItemRewardConfiguration" },
		{ "ModuleRelativePath", "Public/SBZItemRewardConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZItemRewardConfiguration_Statics::NewProp_ItemSku = { "ItemSku", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZItemRewardConfiguration, ItemSku), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZItemRewardConfiguration_Statics::NewProp_ItemSku_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZItemRewardConfiguration_Statics::NewProp_ItemSku_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZItemRewardConfiguration_Statics::NewProp_StatCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZItemRewardConfiguration" },
		{ "ModuleRelativePath", "Public/SBZItemRewardConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZItemRewardConfiguration_Statics::NewProp_StatCode = { "StatCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZItemRewardConfiguration, StatCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZItemRewardConfiguration_Statics::NewProp_StatCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZItemRewardConfiguration_Statics::NewProp_StatCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZItemRewardConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZItemRewardConfiguration_Statics::NewProp_ItemSku,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZItemRewardConfiguration_Statics::NewProp_StatCode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZItemRewardConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZItemRewardConfiguration",
		sizeof(FSBZItemRewardConfiguration),
		alignof(FSBZItemRewardConfiguration),
		Z_Construct_UScriptStruct_FSBZItemRewardConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZItemRewardConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZItemRewardConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZItemRewardConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZItemRewardConfiguration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZItemRewardConfiguration_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZItemRewardConfiguration"), sizeof(FSBZItemRewardConfiguration), Get_Z_Construct_UScriptStruct_FSBZItemRewardConfiguration_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZItemRewardConfiguration_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZItemRewardConfiguration_Hash() { return 1285182276U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
