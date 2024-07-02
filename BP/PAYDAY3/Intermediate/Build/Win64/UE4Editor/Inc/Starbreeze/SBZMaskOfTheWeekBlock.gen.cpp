// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMaskOfTheWeekBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMaskOfTheWeekBlock() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FSBZMaskOfTheWeekBlock::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZMaskOfTheWeekBlock"), sizeof(FSBZMaskOfTheWeekBlock), Get_Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZMaskOfTheWeekBlock>()
{
	return FSBZMaskOfTheWeekBlock::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZMaskOfTheWeekBlock(FSBZMaskOfTheWeekBlock::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZMaskOfTheWeekBlock"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMaskOfTheWeekBlock
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMaskOfTheWeekBlock()
	{
		UScriptStruct::DeferCppStructOps<FSBZMaskOfTheWeekBlock>(FName(TEXT("SBZMaskOfTheWeekBlock")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZMaskOfTheWeekBlock;
	struct Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MaskOfTheWeekSkuArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskOfTheWeekSkuArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaskOfTheWeekSkuArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StopDate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZMaskOfTheWeekBlock.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZMaskOfTheWeekBlock>();
	}
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock_Statics::NewProp_MaskOfTheWeekSkuArray_Inner = { "MaskOfTheWeekSkuArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock_Statics::NewProp_MaskOfTheWeekSkuArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskOfTheWeekBlock" },
		{ "ModuleRelativePath", "Public/SBZMaskOfTheWeekBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock_Statics::NewProp_MaskOfTheWeekSkuArray = { "MaskOfTheWeekSkuArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMaskOfTheWeekBlock, MaskOfTheWeekSkuArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock_Statics::NewProp_MaskOfTheWeekSkuArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock_Statics::NewProp_MaskOfTheWeekSkuArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock_Statics::NewProp_StartDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskOfTheWeekBlock" },
		{ "ModuleRelativePath", "Public/SBZMaskOfTheWeekBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock_Statics::NewProp_StartDate = { "StartDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMaskOfTheWeekBlock, StartDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock_Statics::NewProp_StartDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock_Statics::NewProp_StartDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock_Statics::NewProp_StopDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskOfTheWeekBlock" },
		{ "ModuleRelativePath", "Public/SBZMaskOfTheWeekBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock_Statics::NewProp_StopDate = { "StopDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMaskOfTheWeekBlock, StopDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock_Statics::NewProp_StopDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock_Statics::NewProp_StopDate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock_Statics::NewProp_MaskOfTheWeekSkuArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock_Statics::NewProp_MaskOfTheWeekSkuArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock_Statics::NewProp_StartDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock_Statics::NewProp_StopDate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZMaskOfTheWeekBlock",
		sizeof(FSBZMaskOfTheWeekBlock),
		alignof(FSBZMaskOfTheWeekBlock),
		Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZMaskOfTheWeekBlock"), sizeof(FSBZMaskOfTheWeekBlock), Get_Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZMaskOfTheWeekBlock_Hash() { return 647237107U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
