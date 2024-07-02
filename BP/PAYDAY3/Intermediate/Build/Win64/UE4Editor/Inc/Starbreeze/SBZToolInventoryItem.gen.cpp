// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZToolInventoryItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZToolInventoryItem() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZToolInventoryItem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInventoryItem();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolData_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZToolInventoryItem>() == std::is_polymorphic<FSBZInventoryItem>(), "USTRUCT FSBZToolInventoryItem cannot be polymorphic unless super FSBZInventoryItem is polymorphic");

class UScriptStruct* FSBZToolInventoryItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZToolInventoryItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZToolInventoryItem, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZToolInventoryItem"), sizeof(FSBZToolInventoryItem), Get_Z_Construct_UScriptStruct_FSBZToolInventoryItem_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZToolInventoryItem>()
{
	return FSBZToolInventoryItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZToolInventoryItem(FSBZToolInventoryItem::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZToolInventoryItem"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZToolInventoryItem
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZToolInventoryItem()
	{
		UScriptStruct::DeferCppStructOps<FSBZToolInventoryItem>(FName(TEXT("SBZToolInventoryItem")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZToolInventoryItem;
	struct Z_Construct_UScriptStruct_FSBZToolInventoryItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToolData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZToolInventoryItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZToolInventoryItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZToolInventoryItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZToolInventoryItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZToolInventoryItem_Statics::NewProp_ToolData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZToolInventoryItem" },
		{ "ModuleRelativePath", "Public/SBZToolInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZToolInventoryItem_Statics::NewProp_ToolData = { "ToolData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZToolInventoryItem, ToolData), Z_Construct_UClass_USBZToolData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZToolInventoryItem_Statics::NewProp_ToolData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZToolInventoryItem_Statics::NewProp_ToolData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZToolInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZToolInventoryItem_Statics::NewProp_ToolData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZToolInventoryItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZInventoryItem,
		&NewStructOps,
		"SBZToolInventoryItem",
		sizeof(FSBZToolInventoryItem),
		alignof(FSBZToolInventoryItem),
		Z_Construct_UScriptStruct_FSBZToolInventoryItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZToolInventoryItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZToolInventoryItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZToolInventoryItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZToolInventoryItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZToolInventoryItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZToolInventoryItem"), sizeof(FSBZToolInventoryItem), Get_Z_Construct_UScriptStruct_FSBZToolInventoryItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZToolInventoryItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZToolInventoryItem_Hash() { return 1367997954U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
