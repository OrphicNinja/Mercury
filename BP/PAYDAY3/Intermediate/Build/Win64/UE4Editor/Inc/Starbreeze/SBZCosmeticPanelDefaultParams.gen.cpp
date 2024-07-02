// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCosmeticPanelDefaultParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCosmeticPanelDefaultParams() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZCosmeticPanelDefaultParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCosmeticPanelDefaultParams"), sizeof(FSBZCosmeticPanelDefaultParams), Get_Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCosmeticPanelDefaultParams>()
{
	return FSBZCosmeticPanelDefaultParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCosmeticPanelDefaultParams(FSBZCosmeticPanelDefaultParams::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCosmeticPanelDefaultParams"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCosmeticPanelDefaultParams
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCosmeticPanelDefaultParams()
	{
		UScriptStruct::DeferCppStructOps<FSBZCosmeticPanelDefaultParams>(FName(TEXT("SBZCosmeticPanelDefaultParams")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCosmeticPanelDefaultParams;
	struct Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasDefault_MetaData[];
#endif
		static void NewProp_HasDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCosmeticPanelDefaultParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCosmeticPanelDefaultParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams_Statics::NewProp_HasDefault_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCosmeticPanelDefaultParams" },
		{ "ModuleRelativePath", "Public/SBZCosmeticPanelDefaultParams.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams_Statics::NewProp_HasDefault_SetBit(void* Obj)
	{
		((FSBZCosmeticPanelDefaultParams*)Obj)->HasDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams_Statics::NewProp_HasDefault = { "HasDefault", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZCosmeticPanelDefaultParams), &Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams_Statics::NewProp_HasDefault_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams_Statics::NewProp_HasDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams_Statics::NewProp_HasDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCosmeticPanelDefaultParams" },
		{ "ModuleRelativePath", "Public/SBZCosmeticPanelDefaultParams.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCosmeticPanelDefaultParams, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams_Statics::NewProp_HasDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams_Statics::NewProp_DisplayName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCosmeticPanelDefaultParams",
		sizeof(FSBZCosmeticPanelDefaultParams),
		alignof(FSBZCosmeticPanelDefaultParams),
		Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCosmeticPanelDefaultParams"), sizeof(FSBZCosmeticPanelDefaultParams), Get_Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCosmeticPanelDefaultParams_Hash() { return 1895365478U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
