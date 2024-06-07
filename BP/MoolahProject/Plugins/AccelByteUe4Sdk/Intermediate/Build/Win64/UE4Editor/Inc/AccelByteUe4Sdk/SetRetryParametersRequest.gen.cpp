// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/SetRetryParametersRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSetRetryParametersRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FSetRetryParametersRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FSetRetryParametersRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FSetRetryParametersRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSetRetryParametersRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("SetRetryParametersRequest"), sizeof(FSetRetryParametersRequest), Get_Z_Construct_UScriptStruct_FSetRetryParametersRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FSetRetryParametersRequest>()
{
	return FSetRetryParametersRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSetRetryParametersRequest(FSetRetryParametersRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("SetRetryParametersRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFSetRetryParametersRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFSetRetryParametersRequest()
	{
		UScriptStruct::DeferCppStructOps<FSetRetryParametersRequest>(FName(TEXT("SetRetryParametersRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFSetRetryParametersRequest;
	struct Z_Construct_UScriptStruct_FSetRetryParametersRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewTotalTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewTotalTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewBackoffDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewBackoffDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewMaxDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewMaxDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetRetryParametersRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SetRetryParametersRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSetRetryParametersRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSetRetryParametersRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetRetryParametersRequest_Statics::NewProp_NewTotalTimeout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SetRetryParametersRequest" },
		{ "ModuleRelativePath", "Public/SetRetryParametersRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSetRetryParametersRequest_Statics::NewProp_NewTotalTimeout = { "NewTotalTimeout", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSetRetryParametersRequest, NewTotalTimeout), METADATA_PARAMS(Z_Construct_UScriptStruct_FSetRetryParametersRequest_Statics::NewProp_NewTotalTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetRetryParametersRequest_Statics::NewProp_NewTotalTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetRetryParametersRequest_Statics::NewProp_NewBackoffDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SetRetryParametersRequest" },
		{ "ModuleRelativePath", "Public/SetRetryParametersRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSetRetryParametersRequest_Statics::NewProp_NewBackoffDelay = { "NewBackoffDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSetRetryParametersRequest, NewBackoffDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FSetRetryParametersRequest_Statics::NewProp_NewBackoffDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetRetryParametersRequest_Statics::NewProp_NewBackoffDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetRetryParametersRequest_Statics::NewProp_NewMaxDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SetRetryParametersRequest" },
		{ "ModuleRelativePath", "Public/SetRetryParametersRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSetRetryParametersRequest_Statics::NewProp_NewMaxDelay = { "NewMaxDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSetRetryParametersRequest, NewMaxDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FSetRetryParametersRequest_Statics::NewProp_NewMaxDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetRetryParametersRequest_Statics::NewProp_NewMaxDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSetRetryParametersRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetRetryParametersRequest_Statics::NewProp_NewTotalTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetRetryParametersRequest_Statics::NewProp_NewBackoffDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetRetryParametersRequest_Statics::NewProp_NewMaxDelay,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSetRetryParametersRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"SetRetryParametersRequest",
		sizeof(FSetRetryParametersRequest),
		alignof(FSetRetryParametersRequest),
		Z_Construct_UScriptStruct_FSetRetryParametersRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetRetryParametersRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSetRetryParametersRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetRetryParametersRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSetRetryParametersRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSetRetryParametersRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SetRetryParametersRequest"), sizeof(FSetRetryParametersRequest), Get_Z_Construct_UScriptStruct_FSetRetryParametersRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSetRetryParametersRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSetRetryParametersRequest_Hash() { return 3743906148U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
