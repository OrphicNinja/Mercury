// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCosmeticPanelInitParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCosmeticPanelInitParams() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCosmeticPanelInitParams();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCosmeticsInventoryItem();
// End Cross Module References
class UScriptStruct* FSBZCosmeticPanelInitParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCosmeticPanelInitParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCosmeticPanelInitParams, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCosmeticPanelInitParams"), sizeof(FSBZCosmeticPanelInitParams), Get_Z_Construct_UScriptStruct_FSBZCosmeticPanelInitParams_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCosmeticPanelInitParams>()
{
	return FSBZCosmeticPanelInitParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCosmeticPanelInitParams(FSBZCosmeticPanelInitParams::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCosmeticPanelInitParams"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCosmeticPanelInitParams
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCosmeticPanelInitParams()
	{
		UScriptStruct::DeferCppStructOps<FSBZCosmeticPanelInitParams>(FName(TEXT("SBZCosmeticPanelInitParams")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCosmeticPanelInitParams;
	struct Z_Construct_UScriptStruct_FSBZCosmeticPanelInitParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultItem;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CosmeticInventoryItems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CosmeticInventoryItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CosmeticInventoryItems;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCosmeticPanelInitParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCosmeticPanelInitParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCosmeticPanelInitParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCosmeticPanelInitParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCosmeticPanelInitParams_Statics::NewProp_DefaultItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCosmeticPanelInitParams" },
		{ "ModuleRelativePath", "Public/SBZCosmeticPanelInitParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZCosmeticPanelInitParams_Statics::NewProp_DefaultItem = { "DefaultItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCosmeticPanelInitParams, DefaultItem), Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCosmeticPanelInitParams_Statics::NewProp_DefaultItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCosmeticPanelInitParams_Statics::NewProp_DefaultItem_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZCosmeticPanelInitParams_Statics::NewProp_CosmeticInventoryItems_Inner = { "CosmeticInventoryItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZCosmeticsInventoryItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCosmeticPanelInitParams_Statics::NewProp_CosmeticInventoryItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCosmeticPanelInitParams" },
		{ "ModuleRelativePath", "Public/SBZCosmeticPanelInitParams.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZCosmeticPanelInitParams_Statics::NewProp_CosmeticInventoryItems = { "CosmeticInventoryItems", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCosmeticPanelInitParams, CosmeticInventoryItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCosmeticPanelInitParams_Statics::NewProp_CosmeticInventoryItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCosmeticPanelInitParams_Statics::NewProp_CosmeticInventoryItems_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCosmeticPanelInitParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCosmeticPanelInitParams_Statics::NewProp_DefaultItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCosmeticPanelInitParams_Statics::NewProp_CosmeticInventoryItems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCosmeticPanelInitParams_Statics::NewProp_CosmeticInventoryItems,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCosmeticPanelInitParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCosmeticPanelInitParams",
		sizeof(FSBZCosmeticPanelInitParams),
		alignof(FSBZCosmeticPanelInitParams),
		Z_Construct_UScriptStruct_FSBZCosmeticPanelInitParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCosmeticPanelInitParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCosmeticPanelInitParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCosmeticPanelInitParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCosmeticPanelInitParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCosmeticPanelInitParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCosmeticPanelInitParams"), sizeof(FSBZCosmeticPanelInitParams), Get_Z_Construct_UScriptStruct_FSBZCosmeticPanelInitParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCosmeticPanelInitParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCosmeticPanelInitParams_Hash() { return 1097837150U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
