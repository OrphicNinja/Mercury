// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/PartyJoinRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartyJoinRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FPartyJoinRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FPartyJoinRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FPartyJoinRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPartyJoinRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("PartyJoinRequest"), sizeof(FPartyJoinRequest), Get_Z_Construct_UScriptStruct_FPartyJoinRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FPartyJoinRequest>()
{
	return FPartyJoinRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPartyJoinRequest(FPartyJoinRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("PartyJoinRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFPartyJoinRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFPartyJoinRequest()
	{
		UScriptStruct::DeferCppStructOps<FPartyJoinRequest>(FName(TEXT("PartyJoinRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFPartyJoinRequest;
	struct Z_Construct_UScriptStruct_FPartyJoinRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_partyID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_partyID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_invitationToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_invitationToken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyJoinRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PartyJoinRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPartyJoinRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPartyJoinRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyJoinRequest_Statics::NewProp_partyID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PartyJoinRequest" },
		{ "ModuleRelativePath", "Public/PartyJoinRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPartyJoinRequest_Statics::NewProp_partyID = { "partyID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPartyJoinRequest, partyID), METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyJoinRequest_Statics::NewProp_partyID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyJoinRequest_Statics::NewProp_partyID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyJoinRequest_Statics::NewProp_invitationToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PartyJoinRequest" },
		{ "ModuleRelativePath", "Public/PartyJoinRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPartyJoinRequest_Statics::NewProp_invitationToken = { "invitationToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPartyJoinRequest, invitationToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyJoinRequest_Statics::NewProp_invitationToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyJoinRequest_Statics::NewProp_invitationToken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPartyJoinRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyJoinRequest_Statics::NewProp_partyID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyJoinRequest_Statics::NewProp_invitationToken,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPartyJoinRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"PartyJoinRequest",
		sizeof(FPartyJoinRequest),
		alignof(FPartyJoinRequest),
		Z_Construct_UScriptStruct_FPartyJoinRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyJoinRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyJoinRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyJoinRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPartyJoinRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPartyJoinRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PartyJoinRequest"), sizeof(FPartyJoinRequest), Get_Z_Construct_UScriptStruct_FPartyJoinRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPartyJoinRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPartyJoinRequest_Hash() { return 898503630U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
