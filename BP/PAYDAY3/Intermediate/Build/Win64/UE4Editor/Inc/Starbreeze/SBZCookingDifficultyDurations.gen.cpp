// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCookingDifficultyDurations.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCookingDifficultyDurations() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCookingDifficultyDurations();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
// End Cross Module References
class UScriptStruct* FSBZCookingDifficultyDurations::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCookingDifficultyDurations_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCookingDifficultyDurations, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCookingDifficultyDurations"), sizeof(FSBZCookingDifficultyDurations), Get_Z_Construct_UScriptStruct_FSBZCookingDifficultyDurations_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCookingDifficultyDurations>()
{
	return FSBZCookingDifficultyDurations::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCookingDifficultyDurations(FSBZCookingDifficultyDurations::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCookingDifficultyDurations"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCookingDifficultyDurations
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCookingDifficultyDurations()
	{
		UScriptStruct::DeferCppStructOps<FSBZCookingDifficultyDurations>(FName(TEXT("SBZCookingDifficultyDurations")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCookingDifficultyDurations;
	struct Z_Construct_UScriptStruct_FSBZCookingDifficultyDurations_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnderCookedInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnderCookedInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CookedInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CookedInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverCookedInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverCookedInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCookingDifficultyDurations_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCookingDifficultyDurations.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCookingDifficultyDurations_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCookingDifficultyDurations>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCookingDifficultyDurations_Statics::NewProp_UnderCookedInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCookingDifficultyDurations" },
		{ "ModuleRelativePath", "Public/SBZCookingDifficultyDurations.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZCookingDifficultyDurations_Statics::NewProp_UnderCookedInterval = { "UnderCookedInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCookingDifficultyDurations, UnderCookedInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCookingDifficultyDurations_Statics::NewProp_UnderCookedInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCookingDifficultyDurations_Statics::NewProp_UnderCookedInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCookingDifficultyDurations_Statics::NewProp_CookedInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCookingDifficultyDurations" },
		{ "ModuleRelativePath", "Public/SBZCookingDifficultyDurations.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZCookingDifficultyDurations_Statics::NewProp_CookedInterval = { "CookedInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCookingDifficultyDurations, CookedInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCookingDifficultyDurations_Statics::NewProp_CookedInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCookingDifficultyDurations_Statics::NewProp_CookedInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCookingDifficultyDurations_Statics::NewProp_OverCookedInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCookingDifficultyDurations" },
		{ "ModuleRelativePath", "Public/SBZCookingDifficultyDurations.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZCookingDifficultyDurations_Statics::NewProp_OverCookedInterval = { "OverCookedInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCookingDifficultyDurations, OverCookedInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCookingDifficultyDurations_Statics::NewProp_OverCookedInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCookingDifficultyDurations_Statics::NewProp_OverCookedInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCookingDifficultyDurations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCookingDifficultyDurations_Statics::NewProp_UnderCookedInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCookingDifficultyDurations_Statics::NewProp_CookedInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCookingDifficultyDurations_Statics::NewProp_OverCookedInterval,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCookingDifficultyDurations_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCookingDifficultyDurations",
		sizeof(FSBZCookingDifficultyDurations),
		alignof(FSBZCookingDifficultyDurations),
		Z_Construct_UScriptStruct_FSBZCookingDifficultyDurations_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCookingDifficultyDurations_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCookingDifficultyDurations_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCookingDifficultyDurations_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCookingDifficultyDurations()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCookingDifficultyDurations_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCookingDifficultyDurations"), sizeof(FSBZCookingDifficultyDurations), Get_Z_Construct_UScriptStruct_FSBZCookingDifficultyDurations_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCookingDifficultyDurations_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCookingDifficultyDurations_Hash() { return 2635030831U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
