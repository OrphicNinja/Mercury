// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/WritePartyStorageRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWritePartyStorageRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FWritePartyStorageRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FWritePartyStorageRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FWritePartyStorageRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWritePartyStorageRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("WritePartyStorageRequest"), sizeof(FWritePartyStorageRequest), Get_Z_Construct_UScriptStruct_FWritePartyStorageRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FWritePartyStorageRequest>()
{
	return FWritePartyStorageRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWritePartyStorageRequest(FWritePartyStorageRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("WritePartyStorageRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFWritePartyStorageRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFWritePartyStorageRequest()
	{
		UScriptStruct::DeferCppStructOps<FWritePartyStorageRequest>(FName(TEXT("WritePartyStorageRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFWritePartyStorageRequest;
	struct Z_Construct_UScriptStruct_FWritePartyStorageRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_partyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_partyId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetryAttempt_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RetryAttempt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWritePartyStorageRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WritePartyStorageRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWritePartyStorageRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWritePartyStorageRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWritePartyStorageRequest_Statics::NewProp_partyId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WritePartyStorageRequest" },
		{ "ModuleRelativePath", "Public/WritePartyStorageRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWritePartyStorageRequest_Statics::NewProp_partyId = { "partyId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWritePartyStorageRequest, partyId), METADATA_PARAMS(Z_Construct_UScriptStruct_FWritePartyStorageRequest_Statics::NewProp_partyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWritePartyStorageRequest_Statics::NewProp_partyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWritePartyStorageRequest_Statics::NewProp_RetryAttempt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WritePartyStorageRequest" },
		{ "ModuleRelativePath", "Public/WritePartyStorageRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWritePartyStorageRequest_Statics::NewProp_RetryAttempt = { "RetryAttempt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWritePartyStorageRequest, RetryAttempt), METADATA_PARAMS(Z_Construct_UScriptStruct_FWritePartyStorageRequest_Statics::NewProp_RetryAttempt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWritePartyStorageRequest_Statics::NewProp_RetryAttempt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWritePartyStorageRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWritePartyStorageRequest_Statics::NewProp_partyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWritePartyStorageRequest_Statics::NewProp_RetryAttempt,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWritePartyStorageRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"WritePartyStorageRequest",
		sizeof(FWritePartyStorageRequest),
		alignof(FWritePartyStorageRequest),
		Z_Construct_UScriptStruct_FWritePartyStorageRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWritePartyStorageRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWritePartyStorageRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWritePartyStorageRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWritePartyStorageRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWritePartyStorageRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WritePartyStorageRequest"), sizeof(FWritePartyStorageRequest), Get_Z_Construct_UScriptStruct_FWritePartyStorageRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWritePartyStorageRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWritePartyStorageRequest_Hash() { return 3437393095U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
