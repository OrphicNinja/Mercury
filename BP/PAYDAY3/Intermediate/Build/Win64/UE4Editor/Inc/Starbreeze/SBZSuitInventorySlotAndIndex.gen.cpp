// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSuitInventorySlotAndIndex.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSuitInventorySlotAndIndex() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitInventorySlotAndIndex();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitInventorySlot();
// End Cross Module References
class UScriptStruct* FSBZSuitInventorySlotAndIndex::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSuitInventorySlotAndIndex_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSuitInventorySlotAndIndex, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSuitInventorySlotAndIndex"), sizeof(FSBZSuitInventorySlotAndIndex), Get_Z_Construct_UScriptStruct_FSBZSuitInventorySlotAndIndex_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSuitInventorySlotAndIndex>()
{
	return FSBZSuitInventorySlotAndIndex::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSuitInventorySlotAndIndex(FSBZSuitInventorySlotAndIndex::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSuitInventorySlotAndIndex"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSuitInventorySlotAndIndex
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSuitInventorySlotAndIndex()
	{
		UScriptStruct::DeferCppStructOps<FSBZSuitInventorySlotAndIndex>(FName(TEXT("SBZSuitInventorySlotAndIndex")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSuitInventorySlotAndIndex;
	struct Z_Construct_UScriptStruct_FSBZSuitInventorySlotAndIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitInventorySlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuitInventorySlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSuitInventorySlotAndIndex_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSuitInventorySlotAndIndex.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSuitInventorySlotAndIndex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSuitInventorySlotAndIndex>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSuitInventorySlotAndIndex_Statics::NewProp_SuitInventorySlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSuitInventorySlotAndIndex" },
		{ "ModuleRelativePath", "Public/SBZSuitInventorySlotAndIndex.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSuitInventorySlotAndIndex_Statics::NewProp_SuitInventorySlot = { "SuitInventorySlot", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSuitInventorySlotAndIndex, SuitInventorySlot), Z_Construct_UScriptStruct_FSBZSuitInventorySlot, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSuitInventorySlotAndIndex_Statics::NewProp_SuitInventorySlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitInventorySlotAndIndex_Statics::NewProp_SuitInventorySlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSuitInventorySlotAndIndex_Statics::NewProp_Index_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSuitInventorySlotAndIndex" },
		{ "ModuleRelativePath", "Public/SBZSuitInventorySlotAndIndex.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZSuitInventorySlotAndIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSuitInventorySlotAndIndex, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSuitInventorySlotAndIndex_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitInventorySlotAndIndex_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSuitInventorySlotAndIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSuitInventorySlotAndIndex_Statics::NewProp_SuitInventorySlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSuitInventorySlotAndIndex_Statics::NewProp_Index,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSuitInventorySlotAndIndex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSuitInventorySlotAndIndex",
		sizeof(FSBZSuitInventorySlotAndIndex),
		alignof(FSBZSuitInventorySlotAndIndex),
		Z_Construct_UScriptStruct_FSBZSuitInventorySlotAndIndex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitInventorySlotAndIndex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSuitInventorySlotAndIndex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitInventorySlotAndIndex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitInventorySlotAndIndex()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSuitInventorySlotAndIndex_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSuitInventorySlotAndIndex"), sizeof(FSBZSuitInventorySlotAndIndex), Get_Z_Construct_UScriptStruct_FSBZSuitInventorySlotAndIndex_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSuitInventorySlotAndIndex_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSuitInventorySlotAndIndex_Hash() { return 4288760193U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
