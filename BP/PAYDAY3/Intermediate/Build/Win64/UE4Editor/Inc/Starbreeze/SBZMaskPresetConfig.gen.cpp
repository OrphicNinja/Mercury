// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMaskPresetConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMaskPresetConfig() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskPresetConfig();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskPresetData_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZMaskPresetConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZMaskPresetConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZMaskPresetConfig, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZMaskPresetConfig"), sizeof(FSBZMaskPresetConfig), Get_Z_Construct_UScriptStruct_FSBZMaskPresetConfig_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZMaskPresetConfig>()
{
	return FSBZMaskPresetConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZMaskPresetConfig(FSBZMaskPresetConfig::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZMaskPresetConfig"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMaskPresetConfig
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMaskPresetConfig()
	{
		UScriptStruct::DeferCppStructOps<FSBZMaskPresetConfig>(FName(TEXT("SBZMaskPresetConfig")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZMaskPresetConfig;
	struct Z_Construct_UScriptStruct_FSBZMaskPresetConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskPresetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaskPresetData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalMaskPresetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginalMaskPresetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMaskPresetConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZMaskPresetConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZMaskPresetConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZMaskPresetConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMaskPresetConfig_Statics::NewProp_MaskPresetData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskPresetConfig" },
		{ "ModuleRelativePath", "Public/SBZMaskPresetConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZMaskPresetConfig_Statics::NewProp_MaskPresetData = { "MaskPresetData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMaskPresetConfig, MaskPresetData), Z_Construct_UClass_USBZMaskPresetData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMaskPresetConfig_Statics::NewProp_MaskPresetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskPresetConfig_Statics::NewProp_MaskPresetData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMaskPresetConfig_Statics::NewProp_OriginalMaskPresetData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskPresetConfig" },
		{ "ModuleRelativePath", "Public/SBZMaskPresetConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZMaskPresetConfig_Statics::NewProp_OriginalMaskPresetData = { "OriginalMaskPresetData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMaskPresetConfig, OriginalMaskPresetData), Z_Construct_UClass_USBZMaskPresetData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMaskPresetConfig_Statics::NewProp_OriginalMaskPresetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskPresetConfig_Statics::NewProp_OriginalMaskPresetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZMaskPresetConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMaskPresetConfig_Statics::NewProp_MaskPresetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMaskPresetConfig_Statics::NewProp_OriginalMaskPresetData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZMaskPresetConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZMaskPresetConfig",
		sizeof(FSBZMaskPresetConfig),
		alignof(FSBZMaskPresetConfig),
		Z_Construct_UScriptStruct_FSBZMaskPresetConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskPresetConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMaskPresetConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskPresetConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskPresetConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZMaskPresetConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZMaskPresetConfig"), sizeof(FSBZMaskPresetConfig), Get_Z_Construct_UScriptStruct_FSBZMaskPresetConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZMaskPresetConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZMaskPresetConfig_Hash() { return 1941476239U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
