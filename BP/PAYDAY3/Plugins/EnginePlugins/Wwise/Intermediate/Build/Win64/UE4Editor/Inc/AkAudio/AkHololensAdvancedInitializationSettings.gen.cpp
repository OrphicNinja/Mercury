// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkHololensAdvancedInitializationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkHololensAdvancedInitializationSettings() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering();
// End Cross Module References

static_assert(std::is_polymorphic<FAkHololensAdvancedInitializationSettings>() == std::is_polymorphic<FAkAdvancedInitializationSettingsWithMultiCoreRendering>(), "USTRUCT FAkHololensAdvancedInitializationSettings cannot be polymorphic unless super FAkAdvancedInitializationSettingsWithMultiCoreRendering is polymorphic");

class UScriptStruct* FAkHololensAdvancedInitializationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkHololensAdvancedInitializationSettings"), sizeof(FAkHololensAdvancedInitializationSettings), Get_Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkHololensAdvancedInitializationSettings>()
{
	return FAkHololensAdvancedInitializationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkHololensAdvancedInitializationSettings(FAkHololensAdvancedInitializationSettings::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkHololensAdvancedInitializationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkHololensAdvancedInitializationSettings
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkHololensAdvancedInitializationSettings()
	{
		UScriptStruct::DeferCppStructOps<FAkHololensAdvancedInitializationSettings>(FName(TEXT("AkHololensAdvancedInitializationSettings")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkHololensAdvancedInitializationSettings;
	struct Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkHololensAdvancedInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkHololensAdvancedInitializationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkHololensAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkHololensAdvancedInitializationSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice_SetBit(void* Obj)
	{
		((FAkHololensAdvancedInitializationSettings*)Obj)->UseHeadMountedDisplayAudioDevice = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice = { "UseHeadMountedDisplayAudioDevice", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAkHololensAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering,
		&NewStructOps,
		"AkHololensAdvancedInitializationSettings",
		sizeof(FAkHololensAdvancedInitializationSettings),
		alignof(FAkHololensAdvancedInitializationSettings),
		Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkHololensAdvancedInitializationSettings"), sizeof(FAkHololensAdvancedInitializationSettings), Get_Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Hash() { return 3345481169U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
