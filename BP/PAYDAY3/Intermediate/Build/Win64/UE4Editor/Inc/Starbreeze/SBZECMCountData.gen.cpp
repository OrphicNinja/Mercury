// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZECMCountData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZECMCountData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZECMCountData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZECMCountData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZECMCountData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZECMCountData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZECMCountData"), sizeof(FSBZECMCountData), Get_Z_Construct_UScriptStruct_FSBZECMCountData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZECMCountData>()
{
	return FSBZECMCountData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZECMCountData(FSBZECMCountData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZECMCountData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZECMCountData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZECMCountData()
	{
		UScriptStruct::DeferCppStructOps<FSBZECMCountData>(FName(TEXT("SBZECMCountData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZECMCountData;
	struct Z_Construct_UScriptStruct_FSBZECMCountData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentECMJammerCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentECMJammerCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastAddedECMTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastAddedECMTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZECMCountData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZECMCountData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZECMCountData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZECMCountData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZECMCountData_Statics::NewProp_CurrentECMJammerCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZECMCountData" },
		{ "ModuleRelativePath", "Public/SBZECMCountData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZECMCountData_Statics::NewProp_CurrentECMJammerCount = { "CurrentECMJammerCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZECMCountData, CurrentECMJammerCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZECMCountData_Statics::NewProp_CurrentECMJammerCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZECMCountData_Statics::NewProp_CurrentECMJammerCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZECMCountData_Statics::NewProp_LastAddedECMTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZECMCountData" },
		{ "ModuleRelativePath", "Public/SBZECMCountData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZECMCountData_Statics::NewProp_LastAddedECMTime = { "LastAddedECMTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZECMCountData, LastAddedECMTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZECMCountData_Statics::NewProp_LastAddedECMTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZECMCountData_Statics::NewProp_LastAddedECMTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZECMCountData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZECMCountData_Statics::NewProp_CurrentECMJammerCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZECMCountData_Statics::NewProp_LastAddedECMTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZECMCountData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZECMCountData",
		sizeof(FSBZECMCountData),
		alignof(FSBZECMCountData),
		Z_Construct_UScriptStruct_FSBZECMCountData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZECMCountData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZECMCountData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZECMCountData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZECMCountData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZECMCountData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZECMCountData"), sizeof(FSBZECMCountData), Get_Z_Construct_UScriptStruct_FSBZECMCountData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZECMCountData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZECMCountData_Hash() { return 4281504994U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
