// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/ChallengeReward.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChallengeReward() {}
// Cross Module References
	ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeReward();
	UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
	ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeStat();
	ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FRewardItemDetails();
// End Cross Module References
class UScriptStruct* FChallengeReward::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTECUSTOMIZATION_API uint32 Get_Z_Construct_UScriptStruct_FChallengeReward_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChallengeReward, Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("ChallengeReward"), sizeof(FChallengeReward), Get_Z_Construct_UScriptStruct_FChallengeReward_Hash());
	}
	return Singleton;
}
template<> ACCELBYTECUSTOMIZATION_API UScriptStruct* StaticStruct<FChallengeReward>()
{
	return FChallengeReward::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChallengeReward(FChallengeReward::StaticStruct, TEXT("/Script/AccelByteCustomization"), TEXT("ChallengeReward"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteCustomization_StaticRegisterNativesFChallengeReward
{
	FScriptStruct_AccelByteCustomization_StaticRegisterNativesFChallengeReward()
	{
		UScriptStruct::DeferCppStructOps<FChallengeReward>(FName(TEXT("ChallengeReward")));
	}
} ScriptStruct_AccelByteCustomization_StaticRegisterNativesFChallengeReward;
	struct Z_Construct_UScriptStruct_FChallengeReward_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stats_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stats_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Stats;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RewardId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeReward_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChallengeReward.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChallengeReward_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChallengeReward>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChallengeReward_Statics::NewProp_Stats_Inner = { "Stats", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChallengeStat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeReward_Statics::NewProp_Stats_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeReward" },
		{ "ModuleRelativePath", "Public/ChallengeReward.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChallengeReward_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeReward, Stats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeReward_Statics::NewProp_Stats_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeReward_Statics::NewProp_Stats_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChallengeReward_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRewardItemDetails, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeReward_Statics::NewProp_Items_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeReward" },
		{ "ModuleRelativePath", "Public/ChallengeReward.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChallengeReward_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeReward, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeReward_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeReward_Statics::NewProp_Items_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeReward_Statics::NewProp_RewardId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeReward" },
		{ "ModuleRelativePath", "Public/ChallengeReward.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChallengeReward_Statics::NewProp_RewardId = { "RewardId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeReward, RewardId), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeReward_Statics::NewProp_RewardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeReward_Statics::NewProp_RewardId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChallengeReward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeReward_Statics::NewProp_Stats_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeReward_Statics::NewProp_Stats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeReward_Statics::NewProp_Items_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeReward_Statics::NewProp_Items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeReward_Statics::NewProp_RewardId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChallengeReward_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
		nullptr,
		&NewStructOps,
		"ChallengeReward",
		sizeof(FChallengeReward),
		alignof(FChallengeReward),
		Z_Construct_UScriptStruct_FChallengeReward_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeReward_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeReward_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeReward_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChallengeReward()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChallengeReward_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteCustomization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChallengeReward"), sizeof(FChallengeReward), Get_Z_Construct_UScriptStruct_FChallengeReward_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChallengeReward_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChallengeReward_Hash() { return 2898133701U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
