// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCharacterEndMissionExpBonusData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCharacterEndMissionExpBonusData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMilestoneRewardData();
// End Cross Module References
class UScriptStruct* FSBZCharacterEndMissionExpBonusData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCharacterEndMissionExpBonusData"), sizeof(FSBZCharacterEndMissionExpBonusData), Get_Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCharacterEndMissionExpBonusData>()
{
	return FSBZCharacterEndMissionExpBonusData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCharacterEndMissionExpBonusData(FSBZCharacterEndMissionExpBonusData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCharacterEndMissionExpBonusData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCharacterEndMissionExpBonusData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCharacterEndMissionExpBonusData()
	{
		UScriptStruct::DeferCppStructOps<FSBZCharacterEndMissionExpBonusData>(FName(TEXT("SBZCharacterEndMissionExpBonusData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCharacterEndMissionExpBonusData;
	struct Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalExp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalExp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoudMilestoneRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoudMilestoneRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoudBaseExp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoudBaseExp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StealthMilestoneRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StealthMilestoneRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StealthBaseExp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StealthBaseExp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DifficultyModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DifficultyModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerformanceModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PerformanceModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExperiencePointsFromObjectivesModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExperiencePointsFromObjectivesModifier;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MilestoneRewardDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MilestoneRewardDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MilestoneRewardDataArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCharacterEndMissionExpBonusData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCharacterEndMissionExpBonusData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_TotalExp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEndMissionExpBonusData" },
		{ "ModuleRelativePath", "Public/SBZCharacterEndMissionExpBonusData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_TotalExp = { "TotalExp", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterEndMissionExpBonusData, TotalExp), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_TotalExp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_TotalExp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_LoudMilestoneRatio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEndMissionExpBonusData" },
		{ "ModuleRelativePath", "Public/SBZCharacterEndMissionExpBonusData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_LoudMilestoneRatio = { "LoudMilestoneRatio", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterEndMissionExpBonusData, LoudMilestoneRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_LoudMilestoneRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_LoudMilestoneRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_LoudBaseExp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEndMissionExpBonusData" },
		{ "ModuleRelativePath", "Public/SBZCharacterEndMissionExpBonusData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_LoudBaseExp = { "LoudBaseExp", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterEndMissionExpBonusData, LoudBaseExp), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_LoudBaseExp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_LoudBaseExp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_StealthMilestoneRatio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEndMissionExpBonusData" },
		{ "ModuleRelativePath", "Public/SBZCharacterEndMissionExpBonusData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_StealthMilestoneRatio = { "StealthMilestoneRatio", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterEndMissionExpBonusData, StealthMilestoneRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_StealthMilestoneRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_StealthMilestoneRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_StealthBaseExp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEndMissionExpBonusData" },
		{ "ModuleRelativePath", "Public/SBZCharacterEndMissionExpBonusData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_StealthBaseExp = { "StealthBaseExp", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterEndMissionExpBonusData, StealthBaseExp), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_StealthBaseExp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_StealthBaseExp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_DifficultyModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEndMissionExpBonusData" },
		{ "ModuleRelativePath", "Public/SBZCharacterEndMissionExpBonusData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_DifficultyModifier = { "DifficultyModifier", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterEndMissionExpBonusData, DifficultyModifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_DifficultyModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_DifficultyModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_PerformanceModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEndMissionExpBonusData" },
		{ "ModuleRelativePath", "Public/SBZCharacterEndMissionExpBonusData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_PerformanceModifier = { "PerformanceModifier", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterEndMissionExpBonusData, PerformanceModifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_PerformanceModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_PerformanceModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_ExperiencePointsFromObjectivesModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEndMissionExpBonusData" },
		{ "ModuleRelativePath", "Public/SBZCharacterEndMissionExpBonusData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_ExperiencePointsFromObjectivesModifier = { "ExperiencePointsFromObjectivesModifier", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterEndMissionExpBonusData, ExperiencePointsFromObjectivesModifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_ExperiencePointsFromObjectivesModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_ExperiencePointsFromObjectivesModifier_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_MilestoneRewardDataArray_Inner = { "MilestoneRewardDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZMilestoneRewardData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_MilestoneRewardDataArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEndMissionExpBonusData" },
		{ "ModuleRelativePath", "Public/SBZCharacterEndMissionExpBonusData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_MilestoneRewardDataArray = { "MilestoneRewardDataArray", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterEndMissionExpBonusData, MilestoneRewardDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_MilestoneRewardDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_MilestoneRewardDataArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_TotalExp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_LoudMilestoneRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_LoudBaseExp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_StealthMilestoneRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_StealthBaseExp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_DifficultyModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_PerformanceModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_ExperiencePointsFromObjectivesModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_MilestoneRewardDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::NewProp_MilestoneRewardDataArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCharacterEndMissionExpBonusData",
		sizeof(FSBZCharacterEndMissionExpBonusData),
		alignof(FSBZCharacterEndMissionExpBonusData),
		Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCharacterEndMissionExpBonusData"), sizeof(FSBZCharacterEndMissionExpBonusData), Get_Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData_Hash() { return 2629237787U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
