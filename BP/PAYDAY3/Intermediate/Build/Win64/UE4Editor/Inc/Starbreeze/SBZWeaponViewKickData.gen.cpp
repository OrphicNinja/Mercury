// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponViewKickData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponViewKickData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponViewKickData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSequentialScatterPlot();
// End Cross Module References
class UScriptStruct* FSBZWeaponViewKickData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWeaponViewKickData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWeaponViewKickData"), sizeof(FSBZWeaponViewKickData), Get_Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWeaponViewKickData>()
{
	return FSBZWeaponViewKickData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWeaponViewKickData(FSBZWeaponViewKickData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWeaponViewKickData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponViewKickData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponViewKickData()
	{
		UScriptStruct::DeferCppStructOps<FSBZWeaponViewKickData>(FName(TEXT("SBZWeaponViewKickData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponViewKickData;
	struct Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedDeflect_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedDeflect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedRecover_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedRecover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoverWaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RecoverWaitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeflectCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeflectCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoverCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RecoverCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphDisplacementList_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GraphDisplacementList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplacementResetTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DisplacementResetTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplacementGraphLoopStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DisplacementGraphLoopStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplacementGraphInitialNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DisplacementGraphInitialNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplacementHipFireMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DisplacementHipFireMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponViewKickData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWeaponViewKickData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_SpeedDeflect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponViewKickData" },
		{ "ModuleRelativePath", "Public/SBZWeaponViewKickData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_SpeedDeflect = { "SpeedDeflect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponViewKickData, SpeedDeflect), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_SpeedDeflect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_SpeedDeflect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_SpeedRecover_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponViewKickData" },
		{ "ModuleRelativePath", "Public/SBZWeaponViewKickData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_SpeedRecover = { "SpeedRecover", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponViewKickData, SpeedRecover), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_SpeedRecover_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_SpeedRecover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_RecoverWaitTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponViewKickData" },
		{ "ModuleRelativePath", "Public/SBZWeaponViewKickData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_RecoverWaitTime = { "RecoverWaitTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponViewKickData, RecoverWaitTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_RecoverWaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_RecoverWaitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_DeflectCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponViewKickData" },
		{ "ModuleRelativePath", "Public/SBZWeaponViewKickData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_DeflectCurve = { "DeflectCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponViewKickData, DeflectCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_DeflectCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_DeflectCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_RecoverCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponViewKickData" },
		{ "ModuleRelativePath", "Public/SBZWeaponViewKickData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_RecoverCurve = { "RecoverCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponViewKickData, RecoverCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_RecoverCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_RecoverCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_GraphDisplacementList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponViewKickData" },
		{ "ModuleRelativePath", "Public/SBZWeaponViewKickData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_GraphDisplacementList = { "GraphDisplacementList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponViewKickData, GraphDisplacementList), Z_Construct_UScriptStruct_FSBZSequentialScatterPlot, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_GraphDisplacementList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_GraphDisplacementList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_DisplacementResetTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponViewKickData" },
		{ "ModuleRelativePath", "Public/SBZWeaponViewKickData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_DisplacementResetTime = { "DisplacementResetTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponViewKickData, DisplacementResetTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_DisplacementResetTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_DisplacementResetTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_DisplacementGraphLoopStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponViewKickData" },
		{ "ModuleRelativePath", "Public/SBZWeaponViewKickData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_DisplacementGraphLoopStart = { "DisplacementGraphLoopStart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponViewKickData, DisplacementGraphLoopStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_DisplacementGraphLoopStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_DisplacementGraphLoopStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_DisplacementGraphInitialNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponViewKickData" },
		{ "ModuleRelativePath", "Public/SBZWeaponViewKickData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_DisplacementGraphInitialNum = { "DisplacementGraphInitialNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponViewKickData, DisplacementGraphInitialNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_DisplacementGraphInitialNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_DisplacementGraphInitialNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_DisplacementHipFireMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponViewKickData" },
		{ "ModuleRelativePath", "Public/SBZWeaponViewKickData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_DisplacementHipFireMultiplier = { "DisplacementHipFireMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponViewKickData, DisplacementHipFireMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_DisplacementHipFireMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_DisplacementHipFireMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_SpeedDeflect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_SpeedRecover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_RecoverWaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_DeflectCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_RecoverCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_GraphDisplacementList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_DisplacementResetTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_DisplacementGraphLoopStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_DisplacementGraphInitialNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::NewProp_DisplacementHipFireMultiplier,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZWeaponViewKickData",
		sizeof(FSBZWeaponViewKickData),
		alignof(FSBZWeaponViewKickData),
		Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponViewKickData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWeaponViewKickData"), sizeof(FSBZWeaponViewKickData), Get_Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponViewKickData_Hash() { return 3033461992U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
