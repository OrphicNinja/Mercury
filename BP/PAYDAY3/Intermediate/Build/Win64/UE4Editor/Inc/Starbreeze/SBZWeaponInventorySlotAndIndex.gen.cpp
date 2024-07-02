// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponInventorySlotAndIndex.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponInventorySlotAndIndex() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponInventorySlotAndIndex();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponInventorySlot();
// End Cross Module References
class UScriptStruct* FSBZWeaponInventorySlotAndIndex::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponInventorySlotAndIndex_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWeaponInventorySlotAndIndex, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWeaponInventorySlotAndIndex"), sizeof(FSBZWeaponInventorySlotAndIndex), Get_Z_Construct_UScriptStruct_FSBZWeaponInventorySlotAndIndex_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWeaponInventorySlotAndIndex>()
{
	return FSBZWeaponInventorySlotAndIndex::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWeaponInventorySlotAndIndex(FSBZWeaponInventorySlotAndIndex::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWeaponInventorySlotAndIndex"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponInventorySlotAndIndex
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponInventorySlotAndIndex()
	{
		UScriptStruct::DeferCppStructOps<FSBZWeaponInventorySlotAndIndex>(FName(TEXT("SBZWeaponInventorySlotAndIndex")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponInventorySlotAndIndex;
	struct Z_Construct_UScriptStruct_FSBZWeaponInventorySlotAndIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponInventorySlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponInventorySlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponInventorySlotAndIndex_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponInventorySlotAndIndex.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWeaponInventorySlotAndIndex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWeaponInventorySlotAndIndex>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponInventorySlotAndIndex_Statics::NewProp_WeaponInventorySlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponInventorySlotAndIndex" },
		{ "ModuleRelativePath", "Public/SBZWeaponInventorySlotAndIndex.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponInventorySlotAndIndex_Statics::NewProp_WeaponInventorySlot = { "WeaponInventorySlot", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponInventorySlotAndIndex, WeaponInventorySlot), Z_Construct_UScriptStruct_FSBZWeaponInventorySlot, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponInventorySlotAndIndex_Statics::NewProp_WeaponInventorySlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponInventorySlotAndIndex_Statics::NewProp_WeaponInventorySlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponInventorySlotAndIndex_Statics::NewProp_Index_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponInventorySlotAndIndex" },
		{ "ModuleRelativePath", "Public/SBZWeaponInventorySlotAndIndex.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZWeaponInventorySlotAndIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponInventorySlotAndIndex, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponInventorySlotAndIndex_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponInventorySlotAndIndex_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWeaponInventorySlotAndIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponInventorySlotAndIndex_Statics::NewProp_WeaponInventorySlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponInventorySlotAndIndex_Statics::NewProp_Index,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWeaponInventorySlotAndIndex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZWeaponInventorySlotAndIndex",
		sizeof(FSBZWeaponInventorySlotAndIndex),
		alignof(FSBZWeaponInventorySlotAndIndex),
		Z_Construct_UScriptStruct_FSBZWeaponInventorySlotAndIndex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponInventorySlotAndIndex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponInventorySlotAndIndex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponInventorySlotAndIndex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponInventorySlotAndIndex()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponInventorySlotAndIndex_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWeaponInventorySlotAndIndex"), sizeof(FSBZWeaponInventorySlotAndIndex), Get_Z_Construct_UScriptStruct_FSBZWeaponInventorySlotAndIndex_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWeaponInventorySlotAndIndex_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponInventorySlotAndIndex_Hash() { return 3408725725U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
