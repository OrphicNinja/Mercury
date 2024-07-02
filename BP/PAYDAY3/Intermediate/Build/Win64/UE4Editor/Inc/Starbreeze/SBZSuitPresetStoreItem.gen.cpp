// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSuitPresetStoreItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSuitPresetStoreItem() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitPresetStoreItem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStoreBaseItem();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitPresetData_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZSuitPresetStoreItem>() == std::is_polymorphic<FSBZStoreBaseItem>(), "USTRUCT FSBZSuitPresetStoreItem cannot be polymorphic unless super FSBZStoreBaseItem is polymorphic");

class UScriptStruct* FSBZSuitPresetStoreItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSuitPresetStoreItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSuitPresetStoreItem, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSuitPresetStoreItem"), sizeof(FSBZSuitPresetStoreItem), Get_Z_Construct_UScriptStruct_FSBZSuitPresetStoreItem_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSuitPresetStoreItem>()
{
	return FSBZSuitPresetStoreItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSuitPresetStoreItem(FSBZSuitPresetStoreItem::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSuitPresetStoreItem"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSuitPresetStoreItem
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSuitPresetStoreItem()
	{
		UScriptStruct::DeferCppStructOps<FSBZSuitPresetStoreItem>(FName(TEXT("SBZSuitPresetStoreItem")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSuitPresetStoreItem;
	struct Z_Construct_UScriptStruct_FSBZSuitPresetStoreItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitPresetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuitPresetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSuitPresetStoreItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSuitPresetStoreItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSuitPresetStoreItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSuitPresetStoreItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSuitPresetStoreItem_Statics::NewProp_SuitPresetData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSuitPresetStoreItem" },
		{ "ModuleRelativePath", "Public/SBZSuitPresetStoreItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSuitPresetStoreItem_Statics::NewProp_SuitPresetData = { "SuitPresetData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSuitPresetStoreItem, SuitPresetData), Z_Construct_UClass_USBZSuitPresetData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSuitPresetStoreItem_Statics::NewProp_SuitPresetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitPresetStoreItem_Statics::NewProp_SuitPresetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSuitPresetStoreItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSuitPresetStoreItem_Statics::NewProp_SuitPresetData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSuitPresetStoreItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZStoreBaseItem,
		&NewStructOps,
		"SBZSuitPresetStoreItem",
		sizeof(FSBZSuitPresetStoreItem),
		alignof(FSBZSuitPresetStoreItem),
		Z_Construct_UScriptStruct_FSBZSuitPresetStoreItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitPresetStoreItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSuitPresetStoreItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitPresetStoreItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitPresetStoreItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSuitPresetStoreItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSuitPresetStoreItem"), sizeof(FSBZSuitPresetStoreItem), Get_Z_Construct_UScriptStruct_FSBZSuitPresetStoreItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSuitPresetStoreItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSuitPresetStoreItem_Hash() { return 1738665090U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
