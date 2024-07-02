// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillTriggeredHurtTargetData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillTriggeredHurtTargetData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSkillTriggeredHurtTargetData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMeleeTargetData();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZSkillTriggeredHurtTargetData>() == std::is_polymorphic<FSBZMeleeTargetData>(), "USTRUCT FSBZSkillTriggeredHurtTargetData cannot be polymorphic unless super FSBZMeleeTargetData is polymorphic");

class UScriptStruct* FSBZSkillTriggeredHurtTargetData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSkillTriggeredHurtTargetData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSkillTriggeredHurtTargetData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSkillTriggeredHurtTargetData"), sizeof(FSBZSkillTriggeredHurtTargetData), Get_Z_Construct_UScriptStruct_FSBZSkillTriggeredHurtTargetData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSkillTriggeredHurtTargetData>()
{
	return FSBZSkillTriggeredHurtTargetData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSkillTriggeredHurtTargetData(FSBZSkillTriggeredHurtTargetData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSkillTriggeredHurtTargetData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSkillTriggeredHurtTargetData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSkillTriggeredHurtTargetData()
	{
		UScriptStruct::DeferCppStructOps<FSBZSkillTriggeredHurtTargetData>(FName(TEXT("SBZSkillTriggeredHurtTargetData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSkillTriggeredHurtTargetData;
	struct Z_Construct_UScriptStruct_FSBZSkillTriggeredHurtTargetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSkillTriggeredHurtTargetData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillTriggeredHurtTargetData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSkillTriggeredHurtTargetData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSkillTriggeredHurtTargetData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSkillTriggeredHurtTargetData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZMeleeTargetData,
		&NewStructOps,
		"SBZSkillTriggeredHurtTargetData",
		sizeof(FSBZSkillTriggeredHurtTargetData),
		alignof(FSBZSkillTriggeredHurtTargetData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSkillTriggeredHurtTargetData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSkillTriggeredHurtTargetData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSkillTriggeredHurtTargetData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSkillTriggeredHurtTargetData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSkillTriggeredHurtTargetData"), sizeof(FSBZSkillTriggeredHurtTargetData), Get_Z_Construct_UScriptStruct_FSBZSkillTriggeredHurtTargetData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSkillTriggeredHurtTargetData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSkillTriggeredHurtTargetData_Hash() { return 4231709302U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
