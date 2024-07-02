// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPayDayCreditStoreItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPayDayCreditStoreItem() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPayDayCreditStoreItem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStoreBaseItem();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPayDayCreditData_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZPayDayCreditStoreItem>() == std::is_polymorphic<FSBZStoreBaseItem>(), "USTRUCT FSBZPayDayCreditStoreItem cannot be polymorphic unless super FSBZStoreBaseItem is polymorphic");

class UScriptStruct* FSBZPayDayCreditStoreItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPayDayCreditStoreItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPayDayCreditStoreItem, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPayDayCreditStoreItem"), sizeof(FSBZPayDayCreditStoreItem), Get_Z_Construct_UScriptStruct_FSBZPayDayCreditStoreItem_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPayDayCreditStoreItem>()
{
	return FSBZPayDayCreditStoreItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPayDayCreditStoreItem(FSBZPayDayCreditStoreItem::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPayDayCreditStoreItem"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPayDayCreditStoreItem
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPayDayCreditStoreItem()
	{
		UScriptStruct::DeferCppStructOps<FSBZPayDayCreditStoreItem>(FName(TEXT("SBZPayDayCreditStoreItem")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPayDayCreditStoreItem;
	struct Z_Construct_UScriptStruct_FSBZPayDayCreditStoreItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PayDayCreditData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PayDayCreditData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPayDayCreditStoreItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPayDayCreditStoreItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPayDayCreditStoreItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPayDayCreditStoreItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPayDayCreditStoreItem_Statics::NewProp_PayDayCreditData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPayDayCreditStoreItem" },
		{ "ModuleRelativePath", "Public/SBZPayDayCreditStoreItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPayDayCreditStoreItem_Statics::NewProp_PayDayCreditData = { "PayDayCreditData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPayDayCreditStoreItem, PayDayCreditData), Z_Construct_UClass_USBZPayDayCreditData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPayDayCreditStoreItem_Statics::NewProp_PayDayCreditData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPayDayCreditStoreItem_Statics::NewProp_PayDayCreditData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPayDayCreditStoreItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPayDayCreditStoreItem_Statics::NewProp_PayDayCreditData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPayDayCreditStoreItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZStoreBaseItem,
		&NewStructOps,
		"SBZPayDayCreditStoreItem",
		sizeof(FSBZPayDayCreditStoreItem),
		alignof(FSBZPayDayCreditStoreItem),
		Z_Construct_UScriptStruct_FSBZPayDayCreditStoreItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPayDayCreditStoreItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPayDayCreditStoreItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPayDayCreditStoreItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPayDayCreditStoreItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPayDayCreditStoreItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPayDayCreditStoreItem"), sizeof(FSBZPayDayCreditStoreItem), Get_Z_Construct_UScriptStruct_FSBZPayDayCreditStoreItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPayDayCreditStoreItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPayDayCreditStoreItem_Hash() { return 961458550U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
