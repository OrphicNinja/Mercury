// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZItemBundleStoreItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZItemBundleStoreItem() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZItemBundleStoreItem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStoreBaseItem();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZItemBundleData_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBundleItem();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZItemBundleStoreItem>() == std::is_polymorphic<FSBZStoreBaseItem>(), "USTRUCT FSBZItemBundleStoreItem cannot be polymorphic unless super FSBZStoreBaseItem is polymorphic");

class UScriptStruct* FSBZItemBundleStoreItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZItemBundleStoreItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZItemBundleStoreItem, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZItemBundleStoreItem"), sizeof(FSBZItemBundleStoreItem), Get_Z_Construct_UScriptStruct_FSBZItemBundleStoreItem_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZItemBundleStoreItem>()
{
	return FSBZItemBundleStoreItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZItemBundleStoreItem(FSBZItemBundleStoreItem::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZItemBundleStoreItem"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZItemBundleStoreItem
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZItemBundleStoreItem()
	{
		UScriptStruct::DeferCppStructOps<FSBZItemBundleStoreItem>(FName(TEXT("SBZItemBundleStoreItem")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZItemBundleStoreItem;
	struct Z_Construct_UScriptStruct_FSBZItemBundleStoreItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemBundleData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemBundleData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BundleContentArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BundleContentArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BundleContentArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZItemBundleStoreItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZItemBundleStoreItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZItemBundleStoreItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZItemBundleStoreItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZItemBundleStoreItem_Statics::NewProp_ItemBundleData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZItemBundleStoreItem" },
		{ "ModuleRelativePath", "Public/SBZItemBundleStoreItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZItemBundleStoreItem_Statics::NewProp_ItemBundleData = { "ItemBundleData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZItemBundleStoreItem, ItemBundleData), Z_Construct_UClass_USBZItemBundleData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZItemBundleStoreItem_Statics::NewProp_ItemBundleData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZItemBundleStoreItem_Statics::NewProp_ItemBundleData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZItemBundleStoreItem_Statics::NewProp_BundleContentArray_Inner = { "BundleContentArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZBundleItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZItemBundleStoreItem_Statics::NewProp_BundleContentArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZItemBundleStoreItem" },
		{ "ModuleRelativePath", "Public/SBZItemBundleStoreItem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZItemBundleStoreItem_Statics::NewProp_BundleContentArray = { "BundleContentArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZItemBundleStoreItem, BundleContentArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZItemBundleStoreItem_Statics::NewProp_BundleContentArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZItemBundleStoreItem_Statics::NewProp_BundleContentArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZItemBundleStoreItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZItemBundleStoreItem_Statics::NewProp_ItemBundleData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZItemBundleStoreItem_Statics::NewProp_BundleContentArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZItemBundleStoreItem_Statics::NewProp_BundleContentArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZItemBundleStoreItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZStoreBaseItem,
		&NewStructOps,
		"SBZItemBundleStoreItem",
		sizeof(FSBZItemBundleStoreItem),
		alignof(FSBZItemBundleStoreItem),
		Z_Construct_UScriptStruct_FSBZItemBundleStoreItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZItemBundleStoreItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZItemBundleStoreItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZItemBundleStoreItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZItemBundleStoreItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZItemBundleStoreItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZItemBundleStoreItem"), sizeof(FSBZItemBundleStoreItem), Get_Z_Construct_UScriptStruct_FSBZItemBundleStoreItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZItemBundleStoreItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZItemBundleStoreItem_Hash() { return 2361014765U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
