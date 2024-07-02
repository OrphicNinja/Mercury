// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInventorySlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInventorySlot() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInventorySlot();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZItemInventorySlotAvailability();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FSBZInventorySlot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZInventorySlot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZInventorySlot, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZInventorySlot"), sizeof(FSBZInventorySlot), Get_Z_Construct_UScriptStruct_FSBZInventorySlot_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZInventorySlot>()
{
	return FSBZInventorySlot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZInventorySlot(FSBZInventorySlot::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZInventorySlot"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInventorySlot
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInventorySlot()
	{
		UScriptStruct::DeferCppStructOps<FSBZInventorySlot>(FName(TEXT("SBZInventorySlot")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZInventorySlot;
	struct Z_Construct_UScriptStruct_FSBZInventorySlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemInventorySlotAvailability_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemInventorySlotAvailability_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemInventorySlotAvailability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfigSlotEntitlementId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConfigSlotEntitlementId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfigSlotItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConfigSlotItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInventorySlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZInventorySlot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZInventorySlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZInventorySlot>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZInventorySlot_Statics::NewProp_ItemInventorySlotAvailability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInventorySlot_Statics::NewProp_ItemInventorySlotAvailability_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInventorySlot" },
		{ "ModuleRelativePath", "Public/SBZInventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZInventorySlot_Statics::NewProp_ItemInventorySlotAvailability = { "ItemInventorySlotAvailability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInventorySlot, ItemInventorySlotAvailability), Z_Construct_UEnum_Starbreeze_ESBZItemInventorySlotAvailability, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInventorySlot_Statics::NewProp_ItemInventorySlotAvailability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInventorySlot_Statics::NewProp_ItemInventorySlotAvailability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInventorySlot_Statics::NewProp_ConfigSlotEntitlementId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInventorySlot" },
		{ "ModuleRelativePath", "Public/SBZInventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZInventorySlot_Statics::NewProp_ConfigSlotEntitlementId = { "ConfigSlotEntitlementId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInventorySlot, ConfigSlotEntitlementId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInventorySlot_Statics::NewProp_ConfigSlotEntitlementId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInventorySlot_Statics::NewProp_ConfigSlotEntitlementId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInventorySlot_Statics::NewProp_ConfigSlotItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInventorySlot" },
		{ "ModuleRelativePath", "Public/SBZInventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZInventorySlot_Statics::NewProp_ConfigSlotItemId = { "ConfigSlotItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInventorySlot, ConfigSlotItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInventorySlot_Statics::NewProp_ConfigSlotItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInventorySlot_Statics::NewProp_ConfigSlotItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZInventorySlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInventorySlot_Statics::NewProp_ItemInventorySlotAvailability_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInventorySlot_Statics::NewProp_ItemInventorySlotAvailability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInventorySlot_Statics::NewProp_ConfigSlotEntitlementId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInventorySlot_Statics::NewProp_ConfigSlotItemId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZInventorySlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZInventorySlot",
		sizeof(FSBZInventorySlot),
		alignof(FSBZInventorySlot),
		Z_Construct_UScriptStruct_FSBZInventorySlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInventorySlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInventorySlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInventorySlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZInventorySlot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZInventorySlot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZInventorySlot"), sizeof(FSBZInventorySlot), Get_Z_Construct_UScriptStruct_FSBZInventorySlot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZInventorySlot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZInventorySlot_Hash() { return 2341766936U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
