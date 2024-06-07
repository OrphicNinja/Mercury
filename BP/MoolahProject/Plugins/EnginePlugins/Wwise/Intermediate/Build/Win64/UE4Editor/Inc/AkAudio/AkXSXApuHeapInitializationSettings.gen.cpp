// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkXSXApuHeapInitializationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkXSXApuHeapInitializationSettings() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
class UScriptStruct* FAkXSXApuHeapInitializationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkXSXApuHeapInitializationSettings"), sizeof(FAkXSXApuHeapInitializationSettings), Get_Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkXSXApuHeapInitializationSettings>()
{
	return FAkXSXApuHeapInitializationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkXSXApuHeapInitializationSettings(FAkXSXApuHeapInitializationSettings::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkXSXApuHeapInitializationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkXSXApuHeapInitializationSettings
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkXSXApuHeapInitializationSettings()
	{
		UScriptStruct::DeferCppStructOps<FAkXSXApuHeapInitializationSettings>(FName(TEXT("AkXSXApuHeapInitializationSettings")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkXSXApuHeapInitializationSettings;
	struct Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_CachedSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonCachedSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NonCachedSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkXSXApuHeapInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkXSXApuHeapInitializationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::NewProp_CachedSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkXSXApuHeapInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkXSXApuHeapInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::NewProp_CachedSize = { "CachedSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkXSXApuHeapInitializationSettings, CachedSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::NewProp_CachedSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::NewProp_CachedSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::NewProp_NonCachedSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkXSXApuHeapInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkXSXApuHeapInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::NewProp_NonCachedSize = { "NonCachedSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkXSXApuHeapInitializationSettings, NonCachedSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::NewProp_NonCachedSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::NewProp_NonCachedSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::NewProp_CachedSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::NewProp_NonCachedSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkXSXApuHeapInitializationSettings",
		sizeof(FAkXSXApuHeapInitializationSettings),
		alignof(FAkXSXApuHeapInitializationSettings),
		Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkXSXApuHeapInitializationSettings"), sizeof(FAkXSXApuHeapInitializationSettings), Get_Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings_Hash() { return 3986723708U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
