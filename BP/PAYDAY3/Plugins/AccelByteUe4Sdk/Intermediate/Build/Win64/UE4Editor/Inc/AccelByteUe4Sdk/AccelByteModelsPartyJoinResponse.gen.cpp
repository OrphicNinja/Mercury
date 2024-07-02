// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsPartyJoinResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsPartyJoinResponse() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsLobbyBaseResponse();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsPartyJoinResponse>() == std::is_polymorphic<FAccelByteModelsLobbyBaseResponse>(), "USTRUCT FAccelByteModelsPartyJoinResponse cannot be polymorphic unless super FAccelByteModelsLobbyBaseResponse is polymorphic");

class UScriptStruct* FAccelByteModelsPartyJoinResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsPartyJoinResponse"), sizeof(FAccelByteModelsPartyJoinResponse), Get_Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsPartyJoinResponse>()
{
	return FAccelByteModelsPartyJoinResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsPartyJoinResponse(FAccelByteModelsPartyJoinResponse::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsPartyJoinResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPartyJoinResponse
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPartyJoinResponse()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsPartyJoinResponse>(FName(TEXT("AccelByteModelsPartyJoinResponse")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsPartyJoinResponse;
	struct Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PartyId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Leader_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Leader;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Members_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Members_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Members;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Invitees_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invitees_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Invitees;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvitationToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InvitationToken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPartyJoinResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsPartyJoinResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewProp_PartyId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPartyJoinResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPartyJoinResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewProp_PartyId = { "PartyId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPartyJoinResponse, PartyId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewProp_PartyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewProp_PartyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewProp_LeaderId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPartyJoinResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPartyJoinResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewProp_LeaderId = { "LeaderId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPartyJoinResponse, LeaderId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewProp_LeaderId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewProp_LeaderId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewProp_Leader_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPartyJoinResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPartyJoinResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewProp_Leader = { "Leader", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPartyJoinResponse, Leader), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewProp_Leader_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewProp_Leader_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewProp_Members_Inner = { "Members", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewProp_Members_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPartyJoinResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPartyJoinResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewProp_Members = { "Members", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPartyJoinResponse, Members), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewProp_Members_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewProp_Members_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewProp_Invitees_Inner = { "Invitees", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewProp_Invitees_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPartyJoinResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPartyJoinResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewProp_Invitees = { "Invitees", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPartyJoinResponse, Invitees), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewProp_Invitees_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewProp_Invitees_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewProp_InvitationToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsPartyJoinResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsPartyJoinResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewProp_InvitationToken = { "InvitationToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsPartyJoinResponse, InvitationToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewProp_InvitationToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewProp_InvitationToken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewProp_PartyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewProp_LeaderId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewProp_Leader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewProp_Members_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewProp_Members,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewProp_Invitees_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewProp_Invitees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::NewProp_InvitationToken,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsLobbyBaseResponse,
		&NewStructOps,
		"AccelByteModelsPartyJoinResponse",
		sizeof(FAccelByteModelsPartyJoinResponse),
		alignof(FAccelByteModelsPartyJoinResponse),
		Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsPartyJoinResponse"), sizeof(FAccelByteModelsPartyJoinResponse), Get_Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsPartyJoinResponse_Hash() { return 2806468158U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
