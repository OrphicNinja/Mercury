// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSpawnWaveSquadOrderLimits.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSpawnWaveSquadOrderLimits() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSpawnWaveSquadOrderLimits();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZSpawnWaveSquadOrderLimits::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSpawnWaveSquadOrderLimits_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSpawnWaveSquadOrderLimits, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSpawnWaveSquadOrderLimits"), sizeof(FSBZSpawnWaveSquadOrderLimits), Get_Z_Construct_UScriptStruct_FSBZSpawnWaveSquadOrderLimits_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSpawnWaveSquadOrderLimits>()
{
	return FSBZSpawnWaveSquadOrderLimits::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSpawnWaveSquadOrderLimits(FSBZSpawnWaveSquadOrderLimits::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSpawnWaveSquadOrderLimits"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpawnWaveSquadOrderLimits
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpawnWaveSquadOrderLimits()
	{
		UScriptStruct::DeferCppStructOps<FSBZSpawnWaveSquadOrderLimits>(FName(TEXT("SBZSpawnWaveSquadOrderLimits")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpawnWaveSquadOrderLimits;
	struct Z_Construct_UScriptStruct_FSBZSpawnWaveSquadOrderLimits_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderCountLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OrderCountLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrderCooldown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnWaveSquadOrderLimits_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSpawnWaveSquadOrderLimits.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSpawnWaveSquadOrderLimits_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSpawnWaveSquadOrderLimits>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnWaveSquadOrderLimits_Statics::NewProp_OrderCountLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnWaveSquadOrderLimits" },
		{ "ModuleRelativePath", "Public/SBZSpawnWaveSquadOrderLimits.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZSpawnWaveSquadOrderLimits_Statics::NewProp_OrderCountLimit = { "OrderCountLimit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnWaveSquadOrderLimits, OrderCountLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnWaveSquadOrderLimits_Statics::NewProp_OrderCountLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnWaveSquadOrderLimits_Statics::NewProp_OrderCountLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpawnWaveSquadOrderLimits_Statics::NewProp_OrderCooldown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnWaveSquadOrderLimits" },
		{ "ModuleRelativePath", "Public/SBZSpawnWaveSquadOrderLimits.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZSpawnWaveSquadOrderLimits_Statics::NewProp_OrderCooldown = { "OrderCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpawnWaveSquadOrderLimits, OrderCooldown), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnWaveSquadOrderLimits_Statics::NewProp_OrderCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnWaveSquadOrderLimits_Statics::NewProp_OrderCooldown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSpawnWaveSquadOrderLimits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnWaveSquadOrderLimits_Statics::NewProp_OrderCountLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpawnWaveSquadOrderLimits_Statics::NewProp_OrderCooldown,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSpawnWaveSquadOrderLimits_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSpawnWaveSquadOrderLimits",
		sizeof(FSBZSpawnWaveSquadOrderLimits),
		alignof(FSBZSpawnWaveSquadOrderLimits),
		Z_Construct_UScriptStruct_FSBZSpawnWaveSquadOrderLimits_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnWaveSquadOrderLimits_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpawnWaveSquadOrderLimits_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpawnWaveSquadOrderLimits_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSpawnWaveSquadOrderLimits()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSpawnWaveSquadOrderLimits_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSpawnWaveSquadOrderLimits"), sizeof(FSBZSpawnWaveSquadOrderLimits), Get_Z_Construct_UScriptStruct_FSBZSpawnWaveSquadOrderLimits_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSpawnWaveSquadOrderLimits_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSpawnWaveSquadOrderLimits_Hash() { return 2803159547U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
