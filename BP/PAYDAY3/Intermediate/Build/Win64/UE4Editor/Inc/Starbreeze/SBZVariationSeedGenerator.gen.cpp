// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVariationSeedGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVariationSeedGenerator() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVariationSeedGenerator();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVariationDataIndexTracker();
// End Cross Module References
class UScriptStruct* FSBZVariationSeedGenerator::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZVariationSeedGenerator_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZVariationSeedGenerator, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZVariationSeedGenerator"), sizeof(FSBZVariationSeedGenerator), Get_Z_Construct_UScriptStruct_FSBZVariationSeedGenerator_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZVariationSeedGenerator>()
{
	return FSBZVariationSeedGenerator::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZVariationSeedGenerator(FSBZVariationSeedGenerator::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZVariationSeedGenerator"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVariationSeedGenerator
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVariationSeedGenerator()
	{
		UScriptStruct::DeferCppStructOps<FSBZVariationSeedGenerator>(FName(TEXT("SBZVariationSeedGenerator")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZVariationSeedGenerator;
	struct Z_Construct_UScriptStruct_FSBZVariationSeedGenerator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VariationDataIndexTrackers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariationDataIndexTrackers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VariationDataIndexTrackers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVariationSeedGenerator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZVariationSeedGenerator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZVariationSeedGenerator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZVariationSeedGenerator>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZVariationSeedGenerator_Statics::NewProp_VariationDataIndexTrackers_Inner = { "VariationDataIndexTrackers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZVariationDataIndexTracker, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVariationSeedGenerator_Statics::NewProp_VariationDataIndexTrackers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVariationSeedGenerator" },
		{ "ModuleRelativePath", "Public/SBZVariationSeedGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZVariationSeedGenerator_Statics::NewProp_VariationDataIndexTrackers = { "VariationDataIndexTrackers", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZVariationSeedGenerator, VariationDataIndexTrackers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVariationSeedGenerator_Statics::NewProp_VariationDataIndexTrackers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVariationSeedGenerator_Statics::NewProp_VariationDataIndexTrackers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZVariationSeedGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVariationSeedGenerator_Statics::NewProp_VariationDataIndexTrackers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVariationSeedGenerator_Statics::NewProp_VariationDataIndexTrackers,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZVariationSeedGenerator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZVariationSeedGenerator",
		sizeof(FSBZVariationSeedGenerator),
		alignof(FSBZVariationSeedGenerator),
		Z_Construct_UScriptStruct_FSBZVariationSeedGenerator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVariationSeedGenerator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVariationSeedGenerator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVariationSeedGenerator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZVariationSeedGenerator()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZVariationSeedGenerator_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZVariationSeedGenerator"), sizeof(FSBZVariationSeedGenerator), Get_Z_Construct_UScriptStruct_FSBZVariationSeedGenerator_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZVariationSeedGenerator_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZVariationSeedGenerator_Hash() { return 1030952306U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
