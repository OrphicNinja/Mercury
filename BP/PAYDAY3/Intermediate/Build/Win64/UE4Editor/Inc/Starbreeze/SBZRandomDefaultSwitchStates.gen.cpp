// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRandomDefaultSwitchStates.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRandomDefaultSwitchStates() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZRandomDefaultSwitchStates::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZRandomDefaultSwitchStates"), sizeof(FSBZRandomDefaultSwitchStates), Get_Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZRandomDefaultSwitchStates>()
{
	return FSBZRandomDefaultSwitchStates::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZRandomDefaultSwitchStates(FSBZRandomDefaultSwitchStates::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZRandomDefaultSwitchStates"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRandomDefaultSwitchStates
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRandomDefaultSwitchStates()
	{
		UScriptStruct::DeferCppStructOps<FSBZRandomDefaultSwitchStates>(FName(TEXT("SBZRandomDefaultSwitchStates")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZRandomDefaultSwitchStates;
	struct Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SwitchGroups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchGroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SwitchGroups;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_States_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_States_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_States;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZRandomDefaultSwitchStates.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZRandomDefaultSwitchStates>();
	}
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates_Statics::NewProp_SwitchGroups_Inner = { "SwitchGroups", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates_Statics::NewProp_SwitchGroups_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRandomDefaultSwitchStates" },
		{ "ModuleRelativePath", "Public/SBZRandomDefaultSwitchStates.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates_Statics::NewProp_SwitchGroups = { "SwitchGroups", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRandomDefaultSwitchStates, SwitchGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates_Statics::NewProp_SwitchGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates_Statics::NewProp_SwitchGroups_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates_Statics::NewProp_States_Inner = { "States", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates_Statics::NewProp_States_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRandomDefaultSwitchStates" },
		{ "ModuleRelativePath", "Public/SBZRandomDefaultSwitchStates.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates_Statics::NewProp_States = { "States", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRandomDefaultSwitchStates, States), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates_Statics::NewProp_States_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates_Statics::NewProp_States_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates_Statics::NewProp_SwitchGroups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates_Statics::NewProp_SwitchGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates_Statics::NewProp_States_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates_Statics::NewProp_States,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZRandomDefaultSwitchStates",
		sizeof(FSBZRandomDefaultSwitchStates),
		alignof(FSBZRandomDefaultSwitchStates),
		Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZRandomDefaultSwitchStates"), sizeof(FSBZRandomDefaultSwitchStates), Get_Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZRandomDefaultSwitchStates_Hash() { return 3426968577U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
