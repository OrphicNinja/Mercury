// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIGasGrenadeDifficultyData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIGasGrenadeDifficultyData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZAIGasGrenadeDifficultyData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAIGasGrenadeDifficultyData"), sizeof(FSBZAIGasGrenadeDifficultyData), Get_Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAIGasGrenadeDifficultyData>()
{
	return FSBZAIGasGrenadeDifficultyData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAIGasGrenadeDifficultyData(FSBZAIGasGrenadeDifficultyData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAIGasGrenadeDifficultyData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAIGasGrenadeDifficultyData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAIGasGrenadeDifficultyData()
	{
		UScriptStruct::DeferCppStructOps<FSBZAIGasGrenadeDifficultyData>(FName(TEXT("SBZAIGasGrenadeDifficultyData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAIGasGrenadeDifficultyData;
	struct Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamagePerSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamagePerSecond;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverHealDamageMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverHealDamageMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorPenetration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArmorPenetration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DropDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAIGasGrenadeDifficultyData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAIGasGrenadeDifficultyData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::NewProp_DamagePerSecond_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIGasGrenadeDifficultyData" },
		{ "ModuleRelativePath", "Public/SBZAIGasGrenadeDifficultyData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::NewProp_DamagePerSecond = { "DamagePerSecond", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAIGasGrenadeDifficultyData, DamagePerSecond), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::NewProp_DamagePerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::NewProp_DamagePerSecond_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::NewProp_DurationSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIGasGrenadeDifficultyData" },
		{ "ModuleRelativePath", "Public/SBZAIGasGrenadeDifficultyData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::NewProp_DurationSeconds = { "DurationSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAIGasGrenadeDifficultyData, DurationSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::NewProp_DurationSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::NewProp_DurationSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::NewProp_TickSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIGasGrenadeDifficultyData" },
		{ "ModuleRelativePath", "Public/SBZAIGasGrenadeDifficultyData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::NewProp_TickSeconds = { "TickSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAIGasGrenadeDifficultyData, TickSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::NewProp_TickSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::NewProp_TickSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::NewProp_OverHealDamageMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIGasGrenadeDifficultyData" },
		{ "ModuleRelativePath", "Public/SBZAIGasGrenadeDifficultyData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::NewProp_OverHealDamageMultiplier = { "OverHealDamageMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAIGasGrenadeDifficultyData, OverHealDamageMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::NewProp_OverHealDamageMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::NewProp_OverHealDamageMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::NewProp_ArmorPenetration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIGasGrenadeDifficultyData" },
		{ "ModuleRelativePath", "Public/SBZAIGasGrenadeDifficultyData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::NewProp_ArmorPenetration = { "ArmorPenetration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAIGasGrenadeDifficultyData, ArmorPenetration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::NewProp_ArmorPenetration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::NewProp_ArmorPenetration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::NewProp_DropDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIGasGrenadeDifficultyData" },
		{ "ModuleRelativePath", "Public/SBZAIGasGrenadeDifficultyData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::NewProp_DropDamage = { "DropDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAIGasGrenadeDifficultyData, DropDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::NewProp_DropDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::NewProp_DropDamage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::NewProp_DamagePerSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::NewProp_DurationSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::NewProp_TickSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::NewProp_OverHealDamageMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::NewProp_ArmorPenetration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::NewProp_DropDamage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAIGasGrenadeDifficultyData",
		sizeof(FSBZAIGasGrenadeDifficultyData),
		alignof(FSBZAIGasGrenadeDifficultyData),
		Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAIGasGrenadeDifficultyData"), sizeof(FSBZAIGasGrenadeDifficultyData), Get_Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAIGasGrenadeDifficultyData_Hash() { return 186202080U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
