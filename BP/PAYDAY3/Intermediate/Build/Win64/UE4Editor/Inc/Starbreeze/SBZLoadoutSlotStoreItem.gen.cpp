// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLoadoutSlotStoreItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLoadoutSlotStoreItem() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLoadoutSlotStoreItem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStoreBaseItem();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoadoutSlotData_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZLoadoutSlotStoreItem>() == std::is_polymorphic<FSBZStoreBaseItem>(), "USTRUCT FSBZLoadoutSlotStoreItem cannot be polymorphic unless super FSBZStoreBaseItem is polymorphic");

class UScriptStruct* FSBZLoadoutSlotStoreItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZLoadoutSlotStoreItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZLoadoutSlotStoreItem, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZLoadoutSlotStoreItem"), sizeof(FSBZLoadoutSlotStoreItem), Get_Z_Construct_UScriptStruct_FSBZLoadoutSlotStoreItem_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZLoadoutSlotStoreItem>()
{
	return FSBZLoadoutSlotStoreItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZLoadoutSlotStoreItem(FSBZLoadoutSlotStoreItem::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZLoadoutSlotStoreItem"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLoadoutSlotStoreItem
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLoadoutSlotStoreItem()
	{
		UScriptStruct::DeferCppStructOps<FSBZLoadoutSlotStoreItem>(FName(TEXT("SBZLoadoutSlotStoreItem")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZLoadoutSlotStoreItem;
	struct Z_Construct_UScriptStruct_FSBZLoadoutSlotStoreItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutSlotData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadoutSlotData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLoadoutSlotStoreItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZLoadoutSlotStoreItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZLoadoutSlotStoreItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZLoadoutSlotStoreItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLoadoutSlotStoreItem_Statics::NewProp_LoadoutSlotData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoadoutSlotStoreItem" },
		{ "ModuleRelativePath", "Public/SBZLoadoutSlotStoreItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZLoadoutSlotStoreItem_Statics::NewProp_LoadoutSlotData = { "LoadoutSlotData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLoadoutSlotStoreItem, LoadoutSlotData), Z_Construct_UClass_USBZLoadoutSlotData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLoadoutSlotStoreItem_Statics::NewProp_LoadoutSlotData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLoadoutSlotStoreItem_Statics::NewProp_LoadoutSlotData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZLoadoutSlotStoreItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLoadoutSlotStoreItem_Statics::NewProp_LoadoutSlotData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZLoadoutSlotStoreItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZStoreBaseItem,
		&NewStructOps,
		"SBZLoadoutSlotStoreItem",
		sizeof(FSBZLoadoutSlotStoreItem),
		alignof(FSBZLoadoutSlotStoreItem),
		Z_Construct_UScriptStruct_FSBZLoadoutSlotStoreItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLoadoutSlotStoreItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLoadoutSlotStoreItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLoadoutSlotStoreItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZLoadoutSlotStoreItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZLoadoutSlotStoreItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZLoadoutSlotStoreItem"), sizeof(FSBZLoadoutSlotStoreItem), Get_Z_Construct_UScriptStruct_FSBZLoadoutSlotStoreItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZLoadoutSlotStoreItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZLoadoutSlotStoreItem_Hash() { return 3034487479U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
