// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsSyncOculusConsumableEntitlementInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsSyncOculusConsumableEntitlementInfo() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementItemIdentityType();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementIAPOrderStatus();
// End Cross Module References
class UScriptStruct* FAccelByteModelsSyncOculusConsumableEntitlementInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsSyncOculusConsumableEntitlementInfo"), sizeof(FAccelByteModelsSyncOculusConsumableEntitlementInfo), Get_Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsSyncOculusConsumableEntitlementInfo>()
{
	return FAccelByteModelsSyncOculusConsumableEntitlementInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo(FAccelByteModelsSyncOculusConsumableEntitlementInfo::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsSyncOculusConsumableEntitlementInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSyncOculusConsumableEntitlementInfo
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSyncOculusConsumableEntitlementInfo()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsSyncOculusConsumableEntitlementInfo>(FName(TEXT("AccelByteModelsSyncOculusConsumableEntitlementInfo")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSyncOculusConsumableEntitlementInfo;
	struct Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransactionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TransactionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OculusItemSku_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OculusItemSku;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemIdentityType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemIdentityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemIdentityType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemIdentity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemIdentity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IAPOrderStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IAPOrderStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_IAPOrderStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSyncOculusConsumableEntitlementInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsSyncOculusConsumableEntitlementInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::NewProp_TransactionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSyncOculusConsumableEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSyncOculusConsumableEntitlementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::NewProp_TransactionId = { "TransactionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSyncOculusConsumableEntitlementInfo, TransactionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::NewProp_TransactionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::NewProp_TransactionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::NewProp_OculusItemSku_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSyncOculusConsumableEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSyncOculusConsumableEntitlementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::NewProp_OculusItemSku = { "OculusItemSku", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSyncOculusConsumableEntitlementInfo, OculusItemSku), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::NewProp_OculusItemSku_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::NewProp_OculusItemSku_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::NewProp_ItemIdentityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::NewProp_ItemIdentityType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSyncOculusConsumableEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSyncOculusConsumableEntitlementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::NewProp_ItemIdentityType = { "ItemIdentityType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSyncOculusConsumableEntitlementInfo, ItemIdentityType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementItemIdentityType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::NewProp_ItemIdentityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::NewProp_ItemIdentityType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::NewProp_ItemIdentity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSyncOculusConsumableEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSyncOculusConsumableEntitlementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::NewProp_ItemIdentity = { "ItemIdentity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSyncOculusConsumableEntitlementInfo, ItemIdentity), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::NewProp_ItemIdentity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::NewProp_ItemIdentity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::NewProp_IAPOrderStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::NewProp_IAPOrderStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSyncOculusConsumableEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSyncOculusConsumableEntitlementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::NewProp_IAPOrderStatus = { "IAPOrderStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSyncOculusConsumableEntitlementInfo, IAPOrderStatus), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteEntitlementIAPOrderStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::NewProp_IAPOrderStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::NewProp_IAPOrderStatus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::NewProp_TransactionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::NewProp_OculusItemSku,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::NewProp_ItemIdentityType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::NewProp_ItemIdentityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::NewProp_ItemIdentity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::NewProp_IAPOrderStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::NewProp_IAPOrderStatus,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsSyncOculusConsumableEntitlementInfo",
		sizeof(FAccelByteModelsSyncOculusConsumableEntitlementInfo),
		alignof(FAccelByteModelsSyncOculusConsumableEntitlementInfo),
		Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsSyncOculusConsumableEntitlementInfo"), sizeof(FAccelByteModelsSyncOculusConsumableEntitlementInfo), Get_Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSyncOculusConsumableEntitlementInfo_Hash() { return 2753604135U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
