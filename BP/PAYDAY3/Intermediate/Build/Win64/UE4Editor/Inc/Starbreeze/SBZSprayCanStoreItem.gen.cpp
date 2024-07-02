// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSprayCanStoreItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSprayCanStoreItem() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSprayCanStoreItem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStoreBaseItem();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSprayCanData_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZSprayCanStoreItem>() == std::is_polymorphic<FSBZStoreBaseItem>(), "USTRUCT FSBZSprayCanStoreItem cannot be polymorphic unless super FSBZStoreBaseItem is polymorphic");

class UScriptStruct* FSBZSprayCanStoreItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSprayCanStoreItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSprayCanStoreItem, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSprayCanStoreItem"), sizeof(FSBZSprayCanStoreItem), Get_Z_Construct_UScriptStruct_FSBZSprayCanStoreItem_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSprayCanStoreItem>()
{
	return FSBZSprayCanStoreItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSprayCanStoreItem(FSBZSprayCanStoreItem::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSprayCanStoreItem"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSprayCanStoreItem
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSprayCanStoreItem()
	{
		UScriptStruct::DeferCppStructOps<FSBZSprayCanStoreItem>(FName(TEXT("SBZSprayCanStoreItem")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSprayCanStoreItem;
	struct Z_Construct_UScriptStruct_FSBZSprayCanStoreItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprayCanData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SprayCanData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSprayCanStoreItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSprayCanStoreItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSprayCanStoreItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSprayCanStoreItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSprayCanStoreItem_Statics::NewProp_SprayCanData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSprayCanStoreItem" },
		{ "ModuleRelativePath", "Public/SBZSprayCanStoreItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSprayCanStoreItem_Statics::NewProp_SprayCanData = { "SprayCanData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSprayCanStoreItem, SprayCanData), Z_Construct_UClass_USBZSprayCanData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSprayCanStoreItem_Statics::NewProp_SprayCanData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSprayCanStoreItem_Statics::NewProp_SprayCanData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSprayCanStoreItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSprayCanStoreItem_Statics::NewProp_SprayCanData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSprayCanStoreItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZStoreBaseItem,
		&NewStructOps,
		"SBZSprayCanStoreItem",
		sizeof(FSBZSprayCanStoreItem),
		alignof(FSBZSprayCanStoreItem),
		Z_Construct_UScriptStruct_FSBZSprayCanStoreItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSprayCanStoreItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSprayCanStoreItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSprayCanStoreItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSprayCanStoreItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSprayCanStoreItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSprayCanStoreItem"), sizeof(FSBZSprayCanStoreItem), Get_Z_Construct_UScriptStruct_FSBZSprayCanStoreItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSprayCanStoreItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSprayCanStoreItem_Hash() { return 2224846124U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
