// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSpawnWaveSegmentSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSpawnWaveSegmentSettings() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3PawnVariation_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_APD3PawnSpawnGroup_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISquadOrder_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPawnSpawnPredefined_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZSpawnWaveSegmentSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSpawnWaveSegmentSettings"), sizeof(FSBZSpawnWaveSegmentSettings), Get_Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSpawnWaveSegmentSettings>()
{
	return FSBZSpawnWaveSegmentSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSpawnWaveSegmentSettings(FSBZSpawnWaveSegmentSettings::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSpawnWaveSegmentSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpawnWaveSegmentSettings
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpawnWaveSegmentSettings()
	{
		UScriptStruct::DeferCppStructOps<FSBZSpawnWaveSegmentSettings>(FName(TEXT("SBZSpawnWaveSegmentSettings")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpawnWaveSegmentSettings;
	struct Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSquads_MetaData[];
#endif
		static void NewProp_bUseSquads_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSquads;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnVariations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnVariations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PawnVariations;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnerGroups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnerGroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnerGroups;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SquadOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SquadOrder;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpecificSpawners_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecificSpawners_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpecificSpawners;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSpawnWaveSegmentSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSpawnWaveSegmentSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnWaveSegmentSettings" },
		{ "ModuleRelativePath", "Public/SBZSpawnWaveSegmentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnWaveSegmentSettings, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_bUseSquads_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnWaveSegmentSettings" },
		{ "ModuleRelativePath", "Public/SBZSpawnWaveSegmentSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_bUseSquads_SetBit(void* Obj)
	{
		((FSBZSpawnWaveSegmentSettings*)Obj)->bUseSquads = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_bUseSquads = { "bUseSquads", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSpawnWaveSegmentSettings), &Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_bUseSquads_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_bUseSquads_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_bUseSquads_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_PawnVariations_Inner = { "PawnVariations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPD3PawnVariation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_PawnVariations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnWaveSegmentSettings" },
		{ "ModuleRelativePath", "Public/SBZSpawnWaveSegmentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_PawnVariations = { "PawnVariations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnWaveSegmentSettings, PawnVariations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_PawnVariations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_PawnVariations_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_SpawnerGroups_Inner = { "SpawnerGroups", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APD3PawnSpawnGroup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_SpawnerGroups_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnWaveSegmentSettings" },
		{ "ModuleRelativePath", "Public/SBZSpawnWaveSegmentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_SpawnerGroups = { "SpawnerGroups", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnWaveSegmentSettings, SpawnerGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_SpawnerGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_SpawnerGroups_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_SquadOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnWaveSegmentSettings" },
		{ "ModuleRelativePath", "Public/SBZSpawnWaveSegmentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_SquadOrder = { "SquadOrder", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnWaveSegmentSettings, SquadOrder), Z_Construct_UClass_USBZAISquadOrder_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_SquadOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_SquadOrder_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_SpecificSpawners_Inner = { "SpecificSpawners", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZPawnSpawnPredefined_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_SpecificSpawners_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnWaveSegmentSettings" },
		{ "ModuleRelativePath", "Public/SBZSpawnWaveSegmentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_SpecificSpawners = { "SpecificSpawners", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnWaveSegmentSettings, SpecificSpawners), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_SpecificSpawners_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_SpecificSpawners_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_Weight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnWaveSegmentSettings" },
		{ "ModuleRelativePath", "Public/SBZSpawnWaveSegmentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnWaveSegmentSettings, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_Weight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_bUseSquads,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_PawnVariations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_PawnVariations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_SpawnerGroups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_SpawnerGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_SquadOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_SpecificSpawners_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_SpecificSpawners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::NewProp_Weight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSpawnWaveSegmentSettings",
		sizeof(FSBZSpawnWaveSegmentSettings),
		alignof(FSBZSpawnWaveSegmentSettings),
		Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSpawnWaveSegmentSettings"), sizeof(FSBZSpawnWaveSegmentSettings), Get_Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSpawnWaveSegmentSettings_Hash() { return 1563195191U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
