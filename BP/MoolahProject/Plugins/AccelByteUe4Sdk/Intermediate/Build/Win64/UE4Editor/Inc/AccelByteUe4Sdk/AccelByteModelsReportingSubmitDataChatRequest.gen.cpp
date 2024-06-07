// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsReportingSubmitDataChatRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsReportingSubmitDataChatRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataChatRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsReportingAdditionalInfoChat();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsReportingSubmitDataChatRequest>() == std::is_polymorphic<FAccelByteModelsReportingSubmitDataBase>(), "USTRUCT FAccelByteModelsReportingSubmitDataChatRequest cannot be polymorphic unless super FAccelByteModelsReportingSubmitDataBase is polymorphic");

class UScriptStruct* FAccelByteModelsReportingSubmitDataChatRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataChatRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataChatRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsReportingSubmitDataChatRequest"), sizeof(FAccelByteModelsReportingSubmitDataChatRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataChatRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsReportingSubmitDataChatRequest>()
{
	return FAccelByteModelsReportingSubmitDataChatRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsReportingSubmitDataChatRequest(FAccelByteModelsReportingSubmitDataChatRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsReportingSubmitDataChatRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsReportingSubmitDataChatRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsReportingSubmitDataChatRequest()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsReportingSubmitDataChatRequest>(FName(TEXT("AccelByteModelsReportingSubmitDataChatRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsReportingSubmitDataChatRequest;
	struct Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataChatRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditionalInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataChatRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsReportingSubmitDataChatRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataChatRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsReportingSubmitDataChatRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataChatRequest_Statics::NewProp_AdditionalInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsReportingSubmitDataChatRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsReportingSubmitDataChatRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataChatRequest_Statics::NewProp_AdditionalInfo = { "AdditionalInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsReportingSubmitDataChatRequest, AdditionalInfo), Z_Construct_UScriptStruct_FAccelByteModelsReportingAdditionalInfoChat, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataChatRequest_Statics::NewProp_AdditionalInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataChatRequest_Statics::NewProp_AdditionalInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataChatRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataChatRequest_Statics::NewProp_AdditionalInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataChatRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataBase,
		&NewStructOps,
		"AccelByteModelsReportingSubmitDataChatRequest",
		sizeof(FAccelByteModelsReportingSubmitDataChatRequest),
		alignof(FAccelByteModelsReportingSubmitDataChatRequest),
		Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataChatRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataChatRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataChatRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataChatRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataChatRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataChatRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsReportingSubmitDataChatRequest"), sizeof(FAccelByteModelsReportingSubmitDataChatRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataChatRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataChatRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsReportingSubmitDataChatRequest_Hash() { return 2930744133U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
