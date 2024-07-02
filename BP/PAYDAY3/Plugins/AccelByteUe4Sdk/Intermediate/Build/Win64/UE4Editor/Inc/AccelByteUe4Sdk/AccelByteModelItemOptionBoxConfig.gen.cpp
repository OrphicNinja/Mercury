// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteModelItemOptionBoxConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteModelItemOptionBoxConfig() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
	ACCELBYTEUE4SDK_API UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelItemBoxItem();
// End Cross Module References
class UScriptStruct* FAccelByteModelItemOptionBoxConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTEUE4SDK_API uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig, Z_Construct_UPackage__Script_AccelByteUe4Sdk(), TEXT("AccelByteModelItemOptionBoxConfig"), sizeof(FAccelByteModelItemOptionBoxConfig), Get_Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Hash());
	}
	return Singleton;
}
template<> ACCELBYTEUE4SDK_API UScriptStruct* StaticStruct<FAccelByteModelItemOptionBoxConfig>()
{
	return FAccelByteModelItemOptionBoxConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccelByteModelItemOptionBoxConfig(FAccelByteModelItemOptionBoxConfig::StaticStruct, TEXT("/Script/AccelByteUe4Sdk"), TEXT("AccelByteModelItemOptionBoxConfig"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelItemOptionBoxConfig
{
	FScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelItemOptionBoxConfig()
	{
		UScriptStruct::DeferCppStructOps<FAccelByteModelItemOptionBoxConfig>(FName(TEXT("AccelByteModelItemOptionBoxConfig")));
	}
} ScriptStruct_AccelByteUe4Sdk_StaticRegisterNativesFAccelByteModelItemOptionBoxConfig;
	struct Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxItems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoxItems;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccelByteModelItemOptionBoxConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccelByteModelItemOptionBoxConfig>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Statics::NewProp_BoxItems_Inner = { "BoxItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAccelByteModelItemBoxItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Statics::NewProp_BoxItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccelByteModelItemOptionBoxConfig" },
		{ "ModuleRelativePath", "Public/AccelByteModelItemOptionBoxConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Statics::NewProp_BoxItems = { "BoxItems", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccelByteModelItemOptionBoxConfig, BoxItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Statics::NewProp_BoxItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Statics::NewProp_BoxItems_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Statics::NewProp_BoxItems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Statics::NewProp_BoxItems,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
		nullptr,
		&NewStructOps,
		"AccelByteModelItemOptionBoxConfig",
		sizeof(FAccelByteModelItemOptionBoxConfig),
		alignof(FAccelByteModelItemOptionBoxConfig),
		Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteUe4Sdk();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccelByteModelItemOptionBoxConfig"), sizeof(FAccelByteModelItemOptionBoxConfig), Get_Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccelByteModelItemOptionBoxConfig_Hash() { return 812702217U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
