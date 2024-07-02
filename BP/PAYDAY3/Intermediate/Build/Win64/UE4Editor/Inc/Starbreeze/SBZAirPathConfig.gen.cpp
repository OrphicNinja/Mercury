// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAirPathConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAirPathConfig() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAirPathConfig();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZAirPathConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAirPathConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAirPathConfig, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAirPathConfig"), sizeof(FSBZAirPathConfig), Get_Z_Construct_UScriptStruct_FSBZAirPathConfig_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAirPathConfig>()
{
	return FSBZAirPathConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAirPathConfig(FSBZAirPathConfig::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAirPathConfig"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAirPathConfig
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAirPathConfig()
	{
		UScriptStruct::DeferCppStructOps<FSBZAirPathConfig>(FName(TEXT("SBZAirPathConfig")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAirPathConfig;
	struct Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumSimultaneousQueries_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxNumSimultaneousQueries;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SliceTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SliceTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumNodesExpandedPerSliceCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumNodesExpandedPerSliceCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxNumNodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinNodeHalfSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinNodeHalfSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAirPathConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAirPathConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics::NewProp_MaxNumSimultaneousQueries_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAirPathConfig" },
		{ "ModuleRelativePath", "Public/SBZAirPathConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics::NewProp_MaxNumSimultaneousQueries = { "MaxNumSimultaneousQueries", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAirPathConfig, MaxNumSimultaneousQueries), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics::NewProp_MaxNumSimultaneousQueries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics::NewProp_MaxNumSimultaneousQueries_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics::NewProp_SliceTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAirPathConfig" },
		{ "ModuleRelativePath", "Public/SBZAirPathConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics::NewProp_SliceTime = { "SliceTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAirPathConfig, SliceTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics::NewProp_SliceTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics::NewProp_SliceTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics::NewProp_NumNodesExpandedPerSliceCheck_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAirPathConfig" },
		{ "ModuleRelativePath", "Public/SBZAirPathConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics::NewProp_NumNodesExpandedPerSliceCheck = { "NumNodesExpandedPerSliceCheck", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAirPathConfig, NumNodesExpandedPerSliceCheck), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics::NewProp_NumNodesExpandedPerSliceCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics::NewProp_NumNodesExpandedPerSliceCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics::NewProp_MaxNumNodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAirPathConfig" },
		{ "ModuleRelativePath", "Public/SBZAirPathConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics::NewProp_MaxNumNodes = { "MaxNumNodes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAirPathConfig, MaxNumNodes), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics::NewProp_MaxNumNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics::NewProp_MaxNumNodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics::NewProp_MinNodeHalfSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAirPathConfig" },
		{ "ModuleRelativePath", "Public/SBZAirPathConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics::NewProp_MinNodeHalfSize = { "MinNodeHalfSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAirPathConfig, MinNodeHalfSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics::NewProp_MinNodeHalfSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics::NewProp_MinNodeHalfSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics::NewProp_MaxNumSimultaneousQueries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics::NewProp_SliceTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics::NewProp_NumNodesExpandedPerSliceCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics::NewProp_MaxNumNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics::NewProp_MinNodeHalfSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAirPathConfig",
		sizeof(FSBZAirPathConfig),
		alignof(FSBZAirPathConfig),
		Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAirPathConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAirPathConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAirPathConfig"), sizeof(FSBZAirPathConfig), Get_Z_Construct_UScriptStruct_FSBZAirPathConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAirPathConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAirPathConfig_Hash() { return 326232805U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
