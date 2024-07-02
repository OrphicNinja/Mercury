// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponConfigInventorySlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponConfigInventorySlot() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponConfigInventorySlot();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippableConfig();
// End Cross Module References
class UScriptStruct* FSBZWeaponConfigInventorySlot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponConfigInventorySlot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWeaponConfigInventorySlot, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWeaponConfigInventorySlot"), sizeof(FSBZWeaponConfigInventorySlot), Get_Z_Construct_UScriptStruct_FSBZWeaponConfigInventorySlot_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWeaponConfigInventorySlot>()
{
	return FSBZWeaponConfigInventorySlot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWeaponConfigInventorySlot(FSBZWeaponConfigInventorySlot::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWeaponConfigInventorySlot"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponConfigInventorySlot
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponConfigInventorySlot()
	{
		UScriptStruct::DeferCppStructOps<FSBZWeaponConfigInventorySlot>(FName(TEXT("SBZWeaponConfigInventorySlot")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponConfigInventorySlot;
	struct Z_Construct_UScriptStruct_FSBZWeaponConfigInventorySlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EquippableConfig;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PayedWeaponPartAttachmentItemIdArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PayedWeaponPartAttachmentItemIdArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PayedWeaponPartAttachmentItemIdArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponConfigInventorySlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponConfigInventorySlot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWeaponConfigInventorySlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWeaponConfigInventorySlot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponConfigInventorySlot_Statics::NewProp_EquippableConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponConfigInventorySlot" },
		{ "ModuleRelativePath", "Public/SBZWeaponConfigInventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponConfigInventorySlot_Statics::NewProp_EquippableConfig = { "EquippableConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponConfigInventorySlot, EquippableConfig), Z_Construct_UScriptStruct_FSBZEquippableConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponConfigInventorySlot_Statics::NewProp_EquippableConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponConfigInventorySlot_Statics::NewProp_EquippableConfig_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZWeaponConfigInventorySlot_Statics::NewProp_PayedWeaponPartAttachmentItemIdArray_Inner = { "PayedWeaponPartAttachmentItemIdArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponConfigInventorySlot_Statics::NewProp_PayedWeaponPartAttachmentItemIdArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponConfigInventorySlot" },
		{ "ModuleRelativePath", "Public/SBZWeaponConfigInventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZWeaponConfigInventorySlot_Statics::NewProp_PayedWeaponPartAttachmentItemIdArray = { "PayedWeaponPartAttachmentItemIdArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponConfigInventorySlot, PayedWeaponPartAttachmentItemIdArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponConfigInventorySlot_Statics::NewProp_PayedWeaponPartAttachmentItemIdArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponConfigInventorySlot_Statics::NewProp_PayedWeaponPartAttachmentItemIdArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWeaponConfigInventorySlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponConfigInventorySlot_Statics::NewProp_EquippableConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponConfigInventorySlot_Statics::NewProp_PayedWeaponPartAttachmentItemIdArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponConfigInventorySlot_Statics::NewProp_PayedWeaponPartAttachmentItemIdArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWeaponConfigInventorySlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZWeaponConfigInventorySlot",
		sizeof(FSBZWeaponConfigInventorySlot),
		alignof(FSBZWeaponConfigInventorySlot),
		Z_Construct_UScriptStruct_FSBZWeaponConfigInventorySlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponConfigInventorySlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponConfigInventorySlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponConfigInventorySlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponConfigInventorySlot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponConfigInventorySlot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWeaponConfigInventorySlot"), sizeof(FSBZWeaponConfigInventorySlot), Get_Z_Construct_UScriptStruct_FSBZWeaponConfigInventorySlot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWeaponConfigInventorySlot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponConfigInventorySlot_Hash() { return 2820611653U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
