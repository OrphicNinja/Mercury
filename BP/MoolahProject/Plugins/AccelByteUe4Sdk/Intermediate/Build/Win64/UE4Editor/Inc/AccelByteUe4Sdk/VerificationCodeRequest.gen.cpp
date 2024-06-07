// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/VerificationCodeRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVerificationCodeRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FVerificationCodeRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EVerificationContext();
// End Cross Module References
class UScriptStruct* FVerificationCodeRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FVerificationCodeRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVerificationCodeRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("VerificationCodeRequest"), sizeof(FVerificationCodeRequest), Get_Z_Construct_UScriptStruct_FVerificationCodeRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FVerificationCodeRequest>()
{
	return FVerificationCodeRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVerificationCodeRequest(FVerificationCodeRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("VerificationCodeRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFVerificationCodeRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFVerificationCodeRequest()
	{
		UScriptStruct::DeferCppStructOps<FVerificationCodeRequest>(FName(TEXT("VerificationCodeRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFVerificationCodeRequest;
	struct Z_Construct_UScriptStruct_FVerificationCodeRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Context_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LanguageTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LanguageTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmailAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EmailAddress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVerificationCodeRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VerificationCodeRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVerificationCodeRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVerificationCodeRequest>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVerificationCodeRequest_Statics::NewProp_Context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVerificationCodeRequest_Statics::NewProp_Context_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "VerificationCodeRequest" },
		{ "ModuleRelativePath", "Public/VerificationCodeRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVerificationCodeRequest_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVerificationCodeRequest, Context), Z_Construct_UEnum_AccelByteUe4Sdk_EVerificationContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FVerificationCodeRequest_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVerificationCodeRequest_Statics::NewProp_Context_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVerificationCodeRequest_Statics::NewProp_LanguageTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "VerificationCodeRequest" },
		{ "ModuleRelativePath", "Public/VerificationCodeRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVerificationCodeRequest_Statics::NewProp_LanguageTag = { "LanguageTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVerificationCodeRequest, LanguageTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FVerificationCodeRequest_Statics::NewProp_LanguageTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVerificationCodeRequest_Statics::NewProp_LanguageTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVerificationCodeRequest_Statics::NewProp_EmailAddress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "VerificationCodeRequest" },
		{ "ModuleRelativePath", "Public/VerificationCodeRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVerificationCodeRequest_Statics::NewProp_EmailAddress = { "EmailAddress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVerificationCodeRequest, EmailAddress), METADATA_PARAMS(Z_Construct_UScriptStruct_FVerificationCodeRequest_Statics::NewProp_EmailAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVerificationCodeRequest_Statics::NewProp_EmailAddress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVerificationCodeRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVerificationCodeRequest_Statics::NewProp_Context_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVerificationCodeRequest_Statics::NewProp_Context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVerificationCodeRequest_Statics::NewProp_LanguageTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVerificationCodeRequest_Statics::NewProp_EmailAddress,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVerificationCodeRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"VerificationCodeRequest",
		sizeof(FVerificationCodeRequest),
		alignof(FVerificationCodeRequest),
		Z_Construct_UScriptStruct_FVerificationCodeRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVerificationCodeRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVerificationCodeRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVerificationCodeRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVerificationCodeRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVerificationCodeRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VerificationCodeRequest"), sizeof(FVerificationCodeRequest), Get_Z_Construct_UScriptStruct_FVerificationCodeRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVerificationCodeRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVerificationCodeRequest_Hash() { return 3649510690U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
