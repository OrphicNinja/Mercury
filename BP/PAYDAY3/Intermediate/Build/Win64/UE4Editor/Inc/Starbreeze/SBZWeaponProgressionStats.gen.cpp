// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponProgressionStats.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponProgressionStats() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponProgressionStats();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZWeaponProgressionStats::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponProgressionStats_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWeaponProgressionStats, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWeaponProgressionStats"), sizeof(FSBZWeaponProgressionStats), Get_Z_Construct_UScriptStruct_FSBZWeaponProgressionStats_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWeaponProgressionStats>()
{
	return FSBZWeaponProgressionStats::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWeaponProgressionStats(FSBZWeaponProgressionStats::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWeaponProgressionStats"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponProgressionStats
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponProgressionStats()
	{
		UScriptStruct::DeferCppStructOps<FSBZWeaponProgressionStats>(FName(TEXT("SBZWeaponProgressionStats")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponProgressionStats;
	struct Z_Construct_UScriptStruct_FSBZWeaponProgressionStats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponProgressionLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponProgressionLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponProgressionPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponProgressionPoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponProgressionStats_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponProgressionStats.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWeaponProgressionStats_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWeaponProgressionStats>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponProgressionStats_Statics::NewProp_WeaponProgressionLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponProgressionStats" },
		{ "ModuleRelativePath", "Public/SBZWeaponProgressionStats.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZWeaponProgressionStats_Statics::NewProp_WeaponProgressionLevel = { "WeaponProgressionLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponProgressionStats, WeaponProgressionLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponProgressionStats_Statics::NewProp_WeaponProgressionLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponProgressionStats_Statics::NewProp_WeaponProgressionLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponProgressionStats_Statics::NewProp_WeaponProgressionPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponProgressionStats" },
		{ "ModuleRelativePath", "Public/SBZWeaponProgressionStats.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZWeaponProgressionStats_Statics::NewProp_WeaponProgressionPoints = { "WeaponProgressionPoints", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponProgressionStats, WeaponProgressionPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponProgressionStats_Statics::NewProp_WeaponProgressionPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponProgressionStats_Statics::NewProp_WeaponProgressionPoints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWeaponProgressionStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponProgressionStats_Statics::NewProp_WeaponProgressionLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponProgressionStats_Statics::NewProp_WeaponProgressionPoints,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWeaponProgressionStats_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZWeaponProgressionStats",
		sizeof(FSBZWeaponProgressionStats),
		alignof(FSBZWeaponProgressionStats),
		Z_Construct_UScriptStruct_FSBZWeaponProgressionStats_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponProgressionStats_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponProgressionStats_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponProgressionStats_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponProgressionStats()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponProgressionStats_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWeaponProgressionStats"), sizeof(FSBZWeaponProgressionStats), Get_Z_Construct_UScriptStruct_FSBZWeaponProgressionStats_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWeaponProgressionStats_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponProgressionStats_Hash() { return 166384998U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
