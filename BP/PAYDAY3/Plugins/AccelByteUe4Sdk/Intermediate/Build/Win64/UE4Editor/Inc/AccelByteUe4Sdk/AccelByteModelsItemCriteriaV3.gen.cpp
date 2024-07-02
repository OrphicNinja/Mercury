// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsItemCriteriaV3.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsItemCriteriaV3() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemType();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAppType();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemStatus();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemListSortBy();
// End Cross Module References
class UScriptStruct* FAccelByteModelsItemCriteriaV3::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsItemCriteriaV3"), sizeof(FAccelByteModelsItemCriteriaV3), Get_Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsItemCriteriaV3>()
{
	return FAccelByteModelsItemCriteriaV3::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsItemCriteriaV3(FAccelByteModelsItemCriteriaV3::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsItemCriteriaV3"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsItemCriteriaV3
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsItemCriteriaV3()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsItemCriteriaV3>(FName(TEXT("AccelByteModelsItemCriteriaV3")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsItemCriteriaV3;
	struct Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoreId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StoreId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeSubCategoryItem_MetaData[];
#endif
		static void NewProp_IncludeSubCategoryItem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludeSubCategoryItem;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AppType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AppType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseAppId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BaseAppId;
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
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Region;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvailableDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AvailableDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetNamespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetNamespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSectionExclusive_MetaData[];
#endif
		static void NewProp_bSectionExclusive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSectionExclusive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Limit;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SortBy_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SortBy_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SortBy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemCriteriaV3.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsItemCriteriaV3>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_StoreId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemCriteriaV3" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemCriteriaV3.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_StoreId = { "StoreId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemCriteriaV3, StoreId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_StoreId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_StoreId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_CategoryPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemCriteriaV3" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemCriteriaV3.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_CategoryPath = { "CategoryPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemCriteriaV3, CategoryPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_CategoryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_CategoryPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_IncludeSubCategoryItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemCriteriaV3" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemCriteriaV3.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_IncludeSubCategoryItem_SetBit(void* Obj)
	{
		((FAccelByteModelsItemCriteriaV3*)Obj)->IncludeSubCategoryItem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_IncludeSubCategoryItem = { "IncludeSubCategoryItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsItemCriteriaV3), &Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_IncludeSubCategoryItem_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_IncludeSubCategoryItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_IncludeSubCategoryItem_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_ItemType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemCriteriaV3" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemCriteriaV3.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemCriteriaV3, ItemType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_ItemType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_AppType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_AppType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemCriteriaV3" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemCriteriaV3.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_AppType = { "AppType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemCriteriaV3, AppType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAppType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_AppType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_AppType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_BaseAppId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemCriteriaV3" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemCriteriaV3.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_BaseAppId = { "BaseAppId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemCriteriaV3, BaseAppId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_BaseAppId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_BaseAppId_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_Tags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemCriteriaV3" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemCriteriaV3.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemCriteriaV3, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_Tags_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_Features_Inner = { "Features", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_Features_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemCriteriaV3" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemCriteriaV3.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_Features = { "Features", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemCriteriaV3, Features), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_Features_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_Features_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_ItemStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_ItemStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemCriteriaV3" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemCriteriaV3.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_ItemStatus = { "ItemStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemCriteriaV3, ItemStatus), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_ItemStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_ItemStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_Region_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemCriteriaV3" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemCriteriaV3.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemCriteriaV3, Region), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_Region_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_AvailableDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemCriteriaV3" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemCriteriaV3.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_AvailableDate = { "AvailableDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemCriteriaV3, AvailableDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_AvailableDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_AvailableDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_TargetNamespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemCriteriaV3" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemCriteriaV3.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_TargetNamespace = { "TargetNamespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemCriteriaV3, TargetNamespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_TargetNamespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_TargetNamespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_ItemName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemCriteriaV3" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemCriteriaV3.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemCriteriaV3, ItemName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_bSectionExclusive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemCriteriaV3" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemCriteriaV3.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_bSectionExclusive_SetBit(void* Obj)
	{
		((FAccelByteModelsItemCriteriaV3*)Obj)->bSectionExclusive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_bSectionExclusive = { "bSectionExclusive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsItemCriteriaV3), &Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_bSectionExclusive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_bSectionExclusive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_bSectionExclusive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_Offset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemCriteriaV3" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemCriteriaV3.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemCriteriaV3, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_Limit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemCriteriaV3" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemCriteriaV3.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemCriteriaV3, Limit), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_Limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_Limit_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_SortBy_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_SortBy_Inner = { "SortBy", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteItemListSortBy, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_SortBy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsItemCriteriaV3" },
		{ "ModuleRelativePath", "Public/AccelByteModelsItemCriteriaV3.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsItemCriteriaV3, SortBy), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_SortBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_SortBy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_StoreId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_CategoryPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_IncludeSubCategoryItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_ItemType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_AppType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_AppType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_BaseAppId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_Tags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_Features_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_Features,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_ItemStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_ItemStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_Region,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_AvailableDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_TargetNamespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_ItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_bSectionExclusive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_Limit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_SortBy_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_SortBy_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::NewProp_SortBy,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsItemCriteriaV3",
		sizeof(FAccelByteModelsItemCriteriaV3),
		alignof(FAccelByteModelsItemCriteriaV3),
		Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsItemCriteriaV3"), sizeof(FAccelByteModelsItemCriteriaV3), Get_Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsItemCriteriaV3_Hash() { return 2844593392U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
