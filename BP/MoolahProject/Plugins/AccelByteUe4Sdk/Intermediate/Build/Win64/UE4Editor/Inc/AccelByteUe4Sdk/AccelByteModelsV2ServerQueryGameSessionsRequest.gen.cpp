// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsV2ServerQueryGameSessionsRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsV2ServerQueryGameSessionsRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteV2GameSessionDsStatus();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteV2SessionJoinability();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FAccelByteModelsV2ServerQueryGameSessionsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsV2ServerQueryGameSessionsRequest"), sizeof(FAccelByteModelsV2ServerQueryGameSessionsRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsV2ServerQueryGameSessionsRequest>()
{
	return FAccelByteModelsV2ServerQueryGameSessionsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest(FAccelByteModelsV2ServerQueryGameSessionsRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsV2ServerQueryGameSessionsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2ServerQueryGameSessionsRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2ServerQueryGameSessionsRequest()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsV2ServerQueryGameSessionsRequest>(FName(TEXT("AccelByteModelsV2ServerQueryGameSessionsRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2ServerQueryGameSessionsRequest;
	struct Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StatusV2_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusV2_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StatusV2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Joinability_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Joinability_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Joinability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemberID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfigurationName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConfigurationName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FromTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ToTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DsPodName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DsPodName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSoftDeleted_MetaData[];
#endif
		static void NewProp_IsSoftDeleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSoftDeleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPersistent_MetaData[];
#endif
		static void NewProp_IsPersistent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPersistent;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2ServerQueryGameSessionsRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsV2ServerQueryGameSessionsRequest>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2ServerQueryGameSessionsRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2ServerQueryGameSessionsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2ServerQueryGameSessionsRequest, Status), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteV2GameSessionDsStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_StatusV2_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_StatusV2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2ServerQueryGameSessionsRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2ServerQueryGameSessionsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_StatusV2 = { "StatusV2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2ServerQueryGameSessionsRequest, StatusV2), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteV2GameSessionDsStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_StatusV2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_StatusV2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_SessionID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2ServerQueryGameSessionsRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2ServerQueryGameSessionsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2ServerQueryGameSessionsRequest, SessionID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_SessionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_SessionID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_MatchPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2ServerQueryGameSessionsRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2ServerQueryGameSessionsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_MatchPool = { "MatchPool", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2ServerQueryGameSessionsRequest, MatchPool), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_MatchPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_MatchPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_GameMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2ServerQueryGameSessionsRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2ServerQueryGameSessionsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2ServerQueryGameSessionsRequest, GameMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_GameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_GameMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_Joinability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_Joinability_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2ServerQueryGameSessionsRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2ServerQueryGameSessionsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_Joinability = { "Joinability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2ServerQueryGameSessionsRequest, Joinability), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteV2SessionJoinability, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_Joinability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_Joinability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_MemberID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2ServerQueryGameSessionsRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2ServerQueryGameSessionsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_MemberID = { "MemberID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2ServerQueryGameSessionsRequest, MemberID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_MemberID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_MemberID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_ConfigurationName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2ServerQueryGameSessionsRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2ServerQueryGameSessionsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_ConfigurationName = { "ConfigurationName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2ServerQueryGameSessionsRequest, ConfigurationName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_ConfigurationName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_ConfigurationName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_FromTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2ServerQueryGameSessionsRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2ServerQueryGameSessionsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_FromTime = { "FromTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2ServerQueryGameSessionsRequest, FromTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_FromTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_FromTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_ToTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2ServerQueryGameSessionsRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2ServerQueryGameSessionsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_ToTime = { "ToTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2ServerQueryGameSessionsRequest, ToTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_ToTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_ToTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_DsPodName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2ServerQueryGameSessionsRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2ServerQueryGameSessionsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_DsPodName = { "DsPodName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2ServerQueryGameSessionsRequest, DsPodName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_DsPodName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_DsPodName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_IsSoftDeleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2ServerQueryGameSessionsRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2ServerQueryGameSessionsRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_IsSoftDeleted_SetBit(void* Obj)
	{
		((FAccelByteModelsV2ServerQueryGameSessionsRequest*)Obj)->IsSoftDeleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_IsSoftDeleted = { "IsSoftDeleted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsV2ServerQueryGameSessionsRequest), &Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_IsSoftDeleted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_IsSoftDeleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_IsSoftDeleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_IsPersistent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2ServerQueryGameSessionsRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2ServerQueryGameSessionsRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_IsPersistent_SetBit(void* Obj)
	{
		((FAccelByteModelsV2ServerQueryGameSessionsRequest*)Obj)->IsPersistent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_IsPersistent = { "IsPersistent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsV2ServerQueryGameSessionsRequest), &Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_IsPersistent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_IsPersistent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_IsPersistent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_OrderBy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2ServerQueryGameSessionsRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2ServerQueryGameSessionsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_OrderBy = { "OrderBy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2ServerQueryGameSessionsRequest, OrderBy), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_OrderBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_OrderBy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_Order_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2ServerQueryGameSessionsRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2ServerQueryGameSessionsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2ServerQueryGameSessionsRequest, Order), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_Order_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_Order_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_StatusV2_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_StatusV2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_SessionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_MatchPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_GameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_Joinability_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_Joinability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_MemberID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_ConfigurationName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_FromTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_ToTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_DsPodName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_IsSoftDeleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_IsPersistent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_OrderBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::NewProp_Order,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsV2ServerQueryGameSessionsRequest",
		sizeof(FAccelByteModelsV2ServerQueryGameSessionsRequest),
		alignof(FAccelByteModelsV2ServerQueryGameSessionsRequest),
		Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsV2ServerQueryGameSessionsRequest"), sizeof(FAccelByteModelsV2ServerQueryGameSessionsRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2ServerQueryGameSessionsRequest_Hash() { return 2575012357U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
