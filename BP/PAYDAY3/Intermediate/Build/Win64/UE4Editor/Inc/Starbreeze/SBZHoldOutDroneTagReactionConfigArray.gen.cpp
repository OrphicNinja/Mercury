// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHoldOutDroneTagReactionConfigArray.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHoldOutDroneTagReactionConfigArray() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfigArray();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig();
// End Cross Module References
class UScriptStruct* FSBZHoldOutDroneTagReactionConfigArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfigArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfigArray, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZHoldOutDroneTagReactionConfigArray"), sizeof(FSBZHoldOutDroneTagReactionConfigArray), Get_Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfigArray_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZHoldOutDroneTagReactionConfigArray>()
{
	return FSBZHoldOutDroneTagReactionConfigArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZHoldOutDroneTagReactionConfigArray(FSBZHoldOutDroneTagReactionConfigArray::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZHoldOutDroneTagReactionConfigArray"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHoldOutDroneTagReactionConfigArray
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHoldOutDroneTagReactionConfigArray()
	{
		UScriptStruct::DeferCppStructOps<FSBZHoldOutDroneTagReactionConfigArray>(FName(TEXT("SBZHoldOutDroneTagReactionConfigArray")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZHoldOutDroneTagReactionConfigArray;
	struct Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfigArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Configs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Configs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Configs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfigArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZHoldOutDroneTagReactionConfigArray.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfigArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZHoldOutDroneTagReactionConfigArray>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfigArray_Statics::NewProp_Configs_Inner = { "Configs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfig, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfigArray_Statics::NewProp_Configs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutDroneTagReactionConfigArray" },
		{ "ModuleRelativePath", "Public/SBZHoldOutDroneTagReactionConfigArray.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfigArray_Statics::NewProp_Configs = { "Configs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHoldOutDroneTagReactionConfigArray, Configs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfigArray_Statics::NewProp_Configs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfigArray_Statics::NewProp_Configs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfigArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfigArray_Statics::NewProp_Configs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfigArray_Statics::NewProp_Configs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfigArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZHoldOutDroneTagReactionConfigArray",
		sizeof(FSBZHoldOutDroneTagReactionConfigArray),
		alignof(FSBZHoldOutDroneTagReactionConfigArray),
		Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfigArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfigArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfigArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfigArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfigArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfigArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZHoldOutDroneTagReactionConfigArray"), sizeof(FSBZHoldOutDroneTagReactionConfigArray), Get_Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfigArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfigArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZHoldOutDroneTagReactionConfigArray_Hash() { return 3561418632U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
