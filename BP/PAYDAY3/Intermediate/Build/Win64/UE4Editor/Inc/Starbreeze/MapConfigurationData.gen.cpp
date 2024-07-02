// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/MapConfigurationData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapConfigurationData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FMapConfigurationData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCashRewardModifier();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLootValueArray();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInstantLootValues();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPerformanceBonusArray();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerStatisticArray();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInfamyPointPayout();
// End Cross Module References
class UScriptStruct* FMapConfigurationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FMapConfigurationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapConfigurationData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("MapConfigurationData"), sizeof(FMapConfigurationData), Get_Z_Construct_UScriptStruct_FMapConfigurationData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FMapConfigurationData>()
{
	return FMapConfigurationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMapConfigurationData(FMapConfigurationData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("MapConfigurationData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFMapConfigurationData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFMapConfigurationData()
	{
		UScriptStruct::DeferCppStructOps<FMapConfigurationData>(FName(TEXT("MapConfigurationData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFMapConfigurationData;
	struct Z_Construct_UScriptStruct_FMapConfigurationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoudBaseExperience_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoudBaseExperience;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StealthBaseExperience_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StealthBaseExperience;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoudBaseInfamyPointsOnFail_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoudBaseInfamyPointsOnFail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StealthBaseInfamyPointsOnFail_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StealthBaseInfamyPointsOnFail;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoudInfamyPointsOnSurvivingOneAssultDifficultyArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoudInfamyPointsOnSurvivingOneAssultDifficultyArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LoudInfamyPointsOnSurvivingOneAssultDifficultyArray;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoudInfamyPointsOnSurvivingFinalAssultDifficultyArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoudInfamyPointsOnSurvivingFinalAssultDifficultyArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LoudInfamyPointsOnSurvivingFinalAssultDifficultyArray;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DifficultyExperienceModifierArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DifficultyExperienceModifierArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DifficultyExperienceModifierArray;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DifficultyInfamyPointsOnFailModifierArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DifficultyInfamyPointsOnFailModifierArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DifficultyInfamyPointsOnFailModifierArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StealthDifficultyCashRewardModifierArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StealthDifficultyCashRewardModifierArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StealthDifficultyCashRewardModifierArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoudDifficultyCashRewardModifierArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoudDifficultyCashRewardModifierArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LoudDifficultyCashRewardModifierArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoudLootValuesArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoudLootValuesArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LoudLootValuesArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StealthLootValuesArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StealthLootValuesArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StealthLootValuesArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstantLootValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstantLootValues;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ObjectivesToExperienceRewardMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ObjectivesToExperienceRewardMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectivesToExperienceRewardMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ObjectivesToExperienceRewardMap;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoudMilestoneToExperienceRewardMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LoudMilestoneToExperienceRewardMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoudMilestoneToExperienceRewardMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LoudMilestoneToExperienceRewardMap;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StealthMilestoneToExperienceRewardMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StealthMilestoneToExperienceRewardMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StealthMilestoneToExperienceRewardMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StealthMilestoneToExperienceRewardMap;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoudMilestoneToInfamyPointsOnFailRewardMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LoudMilestoneToInfamyPointsOnFailRewardMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoudMilestoneToInfamyPointsOnFailRewardMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LoudMilestoneToInfamyPointsOnFailRewardMap;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StealthMilestoneToInfamyPointsOnFailRewardMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StealthMilestoneToInfamyPointsOnFailRewardMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StealthMilestoneToInfamyPointsOnFailRewardMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StealthMilestoneToInfamyPointsOnFailRewardMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerformanceBonusMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PerformanceBonusMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerformanceBonusMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PerformanceBonusMap;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ItemIdRewardMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemIdRewardMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemIdRewardMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ItemIdRewardMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoudLevelCompletedStatistics_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LoudLevelCompletedStatistics_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoudLevelCompletedStatistics_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LoudLevelCompletedStatistics;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StealthLevelCompletedStatistics_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StealthLevelCompletedStatistics_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StealthLevelCompletedStatistics_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StealthLevelCompletedStatistics;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InfamyPointPayoutArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfamyPointPayoutArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InfamyPointPayoutArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapConfigurationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MapConfigurationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapConfigurationData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudBaseExperience_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapConfigurationData" },
		{ "ModuleRelativePath", "Public/MapConfigurationData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudBaseExperience = { "LoudBaseExperience", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapConfigurationData, LoudBaseExperience), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudBaseExperience_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudBaseExperience_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthBaseExperience_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapConfigurationData" },
		{ "ModuleRelativePath", "Public/MapConfigurationData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthBaseExperience = { "StealthBaseExperience", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapConfigurationData, StealthBaseExperience), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthBaseExperience_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthBaseExperience_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudBaseInfamyPointsOnFail_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapConfigurationData" },
		{ "ModuleRelativePath", "Public/MapConfigurationData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudBaseInfamyPointsOnFail = { "LoudBaseInfamyPointsOnFail", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapConfigurationData, LoudBaseInfamyPointsOnFail), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudBaseInfamyPointsOnFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudBaseInfamyPointsOnFail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthBaseInfamyPointsOnFail_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapConfigurationData" },
		{ "ModuleRelativePath", "Public/MapConfigurationData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthBaseInfamyPointsOnFail = { "StealthBaseInfamyPointsOnFail", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapConfigurationData, StealthBaseInfamyPointsOnFail), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthBaseInfamyPointsOnFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthBaseInfamyPointsOnFail_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudInfamyPointsOnSurvivingOneAssultDifficultyArray_Inner = { "LoudInfamyPointsOnSurvivingOneAssultDifficultyArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudInfamyPointsOnSurvivingOneAssultDifficultyArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapConfigurationData" },
		{ "ModuleRelativePath", "Public/MapConfigurationData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudInfamyPointsOnSurvivingOneAssultDifficultyArray = { "LoudInfamyPointsOnSurvivingOneAssultDifficultyArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapConfigurationData, LoudInfamyPointsOnSurvivingOneAssultDifficultyArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudInfamyPointsOnSurvivingOneAssultDifficultyArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudInfamyPointsOnSurvivingOneAssultDifficultyArray_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudInfamyPointsOnSurvivingFinalAssultDifficultyArray_Inner = { "LoudInfamyPointsOnSurvivingFinalAssultDifficultyArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudInfamyPointsOnSurvivingFinalAssultDifficultyArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapConfigurationData" },
		{ "ModuleRelativePath", "Public/MapConfigurationData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudInfamyPointsOnSurvivingFinalAssultDifficultyArray = { "LoudInfamyPointsOnSurvivingFinalAssultDifficultyArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapConfigurationData, LoudInfamyPointsOnSurvivingFinalAssultDifficultyArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudInfamyPointsOnSurvivingFinalAssultDifficultyArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudInfamyPointsOnSurvivingFinalAssultDifficultyArray_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_DifficultyExperienceModifierArray_Inner = { "DifficultyExperienceModifierArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_DifficultyExperienceModifierArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapConfigurationData" },
		{ "ModuleRelativePath", "Public/MapConfigurationData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_DifficultyExperienceModifierArray = { "DifficultyExperienceModifierArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapConfigurationData, DifficultyExperienceModifierArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_DifficultyExperienceModifierArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_DifficultyExperienceModifierArray_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_DifficultyInfamyPointsOnFailModifierArray_Inner = { "DifficultyInfamyPointsOnFailModifierArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_DifficultyInfamyPointsOnFailModifierArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapConfigurationData" },
		{ "ModuleRelativePath", "Public/MapConfigurationData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_DifficultyInfamyPointsOnFailModifierArray = { "DifficultyInfamyPointsOnFailModifierArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapConfigurationData, DifficultyInfamyPointsOnFailModifierArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_DifficultyInfamyPointsOnFailModifierArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_DifficultyInfamyPointsOnFailModifierArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthDifficultyCashRewardModifierArray_Inner = { "StealthDifficultyCashRewardModifierArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZCashRewardModifier, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthDifficultyCashRewardModifierArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapConfigurationData" },
		{ "ModuleRelativePath", "Public/MapConfigurationData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthDifficultyCashRewardModifierArray = { "StealthDifficultyCashRewardModifierArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapConfigurationData, StealthDifficultyCashRewardModifierArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthDifficultyCashRewardModifierArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthDifficultyCashRewardModifierArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudDifficultyCashRewardModifierArray_Inner = { "LoudDifficultyCashRewardModifierArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZCashRewardModifier, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudDifficultyCashRewardModifierArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapConfigurationData" },
		{ "ModuleRelativePath", "Public/MapConfigurationData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudDifficultyCashRewardModifierArray = { "LoudDifficultyCashRewardModifierArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapConfigurationData, LoudDifficultyCashRewardModifierArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudDifficultyCashRewardModifierArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudDifficultyCashRewardModifierArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudLootValuesArray_Inner = { "LoudLootValuesArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZLootValueArray, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudLootValuesArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapConfigurationData" },
		{ "ModuleRelativePath", "Public/MapConfigurationData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudLootValuesArray = { "LoudLootValuesArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapConfigurationData, LoudLootValuesArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudLootValuesArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudLootValuesArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthLootValuesArray_Inner = { "StealthLootValuesArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZLootValueArray, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthLootValuesArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapConfigurationData" },
		{ "ModuleRelativePath", "Public/MapConfigurationData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthLootValuesArray = { "StealthLootValuesArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapConfigurationData, StealthLootValuesArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthLootValuesArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthLootValuesArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_InstantLootValues_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapConfigurationData" },
		{ "ModuleRelativePath", "Public/MapConfigurationData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_InstantLootValues = { "InstantLootValues", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapConfigurationData, InstantLootValues), Z_Construct_UScriptStruct_FSBZInstantLootValues, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_InstantLootValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_InstantLootValues_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_ObjectivesToExperienceRewardMap_ValueProp = { "ObjectivesToExperienceRewardMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_ObjectivesToExperienceRewardMap_Key_KeyProp = { "ObjectivesToExperienceRewardMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_ObjectivesToExperienceRewardMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapConfigurationData" },
		{ "ModuleRelativePath", "Public/MapConfigurationData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_ObjectivesToExperienceRewardMap = { "ObjectivesToExperienceRewardMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapConfigurationData, ObjectivesToExperienceRewardMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_ObjectivesToExperienceRewardMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_ObjectivesToExperienceRewardMap_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudMilestoneToExperienceRewardMap_ValueProp = { "LoudMilestoneToExperienceRewardMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudMilestoneToExperienceRewardMap_Key_KeyProp = { "LoudMilestoneToExperienceRewardMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudMilestoneToExperienceRewardMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapConfigurationData" },
		{ "ModuleRelativePath", "Public/MapConfigurationData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudMilestoneToExperienceRewardMap = { "LoudMilestoneToExperienceRewardMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapConfigurationData, LoudMilestoneToExperienceRewardMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudMilestoneToExperienceRewardMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudMilestoneToExperienceRewardMap_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthMilestoneToExperienceRewardMap_ValueProp = { "StealthMilestoneToExperienceRewardMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthMilestoneToExperienceRewardMap_Key_KeyProp = { "StealthMilestoneToExperienceRewardMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthMilestoneToExperienceRewardMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapConfigurationData" },
		{ "ModuleRelativePath", "Public/MapConfigurationData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthMilestoneToExperienceRewardMap = { "StealthMilestoneToExperienceRewardMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapConfigurationData, StealthMilestoneToExperienceRewardMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthMilestoneToExperienceRewardMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthMilestoneToExperienceRewardMap_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudMilestoneToInfamyPointsOnFailRewardMap_ValueProp = { "LoudMilestoneToInfamyPointsOnFailRewardMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudMilestoneToInfamyPointsOnFailRewardMap_Key_KeyProp = { "LoudMilestoneToInfamyPointsOnFailRewardMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudMilestoneToInfamyPointsOnFailRewardMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapConfigurationData" },
		{ "ModuleRelativePath", "Public/MapConfigurationData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudMilestoneToInfamyPointsOnFailRewardMap = { "LoudMilestoneToInfamyPointsOnFailRewardMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapConfigurationData, LoudMilestoneToInfamyPointsOnFailRewardMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudMilestoneToInfamyPointsOnFailRewardMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudMilestoneToInfamyPointsOnFailRewardMap_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthMilestoneToInfamyPointsOnFailRewardMap_ValueProp = { "StealthMilestoneToInfamyPointsOnFailRewardMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthMilestoneToInfamyPointsOnFailRewardMap_Key_KeyProp = { "StealthMilestoneToInfamyPointsOnFailRewardMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthMilestoneToInfamyPointsOnFailRewardMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapConfigurationData" },
		{ "ModuleRelativePath", "Public/MapConfigurationData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthMilestoneToInfamyPointsOnFailRewardMap = { "StealthMilestoneToInfamyPointsOnFailRewardMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapConfigurationData, StealthMilestoneToInfamyPointsOnFailRewardMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthMilestoneToInfamyPointsOnFailRewardMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthMilestoneToInfamyPointsOnFailRewardMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_PerformanceBonusMap_ValueProp = { "PerformanceBonusMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZPerformanceBonusArray, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_PerformanceBonusMap_Key_KeyProp = { "PerformanceBonusMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_PerformanceBonusMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapConfigurationData" },
		{ "ModuleRelativePath", "Public/MapConfigurationData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_PerformanceBonusMap = { "PerformanceBonusMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapConfigurationData, PerformanceBonusMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_PerformanceBonusMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_PerformanceBonusMap_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_ItemIdRewardMap_ValueProp = { "ItemIdRewardMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_ItemIdRewardMap_Key_KeyProp = { "ItemIdRewardMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_ItemIdRewardMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapConfigurationData" },
		{ "ModuleRelativePath", "Public/MapConfigurationData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_ItemIdRewardMap = { "ItemIdRewardMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapConfigurationData, ItemIdRewardMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_ItemIdRewardMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_ItemIdRewardMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudLevelCompletedStatistics_ValueProp = { "LoudLevelCompletedStatistics", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZPlayerStatisticArray, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudLevelCompletedStatistics_Key_KeyProp = { "LoudLevelCompletedStatistics_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudLevelCompletedStatistics_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapConfigurationData" },
		{ "ModuleRelativePath", "Public/MapConfigurationData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudLevelCompletedStatistics = { "LoudLevelCompletedStatistics", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapConfigurationData, LoudLevelCompletedStatistics), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudLevelCompletedStatistics_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudLevelCompletedStatistics_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthLevelCompletedStatistics_ValueProp = { "StealthLevelCompletedStatistics", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZPlayerStatisticArray, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthLevelCompletedStatistics_Key_KeyProp = { "StealthLevelCompletedStatistics_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthLevelCompletedStatistics_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapConfigurationData" },
		{ "ModuleRelativePath", "Public/MapConfigurationData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthLevelCompletedStatistics = { "StealthLevelCompletedStatistics", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapConfigurationData, StealthLevelCompletedStatistics), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthLevelCompletedStatistics_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthLevelCompletedStatistics_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_InfamyPointPayoutArray_Inner = { "InfamyPointPayoutArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZInfamyPointPayout, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_InfamyPointPayoutArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MapConfigurationData" },
		{ "ModuleRelativePath", "Public/MapConfigurationData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_InfamyPointPayoutArray = { "InfamyPointPayoutArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapConfigurationData, InfamyPointPayoutArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_InfamyPointPayoutArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_InfamyPointPayoutArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapConfigurationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudBaseExperience,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthBaseExperience,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudBaseInfamyPointsOnFail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthBaseInfamyPointsOnFail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudInfamyPointsOnSurvivingOneAssultDifficultyArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudInfamyPointsOnSurvivingOneAssultDifficultyArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudInfamyPointsOnSurvivingFinalAssultDifficultyArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudInfamyPointsOnSurvivingFinalAssultDifficultyArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_DifficultyExperienceModifierArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_DifficultyExperienceModifierArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_DifficultyInfamyPointsOnFailModifierArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_DifficultyInfamyPointsOnFailModifierArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthDifficultyCashRewardModifierArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthDifficultyCashRewardModifierArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudDifficultyCashRewardModifierArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudDifficultyCashRewardModifierArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudLootValuesArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudLootValuesArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthLootValuesArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthLootValuesArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_InstantLootValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_ObjectivesToExperienceRewardMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_ObjectivesToExperienceRewardMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_ObjectivesToExperienceRewardMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudMilestoneToExperienceRewardMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudMilestoneToExperienceRewardMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudMilestoneToExperienceRewardMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthMilestoneToExperienceRewardMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthMilestoneToExperienceRewardMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthMilestoneToExperienceRewardMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudMilestoneToInfamyPointsOnFailRewardMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudMilestoneToInfamyPointsOnFailRewardMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudMilestoneToInfamyPointsOnFailRewardMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthMilestoneToInfamyPointsOnFailRewardMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthMilestoneToInfamyPointsOnFailRewardMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthMilestoneToInfamyPointsOnFailRewardMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_PerformanceBonusMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_PerformanceBonusMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_PerformanceBonusMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_ItemIdRewardMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_ItemIdRewardMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_ItemIdRewardMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudLevelCompletedStatistics_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudLevelCompletedStatistics_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_LoudLevelCompletedStatistics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthLevelCompletedStatistics_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthLevelCompletedStatistics_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_StealthLevelCompletedStatistics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_InfamyPointPayoutArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapConfigurationData_Statics::NewProp_InfamyPointPayoutArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapConfigurationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"MapConfigurationData",
		sizeof(FMapConfigurationData),
		alignof(FMapConfigurationData),
		Z_Construct_UScriptStruct_FMapConfigurationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapConfigurationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMapConfigurationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMapConfigurationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MapConfigurationData"), sizeof(FMapConfigurationData), Get_Z_Construct_UScriptStruct_FMapConfigurationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMapConfigurationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMapConfigurationData_Hash() { return 840016923U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
