// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSpeedWarpingData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSpeedWarpingData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSpeedWarpingData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZSpeedWarpingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSpeedWarpingData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSpeedWarpingData"), sizeof(FSBZSpeedWarpingData), Get_Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSpeedWarpingData>()
{
	return FSBZSpeedWarpingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSpeedWarpingData(FSBZSpeedWarpingData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSpeedWarpingData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpeedWarpingData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpeedWarpingData()
	{
		UScriptStruct::DeferCppStructOps<FSBZSpeedWarpingData>(FName(TEXT("SBZSpeedWarpingData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSpeedWarpingData;
	struct Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedScaling_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedScaling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PelvisZOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PelvisZOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LegsZOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LegsZOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSpeedWarpingData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSpeedWarpingData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics::NewProp_Alpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpeedWarpingData" },
		{ "ModuleRelativePath", "Public/SBZSpeedWarpingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpeedWarpingData, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics::NewProp_SpeedScaling_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpeedWarpingData" },
		{ "ModuleRelativePath", "Public/SBZSpeedWarpingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics::NewProp_SpeedScaling = { "SpeedScaling", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpeedWarpingData, SpeedScaling), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics::NewProp_SpeedScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics::NewProp_SpeedScaling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics::NewProp_PelvisZOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpeedWarpingData" },
		{ "ModuleRelativePath", "Public/SBZSpeedWarpingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics::NewProp_PelvisZOffset = { "PelvisZOffset", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpeedWarpingData, PelvisZOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics::NewProp_PelvisZOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics::NewProp_PelvisZOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics::NewProp_LegsZOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpeedWarpingData" },
		{ "ModuleRelativePath", "Public/SBZSpeedWarpingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics::NewProp_LegsZOffset = { "LegsZOffset", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpeedWarpingData, LegsZOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics::NewProp_LegsZOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics::NewProp_LegsZOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics::NewProp_PlayRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpeedWarpingData" },
		{ "ModuleRelativePath", "Public/SBZSpeedWarpingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSpeedWarpingData, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics::NewProp_PlayRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics::NewProp_SpeedScaling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics::NewProp_PelvisZOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics::NewProp_LegsZOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics::NewProp_PlayRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSpeedWarpingData",
		sizeof(FSBZSpeedWarpingData),
		alignof(FSBZSpeedWarpingData),
		Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSpeedWarpingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSpeedWarpingData"), sizeof(FSBZSpeedWarpingData), Get_Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSpeedWarpingData_Hash() { return 3953589368U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
