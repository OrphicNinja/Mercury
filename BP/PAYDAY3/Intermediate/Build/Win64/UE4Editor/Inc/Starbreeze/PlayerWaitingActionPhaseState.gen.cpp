// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PlayerWaitingActionPhaseState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerWaitingActionPhaseState() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerWaitingActionPhaseState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FPlayerWaitingActionPhaseState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FPlayerWaitingActionPhaseState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerWaitingActionPhaseState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("PlayerWaitingActionPhaseState"), sizeof(FPlayerWaitingActionPhaseState), Get_Z_Construct_UScriptStruct_FPlayerWaitingActionPhaseState_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FPlayerWaitingActionPhaseState>()
{
	return FPlayerWaitingActionPhaseState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerWaitingActionPhaseState(FPlayerWaitingActionPhaseState::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("PlayerWaitingActionPhaseState"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFPlayerWaitingActionPhaseState
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFPlayerWaitingActionPhaseState()
	{
		UScriptStruct::DeferCppStructOps<FPlayerWaitingActionPhaseState>(FName(TEXT("PlayerWaitingActionPhaseState")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFPlayerWaitingActionPhaseState;
	struct Z_Construct_UScriptStruct_FPlayerWaitingActionPhaseState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerWaitingActionPhaseState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerWaitingActionPhaseState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerWaitingActionPhaseState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerWaitingActionPhaseState>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerWaitingActionPhaseState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"PlayerWaitingActionPhaseState",
		sizeof(FPlayerWaitingActionPhaseState),
		alignof(FPlayerWaitingActionPhaseState),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerWaitingActionPhaseState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerWaitingActionPhaseState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerWaitingActionPhaseState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerWaitingActionPhaseState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerWaitingActionPhaseState"), sizeof(FPlayerWaitingActionPhaseState), Get_Z_Construct_UScriptStruct_FPlayerWaitingActionPhaseState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerWaitingActionPhaseState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerWaitingActionPhaseState_Hash() { return 1264356022U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
