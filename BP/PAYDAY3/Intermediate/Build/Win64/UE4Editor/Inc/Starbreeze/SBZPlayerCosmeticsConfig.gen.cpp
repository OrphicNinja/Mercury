// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerCosmeticsConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerCosmeticsConfig() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZPlayerCosmeticsConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPlayerCosmeticsConfig"), sizeof(FSBZPlayerCosmeticsConfig), Get_Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPlayerCosmeticsConfig>()
{
	return FSBZPlayerCosmeticsConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPlayerCosmeticsConfig(FSBZPlayerCosmeticsConfig::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPlayerCosmeticsConfig"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerCosmeticsConfig
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerCosmeticsConfig()
	{
		UScriptStruct::DeferCppStructOps<FSBZPlayerCosmeticsConfig>(FName(TEXT("SBZPlayerCosmeticsConfig")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerCosmeticsConfig;
	struct Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskConfigSlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaskConfigSlotIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitConfigSlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SuitConfigSlotIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GloveConfigSlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GloveConfigSlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerCosmeticsConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPlayerCosmeticsConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig_Statics::NewProp_MaskConfigSlotIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCosmeticsConfig" },
		{ "ModuleRelativePath", "Public/SBZPlayerCosmeticsConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig_Statics::NewProp_MaskConfigSlotIndex = { "MaskConfigSlotIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerCosmeticsConfig, MaskConfigSlotIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig_Statics::NewProp_MaskConfigSlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig_Statics::NewProp_MaskConfigSlotIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig_Statics::NewProp_SuitConfigSlotIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCosmeticsConfig" },
		{ "ModuleRelativePath", "Public/SBZPlayerCosmeticsConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig_Statics::NewProp_SuitConfigSlotIndex = { "SuitConfigSlotIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerCosmeticsConfig, SuitConfigSlotIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig_Statics::NewProp_SuitConfigSlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig_Statics::NewProp_SuitConfigSlotIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig_Statics::NewProp_GloveConfigSlotIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerCosmeticsConfig" },
		{ "ModuleRelativePath", "Public/SBZPlayerCosmeticsConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig_Statics::NewProp_GloveConfigSlotIndex = { "GloveConfigSlotIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerCosmeticsConfig, GloveConfigSlotIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig_Statics::NewProp_GloveConfigSlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig_Statics::NewProp_GloveConfigSlotIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig_Statics::NewProp_MaskConfigSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig_Statics::NewProp_SuitConfigSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig_Statics::NewProp_GloveConfigSlotIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZPlayerCosmeticsConfig",
		sizeof(FSBZPlayerCosmeticsConfig),
		alignof(FSBZPlayerCosmeticsConfig),
		Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPlayerCosmeticsConfig"), sizeof(FSBZPlayerCosmeticsConfig), Get_Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig_Hash() { return 1479191668U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
