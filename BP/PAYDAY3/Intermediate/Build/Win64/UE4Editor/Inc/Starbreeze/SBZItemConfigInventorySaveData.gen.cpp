// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZItemConfigInventorySaveData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZItemConfigInventorySaveData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponInventorySlot();
// End Cross Module References
class UScriptStruct* FSBZItemConfigInventorySaveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZItemConfigInventorySaveData"), sizeof(FSBZItemConfigInventorySaveData), Get_Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZItemConfigInventorySaveData>()
{
	return FSBZItemConfigInventorySaveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZItemConfigInventorySaveData(FSBZItemConfigInventorySaveData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZItemConfigInventorySaveData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZItemConfigInventorySaveData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZItemConfigInventorySaveData()
	{
		UScriptStruct::DeferCppStructOps<FSBZItemConfigInventorySaveData>(FName(TEXT("SBZItemConfigInventorySaveData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZItemConfigInventorySaveData;
	struct Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryWeaponConfigSlots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryWeaponConfigSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrimaryWeaponConfigSlots;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryWeaponConfigSlots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryWeaponConfigSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SecondaryWeaponConfigSlots;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CheckedPrimaryWeaponConfigSlots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckedPrimaryWeaponConfigSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CheckedPrimaryWeaponConfigSlots;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CheckedSecondaryWeaponConfigSlots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckedSecondaryWeaponConfigSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CheckedSecondaryWeaponConfigSlots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZItemConfigInventorySaveData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZItemConfigInventorySaveData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::NewProp_PrimaryWeaponConfigSlots_Inner = { "PrimaryWeaponConfigSlots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZWeaponInventorySlot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::NewProp_PrimaryWeaponConfigSlots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZItemConfigInventorySaveData" },
		{ "ModuleRelativePath", "Public/SBZItemConfigInventorySaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::NewProp_PrimaryWeaponConfigSlots = { "PrimaryWeaponConfigSlots", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZItemConfigInventorySaveData, PrimaryWeaponConfigSlots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::NewProp_PrimaryWeaponConfigSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::NewProp_PrimaryWeaponConfigSlots_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::NewProp_SecondaryWeaponConfigSlots_Inner = { "SecondaryWeaponConfigSlots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZWeaponInventorySlot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::NewProp_SecondaryWeaponConfigSlots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZItemConfigInventorySaveData" },
		{ "ModuleRelativePath", "Public/SBZItemConfigInventorySaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::NewProp_SecondaryWeaponConfigSlots = { "SecondaryWeaponConfigSlots", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZItemConfigInventorySaveData, SecondaryWeaponConfigSlots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::NewProp_SecondaryWeaponConfigSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::NewProp_SecondaryWeaponConfigSlots_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::NewProp_CheckedPrimaryWeaponConfigSlots_Inner = { "CheckedPrimaryWeaponConfigSlots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZWeaponInventorySlot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::NewProp_CheckedPrimaryWeaponConfigSlots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZItemConfigInventorySaveData" },
		{ "ModuleRelativePath", "Public/SBZItemConfigInventorySaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::NewProp_CheckedPrimaryWeaponConfigSlots = { "CheckedPrimaryWeaponConfigSlots", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZItemConfigInventorySaveData, CheckedPrimaryWeaponConfigSlots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::NewProp_CheckedPrimaryWeaponConfigSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::NewProp_CheckedPrimaryWeaponConfigSlots_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::NewProp_CheckedSecondaryWeaponConfigSlots_Inner = { "CheckedSecondaryWeaponConfigSlots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZWeaponInventorySlot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::NewProp_CheckedSecondaryWeaponConfigSlots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZItemConfigInventorySaveData" },
		{ "ModuleRelativePath", "Public/SBZItemConfigInventorySaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::NewProp_CheckedSecondaryWeaponConfigSlots = { "CheckedSecondaryWeaponConfigSlots", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZItemConfigInventorySaveData, CheckedSecondaryWeaponConfigSlots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::NewProp_CheckedSecondaryWeaponConfigSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::NewProp_CheckedSecondaryWeaponConfigSlots_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::NewProp_PrimaryWeaponConfigSlots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::NewProp_PrimaryWeaponConfigSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::NewProp_SecondaryWeaponConfigSlots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::NewProp_SecondaryWeaponConfigSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::NewProp_CheckedPrimaryWeaponConfigSlots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::NewProp_CheckedPrimaryWeaponConfigSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::NewProp_CheckedSecondaryWeaponConfigSlots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::NewProp_CheckedSecondaryWeaponConfigSlots,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZItemConfigInventorySaveData",
		sizeof(FSBZItemConfigInventorySaveData),
		alignof(FSBZItemConfigInventorySaveData),
		Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZItemConfigInventorySaveData"), sizeof(FSBZItemConfigInventorySaveData), Get_Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZItemConfigInventorySaveData_Hash() { return 2342442253U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
