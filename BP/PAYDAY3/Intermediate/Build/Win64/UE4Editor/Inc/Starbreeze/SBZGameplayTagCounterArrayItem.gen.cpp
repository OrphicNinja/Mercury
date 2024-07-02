// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameplayTagCounterArrayItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameplayTagCounterArrayItem() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGameplayTagCounterArrayItem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZGameplayTagCounterArrayItem>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FSBZGameplayTagCounterArrayItem cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");

class UScriptStruct* FSBZGameplayTagCounterArrayItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZGameplayTagCounterArrayItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZGameplayTagCounterArrayItem, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZGameplayTagCounterArrayItem"), sizeof(FSBZGameplayTagCounterArrayItem), Get_Z_Construct_UScriptStruct_FSBZGameplayTagCounterArrayItem_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZGameplayTagCounterArrayItem>()
{
	return FSBZGameplayTagCounterArrayItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZGameplayTagCounterArrayItem(FSBZGameplayTagCounterArrayItem::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZGameplayTagCounterArrayItem"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGameplayTagCounterArrayItem
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGameplayTagCounterArrayItem()
	{
		UScriptStruct::DeferCppStructOps<FSBZGameplayTagCounterArrayItem>(FName(TEXT("SBZGameplayTagCounterArrayItem")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZGameplayTagCounterArrayItem;
	struct Z_Construct_UScriptStruct_FSBZGameplayTagCounterArrayItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGameplayTagCounterArrayItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZGameplayTagCounterArrayItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZGameplayTagCounterArrayItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZGameplayTagCounterArrayItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGameplayTagCounterArrayItem_Statics::NewProp_Tag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameplayTagCounterArrayItem" },
		{ "ModuleRelativePath", "Public/SBZGameplayTagCounterArrayItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZGameplayTagCounterArrayItem_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGameplayTagCounterArrayItem, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGameplayTagCounterArrayItem_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGameplayTagCounterArrayItem_Statics::NewProp_Tag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGameplayTagCounterArrayItem_Statics::NewProp_Count_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameplayTagCounterArrayItem" },
		{ "ModuleRelativePath", "Public/SBZGameplayTagCounterArrayItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZGameplayTagCounterArrayItem_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGameplayTagCounterArrayItem, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGameplayTagCounterArrayItem_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGameplayTagCounterArrayItem_Statics::NewProp_Count_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZGameplayTagCounterArrayItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGameplayTagCounterArrayItem_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGameplayTagCounterArrayItem_Statics::NewProp_Count,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZGameplayTagCounterArrayItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FFastArraySerializerItem,
		&NewStructOps,
		"SBZGameplayTagCounterArrayItem",
		sizeof(FSBZGameplayTagCounterArrayItem),
		alignof(FSBZGameplayTagCounterArrayItem),
		Z_Construct_UScriptStruct_FSBZGameplayTagCounterArrayItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGameplayTagCounterArrayItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGameplayTagCounterArrayItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGameplayTagCounterArrayItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZGameplayTagCounterArrayItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZGameplayTagCounterArrayItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZGameplayTagCounterArrayItem"), sizeof(FSBZGameplayTagCounterArrayItem), Get_Z_Construct_UScriptStruct_FSBZGameplayTagCounterArrayItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZGameplayTagCounterArrayItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZGameplayTagCounterArrayItem_Hash() { return 1387754404U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
