// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/BulkPlatformUserIdResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBulkPlatformUserIdResponse() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FBulkPlatformUserIdResponse();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformUserIdMap();
// End Cross Module References
class UScriptStruct* FBulkPlatformUserIdResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FBulkPlatformUserIdResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBulkPlatformUserIdResponse, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("BulkPlatformUserIdResponse"), sizeof(FBulkPlatformUserIdResponse), Get_Z_Construct_UScriptStruct_FBulkPlatformUserIdResponse_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FBulkPlatformUserIdResponse>()
{
	return FBulkPlatformUserIdResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBulkPlatformUserIdResponse(FBulkPlatformUserIdResponse::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("BulkPlatformUserIdResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFBulkPlatformUserIdResponse
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFBulkPlatformUserIdResponse()
	{
		UScriptStruct::DeferCppStructOps<FBulkPlatformUserIdResponse>(FName(TEXT("BulkPlatformUserIdResponse")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFBulkPlatformUserIdResponse;
	struct Z_Construct_UScriptStruct_FBulkPlatformUserIdResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserIdPlatforms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserIdPlatforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UserIdPlatforms;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBulkPlatformUserIdResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BulkPlatformUserIdResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBulkPlatformUserIdResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBulkPlatformUserIdResponse>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBulkPlatformUserIdResponse_Statics::NewProp_UserIdPlatforms_Inner = { "UserIdPlatforms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlatformUserIdMap, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBulkPlatformUserIdResponse_Statics::NewProp_UserIdPlatforms_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BulkPlatformUserIdResponse" },
		{ "ModuleRelativePath", "Public/BulkPlatformUserIdResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBulkPlatformUserIdResponse_Statics::NewProp_UserIdPlatforms = { "UserIdPlatforms", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBulkPlatformUserIdResponse, UserIdPlatforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBulkPlatformUserIdResponse_Statics::NewProp_UserIdPlatforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBulkPlatformUserIdResponse_Statics::NewProp_UserIdPlatforms_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBulkPlatformUserIdResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBulkPlatformUserIdResponse_Statics::NewProp_UserIdPlatforms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBulkPlatformUserIdResponse_Statics::NewProp_UserIdPlatforms,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBulkPlatformUserIdResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"BulkPlatformUserIdResponse",
		sizeof(FBulkPlatformUserIdResponse),
		alignof(FBulkPlatformUserIdResponse),
		Z_Construct_UScriptStruct_FBulkPlatformUserIdResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBulkPlatformUserIdResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBulkPlatformUserIdResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBulkPlatformUserIdResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBulkPlatformUserIdResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBulkPlatformUserIdResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BulkPlatformUserIdResponse"), sizeof(FBulkPlatformUserIdResponse), Get_Z_Construct_UScriptStruct_FBulkPlatformUserIdResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBulkPlatformUserIdResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBulkPlatformUserIdResponse_Hash() { return 637215753U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
