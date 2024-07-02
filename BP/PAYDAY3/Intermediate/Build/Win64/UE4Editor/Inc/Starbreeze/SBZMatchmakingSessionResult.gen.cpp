// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMatchmakingSessionResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMatchmakingSessionResult() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMatchmakingSessionResult();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZMatchmakingSessionResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZMatchmakingSessionResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZMatchmakingSessionResult, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZMatchmakingSessionResult"), sizeof(FSBZMatchmakingSessionResult), Get_Z_Construct_UScriptStruct_FSBZMatchmakingSessionResult_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZMatchmakingSessionResult>()
{
	return FSBZMatchmakingSessionResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZMatchmakingSessionResult(FSBZMatchmakingSessionResult::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZMatchmakingSessionResult"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMatchmakingSessionResult
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMatchmakingSessionResult()
	{
		UScriptStruct::DeferCppStructOps<FSBZMatchmakingSessionResult>(FName(TEXT("SBZMatchmakingSessionResult")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZMatchmakingSessionResult;
	struct Z_Construct_UScriptStruct_FSBZMatchmakingSessionResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMatchmakingSessionResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZMatchmakingSessionResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZMatchmakingSessionResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZMatchmakingSessionResult>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZMatchmakingSessionResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZMatchmakingSessionResult",
		sizeof(FSBZMatchmakingSessionResult),
		alignof(FSBZMatchmakingSessionResult),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMatchmakingSessionResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMatchmakingSessionResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZMatchmakingSessionResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZMatchmakingSessionResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZMatchmakingSessionResult"), sizeof(FSBZMatchmakingSessionResult), Get_Z_Construct_UScriptStruct_FSBZMatchmakingSessionResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZMatchmakingSessionResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZMatchmakingSessionResult_Hash() { return 2184510361U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
