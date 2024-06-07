// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/GetPartyStorageRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetPartyStorageRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FGetPartyStorageRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FGetPartyStorageRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FGetPartyStorageRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetPartyStorageRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("GetPartyStorageRequest"), sizeof(FGetPartyStorageRequest), Get_Z_Construct_UScriptStruct_FGetPartyStorageRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FGetPartyStorageRequest>()
{
	return FGetPartyStorageRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGetPartyStorageRequest(FGetPartyStorageRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("GetPartyStorageRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFGetPartyStorageRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFGetPartyStorageRequest()
	{
		UScriptStruct::DeferCppStructOps<FGetPartyStorageRequest>(FName(TEXT("GetPartyStorageRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFGetPartyStorageRequest;
	struct Z_Construct_UScriptStruct_FGetPartyStorageRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_partyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_partyId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetPartyStorageRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GetPartyStorageRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGetPartyStorageRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetPartyStorageRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetPartyStorageRequest_Statics::NewProp_partyId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetPartyStorageRequest" },
		{ "ModuleRelativePath", "Public/GetPartyStorageRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGetPartyStorageRequest_Statics::NewProp_partyId = { "partyId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGetPartyStorageRequest, partyId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGetPartyStorageRequest_Statics::NewProp_partyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetPartyStorageRequest_Statics::NewProp_partyId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetPartyStorageRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetPartyStorageRequest_Statics::NewProp_partyId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetPartyStorageRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"GetPartyStorageRequest",
		sizeof(FGetPartyStorageRequest),
		alignof(FGetPartyStorageRequest),
		Z_Construct_UScriptStruct_FGetPartyStorageRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetPartyStorageRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGetPartyStorageRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetPartyStorageRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGetPartyStorageRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGetPartyStorageRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GetPartyStorageRequest"), sizeof(FGetPartyStorageRequest), Get_Z_Construct_UScriptStruct_FGetPartyStorageRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGetPartyStorageRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGetPartyStorageRequest_Hash() { return 1265195212U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
