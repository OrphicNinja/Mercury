// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkCommunicationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkCommunicationSettings() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettings();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
class UScriptStruct* FAkCommunicationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkCommunicationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkCommunicationSettings, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkCommunicationSettings"), sizeof(FAkCommunicationSettings), Get_Z_Construct_UScriptStruct_FAkCommunicationSettings_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkCommunicationSettings>()
{
	return FAkCommunicationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkCommunicationSettings(FAkCommunicationSettings::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkCommunicationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkCommunicationSettings
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkCommunicationSettings()
	{
		UScriptStruct::DeferCppStructOps<FAkCommunicationSettings>(FName(TEXT("AkCommunicationSettings")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkCommunicationSettings;
	struct Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoolSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PoolSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscoveryBroadcastPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_DiscoveryBroadcastPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommandPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_CommandPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotificationPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_NotificationPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetworkName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NetworkName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkCommunicationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkCommunicationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_PoolSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCommunicationSettings" },
		{ "ModuleRelativePath", "Public/AkCommunicationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_PoolSize = { "PoolSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkCommunicationSettings, PoolSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_PoolSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_PoolSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_DiscoveryBroadcastPort_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCommunicationSettings" },
		{ "ModuleRelativePath", "Public/AkCommunicationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_DiscoveryBroadcastPort = { "DiscoveryBroadcastPort", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkCommunicationSettings, DiscoveryBroadcastPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_DiscoveryBroadcastPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_DiscoveryBroadcastPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_CommandPort_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCommunicationSettings" },
		{ "ModuleRelativePath", "Public/AkCommunicationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_CommandPort = { "CommandPort", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkCommunicationSettings, CommandPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_CommandPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_CommandPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_NotificationPort_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCommunicationSettings" },
		{ "ModuleRelativePath", "Public/AkCommunicationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_NotificationPort = { "NotificationPort", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkCommunicationSettings, NotificationPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_NotificationPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_NotificationPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_NetworkName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCommunicationSettings" },
		{ "ModuleRelativePath", "Public/AkCommunicationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_NetworkName = { "NetworkName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkCommunicationSettings, NetworkName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_NetworkName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_NetworkName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_PoolSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_DiscoveryBroadcastPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_CommandPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_NotificationPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_NetworkName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkCommunicationSettings",
		sizeof(FAkCommunicationSettings),
		alignof(FAkCommunicationSettings),
		Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkCommunicationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkCommunicationSettings"), sizeof(FAkCommunicationSettings), Get_Z_Construct_UScriptStruct_FAkCommunicationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkCommunicationSettings_Hash() { return 557561190U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
