// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsGetPublicUserRecordKeys();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPaging();
// End Cross Module References
class UScriptStruct* FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse"), sizeof(FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse), Get_Z_Construct_UScriptStruct_FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse>()
{
	return FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse(FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse>(FName(TEXT("AccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse;
	struct Z_Construct_UScriptStruct_FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Paging_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Paging;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsGetPublicUserRecordKeys, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse_Statics::NewProp_Data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse_Statics::NewProp_Paging_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse_Statics::NewProp_Paging = { "Paging", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse, Paging), Z_Construct_UScriptStruct_FAccelByteModelsPaging, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse_Statics::NewProp_Paging_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse_Statics::NewProp_Paging_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse_Statics::NewProp_Paging,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse",
		sizeof(FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse),
		alignof(FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse),
		Z_Construct_UScriptStruct_FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse"), sizeof(FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse), Get_Z_Construct_UScriptStruct_FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPaginatedBulkGetPublicUserRecordKeysResponse_Hash() { return 1759025256U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
