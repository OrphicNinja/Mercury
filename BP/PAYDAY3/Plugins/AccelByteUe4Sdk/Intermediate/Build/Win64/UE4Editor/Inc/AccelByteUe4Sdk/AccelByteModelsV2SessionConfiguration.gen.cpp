// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelsV2SessionConfiguration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelsV2SessionConfiguration() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteV2SessionConfigurationServerType();
	ACCELBYTEUE4SDK_API UEnum* Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteV2SessionJoinability();
// End Cross Module References
class UScriptStruct* FAccelByteModelsV2SessionConfiguration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelsV2SessionConfiguration"), sizeof(FAccelByteModelsV2SessionConfiguration), Get_Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelsV2SessionConfiguration>()
{
	return FAccelByteModelsV2SessionConfiguration::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelsV2SessionConfiguration(FAccelByteModelsV2SessionConfiguration::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelsV2SessionConfiguration"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2SessionConfiguration
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2SessionConfiguration()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelsV2SessionConfiguration>(FName(TEXT("AccelByteModelsV2SessionConfiguration")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelsV2SessionConfiguration;
	struct Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Joinability_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Joinability_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Joinability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_MinPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_MaxPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InactiveTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_InactiveTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InviteTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_InviteTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Deployment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Deployment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientVersion;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RequestedRegions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestedRegions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RequestedRegions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextChat_MetaData[];
#endif
		static void NewProp_TextChat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TextChat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Persistent_MetaData[];
#endif
		static void NewProp_Persistent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Persistent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoJoin_MetaData[];
#endif
		static void NewProp_AutoJoin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoJoin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2SessionConfiguration.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelsV2SessionConfiguration>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2SessionConfiguration" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2SessionConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2SessionConfiguration, Type), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteV2SessionConfigurationServerType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_Joinability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_Joinability_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2SessionConfiguration" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2SessionConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_Joinability = { "Joinability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2SessionConfiguration, Joinability), Z_Construct_UEnum_AccelByteUe4Sdk_EAccelByteV2SessionJoinability, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_Joinability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_Joinability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2SessionConfiguration" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2SessionConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2SessionConfiguration, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_MinPlayers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2SessionConfiguration" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2SessionConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_MinPlayers = { "MinPlayers", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2SessionConfiguration, MinPlayers), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_MinPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_MinPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_MaxPlayers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2SessionConfiguration" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2SessionConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2SessionConfiguration, MaxPlayers), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_MaxPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_MaxPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_InactiveTimeout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2SessionConfiguration" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2SessionConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_InactiveTimeout = { "InactiveTimeout", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2SessionConfiguration, InactiveTimeout), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_InactiveTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_InactiveTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_InviteTimeout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2SessionConfiguration" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2SessionConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_InviteTimeout = { "InviteTimeout", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2SessionConfiguration, InviteTimeout), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_InviteTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_InviteTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_Deployment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2SessionConfiguration" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2SessionConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_Deployment = { "Deployment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2SessionConfiguration, Deployment), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_Deployment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_Deployment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_ClientVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2SessionConfiguration" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2SessionConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_ClientVersion = { "ClientVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2SessionConfiguration, ClientVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_ClientVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_ClientVersion_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_RequestedRegions_Inner = { "RequestedRegions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_RequestedRegions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2SessionConfiguration" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2SessionConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_RequestedRegions = { "RequestedRegions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelsV2SessionConfiguration, RequestedRegions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_RequestedRegions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_RequestedRegions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_TextChat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2SessionConfiguration" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2SessionConfiguration.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_TextChat_SetBit(void* Obj)
	{
		((FAccelByteModelsV2SessionConfiguration*)Obj)->TextChat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_TextChat = { "TextChat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsV2SessionConfiguration), &Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_TextChat_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_TextChat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_TextChat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_Persistent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2SessionConfiguration" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2SessionConfiguration.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_Persistent_SetBit(void* Obj)
	{
		((FAccelByteModelsV2SessionConfiguration*)Obj)->Persistent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_Persistent = { "Persistent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsV2SessionConfiguration), &Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_Persistent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_Persistent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_Persistent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_AutoJoin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelsV2SessionConfiguration" },
		{ "ModuleRelativePath", "Public/AccelByteModelsV2SessionConfiguration.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_AutoJoin_SetBit(void* Obj)
	{
		((FAccelByteModelsV2SessionConfiguration*)Obj)->AutoJoin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_AutoJoin = { "AutoJoin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAccelByteModelsV2SessionConfiguration), &Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_AutoJoin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_AutoJoin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_AutoJoin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_Joinability_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_Joinability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_MinPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_MaxPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_InactiveTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_InviteTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_Deployment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_ClientVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_RequestedRegions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_RequestedRegions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_TextChat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_Persistent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::NewProp_AutoJoin,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelsV2SessionConfiguration",
		sizeof(FAccelByteModelsV2SessionConfiguration),
		alignof(FAccelByteModelsV2SessionConfiguration),
		Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelsV2SessionConfiguration"), sizeof(FAccelByteModelsV2SessionConfiguration), Get_Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelsV2SessionConfiguration_Hash() { return 3497252601U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
