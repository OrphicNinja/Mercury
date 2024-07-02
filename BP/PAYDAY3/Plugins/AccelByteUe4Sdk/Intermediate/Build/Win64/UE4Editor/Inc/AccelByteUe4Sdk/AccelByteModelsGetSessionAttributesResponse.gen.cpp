// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsGetSessionAttributesResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsGetSessionAttributesResponse() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsGetSessionAttributesResponse();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsLobbyBaseResponse();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsGetSessionAttributesResponse>() == std::is_polymorphic<FAccelByteModelsLobbyBaseResponse>(), "USTRUCT FAccelByteModelsGetSessionAttributesResponse cannot be polymorphic unless super FAccelByteModelsLobbyBaseResponse is polymorphic");

class UScriptStruct* FAccelByteModelsGetSessionAttributesResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsGetSessionAttributesResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsGetSessionAttributesResponse, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsGetSessionAttributesResponse"), sizeof(FAccelByteModelsGetSessionAttributesResponse), Get_Z_Construct_UScriptStruct_FAccelByteModelsGetSessionAttributesResponse_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsGetSessionAttributesResponse>()
{
	return FAccelByteModelsGetSessionAttributesResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsGetSessionAttributesResponse(FAccelByteModelsGetSessionAttributesResponse::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsGetSessionAttributesResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsGetSessionAttributesResponse
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsGetSessionAttributesResponse()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsGetSessionAttributesResponse>(FName(TEXT("AccelByteModelsGetSessionAttributesResponse")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsGetSessionAttributesResponse;
	struct Z_Construct_UScriptStruct_FAccelByteModelsGetSessionAttributesResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGetSessionAttributesResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGetSessionAttributesResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsGetSessionAttributesResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsGetSessionAttributesResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGetSessionAttributesResponse_Statics::NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsGetSessionAttributesResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGetSessionAttributesResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGetSessionAttributesResponse_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsGetSessionAttributesResponse, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGetSessionAttributesResponse_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGetSessionAttributesResponse_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsGetSessionAttributesResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGetSessionAttributesResponse_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsGetSessionAttributesResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsLobbyBaseResponse,
		&NewStructOps,
		"AccelByteModelsGetSessionAttributesResponse",
		sizeof(FAccelByteModelsGetSessionAttributesResponse),
		alignof(FAccelByteModelsGetSessionAttributesResponse),
		Z_Construct_UScriptStruct_FAccelByteModelsGetSessionAttributesResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGetSessionAttributesResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGetSessionAttributesResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGetSessionAttributesResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsGetSessionAttributesResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsGetSessionAttributesResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsGetSessionAttributesResponse"), sizeof(FAccelByteModelsGetSessionAttributesResponse), Get_Z_Construct_UScriptStruct_FAccelByteModelsGetSessionAttributesResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsGetSessionAttributesResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsGetSessionAttributesResponse_Hash() { return 3851697974U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
