// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsGetPlayerRecordSizeRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsGetPlayerRecordSizeRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsGetPlayerRecordSizeRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsGetPlayerRecordSizeRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsGetPlayerRecordSizeRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsGetPlayerRecordSizeRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsGetPlayerRecordSizeRequest"), sizeof(FAccelByteModelsGetPlayerRecordSizeRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsGetPlayerRecordSizeRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsGetPlayerRecordSizeRequest>()
{
	return FAccelByteModelsGetPlayerRecordSizeRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsGetPlayerRecordSizeRequest(FAccelByteModelsGetPlayerRecordSizeRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsGetPlayerRecordSizeRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsGetPlayerRecordSizeRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsGetPlayerRecordSizeRequest()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsGetPlayerRecordSizeRequest>(FName(TEXT("AccelByteModelsGetPlayerRecordSizeRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsGetPlayerRecordSizeRequest;
	struct Z_Construct_UScriptStruct_FAccelByteModelsGetPlayerRecordSizeRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Keys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keys;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_User_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_User_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGetPlayerRecordSizeRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGetPlayerRecordSizeRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsGetPlayerRecordSizeRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsGetPlayerRecordSizeRequest>();
	}
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGetPlayerRecordSizeRequest_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGetPlayerRecordSizeRequest_Statics::NewProp_Keys_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsGetPlayerRecordSizeRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGetPlayerRecordSizeRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGetPlayerRecordSizeRequest_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsGetPlayerRecordSizeRequest, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGetPlayerRecordSizeRequest_Statics::NewProp_Keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGetPlayerRecordSizeRequest_Statics::NewProp_Keys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGetPlayerRecordSizeRequest_Statics::NewProp_User_id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsGetPlayerRecordSizeRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGetPlayerRecordSizeRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGetPlayerRecordSizeRequest_Statics::NewProp_User_id = { "User_id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsGetPlayerRecordSizeRequest, User_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGetPlayerRecordSizeRequest_Statics::NewProp_User_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGetPlayerRecordSizeRequest_Statics::NewProp_User_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsGetPlayerRecordSizeRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGetPlayerRecordSizeRequest_Statics::NewProp_Keys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGetPlayerRecordSizeRequest_Statics::NewProp_Keys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGetPlayerRecordSizeRequest_Statics::NewProp_User_id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsGetPlayerRecordSizeRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsGetPlayerRecordSizeRequest",
		sizeof(FAccelByteModelsGetPlayerRecordSizeRequest),
		alignof(FAccelByteModelsGetPlayerRecordSizeRequest),
		Z_Construct_UScriptStruct_FAccelByteModelsGetPlayerRecordSizeRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGetPlayerRecordSizeRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGetPlayerRecordSizeRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGetPlayerRecordSizeRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsGetPlayerRecordSizeRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsGetPlayerRecordSizeRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsGetPlayerRecordSizeRequest"), sizeof(FAccelByteModelsGetPlayerRecordSizeRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsGetPlayerRecordSizeRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsGetPlayerRecordSizeRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsGetPlayerRecordSizeRequest_Hash() { return 3013063780U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
