// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPawnPlatformSpawnSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPawnPlatformSpawnSettings() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSpawnSignificance();
// End Cross Module References
class UScriptStruct* FSBZPawnPlatformSpawnSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPawnPlatformSpawnSettings"), sizeof(FSBZPawnPlatformSpawnSettings), Get_Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPawnPlatformSpawnSettings>()
{
	return FSBZPawnPlatformSpawnSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPawnPlatformSpawnSettings(FSBZPawnPlatformSpawnSettings::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPawnPlatformSpawnSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPawnPlatformSpawnSettings
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPawnPlatformSpawnSettings()
	{
		UScriptStruct::DeferCppStructOps<FSBZPawnPlatformSpawnSettings>(FName(TEXT("SBZPawnPlatformSpawnSettings")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPawnPlatformSpawnSettings;
	struct Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AllowedSpawnSignificance_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedSpawnSignificance_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AllowedSpawnSignificance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopulationLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PopulationLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumSpawnsPerFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumSpawnsPerFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumDestroysPerFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumDestroysPerFrame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPawnPlatformSpawnSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPawnPlatformSpawnSettings>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Statics::NewProp_AllowedSpawnSignificance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Statics::NewProp_AllowedSpawnSignificance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnPlatformSpawnSettings" },
		{ "ModuleRelativePath", "Public/SBZPawnPlatformSpawnSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Statics::NewProp_AllowedSpawnSignificance = { "AllowedSpawnSignificance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPawnPlatformSpawnSettings, AllowedSpawnSignificance), Z_Construct_UEnum_Starbreeze_ESBZSpawnSignificance, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Statics::NewProp_AllowedSpawnSignificance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Statics::NewProp_AllowedSpawnSignificance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Statics::NewProp_PopulationLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnPlatformSpawnSettings" },
		{ "ModuleRelativePath", "Public/SBZPawnPlatformSpawnSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Statics::NewProp_PopulationLimit = { "PopulationLimit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPawnPlatformSpawnSettings, PopulationLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Statics::NewProp_PopulationLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Statics::NewProp_PopulationLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Statics::NewProp_MaximumSpawnsPerFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnPlatformSpawnSettings" },
		{ "ModuleRelativePath", "Public/SBZPawnPlatformSpawnSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Statics::NewProp_MaximumSpawnsPerFrame = { "MaximumSpawnsPerFrame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPawnPlatformSpawnSettings, MaximumSpawnsPerFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Statics::NewProp_MaximumSpawnsPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Statics::NewProp_MaximumSpawnsPerFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Statics::NewProp_MaximumDestroysPerFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPawnPlatformSpawnSettings" },
		{ "ModuleRelativePath", "Public/SBZPawnPlatformSpawnSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Statics::NewProp_MaximumDestroysPerFrame = { "MaximumDestroysPerFrame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPawnPlatformSpawnSettings, MaximumDestroysPerFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Statics::NewProp_MaximumDestroysPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Statics::NewProp_MaximumDestroysPerFrame_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Statics::NewProp_AllowedSpawnSignificance_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Statics::NewProp_AllowedSpawnSignificance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Statics::NewProp_PopulationLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Statics::NewProp_MaximumSpawnsPerFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Statics::NewProp_MaximumDestroysPerFrame,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZPawnPlatformSpawnSettings",
		sizeof(FSBZPawnPlatformSpawnSettings),
		alignof(FSBZPawnPlatformSpawnSettings),
		Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPawnPlatformSpawnSettings"), sizeof(FSBZPawnPlatformSpawnSettings), Get_Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings_Hash() { return 14190573U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
