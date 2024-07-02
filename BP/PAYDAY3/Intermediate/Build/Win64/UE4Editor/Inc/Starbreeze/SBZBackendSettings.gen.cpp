// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBackendSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBackendSettings() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBackendSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZBackendSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZBackendSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZBackendSettings, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZBackendSettings"), sizeof(FSBZBackendSettings), Get_Z_Construct_UScriptStruct_FSBZBackendSettings_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZBackendSettings>()
{
	return FSBZBackendSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZBackendSettings(FSBZBackendSettings::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZBackendSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBackendSettings
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBackendSettings()
	{
		UScriptStruct::DeferCppStructOps<FSBZBackendSettings>(FName(TEXT("SBZBackendSettings")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZBackendSettings;
	struct Z_Construct_UScriptStruct_FSBZBackendSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Platform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsGameSenseEnabled_MetaData[];
#endif
		static void NewProp_bIsGameSenseEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsGameSenseEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTelemetryEnabled_MetaData[];
#endif
		static void NewProp_bIsTelemetryEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTelemetryEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopupsShownBitmask_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PopupsShownBitmask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBackendSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZBackendSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZBackendSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZBackendSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBackendSettings_Statics::NewProp_Platform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBackendSettings" },
		{ "ModuleRelativePath", "Public/SBZBackendSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZBackendSettings_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBackendSettings, Platform), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBackendSettings_Statics::NewProp_Platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBackendSettings_Statics::NewProp_Platform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBackendSettings_Statics::NewProp_bIsGameSenseEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBackendSettings" },
		{ "ModuleRelativePath", "Public/SBZBackendSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZBackendSettings_Statics::NewProp_bIsGameSenseEnabled_SetBit(void* Obj)
	{
		((FSBZBackendSettings*)Obj)->bIsGameSenseEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZBackendSettings_Statics::NewProp_bIsGameSenseEnabled = { "bIsGameSenseEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZBackendSettings), &Z_Construct_UScriptStruct_FSBZBackendSettings_Statics::NewProp_bIsGameSenseEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBackendSettings_Statics::NewProp_bIsGameSenseEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBackendSettings_Statics::NewProp_bIsGameSenseEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBackendSettings_Statics::NewProp_bIsTelemetryEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBackendSettings" },
		{ "ModuleRelativePath", "Public/SBZBackendSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZBackendSettings_Statics::NewProp_bIsTelemetryEnabled_SetBit(void* Obj)
	{
		((FSBZBackendSettings*)Obj)->bIsTelemetryEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZBackendSettings_Statics::NewProp_bIsTelemetryEnabled = { "bIsTelemetryEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZBackendSettings), &Z_Construct_UScriptStruct_FSBZBackendSettings_Statics::NewProp_bIsTelemetryEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBackendSettings_Statics::NewProp_bIsTelemetryEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBackendSettings_Statics::NewProp_bIsTelemetryEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBackendSettings_Statics::NewProp_PopupsShownBitmask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBackendSettings" },
		{ "ModuleRelativePath", "Public/SBZBackendSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSBZBackendSettings_Statics::NewProp_PopupsShownBitmask = { "PopupsShownBitmask", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBackendSettings, PopupsShownBitmask), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBackendSettings_Statics::NewProp_PopupsShownBitmask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBackendSettings_Statics::NewProp_PopupsShownBitmask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZBackendSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBackendSettings_Statics::NewProp_Platform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBackendSettings_Statics::NewProp_bIsGameSenseEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBackendSettings_Statics::NewProp_bIsTelemetryEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBackendSettings_Statics::NewProp_PopupsShownBitmask,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZBackendSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZBackendSettings",
		sizeof(FSBZBackendSettings),
		alignof(FSBZBackendSettings),
		Z_Construct_UScriptStruct_FSBZBackendSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBackendSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBackendSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBackendSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZBackendSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZBackendSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZBackendSettings"), sizeof(FSBZBackendSettings), Get_Z_Construct_UScriptStruct_FSBZBackendSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZBackendSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZBackendSettings_Hash() { return 370887562U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
