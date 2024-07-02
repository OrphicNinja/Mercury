// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGloveInventoryItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGloveInventoryItem() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGloveInventoryItem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInventoryItem();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGloveData_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZGloveInventoryItem>() == std::is_polymorphic<FSBZInventoryItem>(), "USTRUCT FSBZGloveInventoryItem cannot be polymorphic unless super FSBZInventoryItem is polymorphic");

class UScriptStruct* FSBZGloveInventoryItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZGloveInventoryItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZGloveInventoryItem, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZGloveInventoryItem"), sizeof(FSBZGloveInventoryItem), Get_Z_Construct_UScriptStruct_FSBZGloveInventoryItem_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZGloveInventoryItem>()
{
	return FSBZGloveInventoryItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZGloveInventoryItem(FSBZGloveInventoryItem::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZGloveInventoryItem"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGloveInventoryItem
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGloveInventoryItem()
	{
		UScriptStruct::DeferCppStructOps<FSBZGloveInventoryItem>(FName(TEXT("SBZGloveInventoryItem")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZGloveInventoryItem;
	struct Z_Construct_UScriptStruct_FSBZGloveInventoryItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GloveData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GloveData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGloveInventoryItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZGloveInventoryItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZGloveInventoryItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZGloveInventoryItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGloveInventoryItem_Statics::NewProp_GloveData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGloveInventoryItem" },
		{ "ModuleRelativePath", "Public/SBZGloveInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZGloveInventoryItem_Statics::NewProp_GloveData = { "GloveData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGloveInventoryItem, GloveData), Z_Construct_UClass_USBZGloveData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGloveInventoryItem_Statics::NewProp_GloveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGloveInventoryItem_Statics::NewProp_GloveData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZGloveInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGloveInventoryItem_Statics::NewProp_GloveData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZGloveInventoryItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZInventoryItem,
		&NewStructOps,
		"SBZGloveInventoryItem",
		sizeof(FSBZGloveInventoryItem),
		alignof(FSBZGloveInventoryItem),
		Z_Construct_UScriptStruct_FSBZGloveInventoryItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGloveInventoryItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGloveInventoryItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGloveInventoryItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZGloveInventoryItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZGloveInventoryItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZGloveInventoryItem"), sizeof(FSBZGloveInventoryItem), Get_Z_Construct_UScriptStruct_FSBZGloveInventoryItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZGloveInventoryItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZGloveInventoryItem_Hash() { return 3520923326U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
