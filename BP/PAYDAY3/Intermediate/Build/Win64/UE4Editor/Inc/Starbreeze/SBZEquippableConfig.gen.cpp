// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEquippableConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEquippableConfig() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippableConfig();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippableData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippablePartDataAsset_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartSlotBase_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZEquippableConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZEquippableConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZEquippableConfig, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZEquippableConfig"), sizeof(FSBZEquippableConfig), Get_Z_Construct_UScriptStruct_FSBZEquippableConfig_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZEquippableConfig>()
{
	return FSBZEquippableConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZEquippableConfig(FSBZEquippableConfig::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZEquippableConfig"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZEquippableConfig
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZEquippableConfig()
	{
		UScriptStruct::DeferCppStructOps<FSBZEquippableConfig>(FName(TEXT("SBZEquippableConfig")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZEquippableConfig;
	struct Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippableData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalEquippableData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginalEquippableData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModDataArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModDataMap_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ModDataMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZEquippableConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZEquippableConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::NewProp_EquippableData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableConfig" },
		{ "ModuleRelativePath", "Public/SBZEquippableConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::NewProp_EquippableData = { "EquippableData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEquippableConfig, EquippableData), Z_Construct_UClass_USBZEquippableData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::NewProp_EquippableData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::NewProp_EquippableData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::NewProp_OriginalEquippableData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableConfig" },
		{ "ModuleRelativePath", "Public/SBZEquippableConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::NewProp_OriginalEquippableData = { "OriginalEquippableData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEquippableConfig, OriginalEquippableData), Z_Construct_UClass_USBZEquippableData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::NewProp_OriginalEquippableData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::NewProp_OriginalEquippableData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::NewProp_ModDataArray_Inner = { "ModDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZEquippablePartDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::NewProp_ModDataArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableConfig" },
		{ "ModuleRelativePath", "Public/SBZEquippableConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::NewProp_ModDataArray = { "ModDataArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEquippableConfig, ModDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::NewProp_ModDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::NewProp_ModDataArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::NewProp_ModDataMap_ValueProp = { "ModDataMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::NewProp_ModDataMap_Key_KeyProp = { "ModDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZModularPartSlotBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::NewProp_ModDataMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableConfig" },
		{ "ModuleRelativePath", "Public/SBZEquippableConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::NewProp_ModDataMap = { "ModDataMap", nullptr, (EPropertyFlags)0x0010000080000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEquippableConfig, ModDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::NewProp_ModDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::NewProp_ModDataMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::NewProp_EquippableData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::NewProp_OriginalEquippableData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::NewProp_ModDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::NewProp_ModDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::NewProp_ModDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::NewProp_ModDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::NewProp_ModDataMap,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZEquippableConfig",
		sizeof(FSBZEquippableConfig),
		alignof(FSBZEquippableConfig),
		Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippableConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZEquippableConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZEquippableConfig"), sizeof(FSBZEquippableConfig), Get_Z_Construct_UScriptStruct_FSBZEquippableConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZEquippableConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZEquippableConfig_Hash() { return 2053515955U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
