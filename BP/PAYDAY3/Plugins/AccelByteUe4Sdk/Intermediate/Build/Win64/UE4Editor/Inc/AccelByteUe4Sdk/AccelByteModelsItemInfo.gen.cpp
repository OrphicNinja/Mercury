// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsItemInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsItemInfo() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsItemInfo();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSeasonType();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementType();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemStatus();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemType();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsItemImage();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsItemRegionDataItem();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring();
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsItemSaleConfig();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsItemLootBoxConfig();
// End Cross Module References
class UScriptStruct* FAccelByteModelsItemInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsItemInfo"), sizeof(FAccelByteModelsItemInfo), Get_Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsItemInfo>()
{
	return FAccelByteModelsItemInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsItemInfo(FAccelByteModelsItemInfo::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsItemInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsItemInfo
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsItemInfo()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsItemInfo>(FName(TEXT("AccelByteModelsItemInfo")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsItemInfo;
	struct Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LongDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LongDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SeasonType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeasonType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SeasonType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseAppId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BaseAppId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sku_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Sku;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EntitlementType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntitlementType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EntitlementType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UseCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stackable_MetaData[];
#endif
		static void NewProp_Stackable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Stackable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryPath;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Listable_MetaData[];
#endif
		static void NewProp_Listable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Listable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Purchasable_MetaData[];
#endif
		static void NewProp_Purchasable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Purchasable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionExclusive_MetaData[];
#endif
		static void NewProp_SectionExclusive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SectionExclusive;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetNamespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetNamespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetCurrencyCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetCurrencyCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetItemId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Images_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Images_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Images;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ThumbnailUrl;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RegionData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RegionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Recurring_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Recurring;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemIds;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemQty_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemQty_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemQty_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ItemQty;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BoundItemIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundItemIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoundItemIds;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tags;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Features_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Features_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Features;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCountPerUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxCountPerUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Clazz_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Clazz;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoothName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BoothName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DisplayOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ext_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Ext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Region;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CreatedAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpdatedAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseCondition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PurchaseCondition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionBoxConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OptionBoxConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fresh_MetaData[];
#endif
		static void NewProp_Fresh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Fresh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSellable_MetaData[];
#endif
		static void NewProp_bSellable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSellable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sellable_MetaData[];
#endif
		static void NewProp_Sellable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Sellable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaleConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SaleConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalExt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalExt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LootBoxConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LootBoxConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flexible_MetaData[];
#endif
		static void NewProp_Flexible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Flexible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsItemInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Title_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_LongDescription_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_LongDescription = { "LongDescription", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, LongDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_LongDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_LongDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_AppId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, AppId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_AppId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_AppId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_AppType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_AppType = { "AppType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, AppType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_AppType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_AppType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_SeasonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_SeasonType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_SeasonType = { "SeasonType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, SeasonType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteSeasonType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_SeasonType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_SeasonType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_BaseAppId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_BaseAppId = { "BaseAppId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, BaseAppId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_BaseAppId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_BaseAppId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Sku_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Sku = { "Sku", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, Sku), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Sku_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Sku_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, Namespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Namespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_EntitlementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_EntitlementType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_EntitlementType = { "EntitlementType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, EntitlementType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_EntitlementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_EntitlementType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_UseCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_UseCount = { "UseCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, UseCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_UseCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_UseCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Stackable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Stackable_SetBit(void* Obj)
	{
		((FAccelByteModelsItemInfo*)Obj)->Stackable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Stackable = { "Stackable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsItemInfo), &Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Stackable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Stackable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Stackable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_CategoryPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_CategoryPath = { "CategoryPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, CategoryPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_CategoryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_CategoryPath_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, Status), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Listable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Listable_SetBit(void* Obj)
	{
		((FAccelByteModelsItemInfo*)Obj)->Listable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Listable = { "Listable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsItemInfo), &Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Listable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Listable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Listable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Purchasable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Purchasable_SetBit(void* Obj)
	{
		((FAccelByteModelsItemInfo*)Obj)->Purchasable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Purchasable = { "Purchasable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsItemInfo), &Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Purchasable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Purchasable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Purchasable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_SectionExclusive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_SectionExclusive_SetBit(void* Obj)
	{
		((FAccelByteModelsItemInfo*)Obj)->SectionExclusive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_SectionExclusive = { "SectionExclusive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsItemInfo), &Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_SectionExclusive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_SectionExclusive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_SectionExclusive_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_ItemType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, ItemType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_ItemType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_TargetNamespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_TargetNamespace = { "TargetNamespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, TargetNamespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_TargetNamespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_TargetNamespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_TargetCurrencyCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_TargetCurrencyCode = { "TargetCurrencyCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, TargetCurrencyCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_TargetCurrencyCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_TargetCurrencyCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_TargetItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_TargetItemId = { "TargetItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, TargetItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_TargetItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_TargetItemId_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Images_Inner = { "Images", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsItemImage, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Images_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Images = { "Images", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, Images), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Images_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Images_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_ThumbnailUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_ThumbnailUrl = { "ThumbnailUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, ThumbnailUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_ThumbnailUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_ThumbnailUrl_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_RegionData_Inner = { "RegionData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsItemRegionDataItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_RegionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_RegionData = { "RegionData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, RegionData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_RegionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_RegionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Recurring_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Recurring = { "Recurring", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, Recurring), Z_Construct_UScriptStruct_FAccelByteModelsItemRecurring, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Recurring_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Recurring_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_ItemIds_Inner = { "ItemIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_ItemIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_ItemIds = { "ItemIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, ItemIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_ItemIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_ItemIds_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_ItemQty_ValueProp = { "ItemQty", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_ItemQty_Key_KeyProp = { "ItemQty_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_ItemQty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_ItemQty = { "ItemQty", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, ItemQty), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_ItemQty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_ItemQty_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_BoundItemIds_Inner = { "BoundItemIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_BoundItemIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_BoundItemIds = { "BoundItemIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, BoundItemIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_BoundItemIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_BoundItemIds_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Tags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Tags_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Features_Inner = { "Features", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Features_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Features = { "Features", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, Features), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Features_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Features_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_MaxCountPerUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_MaxCountPerUser = { "MaxCountPerUser", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, MaxCountPerUser), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_MaxCountPerUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_MaxCountPerUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_MaxCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_MaxCount = { "MaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, MaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_MaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_MaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Clazz_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Clazz = { "Clazz", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, Clazz), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Clazz_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Clazz_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_BoothName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_BoothName = { "BoothName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, BoothName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_BoothName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_BoothName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_DisplayOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_DisplayOrder = { "DisplayOrder", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, DisplayOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_DisplayOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_DisplayOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Ext_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Ext = { "Ext", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, Ext), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Ext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Ext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Region_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, Region), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Region_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Language_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, Language), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Language_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_CreatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_CreatedAt = { "CreatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, CreatedAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_CreatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_CreatedAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_UpdatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_UpdatedAt = { "UpdatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, UpdatedAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_UpdatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_UpdatedAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_PurchaseCondition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_PurchaseCondition = { "PurchaseCondition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, PurchaseCondition), Z_Construct_UScriptStruct_FAccelByteModelItemPurchaseCondition, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_PurchaseCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_PurchaseCondition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_OptionBoxConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_OptionBoxConfig = { "OptionBoxConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, OptionBoxConfig), Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_OptionBoxConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_OptionBoxConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Fresh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Fresh_SetBit(void* Obj)
	{
		((FAccelByteModelsItemInfo*)Obj)->Fresh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Fresh = { "Fresh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsItemInfo), &Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Fresh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Fresh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Fresh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_bSellable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_bSellable_SetBit(void* Obj)
	{
		((FAccelByteModelsItemInfo*)Obj)->bSellable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_bSellable = { "bSellable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsItemInfo), &Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_bSellable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_bSellable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_bSellable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Sellable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Sellable_SetBit(void* Obj)
	{
		((FAccelByteModelsItemInfo*)Obj)->Sellable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Sellable = { "Sellable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsItemInfo), &Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Sellable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Sellable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Sellable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_SaleConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_SaleConfig = { "SaleConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, SaleConfig), Z_Construct_UScriptStruct_FAccelByteModelsItemSaleConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_SaleConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_SaleConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_LocalExt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_LocalExt = { "LocalExt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, LocalExt), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_LocalExt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_LocalExt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_LootBoxConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_LootBoxConfig = { "LootBoxConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemInfo, LootBoxConfig), Z_Construct_UScriptStruct_FAccelByteModelsItemLootBoxConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_LootBoxConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_LootBoxConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Flexible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Flexible_SetBit(void* Obj)
	{
		((FAccelByteModelsItemInfo*)Obj)->Flexible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Flexible = { "Flexible", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsItemInfo), &Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Flexible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Flexible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Flexible_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_LongDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_AppId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_AppType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_SeasonType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_SeasonType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_BaseAppId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Sku,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Namespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_EntitlementType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_EntitlementType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_UseCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Stackable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_CategoryPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Listable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Purchasable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_SectionExclusive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_ItemType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_TargetNamespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_TargetCurrencyCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_TargetItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Images_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Images,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_ThumbnailUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_RegionData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_RegionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Recurring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_ItemIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_ItemIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_ItemQty_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_ItemQty_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_ItemQty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_BoundItemIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_BoundItemIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Tags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Features_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Features,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_MaxCountPerUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_MaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Clazz,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_BoothName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_DisplayOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Ext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Region,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_CreatedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_UpdatedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_PurchaseCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_OptionBoxConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Fresh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_bSellable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Sellable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_SaleConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_LocalExt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_LootBoxConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::NewProp_Flexible,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsItemInfo",
		sizeof(FAccelByteModelsItemInfo),
		alignof(FAccelByteModelsItemInfo),
		Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsItemInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsItemInfo"), sizeof(FAccelByteModelsItemInfo), Get_Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsItemInfo_Hash() { return 2410958362U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
