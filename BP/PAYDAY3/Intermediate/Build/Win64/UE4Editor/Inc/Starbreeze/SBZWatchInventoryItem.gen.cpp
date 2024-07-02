// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWatchInventoryItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWatchInventoryItem() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWatchInventoryItem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInventoryItem();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWatchData_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZWatchInventoryItem>() == std::is_polymorphic<FSBZInventoryItem>(), "USTRUCT FSBZWatchInventoryItem cannot be polymorphic unless super FSBZInventoryItem is polymorphic");

class UScriptStruct* FSBZWatchInventoryItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWatchInventoryItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWatchInventoryItem, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWatchInventoryItem"), sizeof(FSBZWatchInventoryItem), Get_Z_Construct_UScriptStruct_FSBZWatchInventoryItem_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWatchInventoryItem>()
{
	return FSBZWatchInventoryItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWatchInventoryItem(FSBZWatchInventoryItem::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWatchInventoryItem"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWatchInventoryItem
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWatchInventoryItem()
	{
		UScriptStruct::DeferCppStructOps<FSBZWatchInventoryItem>(FName(TEXT("SBZWatchInventoryItem")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWatchInventoryItem;
	struct Z_Construct_UScriptStruct_FSBZWatchInventoryItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WatchData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WatchData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWatchInventoryItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWatchInventoryItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWatchInventoryItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWatchInventoryItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWatchInventoryItem_Statics::NewProp_WatchData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWatchInventoryItem" },
		{ "ModuleRelativePath", "Public/SBZWatchInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZWatchInventoryItem_Statics::NewProp_WatchData = { "WatchData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWatchInventoryItem, WatchData), Z_Construct_UClass_USBZWatchData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWatchInventoryItem_Statics::NewProp_WatchData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWatchInventoryItem_Statics::NewProp_WatchData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWatchInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWatchInventoryItem_Statics::NewProp_WatchData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWatchInventoryItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZInventoryItem,
		&NewStructOps,
		"SBZWatchInventoryItem",
		sizeof(FSBZWatchInventoryItem),
		alignof(FSBZWatchInventoryItem),
		Z_Construct_UScriptStruct_FSBZWatchInventoryItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWatchInventoryItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWatchInventoryItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWatchInventoryItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWatchInventoryItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWatchInventoryItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWatchInventoryItem"), sizeof(FSBZWatchInventoryItem), Get_Z_Construct_UScriptStruct_FSBZWatchInventoryItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWatchInventoryItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWatchInventoryItem_Hash() { return 3350543150U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
