// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCutterSkillSettingData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCutterSkillSettingData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCutterSkillSettingData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCuttingMaterialTier();
// End Cross Module References
class UScriptStruct* FSBZCutterSkillSettingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCutterSkillSettingData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCutterSkillSettingData"), sizeof(FSBZCutterSkillSettingData), Get_Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCutterSkillSettingData>()
{
	return FSBZCutterSkillSettingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCutterSkillSettingData(FSBZCutterSkillSettingData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCutterSkillSettingData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCutterSkillSettingData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCutterSkillSettingData()
	{
		UScriptStruct::DeferCppStructOps<FSBZCutterSkillSettingData>(FName(TEXT("SBZCutterSkillSettingData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCutterSkillSettingData;
	struct Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CuttingDurationDecreaseBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CuttingDurationDecreaseBase;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MinCuttingMaterialTierBase_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinCuttingMaterialTierBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MinCuttingMaterialTierBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoIncreaseAcedBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoIncreaseAcedBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CuttingDurationDecreaseMastery_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CuttingDurationDecreaseMastery;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MinCuttingMaterialTierUpgrade01_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinCuttingMaterialTierUpgrade01_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MinCuttingMaterialTierUpgrade01;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoIncreaseUpgrade03_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoIncreaseUpgrade03;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCutterSkillSettingData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCutterSkillSettingData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewProp_CuttingDurationDecreaseBase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCutterSkillSettingData" },
		{ "ModuleRelativePath", "Public/SBZCutterSkillSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewProp_CuttingDurationDecreaseBase = { "CuttingDurationDecreaseBase", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCutterSkillSettingData, CuttingDurationDecreaseBase), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewProp_CuttingDurationDecreaseBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewProp_CuttingDurationDecreaseBase_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewProp_MinCuttingMaterialTierBase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewProp_MinCuttingMaterialTierBase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCutterSkillSettingData" },
		{ "ModuleRelativePath", "Public/SBZCutterSkillSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewProp_MinCuttingMaterialTierBase = { "MinCuttingMaterialTierBase", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCutterSkillSettingData, MinCuttingMaterialTierBase), Z_Construct_UEnum_Starbreeze_ESBZCuttingMaterialTier, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewProp_MinCuttingMaterialTierBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewProp_MinCuttingMaterialTierBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewProp_AmmoIncreaseAcedBase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCutterSkillSettingData" },
		{ "ModuleRelativePath", "Public/SBZCutterSkillSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewProp_AmmoIncreaseAcedBase = { "AmmoIncreaseAcedBase", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCutterSkillSettingData, AmmoIncreaseAcedBase), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewProp_AmmoIncreaseAcedBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewProp_AmmoIncreaseAcedBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewProp_CuttingDurationDecreaseMastery_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCutterSkillSettingData" },
		{ "ModuleRelativePath", "Public/SBZCutterSkillSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewProp_CuttingDurationDecreaseMastery = { "CuttingDurationDecreaseMastery", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCutterSkillSettingData, CuttingDurationDecreaseMastery), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewProp_CuttingDurationDecreaseMastery_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewProp_CuttingDurationDecreaseMastery_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewProp_MinCuttingMaterialTierUpgrade01_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewProp_MinCuttingMaterialTierUpgrade01_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCutterSkillSettingData" },
		{ "ModuleRelativePath", "Public/SBZCutterSkillSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewProp_MinCuttingMaterialTierUpgrade01 = { "MinCuttingMaterialTierUpgrade01", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCutterSkillSettingData, MinCuttingMaterialTierUpgrade01), Z_Construct_UEnum_Starbreeze_ESBZCuttingMaterialTier, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewProp_MinCuttingMaterialTierUpgrade01_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewProp_MinCuttingMaterialTierUpgrade01_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewProp_AmmoIncreaseUpgrade03_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCutterSkillSettingData" },
		{ "ModuleRelativePath", "Public/SBZCutterSkillSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewProp_AmmoIncreaseUpgrade03 = { "AmmoIncreaseUpgrade03", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCutterSkillSettingData, AmmoIncreaseUpgrade03), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewProp_AmmoIncreaseUpgrade03_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewProp_AmmoIncreaseUpgrade03_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewProp_CuttingDurationDecreaseBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewProp_MinCuttingMaterialTierBase_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewProp_MinCuttingMaterialTierBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewProp_AmmoIncreaseAcedBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewProp_CuttingDurationDecreaseMastery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewProp_MinCuttingMaterialTierUpgrade01_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewProp_MinCuttingMaterialTierUpgrade01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::NewProp_AmmoIncreaseUpgrade03,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCutterSkillSettingData",
		sizeof(FSBZCutterSkillSettingData),
		alignof(FSBZCutterSkillSettingData),
		Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCutterSkillSettingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCutterSkillSettingData"), sizeof(FSBZCutterSkillSettingData), Get_Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCutterSkillSettingData_Hash() { return 3602475403U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
