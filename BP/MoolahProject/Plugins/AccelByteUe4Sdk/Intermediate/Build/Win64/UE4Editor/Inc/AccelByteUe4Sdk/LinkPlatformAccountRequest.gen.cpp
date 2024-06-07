// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/LinkPlatformAccountRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLinkPlatformAccountRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FLinkPlatformAccountRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FLinkPlatformAccountRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FLinkPlatformAccountRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLinkPlatformAccountRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("LinkPlatformAccountRequest"), sizeof(FLinkPlatformAccountRequest), Get_Z_Construct_UScriptStruct_FLinkPlatformAccountRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FLinkPlatformAccountRequest>()
{
	return FLinkPlatformAccountRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLinkPlatformAccountRequest(FLinkPlatformAccountRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("LinkPlatformAccountRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFLinkPlatformAccountRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFLinkPlatformAccountRequest()
	{
		UScriptStruct::DeferCppStructOps<FLinkPlatformAccountRequest>(FName(TEXT("LinkPlatformAccountRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFLinkPlatformAccountRequest;
	struct Z_Construct_UScriptStruct_FLinkPlatformAccountRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformUserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinkPlatformAccountRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LinkPlatformAccountRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLinkPlatformAccountRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLinkPlatformAccountRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinkPlatformAccountRequest_Statics::NewProp_PlatformId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LinkPlatformAccountRequest" },
		{ "ModuleRelativePath", "Public/LinkPlatformAccountRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLinkPlatformAccountRequest_Statics::NewProp_PlatformId = { "PlatformId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLinkPlatformAccountRequest, PlatformId), METADATA_PARAMS(Z_Construct_UScriptStruct_FLinkPlatformAccountRequest_Statics::NewProp_PlatformId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinkPlatformAccountRequest_Statics::NewProp_PlatformId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinkPlatformAccountRequest_Statics::NewProp_PlatformUserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LinkPlatformAccountRequest" },
		{ "ModuleRelativePath", "Public/LinkPlatformAccountRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLinkPlatformAccountRequest_Statics::NewProp_PlatformUserId = { "PlatformUserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLinkPlatformAccountRequest, PlatformUserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FLinkPlatformAccountRequest_Statics::NewProp_PlatformUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinkPlatformAccountRequest_Statics::NewProp_PlatformUserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLinkPlatformAccountRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinkPlatformAccountRequest_Statics::NewProp_PlatformId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinkPlatformAccountRequest_Statics::NewProp_PlatformUserId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLinkPlatformAccountRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"LinkPlatformAccountRequest",
		sizeof(FLinkPlatformAccountRequest),
		alignof(FLinkPlatformAccountRequest),
		Z_Construct_UScriptStruct_FLinkPlatformAccountRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinkPlatformAccountRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLinkPlatformAccountRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinkPlatformAccountRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLinkPlatformAccountRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLinkPlatformAccountRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LinkPlatformAccountRequest"), sizeof(FLinkPlatformAccountRequest), Get_Z_Construct_UScriptStruct_FLinkPlatformAccountRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLinkPlatformAccountRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLinkPlatformAccountRequest_Hash() { return 683563721U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
