// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsUGCModifyContentShareCodeRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsUGCModifyContentShareCodeRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUGCModifyContentShareCodeRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsUGCModifyContentShareCodeRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUGCModifyContentShareCodeRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsUGCModifyContentShareCodeRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsUGCModifyContentShareCodeRequest"), sizeof(FAccelByteModelsUGCModifyContentShareCodeRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsUGCModifyContentShareCodeRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsUGCModifyContentShareCodeRequest>()
{
	return FAccelByteModelsUGCModifyContentShareCodeRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsUGCModifyContentShareCodeRequest(FAccelByteModelsUGCModifyContentShareCodeRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsUGCModifyContentShareCodeRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUGCModifyContentShareCodeRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUGCModifyContentShareCodeRequest()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsUGCModifyContentShareCodeRequest>(FName(TEXT("AccelByteModelsUGCModifyContentShareCodeRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsUGCModifyContentShareCodeRequest;
	struct Z_Construct_UScriptStruct_FAccelByteModelsUGCModifyContentShareCodeRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShareCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShareCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCModifyContentShareCodeRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCModifyContentShareCodeRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsUGCModifyContentShareCodeRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsUGCModifyContentShareCodeRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsUGCModifyContentShareCodeRequest_Statics::NewProp_ShareCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsUGCModifyContentShareCodeRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsUGCModifyContentShareCodeRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsUGCModifyContentShareCodeRequest_Statics::NewProp_ShareCode = { "ShareCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsUGCModifyContentShareCodeRequest, ShareCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCModifyContentShareCodeRequest_Statics::NewProp_ShareCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCModifyContentShareCodeRequest_Statics::NewProp_ShareCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsUGCModifyContentShareCodeRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsUGCModifyContentShareCodeRequest_Statics::NewProp_ShareCode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsUGCModifyContentShareCodeRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsUGCModifyContentShareCodeRequest",
		sizeof(FAccelByteModelsUGCModifyContentShareCodeRequest),
		alignof(FAccelByteModelsUGCModifyContentShareCodeRequest),
		Z_Construct_UScriptStruct_FAccelByteModelsUGCModifyContentShareCodeRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCModifyContentShareCodeRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsUGCModifyContentShareCodeRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsUGCModifyContentShareCodeRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsUGCModifyContentShareCodeRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUGCModifyContentShareCodeRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsUGCModifyContentShareCodeRequest"), sizeof(FAccelByteModelsUGCModifyContentShareCodeRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsUGCModifyContentShareCodeRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsUGCModifyContentShareCodeRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsUGCModifyContentShareCodeRequest_Hash() { return 1496393288U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
