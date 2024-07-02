// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkWindowsAdvancedInitializationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWindowsAdvancedInitializationSettings() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering();
// End Cross Module References

static_assert(std::is_polymorphic<FAkWindowsAdvancedInitializationSettings>() == std::is_polymorphic<FAkAdvancedInitializationSettingsWithMultiCoreRendering>(), "USTRUCT FAkWindowsAdvancedInitializationSettings cannot be polymorphic unless super FAkAdvancedInitializationSettingsWithMultiCoreRendering is polymorphic");

class UScriptStruct* FAkWindowsAdvancedInitializationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkWindowsAdvancedInitializationSettings"), sizeof(FAkWindowsAdvancedInitializationSettings), Get_Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkWindowsAdvancedInitializationSettings>()
{
	return FAkWindowsAdvancedInitializationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkWindowsAdvancedInitializationSettings(FAkWindowsAdvancedInitializationSettings::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkWindowsAdvancedInitializationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkWindowsAdvancedInitializationSettings
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkWindowsAdvancedInitializationSettings()
	{
		UScriptStruct::DeferCppStructOps<FAkWindowsAdvancedInitializationSettings>(FName(TEXT("AkWindowsAdvancedInitializationSettings")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkWindowsAdvancedInitializationSettings;
	struct Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseHeadMountedDisplayAudioDevice_MetaData[];
#endif
		static void NewProp_UseHeadMountedDisplayAudioDevice_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseHeadMountedDisplayAudioDevice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSystemAudioObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaxSystemAudioObjects;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkWindowsAdvancedInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkWindowsAdvancedInitializationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkWindowsAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkWindowsAdvancedInitializationSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice_SetBit(void* Obj)
	{
		((FAkWindowsAdvancedInitializationSettings*)Obj)->UseHeadMountedDisplayAudioDevice = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice = { "UseHeadMountedDisplayAudioDevice", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAkWindowsAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::NewProp_MaxSystemAudioObjects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkWindowsAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkWindowsAdvancedInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::NewProp_MaxSystemAudioObjects = { "MaxSystemAudioObjects", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkWindowsAdvancedInitializationSettings, MaxSystemAudioObjects), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::NewProp_MaxSystemAudioObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::NewProp_MaxSystemAudioObjects_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::NewProp_MaxSystemAudioObjects,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering,
		&NewStructOps,
		"AkWindowsAdvancedInitializationSettings",
		sizeof(FAkWindowsAdvancedInitializationSettings),
		alignof(FAkWindowsAdvancedInitializationSettings),
		Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkWindowsAdvancedInitializationSettings"), sizeof(FAkWindowsAdvancedInitializationSettings), Get_Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Hash() { return 2487027468U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
