// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSequenceViewerSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSequenceViewerSet() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSequenceViewerSet();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZSequenceViewerSet::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSequenceViewerSet_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSequenceViewerSet, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSequenceViewerSet"), sizeof(FSBZSequenceViewerSet), Get_Z_Construct_UScriptStruct_FSBZSequenceViewerSet_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSequenceViewerSet>()
{
	return FSBZSequenceViewerSet::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSequenceViewerSet(FSBZSequenceViewerSet::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSequenceViewerSet"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSequenceViewerSet
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSequenceViewerSet()
	{
		UScriptStruct::DeferCppStructOps<FSBZSequenceViewerSet>(FName(TEXT("SBZSequenceViewerSet")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSequenceViewerSet;
	struct Z_Construct_UScriptStruct_FSBZSequenceViewerSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SequenceViewerArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequenceViewerArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SequenceViewerArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSequenceViewerSet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSequenceViewerSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSequenceViewerSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSequenceViewerSet>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSequenceViewerSet_Statics::NewProp_SequenceViewerArray_Inner = { "SequenceViewerArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSequenceViewerSet_Statics::NewProp_SequenceViewerArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSequenceViewerSet" },
		{ "ModuleRelativePath", "Public/SBZSequenceViewerSet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZSequenceViewerSet_Statics::NewProp_SequenceViewerArray = { "SequenceViewerArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSequenceViewerSet, SequenceViewerArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSequenceViewerSet_Statics::NewProp_SequenceViewerArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSequenceViewerSet_Statics::NewProp_SequenceViewerArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSequenceViewerSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSequenceViewerSet_Statics::NewProp_SequenceViewerArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSequenceViewerSet_Statics::NewProp_SequenceViewerArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSequenceViewerSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSequenceViewerSet",
		sizeof(FSBZSequenceViewerSet),
		alignof(FSBZSequenceViewerSet),
		Z_Construct_UScriptStruct_FSBZSequenceViewerSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSequenceViewerSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSequenceViewerSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSequenceViewerSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSequenceViewerSet()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSequenceViewerSet_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSequenceViewerSet"), sizeof(FSBZSequenceViewerSet), Get_Z_Construct_UScriptStruct_FSBZSequenceViewerSet_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSequenceViewerSet_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSequenceViewerSet_Hash() { return 658513780U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
