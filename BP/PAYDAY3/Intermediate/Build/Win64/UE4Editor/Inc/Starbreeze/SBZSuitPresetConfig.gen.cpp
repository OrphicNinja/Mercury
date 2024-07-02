// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSuitPresetConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSuitPresetConfig() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitPresetConfig();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitPresetData_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZSuitPresetConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSuitPresetConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSuitPresetConfig, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSuitPresetConfig"), sizeof(FSBZSuitPresetConfig), Get_Z_Construct_UScriptStruct_FSBZSuitPresetConfig_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSuitPresetConfig>()
{
	return FSBZSuitPresetConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSuitPresetConfig(FSBZSuitPresetConfig::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSuitPresetConfig"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSuitPresetConfig
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSuitPresetConfig()
	{
		UScriptStruct::DeferCppStructOps<FSBZSuitPresetConfig>(FName(TEXT("SBZSuitPresetConfig")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSuitPresetConfig;
	struct Z_Construct_UScriptStruct_FSBZSuitPresetConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitPresetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuitPresetData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalSuitPresetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginalSuitPresetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSuitPresetConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSuitPresetConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSuitPresetConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSuitPresetConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSuitPresetConfig_Statics::NewProp_SuitPresetData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSuitPresetConfig" },
		{ "ModuleRelativePath", "Public/SBZSuitPresetConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSuitPresetConfig_Statics::NewProp_SuitPresetData = { "SuitPresetData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSuitPresetConfig, SuitPresetData), Z_Construct_UClass_USBZSuitPresetData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSuitPresetConfig_Statics::NewProp_SuitPresetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitPresetConfig_Statics::NewProp_SuitPresetData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSuitPresetConfig_Statics::NewProp_OriginalSuitPresetData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSuitPresetConfig" },
		{ "ModuleRelativePath", "Public/SBZSuitPresetConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSuitPresetConfig_Statics::NewProp_OriginalSuitPresetData = { "OriginalSuitPresetData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSuitPresetConfig, OriginalSuitPresetData), Z_Construct_UClass_USBZSuitPresetData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSuitPresetConfig_Statics::NewProp_OriginalSuitPresetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitPresetConfig_Statics::NewProp_OriginalSuitPresetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSuitPresetConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSuitPresetConfig_Statics::NewProp_SuitPresetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSuitPresetConfig_Statics::NewProp_OriginalSuitPresetData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSuitPresetConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSuitPresetConfig",
		sizeof(FSBZSuitPresetConfig),
		alignof(FSBZSuitPresetConfig),
		Z_Construct_UScriptStruct_FSBZSuitPresetConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitPresetConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSuitPresetConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitPresetConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitPresetConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSuitPresetConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSuitPresetConfig"), sizeof(FSBZSuitPresetConfig), Get_Z_Construct_UScriptStruct_FSBZSuitPresetConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSuitPresetConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSuitPresetConfig_Hash() { return 1935796392U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
