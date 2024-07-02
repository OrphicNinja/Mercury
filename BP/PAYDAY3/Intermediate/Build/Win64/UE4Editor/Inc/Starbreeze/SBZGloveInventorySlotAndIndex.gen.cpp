// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGloveInventorySlotAndIndex.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGloveInventorySlotAndIndex() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGloveInventorySlotAndIndex();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGloveInventorySlot();
// End Cross Module References
class UScriptStruct* FSBZGloveInventorySlotAndIndex::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZGloveInventorySlotAndIndex_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZGloveInventorySlotAndIndex, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZGloveInventorySlotAndIndex"), sizeof(FSBZGloveInventorySlotAndIndex), Get_Z_Construct_UScriptStruct_FSBZGloveInventorySlotAndIndex_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZGloveInventorySlotAndIndex>()
{
	return FSBZGloveInventorySlotAndIndex::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZGloveInventorySlotAndIndex(FSBZGloveInventorySlotAndIndex::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZGloveInventorySlotAndIndex"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGloveInventorySlotAndIndex
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGloveInventorySlotAndIndex()
	{
		UScriptStruct::DeferCppStructOps<FSBZGloveInventorySlotAndIndex>(FName(TEXT("SBZGloveInventorySlotAndIndex")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZGloveInventorySlotAndIndex;
	struct Z_Construct_UScriptStruct_FSBZGloveInventorySlotAndIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GloveInventorySlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GloveInventorySlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGloveInventorySlotAndIndex_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZGloveInventorySlotAndIndex.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZGloveInventorySlotAndIndex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZGloveInventorySlotAndIndex>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGloveInventorySlotAndIndex_Statics::NewProp_GloveInventorySlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGloveInventorySlotAndIndex" },
		{ "ModuleRelativePath", "Public/SBZGloveInventorySlotAndIndex.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZGloveInventorySlotAndIndex_Statics::NewProp_GloveInventorySlot = { "GloveInventorySlot", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGloveInventorySlotAndIndex, GloveInventorySlot), Z_Construct_UScriptStruct_FSBZGloveInventorySlot, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGloveInventorySlotAndIndex_Statics::NewProp_GloveInventorySlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGloveInventorySlotAndIndex_Statics::NewProp_GloveInventorySlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGloveInventorySlotAndIndex_Statics::NewProp_Index_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGloveInventorySlotAndIndex" },
		{ "ModuleRelativePath", "Public/SBZGloveInventorySlotAndIndex.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZGloveInventorySlotAndIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGloveInventorySlotAndIndex, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGloveInventorySlotAndIndex_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGloveInventorySlotAndIndex_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZGloveInventorySlotAndIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGloveInventorySlotAndIndex_Statics::NewProp_GloveInventorySlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGloveInventorySlotAndIndex_Statics::NewProp_Index,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZGloveInventorySlotAndIndex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZGloveInventorySlotAndIndex",
		sizeof(FSBZGloveInventorySlotAndIndex),
		alignof(FSBZGloveInventorySlotAndIndex),
		Z_Construct_UScriptStruct_FSBZGloveInventorySlotAndIndex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGloveInventorySlotAndIndex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGloveInventorySlotAndIndex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGloveInventorySlotAndIndex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZGloveInventorySlotAndIndex()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZGloveInventorySlotAndIndex_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZGloveInventorySlotAndIndex"), sizeof(FSBZGloveInventorySlotAndIndex), Get_Z_Construct_UScriptStruct_FSBZGloveInventorySlotAndIndex_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZGloveInventorySlotAndIndex_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZGloveInventorySlotAndIndex_Hash() { return 2652759467U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
