// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsPlatformValidateUserItemPurchaseResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsPlatformValidateUserItemPurchaseResponse() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateDetails();
// End Cross Module References
class UScriptStruct* FAccelByteModelsPlatformValidateUserItemPurchaseResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsPlatformValidateUserItemPurchaseResponse"), sizeof(FAccelByteModelsPlatformValidateUserItemPurchaseResponse), Get_Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsPlatformValidateUserItemPurchaseResponse>()
{
	return FAccelByteModelsPlatformValidateUserItemPurchaseResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse(FAccelByteModelsPlatformValidateUserItemPurchaseResponse::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsPlatformValidateUserItemPurchaseResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPlatformValidateUserItemPurchaseResponse
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPlatformValidateUserItemPurchaseResponse()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsPlatformValidateUserItemPurchaseResponse>(FName(TEXT("AccelByteModelsPlatformValidateUserItemPurchaseResponse")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPlatformValidateUserItemPurchaseResponse;
	struct Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sku_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Sku;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Purchasable_MetaData[];
#endif
		static void NewProp_Purchasable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Purchasable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ValidateDetails_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidateDetails_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ValidateDetails;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPlatformValidateUserItemPurchaseResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsPlatformValidateUserItemPurchaseResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Statics::NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPlatformValidateUserItemPurchaseResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPlatformValidateUserItemPurchaseResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPlatformValidateUserItemPurchaseResponse, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Statics::NewProp_Sku_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPlatformValidateUserItemPurchaseResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPlatformValidateUserItemPurchaseResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Statics::NewProp_Sku = { "Sku", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPlatformValidateUserItemPurchaseResponse, Sku), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Statics::NewProp_Sku_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Statics::NewProp_Sku_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Statics::NewProp_Purchasable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPlatformValidateUserItemPurchaseResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPlatformValidateUserItemPurchaseResponse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Statics::NewProp_Purchasable_SetBit(void* Obj)
	{
		((FAccelByteModelsPlatformValidateUserItemPurchaseResponse*)Obj)->Purchasable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Statics::NewProp_Purchasable = { "Purchasable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsPlatformValidateUserItemPurchaseResponse), &Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Statics::NewProp_Purchasable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Statics::NewProp_Purchasable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Statics::NewProp_Purchasable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Statics::NewProp_ValidateDetails_Inner = { "ValidateDetails", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateDetails, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Statics::NewProp_ValidateDetails_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPlatformValidateUserItemPurchaseResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPlatformValidateUserItemPurchaseResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Statics::NewProp_ValidateDetails = { "ValidateDetails", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPlatformValidateUserItemPurchaseResponse, ValidateDetails), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Statics::NewProp_ValidateDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Statics::NewProp_ValidateDetails_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Statics::NewProp_Sku,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Statics::NewProp_Purchasable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Statics::NewProp_ValidateDetails_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Statics::NewProp_ValidateDetails,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsPlatformValidateUserItemPurchaseResponse",
		sizeof(FAccelByteModelsPlatformValidateUserItemPurchaseResponse),
		alignof(FAccelByteModelsPlatformValidateUserItemPurchaseResponse),
		Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsPlatformValidateUserItemPurchaseResponse"), sizeof(FAccelByteModelsPlatformValidateUserItemPurchaseResponse), Get_Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPlatformValidateUserItemPurchaseResponse_Hash() { return 825215721U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
