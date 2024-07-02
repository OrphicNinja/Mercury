// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerStatisticsValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerStatisticsValue() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerStatisticsValue();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZPlayerStatisticsValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerStatisticsValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPlayerStatisticsValue, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPlayerStatisticsValue"), sizeof(FSBZPlayerStatisticsValue), Get_Z_Construct_UScriptStruct_FSBZPlayerStatisticsValue_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPlayerStatisticsValue>()
{
	return FSBZPlayerStatisticsValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPlayerStatisticsValue(FSBZPlayerStatisticsValue::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPlayerStatisticsValue"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerStatisticsValue
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerStatisticsValue()
	{
		UScriptStruct::DeferCppStructOps<FSBZPlayerStatisticsValue>(FName(TEXT("SBZPlayerStatisticsValue")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPlayerStatisticsValue;
	struct Z_Construct_UScriptStruct_FSBZPlayerStatisticsValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreviousValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStatisticsValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerStatisticsValue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPlayerStatisticsValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPlayerStatisticsValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStatisticsValue_Statics::NewProp_CurrentValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStatisticsValue" },
		{ "ModuleRelativePath", "Public/SBZPlayerStatisticsValue.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStatisticsValue_Statics::NewProp_CurrentValue = { "CurrentValue", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerStatisticsValue, CurrentValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStatisticsValue_Statics::NewProp_CurrentValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStatisticsValue_Statics::NewProp_CurrentValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPlayerStatisticsValue_Statics::NewProp_PreviousValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStatisticsValue" },
		{ "ModuleRelativePath", "Public/SBZPlayerStatisticsValue.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZPlayerStatisticsValue_Statics::NewProp_PreviousValue = { "PreviousValue", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPlayerStatisticsValue, PreviousValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStatisticsValue_Statics::NewProp_PreviousValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStatisticsValue_Statics::NewProp_PreviousValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPlayerStatisticsValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStatisticsValue_Statics::NewProp_CurrentValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPlayerStatisticsValue_Statics::NewProp_PreviousValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPlayerStatisticsValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZPlayerStatisticsValue",
		sizeof(FSBZPlayerStatisticsValue),
		alignof(FSBZPlayerStatisticsValue),
		Z_Construct_UScriptStruct_FSBZPlayerStatisticsValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStatisticsValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPlayerStatisticsValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPlayerStatisticsValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerStatisticsValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerStatisticsValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPlayerStatisticsValue"), sizeof(FSBZPlayerStatisticsValue), Get_Z_Construct_UScriptStruct_FSBZPlayerStatisticsValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPlayerStatisticsValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPlayerStatisticsValue_Hash() { return 2230731463U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
