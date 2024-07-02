// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZChallengesDsSettingsBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZChallengesDsSettingsBlock() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengesDsSettingsBlock();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeData();
// End Cross Module References
class UScriptStruct* FSBZChallengesDsSettingsBlock::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZChallengesDsSettingsBlock_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZChallengesDsSettingsBlock, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZChallengesDsSettingsBlock"), sizeof(FSBZChallengesDsSettingsBlock), Get_Z_Construct_UScriptStruct_FSBZChallengesDsSettingsBlock_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZChallengesDsSettingsBlock>()
{
	return FSBZChallengesDsSettingsBlock::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZChallengesDsSettingsBlock(FSBZChallengesDsSettingsBlock::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZChallengesDsSettingsBlock"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZChallengesDsSettingsBlock
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZChallengesDsSettingsBlock()
	{
		UScriptStruct::DeferCppStructOps<FSBZChallengesDsSettingsBlock>(FName(TEXT("SBZChallengesDsSettingsBlock")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZChallengesDsSettingsBlock;
	struct Z_Construct_UScriptStruct_FSBZChallengesDsSettingsBlock_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SlotArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengesDsSettingsBlock_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZChallengesDsSettingsBlock.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZChallengesDsSettingsBlock_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZChallengesDsSettingsBlock>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZChallengesDsSettingsBlock_Statics::NewProp_SlotArray_Inner = { "SlotArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZChallengeData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZChallengesDsSettingsBlock_Statics::NewProp_SlotArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengesDsSettingsBlock" },
		{ "ModuleRelativePath", "Public/SBZChallengesDsSettingsBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZChallengesDsSettingsBlock_Statics::NewProp_SlotArray = { "SlotArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZChallengesDsSettingsBlock, SlotArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengesDsSettingsBlock_Statics::NewProp_SlotArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengesDsSettingsBlock_Statics::NewProp_SlotArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZChallengesDsSettingsBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengesDsSettingsBlock_Statics::NewProp_SlotArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZChallengesDsSettingsBlock_Statics::NewProp_SlotArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZChallengesDsSettingsBlock_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZChallengesDsSettingsBlock",
		sizeof(FSBZChallengesDsSettingsBlock),
		alignof(FSBZChallengesDsSettingsBlock),
		Z_Construct_UScriptStruct_FSBZChallengesDsSettingsBlock_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengesDsSettingsBlock_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZChallengesDsSettingsBlock_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZChallengesDsSettingsBlock_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengesDsSettingsBlock()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZChallengesDsSettingsBlock_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZChallengesDsSettingsBlock"), sizeof(FSBZChallengesDsSettingsBlock), Get_Z_Construct_UScriptStruct_FSBZChallengesDsSettingsBlock_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZChallengesDsSettingsBlock_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZChallengesDsSettingsBlock_Hash() { return 4024866796U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
