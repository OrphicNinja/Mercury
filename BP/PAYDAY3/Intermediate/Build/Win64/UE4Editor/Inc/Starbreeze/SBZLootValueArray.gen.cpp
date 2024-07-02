// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLootValueArray.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLootValueArray() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLootValueArray();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLootTypeData();
// End Cross Module References
class UScriptStruct* FSBZLootValueArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZLootValueArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZLootValueArray, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZLootValueArray"), sizeof(FSBZLootValueArray), Get_Z_Construct_UScriptStruct_FSBZLootValueArray_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZLootValueArray>()
{
	return FSBZLootValueArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZLootValueArray(FSBZLootValueArray::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZLootValueArray"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLootValueArray
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLootValueArray()
	{
		UScriptStruct::DeferCppStructOps<FSBZLootValueArray>(FName(TEXT("SBZLootValueArray")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZLootValueArray;
	struct Z_Construct_UScriptStruct_FSBZLootValueArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LootName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LootName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LootValueDifficultyArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LootValueDifficultyArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LootValueDifficultyArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLootValueArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZLootValueArray.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZLootValueArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZLootValueArray>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLootValueArray_Statics::NewProp_LootName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLootValueArray" },
		{ "ModuleRelativePath", "Public/SBZLootValueArray.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZLootValueArray_Statics::NewProp_LootName = { "LootName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLootValueArray, LootName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLootValueArray_Statics::NewProp_LootName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLootValueArray_Statics::NewProp_LootName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLootValueArray_Statics::NewProp_LootValueDifficultyArray_Inner = { "LootValueDifficultyArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZLootTypeData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLootValueArray_Statics::NewProp_LootValueDifficultyArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLootValueArray" },
		{ "ModuleRelativePath", "Public/SBZLootValueArray.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZLootValueArray_Statics::NewProp_LootValueDifficultyArray = { "LootValueDifficultyArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLootValueArray, LootValueDifficultyArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLootValueArray_Statics::NewProp_LootValueDifficultyArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLootValueArray_Statics::NewProp_LootValueDifficultyArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZLootValueArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLootValueArray_Statics::NewProp_LootName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLootValueArray_Statics::NewProp_LootValueDifficultyArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLootValueArray_Statics::NewProp_LootValueDifficultyArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZLootValueArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZLootValueArray",
		sizeof(FSBZLootValueArray),
		alignof(FSBZLootValueArray),
		Z_Construct_UScriptStruct_FSBZLootValueArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLootValueArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLootValueArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLootValueArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZLootValueArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZLootValueArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZLootValueArray"), sizeof(FSBZLootValueArray), Get_Z_Construct_UScriptStruct_FSBZLootValueArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZLootValueArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZLootValueArray_Hash() { return 1524405094U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
