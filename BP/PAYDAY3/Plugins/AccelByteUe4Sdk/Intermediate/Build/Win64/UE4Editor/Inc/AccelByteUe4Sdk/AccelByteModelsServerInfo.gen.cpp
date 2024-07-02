// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsServerInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsServerInfo() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsServerInfo();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
class UScriptStruct* FAccelByteModelsServerInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsServerInfo, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsServerInfo"), sizeof(FAccelByteModelsServerInfo), Get_Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsServerInfo>()
{
	return FAccelByteModelsServerInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsServerInfo(FAccelByteModelsServerInfo::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsServerInfo"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsServerInfo
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsServerInfo()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsServerInfo>(FName(TEXT("AccelByteModelsServerInfo")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsServerInfo;
	struct Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pod_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Pod_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_version_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Image_version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Ip;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Alternate_ips_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alternate_ips_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Alternate_ips;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Provider_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Provider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Game_version_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Game_version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Last_update_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Last_update;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Region;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Custom_attribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Custom_attribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Deployment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Deployment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Session_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Session_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsServerInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsServerInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Pod_name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsServerInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsServerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Pod_name = { "Pod_name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsServerInfo, Pod_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Pod_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Pod_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Image_version_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsServerInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsServerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Image_version = { "Image_version", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsServerInfo, Image_version), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Image_version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Image_version_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsServerInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsServerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsServerInfo, Namespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Namespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Ip_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsServerInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsServerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Ip = { "Ip", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsServerInfo, Ip), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Ip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Ip_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Alternate_ips_Inner = { "Alternate_ips", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Alternate_ips_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsServerInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsServerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Alternate_ips = { "Alternate_ips", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsServerInfo, Alternate_ips), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Alternate_ips_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Alternate_ips_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Port_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsServerInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsServerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsServerInfo, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Port_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Ports_ValueProp = { "Ports", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Ports_Key_KeyProp = { "Ports_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Ports_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsServerInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsServerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Ports = { "Ports", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsServerInfo, Ports), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Ports_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Ports_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Provider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsServerInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsServerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Provider = { "Provider", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsServerInfo, Provider), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Provider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Provider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Game_version_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsServerInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsServerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Game_version = { "Game_version", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsServerInfo, Game_version), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Game_version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Game_version_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsServerInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsServerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsServerInfo, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Last_update_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsServerInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsServerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Last_update = { "Last_update", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsServerInfo, Last_update), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Last_update_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Last_update_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Region_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsServerInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsServerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsServerInfo, Region), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Region_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Custom_attribute_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsServerInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsServerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Custom_attribute = { "Custom_attribute", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsServerInfo, Custom_attribute), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Custom_attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Custom_attribute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Deployment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsServerInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsServerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Deployment = { "Deployment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsServerInfo, Deployment), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Deployment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Deployment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Session_id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsServerInfo" },
		{ "ModuleRelativePath", "Public/AccelByteModelsServerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Session_id = { "Session_id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsServerInfo, Session_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Session_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Session_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Pod_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Image_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Namespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Ip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Alternate_ips_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Alternate_ips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Ports_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Ports_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Ports,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Provider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Game_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Last_update,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Region,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Custom_attribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Deployment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::NewProp_Session_id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsServerInfo",
		sizeof(FAccelByteModelsServerInfo),
		alignof(FAccelByteModelsServerInfo),
		Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsServerInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsServerInfo"), sizeof(FAccelByteModelsServerInfo), Get_Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsServerInfo_Hash() { return 551799748U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
