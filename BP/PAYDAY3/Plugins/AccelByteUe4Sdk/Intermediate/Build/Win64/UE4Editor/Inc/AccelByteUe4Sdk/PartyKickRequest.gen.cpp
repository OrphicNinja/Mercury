// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/PartyKickRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartyKickRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FPartyKickRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FPartyKickRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FPartyKickRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPartyKickRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("PartyKickRequest"), sizeof(FPartyKickRequest), Get_Z_Construct_UScriptStruct_FPartyKickRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FPartyKickRequest>()
{
	return FPartyKickRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPartyKickRequest(FPartyKickRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("PartyKickRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFPartyKickRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFPartyKickRequest()
	{
		UScriptStruct::DeferCppStructOps<FPartyKickRequest>(FName(TEXT("PartyKickRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFPartyKickRequest;
	struct Z_Construct_UScriptStruct_FPartyKickRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_memberID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_memberID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyKickRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PartyKickRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPartyKickRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPartyKickRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyKickRequest_Statics::NewProp_memberID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PartyKickRequest" },
		{ "ModuleRelativePath", "Public/PartyKickRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPartyKickRequest_Statics::NewProp_memberID = { "memberID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPartyKickRequest, memberID), METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyKickRequest_Statics::NewProp_memberID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyKickRequest_Statics::NewProp_memberID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPartyKickRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyKickRequest_Statics::NewProp_memberID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPartyKickRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"PartyKickRequest",
		sizeof(FPartyKickRequest),
		alignof(FPartyKickRequest),
		Z_Construct_UScriptStruct_FPartyKickRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyKickRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyKickRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyKickRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPartyKickRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPartyKickRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PartyKickRequest"), sizeof(FPartyKickRequest), Get_Z_Construct_UScriptStruct_FPartyKickRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPartyKickRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPartyKickRequest_Hash() { return 3619782422U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
