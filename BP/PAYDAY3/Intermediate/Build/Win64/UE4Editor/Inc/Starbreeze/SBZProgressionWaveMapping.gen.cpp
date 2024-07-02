// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZProgressionWaveMapping.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZProgressionWaveMapping() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZProgressionWaveMapping();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZProgressionWaveMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZProgressionWaveMapping_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZProgressionWaveMapping, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZProgressionWaveMapping"), sizeof(FSBZProgressionWaveMapping), Get_Z_Construct_UScriptStruct_FSBZProgressionWaveMapping_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZProgressionWaveMapping>()
{
	return FSBZProgressionWaveMapping::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZProgressionWaveMapping(FSBZProgressionWaveMapping::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZProgressionWaveMapping"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZProgressionWaveMapping
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZProgressionWaveMapping()
	{
		UScriptStruct::DeferCppStructOps<FSBZProgressionWaveMapping>(FName(TEXT("SBZProgressionWaveMapping")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZProgressionWaveMapping;
	struct Z_Construct_UScriptStruct_FSBZProgressionWaveMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progression_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Progression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaveIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WaveIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionWaveMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZProgressionWaveMapping.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZProgressionWaveMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZProgressionWaveMapping>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionWaveMapping_Statics::NewProp_Progression_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProgressionWaveMapping" },
		{ "ModuleRelativePath", "Public/SBZProgressionWaveMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZProgressionWaveMapping_Statics::NewProp_Progression = { "Progression", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZProgressionWaveMapping, Progression), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionWaveMapping_Statics::NewProp_Progression_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionWaveMapping_Statics::NewProp_Progression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionWaveMapping_Statics::NewProp_WaveIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProgressionWaveMapping" },
		{ "ModuleRelativePath", "Public/SBZProgressionWaveMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZProgressionWaveMapping_Statics::NewProp_WaveIndex = { "WaveIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZProgressionWaveMapping, WaveIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionWaveMapping_Statics::NewProp_WaveIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionWaveMapping_Statics::NewProp_WaveIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZProgressionWaveMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionWaveMapping_Statics::NewProp_Progression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionWaveMapping_Statics::NewProp_WaveIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZProgressionWaveMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZProgressionWaveMapping",
		sizeof(FSBZProgressionWaveMapping),
		alignof(FSBZProgressionWaveMapping),
		Z_Construct_UScriptStruct_FSBZProgressionWaveMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionWaveMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionWaveMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionWaveMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZProgressionWaveMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZProgressionWaveMapping_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZProgressionWaveMapping"), sizeof(FSBZProgressionWaveMapping), Get_Z_Construct_UScriptStruct_FSBZProgressionWaveMapping_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZProgressionWaveMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZProgressionWaveMapping_Hash() { return 806327442U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
