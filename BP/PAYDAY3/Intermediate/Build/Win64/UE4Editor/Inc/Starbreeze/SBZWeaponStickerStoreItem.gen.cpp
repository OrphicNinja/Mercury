// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponStickerStoreItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponStickerStoreItem() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponStickerStoreItem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStoreBaseItem();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponStickerData_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZWeaponStickerStoreItem>() == std::is_polymorphic<FSBZStoreBaseItem>(), "USTRUCT FSBZWeaponStickerStoreItem cannot be polymorphic unless super FSBZStoreBaseItem is polymorphic");

class UScriptStruct* FSBZWeaponStickerStoreItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponStickerStoreItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWeaponStickerStoreItem, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWeaponStickerStoreItem"), sizeof(FSBZWeaponStickerStoreItem), Get_Z_Construct_UScriptStruct_FSBZWeaponStickerStoreItem_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWeaponStickerStoreItem>()
{
	return FSBZWeaponStickerStoreItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWeaponStickerStoreItem(FSBZWeaponStickerStoreItem::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWeaponStickerStoreItem"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponStickerStoreItem
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponStickerStoreItem()
	{
		UScriptStruct::DeferCppStructOps<FSBZWeaponStickerStoreItem>(FName(TEXT("SBZWeaponStickerStoreItem")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponStickerStoreItem;
	struct Z_Construct_UScriptStruct_FSBZWeaponStickerStoreItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponStickerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponStickerData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponStickerStoreItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponStickerStoreItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWeaponStickerStoreItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWeaponStickerStoreItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponStickerStoreItem_Statics::NewProp_WeaponStickerData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponStickerStoreItem" },
		{ "ModuleRelativePath", "Public/SBZWeaponStickerStoreItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZWeaponStickerStoreItem_Statics::NewProp_WeaponStickerData = { "WeaponStickerData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponStickerStoreItem, WeaponStickerData), Z_Construct_UClass_USBZWeaponStickerData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponStickerStoreItem_Statics::NewProp_WeaponStickerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponStickerStoreItem_Statics::NewProp_WeaponStickerData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWeaponStickerStoreItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponStickerStoreItem_Statics::NewProp_WeaponStickerData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWeaponStickerStoreItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZStoreBaseItem,
		&NewStructOps,
		"SBZWeaponStickerStoreItem",
		sizeof(FSBZWeaponStickerStoreItem),
		alignof(FSBZWeaponStickerStoreItem),
		Z_Construct_UScriptStruct_FSBZWeaponStickerStoreItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponStickerStoreItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponStickerStoreItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponStickerStoreItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponStickerStoreItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponStickerStoreItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWeaponStickerStoreItem"), sizeof(FSBZWeaponStickerStoreItem), Get_Z_Construct_UScriptStruct_FSBZWeaponStickerStoreItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWeaponStickerStoreItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponStickerStoreItem_Hash() { return 3484117807U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
