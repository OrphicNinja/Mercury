// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMaskVFXStoreItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMaskVFXStoreItem() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskVFXStoreItem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStoreBaseItem();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskVFXData_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZMaskVFXStoreItem>() == std::is_polymorphic<FSBZStoreBaseItem>(), "USTRUCT FSBZMaskVFXStoreItem cannot be polymorphic unless super FSBZStoreBaseItem is polymorphic");

class UScriptStruct* FSBZMaskVFXStoreItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZMaskVFXStoreItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZMaskVFXStoreItem, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZMaskVFXStoreItem"), sizeof(FSBZMaskVFXStoreItem), Get_Z_Construct_UScriptStruct_FSBZMaskVFXStoreItem_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZMaskVFXStoreItem>()
{
	return FSBZMaskVFXStoreItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZMaskVFXStoreItem(FSBZMaskVFXStoreItem::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZMaskVFXStoreItem"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMaskVFXStoreItem
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMaskVFXStoreItem()
	{
		UScriptStruct::DeferCppStructOps<FSBZMaskVFXStoreItem>(FName(TEXT("SBZMaskVFXStoreItem")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZMaskVFXStoreItem;
	struct Z_Construct_UScriptStruct_FSBZMaskVFXStoreItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskVFXData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaskVFXData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMaskVFXStoreItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZMaskVFXStoreItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZMaskVFXStoreItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZMaskVFXStoreItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMaskVFXStoreItem_Statics::NewProp_MaskVFXData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskVFXStoreItem" },
		{ "ModuleRelativePath", "Public/SBZMaskVFXStoreItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZMaskVFXStoreItem_Statics::NewProp_MaskVFXData = { "MaskVFXData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMaskVFXStoreItem, MaskVFXData), Z_Construct_UClass_USBZMaskVFXData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMaskVFXStoreItem_Statics::NewProp_MaskVFXData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskVFXStoreItem_Statics::NewProp_MaskVFXData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZMaskVFXStoreItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMaskVFXStoreItem_Statics::NewProp_MaskVFXData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZMaskVFXStoreItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZStoreBaseItem,
		&NewStructOps,
		"SBZMaskVFXStoreItem",
		sizeof(FSBZMaskVFXStoreItem),
		alignof(FSBZMaskVFXStoreItem),
		Z_Construct_UScriptStruct_FSBZMaskVFXStoreItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskVFXStoreItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMaskVFXStoreItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskVFXStoreItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskVFXStoreItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZMaskVFXStoreItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZMaskVFXStoreItem"), sizeof(FSBZMaskVFXStoreItem), Get_Z_Construct_UScriptStruct_FSBZMaskVFXStoreItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZMaskVFXStoreItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZMaskVFXStoreItem_Hash() { return 1212399605U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
