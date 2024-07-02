// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponSpreadStanceMultipliers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponSpreadStanceMultipliers() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZWeaponSpreadStanceMultipliers::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWeaponSpreadStanceMultipliers"), sizeof(FSBZWeaponSpreadStanceMultipliers), Get_Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWeaponSpreadStanceMultipliers>()
{
	return FSBZWeaponSpreadStanceMultipliers::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers(FSBZWeaponSpreadStanceMultipliers::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWeaponSpreadStanceMultipliers"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponSpreadStanceMultipliers
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponSpreadStanceMultipliers()
	{
		UScriptStruct::DeferCppStructOps<FSBZWeaponSpreadStanceMultipliers>(FName(TEXT("SBZWeaponSpreadStanceMultipliers")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponSpreadStanceMultipliers;
	struct Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TasedSpread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TasedSpread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cap_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Cap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Increment_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Increment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResetTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecayRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponSpreadStanceMultipliers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWeaponSpreadStanceMultipliers>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_Spread_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSpreadStanceMultipliers" },
		{ "ModuleRelativePath", "Public/SBZWeaponSpreadStanceMultipliers.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponSpreadStanceMultipliers, Spread), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_Spread_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_Spread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_TasedSpread_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSpreadStanceMultipliers" },
		{ "ModuleRelativePath", "Public/SBZWeaponSpreadStanceMultipliers.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_TasedSpread = { "TasedSpread", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponSpreadStanceMultipliers, TasedSpread), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_TasedSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_TasedSpread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_Start_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSpreadStanceMultipliers" },
		{ "ModuleRelativePath", "Public/SBZWeaponSpreadStanceMultipliers.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponSpreadStanceMultipliers, Start), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_Cap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSpreadStanceMultipliers" },
		{ "ModuleRelativePath", "Public/SBZWeaponSpreadStanceMultipliers.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_Cap = { "Cap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponSpreadStanceMultipliers, Cap), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_Cap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_Cap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_Increment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSpreadStanceMultipliers" },
		{ "ModuleRelativePath", "Public/SBZWeaponSpreadStanceMultipliers.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_Increment = { "Increment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponSpreadStanceMultipliers, Increment), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_Increment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_Increment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_ResetTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSpreadStanceMultipliers" },
		{ "ModuleRelativePath", "Public/SBZWeaponSpreadStanceMultipliers.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_ResetTime = { "ResetTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponSpreadStanceMultipliers, ResetTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_ResetTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_ResetTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_DecayRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSpreadStanceMultipliers" },
		{ "ModuleRelativePath", "Public/SBZWeaponSpreadStanceMultipliers.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_DecayRate = { "DecayRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponSpreadStanceMultipliers, DecayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_DecayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_DecayRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_Spread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_TasedSpread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_Cap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_Increment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_ResetTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::NewProp_DecayRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZWeaponSpreadStanceMultipliers",
		sizeof(FSBZWeaponSpreadStanceMultipliers),
		alignof(FSBZWeaponSpreadStanceMultipliers),
		Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWeaponSpreadStanceMultipliers"), sizeof(FSBZWeaponSpreadStanceMultipliers), Get_Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponSpreadStanceMultipliers_Hash() { return 1165134326U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
