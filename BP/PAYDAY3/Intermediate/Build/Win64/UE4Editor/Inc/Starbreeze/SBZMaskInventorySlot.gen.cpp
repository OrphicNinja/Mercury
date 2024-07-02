// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMaskInventorySlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMaskInventorySlot() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskInventorySlot();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInventorySlot();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZItemInventorySlotType();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskConfig();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskPresetConfig();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZMaskInventorySlot>() == std::is_polymorphic<FSBZInventorySlot>(), "USTRUCT FSBZMaskInventorySlot cannot be polymorphic unless super FSBZInventorySlot is polymorphic");

class UScriptStruct* FSBZMaskInventorySlot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZMaskInventorySlot, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZMaskInventorySlot"), sizeof(FSBZMaskInventorySlot), Get_Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZMaskInventorySlot>()
{
	return FSBZMaskInventorySlot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZMaskInventorySlot(FSBZMaskInventorySlot::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZMaskInventorySlot"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMaskInventorySlot
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMaskInventorySlot()
	{
		UScriptStruct::DeferCppStructOps<FSBZMaskInventorySlot>(FName(TEXT("SBZMaskInventorySlot")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZMaskInventorySlot;
	struct Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskInSlotEntitlementId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaskInSlotEntitlementId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskInSlotAccelByteItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaskInSlotAccelByteItemId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaskInventorySlotType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskInventorySlotType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MaskInventorySlotType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaskConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskPresetConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaskPresetConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZMaskInventorySlot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZMaskInventorySlot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::NewProp_MaskInSlotEntitlementId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskInventorySlot" },
		{ "ModuleRelativePath", "Public/SBZMaskInventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::NewProp_MaskInSlotEntitlementId = { "MaskInSlotEntitlementId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMaskInventorySlot, MaskInSlotEntitlementId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::NewProp_MaskInSlotEntitlementId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::NewProp_MaskInSlotEntitlementId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::NewProp_MaskInSlotAccelByteItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskInventorySlot" },
		{ "ModuleRelativePath", "Public/SBZMaskInventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::NewProp_MaskInSlotAccelByteItemId = { "MaskInSlotAccelByteItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMaskInventorySlot, MaskInSlotAccelByteItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::NewProp_MaskInSlotAccelByteItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::NewProp_MaskInSlotAccelByteItemId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::NewProp_MaskInventorySlotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::NewProp_MaskInventorySlotType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskInventorySlot" },
		{ "ModuleRelativePath", "Public/SBZMaskInventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::NewProp_MaskInventorySlotType = { "MaskInventorySlotType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMaskInventorySlot, MaskInventorySlotType), Z_Construct_UEnum_Starbreeze_ESBZItemInventorySlotType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::NewProp_MaskInventorySlotType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::NewProp_MaskInventorySlotType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::NewProp_MaskConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskInventorySlot" },
		{ "ModuleRelativePath", "Public/SBZMaskInventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::NewProp_MaskConfig = { "MaskConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMaskInventorySlot, MaskConfig), Z_Construct_UScriptStruct_FSBZMaskConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::NewProp_MaskConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::NewProp_MaskConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::NewProp_MaskPresetConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskInventorySlot" },
		{ "ModuleRelativePath", "Public/SBZMaskInventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::NewProp_MaskPresetConfig = { "MaskPresetConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMaskInventorySlot, MaskPresetConfig), Z_Construct_UScriptStruct_FSBZMaskPresetConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::NewProp_MaskPresetConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::NewProp_MaskPresetConfig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::NewProp_MaskInSlotEntitlementId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::NewProp_MaskInSlotAccelByteItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::NewProp_MaskInventorySlotType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::NewProp_MaskInventorySlotType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::NewProp_MaskConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::NewProp_MaskPresetConfig,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZInventorySlot,
		&NewStructOps,
		"SBZMaskInventorySlot",
		sizeof(FSBZMaskInventorySlot),
		alignof(FSBZMaskInventorySlot),
		Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskInventorySlot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZMaskInventorySlot"), sizeof(FSBZMaskInventorySlot), Get_Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZMaskInventorySlot_Hash() { return 2572329474U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
