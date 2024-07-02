// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInfamyRewardConfiguration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInfamyRewardConfiguration() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInfamyRewardConfiguration();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRewardCategory();
// End Cross Module References
class UScriptStruct* FSBZInfamyRewardConfiguration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZInfamyRewardConfiguration_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZInfamyRewardConfiguration, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZInfamyRewardConfiguration"), sizeof(FSBZInfamyRewardConfiguration), Get_Z_Construct_UScriptStruct_FSBZInfamyRewardConfiguration_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZInfamyRewardConfiguration>()
{
	return FSBZInfamyRewardConfiguration::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZInfamyRewardConfiguration(FSBZInfamyRewardConfiguration::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZInfamyRewardConfiguration"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInfamyRewardConfiguration
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInfamyRewardConfiguration()
	{
		UScriptStruct::DeferCppStructOps<FSBZInfamyRewardConfiguration>(FName(TEXT("SBZInfamyRewardConfiguration")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZInfamyRewardConfiguration;
	struct Z_Construct_UScriptStruct_FSBZInfamyRewardConfiguration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RewardCategoryArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardCategoryArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RewardCategoryArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInfamyRewardConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZInfamyRewardConfiguration.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZInfamyRewardConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZInfamyRewardConfiguration>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZInfamyRewardConfiguration_Statics::NewProp_RewardCategoryArray_Inner = { "RewardCategoryArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZRewardCategory, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInfamyRewardConfiguration_Statics::NewProp_RewardCategoryArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInfamyRewardConfiguration" },
		{ "ModuleRelativePath", "Public/SBZInfamyRewardConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZInfamyRewardConfiguration_Statics::NewProp_RewardCategoryArray = { "RewardCategoryArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInfamyRewardConfiguration, RewardCategoryArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInfamyRewardConfiguration_Statics::NewProp_RewardCategoryArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfamyRewardConfiguration_Statics::NewProp_RewardCategoryArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZInfamyRewardConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInfamyRewardConfiguration_Statics::NewProp_RewardCategoryArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInfamyRewardConfiguration_Statics::NewProp_RewardCategoryArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZInfamyRewardConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZInfamyRewardConfiguration",
		sizeof(FSBZInfamyRewardConfiguration),
		alignof(FSBZInfamyRewardConfiguration),
		Z_Construct_UScriptStruct_FSBZInfamyRewardConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfamyRewardConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInfamyRewardConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfamyRewardConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZInfamyRewardConfiguration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZInfamyRewardConfiguration_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZInfamyRewardConfiguration"), sizeof(FSBZInfamyRewardConfiguration), Get_Z_Construct_UScriptStruct_FSBZInfamyRewardConfiguration_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZInfamyRewardConfiguration_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZInfamyRewardConfiguration_Hash() { return 3803328638U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
