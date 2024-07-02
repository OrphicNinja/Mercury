// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZChallengeData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZChallengeData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeProgressStat();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeProgressItem();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeRewardItem();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EChallengeStatusEnum();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZChallengeConversion();
// End Cross Module References
class UScriptStruct* FSBZChallengeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZChallengeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZChallengeData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZChallengeData"), sizeof(FSBZChallengeData), Get_Z_Construct_UScriptStruct_FSBZChallengeData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZChallengeData>()
{
	return FSBZChallengeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZChallengeData(FSBZChallengeData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZChallengeData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZChallengeData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZChallengeData()
	{
		UScriptStruct::DeferCppStructOps<FSBZChallengeData>(FName(TEXT("SBZChallengeData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZChallengeData;
	struct Z_Construct_UScriptStruct_FSBZChallengeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ChallengeId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChallengeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelbyteChallengeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccelbyteChallengeId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PrerequisiteChallengeIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrerequisiteChallengeIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrerequisiteChallengeIds;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrerequisiteStatData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrerequisiteStatData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrerequisiteStatData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrerequisiteItemData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrerequisiteItemData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrerequisiteItemData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectiveStatData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveStatData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectiveStatData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RewardItemsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardItemsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RewardItemsData;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tags;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChallengeStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChallengeStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfamyPointReward_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InfamyPointReward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalTarget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChallengeConversion_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeConversion_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChallengeConversion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsActive_MetaData[];
#endif
		static void NewProp_IsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZChallengeData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZChallengeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_ChallengeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeData" },
		{ "ModuleRelativePath", "Public/SBZChallengeData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_ChallengeId = { "ChallengeId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChallengeData, ChallengeId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_ChallengeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_ChallengeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_ChallengeName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeData" },
		{ "ModuleRelativePath", "Public/SBZChallengeData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_ChallengeName = { "ChallengeName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChallengeData, ChallengeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_ChallengeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_ChallengeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_AccelbyteChallengeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeData" },
		{ "ModuleRelativePath", "Public/SBZChallengeData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_AccelbyteChallengeId = { "AccelbyteChallengeId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChallengeData, AccelbyteChallengeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_AccelbyteChallengeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_AccelbyteChallengeId_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_PrerequisiteChallengeIds_Inner = { "PrerequisiteChallengeIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_PrerequisiteChallengeIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeData" },
		{ "ModuleRelativePath", "Public/SBZChallengeData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_PrerequisiteChallengeIds = { "PrerequisiteChallengeIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChallengeData, PrerequisiteChallengeIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_PrerequisiteChallengeIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_PrerequisiteChallengeIds_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_PrerequisiteStatData_Inner = { "PrerequisiteStatData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZChallengeProgressStat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_PrerequisiteStatData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeData" },
		{ "ModuleRelativePath", "Public/SBZChallengeData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_PrerequisiteStatData = { "PrerequisiteStatData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChallengeData, PrerequisiteStatData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_PrerequisiteStatData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_PrerequisiteStatData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_PrerequisiteItemData_Inner = { "PrerequisiteItemData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZChallengeProgressItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_PrerequisiteItemData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeData" },
		{ "ModuleRelativePath", "Public/SBZChallengeData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_PrerequisiteItemData = { "PrerequisiteItemData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChallengeData, PrerequisiteItemData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_PrerequisiteItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_PrerequisiteItemData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_ObjectiveStatData_Inner = { "ObjectiveStatData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZChallengeProgressStat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_ObjectiveStatData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeData" },
		{ "ModuleRelativePath", "Public/SBZChallengeData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_ObjectiveStatData = { "ObjectiveStatData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChallengeData, ObjectiveStatData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_ObjectiveStatData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_ObjectiveStatData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_RewardItemsData_Inner = { "RewardItemsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZChallengeRewardItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_RewardItemsData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeData" },
		{ "ModuleRelativePath", "Public/SBZChallengeData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_RewardItemsData = { "RewardItemsData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChallengeData, RewardItemsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_RewardItemsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_RewardItemsData_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_Tags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeData" },
		{ "ModuleRelativePath", "Public/SBZChallengeData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChallengeData, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_Tags_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_ChallengeStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_ChallengeStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeData" },
		{ "ModuleRelativePath", "Public/SBZChallengeData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_ChallengeStatus = { "ChallengeStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChallengeData, ChallengeStatus), Z_Construct_UEnum_Starbreeze_EChallengeStatusEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_ChallengeStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_ChallengeStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_InfamyPointReward_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeData" },
		{ "ModuleRelativePath", "Public/SBZChallengeData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_InfamyPointReward = { "InfamyPointReward", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChallengeData, InfamyPointReward), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_InfamyPointReward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_InfamyPointReward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_TotalProgress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeData" },
		{ "ModuleRelativePath", "Public/SBZChallengeData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_TotalProgress = { "TotalProgress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChallengeData, TotalProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_TotalProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_TotalProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_TotalTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeData" },
		{ "ModuleRelativePath", "Public/SBZChallengeData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_TotalTarget = { "TotalTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChallengeData, TotalTarget), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_TotalTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_TotalTarget_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_ChallengeConversion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_ChallengeConversion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeData" },
		{ "ModuleRelativePath", "Public/SBZChallengeData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_ChallengeConversion = { "ChallengeConversion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChallengeData, ChallengeConversion), Z_Construct_UEnum_Starbreeze_ESBZChallengeConversion, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_ChallengeConversion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_ChallengeConversion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_IsActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeData" },
		{ "ModuleRelativePath", "Public/SBZChallengeData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_IsActive_SetBit(void* Obj)
	{
		((FSBZChallengeData*)Obj)->IsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_IsActive = { "IsActive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZChallengeData), &Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_IsActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_IsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_IsActive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZChallengeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_ChallengeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_ChallengeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_AccelbyteChallengeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_PrerequisiteChallengeIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_PrerequisiteChallengeIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_PrerequisiteStatData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_PrerequisiteStatData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_PrerequisiteItemData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_PrerequisiteItemData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_ObjectiveStatData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_ObjectiveStatData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_RewardItemsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_RewardItemsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_Tags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_ChallengeStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_ChallengeStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_InfamyPointReward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_TotalProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_TotalTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_ChallengeConversion_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_ChallengeConversion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeData_Statics::NewProp_IsActive,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZChallengeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZChallengeData",
		sizeof(FSBZChallengeData),
		alignof(FSBZChallengeData),
		Z_Construct_UScriptStruct_FSBZChallengeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZChallengeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZChallengeData"), sizeof(FSBZChallengeData), Get_Z_Construct_UScriptStruct_FSBZChallengeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZChallengeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZChallengeData_Hash() { return 1420164666U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
