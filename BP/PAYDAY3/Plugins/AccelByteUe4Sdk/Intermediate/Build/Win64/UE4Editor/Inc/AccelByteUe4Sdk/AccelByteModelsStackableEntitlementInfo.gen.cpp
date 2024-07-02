// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsStackableEntitlementInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsStackableEntitlementInfo() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementClass();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementType();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementStatus();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAppType();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementSource();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsEntitlementItemSnapshot();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FAccelByteModelsStackableEntitlementInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsStackableEntitlementInfo"), sizeof(FAccelByteModelsStackableEntitlementInfo), Get_Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsStackableEntitlementInfo>()
{
	return FAccelByteModelsStackableEntitlementInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo(FAccelByteModelsStackableEntitlementInfo::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsStackableEntitlementInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsStackableEntitlementInfo
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsStackableEntitlementInfo()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsStackableEntitlementInfo>(FName(TEXT("AccelByteModelsStackableEntitlementInfo")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsStackableEntitlementInfo;
	struct Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Clazz_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Clazz_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Clazz;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AppType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AppType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sku_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Sku;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrantedCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GrantedCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemNamespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemNamespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UseCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Source_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistributedQuantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DistributedQuantity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetNamespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetNamespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSnapshot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemSnapshot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StartDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EndDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stackable_MetaData[];
#endif
		static void NewProp_Stackable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Stackable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrantedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrantedAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CreatedAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpdatedAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackedUseCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StackedUseCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackedQuantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StackedQuantity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStackableEntitlementInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsStackableEntitlementInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStackableEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStackableEntitlementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStackableEntitlementInfo, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStackableEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStackableEntitlementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStackableEntitlementInfo, Namespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Namespace_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Clazz_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Clazz_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStackableEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStackableEntitlementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Clazz = { "Clazz", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStackableEntitlementInfo, Clazz), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Clazz_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Clazz_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStackableEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStackableEntitlementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStackableEntitlementInfo, Type), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStackableEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStackableEntitlementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStackableEntitlementInfo, Status), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_AppId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStackableEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStackableEntitlementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStackableEntitlementInfo, AppId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_AppId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_AppId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_AppType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_AppType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStackableEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStackableEntitlementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_AppType = { "AppType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStackableEntitlementInfo, AppType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteAppType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_AppType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_AppType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Sku_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStackableEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStackableEntitlementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Sku = { "Sku", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStackableEntitlementInfo, Sku), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Sku_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Sku_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStackableEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStackableEntitlementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStackableEntitlementInfo, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStackableEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStackableEntitlementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStackableEntitlementInfo, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_GrantedCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStackableEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStackableEntitlementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_GrantedCode = { "GrantedCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStackableEntitlementInfo, GrantedCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_GrantedCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_GrantedCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_ItemNamespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStackableEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStackableEntitlementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_ItemNamespace = { "ItemNamespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStackableEntitlementInfo, ItemNamespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_ItemNamespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_ItemNamespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStackableEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStackableEntitlementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStackableEntitlementInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_UseCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStackableEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStackableEntitlementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_UseCount = { "UseCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStackableEntitlementInfo, UseCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_UseCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_UseCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Quantity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStackableEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStackableEntitlementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStackableEntitlementInfo, Quantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Quantity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Source_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStackableEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStackableEntitlementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStackableEntitlementInfo, Source), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_DistributedQuantity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStackableEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStackableEntitlementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_DistributedQuantity = { "DistributedQuantity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStackableEntitlementInfo, DistributedQuantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_DistributedQuantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_DistributedQuantity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_TargetNamespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStackableEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStackableEntitlementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_TargetNamespace = { "TargetNamespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStackableEntitlementInfo, TargetNamespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_TargetNamespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_TargetNamespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_ItemSnapshot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStackableEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStackableEntitlementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_ItemSnapshot = { "ItemSnapshot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStackableEntitlementInfo, ItemSnapshot), Z_Construct_UScriptStruct_FAccelByteModelsEntitlementItemSnapshot, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_ItemSnapshot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_ItemSnapshot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_StartDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStackableEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStackableEntitlementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_StartDate = { "StartDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStackableEntitlementInfo, StartDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_StartDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_StartDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_EndDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStackableEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStackableEntitlementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStackableEntitlementInfo, EndDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_EndDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_EndDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Stackable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStackableEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStackableEntitlementInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Stackable_SetBit(void* Obj)
	{
		((FAccelByteModelsStackableEntitlementInfo*)Obj)->Stackable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Stackable = { "Stackable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsStackableEntitlementInfo), &Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Stackable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Stackable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Stackable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_GrantedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStackableEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStackableEntitlementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_GrantedAt = { "GrantedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStackableEntitlementInfo, GrantedAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_GrantedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_GrantedAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_CreatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStackableEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStackableEntitlementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_CreatedAt = { "CreatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStackableEntitlementInfo, CreatedAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_CreatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_CreatedAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_UpdatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStackableEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStackableEntitlementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_UpdatedAt = { "UpdatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStackableEntitlementInfo, UpdatedAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_UpdatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_UpdatedAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_StackedUseCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStackableEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStackableEntitlementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_StackedUseCount = { "StackedUseCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStackableEntitlementInfo, StackedUseCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_StackedUseCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_StackedUseCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_StackedQuantity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsStackableEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsStackableEntitlementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_StackedQuantity = { "StackedQuantity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsStackableEntitlementInfo, StackedQuantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_StackedQuantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_StackedQuantity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Namespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Clazz_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Clazz,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_AppId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_AppType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_AppType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Sku,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_GrantedCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_ItemNamespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_UseCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Source_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_DistributedQuantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_TargetNamespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_ItemSnapshot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_StartDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_EndDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_Stackable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_GrantedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_CreatedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_UpdatedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_StackedUseCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::NewProp_StackedQuantity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsStackableEntitlementInfo",
		sizeof(FAccelByteModelsStackableEntitlementInfo),
		alignof(FAccelByteModelsStackableEntitlementInfo),
		Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsStackableEntitlementInfo"), sizeof(FAccelByteModelsStackableEntitlementInfo), Get_Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsStackableEntitlementInfo_Hash() { return 3905486882U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
