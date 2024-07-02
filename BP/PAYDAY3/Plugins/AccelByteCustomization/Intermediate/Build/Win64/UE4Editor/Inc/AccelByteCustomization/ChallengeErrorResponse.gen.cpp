// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/ChallengeErrorResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChallengeErrorResponse() {}
// Cross Module References
	ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeErrorResponse();
	UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
// End Cross Module References
class UScriptStruct* FChallengeErrorResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTECUSTOMIZATION_API uint32 Get_Z_Construct_UScriptStruct_FChallengeErrorResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChallengeErrorResponse, Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("ChallengeErrorResponse"), sizeof(FChallengeErrorResponse), Get_Z_Construct_UScriptStruct_FChallengeErrorResponse_Hash());
	}
	return Singleton;
}
template<> ACCELBYTECUSTOMIZATION_API UScriptStruct* StaticStruct<FChallengeErrorResponse>()
{
	return FChallengeErrorResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChallengeErrorResponse(FChallengeErrorResponse::StaticStruct, TEXT("/Script/AccelByteCustomization"), TEXT("ChallengeErrorResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteCustomization_StaticRegisterNativesFChallengeErrorResponse
{
	FScriptStruct_AccelByteCustomization_StaticRegisterNativesFChallengeErrorResponse()
	{
		UScriptStruct::DeferCppStructOps<FChallengeErrorResponse>(FName(TEXT("ChallengeErrorResponse")));
	}
} ScriptStruct_AccelByteCustomization_StaticRegisterNativesFChallengeErrorResponse;
	struct Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Details_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Details_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Details;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TraceId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChallengeErrorResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChallengeErrorResponse>();
	}
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::NewProp_Details_Inner = { "Details", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::NewProp_Details_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeErrorResponse" },
		{ "ModuleRelativePath", "Public/ChallengeErrorResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeErrorResponse, Details), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::NewProp_Details_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::NewProp_Details_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::NewProp_ErrorCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeErrorResponse" },
		{ "ModuleRelativePath", "Public/ChallengeErrorResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeErrorResponse, ErrorCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::NewProp_ErrorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::NewProp_ErrorCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeErrorResponse" },
		{ "ModuleRelativePath", "Public/ChallengeErrorResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeErrorResponse, ErrorMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::NewProp_ErrorMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::NewProp_TraceId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeErrorResponse" },
		{ "ModuleRelativePath", "Public/ChallengeErrorResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::NewProp_TraceId = { "TraceId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeErrorResponse, TraceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::NewProp_TraceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::NewProp_TraceId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::NewProp_Details_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::NewProp_Details,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::NewProp_ErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::NewProp_TraceId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
		nullptr,
		&NewStructOps,
		"ChallengeErrorResponse",
		sizeof(FChallengeErrorResponse),
		alignof(FChallengeErrorResponse),
		Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChallengeErrorResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChallengeErrorResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteCustomization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChallengeErrorResponse"), sizeof(FChallengeErrorResponse), Get_Z_Construct_UScriptStruct_FChallengeErrorResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChallengeErrorResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChallengeErrorResponse_Hash() { return 209362842U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
