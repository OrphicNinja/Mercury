// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteGetSystemMessageStatsResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteGetSystemMessageStatsResponse() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FAccelByteGetSystemMessageStatsResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteGetSystemMessageStatsResponse"), sizeof(FAccelByteGetSystemMessageStatsResponse), Get_Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteGetSystemMessageStatsResponse>()
{
	return FAccelByteGetSystemMessageStatsResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse(FAccelByteGetSystemMessageStatsResponse::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteGetSystemMessageStatsResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteGetSystemMessageStatsResponse
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteGetSystemMessageStatsResponse()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteGetSystemMessageStatsResponse>(FName(TEXT("AccelByteGetSystemMessageStatsResponse")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteGetSystemMessageStatsResponse;
	struct Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldestUnread_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldestUnread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Unread_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Unread;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteGetSystemMessageStatsResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteGetSystemMessageStatsResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Statics::NewProp_OldestUnread_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteGetSystemMessageStatsResponse" },
		{ "ModuleRelativePath", "Public/AccelByteGetSystemMessageStatsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Statics::NewProp_OldestUnread = { "OldestUnread", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteGetSystemMessageStatsResponse, OldestUnread), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Statics::NewProp_OldestUnread_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Statics::NewProp_OldestUnread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Statics::NewProp_Unread_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteGetSystemMessageStatsResponse" },
		{ "ModuleRelativePath", "Public/AccelByteGetSystemMessageStatsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Statics::NewProp_Unread = { "Unread", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteGetSystemMessageStatsResponse, Unread), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Statics::NewProp_Unread_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Statics::NewProp_Unread_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Statics::NewProp_OldestUnread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Statics::NewProp_Unread,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteGetSystemMessageStatsResponse",
		sizeof(FAccelByteGetSystemMessageStatsResponse),
		alignof(FAccelByteGetSystemMessageStatsResponse),
		Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteGetSystemMessageStatsResponse"), sizeof(FAccelByteGetSystemMessageStatsResponse), Get_Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteGetSystemMessageStatsResponse_Hash() { return 2682939193U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
