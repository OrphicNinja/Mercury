// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBoneDamageMultiplier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBoneDamageMultiplier() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZBoneDamageMultiplier::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZBoneDamageMultiplier"), sizeof(FSBZBoneDamageMultiplier), Get_Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZBoneDamageMultiplier>()
{
	return FSBZBoneDamageMultiplier::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZBoneDamageMultiplier(FSBZBoneDamageMultiplier::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZBoneDamageMultiplier"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBoneDamageMultiplier
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBoneDamageMultiplier()
	{
		UScriptStruct::DeferCppStructOps<FSBZBoneDamageMultiplier>(FName(TEXT("SBZBoneDamageMultiplier")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZBoneDamageMultiplier;
	struct Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCritical_MetaData[];
#endif
		static void NewProp_bIsCritical_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCritical;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CriticalMultiplierReduction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CriticalMultiplierReduction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZBoneDamageMultiplier.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZBoneDamageMultiplier>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier_Statics::NewProp_bIsCritical_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBoneDamageMultiplier" },
		{ "ModuleRelativePath", "Public/SBZBoneDamageMultiplier.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier_Statics::NewProp_bIsCritical_SetBit(void* Obj)
	{
		((FSBZBoneDamageMultiplier*)Obj)->bIsCritical = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier_Statics::NewProp_bIsCritical = { "bIsCritical", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZBoneDamageMultiplier), &Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier_Statics::NewProp_bIsCritical_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier_Statics::NewProp_bIsCritical_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier_Statics::NewProp_bIsCritical_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier_Statics::NewProp_Multiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBoneDamageMultiplier" },
		{ "ModuleRelativePath", "Public/SBZBoneDamageMultiplier.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBoneDamageMultiplier, Multiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier_Statics::NewProp_Multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier_Statics::NewProp_Multiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier_Statics::NewProp_CriticalMultiplierReduction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBoneDamageMultiplier" },
		{ "ModuleRelativePath", "Public/SBZBoneDamageMultiplier.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier_Statics::NewProp_CriticalMultiplierReduction = { "CriticalMultiplierReduction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBoneDamageMultiplier, CriticalMultiplierReduction), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier_Statics::NewProp_CriticalMultiplierReduction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier_Statics::NewProp_CriticalMultiplierReduction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier_Statics::NewProp_bIsCritical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier_Statics::NewProp_Multiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier_Statics::NewProp_CriticalMultiplierReduction,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZBoneDamageMultiplier",
		sizeof(FSBZBoneDamageMultiplier),
		alignof(FSBZBoneDamageMultiplier),
		Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZBoneDamageMultiplier"), sizeof(FSBZBoneDamageMultiplier), Get_Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZBoneDamageMultiplier_Hash() { return 2808413529U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
