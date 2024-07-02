// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/UpgradeUserRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpgradeUserRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FUpgradeUserRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FUpgradeUserRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FUpgradeUserRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpgradeUserRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("UpgradeUserRequest"), sizeof(FUpgradeUserRequest), Get_Z_Construct_UScriptStruct_FUpgradeUserRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FUpgradeUserRequest>()
{
	return FUpgradeUserRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUpgradeUserRequest(FUpgradeUserRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UpgradeUserRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFUpgradeUserRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFUpgradeUserRequest()
	{
		UScriptStruct::DeferCppStructOps<FUpgradeUserRequest>(FName(TEXT("UpgradeUserRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFUpgradeUserRequest;
	struct Z_Construct_UScriptStruct_FUpgradeUserRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Temporary_session_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Temporary_session_id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Expires_in_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Expires_in;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpgradeUserRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UpgradeUserRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUpgradeUserRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpgradeUserRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpgradeUserRequest_Statics::NewProp_Temporary_session_id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UpgradeUserRequest" },
		{ "ModuleRelativePath", "Public/UpgradeUserRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUpgradeUserRequest_Statics::NewProp_Temporary_session_id = { "Temporary_session_id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUpgradeUserRequest, Temporary_session_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FUpgradeUserRequest_Statics::NewProp_Temporary_session_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgradeUserRequest_Statics::NewProp_Temporary_session_id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpgradeUserRequest_Statics::NewProp_Expires_in_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UpgradeUserRequest" },
		{ "ModuleRelativePath", "Public/UpgradeUserRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUpgradeUserRequest_Statics::NewProp_Expires_in = { "Expires_in", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUpgradeUserRequest, Expires_in), METADATA_PARAMS(Z_Construct_UScriptStruct_FUpgradeUserRequest_Statics::NewProp_Expires_in_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgradeUserRequest_Statics::NewProp_Expires_in_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUpgradeUserRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgradeUserRequest_Statics::NewProp_Temporary_session_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgradeUserRequest_Statics::NewProp_Expires_in,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpgradeUserRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"UpgradeUserRequest",
		sizeof(FUpgradeUserRequest),
		alignof(FUpgradeUserRequest),
		Z_Construct_UScriptStruct_FUpgradeUserRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgradeUserRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUpgradeUserRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgradeUserRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUpgradeUserRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUpgradeUserRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UpgradeUserRequest"), sizeof(FUpgradeUserRequest), Get_Z_Construct_UScriptStruct_FUpgradeUserRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUpgradeUserRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUpgradeUserRequest_Hash() { return 771339272U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
