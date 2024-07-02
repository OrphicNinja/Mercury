// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZFallDamageTargetData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZFallDamageTargetData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZFallDamageTargetData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZFallDamageTargetData>() == std::is_polymorphic<FGameplayAbilityTargetData>(), "USTRUCT FSBZFallDamageTargetData cannot be polymorphic unless super FGameplayAbilityTargetData is polymorphic");

class UScriptStruct* FSBZFallDamageTargetData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZFallDamageTargetData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZFallDamageTargetData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZFallDamageTargetData"), sizeof(FSBZFallDamageTargetData), Get_Z_Construct_UScriptStruct_FSBZFallDamageTargetData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZFallDamageTargetData>()
{
	return FSBZFallDamageTargetData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZFallDamageTargetData(FSBZFallDamageTargetData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZFallDamageTargetData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZFallDamageTargetData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZFallDamageTargetData()
	{
		UScriptStruct::DeferCppStructOps<FSBZFallDamageTargetData>(FName(TEXT("SBZFallDamageTargetData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZFallDamageTargetData;
	struct Z_Construct_UScriptStruct_FSBZFallDamageTargetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFallDamageTargetData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZFallDamageTargetData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZFallDamageTargetData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZFallDamageTargetData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZFallDamageTargetData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FGameplayAbilityTargetData,
		&NewStructOps,
		"SBZFallDamageTargetData",
		sizeof(FSBZFallDamageTargetData),
		alignof(FSBZFallDamageTargetData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFallDamageTargetData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFallDamageTargetData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZFallDamageTargetData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZFallDamageTargetData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZFallDamageTargetData"), sizeof(FSBZFallDamageTargetData), Get_Z_Construct_UScriptStruct_FSBZFallDamageTargetData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZFallDamageTargetData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZFallDamageTargetData_Hash() { return 2202039000U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
