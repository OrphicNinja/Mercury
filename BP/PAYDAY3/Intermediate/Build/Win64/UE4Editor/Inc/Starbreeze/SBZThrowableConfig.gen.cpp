// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZThrowableConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZThrowableConfig() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZThrowableConfig();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZThrowableData_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZThrowableConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZThrowableConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZThrowableConfig, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZThrowableConfig"), sizeof(FSBZThrowableConfig), Get_Z_Construct_UScriptStruct_FSBZThrowableConfig_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZThrowableConfig>()
{
	return FSBZThrowableConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZThrowableConfig(FSBZThrowableConfig::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZThrowableConfig"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZThrowableConfig
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZThrowableConfig()
	{
		UScriptStruct::DeferCppStructOps<FSBZThrowableConfig>(FName(TEXT("SBZThrowableConfig")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZThrowableConfig;
	struct Z_Construct_UScriptStruct_FSBZThrowableConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginalData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZThrowableConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZThrowableConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZThrowableConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZThrowableConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZThrowableConfig_Statics::NewProp_Data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThrowableConfig" },
		{ "ModuleRelativePath", "Public/SBZThrowableConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZThrowableConfig_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZThrowableConfig, Data), Z_Construct_UClass_USBZThrowableData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZThrowableConfig_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZThrowableConfig_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZThrowableConfig_Statics::NewProp_OriginalData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThrowableConfig" },
		{ "ModuleRelativePath", "Public/SBZThrowableConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZThrowableConfig_Statics::NewProp_OriginalData = { "OriginalData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZThrowableConfig, OriginalData), Z_Construct_UClass_USBZThrowableData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZThrowableConfig_Statics::NewProp_OriginalData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZThrowableConfig_Statics::NewProp_OriginalData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZThrowableConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZThrowableConfig_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZThrowableConfig_Statics::NewProp_OriginalData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZThrowableConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZThrowableConfig",
		sizeof(FSBZThrowableConfig),
		alignof(FSBZThrowableConfig),
		Z_Construct_UScriptStruct_FSBZThrowableConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZThrowableConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZThrowableConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZThrowableConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZThrowableConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZThrowableConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZThrowableConfig"), sizeof(FSBZThrowableConfig), Get_Z_Construct_UScriptStruct_FSBZThrowableConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZThrowableConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZThrowableConfig_Hash() { return 3361691971U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
