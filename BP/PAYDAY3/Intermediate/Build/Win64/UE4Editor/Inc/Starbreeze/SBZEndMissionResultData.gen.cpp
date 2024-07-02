// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEndMissionResultData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEndMissionResultData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEndMissionResultData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZEndMissionResult();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEndMissionSecuredBag();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZObjectiveData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMilestoneData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInstantLootData();
// End Cross Module References
class UScriptStruct* FSBZEndMissionResultData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZEndMissionResultData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZEndMissionResultData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZEndMissionResultData"), sizeof(FSBZEndMissionResultData), Get_Z_Construct_UScriptStruct_FSBZEndMissionResultData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZEndMissionResultData>()
{
	return FSBZEndMissionResultData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZEndMissionResultData(FSBZEndMissionResultData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZEndMissionResultData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZEndMissionResultData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZEndMissionResultData()
	{
		UScriptStruct::DeferCppStructOps<FSBZEndMissionResultData>(FName(TEXT("SBZEndMissionResultData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZEndMissionResultData;
	struct Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MissionResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissionResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MissionResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissionTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MissionTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecuredBags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecuredBags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SecuredBags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagTotal_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BagTotal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExperienceObjectiveArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExperienceObjectiveArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExperienceObjectiveArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MilestoneArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MilestoneArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MilestoneArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerResultArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerResultArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerResultArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllPlayerAIsResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllPlayerAIsResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllOtherCharacterResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllOtherCharacterResult;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstantLootArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstantLootArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstantLootArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletedAssaultWaveCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompletedAssaultWaveCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFinalAssaultTriggered_MetaData[];
#endif
		static void NewProp_bIsFinalAssaultTriggered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFinalAssaultTriggered;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZEndMissionResultData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZEndMissionResultData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_MissionResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_MissionResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZEndMissionResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_MissionResult = { "MissionResult", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEndMissionResultData, MissionResult), Z_Construct_UEnum_Starbreeze_ESBZEndMissionResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_MissionResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_MissionResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_MissionTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZEndMissionResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_MissionTime = { "MissionTime", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEndMissionResultData, MissionTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_MissionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_MissionTime_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_SecuredBags_Inner = { "SecuredBags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZEndMissionSecuredBag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_SecuredBags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZEndMissionResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_SecuredBags = { "SecuredBags", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEndMissionResultData, SecuredBags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_SecuredBags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_SecuredBags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_BagTotal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZEndMissionResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_BagTotal = { "BagTotal", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEndMissionResultData, BagTotal), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_BagTotal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_BagTotal_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_ExperienceObjectiveArray_Inner = { "ExperienceObjectiveArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZObjectiveData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_ExperienceObjectiveArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZEndMissionResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_ExperienceObjectiveArray = { "ExperienceObjectiveArray", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEndMissionResultData, ExperienceObjectiveArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_ExperienceObjectiveArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_ExperienceObjectiveArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_MilestoneArray_Inner = { "MilestoneArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZMilestoneData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_MilestoneArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZEndMissionResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_MilestoneArray = { "MilestoneArray", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEndMissionResultData, MilestoneArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_MilestoneArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_MilestoneArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_PlayerResultArray_Inner = { "PlayerResultArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_PlayerResultArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZEndMissionResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_PlayerResultArray = { "PlayerResultArray", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEndMissionResultData, PlayerResultArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_PlayerResultArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_PlayerResultArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_AllPlayerAIsResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZEndMissionResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_AllPlayerAIsResult = { "AllPlayerAIsResult", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEndMissionResultData, AllPlayerAIsResult), Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_AllPlayerAIsResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_AllPlayerAIsResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_AllOtherCharacterResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZEndMissionResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_AllOtherCharacterResult = { "AllOtherCharacterResult", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEndMissionResultData, AllOtherCharacterResult), Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_AllOtherCharacterResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_AllOtherCharacterResult_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_InstantLootArray_Inner = { "InstantLootArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZInstantLootData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_InstantLootArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZEndMissionResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_InstantLootArray = { "InstantLootArray", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEndMissionResultData, InstantLootArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_InstantLootArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_InstantLootArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_CompletedAssaultWaveCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZEndMissionResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_CompletedAssaultWaveCount = { "CompletedAssaultWaveCount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEndMissionResultData, CompletedAssaultWaveCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_CompletedAssaultWaveCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_CompletedAssaultWaveCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_bIsFinalAssaultTriggered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZEndMissionResultData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_bIsFinalAssaultTriggered_SetBit(void* Obj)
	{
		((FSBZEndMissionResultData*)Obj)->bIsFinalAssaultTriggered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_bIsFinalAssaultTriggered = { "bIsFinalAssaultTriggered", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZEndMissionResultData), &Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_bIsFinalAssaultTriggered_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_bIsFinalAssaultTriggered_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_bIsFinalAssaultTriggered_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_MissionResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_MissionResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_MissionTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_SecuredBags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_SecuredBags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_BagTotal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_ExperienceObjectiveArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_ExperienceObjectiveArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_MilestoneArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_MilestoneArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_PlayerResultArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_PlayerResultArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_AllPlayerAIsResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_AllOtherCharacterResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_InstantLootArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_InstantLootArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_CompletedAssaultWaveCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::NewProp_bIsFinalAssaultTriggered,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZEndMissionResultData",
		sizeof(FSBZEndMissionResultData),
		alignof(FSBZEndMissionResultData),
		Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZEndMissionResultData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZEndMissionResultData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZEndMissionResultData"), sizeof(FSBZEndMissionResultData), Get_Z_Construct_UScriptStruct_FSBZEndMissionResultData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZEndMissionResultData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZEndMissionResultData_Hash() { return 3313453716U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
