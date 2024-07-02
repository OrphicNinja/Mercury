// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerCurrencyBalanceData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerCurrencyBalanceData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCurrency();
// End Cross Module References
class UScriptStruct* FSBZPlayerCurrencyBalanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPlayerCurrencyBalanceData"), sizeof(FSBZPlayerCurrencyBalanceData), Get_Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPlayerCurrencyBalanceData>()
{
	return FSBZPlayerCurrencyBalanceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPlayerCurrencyBalanceData(FSBZPlayerCurrencyBalanceData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPlayerCurrencyBalanceData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerCurrencyBalanceData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerCurrencyBalanceData()
	{
		UScriptStruct::DeferCppStructOps<FSBZPlayerCurrencyBalanceData>(FName(TEXT("SBZPlayerCurrencyBalanceData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerCurrencyBalanceData;
	struct Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cash_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Cash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gold_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Gold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Credit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Credit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerCurrencyBalanceData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPlayerCurrencyBalanceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData_Statics::NewProp_Cash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCurrencyBalanceData" },
		{ "ModuleRelativePath", "Public/SBZPlayerCurrencyBalanceData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData_Statics::NewProp_Cash = { "Cash", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerCurrencyBalanceData, Cash), Z_Construct_UScriptStruct_FSBZCurrency, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData_Statics::NewProp_Cash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData_Statics::NewProp_Cash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData_Statics::NewProp_Gold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCurrencyBalanceData" },
		{ "ModuleRelativePath", "Public/SBZPlayerCurrencyBalanceData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData_Statics::NewProp_Gold = { "Gold", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerCurrencyBalanceData, Gold), Z_Construct_UScriptStruct_FSBZCurrency, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData_Statics::NewProp_Gold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData_Statics::NewProp_Gold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData_Statics::NewProp_Credit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCurrencyBalanceData" },
		{ "ModuleRelativePath", "Public/SBZPlayerCurrencyBalanceData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData_Statics::NewProp_Credit = { "Credit", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerCurrencyBalanceData, Credit), Z_Construct_UScriptStruct_FSBZCurrency, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData_Statics::NewProp_Credit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData_Statics::NewProp_Credit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData_Statics::NewProp_Cash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData_Statics::NewProp_Gold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData_Statics::NewProp_Credit,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZPlayerCurrencyBalanceData",
		sizeof(FSBZPlayerCurrencyBalanceData),
		alignof(FSBZPlayerCurrencyBalanceData),
		Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPlayerCurrencyBalanceData"), sizeof(FSBZPlayerCurrencyBalanceData), Get_Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerCurrencyBalanceData_Hash() { return 2108686702U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
