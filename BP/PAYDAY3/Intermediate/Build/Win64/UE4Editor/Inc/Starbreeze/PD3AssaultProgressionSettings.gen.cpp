// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3AssaultProgressionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3AssaultProgressionSettings() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FPD3AssaultProgressionSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FPD3SpawnSquad();
// End Cross Module References
class UScriptStruct* FPD3AssaultProgressionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FPD3AssaultProgressionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPD3AssaultProgressionSettings, Z_Construct_UPackage__Script_Starbreeze(), TEXT("PD3AssaultProgressionSettings"), sizeof(FPD3AssaultProgressionSettings), Get_Z_Construct_UScriptStruct_FPD3AssaultProgressionSettings_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FPD3AssaultProgressionSettings>()
{
	return FPD3AssaultProgressionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPD3AssaultProgressionSettings(FPD3AssaultProgressionSettings::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("PD3AssaultProgressionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFPD3AssaultProgressionSettings
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFPD3AssaultProgressionSettings()
	{
		UScriptStruct::DeferCppStructOps<FPD3AssaultProgressionSettings>(FName(TEXT("PD3AssaultProgressionSettings")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFPD3AssaultProgressionSettings;
	struct Z_Construct_UScriptStruct_FPD3AssaultProgressionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartAtProgression_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartAtProgression;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SquadArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SquadArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SquadArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3AssaultProgressionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PD3AssaultProgressionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPD3AssaultProgressionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPD3AssaultProgressionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3AssaultProgressionSettings_Statics::NewProp_StartAtProgression_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3AssaultProgressionSettings" },
		{ "ModuleRelativePath", "Public/PD3AssaultProgressionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPD3AssaultProgressionSettings_Statics::NewProp_StartAtProgression = { "StartAtProgression", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3AssaultProgressionSettings, StartAtProgression), METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3AssaultProgressionSettings_Statics::NewProp_StartAtProgression_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3AssaultProgressionSettings_Statics::NewProp_StartAtProgression_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPD3AssaultProgressionSettings_Statics::NewProp_SquadArray_Inner = { "SquadArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPD3SpawnSquad, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3AssaultProgressionSettings_Statics::NewProp_SquadArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3AssaultProgressionSettings" },
		{ "ModuleRelativePath", "Public/PD3AssaultProgressionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPD3AssaultProgressionSettings_Statics::NewProp_SquadArray = { "SquadArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3AssaultProgressionSettings, SquadArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3AssaultProgressionSettings_Statics::NewProp_SquadArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3AssaultProgressionSettings_Statics::NewProp_SquadArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPD3AssaultProgressionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3AssaultProgressionSettings_Statics::NewProp_StartAtProgression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3AssaultProgressionSettings_Statics::NewProp_SquadArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3AssaultProgressionSettings_Statics::NewProp_SquadArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPD3AssaultProgressionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"PD3AssaultProgressionSettings",
		sizeof(FPD3AssaultProgressionSettings),
		alignof(FPD3AssaultProgressionSettings),
		Z_Construct_UScriptStruct_FPD3AssaultProgressionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3AssaultProgressionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3AssaultProgressionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3AssaultProgressionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPD3AssaultProgressionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPD3AssaultProgressionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PD3AssaultProgressionSettings"), sizeof(FPD3AssaultProgressionSettings), Get_Z_Construct_UScriptStruct_FPD3AssaultProgressionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPD3AssaultProgressionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPD3AssaultProgressionSettings_Hash() { return 3099000394U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
