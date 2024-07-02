// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSquadLimits.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSquadLimits() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSquadLimits();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZSquadLimits::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSquadLimits_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSquadLimits, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSquadLimits"), sizeof(FSBZSquadLimits), Get_Z_Construct_UScriptStruct_FSBZSquadLimits_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSquadLimits>()
{
	return FSBZSquadLimits::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSquadLimits(FSBZSquadLimits::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSquadLimits"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSquadLimits
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSquadLimits()
	{
		UScriptStruct::DeferCppStructOps<FSBZSquadLimits>(FName(TEXT("SBZSquadLimits")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSquadLimits;
	struct Z_Construct_UScriptStruct_FSBZSquadLimits_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumSquadsAlive_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxNumSquadsAlive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumSquadsPerWave_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxNumSquadsPerWave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumPawnsAlive_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxNumPawnsAlive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumPawnsPerPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxNumPawnsPerPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SquadCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SquadCooldown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSquadLimits_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSquadLimits.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSquadLimits_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSquadLimits>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSquadLimits_Statics::NewProp_MaxNumSquadsAlive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSquadLimits" },
		{ "ModuleRelativePath", "Public/SBZSquadLimits.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZSquadLimits_Statics::NewProp_MaxNumSquadsAlive = { "MaxNumSquadsAlive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSquadLimits, MaxNumSquadsAlive), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSquadLimits_Statics::NewProp_MaxNumSquadsAlive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSquadLimits_Statics::NewProp_MaxNumSquadsAlive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSquadLimits_Statics::NewProp_MaxNumSquadsPerWave_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSquadLimits" },
		{ "ModuleRelativePath", "Public/SBZSquadLimits.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZSquadLimits_Statics::NewProp_MaxNumSquadsPerWave = { "MaxNumSquadsPerWave", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSquadLimits, MaxNumSquadsPerWave), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSquadLimits_Statics::NewProp_MaxNumSquadsPerWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSquadLimits_Statics::NewProp_MaxNumSquadsPerWave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSquadLimits_Statics::NewProp_MaxNumPawnsAlive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSquadLimits" },
		{ "ModuleRelativePath", "Public/SBZSquadLimits.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZSquadLimits_Statics::NewProp_MaxNumPawnsAlive = { "MaxNumPawnsAlive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSquadLimits, MaxNumPawnsAlive), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSquadLimits_Statics::NewProp_MaxNumPawnsAlive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSquadLimits_Statics::NewProp_MaxNumPawnsAlive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSquadLimits_Statics::NewProp_MaxNumPawnsPerPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSquadLimits" },
		{ "ModuleRelativePath", "Public/SBZSquadLimits.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZSquadLimits_Statics::NewProp_MaxNumPawnsPerPlayer = { "MaxNumPawnsPerPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSquadLimits, MaxNumPawnsPerPlayer), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSquadLimits_Statics::NewProp_MaxNumPawnsPerPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSquadLimits_Statics::NewProp_MaxNumPawnsPerPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSquadLimits_Statics::NewProp_SquadCooldown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSquadLimits" },
		{ "ModuleRelativePath", "Public/SBZSquadLimits.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZSquadLimits_Statics::NewProp_SquadCooldown = { "SquadCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSquadLimits, SquadCooldown), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSquadLimits_Statics::NewProp_SquadCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSquadLimits_Statics::NewProp_SquadCooldown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSquadLimits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSquadLimits_Statics::NewProp_MaxNumSquadsAlive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSquadLimits_Statics::NewProp_MaxNumSquadsPerWave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSquadLimits_Statics::NewProp_MaxNumPawnsAlive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSquadLimits_Statics::NewProp_MaxNumPawnsPerPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSquadLimits_Statics::NewProp_SquadCooldown,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSquadLimits_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSquadLimits",
		sizeof(FSBZSquadLimits),
		alignof(FSBZSquadLimits),
		Z_Construct_UScriptStruct_FSBZSquadLimits_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSquadLimits_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSquadLimits_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSquadLimits_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSquadLimits()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSquadLimits_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSquadLimits"), sizeof(FSBZSquadLimits), Get_Z_Construct_UScriptStruct_FSBZSquadLimits_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSquadLimits_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSquadLimits_Hash() { return 884616922U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
