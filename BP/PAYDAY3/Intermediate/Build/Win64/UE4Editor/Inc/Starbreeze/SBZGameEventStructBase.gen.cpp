// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameEventStructBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameEventStructBase() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGameEventStructBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZGameEventStructBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZGameEventStructBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZGameEventStructBase, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZGameEventStructBase"), sizeof(FSBZGameEventStructBase), Get_Z_Construct_UScriptStruct_FSBZGameEventStructBase_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZGameEventStructBase>()
{
	return FSBZGameEventStructBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZGameEventStructBase(FSBZGameEventStructBase::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZGameEventStructBase"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGameEventStructBase
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGameEventStructBase()
	{
		UScriptStruct::DeferCppStructOps<FSBZGameEventStructBase>(FName(TEXT("SBZGameEventStructBase")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZGameEventStructBase;
	struct Z_Construct_UScriptStruct_FSBZGameEventStructBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGameEventStructBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZGameEventStructBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZGameEventStructBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZGameEventStructBase>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZGameEventStructBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZGameEventStructBase",
		sizeof(FSBZGameEventStructBase),
		alignof(FSBZGameEventStructBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGameEventStructBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGameEventStructBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZGameEventStructBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZGameEventStructBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZGameEventStructBase"), sizeof(FSBZGameEventStructBase), Get_Z_Construct_UScriptStruct_FSBZGameEventStructBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZGameEventStructBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZGameEventStructBase_Hash() { return 2255514344U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
