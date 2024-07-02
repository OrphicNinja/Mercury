// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkMainOutputSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMainOutputSettings() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMainOutputSettings();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkPanningRule();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkChannelConfigType();
// End Cross Module References
class UScriptStruct* FAkMainOutputSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkMainOutputSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMainOutputSettings, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMainOutputSettings"), sizeof(FAkMainOutputSettings), Get_Z_Construct_UScriptStruct_FAkMainOutputSettings_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkMainOutputSettings>()
{
	return FAkMainOutputSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkMainOutputSettings(FAkMainOutputSettings::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkMainOutputSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkMainOutputSettings
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkMainOutputSettings()
	{
		UScriptStruct::DeferCppStructOps<FAkMainOutputSettings>(FName(TEXT("AkMainOutputSettings")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkMainOutputSettings;
	struct Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioDeviceShareset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AudioDeviceShareset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_DeviceID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PanningRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PanningRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PanningRule;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChannelConfigType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelConfigType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChannelConfigType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ChannelMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumberOfChannels;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkMainOutputSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMainOutputSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_AudioDeviceShareset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMainOutputSettings" },
		{ "ModuleRelativePath", "Public/AkMainOutputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_AudioDeviceShareset = { "AudioDeviceShareset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkMainOutputSettings, AudioDeviceShareset), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_AudioDeviceShareset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_AudioDeviceShareset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_DeviceID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMainOutputSettings" },
		{ "ModuleRelativePath", "Public/AkMainOutputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkMainOutputSettings, DeviceID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_DeviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_DeviceID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_PanningRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_PanningRule_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMainOutputSettings" },
		{ "ModuleRelativePath", "Public/AkMainOutputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_PanningRule = { "PanningRule", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkMainOutputSettings, PanningRule), Z_Construct_UEnum_AkAudio_EAkPanningRule, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_PanningRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_PanningRule_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelConfigType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelConfigType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMainOutputSettings" },
		{ "ModuleRelativePath", "Public/AkMainOutputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelConfigType = { "ChannelConfigType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkMainOutputSettings, ChannelConfigType), Z_Construct_UEnum_AkAudio_EAkChannelConfigType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelConfigType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelConfigType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMainOutputSettings" },
		{ "ModuleRelativePath", "Public/AkMainOutputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelMask = { "ChannelMask", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkMainOutputSettings, ChannelMask), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_NumberOfChannels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMainOutputSettings" },
		{ "ModuleRelativePath", "Public/AkMainOutputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_NumberOfChannels = { "NumberOfChannels", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkMainOutputSettings, NumberOfChannels), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_NumberOfChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_NumberOfChannels_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_AudioDeviceShareset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_DeviceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_PanningRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_PanningRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelConfigType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelConfigType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_NumberOfChannels,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkMainOutputSettings",
		sizeof(FAkMainOutputSettings),
		alignof(FAkMainOutputSettings),
		Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkMainOutputSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkMainOutputSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkMainOutputSettings"), sizeof(FAkMainOutputSettings), Get_Z_Construct_UScriptStruct_FAkMainOutputSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkMainOutputSettings_Hash() { return 3704949086U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
