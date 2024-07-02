// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSuitInventorySlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSuitInventorySlot() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitInventorySlot();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInventorySlot();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZItemInventorySlotType();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitConfig();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitPresetConfig();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZSuitInventorySlot>() == std::is_polymorphic<FSBZInventorySlot>(), "USTRUCT FSBZSuitInventorySlot cannot be polymorphic unless super FSBZInventorySlot is polymorphic");

class UScriptStruct* FSBZSuitInventorySlot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSuitInventorySlot, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSuitInventorySlot"), sizeof(FSBZSuitInventorySlot), Get_Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSuitInventorySlot>()
{
	return FSBZSuitInventorySlot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSuitInventorySlot(FSBZSuitInventorySlot::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSuitInventorySlot"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSuitInventorySlot
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSuitInventorySlot()
	{
		UScriptStruct::DeferCppStructOps<FSBZSuitInventorySlot>(FName(TEXT("SBZSuitInventorySlot")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSuitInventorySlot;
	struct Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitInSlotEntitlementId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuitInSlotEntitlementId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitInSlotAccelByteItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuitInSlotAccelByteItemId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SuitInventorySlotType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitInventorySlotType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SuitInventorySlotType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuitConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitPresetConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuitPresetConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSuitInventorySlot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSuitInventorySlot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::NewProp_SuitInSlotEntitlementId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSuitInventorySlot" },
		{ "ModuleRelativePath", "Public/SBZSuitInventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::NewProp_SuitInSlotEntitlementId = { "SuitInSlotEntitlementId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSuitInventorySlot, SuitInSlotEntitlementId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::NewProp_SuitInSlotEntitlementId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::NewProp_SuitInSlotEntitlementId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::NewProp_SuitInSlotAccelByteItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSuitInventorySlot" },
		{ "ModuleRelativePath", "Public/SBZSuitInventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::NewProp_SuitInSlotAccelByteItemId = { "SuitInSlotAccelByteItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSuitInventorySlot, SuitInSlotAccelByteItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::NewProp_SuitInSlotAccelByteItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::NewProp_SuitInSlotAccelByteItemId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::NewProp_SuitInventorySlotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::NewProp_SuitInventorySlotType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSuitInventorySlot" },
		{ "ModuleRelativePath", "Public/SBZSuitInventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::NewProp_SuitInventorySlotType = { "SuitInventorySlotType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSuitInventorySlot, SuitInventorySlotType), Z_Construct_UEnum_Starbreeze_ESBZItemInventorySlotType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::NewProp_SuitInventorySlotType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::NewProp_SuitInventorySlotType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::NewProp_SuitConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSuitInventorySlot" },
		{ "ModuleRelativePath", "Public/SBZSuitInventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::NewProp_SuitConfig = { "SuitConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSuitInventorySlot, SuitConfig), Z_Construct_UScriptStruct_FSBZSuitConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::NewProp_SuitConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::NewProp_SuitConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::NewProp_SuitPresetConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSuitInventorySlot" },
		{ "ModuleRelativePath", "Public/SBZSuitInventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::NewProp_SuitPresetConfig = { "SuitPresetConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSuitInventorySlot, SuitPresetConfig), Z_Construct_UScriptStruct_FSBZSuitPresetConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::NewProp_SuitPresetConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::NewProp_SuitPresetConfig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::NewProp_SuitInSlotEntitlementId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::NewProp_SuitInSlotAccelByteItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::NewProp_SuitInventorySlotType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::NewProp_SuitInventorySlotType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::NewProp_SuitConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::NewProp_SuitPresetConfig,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZInventorySlot,
		&NewStructOps,
		"SBZSuitInventorySlot",
		sizeof(FSBZSuitInventorySlot),
		alignof(FSBZSuitInventorySlot),
		Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitInventorySlot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSuitInventorySlot"), sizeof(FSBZSuitInventorySlot), Get_Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSuitInventorySlot_Hash() { return 4269414861U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
