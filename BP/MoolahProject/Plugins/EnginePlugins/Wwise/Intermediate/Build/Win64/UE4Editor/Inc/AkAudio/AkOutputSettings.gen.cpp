// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkOutputSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkOutputSettings() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkOutputSettings();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_PanningRule();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkChannelConfiguration();
// End Cross Module References
class UScriptStruct* FAkOutputSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkOutputSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkOutputSettings, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkOutputSettings"), sizeof(FAkOutputSettings), Get_Z_Construct_UScriptStruct_FAkOutputSettings_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkOutputSettings>()
{
	return FAkOutputSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkOutputSettings(FAkOutputSettings::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkOutputSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkOutputSettings
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkOutputSettings()
	{
		UScriptStruct::DeferCppStructOps<FAkOutputSettings>(FName(TEXT("AkOutputSettings")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkOutputSettings;
	struct Z_Construct_UScriptStruct_FAkOutputSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioDeviceSharesetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AudioDeviceSharesetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdDevice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IdDevice;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PanRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PanRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PanRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChannelConfig_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChannelConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkOutputSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkOutputSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkOutputSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_AudioDeviceSharesetName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkOutputSettings" },
		{ "ModuleRelativePath", "Public/AkOutputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_AudioDeviceSharesetName = { "AudioDeviceSharesetName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkOutputSettings, AudioDeviceSharesetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_AudioDeviceSharesetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_AudioDeviceSharesetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_IdDevice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkOutputSettings" },
		{ "ModuleRelativePath", "Public/AkOutputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_IdDevice = { "IdDevice", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkOutputSettings, IdDevice), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_IdDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_IdDevice_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_PanRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_PanRule_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkOutputSettings" },
		{ "ModuleRelativePath", "Public/AkOutputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_PanRule = { "PanRule", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkOutputSettings, PanRule), Z_Construct_UEnum_AkAudio_PanningRule, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_PanRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_PanRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_ChannelConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_ChannelConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkOutputSettings" },
		{ "ModuleRelativePath", "Public/AkOutputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_ChannelConfig = { "ChannelConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkOutputSettings, ChannelConfig), Z_Construct_UEnum_AkAudio_AkChannelConfiguration, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_ChannelConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_ChannelConfig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkOutputSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_AudioDeviceSharesetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_IdDevice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_PanRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_PanRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_ChannelConfig_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkOutputSettings_Statics::NewProp_ChannelConfig,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkOutputSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkOutputSettings",
		sizeof(FAkOutputSettings),
		alignof(FAkOutputSettings),
		Z_Construct_UScriptStruct_FAkOutputSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkOutputSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkOutputSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkOutputSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkOutputSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkOutputSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkOutputSettings"), sizeof(FAkOutputSettings), Get_Z_Construct_UScriptStruct_FAkOutputSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkOutputSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkOutputSettings_Hash() { return 2680241056U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
