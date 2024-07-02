// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZShoveHumanShieldTargetData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZShoveHumanShieldTargetData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZShoveHumanShieldTargetData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZShoveHumanShieldTargetData>() == std::is_polymorphic<FGameplayAbilityTargetData>(), "USTRUCT FSBZShoveHumanShieldTargetData cannot be polymorphic unless super FGameplayAbilityTargetData is polymorphic");

class UScriptStruct* FSBZShoveHumanShieldTargetData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZShoveHumanShieldTargetData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZShoveHumanShieldTargetData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZShoveHumanShieldTargetData"), sizeof(FSBZShoveHumanShieldTargetData), Get_Z_Construct_UScriptStruct_FSBZShoveHumanShieldTargetData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZShoveHumanShieldTargetData>()
{
	return FSBZShoveHumanShieldTargetData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZShoveHumanShieldTargetData(FSBZShoveHumanShieldTargetData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZShoveHumanShieldTargetData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZShoveHumanShieldTargetData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZShoveHumanShieldTargetData()
	{
		UScriptStruct::DeferCppStructOps<FSBZShoveHumanShieldTargetData>(FName(TEXT("SBZShoveHumanShieldTargetData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZShoveHumanShieldTargetData;
	struct Z_Construct_UScriptStruct_FSBZShoveHumanShieldTargetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZShoveHumanShieldTargetData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZShoveHumanShieldTargetData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZShoveHumanShieldTargetData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZShoveHumanShieldTargetData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZShoveHumanShieldTargetData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FGameplayAbilityTargetData,
		&NewStructOps,
		"SBZShoveHumanShieldTargetData",
		sizeof(FSBZShoveHumanShieldTargetData),
		alignof(FSBZShoveHumanShieldTargetData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZShoveHumanShieldTargetData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZShoveHumanShieldTargetData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZShoveHumanShieldTargetData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZShoveHumanShieldTargetData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZShoveHumanShieldTargetData"), sizeof(FSBZShoveHumanShieldTargetData), Get_Z_Construct_UScriptStruct_FSBZShoveHumanShieldTargetData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZShoveHumanShieldTargetData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZShoveHumanShieldTargetData_Hash() { return 2450338647U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
