// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsDSMServer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsDSMServer() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsDSMServer();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsServerStatusHistory();
// End Cross Module References
class UScriptStruct* FAccelByteModelsDSMServer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsDSMServer, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsDSMServer"), sizeof(FAccelByteModelsDSMServer), Get_Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsDSMServer>()
{
	return FAccelByteModelsDSMServer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsDSMServer(FAccelByteModelsDSMServer::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsDSMServer"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsDSMServer
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsDSMServer()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsDSMServer>(FName(TEXT("AccelByteModelsDSMServer")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsDSMServer;
	struct Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Custom_attribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Custom_attribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Deployment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Deployment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Game_version_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Game_version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_version_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Image_version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Ip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Params;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pod_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Pod_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ports_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Ports_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ports_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Ports;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Protocol_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Protocol;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Provider_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Provider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Region;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Session_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Session_id;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Status_history_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_history_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Status_history;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsDSMServer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsDSMServer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Custom_attribute_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsDSMServer" },
		{ "ModuleRelativePath", "Public/AccelByteModelsDSMServer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Custom_attribute = { "Custom_attribute", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsDSMServer, Custom_attribute), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Custom_attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Custom_attribute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Deployment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsDSMServer" },
		{ "ModuleRelativePath", "Public/AccelByteModelsDSMServer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Deployment = { "Deployment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsDSMServer, Deployment), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Deployment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Deployment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Game_version_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsDSMServer" },
		{ "ModuleRelativePath", "Public/AccelByteModelsDSMServer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Game_version = { "Game_version", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsDSMServer, Game_version), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Game_version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Game_version_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Image_version_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsDSMServer" },
		{ "ModuleRelativePath", "Public/AccelByteModelsDSMServer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Image_version = { "Image_version", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsDSMServer, Image_version), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Image_version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Image_version_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Ip_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsDSMServer" },
		{ "ModuleRelativePath", "Public/AccelByteModelsDSMServer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Ip = { "Ip", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsDSMServer, Ip), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Ip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Ip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsDSMServer" },
		{ "ModuleRelativePath", "Public/AccelByteModelsDSMServer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsDSMServer, Namespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Namespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Params_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsDSMServer" },
		{ "ModuleRelativePath", "Public/AccelByteModelsDSMServer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsDSMServer, Params), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Params_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Pod_name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsDSMServer" },
		{ "ModuleRelativePath", "Public/AccelByteModelsDSMServer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Pod_name = { "Pod_name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsDSMServer, Pod_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Pod_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Pod_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Port_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsDSMServer" },
		{ "ModuleRelativePath", "Public/AccelByteModelsDSMServer.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsDSMServer, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Port_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Ports_ValueProp = { "Ports", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Ports_Key_KeyProp = { "Ports_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Ports_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsDSMServer" },
		{ "ModuleRelativePath", "Public/AccelByteModelsDSMServer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Ports = { "Ports", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsDSMServer, Ports), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Ports_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Ports_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Protocol_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsDSMServer" },
		{ "ModuleRelativePath", "Public/AccelByteModelsDSMServer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsDSMServer, Protocol), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Protocol_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Protocol_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Provider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsDSMServer" },
		{ "ModuleRelativePath", "Public/AccelByteModelsDSMServer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Provider = { "Provider", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsDSMServer, Provider), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Provider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Provider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Region_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsDSMServer" },
		{ "ModuleRelativePath", "Public/AccelByteModelsDSMServer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsDSMServer, Region), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Region_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Session_id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsDSMServer" },
		{ "ModuleRelativePath", "Public/AccelByteModelsDSMServer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Session_id = { "Session_id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsDSMServer, Session_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Session_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Session_id_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Status_history_Inner = { "Status_history", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelsServerStatusHistory, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Status_history_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsDSMServer" },
		{ "ModuleRelativePath", "Public/AccelByteModelsDSMServer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Status_history = { "Status_history", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsDSMServer, Status_history), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Status_history_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Status_history_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Custom_attribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Deployment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Game_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Image_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Ip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Namespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Params,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Pod_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Ports_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Ports_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Ports,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Protocol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Provider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Region,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Session_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Status_history_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::NewProp_Status_history,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsDSMServer",
		sizeof(FAccelByteModelsDSMServer),
		alignof(FAccelByteModelsDSMServer),
		Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsDSMServer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsDSMServer"), sizeof(FAccelByteModelsDSMServer), Get_Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsDSMServer_Hash() { return 927576559U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
