// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerCharacterInventoryItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerCharacterInventoryItem() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerCharacterInventoryItem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInventoryItem();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerCharacterData_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZPlayerCharacterInventoryItem>() == std::is_polymorphic<FSBZInventoryItem>(), "USTRUCT FSBZPlayerCharacterInventoryItem cannot be polymorphic unless super FSBZInventoryItem is polymorphic");

class UScriptStruct* FSBZPlayerCharacterInventoryItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerCharacterInventoryItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPlayerCharacterInventoryItem, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPlayerCharacterInventoryItem"), sizeof(FSBZPlayerCharacterInventoryItem), Get_Z_Construct_UScriptStruct_FSBZPlayerCharacterInventoryItem_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPlayerCharacterInventoryItem>()
{
	return FSBZPlayerCharacterInventoryItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPlayerCharacterInventoryItem(FSBZPlayerCharacterInventoryItem::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPlayerCharacterInventoryItem"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerCharacterInventoryItem
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerCharacterInventoryItem()
	{
		UScriptStruct::DeferCppStructOps<FSBZPlayerCharacterInventoryItem>(FName(TEXT("SBZPlayerCharacterInventoryItem")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerCharacterInventoryItem;
	struct Z_Construct_UScriptStruct_FSBZPlayerCharacterInventoryItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacterData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacterData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerCharacterInventoryItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerCharacterInventoryItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPlayerCharacterInventoryItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPlayerCharacterInventoryItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerCharacterInventoryItem_Statics::NewProp_PlayerCharacterData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCharacterInventoryItem" },
		{ "ModuleRelativePath", "Public/SBZPlayerCharacterInventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPlayerCharacterInventoryItem_Statics::NewProp_PlayerCharacterData = { "PlayerCharacterData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerCharacterInventoryItem, PlayerCharacterData), Z_Construct_UClass_USBZPlayerCharacterData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerCharacterInventoryItem_Statics::NewProp_PlayerCharacterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerCharacterInventoryItem_Statics::NewProp_PlayerCharacterData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPlayerCharacterInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerCharacterInventoryItem_Statics::NewProp_PlayerCharacterData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPlayerCharacterInventoryItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZInventoryItem,
		&NewStructOps,
		"SBZPlayerCharacterInventoryItem",
		sizeof(FSBZPlayerCharacterInventoryItem),
		alignof(FSBZPlayerCharacterInventoryItem),
		Z_Construct_UScriptStruct_FSBZPlayerCharacterInventoryItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerCharacterInventoryItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerCharacterInventoryItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerCharacterInventoryItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerCharacterInventoryItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerCharacterInventoryItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPlayerCharacterInventoryItem"), sizeof(FSBZPlayerCharacterInventoryItem), Get_Z_Construct_UScriptStruct_FSBZPlayerCharacterInventoryItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPlayerCharacterInventoryItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerCharacterInventoryItem_Hash() { return 2080667917U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
