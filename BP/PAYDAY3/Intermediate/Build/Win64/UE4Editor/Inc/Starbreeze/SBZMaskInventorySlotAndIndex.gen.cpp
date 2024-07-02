// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMaskInventorySlotAndIndex.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMaskInventorySlotAndIndex() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskInventorySlotAndIndex();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskInventorySlot();
// End Cross Module References
class UScriptStruct* FSBZMaskInventorySlotAndIndex::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZMaskInventorySlotAndIndex_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZMaskInventorySlotAndIndex, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZMaskInventorySlotAndIndex"), sizeof(FSBZMaskInventorySlotAndIndex), Get_Z_Construct_UScriptStruct_FSBZMaskInventorySlotAndIndex_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZMaskInventorySlotAndIndex>()
{
	return FSBZMaskInventorySlotAndIndex::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZMaskInventorySlotAndIndex(FSBZMaskInventorySlotAndIndex::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZMaskInventorySlotAndIndex"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMaskInventorySlotAndIndex
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMaskInventorySlotAndIndex()
	{
		UScriptStruct::DeferCppStructOps<FSBZMaskInventorySlotAndIndex>(FName(TEXT("SBZMaskInventorySlotAndIndex")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZMaskInventorySlotAndIndex;
	struct Z_Construct_UScriptStruct_FSBZMaskInventorySlotAndIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskInventorySlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaskInventorySlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMaskInventorySlotAndIndex_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZMaskInventorySlotAndIndex.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZMaskInventorySlotAndIndex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZMaskInventorySlotAndIndex>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMaskInventorySlotAndIndex_Statics::NewProp_MaskInventorySlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskInventorySlotAndIndex" },
		{ "ModuleRelativePath", "Public/SBZMaskInventorySlotAndIndex.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZMaskInventorySlotAndIndex_Statics::NewProp_MaskInventorySlot = { "MaskInventorySlot", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMaskInventorySlotAndIndex, MaskInventorySlot), Z_Construct_UScriptStruct_FSBZMaskInventorySlot, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMaskInventorySlotAndIndex_Statics::NewProp_MaskInventorySlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskInventorySlotAndIndex_Statics::NewProp_MaskInventorySlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMaskInventorySlotAndIndex_Statics::NewProp_Index_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskInventorySlotAndIndex" },
		{ "ModuleRelativePath", "Public/SBZMaskInventorySlotAndIndex.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZMaskInventorySlotAndIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMaskInventorySlotAndIndex, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMaskInventorySlotAndIndex_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskInventorySlotAndIndex_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZMaskInventorySlotAndIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMaskInventorySlotAndIndex_Statics::NewProp_MaskInventorySlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMaskInventorySlotAndIndex_Statics::NewProp_Index,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZMaskInventorySlotAndIndex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZMaskInventorySlotAndIndex",
		sizeof(FSBZMaskInventorySlotAndIndex),
		alignof(FSBZMaskInventorySlotAndIndex),
		Z_Construct_UScriptStruct_FSBZMaskInventorySlotAndIndex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskInventorySlotAndIndex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMaskInventorySlotAndIndex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskInventorySlotAndIndex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskInventorySlotAndIndex()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZMaskInventorySlotAndIndex_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZMaskInventorySlotAndIndex"), sizeof(FSBZMaskInventorySlotAndIndex), Get_Z_Construct_UScriptStruct_FSBZMaskInventorySlotAndIndex_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZMaskInventorySlotAndIndex_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZMaskInventorySlotAndIndex_Hash() { return 1446005544U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
