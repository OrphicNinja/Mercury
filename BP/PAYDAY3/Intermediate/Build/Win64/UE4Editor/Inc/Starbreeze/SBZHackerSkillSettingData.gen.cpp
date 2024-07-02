// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHackerSkillSettingData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHackerSkillSettingData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHackerSkillSettingData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZHackerSkillSettingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZHackerSkillSettingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZHackerSkillSettingData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZHackerSkillSettingData"), sizeof(FSBZHackerSkillSettingData), Get_Z_Construct_UScriptStruct_FSBZHackerSkillSettingData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZHackerSkillSettingData>()
{
	return FSBZHackerSkillSettingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZHackerSkillSettingData(FSBZHackerSkillSettingData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZHackerSkillSettingData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHackerSkillSettingData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHackerSkillSettingData()
	{
		UScriptStruct::DeferCppStructOps<FSBZHackerSkillSettingData>(FName(TEXT("SBZHackerSkillSettingData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZHackerSkillSettingData;
	struct Z_Construct_UScriptStruct_FSBZHackerSkillSettingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceModifierBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceModifierBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalBatteriesAcedBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AdditionalBatteriesAcedBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackableDurationDecreaseMastery_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HackableDurationDecreaseMastery;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHackerSkillSettingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZHackerSkillSettingData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZHackerSkillSettingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZHackerSkillSettingData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHackerSkillSettingData_Statics::NewProp_MaxDistanceModifierBase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackerSkillSettingData" },
		{ "ModuleRelativePath", "Public/SBZHackerSkillSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZHackerSkillSettingData_Statics::NewProp_MaxDistanceModifierBase = { "MaxDistanceModifierBase", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHackerSkillSettingData, MaxDistanceModifierBase), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHackerSkillSettingData_Statics::NewProp_MaxDistanceModifierBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHackerSkillSettingData_Statics::NewProp_MaxDistanceModifierBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHackerSkillSettingData_Statics::NewProp_AdditionalBatteriesAcedBase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackerSkillSettingData" },
		{ "ModuleRelativePath", "Public/SBZHackerSkillSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZHackerSkillSettingData_Statics::NewProp_AdditionalBatteriesAcedBase = { "AdditionalBatteriesAcedBase", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHackerSkillSettingData, AdditionalBatteriesAcedBase), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHackerSkillSettingData_Statics::NewProp_AdditionalBatteriesAcedBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHackerSkillSettingData_Statics::NewProp_AdditionalBatteriesAcedBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHackerSkillSettingData_Statics::NewProp_HackableDurationDecreaseMastery_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackerSkillSettingData" },
		{ "ModuleRelativePath", "Public/SBZHackerSkillSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZHackerSkillSettingData_Statics::NewProp_HackableDurationDecreaseMastery = { "HackableDurationDecreaseMastery", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHackerSkillSettingData, HackableDurationDecreaseMastery), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHackerSkillSettingData_Statics::NewProp_HackableDurationDecreaseMastery_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHackerSkillSettingData_Statics::NewProp_HackableDurationDecreaseMastery_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZHackerSkillSettingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHackerSkillSettingData_Statics::NewProp_MaxDistanceModifierBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHackerSkillSettingData_Statics::NewProp_AdditionalBatteriesAcedBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHackerSkillSettingData_Statics::NewProp_HackableDurationDecreaseMastery,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZHackerSkillSettingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZHackerSkillSettingData",
		sizeof(FSBZHackerSkillSettingData),
		alignof(FSBZHackerSkillSettingData),
		Z_Construct_UScriptStruct_FSBZHackerSkillSettingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHackerSkillSettingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHackerSkillSettingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHackerSkillSettingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZHackerSkillSettingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZHackerSkillSettingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZHackerSkillSettingData"), sizeof(FSBZHackerSkillSettingData), Get_Z_Construct_UScriptStruct_FSBZHackerSkillSettingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZHackerSkillSettingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZHackerSkillSettingData_Hash() { return 2498128384U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
