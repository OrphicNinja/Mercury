// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZChallengeRewardItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZChallengeRewardItem() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeRewardItem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZChallengeRewardItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZChallengeRewardItem, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZChallengeRewardItem"), sizeof(FSBZChallengeRewardItem), Get_Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZChallengeRewardItem>()
{
	return FSBZChallengeRewardItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZChallengeRewardItem(FSBZChallengeRewardItem::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZChallengeRewardItem"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZChallengeRewardItem
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZChallengeRewardItem()
	{
		UScriptStruct::DeferCppStructOps<FSBZChallengeRewardItem>(FName(TEXT("SBZChallengeRewardItem")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZChallengeRewardItem;
	struct Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelByteSku_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccelByteSku;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelbyteItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccelbyteItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quantity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZChallengeRewardItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZChallengeRewardItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Statics::NewProp_AccelByteSku_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeRewardItem" },
		{ "ModuleRelativePath", "Public/SBZChallengeRewardItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Statics::NewProp_AccelByteSku = { "AccelByteSku", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChallengeRewardItem, AccelByteSku), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Statics::NewProp_AccelByteSku_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Statics::NewProp_AccelByteSku_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Statics::NewProp_AccelbyteItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeRewardItem" },
		{ "ModuleRelativePath", "Public/SBZChallengeRewardItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Statics::NewProp_AccelbyteItemId = { "AccelbyteItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChallengeRewardItem, AccelbyteItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Statics::NewProp_AccelbyteItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Statics::NewProp_AccelbyteItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Statics::NewProp_Quantity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeRewardItem" },
		{ "ModuleRelativePath", "Public/SBZChallengeRewardItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChallengeRewardItem, Quantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Statics::NewProp_Quantity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Statics::NewProp_Item_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeRewardItem" },
		{ "ModuleRelativePath", "Public/SBZChallengeRewardItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChallengeRewardItem, Item), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Statics::NewProp_Item_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Statics::NewProp_AccelByteSku,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Statics::NewProp_AccelbyteItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Statics::NewProp_Quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Statics::NewProp_Item,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZChallengeRewardItem",
		sizeof(FSBZChallengeRewardItem),
		alignof(FSBZChallengeRewardItem),
		Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeRewardItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZChallengeRewardItem"), sizeof(FSBZChallengeRewardItem), Get_Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZChallengeRewardItem_Hash() { return 1055481099U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
