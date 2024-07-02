// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStoreItemUIGroup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStoreItemUIGroup() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStoreItemUIGroup();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStoreItemUICategory();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStoreItemUIData();
// End Cross Module References
class UScriptStruct* FSBZStoreItemUIGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZStoreItemUIGroup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZStoreItemUIGroup, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZStoreItemUIGroup"), sizeof(FSBZStoreItemUIGroup), Get_Z_Construct_UScriptStruct_FSBZStoreItemUIGroup_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZStoreItemUIGroup>()
{
	return FSBZStoreItemUIGroup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZStoreItemUIGroup(FSBZStoreItemUIGroup::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZStoreItemUIGroup"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZStoreItemUIGroup
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZStoreItemUIGroup()
	{
		UScriptStruct::DeferCppStructOps<FSBZStoreItemUIGroup>(FName(TEXT("SBZStoreItemUIGroup")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZStoreItemUIGroup;
	struct Z_Construct_UScriptStruct_FSBZStoreItemUIGroup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemCategory;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategoryItems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CategoryItems;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreItemUIGroup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZStoreItemUIGroup.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZStoreItemUIGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZStoreItemUIGroup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreItemUIGroup_Statics::NewProp_ItemCategory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreItemUIGroup" },
		{ "ModuleRelativePath", "Public/SBZStoreItemUIGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZStoreItemUIGroup_Statics::NewProp_ItemCategory = { "ItemCategory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStoreItemUIGroup, ItemCategory), Z_Construct_UScriptStruct_FSBZStoreItemUICategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreItemUIGroup_Statics::NewProp_ItemCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreItemUIGroup_Statics::NewProp_ItemCategory_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZStoreItemUIGroup_Statics::NewProp_CategoryItems_Inner = { "CategoryItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZStoreItemUIData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStoreItemUIGroup_Statics::NewProp_CategoryItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStoreItemUIGroup" },
		{ "ModuleRelativePath", "Public/SBZStoreItemUIGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZStoreItemUIGroup_Statics::NewProp_CategoryItems = { "CategoryItems", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStoreItemUIGroup, CategoryItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreItemUIGroup_Statics::NewProp_CategoryItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreItemUIGroup_Statics::NewProp_CategoryItems_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZStoreItemUIGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreItemUIGroup_Statics::NewProp_ItemCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreItemUIGroup_Statics::NewProp_CategoryItems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStoreItemUIGroup_Statics::NewProp_CategoryItems,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZStoreItemUIGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZStoreItemUIGroup",
		sizeof(FSBZStoreItemUIGroup),
		alignof(FSBZStoreItemUIGroup),
		Z_Construct_UScriptStruct_FSBZStoreItemUIGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreItemUIGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStoreItemUIGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStoreItemUIGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZStoreItemUIGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZStoreItemUIGroup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZStoreItemUIGroup"), sizeof(FSBZStoreItemUIGroup), Get_Z_Construct_UScriptStruct_FSBZStoreItemUIGroup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZStoreItemUIGroup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZStoreItemUIGroup_Hash() { return 2272255440U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
