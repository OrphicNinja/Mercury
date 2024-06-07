// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkAdvancedInitializationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAdvancedInitializationSettings() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
class UScriptStruct* FAkAdvancedInitializationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAdvancedInitializationSettings"), sizeof(FAkAdvancedInitializationSettings), Get_Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkAdvancedInitializationSettings>()
{
	return FAkAdvancedInitializationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkAdvancedInitializationSettings(FAkAdvancedInitializationSettings::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkAdvancedInitializationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkAdvancedInitializationSettings
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkAdvancedInitializationSettings()
	{
		UScriptStruct::DeferCppStructOps<FAkAdvancedInitializationSettings>(FName(TEXT("AkAdvancedInitializationSettings")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkAdvancedInitializationSettings;
	struct Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IO_MemorySize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_IO_MemorySize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IO_Granularity_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_IO_Granularity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetAutoStreamBufferLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetAutoStreamBufferLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseStreamCache_MetaData[];
#endif
		static void NewProp_UseStreamCache_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseStreamCache;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumPinnedBytesInCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaximumPinnedBytesInCache;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableGameSyncPreparation_MetaData[];
#endif
		static void NewProp_EnableGameSyncPreparation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableGameSyncPreparation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContinuousPlaybackLookAhead_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ContinuousPlaybackLookAhead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MonitorQueuePoolSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MonitorQueuePoolSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumHardwareTimeoutMs_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaximumHardwareTimeoutMs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugOutOfRangeCheckEnabled_MetaData[];
#endif
		static void NewProp_DebugOutOfRangeCheckEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DebugOutOfRangeCheckEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugOutOfRangeLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DebugOutOfRangeLimit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkAdvancedInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAdvancedInitializationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_MemorySize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkAdvancedInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_MemorySize = { "IO_MemorySize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, IO_MemorySize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_MemorySize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_MemorySize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_Granularity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkAdvancedInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_Granularity = { "IO_Granularity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, IO_Granularity), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_Granularity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_Granularity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_TargetAutoStreamBufferLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkAdvancedInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_TargetAutoStreamBufferLength = { "TargetAutoStreamBufferLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, TargetAutoStreamBufferLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_TargetAutoStreamBufferLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_TargetAutoStreamBufferLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_UseStreamCache_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkAdvancedInitializationSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_UseStreamCache_SetBit(void* Obj)
	{
		((FAkAdvancedInitializationSettings*)Obj)->UseStreamCache = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_UseStreamCache = { "UseStreamCache", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAkAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_UseStreamCache_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_UseStreamCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_UseStreamCache_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumPinnedBytesInCache_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkAdvancedInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumPinnedBytesInCache = { "MaximumPinnedBytesInCache", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, MaximumPinnedBytesInCache), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumPinnedBytesInCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumPinnedBytesInCache_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_EnableGameSyncPreparation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkAdvancedInitializationSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_EnableGameSyncPreparation_SetBit(void* Obj)
	{
		((FAkAdvancedInitializationSettings*)Obj)->EnableGameSyncPreparation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_EnableGameSyncPreparation = { "EnableGameSyncPreparation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAkAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_EnableGameSyncPreparation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_EnableGameSyncPreparation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_EnableGameSyncPreparation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_ContinuousPlaybackLookAhead_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkAdvancedInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_ContinuousPlaybackLookAhead = { "ContinuousPlaybackLookAhead", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, ContinuousPlaybackLookAhead), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_ContinuousPlaybackLookAhead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_ContinuousPlaybackLookAhead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MonitorQueuePoolSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkAdvancedInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MonitorQueuePoolSize = { "MonitorQueuePoolSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, MonitorQueuePoolSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MonitorQueuePoolSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MonitorQueuePoolSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumHardwareTimeoutMs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkAdvancedInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumHardwareTimeoutMs = { "MaximumHardwareTimeoutMs", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, MaximumHardwareTimeoutMs), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumHardwareTimeoutMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumHardwareTimeoutMs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeCheckEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkAdvancedInitializationSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeCheckEnabled_SetBit(void* Obj)
	{
		((FAkAdvancedInitializationSettings*)Obj)->DebugOutOfRangeCheckEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeCheckEnabled = { "DebugOutOfRangeCheckEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAkAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeCheckEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeCheckEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeCheckEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAdvancedInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkAdvancedInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeLimit = { "DebugOutOfRangeLimit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, DebugOutOfRangeLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeLimit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_MemorySize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_Granularity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_TargetAutoStreamBufferLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_UseStreamCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumPinnedBytesInCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_EnableGameSyncPreparation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_ContinuousPlaybackLookAhead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MonitorQueuePoolSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumHardwareTimeoutMs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeCheckEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeLimit,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkAdvancedInitializationSettings",
		sizeof(FAkAdvancedInitializationSettings),
		alignof(FAkAdvancedInitializationSettings),
		Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkAdvancedInitializationSettings"), sizeof(FAkAdvancedInitializationSettings), Get_Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Hash() { return 438392275U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
