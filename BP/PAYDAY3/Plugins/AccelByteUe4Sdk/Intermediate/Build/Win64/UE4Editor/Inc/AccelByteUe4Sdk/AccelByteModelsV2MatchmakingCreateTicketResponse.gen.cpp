// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsV2MatchmakingCreateTicketResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsV2MatchmakingCreateTicketResponse() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingCreateTicketResponse();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsV2MatchmakingCreateTicketResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingCreateTicketResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingCreateTicketResponse, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsV2MatchmakingCreateTicketResponse"), sizeof(FAccelByteModelsV2MatchmakingCreateTicketResponse), Get_Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingCreateTicketResponse_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsV2MatchmakingCreateTicketResponse>()
{
	return FAccelByteModelsV2MatchmakingCreateTicketResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsV2MatchmakingCreateTicketResponse(FAccelByteModelsV2MatchmakingCreateTicketResponse::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsV2MatchmakingCreateTicketResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2MatchmakingCreateTicketResponse
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2MatchmakingCreateTicketResponse()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsV2MatchmakingCreateTicketResponse>(FName(TEXT("AccelByteModelsV2MatchmakingCreateTicketResponse")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2MatchmakingCreateTicketResponse;
	struct Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingCreateTicketResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchTicketId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchTicketId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueueTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueueTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingCreateTicketResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2MatchmakingCreateTicketResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingCreateTicketResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsV2MatchmakingCreateTicketResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingCreateTicketResponse_Statics::NewProp_MatchTicketId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2MatchmakingCreateTicketResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2MatchmakingCreateTicketResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingCreateTicketResponse_Statics::NewProp_MatchTicketId = { "MatchTicketId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2MatchmakingCreateTicketResponse, MatchTicketId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingCreateTicketResponse_Statics::NewProp_MatchTicketId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingCreateTicketResponse_Statics::NewProp_MatchTicketId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingCreateTicketResponse_Statics::NewProp_QueueTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2MatchmakingCreateTicketResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2MatchmakingCreateTicketResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingCreateTicketResponse_Statics::NewProp_QueueTime = { "QueueTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2MatchmakingCreateTicketResponse, QueueTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingCreateTicketResponse_Statics::NewProp_QueueTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingCreateTicketResponse_Statics::NewProp_QueueTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingCreateTicketResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingCreateTicketResponse_Statics::NewProp_MatchTicketId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingCreateTicketResponse_Statics::NewProp_QueueTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingCreateTicketResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsV2MatchmakingCreateTicketResponse",
		sizeof(FAccelByteModelsV2MatchmakingCreateTicketResponse),
		alignof(FAccelByteModelsV2MatchmakingCreateTicketResponse),
		Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingCreateTicketResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingCreateTicketResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingCreateTicketResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingCreateTicketResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingCreateTicketResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingCreateTicketResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsV2MatchmakingCreateTicketResponse"), sizeof(FAccelByteModelsV2MatchmakingCreateTicketResponse), Get_Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingCreateTicketResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingCreateTicketResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingCreateTicketResponse_Hash() { return 870696054U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
