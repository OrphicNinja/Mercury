// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIAlertnessDialogRules.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIAlertnessDialogRules() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAIAlertnessDialogRules();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZAIAlertnessDialogRules::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAIAlertnessDialogRules_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAIAlertnessDialogRules, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAIAlertnessDialogRules"), sizeof(FSBZAIAlertnessDialogRules), Get_Z_Construct_UScriptStruct_FSBZAIAlertnessDialogRules_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAIAlertnessDialogRules>()
{
	return FSBZAIAlertnessDialogRules::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAIAlertnessDialogRules(FSBZAIAlertnessDialogRules::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAIAlertnessDialogRules"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAIAlertnessDialogRules
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAIAlertnessDialogRules()
	{
		UScriptStruct::DeferCppStructOps<FSBZAIAlertnessDialogRules>(FName(TEXT("SBZAIAlertnessDialogRules")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAIAlertnessDialogRules;
	struct Z_Construct_UScriptStruct_FSBZAIAlertnessDialogRules_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlock_MetaData[];
#endif
		static void NewProp_bBlock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInterrupt_MetaData[];
#endif
		static void NewProp_bInterrupt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterrupt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIAlertnessDialogRules_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAIAlertnessDialogRules.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAIAlertnessDialogRules_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAIAlertnessDialogRules>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIAlertnessDialogRules_Statics::NewProp_bBlock_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAlertnessDialogRules" },
		{ "ModuleRelativePath", "Public/SBZAIAlertnessDialogRules.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAIAlertnessDialogRules_Statics::NewProp_bBlock_SetBit(void* Obj)
	{
		((FSBZAIAlertnessDialogRules*)Obj)->bBlock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAIAlertnessDialogRules_Statics::NewProp_bBlock = { "bBlock", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZAIAlertnessDialogRules), &Z_Construct_UScriptStruct_FSBZAIAlertnessDialogRules_Statics::NewProp_bBlock_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIAlertnessDialogRules_Statics::NewProp_bBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIAlertnessDialogRules_Statics::NewProp_bBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIAlertnessDialogRules_Statics::NewProp_bInterrupt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAlertnessDialogRules" },
		{ "ModuleRelativePath", "Public/SBZAIAlertnessDialogRules.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAIAlertnessDialogRules_Statics::NewProp_bInterrupt_SetBit(void* Obj)
	{
		((FSBZAIAlertnessDialogRules*)Obj)->bInterrupt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAIAlertnessDialogRules_Statics::NewProp_bInterrupt = { "bInterrupt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZAIAlertnessDialogRules), &Z_Construct_UScriptStruct_FSBZAIAlertnessDialogRules_Statics::NewProp_bInterrupt_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIAlertnessDialogRules_Statics::NewProp_bInterrupt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIAlertnessDialogRules_Statics::NewProp_bInterrupt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAIAlertnessDialogRules_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIAlertnessDialogRules_Statics::NewProp_bBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIAlertnessDialogRules_Statics::NewProp_bInterrupt,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAIAlertnessDialogRules_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAIAlertnessDialogRules",
		sizeof(FSBZAIAlertnessDialogRules),
		alignof(FSBZAIAlertnessDialogRules),
		Z_Construct_UScriptStruct_FSBZAIAlertnessDialogRules_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIAlertnessDialogRules_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIAlertnessDialogRules_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIAlertnessDialogRules_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAIAlertnessDialogRules()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAIAlertnessDialogRules_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAIAlertnessDialogRules"), sizeof(FSBZAIAlertnessDialogRules), Get_Z_Construct_UScriptStruct_FSBZAIAlertnessDialogRules_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAIAlertnessDialogRules_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAIAlertnessDialogRules_Hash() { return 2056739466U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
