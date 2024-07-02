// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsV2MatchmakingGetTicketDetailsResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsV2MatchmakingGetTicketDetailsResponse() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingGetTicketDetailsResponse();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsV2MatchmakingGetTicketDetailsResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingGetTicketDetailsResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingGetTicketDetailsResponse, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsV2MatchmakingGetTicketDetailsResponse"), sizeof(FAccelByteModelsV2MatchmakingGetTicketDetailsResponse), Get_Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingGetTicketDetailsResponse_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsV2MatchmakingGetTicketDetailsResponse>()
{
	return FAccelByteModelsV2MatchmakingGetTicketDetailsResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsV2MatchmakingGetTicketDetailsResponse(FAccelByteModelsV2MatchmakingGetTicketDetailsResponse::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsV2MatchmakingGetTicketDetailsResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2MatchmakingGetTicketDetailsResponse
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2MatchmakingGetTicketDetailsResponse()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsV2MatchmakingGetTicketDetailsResponse>(FName(TEXT("AccelByteModelsV2MatchmakingGetTicketDetailsResponse")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2MatchmakingGetTicketDetailsResponse;
	struct Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingGetTicketDetailsResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchFound_MetaData[];
#endif
		static void NewProp_MatchFound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MatchFound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingGetTicketDetailsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2MatchmakingGetTicketDetailsResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingGetTicketDetailsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsV2MatchmakingGetTicketDetailsResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingGetTicketDetailsResponse_Statics::NewProp_MatchFound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2MatchmakingGetTicketDetailsResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2MatchmakingGetTicketDetailsResponse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingGetTicketDetailsResponse_Statics::NewProp_MatchFound_SetBit(void* Obj)
	{
		((FAccelByteModelsV2MatchmakingGetTicketDetailsResponse*)Obj)->MatchFound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingGetTicketDetailsResponse_Statics::NewProp_MatchFound = { "MatchFound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsV2MatchmakingGetTicketDetailsResponse), &Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingGetTicketDetailsResponse_Statics::NewProp_MatchFound_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingGetTicketDetailsResponse_Statics::NewProp_MatchFound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingGetTicketDetailsResponse_Statics::NewProp_MatchFound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingGetTicketDetailsResponse_Statics::NewProp_SessionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2MatchmakingGetTicketDetailsResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2MatchmakingGetTicketDetailsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingGetTicketDetailsResponse_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2MatchmakingGetTicketDetailsResponse, SessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingGetTicketDetailsResponse_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingGetTicketDetailsResponse_Statics::NewProp_SessionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingGetTicketDetailsResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingGetTicketDetailsResponse_Statics::NewProp_MatchFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingGetTicketDetailsResponse_Statics::NewProp_SessionId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingGetTicketDetailsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsV2MatchmakingGetTicketDetailsResponse",
		sizeof(FAccelByteModelsV2MatchmakingGetTicketDetailsResponse),
		alignof(FAccelByteModelsV2MatchmakingGetTicketDetailsResponse),
		Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingGetTicketDetailsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingGetTicketDetailsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingGetTicketDetailsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingGetTicketDetailsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingGetTicketDetailsResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingGetTicketDetailsResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsV2MatchmakingGetTicketDetailsResponse"), sizeof(FAccelByteModelsV2MatchmakingGetTicketDetailsResponse), Get_Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingGetTicketDetailsResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingGetTicketDetailsResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2MatchmakingGetTicketDetailsResponse_Hash() { return 829512654U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
