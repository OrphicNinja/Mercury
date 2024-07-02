// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlaceableInventoryItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlaceableInventoryItem() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlaceableInventoryItem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInventoryItem();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlaceableData_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZPlaceableInventoryItem>() == std::is_polymorphic<FSBZInventoryItem>(), "USTRUCT FSBZPlaceableInventoryItem cannot be polymorphic unless super FSBZInventoryItem is polymorphic");

class UScriptStruct* FSBZPlaceableInventoryItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPlaceableInventoryItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPlaceableInventoryItem, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPlaceableInventoryItem"), sizeof(FSBZPlaceableInventoryItem), Get_Z_Construct_UScriptStruct_FSBZPlaceableInventoryItem_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPlaceableInventoryItem>()
{
	return FSBZPlaceableInventoryItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPlaceableInventoryItem(FSBZPlaceableInventoryItem::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPlaceableInventoryItem"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlaceableInventoryItem
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlaceableInventoryItem()
	{
		UScriptStruct::DeferCppStructOps<FSBZPlaceableInventoryItem>(FName(TEXT("SBZPlaceableInventoryItem")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlaceableInventoryItem;
	struct Z_Construct_UScriptStruct_FSBZPlaceableInventoryItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaceableData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlaceableData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlaceableInventoryItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPlaceableInventoryItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPlaceableInventoryItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPlaceableInventoryItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlaceableInventoryItem_Statics::NewProp_PlaceableData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableInventoryItem" },
		{ "ModuleRelativePath", "Public/SBZPlaceableInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPlaceableInventoryItem_Statics::NewProp_PlaceableData = { "PlaceableData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlaceableInventoryItem, PlaceableData), Z_Construct_UClass_USBZPlaceableData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlaceableInventoryItem_Statics::NewProp_PlaceableData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlaceableInventoryItem_Statics::NewProp_PlaceableData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPlaceableInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlaceableInventoryItem_Statics::NewProp_PlaceableData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPlaceableInventoryItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZInventoryItem,
		&NewStructOps,
		"SBZPlaceableInventoryItem",
		sizeof(FSBZPlaceableInventoryItem),
		alignof(FSBZPlaceableInventoryItem),
		Z_Construct_UScriptStruct_FSBZPlaceableInventoryItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlaceableInventoryItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlaceableInventoryItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlaceableInventoryItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPlaceableInventoryItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPlaceableInventoryItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPlaceableInventoryItem"), sizeof(FSBZPlaceableInventoryItem), Get_Z_Construct_UScriptStruct_FSBZPlaceableInventoryItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPlaceableInventoryItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPlaceableInventoryItem_Hash() { return 1213424170U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
