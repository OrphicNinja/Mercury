// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRewardItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRewardItem() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRewardItem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZRewardItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZRewardItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZRewardItem, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZRewardItem"), sizeof(FSBZRewardItem), Get_Z_Construct_UScriptStruct_FSBZRewardItem_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZRewardItem>()
{
	return FSBZRewardItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZRewardItem(FSBZRewardItem::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZRewardItem"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRewardItem
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRewardItem()
	{
		UScriptStruct::DeferCppStructOps<FSBZRewardItem>(FName(TEXT("SBZRewardItem")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZRewardItem;
	struct Z_Construct_UScriptStruct_FSBZRewardItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSku_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemSku;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Probability_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Probability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRewardItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZRewardItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZRewardItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZRewardItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRewardItem_Statics::NewProp_ItemSku_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRewardItem" },
		{ "ModuleRelativePath", "Public/SBZRewardItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZRewardItem_Statics::NewProp_ItemSku = { "ItemSku", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRewardItem, ItemSku), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRewardItem_Statics::NewProp_ItemSku_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRewardItem_Statics::NewProp_ItemSku_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRewardItem_Statics::NewProp_Probability_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRewardItem" },
		{ "ModuleRelativePath", "Public/SBZRewardItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZRewardItem_Statics::NewProp_Probability = { "Probability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRewardItem, Probability), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRewardItem_Statics::NewProp_Probability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRewardItem_Statics::NewProp_Probability_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZRewardItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRewardItem_Statics::NewProp_ItemSku,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRewardItem_Statics::NewProp_Probability,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZRewardItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZRewardItem",
		sizeof(FSBZRewardItem),
		alignof(FSBZRewardItem),
		Z_Construct_UScriptStruct_FSBZRewardItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRewardItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRewardItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRewardItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZRewardItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZRewardItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZRewardItem"), sizeof(FSBZRewardItem), Get_Z_Construct_UScriptStruct_FSBZRewardItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZRewardItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZRewardItem_Hash() { return 3585667970U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
