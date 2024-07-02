// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlaceableToolActivationTargetData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlaceableToolActivationTargetData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlaceableToolActivationTargetData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZPlaceableToolActivationTargetData>() == std::is_polymorphic<FGameplayAbilityTargetData>(), "USTRUCT FSBZPlaceableToolActivationTargetData cannot be polymorphic unless super FGameplayAbilityTargetData is polymorphic");

class UScriptStruct* FSBZPlaceableToolActivationTargetData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPlaceableToolActivationTargetData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPlaceableToolActivationTargetData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPlaceableToolActivationTargetData"), sizeof(FSBZPlaceableToolActivationTargetData), Get_Z_Construct_UScriptStruct_FSBZPlaceableToolActivationTargetData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPlaceableToolActivationTargetData>()
{
	return FSBZPlaceableToolActivationTargetData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPlaceableToolActivationTargetData(FSBZPlaceableToolActivationTargetData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPlaceableToolActivationTargetData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlaceableToolActivationTargetData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlaceableToolActivationTargetData()
	{
		UScriptStruct::DeferCppStructOps<FSBZPlaceableToolActivationTargetData>(FName(TEXT("SBZPlaceableToolActivationTargetData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlaceableToolActivationTargetData;
	struct Z_Construct_UScriptStruct_FSBZPlaceableToolActivationTargetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlaceableToolActivationTargetData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPlaceableToolActivationTargetData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPlaceableToolActivationTargetData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPlaceableToolActivationTargetData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPlaceableToolActivationTargetData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FGameplayAbilityTargetData,
		&NewStructOps,
		"SBZPlaceableToolActivationTargetData",
		sizeof(FSBZPlaceableToolActivationTargetData),
		alignof(FSBZPlaceableToolActivationTargetData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlaceableToolActivationTargetData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlaceableToolActivationTargetData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPlaceableToolActivationTargetData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPlaceableToolActivationTargetData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPlaceableToolActivationTargetData"), sizeof(FSBZPlaceableToolActivationTargetData), Get_Z_Construct_UScriptStruct_FSBZPlaceableToolActivationTargetData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPlaceableToolActivationTargetData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPlaceableToolActivationTargetData_Hash() { return 3071978128U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
