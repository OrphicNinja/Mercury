// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsSellItemEntitlementInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsSellItemEntitlementInfo() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsCreditSummary();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsEntitlementInfo();
// End Cross Module References
class UScriptStruct* FAccelByteModelsSellItemEntitlementInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsSellItemEntitlementInfo"), sizeof(FAccelByteModelsSellItemEntitlementInfo), Get_Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsSellItemEntitlementInfo>()
{
	return FAccelByteModelsSellItemEntitlementInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo(FAccelByteModelsSellItemEntitlementInfo::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsSellItemEntitlementInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSellItemEntitlementInfo
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSellItemEntitlementInfo()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsSellItemEntitlementInfo>(FName(TEXT("AccelByteModelsSellItemEntitlementInfo")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSellItemEntitlementInfo;
	struct Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RequestId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplayed_MetaData[];
#endif
		static void NewProp_bReplayed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplayed;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CreditSummaries_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreditSummaries_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CreditSummaries;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntitlementInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EntitlementInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSellItemEntitlementInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsSellItemEntitlementInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Statics::NewProp_RequestId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSellItemEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSellItemEntitlementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Statics::NewProp_RequestId = { "RequestId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSellItemEntitlementInfo, RequestId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Statics::NewProp_RequestId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Statics::NewProp_RequestId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Statics::NewProp_bReplayed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSellItemEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSellItemEntitlementInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Statics::NewProp_bReplayed_SetBit(void* Obj)
	{
		((FAccelByteModelsSellItemEntitlementInfo*)Obj)->bReplayed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Statics::NewProp_bReplayed = { "bReplayed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsSellItemEntitlementInfo), &Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Statics::NewProp_bReplayed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Statics::NewProp_bReplayed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Statics::NewProp_bReplayed_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Statics::NewProp_CreditSummaries_Inner = { "CreditSummaries", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsCreditSummary, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Statics::NewProp_CreditSummaries_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSellItemEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSellItemEntitlementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Statics::NewProp_CreditSummaries = { "CreditSummaries", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSellItemEntitlementInfo, CreditSummaries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Statics::NewProp_CreditSummaries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Statics::NewProp_CreditSummaries_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Statics::NewProp_EntitlementInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSellItemEntitlementInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSellItemEntitlementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Statics::NewProp_EntitlementInfo = { "EntitlementInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSellItemEntitlementInfo, EntitlementInfo), Z_Construct_UScriptStruct_FAccelByteModelsEntitlementInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Statics::NewProp_EntitlementInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Statics::NewProp_EntitlementInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Statics::NewProp_RequestId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Statics::NewProp_bReplayed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Statics::NewProp_CreditSummaries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Statics::NewProp_CreditSummaries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Statics::NewProp_EntitlementInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsSellItemEntitlementInfo",
		sizeof(FAccelByteModelsSellItemEntitlementInfo),
		alignof(FAccelByteModelsSellItemEntitlementInfo),
		Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsSellItemEntitlementInfo"), sizeof(FAccelByteModelsSellItemEntitlementInfo), Get_Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSellItemEntitlementInfo_Hash() { return 106084708U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
