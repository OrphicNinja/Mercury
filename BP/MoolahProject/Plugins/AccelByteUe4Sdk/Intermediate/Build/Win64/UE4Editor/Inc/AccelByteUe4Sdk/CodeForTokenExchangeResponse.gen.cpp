// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/CodeForTokenExchangeResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCodeForTokenExchangeResponse() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FCodeForTokenExchangeResponse();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FCodeForTokenExchangeResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FCodeForTokenExchangeResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCodeForTokenExchangeResponse, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("CodeForTokenExchangeResponse"), sizeof(FCodeForTokenExchangeResponse), Get_Z_Construct_UScriptStruct_FCodeForTokenExchangeResponse_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FCodeForTokenExchangeResponse>()
{
	return FCodeForTokenExchangeResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCodeForTokenExchangeResponse(FCodeForTokenExchangeResponse::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("CodeForTokenExchangeResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFCodeForTokenExchangeResponse
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFCodeForTokenExchangeResponse()
	{
		UScriptStruct::DeferCppStructOps<FCodeForTokenExchangeResponse>(FName(TEXT("CodeForTokenExchangeResponse")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFCodeForTokenExchangeResponse;
	struct Z_Construct_UScriptStruct_FCodeForTokenExchangeResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Code;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCodeForTokenExchangeResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CodeForTokenExchangeResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCodeForTokenExchangeResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCodeForTokenExchangeResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCodeForTokenExchangeResponse_Statics::NewProp_Code_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CodeForTokenExchangeResponse" },
		{ "ModuleRelativePath", "Public/CodeForTokenExchangeResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCodeForTokenExchangeResponse_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCodeForTokenExchangeResponse, Code), METADATA_PARAMS(Z_Construct_UScriptStruct_FCodeForTokenExchangeResponse_Statics::NewProp_Code_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCodeForTokenExchangeResponse_Statics::NewProp_Code_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCodeForTokenExchangeResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCodeForTokenExchangeResponse_Statics::NewProp_Code,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCodeForTokenExchangeResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"CodeForTokenExchangeResponse",
		sizeof(FCodeForTokenExchangeResponse),
		alignof(FCodeForTokenExchangeResponse),
		Z_Construct_UScriptStruct_FCodeForTokenExchangeResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCodeForTokenExchangeResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCodeForTokenExchangeResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCodeForTokenExchangeResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCodeForTokenExchangeResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCodeForTokenExchangeResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CodeForTokenExchangeResponse"), sizeof(FCodeForTokenExchangeResponse), Get_Z_Construct_UScriptStruct_FCodeForTokenExchangeResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCodeForTokenExchangeResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCodeForTokenExchangeResponse_Hash() { return 256111286U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
