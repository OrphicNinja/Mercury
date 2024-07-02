// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInfamyPointPayoutRewardData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInfamyPointPayoutRewardData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZInfamyPointPayoutRewardData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZInfamyPointPayoutRewardData"), sizeof(FSBZInfamyPointPayoutRewardData), Get_Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZInfamyPointPayoutRewardData>()
{
	return FSBZInfamyPointPayoutRewardData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZInfamyPointPayoutRewardData(FSBZInfamyPointPayoutRewardData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZInfamyPointPayoutRewardData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInfamyPointPayoutRewardData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInfamyPointPayoutRewardData()
	{
		UScriptStruct::DeferCppStructOps<FSBZInfamyPointPayoutRewardData>(FName(TEXT("SBZInfamyPointPayoutRewardData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZInfamyPointPayoutRewardData;
	struct Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Completion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Completion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StealthBonus_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StealthBonus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllBagsBonus_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AllBagsBonus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Total_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Total;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalFromBags_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalFromBags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalOnFailedHeist_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalOnFailedHeist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalFromSurvivingAssults_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalFromSurvivingAssults;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZInfamyPointPayoutRewardData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZInfamyPointPayoutRewardData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_Completion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInfamyPointPayoutRewardData" },
		{ "ModuleRelativePath", "Public/SBZInfamyPointPayoutRewardData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_Completion = { "Completion", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInfamyPointPayoutRewardData, Completion), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_Completion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_Completion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_StealthBonus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInfamyPointPayoutRewardData" },
		{ "ModuleRelativePath", "Public/SBZInfamyPointPayoutRewardData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_StealthBonus = { "StealthBonus", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInfamyPointPayoutRewardData, StealthBonus), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_StealthBonus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_StealthBonus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_AllBagsBonus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInfamyPointPayoutRewardData" },
		{ "ModuleRelativePath", "Public/SBZInfamyPointPayoutRewardData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_AllBagsBonus = { "AllBagsBonus", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInfamyPointPayoutRewardData, AllBagsBonus), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_AllBagsBonus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_AllBagsBonus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_Total_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInfamyPointPayoutRewardData" },
		{ "ModuleRelativePath", "Public/SBZInfamyPointPayoutRewardData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_Total = { "Total", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInfamyPointPayoutRewardData, Total), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_Total_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_Total_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_TotalFromBags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInfamyPointPayoutRewardData" },
		{ "ModuleRelativePath", "Public/SBZInfamyPointPayoutRewardData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_TotalFromBags = { "TotalFromBags", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInfamyPointPayoutRewardData, TotalFromBags), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_TotalFromBags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_TotalFromBags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_TotalOnFailedHeist_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInfamyPointPayoutRewardData" },
		{ "ModuleRelativePath", "Public/SBZInfamyPointPayoutRewardData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_TotalOnFailedHeist = { "TotalOnFailedHeist", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInfamyPointPayoutRewardData, TotalOnFailedHeist), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_TotalOnFailedHeist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_TotalOnFailedHeist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_TotalFromSurvivingAssults_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInfamyPointPayoutRewardData" },
		{ "ModuleRelativePath", "Public/SBZInfamyPointPayoutRewardData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_TotalFromSurvivingAssults = { "TotalFromSurvivingAssults", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInfamyPointPayoutRewardData, TotalFromSurvivingAssults), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_TotalFromSurvivingAssults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_TotalFromSurvivingAssults_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_Completion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_StealthBonus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_AllBagsBonus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_Total,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_TotalFromBags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_TotalOnFailedHeist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::NewProp_TotalFromSurvivingAssults,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZInfamyPointPayoutRewardData",
		sizeof(FSBZInfamyPointPayoutRewardData),
		alignof(FSBZInfamyPointPayoutRewardData),
		Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZInfamyPointPayoutRewardData"), sizeof(FSBZInfamyPointPayoutRewardData), Get_Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZInfamyPointPayoutRewardData_Hash() { return 4285243459U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
