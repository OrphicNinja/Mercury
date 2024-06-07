// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsOrderInfoPaymentUrl.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsOrderInfoPaymentUrl() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsOrderInfoPaymentUrl::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsOrderInfoPaymentUrl"), sizeof(FAccelByteModelsOrderInfoPaymentUrl), Get_Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsOrderInfoPaymentUrl>()
{
	return FAccelByteModelsOrderInfoPaymentUrl::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl(FAccelByteModelsOrderInfoPaymentUrl::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsOrderInfoPaymentUrl"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsOrderInfoPaymentUrl
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsOrderInfoPaymentUrl()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsOrderInfoPaymentUrl>(FName(TEXT("AccelByteModelsOrderInfoPaymentUrl")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsOrderInfoPaymentUrl;
	struct Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaymentProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PaymentProvider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaymentUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PaymentUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaymentToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PaymentToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaymentType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PaymentType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderInfoPaymentUrl.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsOrderInfoPaymentUrl>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics::NewProp_PaymentProvider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsOrderInfoPaymentUrl" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderInfoPaymentUrl.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics::NewProp_PaymentProvider = { "PaymentProvider", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsOrderInfoPaymentUrl, PaymentProvider), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics::NewProp_PaymentProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics::NewProp_PaymentProvider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics::NewProp_PaymentUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsOrderInfoPaymentUrl" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderInfoPaymentUrl.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics::NewProp_PaymentUrl = { "PaymentUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsOrderInfoPaymentUrl, PaymentUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics::NewProp_PaymentUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics::NewProp_PaymentUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics::NewProp_PaymentToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsOrderInfoPaymentUrl" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderInfoPaymentUrl.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics::NewProp_PaymentToken = { "PaymentToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsOrderInfoPaymentUrl, PaymentToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics::NewProp_PaymentToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics::NewProp_PaymentToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics::NewProp_ReturnUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsOrderInfoPaymentUrl" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderInfoPaymentUrl.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics::NewProp_ReturnUrl = { "ReturnUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsOrderInfoPaymentUrl, ReturnUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics::NewProp_ReturnUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics::NewProp_ReturnUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics::NewProp_PaymentType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsOrderInfoPaymentUrl" },
		{ "ModuleRelativePath", "Public/AccelByteModelsOrderInfoPaymentUrl.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics::NewProp_PaymentType = { "PaymentType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsOrderInfoPaymentUrl, PaymentType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics::NewProp_PaymentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics::NewProp_PaymentType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics::NewProp_PaymentProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics::NewProp_PaymentUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics::NewProp_PaymentToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics::NewProp_ReturnUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics::NewProp_PaymentType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsOrderInfoPaymentUrl",
		sizeof(FAccelByteModelsOrderInfoPaymentUrl),
		alignof(FAccelByteModelsOrderInfoPaymentUrl),
		Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsOrderInfoPaymentUrl"), sizeof(FAccelByteModelsOrderInfoPaymentUrl), Get_Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsOrderInfoPaymentUrl_Hash() { return 410505801U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
