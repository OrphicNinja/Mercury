// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsOrderBundleItemInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsOrderBundleItemInfo() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsOrderBundleItemInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsOrderBundleItemInfo"), sizeof(FAccelByteModelsOrderBundleItemInfo), Get_Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsOrderBundleItemInfo>()
{
	return FAccelByteModelsOrderBundleItemInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo(FAccelByteModelsOrderBundleItemInfo::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsOrderBundleItemInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsOrderBundleItemInfo
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsOrderBundleItemInfo()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsOrderBundleItemInfo>(FName(TEXT("AccelByteModelsOrderBundleItemInfo")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsOrderBundleItemInfo;
	struct Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Price_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Price;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscountedPrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DiscountedPrice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSku_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemSku;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quantity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Purchased_MetaData[];
#endif
		static void NewProp_Purchased_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Purchased;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderBundleItemInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsOrderBundleItemInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_Price_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsOrderBundleItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderBundleItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_Price = { "Price", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsOrderBundleItemInfo, Price), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_Price_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_Price_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_DiscountedPrice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsOrderBundleItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderBundleItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_DiscountedPrice = { "DiscountedPrice", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsOrderBundleItemInfo, DiscountedPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_DiscountedPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_DiscountedPrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_ItemName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsOrderBundleItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderBundleItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsOrderBundleItemInfo, ItemName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsOrderBundleItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderBundleItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsOrderBundleItemInfo, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_ItemSku_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsOrderBundleItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderBundleItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_ItemSku = { "ItemSku", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsOrderBundleItemInfo, ItemSku), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_ItemSku_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_ItemSku_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_Quantity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsOrderBundleItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderBundleItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsOrderBundleItemInfo, Quantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_Quantity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_Purchased_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsOrderBundleItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderBundleItemInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_Purchased_SetBit(void* Obj)
	{
		((FAccelByteModelsOrderBundleItemInfo*)Obj)->Purchased = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_Purchased = { "Purchased", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsOrderBundleItemInfo), &Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_Purchased_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_Purchased_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_Purchased_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_Price,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_DiscountedPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_ItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_ItemSku,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_Quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::NewProp_Purchased,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsOrderBundleItemInfo",
		sizeof(FAccelByteModelsOrderBundleItemInfo),
		alignof(FAccelByteModelsOrderBundleItemInfo),
		Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsOrderBundleItemInfo"), sizeof(FAccelByteModelsOrderBundleItemInfo), Get_Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsOrderBundleItemInfo_Hash() { return 1845406763U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
