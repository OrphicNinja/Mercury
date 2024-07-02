// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVotingMsgArgToLocalize.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVotingMsgArgToLocalize() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVotingMsgArgToLocalize();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZVotingMsgArgToLocalize::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZVotingMsgArgToLocalize_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZVotingMsgArgToLocalize, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZVotingMsgArgToLocalize"), sizeof(FSBZVotingMsgArgToLocalize), Get_Z_Construct_UScriptStruct_FSBZVotingMsgArgToLocalize_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZVotingMsgArgToLocalize>()
{
	return FSBZVotingMsgArgToLocalize::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZVotingMsgArgToLocalize(FSBZVotingMsgArgToLocalize::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZVotingMsgArgToLocalize"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVotingMsgArgToLocalize
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVotingMsgArgToLocalize()
	{
		UScriptStruct::DeferCppStructOps<FSBZVotingMsgArgToLocalize>(FName(TEXT("SBZVotingMsgArgToLocalize")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZVotingMsgArgToLocalize;
	struct Z_Construct_UScriptStruct_FSBZVotingMsgArgToLocalize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVotingMsgArgToLocalize_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZVotingMsgArgToLocalize.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZVotingMsgArgToLocalize_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZVotingMsgArgToLocalize>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZVotingMsgArgToLocalize_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZVotingMsgArgToLocalize",
		sizeof(FSBZVotingMsgArgToLocalize),
		alignof(FSBZVotingMsgArgToLocalize),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVotingMsgArgToLocalize_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVotingMsgArgToLocalize_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZVotingMsgArgToLocalize()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZVotingMsgArgToLocalize_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZVotingMsgArgToLocalize"), sizeof(FSBZVotingMsgArgToLocalize), Get_Z_Construct_UScriptStruct_FSBZVotingMsgArgToLocalize_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZVotingMsgArgToLocalize_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZVotingMsgArgToLocalize_Hash() { return 2126826602U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
