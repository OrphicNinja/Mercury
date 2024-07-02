// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDrillMatData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDrillMatData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDrillMatData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZDrillMatData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZDrillMatData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZDrillMatData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZDrillMatData"), sizeof(FSBZDrillMatData), Get_Z_Construct_UScriptStruct_FSBZDrillMatData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZDrillMatData>()
{
	return FSBZDrillMatData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZDrillMatData(FSBZDrillMatData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZDrillMatData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDrillMatData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDrillMatData()
	{
		UScriptStruct::DeferCppStructOps<FSBZDrillMatData>(FName(TEXT("SBZDrillMatData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZDrillMatData;
	struct Z_Construct_UScriptStruct_FSBZDrillMatData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressPerSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProgressPerSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatPerSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeatPerSec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDrillMatData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZDrillMatData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZDrillMatData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZDrillMatData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDrillMatData_Statics::NewProp_ProgressPerSec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillMatData" },
		{ "ModuleRelativePath", "Public/SBZDrillMatData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZDrillMatData_Statics::NewProp_ProgressPerSec = { "ProgressPerSec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDrillMatData, ProgressPerSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDrillMatData_Statics::NewProp_ProgressPerSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDrillMatData_Statics::NewProp_ProgressPerSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDrillMatData_Statics::NewProp_HeatPerSec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillMatData" },
		{ "ModuleRelativePath", "Public/SBZDrillMatData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZDrillMatData_Statics::NewProp_HeatPerSec = { "HeatPerSec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDrillMatData, HeatPerSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDrillMatData_Statics::NewProp_HeatPerSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDrillMatData_Statics::NewProp_HeatPerSec_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZDrillMatData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDrillMatData_Statics::NewProp_ProgressPerSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDrillMatData_Statics::NewProp_HeatPerSec,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZDrillMatData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZDrillMatData",
		sizeof(FSBZDrillMatData),
		alignof(FSBZDrillMatData),
		Z_Construct_UScriptStruct_FSBZDrillMatData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDrillMatData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDrillMatData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDrillMatData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZDrillMatData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZDrillMatData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZDrillMatData"), sizeof(FSBZDrillMatData), Get_Z_Construct_UScriptStruct_FSBZDrillMatData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZDrillMatData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZDrillMatData_Hash() { return 3805805272U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
