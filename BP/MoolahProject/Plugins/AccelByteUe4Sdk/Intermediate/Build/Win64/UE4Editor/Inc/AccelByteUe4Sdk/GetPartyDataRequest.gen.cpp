// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/GetPartyDataRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetPartyDataRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FGetPartyDataRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FGetPartyDataRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FGetPartyDataRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetPartyDataRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("GetPartyDataRequest"), sizeof(FGetPartyDataRequest), Get_Z_Construct_UScriptStruct_FGetPartyDataRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FGetPartyDataRequest>()
{
	return FGetPartyDataRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGetPartyDataRequest(FGetPartyDataRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("GetPartyDataRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFGetPartyDataRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFGetPartyDataRequest()
	{
		UScriptStruct::DeferCppStructOps<FGetPartyDataRequest>(FName(TEXT("GetPartyDataRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFGetPartyDataRequest;
	struct Z_Construct_UScriptStruct_FGetPartyDataRequest_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetPartyDataRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GetPartyDataRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGetPartyDataRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetPartyDataRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetPartyDataRequest_Statics::NewProp_partyId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetPartyDataRequest" },
		{ "ModuleRelativePath", "Public/GetPartyDataRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGetPartyDataRequest_Statics::NewProp_partyId = { "partyId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGetPartyDataRequest, partyId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGetPartyDataRequest_Statics::NewProp_partyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetPartyDataRequest_Statics::NewProp_partyId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetPartyDataRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetPartyDataRequest_Statics::NewProp_partyId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetPartyDataRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"GetPartyDataRequest",
		sizeof(FGetPartyDataRequest),
		alignof(FGetPartyDataRequest),
		Z_Construct_UScriptStruct_FGetPartyDataRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetPartyDataRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGetPartyDataRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetPartyDataRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGetPartyDataRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGetPartyDataRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GetPartyDataRequest"), sizeof(FGetPartyDataRequest), Get_Z_Construct_UScriptStruct_FGetPartyDataRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGetPartyDataRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGetPartyDataRequest_Hash() { return 2735559705U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
