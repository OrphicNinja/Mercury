// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStageDebugData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStageDebugData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStageDebugData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStageMiscDebugData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVariableValue();
// End Cross Module References
class UScriptStruct* FSBZStageDebugData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZStageDebugData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZStageDebugData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZStageDebugData"), sizeof(FSBZStageDebugData), Get_Z_Construct_UScriptStruct_FSBZStageDebugData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZStageDebugData>()
{
	return FSBZStageDebugData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZStageDebugData(FSBZStageDebugData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZStageDebugData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZStageDebugData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZStageDebugData()
	{
		UScriptStruct::DeferCppStructOps<FSBZStageDebugData>(FName(TEXT("SBZStageDebugData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZStageDebugData;
	struct Z_Construct_UScriptStruct_FSBZStageDebugData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StageName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MiscDebugData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiscDebugData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MiscDebugData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputVariableValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputVariableValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputVariableValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutputVariableValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputVariableValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutputVariableValues;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZStageDebugData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZStageDebugData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::NewProp_StageName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStageDebugData" },
		{ "ModuleRelativePath", "Public/SBZStageDebugData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::NewProp_StageName = { "StageName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStageDebugData, StageName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::NewProp_StageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::NewProp_StageName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::NewProp_MiscDebugData_Inner = { "MiscDebugData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZStageMiscDebugData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::NewProp_MiscDebugData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStageDebugData" },
		{ "ModuleRelativePath", "Public/SBZStageDebugData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::NewProp_MiscDebugData = { "MiscDebugData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStageDebugData, MiscDebugData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::NewProp_MiscDebugData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::NewProp_MiscDebugData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::NewProp_InputVariableValues_Inner = { "InputVariableValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZVariableValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::NewProp_InputVariableValues_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStageDebugData" },
		{ "ModuleRelativePath", "Public/SBZStageDebugData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::NewProp_InputVariableValues = { "InputVariableValues", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStageDebugData, InputVariableValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::NewProp_InputVariableValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::NewProp_InputVariableValues_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::NewProp_OutputVariableValues_Inner = { "OutputVariableValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZVariableValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::NewProp_OutputVariableValues_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStageDebugData" },
		{ "ModuleRelativePath", "Public/SBZStageDebugData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::NewProp_OutputVariableValues = { "OutputVariableValues", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStageDebugData, OutputVariableValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::NewProp_OutputVariableValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::NewProp_OutputVariableValues_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::NewProp_StageName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::NewProp_MiscDebugData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::NewProp_MiscDebugData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::NewProp_InputVariableValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::NewProp_InputVariableValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::NewProp_OutputVariableValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::NewProp_OutputVariableValues,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZStageDebugData",
		sizeof(FSBZStageDebugData),
		alignof(FSBZStageDebugData),
		Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZStageDebugData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZStageDebugData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZStageDebugData"), sizeof(FSBZStageDebugData), Get_Z_Construct_UScriptStruct_FSBZStageDebugData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZStageDebugData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZStageDebugData_Hash() { return 1949008153U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
