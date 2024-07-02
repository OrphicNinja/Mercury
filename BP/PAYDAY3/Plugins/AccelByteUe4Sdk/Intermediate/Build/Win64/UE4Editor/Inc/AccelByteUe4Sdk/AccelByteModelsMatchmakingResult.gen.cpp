// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsMatchmakingResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsMatchmakingResult() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsMatchingAlly();
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteMatchmakingSessionStatus();
// End Cross Module References
class UScriptStruct* FAccelByteModelsMatchmakingResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsMatchmakingResult"), sizeof(FAccelByteModelsMatchmakingResult), Get_Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsMatchmakingResult>()
{
	return FAccelByteModelsMatchmakingResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsMatchmakingResult(FAccelByteModelsMatchmakingResult::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsMatchmakingResult"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsMatchmakingResult
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsMatchmakingResult()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsMatchmakingResult>(FName(TEXT("AccelByteModelsMatchmakingResult")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsMatchmakingResult;
	struct Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Channel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Client_version_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Client_version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Game_mode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Game_mode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Joinable_MetaData[];
#endif
		static void NewProp_Joinable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Joinable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Match_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Match_id;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Matching_allies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Matching_allies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Matching_allies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Party_attributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Party_attributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Party_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Party_id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Queued_at_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Queued_at;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Region;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Server_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Server_name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMatchmakingResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsMatchmakingResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Channel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsMatchmakingResult" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMatchmakingResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsMatchmakingResult, Channel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Channel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Client_version_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsMatchmakingResult" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMatchmakingResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Client_version = { "Client_version", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsMatchmakingResult, Client_version), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Client_version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Client_version_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Game_mode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsMatchmakingResult" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMatchmakingResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Game_mode = { "Game_mode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsMatchmakingResult, Game_mode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Game_mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Game_mode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Joinable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsMatchmakingResult" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMatchmakingResult.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Joinable_SetBit(void* Obj)
	{
		((FAccelByteModelsMatchmakingResult*)Obj)->Joinable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Joinable = { "Joinable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsMatchmakingResult), &Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Joinable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Joinable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Joinable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Match_id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsMatchmakingResult" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMatchmakingResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Match_id = { "Match_id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsMatchmakingResult, Match_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Match_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Match_id_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Matching_allies_Inner = { "Matching_allies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsMatchingAlly, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Matching_allies_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsMatchmakingResult" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMatchmakingResult.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Matching_allies = { "Matching_allies", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsMatchmakingResult, Matching_allies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Matching_allies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Matching_allies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsMatchmakingResult" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMatchmakingResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsMatchmakingResult, Namespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Namespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Party_attributes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsMatchmakingResult" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMatchmakingResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Party_attributes = { "Party_attributes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsMatchmakingResult, Party_attributes), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Party_attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Party_attributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Party_id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsMatchmakingResult" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMatchmakingResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Party_id = { "Party_id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsMatchmakingResult, Party_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Party_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Party_id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Queued_at_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsMatchmakingResult" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMatchmakingResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Queued_at = { "Queued_at", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsMatchmakingResult, Queued_at), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Queued_at_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Queued_at_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Region_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsMatchmakingResult" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMatchmakingResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsMatchmakingResult, Region), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Region_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Server_name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsMatchmakingResult" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMatchmakingResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Server_name = { "Server_name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsMatchmakingResult, Server_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Server_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Server_name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsMatchmakingResult" },
		{ "ModuleRelativePath", "Public/AccelByteModelsMatchmakingResult.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsMatchmakingResult, Status), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteMatchmakingSessionStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Channel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Client_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Game_mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Joinable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Match_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Matching_allies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Matching_allies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Namespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Party_attributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Party_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Queued_at,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Region,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Server_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsMatchmakingResult",
		sizeof(FAccelByteModelsMatchmakingResult),
		alignof(FAccelByteModelsMatchmakingResult),
		Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsMatchmakingResult"), sizeof(FAccelByteModelsMatchmakingResult), Get_Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsMatchmakingResult_Hash() { return 3239796161U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
