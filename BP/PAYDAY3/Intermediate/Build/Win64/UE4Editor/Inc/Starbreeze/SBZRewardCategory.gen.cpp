// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRewardCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRewardCategory() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRewardCategory();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRewardItem();
// End Cross Module References
class UScriptStruct* FSBZRewardCategory::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZRewardCategory_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZRewardCategory, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZRewardCategory"), sizeof(FSBZRewardCategory), Get_Z_Construct_UScriptStruct_FSBZRewardCategory_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZRewardCategory>()
{
	return FSBZRewardCategory::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZRewardCategory(FSBZRewardCategory::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZRewardCategory"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRewardCategory
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRewardCategory()
	{
		UScriptStruct::DeferCppStructOps<FSBZRewardCategory>(FName(TEXT("SBZRewardCategory")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZRewardCategory;
	struct Z_Construct_UScriptStruct_FSBZRewardCategory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategorySkuItems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategorySkuItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CategorySkuItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Probability_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Probability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRewardCategory_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZRewardCategory.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZRewardCategory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZRewardCategory>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRewardCategory_Statics::NewProp_CategoryName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRewardCategory" },
		{ "ModuleRelativePath", "Public/SBZRewardCategory.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZRewardCategory_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRewardCategory, CategoryName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRewardCategory_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRewardCategory_Statics::NewProp_CategoryName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZRewardCategory_Statics::NewProp_CategorySkuItems_Inner = { "CategorySkuItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZRewardItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRewardCategory_Statics::NewProp_CategorySkuItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRewardCategory" },
		{ "ModuleRelativePath", "Public/SBZRewardCategory.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZRewardCategory_Statics::NewProp_CategorySkuItems = { "CategorySkuItems", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRewardCategory, CategorySkuItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRewardCategory_Statics::NewProp_CategorySkuItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRewardCategory_Statics::NewProp_CategorySkuItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRewardCategory_Statics::NewProp_Probability_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRewardCategory" },
		{ "ModuleRelativePath", "Public/SBZRewardCategory.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZRewardCategory_Statics::NewProp_Probability = { "Probability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRewardCategory, Probability), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRewardCategory_Statics::NewProp_Probability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRewardCategory_Statics::NewProp_Probability_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZRewardCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRewardCategory_Statics::NewProp_CategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRewardCategory_Statics::NewProp_CategorySkuItems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRewardCategory_Statics::NewProp_CategorySkuItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRewardCategory_Statics::NewProp_Probability,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZRewardCategory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZRewardCategory",
		sizeof(FSBZRewardCategory),
		alignof(FSBZRewardCategory),
		Z_Construct_UScriptStruct_FSBZRewardCategory_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRewardCategory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRewardCategory_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRewardCategory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZRewardCategory()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZRewardCategory_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZRewardCategory"), sizeof(FSBZRewardCategory), Get_Z_Construct_UScriptStruct_FSBZRewardCategory_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZRewardCategory_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZRewardCategory_Hash() { return 3464437237U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
