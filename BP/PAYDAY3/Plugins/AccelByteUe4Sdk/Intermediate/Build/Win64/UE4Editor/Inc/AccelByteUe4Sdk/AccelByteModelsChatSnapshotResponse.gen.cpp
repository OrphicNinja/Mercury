// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsChatSnapshotResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsChatSnapshotResponse() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsSnapshotMessage();
// End Cross Module References
class UScriptStruct* FAccelByteModelsChatSnapshotResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsChatSnapshotResponse"), sizeof(FAccelByteModelsChatSnapshotResponse), Get_Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsChatSnapshotResponse>()
{
	return FAccelByteModelsChatSnapshotResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsChatSnapshotResponse(FAccelByteModelsChatSnapshotResponse::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsChatSnapshotResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsChatSnapshotResponse
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsChatSnapshotResponse()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsChatSnapshotResponse>(FName(TEXT("AccelByteModelsChatSnapshotResponse")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsChatSnapshotResponse;
	struct Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChatId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CreatedAt;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JoinedTopics_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinedTopics_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_JoinedTopics;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Messages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Messages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Messages;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SenderId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TicketId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TicketId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopicId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TopicId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsChatSnapshotResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsChatSnapshotResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_ChatId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsChatSnapshotResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsChatSnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_ChatId = { "ChatId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsChatSnapshotResponse, ChatId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_ChatId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_ChatId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_CreatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsChatSnapshotResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsChatSnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_CreatedAt = { "CreatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsChatSnapshotResponse, CreatedAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_CreatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_CreatedAt_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_JoinedTopics_Inner = { "JoinedTopics", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_JoinedTopics_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsChatSnapshotResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsChatSnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_JoinedTopics = { "JoinedTopics", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsChatSnapshotResponse, JoinedTopics), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_JoinedTopics_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_JoinedTopics_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_Messages_Inner = { "Messages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsSnapshotMessage, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_Messages_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsChatSnapshotResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsChatSnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_Messages = { "Messages", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsChatSnapshotResponse, Messages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_Messages_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_Messages_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsChatSnapshotResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsChatSnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsChatSnapshotResponse, Namespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_Namespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_SenderId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsChatSnapshotResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsChatSnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_SenderId = { "SenderId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsChatSnapshotResponse, SenderId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_SenderId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_SenderId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_TicketId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsChatSnapshotResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsChatSnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_TicketId = { "TicketId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsChatSnapshotResponse, TicketId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_TicketId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_TicketId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_TopicId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsChatSnapshotResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsChatSnapshotResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_TopicId = { "TopicId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsChatSnapshotResponse, TopicId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_TopicId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_TopicId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_ChatId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_CreatedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_JoinedTopics_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_JoinedTopics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_Messages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_Messages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_Namespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_SenderId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_TicketId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::NewProp_TopicId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsChatSnapshotResponse",
		sizeof(FAccelByteModelsChatSnapshotResponse),
		alignof(FAccelByteModelsChatSnapshotResponse),
		Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsChatSnapshotResponse"), sizeof(FAccelByteModelsChatSnapshotResponse), Get_Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsChatSnapshotResponse_Hash() { return 941359764U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
