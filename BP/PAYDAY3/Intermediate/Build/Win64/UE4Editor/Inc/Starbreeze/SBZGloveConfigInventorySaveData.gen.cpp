// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGloveConfigInventorySaveData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGloveConfigInventorySaveData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGloveConfigInventorySaveData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGloveInventorySlot();
// End Cross Module References
class UScriptStruct* FSBZGloveConfigInventorySaveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZGloveConfigInventorySaveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZGloveConfigInventorySaveData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZGloveConfigInventorySaveData"), sizeof(FSBZGloveConfigInventorySaveData), Get_Z_Construct_UScriptStruct_FSBZGloveConfigInventorySaveData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZGloveConfigInventorySaveData>()
{
	return FSBZGloveConfigInventorySaveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZGloveConfigInventorySaveData(FSBZGloveConfigInventorySaveData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZGloveConfigInventorySaveData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGloveConfigInventorySaveData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGloveConfigInventorySaveData()
	{
		UScriptStruct::DeferCppStructOps<FSBZGloveConfigInventorySaveData>(FName(TEXT("SBZGloveConfigInventorySaveData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZGloveConfigInventorySaveData;
	struct Z_Construct_UScriptStruct_FSBZGloveConfigInventorySaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GloveConfigSlots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GloveConfigSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GloveConfigSlots;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CheckedGloveConfigSlots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckedGloveConfigSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CheckedGloveConfigSlots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGloveConfigInventorySaveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZGloveConfigInventorySaveData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZGloveConfigInventorySaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZGloveConfigInventorySaveData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZGloveConfigInventorySaveData_Statics::NewProp_GloveConfigSlots_Inner = { "GloveConfigSlots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZGloveInventorySlot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGloveConfigInventorySaveData_Statics::NewProp_GloveConfigSlots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGloveConfigInventorySaveData" },
		{ "ModuleRelativePath", "Public/SBZGloveConfigInventorySaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZGloveConfigInventorySaveData_Statics::NewProp_GloveConfigSlots = { "GloveConfigSlots", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGloveConfigInventorySaveData, GloveConfigSlots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGloveConfigInventorySaveData_Statics::NewProp_GloveConfigSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGloveConfigInventorySaveData_Statics::NewProp_GloveConfigSlots_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZGloveConfigInventorySaveData_Statics::NewProp_CheckedGloveConfigSlots_Inner = { "CheckedGloveConfigSlots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZGloveInventorySlot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGloveConfigInventorySaveData_Statics::NewProp_CheckedGloveConfigSlots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGloveConfigInventorySaveData" },
		{ "ModuleRelativePath", "Public/SBZGloveConfigInventorySaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZGloveConfigInventorySaveData_Statics::NewProp_CheckedGloveConfigSlots = { "CheckedGloveConfigSlots", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGloveConfigInventorySaveData, CheckedGloveConfigSlots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGloveConfigInventorySaveData_Statics::NewProp_CheckedGloveConfigSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGloveConfigInventorySaveData_Statics::NewProp_CheckedGloveConfigSlots_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZGloveConfigInventorySaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGloveConfigInventorySaveData_Statics::NewProp_GloveConfigSlots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGloveConfigInventorySaveData_Statics::NewProp_GloveConfigSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGloveConfigInventorySaveData_Statics::NewProp_CheckedGloveConfigSlots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGloveConfigInventorySaveData_Statics::NewProp_CheckedGloveConfigSlots,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZGloveConfigInventorySaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZGloveConfigInventorySaveData",
		sizeof(FSBZGloveConfigInventorySaveData),
		alignof(FSBZGloveConfigInventorySaveData),
		Z_Construct_UScriptStruct_FSBZGloveConfigInventorySaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGloveConfigInventorySaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGloveConfigInventorySaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGloveConfigInventorySaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZGloveConfigInventorySaveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZGloveConfigInventorySaveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZGloveConfigInventorySaveData"), sizeof(FSBZGloveConfigInventorySaveData), Get_Z_Construct_UScriptStruct_FSBZGloveConfigInventorySaveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZGloveConfigInventorySaveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZGloveConfigInventorySaveData_Hash() { return 1874166147U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
