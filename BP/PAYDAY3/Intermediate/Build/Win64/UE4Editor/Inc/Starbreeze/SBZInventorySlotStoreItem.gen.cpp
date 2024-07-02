// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInventorySlotStoreItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInventorySlotStoreItem() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStoreBaseItem();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventorySlotData_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZInventorySlotStoreItem>() == std::is_polymorphic<FSBZStoreBaseItem>(), "USTRUCT FSBZInventorySlotStoreItem cannot be polymorphic unless super FSBZStoreBaseItem is polymorphic");

class UScriptStruct* FSBZInventorySlotStoreItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZInventorySlotStoreItem"), sizeof(FSBZInventorySlotStoreItem), Get_Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZInventorySlotStoreItem>()
{
	return FSBZInventorySlotStoreItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZInventorySlotStoreItem(FSBZInventorySlotStoreItem::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZInventorySlotStoreItem"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInventorySlotStoreItem
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInventorySlotStoreItem()
	{
		UScriptStruct::DeferCppStructOps<FSBZInventorySlotStoreItem>(FName(TEXT("SBZInventorySlotStoreItem")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZInventorySlotStoreItem;
	struct Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventorySlotData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventorySlotData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZInventorySlotStoreItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZInventorySlotStoreItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem_Statics::NewProp_InventorySlotData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInventorySlotStoreItem" },
		{ "ModuleRelativePath", "Public/SBZInventorySlotStoreItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem_Statics::NewProp_InventorySlotData = { "InventorySlotData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInventorySlotStoreItem, InventorySlotData), Z_Construct_UClass_USBZInventorySlotData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem_Statics::NewProp_InventorySlotData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem_Statics::NewProp_InventorySlotData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem_Statics::NewProp_InventorySlotData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZStoreBaseItem,
		&NewStructOps,
		"SBZInventorySlotStoreItem",
		sizeof(FSBZInventorySlotStoreItem),
		alignof(FSBZInventorySlotStoreItem),
		Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZInventorySlotStoreItem"), sizeof(FSBZInventorySlotStoreItem), Get_Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZInventorySlotStoreItem_Hash() { return 1077559821U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
