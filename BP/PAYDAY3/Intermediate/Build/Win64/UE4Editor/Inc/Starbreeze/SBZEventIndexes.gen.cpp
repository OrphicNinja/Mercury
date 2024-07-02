// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEventIndexes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEventIndexes() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEventIndexes();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZEventIndexes::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZEventIndexes_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZEventIndexes, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZEventIndexes"), sizeof(FSBZEventIndexes), Get_Z_Construct_UScriptStruct_FSBZEventIndexes_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZEventIndexes>()
{
	return FSBZEventIndexes::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZEventIndexes(FSBZEventIndexes::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZEventIndexes"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZEventIndexes
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZEventIndexes()
	{
		UScriptStruct::DeferCppStructOps<FSBZEventIndexes>(FName(TEXT("SBZEventIndexes")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZEventIndexes;
	struct Z_Construct_UScriptStruct_FSBZEventIndexes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IndexArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndexArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IndexArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEventIndexes_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZEventIndexes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZEventIndexes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZEventIndexes>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZEventIndexes_Statics::NewProp_IndexArray_Inner = { "IndexArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEventIndexes_Statics::NewProp_IndexArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEventIndexes" },
		{ "ModuleRelativePath", "Public/SBZEventIndexes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZEventIndexes_Statics::NewProp_IndexArray = { "IndexArray", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEventIndexes, IndexArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEventIndexes_Statics::NewProp_IndexArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEventIndexes_Statics::NewProp_IndexArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZEventIndexes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEventIndexes_Statics::NewProp_IndexArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEventIndexes_Statics::NewProp_IndexArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZEventIndexes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZEventIndexes",
		sizeof(FSBZEventIndexes),
		alignof(FSBZEventIndexes),
		Z_Construct_UScriptStruct_FSBZEventIndexes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEventIndexes_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEventIndexes_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEventIndexes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZEventIndexes()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZEventIndexes_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZEventIndexes"), sizeof(FSBZEventIndexes), Get_Z_Construct_UScriptStruct_FSBZEventIndexes_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZEventIndexes_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZEventIndexes_Hash() { return 3740651411U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
