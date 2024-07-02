// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/BulkPlatformUserIdRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBulkPlatformUserIdRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FBulkPlatformUserIdRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FBulkPlatformUserIdRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FBulkPlatformUserIdRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBulkPlatformUserIdRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("BulkPlatformUserIdRequest"), sizeof(FBulkPlatformUserIdRequest), Get_Z_Construct_UScriptStruct_FBulkPlatformUserIdRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FBulkPlatformUserIdRequest>()
{
	return FBulkPlatformUserIdRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBulkPlatformUserIdRequest(FBulkPlatformUserIdRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("BulkPlatformUserIdRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFBulkPlatformUserIdRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFBulkPlatformUserIdRequest()
	{
		UScriptStruct::DeferCppStructOps<FBulkPlatformUserIdRequest>(FName(TEXT("BulkPlatformUserIdRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFBulkPlatformUserIdRequest;
	struct Z_Construct_UScriptStruct_FBulkPlatformUserIdRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformUserIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformUserIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlatformUserIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBulkPlatformUserIdRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BulkPlatformUserIdRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBulkPlatformUserIdRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBulkPlatformUserIdRequest>();
	}
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBulkPlatformUserIdRequest_Statics::NewProp_PlatformUserIDs_Inner = { "PlatformUserIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBulkPlatformUserIdRequest_Statics::NewProp_PlatformUserIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BulkPlatformUserIdRequest" },
		{ "ModuleRelativePath", "Public/BulkPlatformUserIdRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBulkPlatformUserIdRequest_Statics::NewProp_PlatformUserIDs = { "PlatformUserIDs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBulkPlatformUserIdRequest, PlatformUserIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBulkPlatformUserIdRequest_Statics::NewProp_PlatformUserIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBulkPlatformUserIdRequest_Statics::NewProp_PlatformUserIDs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBulkPlatformUserIdRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBulkPlatformUserIdRequest_Statics::NewProp_PlatformUserIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBulkPlatformUserIdRequest_Statics::NewProp_PlatformUserIDs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBulkPlatformUserIdRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"BulkPlatformUserIdRequest",
		sizeof(FBulkPlatformUserIdRequest),
		alignof(FBulkPlatformUserIdRequest),
		Z_Construct_UScriptStruct_FBulkPlatformUserIdRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBulkPlatformUserIdRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBulkPlatformUserIdRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBulkPlatformUserIdRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBulkPlatformUserIdRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBulkPlatformUserIdRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BulkPlatformUserIdRequest"), sizeof(FBulkPlatformUserIdRequest), Get_Z_Construct_UScriptStruct_FBulkPlatformUserIdRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBulkPlatformUserIdRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBulkPlatformUserIdRequest_Hash() { return 2561097626U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
