// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCutProgressData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCutProgressData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCutProgressData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZCutProgressData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCutProgressData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCutProgressData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCutProgressData"), sizeof(FSBZCutProgressData), Get_Z_Construct_UScriptStruct_FSBZCutProgressData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCutProgressData>()
{
	return FSBZCutProgressData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCutProgressData(FSBZCutProgressData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCutProgressData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCutProgressData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCutProgressData()
	{
		UScriptStruct::DeferCppStructOps<FSBZCutProgressData>(FName(TEXT("SBZCutProgressData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCutProgressData;
	struct Z_Construct_UScriptStruct_FSBZCutProgressData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccumulatedDeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AccumulatedDeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineCutLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineCutLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasInitialCut_MetaData[];
#endif
		static void NewProp_bHasInitialCut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasInitialCut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartCutTimeSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartCutTimeSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastUsedSkillSpeedModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastUsedSkillSpeedModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSplineTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentSplineTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCutProgressData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCutProgressData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::NewProp_AccumulatedDeltaTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCutProgressData" },
		{ "ModuleRelativePath", "Public/SBZCutProgressData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::NewProp_AccumulatedDeltaTime = { "AccumulatedDeltaTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCutProgressData, AccumulatedDeltaTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::NewProp_AccumulatedDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::NewProp_AccumulatedDeltaTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::NewProp_LineCutLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCutProgressData" },
		{ "ModuleRelativePath", "Public/SBZCutProgressData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::NewProp_LineCutLength = { "LineCutLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCutProgressData, LineCutLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::NewProp_LineCutLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::NewProp_LineCutLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::NewProp_bHasInitialCut_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCutProgressData" },
		{ "ModuleRelativePath", "Public/SBZCutProgressData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::NewProp_bHasInitialCut_SetBit(void* Obj)
	{
		((FSBZCutProgressData*)Obj)->bHasInitialCut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::NewProp_bHasInitialCut = { "bHasInitialCut", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZCutProgressData), &Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::NewProp_bHasInitialCut_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::NewProp_bHasInitialCut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::NewProp_bHasInitialCut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::NewProp_StartCutTimeSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCutProgressData" },
		{ "ModuleRelativePath", "Public/SBZCutProgressData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::NewProp_StartCutTimeSeconds = { "StartCutTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCutProgressData, StartCutTimeSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::NewProp_StartCutTimeSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::NewProp_StartCutTimeSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::NewProp_LastUsedSkillSpeedModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCutProgressData" },
		{ "ModuleRelativePath", "Public/SBZCutProgressData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::NewProp_LastUsedSkillSpeedModifier = { "LastUsedSkillSpeedModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCutProgressData, LastUsedSkillSpeedModifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::NewProp_LastUsedSkillSpeedModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::NewProp_LastUsedSkillSpeedModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::NewProp_CurrentSplineTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCutProgressData" },
		{ "ModuleRelativePath", "Public/SBZCutProgressData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::NewProp_CurrentSplineTime = { "CurrentSplineTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCutProgressData, CurrentSplineTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::NewProp_CurrentSplineTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::NewProp_CurrentSplineTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::NewProp_AccumulatedDeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::NewProp_LineCutLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::NewProp_bHasInitialCut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::NewProp_StartCutTimeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::NewProp_LastUsedSkillSpeedModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::NewProp_CurrentSplineTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCutProgressData",
		sizeof(FSBZCutProgressData),
		alignof(FSBZCutProgressData),
		Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCutProgressData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCutProgressData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCutProgressData"), sizeof(FSBZCutProgressData), Get_Z_Construct_UScriptStruct_FSBZCutProgressData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCutProgressData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCutProgressData_Hash() { return 2287475748U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
