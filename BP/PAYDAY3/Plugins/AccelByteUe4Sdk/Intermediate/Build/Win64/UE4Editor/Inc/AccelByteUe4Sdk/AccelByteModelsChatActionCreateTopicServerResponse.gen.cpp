// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsChatActionCreateTopicServerResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsChatActionCreateTopicServerResponse() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_ETopicType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FAccelByteModelsChatActionCreateTopicServerResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsChatActionCreateTopicServerResponse"), sizeof(FAccelByteModelsChatActionCreateTopicServerResponse), Get_Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsChatActionCreateTopicServerResponse>()
{
	return FAccelByteModelsChatActionCreateTopicServerResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse(FAccelByteModelsChatActionCreateTopicServerResponse::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsChatActionCreateTopicServerResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsChatActionCreateTopicServerResponse
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsChatActionCreateTopicServerResponse()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsChatActionCreateTopicServerResponse>(FName(TEXT("AccelByteModelsChatActionCreateTopicServerResponse")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsChatActionCreateTopicServerResponse;
	struct Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopicId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TopicId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsJoinable_MetaData[];
#endif
		static void NewProp_IsJoinable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsJoinable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsChannel_MetaData[];
#endif
		static void NewProp_IsChannel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CreatedAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatedBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CreatedBy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsChatActionCreateTopicServerResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsChatActionCreateTopicServerResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsChatActionCreateTopicServerResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsChatActionCreateTopicServerResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsChatActionCreateTopicServerResponse, Namespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_Namespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_TopicId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsChatActionCreateTopicServerResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsChatActionCreateTopicServerResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_TopicId = { "TopicId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsChatActionCreateTopicServerResponse, TopicId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_TopicId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_TopicId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsChatActionCreateTopicServerResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsChatActionCreateTopicServerResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsChatActionCreateTopicServerResponse, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsChatActionCreateTopicServerResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsChatActionCreateTopicServerResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsChatActionCreateTopicServerResponse, Type), Z_Construct_UEnum_AccelByteUe4Sdk_ETopicType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_IsJoinable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsChatActionCreateTopicServerResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsChatActionCreateTopicServerResponse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_IsJoinable_SetBit(void* Obj)
	{
		((FAccelByteModelsChatActionCreateTopicServerResponse*)Obj)->IsJoinable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_IsJoinable = { "IsJoinable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsChatActionCreateTopicServerResponse), &Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_IsJoinable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_IsJoinable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_IsJoinable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_IsChannel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsChatActionCreateTopicServerResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsChatActionCreateTopicServerResponse.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_IsChannel_SetBit(void* Obj)
	{
		((FAccelByteModelsChatActionCreateTopicServerResponse*)Obj)->IsChannel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_IsChannel = { "IsChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsChatActionCreateTopicServerResponse), &Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_IsChannel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_IsChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_IsChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_CreatedAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsChatActionCreateTopicServerResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsChatActionCreateTopicServerResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_CreatedAt = { "CreatedAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsChatActionCreateTopicServerResponse, CreatedAt), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_CreatedAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_CreatedAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_CreatedBy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsChatActionCreateTopicServerResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsChatActionCreateTopicServerResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_CreatedBy = { "CreatedBy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsChatActionCreateTopicServerResponse, CreatedBy), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_CreatedBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_CreatedBy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_Namespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_TopicId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_IsJoinable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_IsChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_CreatedAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::NewProp_CreatedBy,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsChatActionCreateTopicServerResponse",
		sizeof(FAccelByteModelsChatActionCreateTopicServerResponse),
		alignof(FAccelByteModelsChatActionCreateTopicServerResponse),
		Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsChatActionCreateTopicServerResponse"), sizeof(FAccelByteModelsChatActionCreateTopicServerResponse), Get_Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsChatActionCreateTopicServerResponse_Hash() { return 3170704587U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
