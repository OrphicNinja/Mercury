// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCosmeticsInventoryItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCosmeticsInventoryItem() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCosmeticsInventoryItem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInventoryItem();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsDataAsset_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZCosmeticsInventoryItem>() == std::is_polymorphic<FSBZInventoryItem>(), "USTRUCT FSBZCosmeticsInventoryItem cannot be polymorphic unless super FSBZInventoryItem is polymorphic");

class UScriptStruct* FSBZCosmeticsInventoryItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCosmeticsInventoryItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCosmeticsInventoryItem, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCosmeticsInventoryItem"), sizeof(FSBZCosmeticsInventoryItem), Get_Z_Construct_UScriptStruct_FSBZCosmeticsInventoryItem_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCosmeticsInventoryItem>()
{
	return FSBZCosmeticsInventoryItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCosmeticsInventoryItem(FSBZCosmeticsInventoryItem::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCosmeticsInventoryItem"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCosmeticsInventoryItem
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCosmeticsInventoryItem()
	{
		UScriptStruct::DeferCppStructOps<FSBZCosmeticsInventoryItem>(FName(TEXT("SBZCosmeticsInventoryItem")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCosmeticsInventoryItem;
	struct Z_Construct_UScriptStruct_FSBZCosmeticsInventoryItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CosmeticsDataAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CosmeticsDataAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCosmeticsInventoryItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCosmeticsInventoryItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCosmeticsInventoryItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCosmeticsInventoryItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCosmeticsInventoryItem_Statics::NewProp_CosmeticsDataAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCosmeticsInventoryItem" },
		{ "ModuleRelativePath", "Public/SBZCosmeticsInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZCosmeticsInventoryItem_Statics::NewProp_CosmeticsDataAsset = { "CosmeticsDataAsset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCosmeticsInventoryItem, CosmeticsDataAsset), Z_Construct_UClass_USBZCosmeticsDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCosmeticsInventoryItem_Statics::NewProp_CosmeticsDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCosmeticsInventoryItem_Statics::NewProp_CosmeticsDataAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCosmeticsInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCosmeticsInventoryItem_Statics::NewProp_CosmeticsDataAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCosmeticsInventoryItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZInventoryItem,
		&NewStructOps,
		"SBZCosmeticsInventoryItem",
		sizeof(FSBZCosmeticsInventoryItem),
		alignof(FSBZCosmeticsInventoryItem),
		Z_Construct_UScriptStruct_FSBZCosmeticsInventoryItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCosmeticsInventoryItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCosmeticsInventoryItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCosmeticsInventoryItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCosmeticsInventoryItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCosmeticsInventoryItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCosmeticsInventoryItem"), sizeof(FSBZCosmeticsInventoryItem), Get_Z_Construct_UScriptStruct_FSBZCosmeticsInventoryItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCosmeticsInventoryItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCosmeticsInventoryItem_Hash() { return 3548432856U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
