// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/LinkHeadlessAccountRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLinkHeadlessAccountRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FLinkHeadlessAccountRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FLinkHeadlessAccountRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FLinkHeadlessAccountRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLinkHeadlessAccountRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("LinkHeadlessAccountRequest"), sizeof(FLinkHeadlessAccountRequest), Get_Z_Construct_UScriptStruct_FLinkHeadlessAccountRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FLinkHeadlessAccountRequest>()
{
	return FLinkHeadlessAccountRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLinkHeadlessAccountRequest(FLinkHeadlessAccountRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("LinkHeadlessAccountRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFLinkHeadlessAccountRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFLinkHeadlessAccountRequest()
	{
		UScriptStruct::DeferCppStructOps<FLinkHeadlessAccountRequest>(FName(TEXT("LinkHeadlessAccountRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFLinkHeadlessAccountRequest;
	struct Z_Construct_UScriptStruct_FLinkHeadlessAccountRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChosenNamespaces_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChosenNamespaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChosenNamespaces;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OneTimeLinkCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OneTimeLinkCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinkHeadlessAccountRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LinkHeadlessAccountRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLinkHeadlessAccountRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLinkHeadlessAccountRequest>();
	}
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLinkHeadlessAccountRequest_Statics::NewProp_ChosenNamespaces_Inner = { "ChosenNamespaces", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinkHeadlessAccountRequest_Statics::NewProp_ChosenNamespaces_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LinkHeadlessAccountRequest" },
		{ "ModuleRelativePath", "Public/LinkHeadlessAccountRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLinkHeadlessAccountRequest_Statics::NewProp_ChosenNamespaces = { "ChosenNamespaces", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLinkHeadlessAccountRequest, ChosenNamespaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLinkHeadlessAccountRequest_Statics::NewProp_ChosenNamespaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinkHeadlessAccountRequest_Statics::NewProp_ChosenNamespaces_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinkHeadlessAccountRequest_Statics::NewProp_OneTimeLinkCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LinkHeadlessAccountRequest" },
		{ "ModuleRelativePath", "Public/LinkHeadlessAccountRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLinkHeadlessAccountRequest_Statics::NewProp_OneTimeLinkCode = { "OneTimeLinkCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLinkHeadlessAccountRequest, OneTimeLinkCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FLinkHeadlessAccountRequest_Statics::NewProp_OneTimeLinkCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinkHeadlessAccountRequest_Statics::NewProp_OneTimeLinkCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLinkHeadlessAccountRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinkHeadlessAccountRequest_Statics::NewProp_ChosenNamespaces_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinkHeadlessAccountRequest_Statics::NewProp_ChosenNamespaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinkHeadlessAccountRequest_Statics::NewProp_OneTimeLinkCode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLinkHeadlessAccountRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"LinkHeadlessAccountRequest",
		sizeof(FLinkHeadlessAccountRequest),
		alignof(FLinkHeadlessAccountRequest),
		Z_Construct_UScriptStruct_FLinkHeadlessAccountRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinkHeadlessAccountRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLinkHeadlessAccountRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinkHeadlessAccountRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLinkHeadlessAccountRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLinkHeadlessAccountRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LinkHeadlessAccountRequest"), sizeof(FLinkHeadlessAccountRequest), Get_Z_Construct_UScriptStruct_FLinkHeadlessAccountRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLinkHeadlessAccountRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLinkHeadlessAccountRequest_Hash() { return 1446400541U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
