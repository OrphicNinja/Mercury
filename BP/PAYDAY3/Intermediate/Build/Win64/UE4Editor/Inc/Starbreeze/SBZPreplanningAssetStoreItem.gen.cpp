// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPreplanningAssetStoreItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPreplanningAssetStoreItem() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPreplanningAssetStoreItem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStoreBaseItem();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPreplanningAssetData_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZPreplanningAssetStoreItem>() == std::is_polymorphic<FSBZStoreBaseItem>(), "USTRUCT FSBZPreplanningAssetStoreItem cannot be polymorphic unless super FSBZStoreBaseItem is polymorphic");

class UScriptStruct* FSBZPreplanningAssetStoreItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPreplanningAssetStoreItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPreplanningAssetStoreItem, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPreplanningAssetStoreItem"), sizeof(FSBZPreplanningAssetStoreItem), Get_Z_Construct_UScriptStruct_FSBZPreplanningAssetStoreItem_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPreplanningAssetStoreItem>()
{
	return FSBZPreplanningAssetStoreItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPreplanningAssetStoreItem(FSBZPreplanningAssetStoreItem::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPreplanningAssetStoreItem"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPreplanningAssetStoreItem
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPreplanningAssetStoreItem()
	{
		UScriptStruct::DeferCppStructOps<FSBZPreplanningAssetStoreItem>(FName(TEXT("SBZPreplanningAssetStoreItem")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPreplanningAssetStoreItem;
	struct Z_Construct_UScriptStruct_FSBZPreplanningAssetStoreItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreplanningAssetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreplanningAssetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPreplanningAssetStoreItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPreplanningAssetStoreItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPreplanningAssetStoreItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPreplanningAssetStoreItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPreplanningAssetStoreItem_Statics::NewProp_PreplanningAssetData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPreplanningAssetStoreItem" },
		{ "ModuleRelativePath", "Public/SBZPreplanningAssetStoreItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPreplanningAssetStoreItem_Statics::NewProp_PreplanningAssetData = { "PreplanningAssetData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPreplanningAssetStoreItem, PreplanningAssetData), Z_Construct_UClass_USBZPreplanningAssetData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPreplanningAssetStoreItem_Statics::NewProp_PreplanningAssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPreplanningAssetStoreItem_Statics::NewProp_PreplanningAssetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPreplanningAssetStoreItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPreplanningAssetStoreItem_Statics::NewProp_PreplanningAssetData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPreplanningAssetStoreItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZStoreBaseItem,
		&NewStructOps,
		"SBZPreplanningAssetStoreItem",
		sizeof(FSBZPreplanningAssetStoreItem),
		alignof(FSBZPreplanningAssetStoreItem),
		Z_Construct_UScriptStruct_FSBZPreplanningAssetStoreItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPreplanningAssetStoreItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPreplanningAssetStoreItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPreplanningAssetStoreItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPreplanningAssetStoreItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPreplanningAssetStoreItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPreplanningAssetStoreItem"), sizeof(FSBZPreplanningAssetStoreItem), Get_Z_Construct_UScriptStruct_FSBZPreplanningAssetStoreItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPreplanningAssetStoreItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPreplanningAssetStoreItem_Hash() { return 4110965348U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
