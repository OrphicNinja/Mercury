// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkXSXAdvancedInitializationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkXSXAdvancedInitializationSettings() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering();
// End Cross Module References

static_assert(std::is_polymorphic<FAkXSXAdvancedInitializationSettings>() == std::is_polymorphic<FAkAdvancedInitializationSettingsWithMultiCoreRendering>(), "USTRUCT FAkXSXAdvancedInitializationSettings cannot be polymorphic unless super FAkAdvancedInitializationSettingsWithMultiCoreRendering is polymorphic");

class UScriptStruct* FAkXSXAdvancedInitializationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkXSXAdvancedInitializationSettings"), sizeof(FAkXSXAdvancedInitializationSettings), Get_Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkXSXAdvancedInitializationSettings>()
{
	return FAkXSXAdvancedInitializationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkXSXAdvancedInitializationSettings(FAkXSXAdvancedInitializationSettings::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkXSXAdvancedInitializationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkXSXAdvancedInitializationSettings
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkXSXAdvancedInitializationSettings()
	{
		UScriptStruct::DeferCppStructOps<FAkXSXAdvancedInitializationSettings>(FName(TEXT("AkXSXAdvancedInitializationSettings")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkXSXAdvancedInitializationSettings;
	struct Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumNumberOfXMAVoices_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_MaximumNumberOfXMAVoices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseHardwareCodecLowLatencyMode_MetaData[];
#endif
		static void NewProp_UseHardwareCodecLowLatencyMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseHardwareCodecLowLatencyMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumNumberOfOpusVoices_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_MaximumNumberOfOpusVoices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_uMaxSystemAudioObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_uMaxSystemAudioObjects;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkXSXAdvancedInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkXSXAdvancedInitializationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_MaximumNumberOfXMAVoices_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkXSXAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkXSXAdvancedInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_MaximumNumberOfXMAVoices = { "MaximumNumberOfXMAVoices", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkXSXAdvancedInitializationSettings, MaximumNumberOfXMAVoices), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_MaximumNumberOfXMAVoices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_MaximumNumberOfXMAVoices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkXSXAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkXSXAdvancedInitializationSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode_SetBit(void* Obj)
	{
		((FAkXSXAdvancedInitializationSettings*)Obj)->UseHardwareCodecLowLatencyMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode = { "UseHardwareCodecLowLatencyMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAkXSXAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_MaximumNumberOfOpusVoices_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkXSXAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkXSXAdvancedInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_MaximumNumberOfOpusVoices = { "MaximumNumberOfOpusVoices", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkXSXAdvancedInitializationSettings, MaximumNumberOfOpusVoices), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_MaximumNumberOfOpusVoices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_MaximumNumberOfOpusVoices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_uMaxSystemAudioObjects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkXSXAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkXSXAdvancedInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_uMaxSystemAudioObjects = { "uMaxSystemAudioObjects", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkXSXAdvancedInitializationSettings, uMaxSystemAudioObjects), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_uMaxSystemAudioObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_uMaxSystemAudioObjects_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_MaximumNumberOfXMAVoices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_UseHardwareCodecLowLatencyMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_MaximumNumberOfOpusVoices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::NewProp_uMaxSystemAudioObjects,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering,
		&NewStructOps,
		"AkXSXAdvancedInitializationSettings",
		sizeof(FAkXSXAdvancedInitializationSettings),
		alignof(FAkXSXAdvancedInitializationSettings),
		Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkXSXAdvancedInitializationSettings"), sizeof(FAkXSXAdvancedInitializationSettings), Get_Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings_Hash() { return 1652661424U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
