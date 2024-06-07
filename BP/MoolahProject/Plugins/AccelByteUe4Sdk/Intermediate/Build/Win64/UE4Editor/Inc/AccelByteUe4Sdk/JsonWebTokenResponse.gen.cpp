// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/JsonWebTokenResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJsonWebTokenResponse() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FJsonWebTokenResponse();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FJsonWebTokenResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FJsonWebTokenResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FJsonWebTokenResponse, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("JsonWebTokenResponse"), sizeof(FJsonWebTokenResponse), Get_Z_Construct_UScriptStruct_FJsonWebTokenResponse_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FJsonWebTokenResponse>()
{
	return FJsonWebTokenResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FJsonWebTokenResponse(FJsonWebTokenResponse::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("JsonWebTokenResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFJsonWebTokenResponse
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFJsonWebTokenResponse()
	{
		UScriptStruct::DeferCppStructOps<FJsonWebTokenResponse>(FName(TEXT("JsonWebTokenResponse")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFJsonWebTokenResponse;
	struct Z_Construct_UScriptStruct_FJsonWebTokenResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Jwt_token_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Jwt_token;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Session_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Session_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJsonWebTokenResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JsonWebTokenResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJsonWebTokenResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJsonWebTokenResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJsonWebTokenResponse_Statics::NewProp_Jwt_token_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JsonWebTokenResponse" },
		{ "ModuleRelativePath", "Public/JsonWebTokenResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJsonWebTokenResponse_Statics::NewProp_Jwt_token = { "Jwt_token", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJsonWebTokenResponse, Jwt_token), METADATA_PARAMS(Z_Construct_UScriptStruct_FJsonWebTokenResponse_Statics::NewProp_Jwt_token_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJsonWebTokenResponse_Statics::NewProp_Jwt_token_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJsonWebTokenResponse_Statics::NewProp_Session_id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JsonWebTokenResponse" },
		{ "ModuleRelativePath", "Public/JsonWebTokenResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJsonWebTokenResponse_Statics::NewProp_Session_id = { "Session_id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJsonWebTokenResponse, Session_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FJsonWebTokenResponse_Statics::NewProp_Session_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJsonWebTokenResponse_Statics::NewProp_Session_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJsonWebTokenResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJsonWebTokenResponse_Statics::NewProp_Jwt_token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJsonWebTokenResponse_Statics::NewProp_Session_id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJsonWebTokenResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"JsonWebTokenResponse",
		sizeof(FJsonWebTokenResponse),
		alignof(FJsonWebTokenResponse),
		Z_Construct_UScriptStruct_FJsonWebTokenResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJsonWebTokenResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJsonWebTokenResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJsonWebTokenResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJsonWebTokenResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FJsonWebTokenResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("JsonWebTokenResponse"), sizeof(FJsonWebTokenResponse), Get_Z_Construct_UScriptStruct_FJsonWebTokenResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FJsonWebTokenResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FJsonWebTokenResponse_Hash() { return 2333616228U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
