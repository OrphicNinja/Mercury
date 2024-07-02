// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCashRewardReductionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCashRewardReductionData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCashRewardReductionData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZRewardReductionType();
// End Cross Module References
class UScriptStruct* FSBZCashRewardReductionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCashRewardReductionData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCashRewardReductionData"), sizeof(FSBZCashRewardReductionData), Get_Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCashRewardReductionData>()
{
	return FSBZCashRewardReductionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCashRewardReductionData(FSBZCashRewardReductionData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCashRewardReductionData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCashRewardReductionData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCashRewardReductionData()
	{
		UScriptStruct::DeferCppStructOps<FSBZCashRewardReductionData>(FName(TEXT("SBZCashRewardReductionData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCashRewardReductionData;
	struct Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReductionPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReductionPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReductionCash_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReductionCash;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReductionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReductionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReductionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCashRewardReductionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCashRewardReductionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Statics::NewProp_Count_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCashRewardReductionData" },
		{ "ModuleRelativePath", "Public/SBZCashRewardReductionData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCashRewardReductionData, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Statics::NewProp_ReductionPercentage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCashRewardReductionData" },
		{ "ModuleRelativePath", "Public/SBZCashRewardReductionData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Statics::NewProp_ReductionPercentage = { "ReductionPercentage", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCashRewardReductionData, ReductionPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Statics::NewProp_ReductionPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Statics::NewProp_ReductionPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Statics::NewProp_ReductionCash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCashRewardReductionData" },
		{ "ModuleRelativePath", "Public/SBZCashRewardReductionData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Statics::NewProp_ReductionCash = { "ReductionCash", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCashRewardReductionData, ReductionCash), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Statics::NewProp_ReductionCash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Statics::NewProp_ReductionCash_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Statics::NewProp_ReductionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Statics::NewProp_ReductionType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCashRewardReductionData" },
		{ "ModuleRelativePath", "Public/SBZCashRewardReductionData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Statics::NewProp_ReductionType = { "ReductionType", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCashRewardReductionData, ReductionType), Z_Construct_UEnum_Starbreeze_ESBZRewardReductionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Statics::NewProp_ReductionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Statics::NewProp_ReductionType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Statics::NewProp_ReductionPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Statics::NewProp_ReductionCash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Statics::NewProp_ReductionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Statics::NewProp_ReductionType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCashRewardReductionData",
		sizeof(FSBZCashRewardReductionData),
		alignof(FSBZCashRewardReductionData),
		Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCashRewardReductionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCashRewardReductionData"), sizeof(FSBZCashRewardReductionData), Get_Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCashRewardReductionData_Hash() { return 2690158048U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
