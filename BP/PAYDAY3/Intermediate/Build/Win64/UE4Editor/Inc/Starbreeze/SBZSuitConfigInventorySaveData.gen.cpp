// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSuitConfigInventorySaveData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSuitConfigInventorySaveData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitConfigInventorySaveData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitInventorySlot();
// End Cross Module References
class UScriptStruct* FSBZSuitConfigInventorySaveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSuitConfigInventorySaveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSuitConfigInventorySaveData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSuitConfigInventorySaveData"), sizeof(FSBZSuitConfigInventorySaveData), Get_Z_Construct_UScriptStruct_FSBZSuitConfigInventorySaveData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSuitConfigInventorySaveData>()
{
	return FSBZSuitConfigInventorySaveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSuitConfigInventorySaveData(FSBZSuitConfigInventorySaveData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSuitConfigInventorySaveData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSuitConfigInventorySaveData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSuitConfigInventorySaveData()
	{
		UScriptStruct::DeferCppStructOps<FSBZSuitConfigInventorySaveData>(FName(TEXT("SBZSuitConfigInventorySaveData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSuitConfigInventorySaveData;
	struct Z_Construct_UScriptStruct_FSBZSuitConfigInventorySaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuitConfigSlots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitConfigSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SuitConfigSlots;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CheckedSuitConfigSlots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckedSuitConfigSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CheckedSuitConfigSlots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSuitConfigInventorySaveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSuitConfigInventorySaveData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSuitConfigInventorySaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSuitConfigInventorySaveData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSuitConfigInventorySaveData_Statics::NewProp_SuitConfigSlots_Inner = { "SuitConfigSlots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZSuitInventorySlot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSuitConfigInventorySaveData_Statics::NewProp_SuitConfigSlots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSuitConfigInventorySaveData" },
		{ "ModuleRelativePath", "Public/SBZSuitConfigInventorySaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZSuitConfigInventorySaveData_Statics::NewProp_SuitConfigSlots = { "SuitConfigSlots", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSuitConfigInventorySaveData, SuitConfigSlots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSuitConfigInventorySaveData_Statics::NewProp_SuitConfigSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitConfigInventorySaveData_Statics::NewProp_SuitConfigSlots_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSuitConfigInventorySaveData_Statics::NewProp_CheckedSuitConfigSlots_Inner = { "CheckedSuitConfigSlots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZSuitInventorySlot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSuitConfigInventorySaveData_Statics::NewProp_CheckedSuitConfigSlots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSuitConfigInventorySaveData" },
		{ "ModuleRelativePath", "Public/SBZSuitConfigInventorySaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZSuitConfigInventorySaveData_Statics::NewProp_CheckedSuitConfigSlots = { "CheckedSuitConfigSlots", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSuitConfigInventorySaveData, CheckedSuitConfigSlots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSuitConfigInventorySaveData_Statics::NewProp_CheckedSuitConfigSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitConfigInventorySaveData_Statics::NewProp_CheckedSuitConfigSlots_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSuitConfigInventorySaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSuitConfigInventorySaveData_Statics::NewProp_SuitConfigSlots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSuitConfigInventorySaveData_Statics::NewProp_SuitConfigSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSuitConfigInventorySaveData_Statics::NewProp_CheckedSuitConfigSlots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSuitConfigInventorySaveData_Statics::NewProp_CheckedSuitConfigSlots,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSuitConfigInventorySaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSuitConfigInventorySaveData",
		sizeof(FSBZSuitConfigInventorySaveData),
		alignof(FSBZSuitConfigInventorySaveData),
		Z_Construct_UScriptStruct_FSBZSuitConfigInventorySaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitConfigInventorySaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSuitConfigInventorySaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitConfigInventorySaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitConfigInventorySaveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSuitConfigInventorySaveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSuitConfigInventorySaveData"), sizeof(FSBZSuitConfigInventorySaveData), Get_Z_Construct_UScriptStruct_FSBZSuitConfigInventorySaveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSuitConfigInventorySaveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSuitConfigInventorySaveData_Hash() { return 1318460056U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
