// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerLoadoutConfigArray.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerLoadoutConfigArray() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfigArray();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig();
// End Cross Module References
class UScriptStruct* FSBZPlayerLoadoutConfigArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfigArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfigArray, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPlayerLoadoutConfigArray"), sizeof(FSBZPlayerLoadoutConfigArray), Get_Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfigArray_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPlayerLoadoutConfigArray>()
{
	return FSBZPlayerLoadoutConfigArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPlayerLoadoutConfigArray(FSBZPlayerLoadoutConfigArray::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPlayerLoadoutConfigArray"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerLoadoutConfigArray
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerLoadoutConfigArray()
	{
		UScriptStruct::DeferCppStructOps<FSBZPlayerLoadoutConfigArray>(FName(TEXT("SBZPlayerLoadoutConfigArray")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerLoadoutConfigArray;
	struct Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfigArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerLoadoutConfigArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLoadoutConfigArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerLoadoutConfigArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfigArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerLoadoutConfigArray.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfigArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPlayerLoadoutConfigArray>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfigArray_Statics::NewProp_PlayerLoadoutConfigArray_Inner = { "PlayerLoadoutConfigArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfigArray_Statics::NewProp_PlayerLoadoutConfigArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerLoadoutConfigArray" },
		{ "ModuleRelativePath", "Public/SBZPlayerLoadoutConfigArray.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfigArray_Statics::NewProp_PlayerLoadoutConfigArray = { "PlayerLoadoutConfigArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerLoadoutConfigArray, PlayerLoadoutConfigArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfigArray_Statics::NewProp_PlayerLoadoutConfigArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfigArray_Statics::NewProp_PlayerLoadoutConfigArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfigArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfigArray_Statics::NewProp_PlayerLoadoutConfigArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfigArray_Statics::NewProp_PlayerLoadoutConfigArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfigArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZPlayerLoadoutConfigArray",
		sizeof(FSBZPlayerLoadoutConfigArray),
		alignof(FSBZPlayerLoadoutConfigArray),
		Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfigArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfigArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfigArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfigArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfigArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfigArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPlayerLoadoutConfigArray"), sizeof(FSBZPlayerLoadoutConfigArray), Get_Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfigArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfigArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfigArray_Hash() { return 3433329316U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
