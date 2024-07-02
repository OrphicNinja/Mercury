// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWatchStoreItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWatchStoreItem() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWatchStoreItem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStoreBaseItem();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWatchData_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZWatchStoreItem>() == std::is_polymorphic<FSBZStoreBaseItem>(), "USTRUCT FSBZWatchStoreItem cannot be polymorphic unless super FSBZStoreBaseItem is polymorphic");

class UScriptStruct* FSBZWatchStoreItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWatchStoreItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWatchStoreItem, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWatchStoreItem"), sizeof(FSBZWatchStoreItem), Get_Z_Construct_UScriptStruct_FSBZWatchStoreItem_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWatchStoreItem>()
{
	return FSBZWatchStoreItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWatchStoreItem(FSBZWatchStoreItem::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWatchStoreItem"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWatchStoreItem
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWatchStoreItem()
	{
		UScriptStruct::DeferCppStructOps<FSBZWatchStoreItem>(FName(TEXT("SBZWatchStoreItem")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWatchStoreItem;
	struct Z_Construct_UScriptStruct_FSBZWatchStoreItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WatchData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WatchData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWatchStoreItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWatchStoreItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWatchStoreItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWatchStoreItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWatchStoreItem_Statics::NewProp_WatchData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWatchStoreItem" },
		{ "ModuleRelativePath", "Public/SBZWatchStoreItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZWatchStoreItem_Statics::NewProp_WatchData = { "WatchData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWatchStoreItem, WatchData), Z_Construct_UClass_USBZWatchData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWatchStoreItem_Statics::NewProp_WatchData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWatchStoreItem_Statics::NewProp_WatchData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWatchStoreItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWatchStoreItem_Statics::NewProp_WatchData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWatchStoreItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZStoreBaseItem,
		&NewStructOps,
		"SBZWatchStoreItem",
		sizeof(FSBZWatchStoreItem),
		alignof(FSBZWatchStoreItem),
		Z_Construct_UScriptStruct_FSBZWatchStoreItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWatchStoreItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWatchStoreItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWatchStoreItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWatchStoreItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWatchStoreItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWatchStoreItem"), sizeof(FSBZWatchStoreItem), Get_Z_Construct_UScriptStruct_FSBZWatchStoreItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWatchStoreItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWatchStoreItem_Hash() { return 2820346457U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
