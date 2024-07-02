// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsSyncThirdPartyFriendsResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsSyncThirdPartyFriendsResponse() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendsResponse();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsSyncThirdPartyFriendsResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendsResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendsResponse, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsSyncThirdPartyFriendsResponse"), sizeof(FAccelByteModelsSyncThirdPartyFriendsResponse), Get_Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendsResponse_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsSyncThirdPartyFriendsResponse>()
{
	return FAccelByteModelsSyncThirdPartyFriendsResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendsResponse(FAccelByteModelsSyncThirdPartyFriendsResponse::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsSyncThirdPartyFriendsResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSyncThirdPartyFriendsResponse
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSyncThirdPartyFriendsResponse()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsSyncThirdPartyFriendsResponse>(FName(TEXT("AccelByteModelsSyncThirdPartyFriendsResponse")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsSyncThirdPartyFriendsResponse;
	struct Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendsResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Detail_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Detail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSyncThirdPartyFriendsResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsSyncThirdPartyFriendsResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendsResponse_Statics::NewProp_Detail_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSyncThirdPartyFriendsResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSyncThirdPartyFriendsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendsResponse_Statics::NewProp_Detail = { "Detail", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSyncThirdPartyFriendsResponse, Detail), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendsResponse_Statics::NewProp_Detail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendsResponse_Statics::NewProp_Detail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendsResponse_Statics::NewProp_PlatformId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSyncThirdPartyFriendsResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSyncThirdPartyFriendsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendsResponse_Statics::NewProp_PlatformId = { "PlatformId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSyncThirdPartyFriendsResponse, PlatformId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendsResponse_Statics::NewProp_PlatformId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendsResponse_Statics::NewProp_PlatformId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendsResponse_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsSyncThirdPartyFriendsResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsSyncThirdPartyFriendsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendsResponse_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsSyncThirdPartyFriendsResponse, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendsResponse_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendsResponse_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendsResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendsResponse_Statics::NewProp_Detail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendsResponse_Statics::NewProp_PlatformId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendsResponse_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsSyncThirdPartyFriendsResponse",
		sizeof(FAccelByteModelsSyncThirdPartyFriendsResponse),
		alignof(FAccelByteModelsSyncThirdPartyFriendsResponse),
		Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendsResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendsResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsSyncThirdPartyFriendsResponse"), sizeof(FAccelByteModelsSyncThirdPartyFriendsResponse), Get_Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendsResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendsResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsSyncThirdPartyFriendsResponse_Hash() { return 2837191914U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
