// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMaskPatternStoreItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMaskPatternStoreItem() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskPatternStoreItem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStoreBaseItem();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskPatternData_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZMaskPatternStoreItem>() == std::is_polymorphic<FSBZStoreBaseItem>(), "USTRUCT FSBZMaskPatternStoreItem cannot be polymorphic unless super FSBZStoreBaseItem is polymorphic");

class UScriptStruct* FSBZMaskPatternStoreItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZMaskPatternStoreItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZMaskPatternStoreItem, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZMaskPatternStoreItem"), sizeof(FSBZMaskPatternStoreItem), Get_Z_Construct_UScriptStruct_FSBZMaskPatternStoreItem_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZMaskPatternStoreItem>()
{
	return FSBZMaskPatternStoreItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZMaskPatternStoreItem(FSBZMaskPatternStoreItem::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZMaskPatternStoreItem"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMaskPatternStoreItem
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMaskPatternStoreItem()
	{
		UScriptStruct::DeferCppStructOps<FSBZMaskPatternStoreItem>(FName(TEXT("SBZMaskPatternStoreItem")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZMaskPatternStoreItem;
	struct Z_Construct_UScriptStruct_FSBZMaskPatternStoreItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskPatternData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaskPatternData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMaskPatternStoreItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZMaskPatternStoreItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZMaskPatternStoreItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZMaskPatternStoreItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMaskPatternStoreItem_Statics::NewProp_MaskPatternData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskPatternStoreItem" },
		{ "ModuleRelativePath", "Public/SBZMaskPatternStoreItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZMaskPatternStoreItem_Statics::NewProp_MaskPatternData = { "MaskPatternData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMaskPatternStoreItem, MaskPatternData), Z_Construct_UClass_USBZMaskPatternData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMaskPatternStoreItem_Statics::NewProp_MaskPatternData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskPatternStoreItem_Statics::NewProp_MaskPatternData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZMaskPatternStoreItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMaskPatternStoreItem_Statics::NewProp_MaskPatternData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZMaskPatternStoreItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZStoreBaseItem,
		&NewStructOps,
		"SBZMaskPatternStoreItem",
		sizeof(FSBZMaskPatternStoreItem),
		alignof(FSBZMaskPatternStoreItem),
		Z_Construct_UScriptStruct_FSBZMaskPatternStoreItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskPatternStoreItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMaskPatternStoreItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskPatternStoreItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskPatternStoreItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZMaskPatternStoreItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZMaskPatternStoreItem"), sizeof(FSBZMaskPatternStoreItem), Get_Z_Construct_UScriptStruct_FSBZMaskPatternStoreItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZMaskPatternStoreItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZMaskPatternStoreItem_Hash() { return 3616866842U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
