// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSuitConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSuitConfig() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitConfig();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitBaseData_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitConfigModDataMap();
// End Cross Module References
class UScriptStruct* FSBZSuitConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSuitConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSuitConfig, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSuitConfig"), sizeof(FSBZSuitConfig), Get_Z_Construct_UScriptStruct_FSBZSuitConfig_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSuitConfig>()
{
	return FSBZSuitConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSuitConfig(FSBZSuitConfig::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSuitConfig"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSuitConfig
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSuitConfig()
	{
		UScriptStruct::DeferCppStructOps<FSBZSuitConfig>(FName(TEXT("SBZSuitConfig")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSuitConfig;
	struct Z_Construct_UScriptStruct_FSBZSuitConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuitData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalSuitData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginalSuitData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitBaseData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuitBaseData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModDataMapArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModDataMapArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModDataMapArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSuitConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSuitConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSuitConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSuitConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSuitConfig_Statics::NewProp_SuitData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSuitConfig" },
		{ "ModuleRelativePath", "Public/SBZSuitConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSuitConfig_Statics::NewProp_SuitData = { "SuitData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSuitConfig, SuitData), Z_Construct_UClass_USBZSuitData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSuitConfig_Statics::NewProp_SuitData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitConfig_Statics::NewProp_SuitData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSuitConfig_Statics::NewProp_OriginalSuitData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSuitConfig" },
		{ "ModuleRelativePath", "Public/SBZSuitConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSuitConfig_Statics::NewProp_OriginalSuitData = { "OriginalSuitData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSuitConfig, OriginalSuitData), Z_Construct_UClass_USBZSuitData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSuitConfig_Statics::NewProp_OriginalSuitData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitConfig_Statics::NewProp_OriginalSuitData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSuitConfig_Statics::NewProp_SuitBaseData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSuitConfig" },
		{ "ModuleRelativePath", "Public/SBZSuitConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSuitConfig_Statics::NewProp_SuitBaseData = { "SuitBaseData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSuitConfig, SuitBaseData), Z_Construct_UClass_USBZSuitBaseData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSuitConfig_Statics::NewProp_SuitBaseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitConfig_Statics::NewProp_SuitBaseData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSuitConfig_Statics::NewProp_ModDataMapArray_Inner = { "ModDataMapArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZSuitConfigModDataMap, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSuitConfig_Statics::NewProp_ModDataMapArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSuitConfig" },
		{ "ModuleRelativePath", "Public/SBZSuitConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZSuitConfig_Statics::NewProp_ModDataMapArray = { "ModDataMapArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSuitConfig, ModDataMapArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSuitConfig_Statics::NewProp_ModDataMapArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitConfig_Statics::NewProp_ModDataMapArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSuitConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSuitConfig_Statics::NewProp_SuitData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSuitConfig_Statics::NewProp_OriginalSuitData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSuitConfig_Statics::NewProp_SuitBaseData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSuitConfig_Statics::NewProp_ModDataMapArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSuitConfig_Statics::NewProp_ModDataMapArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSuitConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSuitConfig",
		sizeof(FSBZSuitConfig),
		alignof(FSBZSuitConfig),
		Z_Construct_UScriptStruct_FSBZSuitConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSuitConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSuitConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSuitConfig"), sizeof(FSBZSuitConfig), Get_Z_Construct_UScriptStruct_FSBZSuitConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSuitConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSuitConfig_Hash() { return 3541038360U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
