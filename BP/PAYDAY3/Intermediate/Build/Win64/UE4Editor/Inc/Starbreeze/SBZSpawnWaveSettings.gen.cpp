// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSpawnWaveSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSpawnWaveSettings() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSpawnWaveSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSpawnWaveSquadOrderLimits();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISquadOrder_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings();
// End Cross Module References
class UScriptStruct* FSBZSpawnWaveSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSpawnWaveSettings, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSpawnWaveSettings"), sizeof(FSBZSpawnWaveSettings), Get_Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSpawnWaveSettings>()
{
	return FSBZSpawnWaveSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSpawnWaveSettings(FSBZSpawnWaveSettings::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSpawnWaveSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpawnWaveSettings
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpawnWaveSettings()
	{
		UScriptStruct::DeferCppStructOps<FSBZSpawnWaveSettings>(FName(TEXT("SBZSpawnWaveSettings")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpawnWaveSettings;
	struct Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnInterval;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnTypeLimits_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnTypeLimits_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTypeLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SpawnTypeLimits;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllSquadOrderLimits_ValueProp;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_AllSquadOrderLimits_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllSquadOrderLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AllSquadOrderLimits;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllWaveSegmentSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllWaveSegmentSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllWaveSegmentSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSpawnWaveSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSpawnWaveSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnWaveSettings" },
		{ "ModuleRelativePath", "Public/SBZSpawnWaveSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnWaveSettings, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_SpawnInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnWaveSettings" },
		{ "ModuleRelativePath", "Public/SBZSpawnWaveSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_SpawnInterval = { "SpawnInterval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnWaveSettings, SpawnInterval), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_SpawnInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_SpawnInterval_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_SpawnTypeLimits_ValueProp = { "SpawnTypeLimits", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZSpawnWaveTypeLimit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_SpawnTypeLimits_Key_KeyProp = { "SpawnTypeLimits_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_SpawnTypeLimits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnWaveSettings" },
		{ "ModuleRelativePath", "Public/SBZSpawnWaveSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_SpawnTypeLimits = { "SpawnTypeLimits", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnWaveSettings, SpawnTypeLimits), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_SpawnTypeLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_SpawnTypeLimits_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_AllSquadOrderLimits_ValueProp = { "AllSquadOrderLimits", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZSpawnWaveSquadOrderLimits, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_AllSquadOrderLimits_Key_KeyProp = { "AllSquadOrderLimits_Key", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZAISquadOrder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_AllSquadOrderLimits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnWaveSettings" },
		{ "ModuleRelativePath", "Public/SBZSpawnWaveSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_AllSquadOrderLimits = { "AllSquadOrderLimits", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnWaveSettings, AllSquadOrderLimits), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_AllSquadOrderLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_AllSquadOrderLimits_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_AllWaveSegmentSettings_Inner = { "AllWaveSegmentSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_AllWaveSegmentSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnWaveSettings" },
		{ "ModuleRelativePath", "Public/SBZSpawnWaveSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_AllWaveSegmentSettings = { "AllWaveSegmentSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnWaveSettings, AllWaveSegmentSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_AllWaveSegmentSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_AllWaveSegmentSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_SpawnInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_SpawnTypeLimits_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_SpawnTypeLimits_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_SpawnTypeLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_AllSquadOrderLimits_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_AllSquadOrderLimits_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_AllSquadOrderLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_AllWaveSegmentSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::NewProp_AllWaveSegmentSettings,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSpawnWaveSettings",
		sizeof(FSBZSpawnWaveSettings),
		alignof(FSBZSpawnWaveSettings),
		Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSpawnWaveSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSpawnWaveSettings"), sizeof(FSBZSpawnWaveSettings), Get_Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSpawnWaveSettings_Hash() { return 3498186628U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
