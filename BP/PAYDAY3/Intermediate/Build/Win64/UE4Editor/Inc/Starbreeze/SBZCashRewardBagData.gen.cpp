// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCashRewardBagData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCashRewardBagData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCashRewardBagData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZCashRewardBagData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCashRewardBagData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCashRewardBagData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCashRewardBagData"), sizeof(FSBZCashRewardBagData), Get_Z_Construct_UScriptStruct_FSBZCashRewardBagData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCashRewardBagData>()
{
	return FSBZCashRewardBagData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCashRewardBagData(FSBZCashRewardBagData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCashRewardBagData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCashRewardBagData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCashRewardBagData()
	{
		UScriptStruct::DeferCppStructOps<FSBZCashRewardBagData>(FName(TEXT("SBZCashRewardBagData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCashRewardBagData;
	struct Z_Construct_UScriptStruct_FSBZCashRewardBagData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CashDifference_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CashDifference;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCashRewardBagData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCashRewardBagData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCashRewardBagData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCashRewardBagData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCashRewardBagData_Statics::NewProp_Count_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCashRewardBagData" },
		{ "ModuleRelativePath", "Public/SBZCashRewardBagData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCashRewardBagData_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCashRewardBagData, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCashRewardBagData_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCashRewardBagData_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCashRewardBagData_Statics::NewProp_CashDifference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCashRewardBagData" },
		{ "ModuleRelativePath", "Public/SBZCashRewardBagData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCashRewardBagData_Statics::NewProp_CashDifference = { "CashDifference", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCashRewardBagData, CashDifference), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCashRewardBagData_Statics::NewProp_CashDifference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCashRewardBagData_Statics::NewProp_CashDifference_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCashRewardBagData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCashRewardBagData_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCashRewardBagData_Statics::NewProp_CashDifference,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCashRewardBagData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCashRewardBagData",
		sizeof(FSBZCashRewardBagData),
		alignof(FSBZCashRewardBagData),
		Z_Construct_UScriptStruct_FSBZCashRewardBagData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCashRewardBagData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCashRewardBagData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCashRewardBagData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCashRewardBagData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCashRewardBagData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCashRewardBagData"), sizeof(FSBZCashRewardBagData), Get_Z_Construct_UScriptStruct_FSBZCashRewardBagData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCashRewardBagData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCashRewardBagData_Hash() { return 2830768617U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
