// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZChallengeDailySettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZChallengeDailySettings() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeDailySettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeDailyBlock();
// End Cross Module References
class UScriptStruct* FSBZChallengeDailySettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZChallengeDailySettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZChallengeDailySettings, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZChallengeDailySettings"), sizeof(FSBZChallengeDailySettings), Get_Z_Construct_UScriptStruct_FSBZChallengeDailySettings_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZChallengeDailySettings>()
{
	return FSBZChallengeDailySettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZChallengeDailySettings(FSBZChallengeDailySettings::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZChallengeDailySettings"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZChallengeDailySettings
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZChallengeDailySettings()
	{
		UScriptStruct::DeferCppStructOps<FSBZChallengeDailySettings>(FName(TEXT("SBZChallengeDailySettings")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZChallengeDailySettings;
	struct Z_Construct_UScriptStruct_FSBZChallengeDailySettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlockArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeDailySettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZChallengeDailySettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZChallengeDailySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZChallengeDailySettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeDailySettings_Statics::NewProp_BlockArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeDailySettings" },
		{ "ModuleRelativePath", "Public/SBZChallengeDailySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZChallengeDailySettings_Statics::NewProp_BlockArray = { "BlockArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChallengeDailySettings, BlockArray), Z_Construct_UScriptStruct_FSBZChallengeDailyBlock, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeDailySettings_Statics::NewProp_BlockArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeDailySettings_Statics::NewProp_BlockArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZChallengeDailySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeDailySettings_Statics::NewProp_BlockArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZChallengeDailySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZChallengeDailySettings",
		sizeof(FSBZChallengeDailySettings),
		alignof(FSBZChallengeDailySettings),
		Z_Construct_UScriptStruct_FSBZChallengeDailySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeDailySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeDailySettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeDailySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeDailySettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZChallengeDailySettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZChallengeDailySettings"), sizeof(FSBZChallengeDailySettings), Get_Z_Construct_UScriptStruct_FSBZChallengeDailySettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZChallengeDailySettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZChallengeDailySettings_Hash() { return 1588713613U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
