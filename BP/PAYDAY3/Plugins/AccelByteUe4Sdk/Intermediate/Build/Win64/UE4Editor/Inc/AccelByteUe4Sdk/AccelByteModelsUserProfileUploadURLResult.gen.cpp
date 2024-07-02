// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsUserProfileUploadURLResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsUserProfileUploadURLResult() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsUserProfileUploadURLResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsUserProfileUploadURLResult"), sizeof(FAccelByteModelsUserProfileUploadURLResult), Get_Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsUserProfileUploadURLResult>()
{
	return FAccelByteModelsUserProfileUploadURLResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult(FAccelByteModelsUserProfileUploadURLResult::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsUserProfileUploadURLResult"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUserProfileUploadURLResult
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUserProfileUploadURLResult()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsUserProfileUploadURLResult>(FName(TEXT("AccelByteModelsUserProfileUploadURLResult")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUserProfileUploadURLResult;
	struct Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccessUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccessUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Method;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContentType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserProfileUploadURLResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsUserProfileUploadURLResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Statics::NewProp_Url_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserProfileUploadURLResult" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserProfileUploadURLResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserProfileUploadURLResult, Url), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Statics::NewProp_Url_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Statics::NewProp_AccessUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserProfileUploadURLResult" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserProfileUploadURLResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Statics::NewProp_AccessUrl = { "AccessUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserProfileUploadURLResult, AccessUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Statics::NewProp_AccessUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Statics::NewProp_AccessUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Statics::NewProp_Method_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserProfileUploadURLResult" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserProfileUploadURLResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserProfileUploadURLResult, Method), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Statics::NewProp_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Statics::NewProp_Method_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Statics::NewProp_ContentType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUserProfileUploadURLResult" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUserProfileUploadURLResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUserProfileUploadURLResult, ContentType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Statics::NewProp_ContentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Statics::NewProp_ContentType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Statics::NewProp_Url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Statics::NewProp_AccessUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Statics::NewProp_Method,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Statics::NewProp_ContentType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsUserProfileUploadURLResult",
		sizeof(FAccelByteModelsUserProfileUploadURLResult),
		alignof(FAccelByteModelsUserProfileUploadURLResult),
		Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsUserProfileUploadURLResult"), sizeof(FAccelByteModelsUserProfileUploadURLResult), Get_Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUserProfileUploadURLResult_Hash() { return 1925628209U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
