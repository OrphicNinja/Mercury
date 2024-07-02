// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEndMissionRequestData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEndMissionRequestData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEndMissionRequestData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZEndMissionResult();
// End Cross Module References
class UScriptStruct* FSBZEndMissionRequestData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZEndMissionRequestData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZEndMissionRequestData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZEndMissionRequestData"), sizeof(FSBZEndMissionRequestData), Get_Z_Construct_UScriptStruct_FSBZEndMissionRequestData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZEndMissionRequestData>()
{
	return FSBZEndMissionRequestData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZEndMissionRequestData(FSBZEndMissionRequestData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZEndMissionRequestData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZEndMissionRequestData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZEndMissionRequestData()
	{
		UScriptStruct::DeferCppStructOps<FSBZEndMissionRequestData>(FName(TEXT("SBZEndMissionRequestData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZEndMissionRequestData;
	struct Z_Construct_UScriptStruct_FSBZEndMissionRequestData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MissionResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissionResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MissionResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutroVariation_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutroVariation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEndMissionRequestData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZEndMissionRequestData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZEndMissionRequestData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZEndMissionRequestData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZEndMissionRequestData_Statics::NewProp_MissionResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEndMissionRequestData_Statics::NewProp_MissionResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEndMissionRequestData" },
		{ "ModuleRelativePath", "Public/SBZEndMissionRequestData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZEndMissionRequestData_Statics::NewProp_MissionResult = { "MissionResult", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEndMissionRequestData, MissionResult), Z_Construct_UEnum_Starbreeze_ESBZEndMissionResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEndMissionRequestData_Statics::NewProp_MissionResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEndMissionRequestData_Statics::NewProp_MissionResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEndMissionRequestData_Statics::NewProp_OutroVariation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEndMissionRequestData" },
		{ "ModuleRelativePath", "Public/SBZEndMissionRequestData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZEndMissionRequestData_Statics::NewProp_OutroVariation = { "OutroVariation", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEndMissionRequestData, OutroVariation), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEndMissionRequestData_Statics::NewProp_OutroVariation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEndMissionRequestData_Statics::NewProp_OutroVariation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZEndMissionRequestData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEndMissionRequestData_Statics::NewProp_MissionResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEndMissionRequestData_Statics::NewProp_MissionResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEndMissionRequestData_Statics::NewProp_OutroVariation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZEndMissionRequestData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZEndMissionRequestData",
		sizeof(FSBZEndMissionRequestData),
		alignof(FSBZEndMissionRequestData),
		Z_Construct_UScriptStruct_FSBZEndMissionRequestData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEndMissionRequestData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEndMissionRequestData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEndMissionRequestData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZEndMissionRequestData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZEndMissionRequestData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZEndMissionRequestData"), sizeof(FSBZEndMissionRequestData), Get_Z_Construct_UScriptStruct_FSBZEndMissionRequestData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZEndMissionRequestData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZEndMissionRequestData_Hash() { return 2107117642U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
