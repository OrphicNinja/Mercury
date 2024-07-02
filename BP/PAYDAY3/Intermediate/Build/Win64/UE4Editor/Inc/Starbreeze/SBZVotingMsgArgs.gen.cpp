// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVotingMsgArgs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVotingMsgArgs() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVotingMsgArgs();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZVotingMsgArgs::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZVotingMsgArgs_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZVotingMsgArgs, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZVotingMsgArgs"), sizeof(FSBZVotingMsgArgs), Get_Z_Construct_UScriptStruct_FSBZVotingMsgArgs_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZVotingMsgArgs>()
{
	return FSBZVotingMsgArgs::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZVotingMsgArgs(FSBZVotingMsgArgs::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZVotingMsgArgs"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVotingMsgArgs
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVotingMsgArgs()
	{
		UScriptStruct::DeferCppStructOps<FSBZVotingMsgArgs>(FName(TEXT("SBZVotingMsgArgs")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZVotingMsgArgs;
	struct Z_Construct_UScriptStruct_FSBZVotingMsgArgs_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVotingMsgArgs_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZVotingMsgArgs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZVotingMsgArgs_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZVotingMsgArgs>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZVotingMsgArgs_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZVotingMsgArgs",
		sizeof(FSBZVotingMsgArgs),
		alignof(FSBZVotingMsgArgs),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVotingMsgArgs_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVotingMsgArgs_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZVotingMsgArgs()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZVotingMsgArgs_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZVotingMsgArgs"), sizeof(FSBZVotingMsgArgs), Get_Z_Construct_UScriptStruct_FSBZVotingMsgArgs_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZVotingMsgArgs_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZVotingMsgArgs_Hash() { return 127766554U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
