// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMaskPreconfigStoreItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMaskPreconfigStoreItem() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskPreconfigStoreItem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStoreBaseItem();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskPreconfigData_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZMaskPreconfigStoreItem>() == std::is_polymorphic<FSBZStoreBaseItem>(), "USTRUCT FSBZMaskPreconfigStoreItem cannot be polymorphic unless super FSBZStoreBaseItem is polymorphic");

class UScriptStruct* FSBZMaskPreconfigStoreItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZMaskPreconfigStoreItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZMaskPreconfigStoreItem, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZMaskPreconfigStoreItem"), sizeof(FSBZMaskPreconfigStoreItem), Get_Z_Construct_UScriptStruct_FSBZMaskPreconfigStoreItem_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZMaskPreconfigStoreItem>()
{
	return FSBZMaskPreconfigStoreItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZMaskPreconfigStoreItem(FSBZMaskPreconfigStoreItem::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZMaskPreconfigStoreItem"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMaskPreconfigStoreItem
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMaskPreconfigStoreItem()
	{
		UScriptStruct::DeferCppStructOps<FSBZMaskPreconfigStoreItem>(FName(TEXT("SBZMaskPreconfigStoreItem")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZMaskPreconfigStoreItem;
	struct Z_Construct_UScriptStruct_FSBZMaskPreconfigStoreItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskPreconfigData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaskPreconfigData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMaskPreconfigStoreItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZMaskPreconfigStoreItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZMaskPreconfigStoreItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZMaskPreconfigStoreItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMaskPreconfigStoreItem_Statics::NewProp_MaskPreconfigData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskPreconfigStoreItem" },
		{ "ModuleRelativePath", "Public/SBZMaskPreconfigStoreItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZMaskPreconfigStoreItem_Statics::NewProp_MaskPreconfigData = { "MaskPreconfigData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMaskPreconfigStoreItem, MaskPreconfigData), Z_Construct_UClass_USBZMaskPreconfigData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMaskPreconfigStoreItem_Statics::NewProp_MaskPreconfigData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskPreconfigStoreItem_Statics::NewProp_MaskPreconfigData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZMaskPreconfigStoreItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMaskPreconfigStoreItem_Statics::NewProp_MaskPreconfigData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZMaskPreconfigStoreItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZStoreBaseItem,
		&NewStructOps,
		"SBZMaskPreconfigStoreItem",
		sizeof(FSBZMaskPreconfigStoreItem),
		alignof(FSBZMaskPreconfigStoreItem),
		Z_Construct_UScriptStruct_FSBZMaskPreconfigStoreItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskPreconfigStoreItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMaskPreconfigStoreItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskPreconfigStoreItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskPreconfigStoreItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZMaskPreconfigStoreItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZMaskPreconfigStoreItem"), sizeof(FSBZMaskPreconfigStoreItem), Get_Z_Construct_UScriptStruct_FSBZMaskPreconfigStoreItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZMaskPreconfigStoreItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZMaskPreconfigStoreItem_Hash() { return 3964418937U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
