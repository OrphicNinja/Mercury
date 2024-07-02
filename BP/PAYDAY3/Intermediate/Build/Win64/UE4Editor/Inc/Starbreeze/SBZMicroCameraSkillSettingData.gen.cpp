// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMicroCameraSkillSettingData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMicroCameraSkillSettingData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMicroCameraSkillSettingData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZMicroCameraSkillSettingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZMicroCameraSkillSettingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZMicroCameraSkillSettingData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZMicroCameraSkillSettingData"), sizeof(FSBZMicroCameraSkillSettingData), Get_Z_Construct_UScriptStruct_FSBZMicroCameraSkillSettingData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZMicroCameraSkillSettingData>()
{
	return FSBZMicroCameraSkillSettingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZMicroCameraSkillSettingData(FSBZMicroCameraSkillSettingData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZMicroCameraSkillSettingData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMicroCameraSkillSettingData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMicroCameraSkillSettingData()
	{
		UScriptStruct::DeferCppStructOps<FSBZMicroCameraSkillSettingData>(FName(TEXT("SBZMicroCameraSkillSettingData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZMicroCameraSkillSettingData;
	struct Z_Construct_UScriptStruct_FSBZMicroCameraSkillSettingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmountUpgradeBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmountUpgradeBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationMastery01_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationMastery01;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMicroCameraSkillSettingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZMicroCameraSkillSettingData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZMicroCameraSkillSettingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZMicroCameraSkillSettingData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMicroCameraSkillSettingData_Statics::NewProp_AmountUpgradeBase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMicroCameraSkillSettingData" },
		{ "ModuleRelativePath", "Public/SBZMicroCameraSkillSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZMicroCameraSkillSettingData_Statics::NewProp_AmountUpgradeBase = { "AmountUpgradeBase", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMicroCameraSkillSettingData, AmountUpgradeBase), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMicroCameraSkillSettingData_Statics::NewProp_AmountUpgradeBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMicroCameraSkillSettingData_Statics::NewProp_AmountUpgradeBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMicroCameraSkillSettingData_Statics::NewProp_DurationMastery01_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMicroCameraSkillSettingData" },
		{ "ModuleRelativePath", "Public/SBZMicroCameraSkillSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZMicroCameraSkillSettingData_Statics::NewProp_DurationMastery01 = { "DurationMastery01", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMicroCameraSkillSettingData, DurationMastery01), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMicroCameraSkillSettingData_Statics::NewProp_DurationMastery01_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMicroCameraSkillSettingData_Statics::NewProp_DurationMastery01_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZMicroCameraSkillSettingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMicroCameraSkillSettingData_Statics::NewProp_AmountUpgradeBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMicroCameraSkillSettingData_Statics::NewProp_DurationMastery01,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZMicroCameraSkillSettingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZMicroCameraSkillSettingData",
		sizeof(FSBZMicroCameraSkillSettingData),
		alignof(FSBZMicroCameraSkillSettingData),
		Z_Construct_UScriptStruct_FSBZMicroCameraSkillSettingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMicroCameraSkillSettingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMicroCameraSkillSettingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMicroCameraSkillSettingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZMicroCameraSkillSettingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZMicroCameraSkillSettingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZMicroCameraSkillSettingData"), sizeof(FSBZMicroCameraSkillSettingData), Get_Z_Construct_UScriptStruct_FSBZMicroCameraSkillSettingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZMicroCameraSkillSettingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZMicroCameraSkillSettingData_Hash() { return 4038182288U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
