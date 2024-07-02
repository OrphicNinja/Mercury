// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCharacterSlotData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCharacterSlotData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCharacterSlotData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCharacterInventoryData();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCharacterSlotStatus();
// End Cross Module References
class UScriptStruct* FSBZCharacterSlotData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCharacterSlotData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCharacterSlotData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCharacterSlotData"), sizeof(FSBZCharacterSlotData), Get_Z_Construct_UScriptStruct_FSBZCharacterSlotData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCharacterSlotData>()
{
	return FSBZCharacterSlotData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCharacterSlotData(FSBZCharacterSlotData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCharacterSlotData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCharacterSlotData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCharacterSlotData()
	{
		UScriptStruct::DeferCppStructOps<FSBZCharacterSlotData>(FName(TEXT("SBZCharacterSlotData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCharacterSlotData;
	struct Z_Construct_UScriptStruct_FSBZCharacterSlotData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterInventoryData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterInventoryData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndexInInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IndexInInventory;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SlotStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SlotStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterSlotData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCharacterSlotData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCharacterSlotData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCharacterSlotData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterSlotData_Statics::NewProp_CharacterInventoryData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterSlotData" },
		{ "ModuleRelativePath", "Public/SBZCharacterSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZCharacterSlotData_Statics::NewProp_CharacterInventoryData = { "CharacterInventoryData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterSlotData, CharacterInventoryData), Z_Construct_UScriptStruct_FSBZCharacterInventoryData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterSlotData_Statics::NewProp_CharacterInventoryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterSlotData_Statics::NewProp_CharacterInventoryData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterSlotData_Statics::NewProp_IndexInInventory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterSlotData" },
		{ "ModuleRelativePath", "Public/SBZCharacterSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCharacterSlotData_Statics::NewProp_IndexInInventory = { "IndexInInventory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterSlotData, IndexInInventory), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterSlotData_Statics::NewProp_IndexInInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterSlotData_Statics::NewProp_IndexInInventory_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZCharacterSlotData_Statics::NewProp_SlotStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterSlotData_Statics::NewProp_SlotStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterSlotData" },
		{ "ModuleRelativePath", "Public/SBZCharacterSlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZCharacterSlotData_Statics::NewProp_SlotStatus = { "SlotStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterSlotData, SlotStatus), Z_Construct_UEnum_Starbreeze_ESBZCharacterSlotStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterSlotData_Statics::NewProp_SlotStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterSlotData_Statics::NewProp_SlotStatus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCharacterSlotData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterSlotData_Statics::NewProp_CharacterInventoryData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterSlotData_Statics::NewProp_IndexInInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterSlotData_Statics::NewProp_SlotStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterSlotData_Statics::NewProp_SlotStatus,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCharacterSlotData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCharacterSlotData",
		sizeof(FSBZCharacterSlotData),
		alignof(FSBZCharacterSlotData),
		Z_Construct_UScriptStruct_FSBZCharacterSlotData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterSlotData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterSlotData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterSlotData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCharacterSlotData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCharacterSlotData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCharacterSlotData"), sizeof(FSBZCharacterSlotData), Get_Z_Construct_UScriptStruct_FSBZCharacterSlotData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCharacterSlotData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCharacterSlotData_Hash() { return 2639052850U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
