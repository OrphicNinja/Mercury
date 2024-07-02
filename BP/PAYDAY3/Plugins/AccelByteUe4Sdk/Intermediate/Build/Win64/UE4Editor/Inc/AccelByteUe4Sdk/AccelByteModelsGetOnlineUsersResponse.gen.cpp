// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsGetOnlineUsersResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsGetOnlineUsersResponse() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAvailability();
// End Cross Module References
class UScriptStruct* FAccelByteModelsGetOnlineUsersResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsGetOnlineUsersResponse"), sizeof(FAccelByteModelsGetOnlineUsersResponse), Get_Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsGetOnlineUsersResponse>()
{
	return FAccelByteModelsGetOnlineUsersResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse(FAccelByteModelsGetOnlineUsersResponse::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsGetOnlineUsersResponse"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsGetOnlineUsersResponse
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsGetOnlineUsersResponse()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsGetOnlineUsersResponse>(FName(TEXT("AccelByteModelsGetOnlineUsersResponse")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsGetOnlineUsersResponse;
	struct Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Code;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_friendsId_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_friendsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_friendsId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_availability_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_availability_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_availability_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_availability;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_activity_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_activity_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_activity;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_lastSeenAt_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lastSeenAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_lastSeenAt;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Platform_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Platform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGetOnlineUsersResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsGetOnlineUsersResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_Code_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsGetOnlineUsersResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGetOnlineUsersResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsGetOnlineUsersResponse, Code), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_Code_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_Code_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsGetOnlineUsersResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGetOnlineUsersResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsGetOnlineUsersResponse, type), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsGetOnlineUsersResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGetOnlineUsersResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsGetOnlineUsersResponse, id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_id_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_friendsId_Inner = { "friendsId", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_friendsId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsGetOnlineUsersResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGetOnlineUsersResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_friendsId = { "friendsId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsGetOnlineUsersResponse, friendsId), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_friendsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_friendsId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_availability_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_availability_Inner = { "availability", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_AccelByteUe4Sdk_EAvailability, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_availability_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsGetOnlineUsersResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGetOnlineUsersResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_availability = { "availability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsGetOnlineUsersResponse, availability), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_availability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_availability_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_activity_Inner = { "activity", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_activity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsGetOnlineUsersResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGetOnlineUsersResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_activity = { "activity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsGetOnlineUsersResponse, activity), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_activity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_activity_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_lastSeenAt_Inner = { "lastSeenAt", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_lastSeenAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsGetOnlineUsersResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGetOnlineUsersResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_lastSeenAt = { "lastSeenAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsGetOnlineUsersResponse, lastSeenAt), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_lastSeenAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_lastSeenAt_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_Platform_Inner = { "Platform", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_Platform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsGetOnlineUsersResponse" },
		{ "ModuleRelativePath", "Public/AccelByteModelsGetOnlineUsersResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsGetOnlineUsersResponse, Platform), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_Platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_Platform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_Code,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_friendsId_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_friendsId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_availability_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_availability_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_availability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_activity_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_activity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_lastSeenAt_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_lastSeenAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_Platform_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::NewProp_Platform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsGetOnlineUsersResponse",
		sizeof(FAccelByteModelsGetOnlineUsersResponse),
		alignof(FAccelByteModelsGetOnlineUsersResponse),
		Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsGetOnlineUsersResponse"), sizeof(FAccelByteModelsGetOnlineUsersResponse), Get_Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsGetOnlineUsersResponse_Hash() { return 3138001787U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
