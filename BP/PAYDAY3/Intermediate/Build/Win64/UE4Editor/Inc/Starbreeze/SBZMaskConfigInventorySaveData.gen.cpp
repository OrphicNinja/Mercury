// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMaskConfigInventorySaveData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMaskConfigInventorySaveData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskConfigInventorySaveData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskInventorySlot();
// End Cross Module References
class UScriptStruct* FSBZMaskConfigInventorySaveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZMaskConfigInventorySaveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZMaskConfigInventorySaveData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZMaskConfigInventorySaveData"), sizeof(FSBZMaskConfigInventorySaveData), Get_Z_Construct_UScriptStruct_FSBZMaskConfigInventorySaveData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZMaskConfigInventorySaveData>()
{
	return FSBZMaskConfigInventorySaveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZMaskConfigInventorySaveData(FSBZMaskConfigInventorySaveData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZMaskConfigInventorySaveData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMaskConfigInventorySaveData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMaskConfigInventorySaveData()
	{
		UScriptStruct::DeferCppStructOps<FSBZMaskConfigInventorySaveData>(FName(TEXT("SBZMaskConfigInventorySaveData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZMaskConfigInventorySaveData;
	struct Z_Construct_UScriptStruct_FSBZMaskConfigInventorySaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaskConfigSlots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskConfigSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaskConfigSlots;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CheckedMaskConfigSlots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckedMaskConfigSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CheckedMaskConfigSlots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMaskConfigInventorySaveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZMaskConfigInventorySaveData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZMaskConfigInventorySaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZMaskConfigInventorySaveData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZMaskConfigInventorySaveData_Statics::NewProp_MaskConfigSlots_Inner = { "MaskConfigSlots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZMaskInventorySlot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMaskConfigInventorySaveData_Statics::NewProp_MaskConfigSlots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskConfigInventorySaveData" },
		{ "ModuleRelativePath", "Public/SBZMaskConfigInventorySaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZMaskConfigInventorySaveData_Statics::NewProp_MaskConfigSlots = { "MaskConfigSlots", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMaskConfigInventorySaveData, MaskConfigSlots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMaskConfigInventorySaveData_Statics::NewProp_MaskConfigSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskConfigInventorySaveData_Statics::NewProp_MaskConfigSlots_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZMaskConfigInventorySaveData_Statics::NewProp_CheckedMaskConfigSlots_Inner = { "CheckedMaskConfigSlots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZMaskInventorySlot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMaskConfigInventorySaveData_Statics::NewProp_CheckedMaskConfigSlots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskConfigInventorySaveData" },
		{ "ModuleRelativePath", "Public/SBZMaskConfigInventorySaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZMaskConfigInventorySaveData_Statics::NewProp_CheckedMaskConfigSlots = { "CheckedMaskConfigSlots", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMaskConfigInventorySaveData, CheckedMaskConfigSlots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMaskConfigInventorySaveData_Statics::NewProp_CheckedMaskConfigSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskConfigInventorySaveData_Statics::NewProp_CheckedMaskConfigSlots_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZMaskConfigInventorySaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMaskConfigInventorySaveData_Statics::NewProp_MaskConfigSlots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMaskConfigInventorySaveData_Statics::NewProp_MaskConfigSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMaskConfigInventorySaveData_Statics::NewProp_CheckedMaskConfigSlots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMaskConfigInventorySaveData_Statics::NewProp_CheckedMaskConfigSlots,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZMaskConfigInventorySaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZMaskConfigInventorySaveData",
		sizeof(FSBZMaskConfigInventorySaveData),
		alignof(FSBZMaskConfigInventorySaveData),
		Z_Construct_UScriptStruct_FSBZMaskConfigInventorySaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskConfigInventorySaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMaskConfigInventorySaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskConfigInventorySaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskConfigInventorySaveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZMaskConfigInventorySaveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZMaskConfigInventorySaveData"), sizeof(FSBZMaskConfigInventorySaveData), Get_Z_Construct_UScriptStruct_FSBZMaskConfigInventorySaveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZMaskConfigInventorySaveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZMaskConfigInventorySaveData_Hash() { return 1469113097U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
