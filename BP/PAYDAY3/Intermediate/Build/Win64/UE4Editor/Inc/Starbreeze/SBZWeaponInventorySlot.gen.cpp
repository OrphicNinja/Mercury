// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponInventorySlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponInventorySlot() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponInventorySlot();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInventorySlot();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZItemInventorySlotType();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponConfigInventorySlot();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponPresetConfigInventorySlot();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZWeaponInventorySlot>() == std::is_polymorphic<FSBZInventorySlot>(), "USTRUCT FSBZWeaponInventorySlot cannot be polymorphic unless super FSBZInventorySlot is polymorphic");

class UScriptStruct* FSBZWeaponInventorySlot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWeaponInventorySlot, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWeaponInventorySlot"), sizeof(FSBZWeaponInventorySlot), Get_Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWeaponInventorySlot>()
{
	return FSBZWeaponInventorySlot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWeaponInventorySlot(FSBZWeaponInventorySlot::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWeaponInventorySlot"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponInventorySlot
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponInventorySlot()
	{
		UScriptStruct::DeferCppStructOps<FSBZWeaponInventorySlot>(FName(TEXT("SBZWeaponInventorySlot")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponInventorySlot;
	struct Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponInSlotEntitlementId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponInSlotEntitlementId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponInSlotAccelByteItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponInSlotAccelByteItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponInSlotAccelByteItemSku_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WeaponInSlotAccelByteItemSku;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WeaponInventorySlotType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponInventorySlotType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WeaponInventorySlotType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponConfigInventorySlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponConfigInventorySlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPresetConfigInventorySlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponPresetConfigInventorySlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponInventorySlot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWeaponInventorySlot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::NewProp_WeaponInSlotEntitlementId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponInventorySlot" },
		{ "ModuleRelativePath", "Public/SBZWeaponInventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::NewProp_WeaponInSlotEntitlementId = { "WeaponInSlotEntitlementId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponInventorySlot, WeaponInSlotEntitlementId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::NewProp_WeaponInSlotEntitlementId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::NewProp_WeaponInSlotEntitlementId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::NewProp_WeaponInSlotAccelByteItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponInventorySlot" },
		{ "ModuleRelativePath", "Public/SBZWeaponInventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::NewProp_WeaponInSlotAccelByteItemId = { "WeaponInSlotAccelByteItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponInventorySlot, WeaponInSlotAccelByteItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::NewProp_WeaponInSlotAccelByteItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::NewProp_WeaponInSlotAccelByteItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::NewProp_WeaponInSlotAccelByteItemSku_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponInventorySlot" },
		{ "ModuleRelativePath", "Public/SBZWeaponInventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::NewProp_WeaponInSlotAccelByteItemSku = { "WeaponInSlotAccelByteItemSku", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponInventorySlot, WeaponInSlotAccelByteItemSku), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::NewProp_WeaponInSlotAccelByteItemSku_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::NewProp_WeaponInSlotAccelByteItemSku_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::NewProp_WeaponInventorySlotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::NewProp_WeaponInventorySlotType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponInventorySlot" },
		{ "ModuleRelativePath", "Public/SBZWeaponInventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::NewProp_WeaponInventorySlotType = { "WeaponInventorySlotType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponInventorySlot, WeaponInventorySlotType), Z_Construct_UEnum_Starbreeze_ESBZItemInventorySlotType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::NewProp_WeaponInventorySlotType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::NewProp_WeaponInventorySlotType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::NewProp_WeaponConfigInventorySlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponInventorySlot" },
		{ "ModuleRelativePath", "Public/SBZWeaponInventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::NewProp_WeaponConfigInventorySlot = { "WeaponConfigInventorySlot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponInventorySlot, WeaponConfigInventorySlot), Z_Construct_UScriptStruct_FSBZWeaponConfigInventorySlot, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::NewProp_WeaponConfigInventorySlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::NewProp_WeaponConfigInventorySlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::NewProp_WeaponPresetConfigInventorySlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponInventorySlot" },
		{ "ModuleRelativePath", "Public/SBZWeaponInventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::NewProp_WeaponPresetConfigInventorySlot = { "WeaponPresetConfigInventorySlot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponInventorySlot, WeaponPresetConfigInventorySlot), Z_Construct_UScriptStruct_FSBZWeaponPresetConfigInventorySlot, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::NewProp_WeaponPresetConfigInventorySlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::NewProp_WeaponPresetConfigInventorySlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::NewProp_WeaponInSlotEntitlementId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::NewProp_WeaponInSlotAccelByteItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::NewProp_WeaponInSlotAccelByteItemSku,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::NewProp_WeaponInventorySlotType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::NewProp_WeaponInventorySlotType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::NewProp_WeaponConfigInventorySlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::NewProp_WeaponPresetConfigInventorySlot,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZInventorySlot,
		&NewStructOps,
		"SBZWeaponInventorySlot",
		sizeof(FSBZWeaponInventorySlot),
		alignof(FSBZWeaponInventorySlot),
		Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponInventorySlot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWeaponInventorySlot"), sizeof(FSBZWeaponInventorySlot), Get_Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponInventorySlot_Hash() { return 150447219U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
