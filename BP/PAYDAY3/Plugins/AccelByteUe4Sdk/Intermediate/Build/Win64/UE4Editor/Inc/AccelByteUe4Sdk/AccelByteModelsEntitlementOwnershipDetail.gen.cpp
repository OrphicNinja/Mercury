// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsEntitlementOwnershipDetail.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsEntitlementOwnershipDetail() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsEntitlementOwnershipDetail::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsEntitlementOwnershipDetail"), sizeof(FAccelByteModelsEntitlementOwnershipDetail), Get_Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsEntitlementOwnershipDetail>()
{
	return FAccelByteModelsEntitlementOwnershipDetail::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail(FAccelByteModelsEntitlementOwnershipDetail::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsEntitlementOwnershipDetail"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsEntitlementOwnershipDetail
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsEntitlementOwnershipDetail()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsEntitlementOwnershipDetail>(FName(TEXT("AccelByteModelsEntitlementOwnershipDetail")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsEntitlementOwnershipDetail;
	struct Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sku_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Sku;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemNamespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemNamespace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsEntitlementOwnershipDetail.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsEntitlementOwnershipDetail>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics::NewProp_AppId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsEntitlementOwnershipDetail" },
		{ "ModuleRelativePath", "Public/AccelByteModelsEntitlementOwnershipDetail.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsEntitlementOwnershipDetail, AppId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics::NewProp_AppId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics::NewProp_AppId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics::NewProp_AppType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsEntitlementOwnershipDetail" },
		{ "ModuleRelativePath", "Public/AccelByteModelsEntitlementOwnershipDetail.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics::NewProp_AppType = { "AppType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsEntitlementOwnershipDetail, AppType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics::NewProp_AppType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics::NewProp_AppType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics::NewProp_Sku_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsEntitlementOwnershipDetail" },
		{ "ModuleRelativePath", "Public/AccelByteModelsEntitlementOwnershipDetail.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics::NewProp_Sku = { "Sku", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsEntitlementOwnershipDetail, Sku), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics::NewProp_Sku_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics::NewProp_Sku_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics::NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsEntitlementOwnershipDetail" },
		{ "ModuleRelativePath", "Public/AccelByteModelsEntitlementOwnershipDetail.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsEntitlementOwnershipDetail, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics::NewProp_ItemNamespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsEntitlementOwnershipDetail" },
		{ "ModuleRelativePath", "Public/AccelByteModelsEntitlementOwnershipDetail.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics::NewProp_ItemNamespace = { "ItemNamespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsEntitlementOwnershipDetail, ItemNamespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics::NewProp_ItemNamespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics::NewProp_ItemNamespace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics::NewProp_AppId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics::NewProp_AppType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics::NewProp_Sku,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics::NewProp_ItemNamespace,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsEntitlementOwnershipDetail",
		sizeof(FAccelByteModelsEntitlementOwnershipDetail),
		alignof(FAccelByteModelsEntitlementOwnershipDetail),
		Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsEntitlementOwnershipDetail"), sizeof(FAccelByteModelsEntitlementOwnershipDetail), Get_Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsEntitlementOwnershipDetail_Hash() { return 3873276810U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
