// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZThrowableInventoryItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZThrowableInventoryItem() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZThrowableInventoryItem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInventoryItem();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZThrowableData_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZThrowableInventoryItem>() == std::is_polymorphic<FSBZInventoryItem>(), "USTRUCT FSBZThrowableInventoryItem cannot be polymorphic unless super FSBZInventoryItem is polymorphic");

class UScriptStruct* FSBZThrowableInventoryItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZThrowableInventoryItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZThrowableInventoryItem, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZThrowableInventoryItem"), sizeof(FSBZThrowableInventoryItem), Get_Z_Construct_UScriptStruct_FSBZThrowableInventoryItem_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZThrowableInventoryItem>()
{
	return FSBZThrowableInventoryItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZThrowableInventoryItem(FSBZThrowableInventoryItem::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZThrowableInventoryItem"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZThrowableInventoryItem
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZThrowableInventoryItem()
	{
		UScriptStruct::DeferCppStructOps<FSBZThrowableInventoryItem>(FName(TEXT("SBZThrowableInventoryItem")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZThrowableInventoryItem;
	struct Z_Construct_UScriptStruct_FSBZThrowableInventoryItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowableData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThrowableData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZThrowableInventoryItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZThrowableInventoryItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZThrowableInventoryItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZThrowableInventoryItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZThrowableInventoryItem_Statics::NewProp_ThrowableData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThrowableInventoryItem" },
		{ "ModuleRelativePath", "Public/SBZThrowableInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZThrowableInventoryItem_Statics::NewProp_ThrowableData = { "ThrowableData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZThrowableInventoryItem, ThrowableData), Z_Construct_UClass_USBZThrowableData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZThrowableInventoryItem_Statics::NewProp_ThrowableData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZThrowableInventoryItem_Statics::NewProp_ThrowableData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZThrowableInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZThrowableInventoryItem_Statics::NewProp_ThrowableData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZThrowableInventoryItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZInventoryItem,
		&NewStructOps,
		"SBZThrowableInventoryItem",
		sizeof(FSBZThrowableInventoryItem),
		alignof(FSBZThrowableInventoryItem),
		Z_Construct_UScriptStruct_FSBZThrowableInventoryItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZThrowableInventoryItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZThrowableInventoryItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZThrowableInventoryItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZThrowableInventoryItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZThrowableInventoryItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZThrowableInventoryItem"), sizeof(FSBZThrowableInventoryItem), Get_Z_Construct_UScriptStruct_FSBZThrowableInventoryItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZThrowableInventoryItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZThrowableInventoryItem_Hash() { return 3088358985U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
