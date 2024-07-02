// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZArmorInventoryItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZArmorInventoryItem() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZArmorInventoryItem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInventoryItem();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZArmorData_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZArmorInventoryItem>() == std::is_polymorphic<FSBZInventoryItem>(), "USTRUCT FSBZArmorInventoryItem cannot be polymorphic unless super FSBZInventoryItem is polymorphic");

class UScriptStruct* FSBZArmorInventoryItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZArmorInventoryItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZArmorInventoryItem, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZArmorInventoryItem"), sizeof(FSBZArmorInventoryItem), Get_Z_Construct_UScriptStruct_FSBZArmorInventoryItem_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZArmorInventoryItem>()
{
	return FSBZArmorInventoryItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZArmorInventoryItem(FSBZArmorInventoryItem::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZArmorInventoryItem"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZArmorInventoryItem
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZArmorInventoryItem()
	{
		UScriptStruct::DeferCppStructOps<FSBZArmorInventoryItem>(FName(TEXT("SBZArmorInventoryItem")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZArmorInventoryItem;
	struct Z_Construct_UScriptStruct_FSBZArmorInventoryItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArmorData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZArmorInventoryItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZArmorInventoryItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZArmorInventoryItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZArmorInventoryItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZArmorInventoryItem_Statics::NewProp_ArmorData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmorInventoryItem" },
		{ "ModuleRelativePath", "Public/SBZArmorInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZArmorInventoryItem_Statics::NewProp_ArmorData = { "ArmorData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZArmorInventoryItem, ArmorData), Z_Construct_UClass_USBZArmorData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZArmorInventoryItem_Statics::NewProp_ArmorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZArmorInventoryItem_Statics::NewProp_ArmorData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZArmorInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZArmorInventoryItem_Statics::NewProp_ArmorData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZArmorInventoryItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZInventoryItem,
		&NewStructOps,
		"SBZArmorInventoryItem",
		sizeof(FSBZArmorInventoryItem),
		alignof(FSBZArmorInventoryItem),
		Z_Construct_UScriptStruct_FSBZArmorInventoryItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZArmorInventoryItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZArmorInventoryItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZArmorInventoryItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZArmorInventoryItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZArmorInventoryItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZArmorInventoryItem"), sizeof(FSBZArmorInventoryItem), Get_Z_Construct_UScriptStruct_FSBZArmorInventoryItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZArmorInventoryItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZArmorInventoryItem_Hash() { return 263604481U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
