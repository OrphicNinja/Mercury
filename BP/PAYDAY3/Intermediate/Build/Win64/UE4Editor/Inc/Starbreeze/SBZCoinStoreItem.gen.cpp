// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCoinStoreItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCoinStoreItem() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCoinStoreItem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStoreBaseItem();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCoinData_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZCoinStoreItem>() == std::is_polymorphic<FSBZStoreBaseItem>(), "USTRUCT FSBZCoinStoreItem cannot be polymorphic unless super FSBZStoreBaseItem is polymorphic");

class UScriptStruct* FSBZCoinStoreItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCoinStoreItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCoinStoreItem, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCoinStoreItem"), sizeof(FSBZCoinStoreItem), Get_Z_Construct_UScriptStruct_FSBZCoinStoreItem_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCoinStoreItem>()
{
	return FSBZCoinStoreItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCoinStoreItem(FSBZCoinStoreItem::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCoinStoreItem"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCoinStoreItem
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCoinStoreItem()
	{
		UScriptStruct::DeferCppStructOps<FSBZCoinStoreItem>(FName(TEXT("SBZCoinStoreItem")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCoinStoreItem;
	struct Z_Construct_UScriptStruct_FSBZCoinStoreItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoinData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CoinData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCoinStoreItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCoinStoreItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCoinStoreItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCoinStoreItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCoinStoreItem_Statics::NewProp_CoinData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCoinStoreItem" },
		{ "ModuleRelativePath", "Public/SBZCoinStoreItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZCoinStoreItem_Statics::NewProp_CoinData = { "CoinData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCoinStoreItem, CoinData), Z_Construct_UClass_USBZCoinData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCoinStoreItem_Statics::NewProp_CoinData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCoinStoreItem_Statics::NewProp_CoinData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCoinStoreItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCoinStoreItem_Statics::NewProp_CoinData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCoinStoreItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZStoreBaseItem,
		&NewStructOps,
		"SBZCoinStoreItem",
		sizeof(FSBZCoinStoreItem),
		alignof(FSBZCoinStoreItem),
		Z_Construct_UScriptStruct_FSBZCoinStoreItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCoinStoreItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCoinStoreItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCoinStoreItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCoinStoreItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCoinStoreItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCoinStoreItem"), sizeof(FSBZCoinStoreItem), Get_Z_Construct_UScriptStruct_FSBZCoinStoreItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCoinStoreItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCoinStoreItem_Hash() { return 2145988477U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
