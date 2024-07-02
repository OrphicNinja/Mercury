// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEquippableEndMissionResultData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEquippableEndMissionResultData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippableEndMissionResultData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZEquippableEndMissionResultData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZEquippableEndMissionResultData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZEquippableEndMissionResultData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZEquippableEndMissionResultData"), sizeof(FSBZEquippableEndMissionResultData), Get_Z_Construct_UScriptStruct_FSBZEquippableEndMissionResultData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZEquippableEndMissionResultData>()
{
	return FSBZEquippableEndMissionResultData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZEquippableEndMissionResultData(FSBZEquippableEndMissionResultData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZEquippableEndMissionResultData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZEquippableEndMissionResultData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZEquippableEndMissionResultData()
	{
		UScriptStruct::DeferCppStructOps<FSBZEquippableEndMissionResultData>(FName(TEXT("SBZEquippableEndMissionResultData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZEquippableEndMissionResultData;
	struct Z_Construct_UScriptStruct_FSBZEquippableEndMissionResultData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UseCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseSuccessCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UseSuccessCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEquippableEndMissionResultData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZEquippableEndMissionResultData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZEquippableEndMissionResultData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZEquippableEndMissionResultData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEquippableEndMissionResultData_Statics::NewProp_UseCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZEquippableEndMissionResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZEquippableEndMissionResultData_Statics::NewProp_UseCount = { "UseCount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEquippableEndMissionResultData, UseCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEquippableEndMissionResultData_Statics::NewProp_UseCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEquippableEndMissionResultData_Statics::NewProp_UseCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEquippableEndMissionResultData_Statics::NewProp_UseSuccessCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZEquippableEndMissionResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZEquippableEndMissionResultData_Statics::NewProp_UseSuccessCount = { "UseSuccessCount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEquippableEndMissionResultData, UseSuccessCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEquippableEndMissionResultData_Statics::NewProp_UseSuccessCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEquippableEndMissionResultData_Statics::NewProp_UseSuccessCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZEquippableEndMissionResultData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEquippableEndMissionResultData_Statics::NewProp_UseCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEquippableEndMissionResultData_Statics::NewProp_UseSuccessCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZEquippableEndMissionResultData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZEquippableEndMissionResultData",
		sizeof(FSBZEquippableEndMissionResultData),
		alignof(FSBZEquippableEndMissionResultData),
		Z_Construct_UScriptStruct_FSBZEquippableEndMissionResultData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEquippableEndMissionResultData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEquippableEndMissionResultData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEquippableEndMissionResultData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippableEndMissionResultData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZEquippableEndMissionResultData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZEquippableEndMissionResultData"), sizeof(FSBZEquippableEndMissionResultData), Get_Z_Construct_UScriptStruct_FSBZEquippableEndMissionResultData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZEquippableEndMissionResultData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZEquippableEndMissionResultData_Hash() { return 3443868786U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
