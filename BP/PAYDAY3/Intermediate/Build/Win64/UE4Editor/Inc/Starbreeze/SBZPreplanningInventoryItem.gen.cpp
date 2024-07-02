// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPreplanningInventoryItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPreplanningInventoryItem() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPreplanningInventoryItem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInventoryItem();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPreplanningAssetData_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZPreplanningInventoryItem>() == std::is_polymorphic<FSBZInventoryItem>(), "USTRUCT FSBZPreplanningInventoryItem cannot be polymorphic unless super FSBZInventoryItem is polymorphic");

class UScriptStruct* FSBZPreplanningInventoryItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPreplanningInventoryItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPreplanningInventoryItem, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPreplanningInventoryItem"), sizeof(FSBZPreplanningInventoryItem), Get_Z_Construct_UScriptStruct_FSBZPreplanningInventoryItem_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPreplanningInventoryItem>()
{
	return FSBZPreplanningInventoryItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPreplanningInventoryItem(FSBZPreplanningInventoryItem::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPreplanningInventoryItem"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPreplanningInventoryItem
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPreplanningInventoryItem()
	{
		UScriptStruct::DeferCppStructOps<FSBZPreplanningInventoryItem>(FName(TEXT("SBZPreplanningInventoryItem")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPreplanningInventoryItem;
	struct Z_Construct_UScriptStruct_FSBZPreplanningInventoryItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreplanningData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreplanningData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPreplanningInventoryItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPreplanningInventoryItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPreplanningInventoryItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPreplanningInventoryItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPreplanningInventoryItem_Statics::NewProp_PreplanningData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPreplanningInventoryItem" },
		{ "ModuleRelativePath", "Public/SBZPreplanningInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPreplanningInventoryItem_Statics::NewProp_PreplanningData = { "PreplanningData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPreplanningInventoryItem, PreplanningData), Z_Construct_UClass_USBZPreplanningAssetData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPreplanningInventoryItem_Statics::NewProp_PreplanningData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPreplanningInventoryItem_Statics::NewProp_PreplanningData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPreplanningInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPreplanningInventoryItem_Statics::NewProp_PreplanningData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPreplanningInventoryItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZInventoryItem,
		&NewStructOps,
		"SBZPreplanningInventoryItem",
		sizeof(FSBZPreplanningInventoryItem),
		alignof(FSBZPreplanningInventoryItem),
		Z_Construct_UScriptStruct_FSBZPreplanningInventoryItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPreplanningInventoryItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPreplanningInventoryItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPreplanningInventoryItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPreplanningInventoryItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPreplanningInventoryItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPreplanningInventoryItem"), sizeof(FSBZPreplanningInventoryItem), Get_Z_Construct_UScriptStruct_FSBZPreplanningInventoryItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPreplanningInventoryItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPreplanningInventoryItem_Hash() { return 3694016386U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
