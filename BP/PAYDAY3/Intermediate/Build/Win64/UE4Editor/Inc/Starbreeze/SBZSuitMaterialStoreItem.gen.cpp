// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSuitMaterialStoreItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSuitMaterialStoreItem() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitMaterialStoreItem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStoreBaseItem();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitMaterialData_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZSuitMaterialStoreItem>() == std::is_polymorphic<FSBZStoreBaseItem>(), "USTRUCT FSBZSuitMaterialStoreItem cannot be polymorphic unless super FSBZStoreBaseItem is polymorphic");

class UScriptStruct* FSBZSuitMaterialStoreItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSuitMaterialStoreItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSuitMaterialStoreItem, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSuitMaterialStoreItem"), sizeof(FSBZSuitMaterialStoreItem), Get_Z_Construct_UScriptStruct_FSBZSuitMaterialStoreItem_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSuitMaterialStoreItem>()
{
	return FSBZSuitMaterialStoreItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSuitMaterialStoreItem(FSBZSuitMaterialStoreItem::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSuitMaterialStoreItem"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSuitMaterialStoreItem
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSuitMaterialStoreItem()
	{
		UScriptStruct::DeferCppStructOps<FSBZSuitMaterialStoreItem>(FName(TEXT("SBZSuitMaterialStoreItem")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSuitMaterialStoreItem;
	struct Z_Construct_UScriptStruct_FSBZSuitMaterialStoreItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitMaterialData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuitMaterialData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSuitMaterialStoreItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSuitMaterialStoreItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSuitMaterialStoreItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSuitMaterialStoreItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSuitMaterialStoreItem_Statics::NewProp_SuitMaterialData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSuitMaterialStoreItem" },
		{ "ModuleRelativePath", "Public/SBZSuitMaterialStoreItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSuitMaterialStoreItem_Statics::NewProp_SuitMaterialData = { "SuitMaterialData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSuitMaterialStoreItem, SuitMaterialData), Z_Construct_UClass_USBZSuitMaterialData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSuitMaterialStoreItem_Statics::NewProp_SuitMaterialData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitMaterialStoreItem_Statics::NewProp_SuitMaterialData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSuitMaterialStoreItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSuitMaterialStoreItem_Statics::NewProp_SuitMaterialData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSuitMaterialStoreItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZStoreBaseItem,
		&NewStructOps,
		"SBZSuitMaterialStoreItem",
		sizeof(FSBZSuitMaterialStoreItem),
		alignof(FSBZSuitMaterialStoreItem),
		Z_Construct_UScriptStruct_FSBZSuitMaterialStoreItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitMaterialStoreItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSuitMaterialStoreItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitMaterialStoreItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitMaterialStoreItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSuitMaterialStoreItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSuitMaterialStoreItem"), sizeof(FSBZSuitMaterialStoreItem), Get_Z_Construct_UScriptStruct_FSBZSuitMaterialStoreItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSuitMaterialStoreItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSuitMaterialStoreItem_Hash() { return 866760693U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
