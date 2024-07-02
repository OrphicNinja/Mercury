// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRenownRewardConfiguration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRenownRewardConfiguration() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRewardCategory();
// End Cross Module References
class UScriptStruct* FSBZRenownRewardConfiguration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZRenownRewardConfiguration"), sizeof(FSBZRenownRewardConfiguration), Get_Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZRenownRewardConfiguration>()
{
	return FSBZRenownRewardConfiguration::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZRenownRewardConfiguration(FSBZRenownRewardConfiguration::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZRenownRewardConfiguration"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRenownRewardConfiguration
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRenownRewardConfiguration()
	{
		UScriptStruct::DeferCppStructOps<FSBZRenownRewardConfiguration>(FName(TEXT("SBZRenownRewardConfiguration")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZRenownRewardConfiguration;
	struct Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfamyPointsForReward_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InfamyPointsForReward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRenownLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxRenownLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZRenownRewardConfiguration.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZRenownRewardConfiguration>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration_Statics::NewProp_RewardCategoryArray_Inner = { "RewardCategoryArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZRewardCategory, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration_Statics::NewProp_RewardCategoryArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRenownRewardConfiguration" },
		{ "ModuleRelativePath", "Public/SBZRenownRewardConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration_Statics::NewProp_RewardCategoryArray = { "RewardCategoryArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRenownRewardConfiguration, RewardCategoryArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration_Statics::NewProp_RewardCategoryArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration_Statics::NewProp_RewardCategoryArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration_Statics::NewProp_InfamyPointsForReward_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRenownRewardConfiguration" },
		{ "ModuleRelativePath", "Public/SBZRenownRewardConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration_Statics::NewProp_InfamyPointsForReward = { "InfamyPointsForReward", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRenownRewardConfiguration, InfamyPointsForReward), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration_Statics::NewProp_InfamyPointsForReward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration_Statics::NewProp_InfamyPointsForReward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration_Statics::NewProp_MaxRenownLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRenownRewardConfiguration" },
		{ "ModuleRelativePath", "Public/SBZRenownRewardConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration_Statics::NewProp_MaxRenownLevel = { "MaxRenownLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRenownRewardConfiguration, MaxRenownLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration_Statics::NewProp_MaxRenownLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration_Statics::NewProp_MaxRenownLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration_Statics::NewProp_RewardCategoryArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration_Statics::NewProp_RewardCategoryArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration_Statics::NewProp_InfamyPointsForReward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration_Statics::NewProp_MaxRenownLevel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZRenownRewardConfiguration",
		sizeof(FSBZRenownRewardConfiguration),
		alignof(FSBZRenownRewardConfiguration),
		Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZRenownRewardConfiguration"), sizeof(FSBZRenownRewardConfiguration), Get_Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZRenownRewardConfiguration_Hash() { return 392868283U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
