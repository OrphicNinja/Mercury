// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPerformanceBonusArray.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPerformanceBonusArray() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPerformanceBonusArray();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry();
// End Cross Module References
class UScriptStruct* FSBZPerformanceBonusArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPerformanceBonusArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPerformanceBonusArray, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPerformanceBonusArray"), sizeof(FSBZPerformanceBonusArray), Get_Z_Construct_UScriptStruct_FSBZPerformanceBonusArray_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPerformanceBonusArray>()
{
	return FSBZPerformanceBonusArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPerformanceBonusArray(FSBZPerformanceBonusArray::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPerformanceBonusArray"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPerformanceBonusArray
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPerformanceBonusArray()
	{
		UScriptStruct::DeferCppStructOps<FSBZPerformanceBonusArray>(FName(TEXT("SBZPerformanceBonusArray")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPerformanceBonusArray;
	struct Z_Construct_UScriptStruct_FSBZPerformanceBonusArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerformanceBonusEntryArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerformanceBonusEntryArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerformanceBonusEntryArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPerformanceBonusArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPerformanceBonusArray.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPerformanceBonusArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPerformanceBonusArray>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPerformanceBonusArray_Statics::NewProp_PerformanceBonusEntryArray_Inner = { "PerformanceBonusEntryArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPerformanceBonusArray_Statics::NewProp_PerformanceBonusEntryArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPerformanceBonusArray" },
		{ "ModuleRelativePath", "Public/SBZPerformanceBonusArray.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZPerformanceBonusArray_Statics::NewProp_PerformanceBonusEntryArray = { "PerformanceBonusEntryArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPerformanceBonusArray, PerformanceBonusEntryArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPerformanceBonusArray_Statics::NewProp_PerformanceBonusEntryArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPerformanceBonusArray_Statics::NewProp_PerformanceBonusEntryArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPerformanceBonusArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPerformanceBonusArray_Statics::NewProp_PerformanceBonusEntryArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPerformanceBonusArray_Statics::NewProp_PerformanceBonusEntryArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPerformanceBonusArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZPerformanceBonusArray",
		sizeof(FSBZPerformanceBonusArray),
		alignof(FSBZPerformanceBonusArray),
		Z_Construct_UScriptStruct_FSBZPerformanceBonusArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPerformanceBonusArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPerformanceBonusArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPerformanceBonusArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPerformanceBonusArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPerformanceBonusArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPerformanceBonusArray"), sizeof(FSBZPerformanceBonusArray), Get_Z_Construct_UScriptStruct_FSBZPerformanceBonusArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPerformanceBonusArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPerformanceBonusArray_Hash() { return 215031581U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
