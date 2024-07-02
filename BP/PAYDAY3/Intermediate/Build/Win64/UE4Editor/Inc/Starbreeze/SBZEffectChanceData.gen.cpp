// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEffectChanceData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEffectChanceData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEffectChanceData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSeasonalEventEffectType();
// End Cross Module References
class UScriptStruct* FSBZEffectChanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZEffectChanceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZEffectChanceData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZEffectChanceData"), sizeof(FSBZEffectChanceData), Get_Z_Construct_UScriptStruct_FSBZEffectChanceData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZEffectChanceData>()
{
	return FSBZEffectChanceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZEffectChanceData(FSBZEffectChanceData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZEffectChanceData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZEffectChanceData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZEffectChanceData()
	{
		UScriptStruct::DeferCppStructOps<FSBZEffectChanceData>(FName(TEXT("SBZEffectChanceData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZEffectChanceData;
	struct Z_Construct_UScriptStruct_FSBZEffectChanceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EffectTypeArray_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EffectTypeArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectTypeArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EffectTypeArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Chance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEffectChanceData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZEffectChanceData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZEffectChanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZEffectChanceData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZEffectChanceData_Statics::NewProp_EffectTypeArray_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZEffectChanceData_Statics::NewProp_EffectTypeArray_Inner = { "EffectTypeArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZSeasonalEventEffectType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEffectChanceData_Statics::NewProp_EffectTypeArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEffectChanceData" },
		{ "ModuleRelativePath", "Public/SBZEffectChanceData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZEffectChanceData_Statics::NewProp_EffectTypeArray = { "EffectTypeArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEffectChanceData, EffectTypeArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEffectChanceData_Statics::NewProp_EffectTypeArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEffectChanceData_Statics::NewProp_EffectTypeArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEffectChanceData_Statics::NewProp_Chance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEffectChanceData" },
		{ "ModuleRelativePath", "Public/SBZEffectChanceData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZEffectChanceData_Statics::NewProp_Chance = { "Chance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEffectChanceData, Chance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEffectChanceData_Statics::NewProp_Chance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEffectChanceData_Statics::NewProp_Chance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZEffectChanceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEffectChanceData_Statics::NewProp_EffectTypeArray_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEffectChanceData_Statics::NewProp_EffectTypeArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEffectChanceData_Statics::NewProp_EffectTypeArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEffectChanceData_Statics::NewProp_Chance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZEffectChanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZEffectChanceData",
		sizeof(FSBZEffectChanceData),
		alignof(FSBZEffectChanceData),
		Z_Construct_UScriptStruct_FSBZEffectChanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEffectChanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEffectChanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEffectChanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZEffectChanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZEffectChanceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZEffectChanceData"), sizeof(FSBZEffectChanceData), Get_Z_Construct_UScriptStruct_FSBZEffectChanceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZEffectChanceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZEffectChanceData_Hash() { return 1931201257U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
