// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsGetGroupMembersListByGroupIdRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsGetGroupMembersListByGroupIdRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsGetGroupMembersListByGroupIdRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsLimitOffsetRequest();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGroupListSortBy();
// End Cross Module References

static_assert(std::is_polymorphic<FAccelByteModelsGetGroupMembersListByGroupIdRequest>() == std::is_polymorphic<FAccelByteModelsLimitOffsetRequest>(), "USTRUCT FAccelByteModelsGetGroupMembersListByGroupIdRequest cannot be polymorphic unless super FAccelByteModelsLimitOffsetRequest is polymorphic");

class UScriptStruct* FAccelByteModelsGetGroupMembersListByGroupIdRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsGetGroupMembersListByGroupIdRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsGetGroupMembersListByGroupIdRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsGetGroupMembersListByGroupIdRequest"), sizeof(FAccelByteModelsGetGroupMembersListByGroupIdRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsGetGroupMembersListByGroupIdRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsGetGroupMembersListByGroupIdRequest>()
{
	return FAccelByteModelsGetGroupMembersListByGroupIdRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsGetGroupMembersListByGroupIdRequest(FAccelByteModelsGetGroupMembersListByGroupIdRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsGetGroupMembersListByGroupIdRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsGetGroupMembersListByGroupIdRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsGetGroupMembersListByGroupIdRequest()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsGetGroupMembersListByGroupIdRequest>(FName(TEXT("AccelByteModelsGetGroupMembersListByGroupIdRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsGetGroupMembersListByGroupIdRequest;
	struct Z_Construct_UScriptStruct_FAccelByteModelsGetGroupMembersListByGroupIdRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SortBy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SortBy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGetGroupMembersListByGroupIdRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGetGroupMembersListByGroupIdRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsGetGroupMembersListByGroupIdRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsGetGroupMembersListByGroupIdRequest>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGetGroupMembersListByGroupIdRequest_Statics::NewProp_SortBy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGetGroupMembersListByGroupIdRequest_Statics::NewProp_SortBy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsGetGroupMembersListByGroupIdRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGetGroupMembersListByGroupIdRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGetGroupMembersListByGroupIdRequest_Statics::NewProp_SortBy = { "SortBy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsGetGroupMembersListByGroupIdRequest, SortBy), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteGroupListSortBy, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGetGroupMembersListByGroupIdRequest_Statics::NewProp_SortBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGetGroupMembersListByGroupIdRequest_Statics::NewProp_SortBy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsGetGroupMembersListByGroupIdRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGetGroupMembersListByGroupIdRequest_Statics::NewProp_SortBy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGetGroupMembersListByGroupIdRequest_Statics::NewProp_SortBy,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsGetGroupMembersListByGroupIdRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		Z_Construct_UScriptStruct_FAccelByteModelsLimitOffsetRequest,
		&NewStructOps,
		"AccelByteModelsGetGroupMembersListByGroupIdRequest",
		sizeof(FAccelByteModelsGetGroupMembersListByGroupIdRequest),
		alignof(FAccelByteModelsGetGroupMembersListByGroupIdRequest),
		Z_Construct_UScriptStruct_FAccelByteModelsGetGroupMembersListByGroupIdRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGetGroupMembersListByGroupIdRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGetGroupMembersListByGroupIdRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGetGroupMembersListByGroupIdRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsGetGroupMembersListByGroupIdRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsGetGroupMembersListByGroupIdRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsGetGroupMembersListByGroupIdRequest"), sizeof(FAccelByteModelsGetGroupMembersListByGroupIdRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsGetGroupMembersListByGroupIdRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsGetGroupMembersListByGroupIdRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsGetGroupMembersListByGroupIdRequest_Hash() { return 4069269175U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
