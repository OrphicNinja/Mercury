// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerCharacterStoreItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerCharacterStoreItem() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerCharacterStoreItem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStoreBaseItem();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZPlayerCharacterStoreItem>() == std::is_polymorphic<FSBZStoreBaseItem>(), "USTRUCT FSBZPlayerCharacterStoreItem cannot be polymorphic unless super FSBZStoreBaseItem is polymorphic");

class UScriptStruct* FSBZPlayerCharacterStoreItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerCharacterStoreItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPlayerCharacterStoreItem, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPlayerCharacterStoreItem"), sizeof(FSBZPlayerCharacterStoreItem), Get_Z_Construct_UScriptStruct_FSBZPlayerCharacterStoreItem_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPlayerCharacterStoreItem>()
{
	return FSBZPlayerCharacterStoreItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPlayerCharacterStoreItem(FSBZPlayerCharacterStoreItem::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPlayerCharacterStoreItem"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerCharacterStoreItem
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerCharacterStoreItem()
	{
		UScriptStruct::DeferCppStructOps<FSBZPlayerCharacterStoreItem>(FName(TEXT("SBZPlayerCharacterStoreItem")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerCharacterStoreItem;
	struct Z_Construct_UScriptStruct_FSBZPlayerCharacterStoreItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerCharacterStoreItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerCharacterStoreItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPlayerCharacterStoreItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPlayerCharacterStoreItem>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPlayerCharacterStoreItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZStoreBaseItem,
		&NewStructOps,
		"SBZPlayerCharacterStoreItem",
		sizeof(FSBZPlayerCharacterStoreItem),
		alignof(FSBZPlayerCharacterStoreItem),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerCharacterStoreItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerCharacterStoreItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerCharacterStoreItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerCharacterStoreItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPlayerCharacterStoreItem"), sizeof(FSBZPlayerCharacterStoreItem), Get_Z_Construct_UScriptStruct_FSBZPlayerCharacterStoreItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPlayerCharacterStoreItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerCharacterStoreItem_Hash() { return 2338331491U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
