// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsPlayStationIAPSync.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsPlayStationIAPSync() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsPlayStationIAPSync::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsPlayStationIAPSync"), sizeof(FAccelByteModelsPlayStationIAPSync), Get_Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsPlayStationIAPSync>()
{
	return FAccelByteModelsPlayStationIAPSync::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsPlayStationIAPSync(FAccelByteModelsPlayStationIAPSync::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsPlayStationIAPSync"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPlayStationIAPSync
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPlayStationIAPSync()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsPlayStationIAPSync>(FName(TEXT("AccelByteModelsPlayStationIAPSync")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPlayStationIAPSync;
	struct Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Price_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Price;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrencyCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServiceLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ServiceLabel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPlayStationIAPSync.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsPlayStationIAPSync>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Statics::NewProp_ProductId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPlayStationIAPSync" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPlayStationIAPSync.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Statics::NewProp_ProductId = { "ProductId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPlayStationIAPSync, ProductId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Statics::NewProp_ProductId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Statics::NewProp_ProductId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Statics::NewProp_Price_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPlayStationIAPSync" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPlayStationIAPSync.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Statics::NewProp_Price = { "Price", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPlayStationIAPSync, Price), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Statics::NewProp_Price_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Statics::NewProp_Price_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Statics::NewProp_CurrencyCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPlayStationIAPSync" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPlayStationIAPSync.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Statics::NewProp_CurrencyCode = { "CurrencyCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPlayStationIAPSync, CurrencyCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Statics::NewProp_CurrencyCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Statics::NewProp_CurrencyCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Statics::NewProp_ServiceLabel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPlayStationIAPSync" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPlayStationIAPSync.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Statics::NewProp_ServiceLabel = { "ServiceLabel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPlayStationIAPSync, ServiceLabel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Statics::NewProp_ServiceLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Statics::NewProp_ServiceLabel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Statics::NewProp_ProductId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Statics::NewProp_Price,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Statics::NewProp_CurrencyCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Statics::NewProp_ServiceLabel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsPlayStationIAPSync",
		sizeof(FAccelByteModelsPlayStationIAPSync),
		alignof(FAccelByteModelsPlayStationIAPSync),
		Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsPlayStationIAPSync"), sizeof(FAccelByteModelsPlayStationIAPSync), Get_Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPlayStationIAPSync_Hash() { return 290450826U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
