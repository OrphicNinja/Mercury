// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponCharmStoreItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponCharmStoreItem() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponCharmStoreItem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStoreBaseItem();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponCharmData_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZWeaponCharmStoreItem>() == std::is_polymorphic<FSBZStoreBaseItem>(), "USTRUCT FSBZWeaponCharmStoreItem cannot be polymorphic unless super FSBZStoreBaseItem is polymorphic");

class UScriptStruct* FSBZWeaponCharmStoreItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponCharmStoreItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWeaponCharmStoreItem, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWeaponCharmStoreItem"), sizeof(FSBZWeaponCharmStoreItem), Get_Z_Construct_UScriptStruct_FSBZWeaponCharmStoreItem_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWeaponCharmStoreItem>()
{
	return FSBZWeaponCharmStoreItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWeaponCharmStoreItem(FSBZWeaponCharmStoreItem::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWeaponCharmStoreItem"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponCharmStoreItem
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponCharmStoreItem()
	{
		UScriptStruct::DeferCppStructOps<FSBZWeaponCharmStoreItem>(FName(TEXT("SBZWeaponCharmStoreItem")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponCharmStoreItem;
	struct Z_Construct_UScriptStruct_FSBZWeaponCharmStoreItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponCharmData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponCharmData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponCharmStoreItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponCharmStoreItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWeaponCharmStoreItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWeaponCharmStoreItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponCharmStoreItem_Statics::NewProp_WeaponCharmData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponCharmStoreItem" },
		{ "ModuleRelativePath", "Public/SBZWeaponCharmStoreItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZWeaponCharmStoreItem_Statics::NewProp_WeaponCharmData = { "WeaponCharmData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponCharmStoreItem, WeaponCharmData), Z_Construct_UClass_USBZWeaponCharmData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponCharmStoreItem_Statics::NewProp_WeaponCharmData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponCharmStoreItem_Statics::NewProp_WeaponCharmData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWeaponCharmStoreItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponCharmStoreItem_Statics::NewProp_WeaponCharmData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWeaponCharmStoreItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZStoreBaseItem,
		&NewStructOps,
		"SBZWeaponCharmStoreItem",
		sizeof(FSBZWeaponCharmStoreItem),
		alignof(FSBZWeaponCharmStoreItem),
		Z_Construct_UScriptStruct_FSBZWeaponCharmStoreItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponCharmStoreItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponCharmStoreItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponCharmStoreItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponCharmStoreItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponCharmStoreItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWeaponCharmStoreItem"), sizeof(FSBZWeaponCharmStoreItem), Get_Z_Construct_UScriptStruct_FSBZWeaponCharmStoreItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWeaponCharmStoreItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponCharmStoreItem_Hash() { return 292676171U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
