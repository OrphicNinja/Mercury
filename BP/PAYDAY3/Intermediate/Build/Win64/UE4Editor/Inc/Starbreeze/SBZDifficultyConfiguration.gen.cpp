// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDifficultyConfiguration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDifficultyConfiguration() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDifficultyConfiguration();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZDifficultyConfiguration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZDifficultyConfiguration, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZDifficultyConfiguration"), sizeof(FSBZDifficultyConfiguration), Get_Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZDifficultyConfiguration>()
{
	return FSBZDifficultyConfiguration::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZDifficultyConfiguration(FSBZDifficultyConfiguration::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZDifficultyConfiguration"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDifficultyConfiguration
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDifficultyConfiguration()
	{
		UScriptStruct::DeferCppStructOps<FSBZDifficultyConfiguration>(FName(TEXT("SBZDifficultyConfiguration")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZDifficultyConfiguration;
	struct Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelShortName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelShortName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Normal_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normal;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Hard_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hard_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Hard;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VeryHard_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VeryHard_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VeryHard;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Overkill_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Overkill_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Overkill;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZDifficultyConfiguration.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZDifficultyConfiguration>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_LevelShortName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDifficultyConfiguration" },
		{ "ModuleRelativePath", "Public/SBZDifficultyConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_LevelShortName = { "LevelShortName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDifficultyConfiguration, LevelShortName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_LevelShortName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_LevelShortName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDifficultyConfiguration" },
		{ "ModuleRelativePath", "Public/SBZDifficultyConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDifficultyConfiguration, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_Normal_Inner = { "Normal", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_Normal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDifficultyConfiguration" },
		{ "ModuleRelativePath", "Public/SBZDifficultyConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDifficultyConfiguration, Normal), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_Normal_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_Hard_Inner = { "Hard", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_Hard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDifficultyConfiguration" },
		{ "ModuleRelativePath", "Public/SBZDifficultyConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_Hard = { "Hard", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDifficultyConfiguration, Hard), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_Hard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_Hard_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_VeryHard_Inner = { "VeryHard", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_VeryHard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDifficultyConfiguration" },
		{ "ModuleRelativePath", "Public/SBZDifficultyConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_VeryHard = { "VeryHard", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDifficultyConfiguration, VeryHard), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_VeryHard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_VeryHard_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_Overkill_Inner = { "Overkill", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_Overkill_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDifficultyConfiguration" },
		{ "ModuleRelativePath", "Public/SBZDifficultyConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_Overkill = { "Overkill", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDifficultyConfiguration, Overkill), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_Overkill_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_Overkill_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_LevelShortName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_Normal_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_Hard_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_Hard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_VeryHard_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_VeryHard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_Overkill_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::NewProp_Overkill,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZDifficultyConfiguration",
		sizeof(FSBZDifficultyConfiguration),
		alignof(FSBZDifficultyConfiguration),
		Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZDifficultyConfiguration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZDifficultyConfiguration"), sizeof(FSBZDifficultyConfiguration), Get_Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZDifficultyConfiguration_Hash() { return 1046494107U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
