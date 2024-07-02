// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHurtReactionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHurtReactionData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHurtReactionData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDamageWeight();
// End Cross Module References
class UScriptStruct* FSBZHurtReactionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZHurtReactionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZHurtReactionData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZHurtReactionData"), sizeof(FSBZHurtReactionData), Get_Z_Construct_UScriptStruct_FSBZHurtReactionData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZHurtReactionData>()
{
	return FSBZHurtReactionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZHurtReactionData(FSBZHurtReactionData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZHurtReactionData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHurtReactionData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHurtReactionData()
	{
		UScriptStruct::DeferCppStructOps<FSBZHurtReactionData>(FName(TEXT("SBZHurtReactionData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZHurtReactionData;
	struct Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HurtReactionWeightCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HurtReactionWeightCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HurtReactionWeightModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HurtReactionWeightModifier;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DesiredHurtReactionWeight_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredHurtReactionWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DesiredHurtReactionWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HurtReactionWeightBuildupModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HurtReactionWeightBuildupModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CriticalHurtReactionWeightBuildupModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CriticalHurtReactionWeightBuildupModifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZHurtReactionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZHurtReactionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::NewProp_HurtReactionWeightCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHurtReactionData" },
		{ "ModuleRelativePath", "Public/SBZHurtReactionData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::NewProp_HurtReactionWeightCurve = { "HurtReactionWeightCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHurtReactionData, HurtReactionWeightCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::NewProp_HurtReactionWeightCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::NewProp_HurtReactionWeightCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::NewProp_HurtReactionWeightModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHurtReactionData" },
		{ "ModuleRelativePath", "Public/SBZHurtReactionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::NewProp_HurtReactionWeightModifier = { "HurtReactionWeightModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHurtReactionData, HurtReactionWeightModifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::NewProp_HurtReactionWeightModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::NewProp_HurtReactionWeightModifier_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::NewProp_DesiredHurtReactionWeight_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::NewProp_DesiredHurtReactionWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHurtReactionData" },
		{ "ModuleRelativePath", "Public/SBZHurtReactionData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::NewProp_DesiredHurtReactionWeight = { "DesiredHurtReactionWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHurtReactionData, DesiredHurtReactionWeight), Z_Construct_UEnum_Starbreeze_ESBZDamageWeight, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::NewProp_DesiredHurtReactionWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::NewProp_DesiredHurtReactionWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::NewProp_HurtReactionWeightBuildupModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHurtReactionData" },
		{ "ModuleRelativePath", "Public/SBZHurtReactionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::NewProp_HurtReactionWeightBuildupModifier = { "HurtReactionWeightBuildupModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHurtReactionData, HurtReactionWeightBuildupModifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::NewProp_HurtReactionWeightBuildupModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::NewProp_HurtReactionWeightBuildupModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::NewProp_CriticalHurtReactionWeightBuildupModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHurtReactionData" },
		{ "ModuleRelativePath", "Public/SBZHurtReactionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::NewProp_CriticalHurtReactionWeightBuildupModifier = { "CriticalHurtReactionWeightBuildupModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHurtReactionData, CriticalHurtReactionWeightBuildupModifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::NewProp_CriticalHurtReactionWeightBuildupModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::NewProp_CriticalHurtReactionWeightBuildupModifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::NewProp_HurtReactionWeightCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::NewProp_HurtReactionWeightModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::NewProp_DesiredHurtReactionWeight_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::NewProp_DesiredHurtReactionWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::NewProp_HurtReactionWeightBuildupModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::NewProp_CriticalHurtReactionWeightBuildupModifier,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZHurtReactionData",
		sizeof(FSBZHurtReactionData),
		alignof(FSBZHurtReactionData),
		Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZHurtReactionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZHurtReactionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZHurtReactionData"), sizeof(FSBZHurtReactionData), Get_Z_Construct_UScriptStruct_FSBZHurtReactionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZHurtReactionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZHurtReactionData_Hash() { return 2019809658U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
