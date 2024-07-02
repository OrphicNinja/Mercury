// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerEndMissionResultData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerEndMissionResultData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCashRewardData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRandomItemReward();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSkillRewardData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerStatisticsValue();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZPlayerEndMissionResultData>() == std::is_polymorphic<FSBZCharacterEndMissionResultData>(), "USTRUCT FSBZPlayerEndMissionResultData cannot be polymorphic unless super FSBZCharacterEndMissionResultData is polymorphic");

class UScriptStruct* FSBZPlayerEndMissionResultData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPlayerEndMissionResultData"), sizeof(FSBZPlayerEndMissionResultData), Get_Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPlayerEndMissionResultData>()
{
	return FSBZPlayerEndMissionResultData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPlayerEndMissionResultData(FSBZPlayerEndMissionResultData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPlayerEndMissionResultData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerEndMissionResultData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerEndMissionResultData()
	{
		UScriptStruct::DeferCppStructOps<FSBZPlayerEndMissionResultData>(FName(TEXT("SBZPlayerEndMissionResultData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerEndMissionResultData;
	struct Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayerRewardsUpdated_MetaData[];
#endif
		static void NewProp_bPlayerRewardsUpdated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayerRewardsUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStateId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerStateId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterEndMissionExpBonusData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterEndMissionExpBonusData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CashRewardData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CashRewardData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomItemRewardArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomItemRewardArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RandomItemRewardArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponProgressionUpdateArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponProgressionUpdateArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeaponProgressionUpdateArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillRewardData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkillRewardData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfamyPointPayoutRewardData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InfamyPointPayoutRewardData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfamyStatsValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InfamyStatsValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenownStatsValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RenownStatsValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBeenInCustody_MetaData[];
#endif
		static void NewProp_bHasBeenInCustody_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBeenInCustody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivedAssaultWaves_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SurvivedAssaultWaves;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerEndMissionResultData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPlayerEndMissionResultData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_bPlayerRewardsUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZPlayerEndMissionResultData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_bPlayerRewardsUpdated_SetBit(void* Obj)
	{
		((FSBZPlayerEndMissionResultData*)Obj)->bPlayerRewardsUpdated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_bPlayerRewardsUpdated = { "bPlayerRewardsUpdated", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZPlayerEndMissionResultData), &Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_bPlayerRewardsUpdated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_bPlayerRewardsUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_bPlayerRewardsUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_PlayerStateId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZPlayerEndMissionResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_PlayerStateId = { "PlayerStateId", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerEndMissionResultData, PlayerStateId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_PlayerStateId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_PlayerStateId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_CharacterEndMissionExpBonusData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZPlayerEndMissionResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_CharacterEndMissionExpBonusData = { "CharacterEndMissionExpBonusData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerEndMissionResultData, CharacterEndMissionExpBonusData), Z_Construct_UScriptStruct_FSBZCharacterEndMissionExpBonusData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_CharacterEndMissionExpBonusData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_CharacterEndMissionExpBonusData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_CashRewardData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZPlayerEndMissionResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_CashRewardData = { "CashRewardData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerEndMissionResultData, CashRewardData), Z_Construct_UScriptStruct_FSBZCashRewardData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_CashRewardData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_CashRewardData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_RandomItemRewardArray_Inner = { "RandomItemRewardArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZRandomItemReward, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_RandomItemRewardArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZPlayerEndMissionResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_RandomItemRewardArray = { "RandomItemRewardArray", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerEndMissionResultData, RandomItemRewardArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_RandomItemRewardArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_RandomItemRewardArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_WeaponProgressionUpdateArray_Inner = { "WeaponProgressionUpdateArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZWeaponProgressionUpdateData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_WeaponProgressionUpdateArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZPlayerEndMissionResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_WeaponProgressionUpdateArray = { "WeaponProgressionUpdateArray", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerEndMissionResultData, WeaponProgressionUpdateArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_WeaponProgressionUpdateArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_WeaponProgressionUpdateArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_SkillRewardData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZPlayerEndMissionResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_SkillRewardData = { "SkillRewardData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerEndMissionResultData, SkillRewardData), Z_Construct_UScriptStruct_FSBZSkillRewardData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_SkillRewardData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_SkillRewardData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_InfamyPointPayoutRewardData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZPlayerEndMissionResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_InfamyPointPayoutRewardData = { "InfamyPointPayoutRewardData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerEndMissionResultData, InfamyPointPayoutRewardData), Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_InfamyPointPayoutRewardData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_InfamyPointPayoutRewardData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_InfamyStatsValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZPlayerEndMissionResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_InfamyStatsValue = { "InfamyStatsValue", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerEndMissionResultData, InfamyStatsValue), Z_Construct_UScriptStruct_FSBZPlayerStatisticsValue, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_InfamyStatsValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_InfamyStatsValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_RenownStatsValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZPlayerEndMissionResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_RenownStatsValue = { "RenownStatsValue", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerEndMissionResultData, RenownStatsValue), Z_Construct_UScriptStruct_FSBZPlayerStatisticsValue, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_RenownStatsValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_RenownStatsValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_bHasBeenInCustody_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZPlayerEndMissionResultData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_bHasBeenInCustody_SetBit(void* Obj)
	{
		((FSBZPlayerEndMissionResultData*)Obj)->bHasBeenInCustody = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_bHasBeenInCustody = { "bHasBeenInCustody", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZPlayerEndMissionResultData), &Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_bHasBeenInCustody_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_bHasBeenInCustody_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_bHasBeenInCustody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_SurvivedAssaultWaves_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZPlayerEndMissionResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_SurvivedAssaultWaves = { "SurvivedAssaultWaves", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerEndMissionResultData, SurvivedAssaultWaves), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_SurvivedAssaultWaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_SurvivedAssaultWaves_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_bPlayerRewardsUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_PlayerStateId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_CharacterEndMissionExpBonusData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_CashRewardData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_RandomItemRewardArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_RandomItemRewardArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_WeaponProgressionUpdateArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_WeaponProgressionUpdateArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_SkillRewardData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_InfamyPointPayoutRewardData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_InfamyStatsValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_RenownStatsValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_bHasBeenInCustody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::NewProp_SurvivedAssaultWaves,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData,
		&NewStructOps,
		"SBZPlayerEndMissionResultData",
		sizeof(FSBZPlayerEndMissionResultData),
		alignof(FSBZPlayerEndMissionResultData),
		Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPlayerEndMissionResultData"), sizeof(FSBZPlayerEndMissionResultData), Get_Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData_Hash() { return 1358921465U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
