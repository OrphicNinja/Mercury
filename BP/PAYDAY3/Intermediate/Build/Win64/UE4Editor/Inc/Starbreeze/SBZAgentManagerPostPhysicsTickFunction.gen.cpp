// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAgentManagerPostPhysicsTickFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAgentManagerPostPhysicsTickFunction() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentManagerPostPhysicsTickFunction();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickFunction();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZAgentManagerPostPhysicsTickFunction>() == std::is_polymorphic<FTickFunction>(), "USTRUCT FSBZAgentManagerPostPhysicsTickFunction cannot be polymorphic unless super FTickFunction is polymorphic");

class UScriptStruct* FSBZAgentManagerPostPhysicsTickFunction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAgentManagerPostPhysicsTickFunction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAgentManagerPostPhysicsTickFunction, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAgentManagerPostPhysicsTickFunction"), sizeof(FSBZAgentManagerPostPhysicsTickFunction), Get_Z_Construct_UScriptStruct_FSBZAgentManagerPostPhysicsTickFunction_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAgentManagerPostPhysicsTickFunction>()
{
	return FSBZAgentManagerPostPhysicsTickFunction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAgentManagerPostPhysicsTickFunction(FSBZAgentManagerPostPhysicsTickFunction::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAgentManagerPostPhysicsTickFunction"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentManagerPostPhysicsTickFunction
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentManagerPostPhysicsTickFunction()
	{
		UScriptStruct::DeferCppStructOps<FSBZAgentManagerPostPhysicsTickFunction>(FName(TEXT("SBZAgentManagerPostPhysicsTickFunction")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentManagerPostPhysicsTickFunction;
	struct Z_Construct_UScriptStruct_FSBZAgentManagerPostPhysicsTickFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentManagerPostPhysicsTickFunction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAgentManagerPostPhysicsTickFunction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAgentManagerPostPhysicsTickFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAgentManagerPostPhysicsTickFunction>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAgentManagerPostPhysicsTickFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FTickFunction,
		&NewStructOps,
		"SBZAgentManagerPostPhysicsTickFunction",
		sizeof(FSBZAgentManagerPostPhysicsTickFunction),
		alignof(FSBZAgentManagerPostPhysicsTickFunction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentManagerPostPhysicsTickFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentManagerPostPhysicsTickFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentManagerPostPhysicsTickFunction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAgentManagerPostPhysicsTickFunction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAgentManagerPostPhysicsTickFunction"), sizeof(FSBZAgentManagerPostPhysicsTickFunction), Get_Z_Construct_UScriptStruct_FSBZAgentManagerPostPhysicsTickFunction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAgentManagerPostPhysicsTickFunction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAgentManagerPostPhysicsTickFunction_Hash() { return 1215902362U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
