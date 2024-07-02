// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsServerCreateSessionRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsServerCreateSessionRequest() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsMatchingAlly();
// End Cross Module References
class UScriptStruct* FAccelByteModelsServerCreateSessionRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsServerCreateSessionRequest"), sizeof(FAccelByteModelsServerCreateSessionRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsServerCreateSessionRequest>()
{
	return FAccelByteModelsServerCreateSessionRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest(FAccelByteModelsServerCreateSessionRequest::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsServerCreateSessionRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsServerCreateSessionRequest
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsServerCreateSessionRequest()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsServerCreateSessionRequest>(FName(TEXT("AccelByteModelsServerCreateSessionRequest")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsServerCreateSessionRequest;
	struct Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Client_version_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Client_version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Configuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Configuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Deployment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Deployment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Game_mode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Game_mode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pod_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Pod_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Region;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Session_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Session_id;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Matching_allies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Matching_allies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Matching_allies;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsServerCreateSessionRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsServerCreateSessionRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Client_version_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsServerCreateSessionRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsServerCreateSessionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Client_version = { "Client_version", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsServerCreateSessionRequest, Client_version), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Client_version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Client_version_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Configuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsServerCreateSessionRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsServerCreateSessionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsServerCreateSessionRequest, Configuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Configuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Configuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Deployment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsServerCreateSessionRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsServerCreateSessionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Deployment = { "Deployment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsServerCreateSessionRequest, Deployment), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Deployment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Deployment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Game_mode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsServerCreateSessionRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsServerCreateSessionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Game_mode = { "Game_mode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsServerCreateSessionRequest, Game_mode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Game_mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Game_mode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsServerCreateSessionRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsServerCreateSessionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsServerCreateSessionRequest, Namespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Namespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Pod_name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsServerCreateSessionRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsServerCreateSessionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Pod_name = { "Pod_name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsServerCreateSessionRequest, Pod_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Pod_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Pod_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Region_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsServerCreateSessionRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsServerCreateSessionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsServerCreateSessionRequest, Region), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Region_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Session_id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsServerCreateSessionRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsServerCreateSessionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Session_id = { "Session_id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsServerCreateSessionRequest, Session_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Session_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Session_id_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Matching_allies_Inner = { "Matching_allies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsMatchingAlly, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Matching_allies_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsServerCreateSessionRequest" },
		{ "ModuleRelativePath", "Public/AccelByteModelsServerCreateSessionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Matching_allies = { "Matching_allies", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsServerCreateSessionRequest, Matching_allies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Matching_allies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Matching_allies_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Client_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Configuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Deployment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Game_mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Namespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Pod_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Region,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Session_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Matching_allies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::NewProp_Matching_allies,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsServerCreateSessionRequest",
		sizeof(FAccelByteModelsServerCreateSessionRequest),
		alignof(FAccelByteModelsServerCreateSessionRequest),
		Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsServerCreateSessionRequest"), sizeof(FAccelByteModelsServerCreateSessionRequest), Get_Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsServerCreateSessionRequest_Hash() { return 677414007U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
