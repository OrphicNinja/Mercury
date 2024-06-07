// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsTimeLimitedBalance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsTimeLimitedBalance() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsTimeLimitedBalance();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FAccelByteModelsTimeLimitedBalance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsTimeLimitedBalance_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsTimeLimitedBalance, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsTimeLimitedBalance"), sizeof(FAccelByteModelsTimeLimitedBalance), Get_Z_Construct_UScriptStruct_FAccelByteModelsTimeLimitedBalance_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsTimeLimitedBalance>()
{
	return FAccelByteModelsTimeLimitedBalance::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsTimeLimitedBalance(FAccelByteModelsTimeLimitedBalance::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsTimeLimitedBalance"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsTimeLimitedBalance
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsTimeLimitedBalance()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsTimeLimitedBalance>(FName(TEXT("AccelByteModelsTimeLimitedBalance")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsTimeLimitedBalance;
	struct Z_Construct_UScriptStruct_FAccelByteModelsTimeLimitedBalance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Balance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Balance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BalanceSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BalanceSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpiredAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpiredAt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsTimeLimitedBalance_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsTimeLimitedBalance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsTimeLimitedBalance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsTimeLimitedBalance>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsTimeLimitedBalance_Statics::NewProp_Balance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsTimeLimitedBalance" },
		{ "ModuleRelativePath", "Public/AccelByteModelsTimeLimitedBalance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsTimeLimitedBalance_Statics::NewProp_Balance = { "Balance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsTimeLimitedBalance, Balance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsTimeLimitedBalance_Statics::NewProp_Balance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsTimeLimitedBalance_Statics::NewProp_Balance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsTimeLimitedBalance_Statics::NewProp_BalanceSource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsTimeLimitedBalance" },
		{ "ModuleRelativePath", "Public/AccelByteModelsTimeLimitedBalance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsTimeLimitedBalance_Statics::NewProp_BalanceSource = { "BalanceSource", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsTimeLimitedBalance, BalanceSource), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsTimeLimitedBalance_Statics::NewProp_BalanceSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsTimeLimitedBalance_Statics::NewProp_BalanceSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsTimeLimitedBalance_Statics::NewProp_ExpiredAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsTimeLimitedBalance" },
		{ "ModuleRelativePath", "Public/AccelByteModelsTimeLimitedBalance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsTimeLimitedBalance_Statics::NewProp_ExpiredAt = { "ExpiredAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsTimeLimitedBalance, ExpiredAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsTimeLimitedBalance_Statics::NewProp_ExpiredAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsTimeLimitedBalance_Statics::NewProp_ExpiredAt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsTimeLimitedBalance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsTimeLimitedBalance_Statics::NewProp_Balance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsTimeLimitedBalance_Statics::NewProp_BalanceSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsTimeLimitedBalance_Statics::NewProp_ExpiredAt,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsTimeLimitedBalance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsTimeLimitedBalance",
		sizeof(FAccelByteModelsTimeLimitedBalance),
		alignof(FAccelByteModelsTimeLimitedBalance),
		Z_Construct_UScriptStruct_FAccelByteModelsTimeLimitedBalance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsTimeLimitedBalance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsTimeLimitedBalance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsTimeLimitedBalance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsTimeLimitedBalance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsTimeLimitedBalance_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsTimeLimitedBalance"), sizeof(FAccelByteModelsTimeLimitedBalance), Get_Z_Construct_UScriptStruct_FAccelByteModelsTimeLimitedBalance_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsTimeLimitedBalance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsTimeLimitedBalance_Hash() { return 3504022085U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
