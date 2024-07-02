// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsV2QueryPartiesRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsV2QueryPartiesRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteV2SessionMemberStatus();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteV2SessionJoinability();
// End Cross Module References
class UScriptStruct* FAccelByteModelsV2QueryPartiesRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsV2QueryPartiesRequest"), sizeof(FAccelByteModelsV2QueryPartiesRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsV2QueryPartiesRequest>()
{
	return FAccelByteModelsV2QueryPartiesRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest(FAccelByteModelsV2QueryPartiesRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsV2QueryPartiesRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2QueryPartiesRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2QueryPartiesRequest()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsV2QueryPartiesRequest>(FName(TEXT("AccelByteModelsV2QueryPartiesRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2QueryPartiesRequest;
	struct Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AttributeKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemberID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemberStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemberStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_JoinType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_JoinType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OrderBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Order_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Order;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2QueryPartiesRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsV2QueryPartiesRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_AttributeKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2QueryPartiesRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2QueryPartiesRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_AttributeKey = { "AttributeKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2QueryPartiesRequest, AttributeKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_AttributeKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_AttributeKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2QueryPartiesRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2QueryPartiesRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2QueryPartiesRequest, AttributeValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_AttributeValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_LeaderID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2QueryPartiesRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2QueryPartiesRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_LeaderID = { "LeaderID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2QueryPartiesRequest, LeaderID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_LeaderID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_LeaderID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_MemberID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2QueryPartiesRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2QueryPartiesRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_MemberID = { "MemberID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2QueryPartiesRequest, MemberID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_MemberID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_MemberID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_MemberStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_MemberStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2QueryPartiesRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2QueryPartiesRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_MemberStatus = { "MemberStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2QueryPartiesRequest, MemberStatus), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteV2SessionMemberStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_MemberStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_MemberStatus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_JoinType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_JoinType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2QueryPartiesRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2QueryPartiesRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_JoinType = { "JoinType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2QueryPartiesRequest, JoinType), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteV2SessionJoinability, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_JoinType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_JoinType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_OrderBy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2QueryPartiesRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2QueryPartiesRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_OrderBy = { "OrderBy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2QueryPartiesRequest, OrderBy), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_OrderBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_OrderBy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_Order_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2QueryPartiesRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2QueryPartiesRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2QueryPartiesRequest, Order), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_Order_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_Order_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_AttributeKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_AttributeValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_LeaderID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_MemberID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_MemberStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_MemberStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_JoinType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_JoinType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_OrderBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::NewProp_Order,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsV2QueryPartiesRequest",
		sizeof(FAccelByteModelsV2QueryPartiesRequest),
		alignof(FAccelByteModelsV2QueryPartiesRequest),
		Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsV2QueryPartiesRequest"), sizeof(FAccelByteModelsV2QueryPartiesRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2QueryPartiesRequest_Hash() { return 475342455U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
