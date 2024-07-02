// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCashRewardData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCashRewardData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCashRewardData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCashRewardReductionData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCashRewardEventData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCashRewardBagData();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult();
// End Cross Module References
class UScriptStruct* FSBZCashRewardData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCashRewardData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCashRewardData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCashRewardData"), sizeof(FSBZCashRewardData), Get_Z_Construct_UScriptStruct_FSBZCashRewardData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCashRewardData>()
{
	return FSBZCashRewardData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCashRewardData(FSBZCashRewardData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCashRewardData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCashRewardData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCashRewardData()
	{
		UScriptStruct::DeferCppStructOps<FSBZCashRewardData>(FName(TEXT("SBZCashRewardData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCashRewardData;
	struct Z_Construct_UScriptStruct_FSBZCashRewardData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalCashValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalCashValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalCashEarned_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalCashEarned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LootCashValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LootCashValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CashRewardReductionData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CashRewardReductionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CashRewardReductionData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CashRewardEventData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CashRewardEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CashRewardEventData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CashRewardBagData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CashRewardBagData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CashRewardBagData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CashRewardOperationResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CashRewardOperationResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CashRewardOperationResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCashRewardData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCashRewardData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_TotalCashValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCashRewardData" },
		{ "ModuleRelativePath", "Public/SBZCashRewardData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_TotalCashValue = { "TotalCashValue", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCashRewardData, TotalCashValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_TotalCashValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_TotalCashValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_TotalCashEarned_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCashRewardData" },
		{ "ModuleRelativePath", "Public/SBZCashRewardData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_TotalCashEarned = { "TotalCashEarned", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCashRewardData, TotalCashEarned), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_TotalCashEarned_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_TotalCashEarned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_LootCashValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCashRewardData" },
		{ "ModuleRelativePath", "Public/SBZCashRewardData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_LootCashValue = { "LootCashValue", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCashRewardData, LootCashValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_LootCashValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_LootCashValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_CashRewardReductionData_Inner = { "CashRewardReductionData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZCashRewardReductionData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_CashRewardReductionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCashRewardData" },
		{ "ModuleRelativePath", "Public/SBZCashRewardData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_CashRewardReductionData = { "CashRewardReductionData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCashRewardData, CashRewardReductionData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_CashRewardReductionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_CashRewardReductionData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_CashRewardEventData_Inner = { "CashRewardEventData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZCashRewardEventData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_CashRewardEventData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCashRewardData" },
		{ "ModuleRelativePath", "Public/SBZCashRewardData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_CashRewardEventData = { "CashRewardEventData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCashRewardData, CashRewardEventData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_CashRewardEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_CashRewardEventData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_CashRewardBagData_Inner = { "CashRewardBagData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZCashRewardBagData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_CashRewardBagData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCashRewardData" },
		{ "ModuleRelativePath", "Public/SBZCashRewardData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_CashRewardBagData = { "CashRewardBagData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCashRewardData, CashRewardBagData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_CashRewardBagData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_CashRewardBagData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_CashRewardOperationResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_CashRewardOperationResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCashRewardData" },
		{ "ModuleRelativePath", "Public/SBZCashRewardData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_CashRewardOperationResult = { "CashRewardOperationResult", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCashRewardData, CashRewardOperationResult), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_CashRewardOperationResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_CashRewardOperationResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_TotalCashValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_TotalCashEarned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_LootCashValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_CashRewardReductionData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_CashRewardReductionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_CashRewardEventData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_CashRewardEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_CashRewardBagData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_CashRewardBagData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_CashRewardOperationResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::NewProp_CashRewardOperationResult,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCashRewardData",
		sizeof(FSBZCashRewardData),
		alignof(FSBZCashRewardData),
		Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCashRewardData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCashRewardData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCashRewardData"), sizeof(FSBZCashRewardData), Get_Z_Construct_UScriptStruct_FSBZCashRewardData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCashRewardData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCashRewardData_Hash() { return 1471196622U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
