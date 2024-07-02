// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponStats.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponStats() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponStats();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZWeaponStats::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponStats_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWeaponStats, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWeaponStats"), sizeof(FSBZWeaponStats), Get_Z_Construct_UScriptStruct_FSBZWeaponStats_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWeaponStats>()
{
	return FSBZWeaponStats::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWeaponStats(FSBZWeaponStats::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWeaponStats"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponStats
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponStats()
	{
		UScriptStruct::DeferCppStructOps<FSBZWeaponStats>(FName(TEXT("SBZWeaponStats")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponStats;
	struct Z_Construct_UScriptStruct_FSBZWeaponStats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Recoil_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Recoil;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stability_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Stability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Accuracy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Accuracy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handling_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Handling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponStats.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWeaponStats>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::NewProp_Damage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponStats" },
		{ "ModuleRelativePath", "Public/SBZWeaponStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponStats, Damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::NewProp_Recoil_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponStats" },
		{ "ModuleRelativePath", "Public/SBZWeaponStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::NewProp_Recoil = { "Recoil", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponStats, Recoil), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::NewProp_Recoil_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::NewProp_Recoil_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::NewProp_Stability_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponStats" },
		{ "ModuleRelativePath", "Public/SBZWeaponStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::NewProp_Stability = { "Stability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponStats, Stability), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::NewProp_Stability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::NewProp_Stability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::NewProp_Accuracy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponStats" },
		{ "ModuleRelativePath", "Public/SBZWeaponStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::NewProp_Accuracy = { "Accuracy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponStats, Accuracy), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::NewProp_Accuracy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::NewProp_Accuracy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::NewProp_Handling_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponStats" },
		{ "ModuleRelativePath", "Public/SBZWeaponStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::NewProp_Handling = { "Handling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponStats, Handling), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::NewProp_Handling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::NewProp_Handling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::NewProp_FireRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponStats" },
		{ "ModuleRelativePath", "Public/SBZWeaponStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponStats, FireRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::NewProp_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::NewProp_FireRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::NewProp_Recoil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::NewProp_Stability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::NewProp_Accuracy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::NewProp_Handling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::NewProp_FireRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZWeaponStats",
		sizeof(FSBZWeaponStats),
		alignof(FSBZWeaponStats),
		Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponStats()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponStats_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWeaponStats"), sizeof(FSBZWeaponStats), Get_Z_Construct_UScriptStruct_FSBZWeaponStats_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWeaponStats_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponStats_Hash() { return 778534872U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
