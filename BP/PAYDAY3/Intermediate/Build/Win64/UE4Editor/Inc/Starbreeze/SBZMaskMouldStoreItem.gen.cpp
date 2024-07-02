// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMaskMouldStoreItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMaskMouldStoreItem() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskMouldStoreItem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStoreBaseItem();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskMouldData_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZMaskMouldStoreItem>() == std::is_polymorphic<FSBZStoreBaseItem>(), "USTRUCT FSBZMaskMouldStoreItem cannot be polymorphic unless super FSBZStoreBaseItem is polymorphic");

class UScriptStruct* FSBZMaskMouldStoreItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZMaskMouldStoreItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZMaskMouldStoreItem, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZMaskMouldStoreItem"), sizeof(FSBZMaskMouldStoreItem), Get_Z_Construct_UScriptStruct_FSBZMaskMouldStoreItem_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZMaskMouldStoreItem>()
{
	return FSBZMaskMouldStoreItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZMaskMouldStoreItem(FSBZMaskMouldStoreItem::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZMaskMouldStoreItem"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMaskMouldStoreItem
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMaskMouldStoreItem()
	{
		UScriptStruct::DeferCppStructOps<FSBZMaskMouldStoreItem>(FName(TEXT("SBZMaskMouldStoreItem")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZMaskMouldStoreItem;
	struct Z_Construct_UScriptStruct_FSBZMaskMouldStoreItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskMouldData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaskMouldData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMaskMouldStoreItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZMaskMouldStoreItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZMaskMouldStoreItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZMaskMouldStoreItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMaskMouldStoreItem_Statics::NewProp_MaskMouldData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskMouldStoreItem" },
		{ "ModuleRelativePath", "Public/SBZMaskMouldStoreItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZMaskMouldStoreItem_Statics::NewProp_MaskMouldData = { "MaskMouldData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMaskMouldStoreItem, MaskMouldData), Z_Construct_UClass_USBZMaskMouldData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMaskMouldStoreItem_Statics::NewProp_MaskMouldData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskMouldStoreItem_Statics::NewProp_MaskMouldData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZMaskMouldStoreItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMaskMouldStoreItem_Statics::NewProp_MaskMouldData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZMaskMouldStoreItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZStoreBaseItem,
		&NewStructOps,
		"SBZMaskMouldStoreItem",
		sizeof(FSBZMaskMouldStoreItem),
		alignof(FSBZMaskMouldStoreItem),
		Z_Construct_UScriptStruct_FSBZMaskMouldStoreItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskMouldStoreItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMaskMouldStoreItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskMouldStoreItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskMouldStoreItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZMaskMouldStoreItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZMaskMouldStoreItem"), sizeof(FSBZMaskMouldStoreItem), Get_Z_Construct_UScriptStruct_FSBZMaskMouldStoreItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZMaskMouldStoreItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZMaskMouldStoreItem_Hash() { return 3272605307U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
