// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZOverkillWeaponInventoryItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZOverkillWeaponInventoryItem() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZOverkillWeaponInventoryItem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInventoryItem();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippableData_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZOverkillWeaponInventoryItem>() == std::is_polymorphic<FSBZInventoryItem>(), "USTRUCT FSBZOverkillWeaponInventoryItem cannot be polymorphic unless super FSBZInventoryItem is polymorphic");

class UScriptStruct* FSBZOverkillWeaponInventoryItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZOverkillWeaponInventoryItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZOverkillWeaponInventoryItem, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZOverkillWeaponInventoryItem"), sizeof(FSBZOverkillWeaponInventoryItem), Get_Z_Construct_UScriptStruct_FSBZOverkillWeaponInventoryItem_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZOverkillWeaponInventoryItem>()
{
	return FSBZOverkillWeaponInventoryItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZOverkillWeaponInventoryItem(FSBZOverkillWeaponInventoryItem::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZOverkillWeaponInventoryItem"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZOverkillWeaponInventoryItem
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZOverkillWeaponInventoryItem()
	{
		UScriptStruct::DeferCppStructOps<FSBZOverkillWeaponInventoryItem>(FName(TEXT("SBZOverkillWeaponInventoryItem")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZOverkillWeaponInventoryItem;
	struct Z_Construct_UScriptStruct_FSBZOverkillWeaponInventoryItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverkillWeaponData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverkillWeaponData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZOverkillWeaponInventoryItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZOverkillWeaponInventoryItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZOverkillWeaponInventoryItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZOverkillWeaponInventoryItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZOverkillWeaponInventoryItem_Statics::NewProp_OverkillWeaponData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOverkillWeaponInventoryItem" },
		{ "ModuleRelativePath", "Public/SBZOverkillWeaponInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZOverkillWeaponInventoryItem_Statics::NewProp_OverkillWeaponData = { "OverkillWeaponData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZOverkillWeaponInventoryItem, OverkillWeaponData), Z_Construct_UClass_USBZEquippableData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZOverkillWeaponInventoryItem_Statics::NewProp_OverkillWeaponData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOverkillWeaponInventoryItem_Statics::NewProp_OverkillWeaponData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZOverkillWeaponInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZOverkillWeaponInventoryItem_Statics::NewProp_OverkillWeaponData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZOverkillWeaponInventoryItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZInventoryItem,
		&NewStructOps,
		"SBZOverkillWeaponInventoryItem",
		sizeof(FSBZOverkillWeaponInventoryItem),
		alignof(FSBZOverkillWeaponInventoryItem),
		Z_Construct_UScriptStruct_FSBZOverkillWeaponInventoryItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOverkillWeaponInventoryItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZOverkillWeaponInventoryItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZOverkillWeaponInventoryItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZOverkillWeaponInventoryItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZOverkillWeaponInventoryItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZOverkillWeaponInventoryItem"), sizeof(FSBZOverkillWeaponInventoryItem), Get_Z_Construct_UScriptStruct_FSBZOverkillWeaponInventoryItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZOverkillWeaponInventoryItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZOverkillWeaponInventoryItem_Hash() { return 1826749357U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
