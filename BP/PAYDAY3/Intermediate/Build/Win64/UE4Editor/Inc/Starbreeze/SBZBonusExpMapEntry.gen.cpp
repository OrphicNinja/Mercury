// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBonusExpMapEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBonusExpMapEntry() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBonusExpMapEntry();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZBonusExpMapEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZBonusExpMapEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZBonusExpMapEntry, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZBonusExpMapEntry"), sizeof(FSBZBonusExpMapEntry), Get_Z_Construct_UScriptStruct_FSBZBonusExpMapEntry_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZBonusExpMapEntry>()
{
	return FSBZBonusExpMapEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZBonusExpMapEntry(FSBZBonusExpMapEntry::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZBonusExpMapEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBonusExpMapEntry
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBonusExpMapEntry()
	{
		UScriptStruct::DeferCppStructOps<FSBZBonusExpMapEntry>(FName(TEXT("SBZBonusExpMapEntry")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZBonusExpMapEntry;
	struct Z_Construct_UScriptStruct_FSBZBonusExpMapEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerformanceObjective_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PerformanceObjective;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GainedExp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GainedExp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBonusExpMapEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZBonusExpMapEntry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZBonusExpMapEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZBonusExpMapEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBonusExpMapEntry_Statics::NewProp_PerformanceObjective_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBonusExpMapEntry" },
		{ "ModuleRelativePath", "Public/SBZBonusExpMapEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZBonusExpMapEntry_Statics::NewProp_PerformanceObjective = { "PerformanceObjective", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBonusExpMapEntry, PerformanceObjective), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBonusExpMapEntry_Statics::NewProp_PerformanceObjective_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBonusExpMapEntry_Statics::NewProp_PerformanceObjective_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBonusExpMapEntry_Statics::NewProp_GainedExp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBonusExpMapEntry" },
		{ "ModuleRelativePath", "Public/SBZBonusExpMapEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZBonusExpMapEntry_Statics::NewProp_GainedExp = { "GainedExp", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBonusExpMapEntry, GainedExp), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBonusExpMapEntry_Statics::NewProp_GainedExp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBonusExpMapEntry_Statics::NewProp_GainedExp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZBonusExpMapEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBonusExpMapEntry_Statics::NewProp_PerformanceObjective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBonusExpMapEntry_Statics::NewProp_GainedExp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZBonusExpMapEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZBonusExpMapEntry",
		sizeof(FSBZBonusExpMapEntry),
		alignof(FSBZBonusExpMapEntry),
		Z_Construct_UScriptStruct_FSBZBonusExpMapEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBonusExpMapEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBonusExpMapEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBonusExpMapEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZBonusExpMapEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZBonusExpMapEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZBonusExpMapEntry"), sizeof(FSBZBonusExpMapEntry), Get_Z_Construct_UScriptStruct_FSBZBonusExpMapEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZBonusExpMapEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZBonusExpMapEntry_Hash() { return 1554916804U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
