// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZChallengeProgressItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZChallengeProgressItem() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeProgressItem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZChallengeProgressItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZChallengeProgressItem, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZChallengeProgressItem"), sizeof(FSBZChallengeProgressItem), Get_Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZChallengeProgressItem>()
{
	return FSBZChallengeProgressItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZChallengeProgressItem(FSBZChallengeProgressItem::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZChallengeProgressItem"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZChallengeProgressItem
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZChallengeProgressItem()
	{
		UScriptStruct::DeferCppStructOps<FSBZChallengeProgressItem>(FName(TEXT("SBZChallengeProgressItem")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZChallengeProgressItem;
	struct Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelbyteItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccelbyteItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentQuantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentQuantity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetQuantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetQuantity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZChallengeProgressItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZChallengeProgressItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Statics::NewProp_AccelbyteItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeProgressItem" },
		{ "ModuleRelativePath", "Public/SBZChallengeProgressItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Statics::NewProp_AccelbyteItemId = { "AccelbyteItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChallengeProgressItem, AccelbyteItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Statics::NewProp_AccelbyteItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Statics::NewProp_AccelbyteItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Statics::NewProp_CurrentQuantity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeProgressItem" },
		{ "ModuleRelativePath", "Public/SBZChallengeProgressItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Statics::NewProp_CurrentQuantity = { "CurrentQuantity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChallengeProgressItem, CurrentQuantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Statics::NewProp_CurrentQuantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Statics::NewProp_CurrentQuantity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Statics::NewProp_TargetQuantity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeProgressItem" },
		{ "ModuleRelativePath", "Public/SBZChallengeProgressItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Statics::NewProp_TargetQuantity = { "TargetQuantity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChallengeProgressItem, TargetQuantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Statics::NewProp_TargetQuantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Statics::NewProp_TargetQuantity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Statics::NewProp_Item_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeProgressItem" },
		{ "ModuleRelativePath", "Public/SBZChallengeProgressItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChallengeProgressItem, Item), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Statics::NewProp_Item_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Statics::NewProp_AccelbyteItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Statics::NewProp_CurrentQuantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Statics::NewProp_TargetQuantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Statics::NewProp_Item,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZChallengeProgressItem",
		sizeof(FSBZChallengeProgressItem),
		alignof(FSBZChallengeProgressItem),
		Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeProgressItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZChallengeProgressItem"), sizeof(FSBZChallengeProgressItem), Get_Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZChallengeProgressItem_Hash() { return 1802285878U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
