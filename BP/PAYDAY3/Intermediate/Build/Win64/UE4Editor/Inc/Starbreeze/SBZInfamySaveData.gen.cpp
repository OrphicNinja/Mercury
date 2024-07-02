// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInfamySaveData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInfamySaveData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInfamySaveData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZInfamySaveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZInfamySaveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZInfamySaveData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZInfamySaveData"), sizeof(FSBZInfamySaveData), Get_Z_Construct_UScriptStruct_FSBZInfamySaveData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZInfamySaveData>()
{
	return FSBZInfamySaveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZInfamySaveData(FSBZInfamySaveData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZInfamySaveData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInfamySaveData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInfamySaveData()
	{
		UScriptStruct::DeferCppStructOps<FSBZInfamySaveData>(FName(TEXT("SBZInfamySaveData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZInfamySaveData;
	struct Z_Construct_UScriptStruct_FSBZInfamySaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfamyExperience_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InfamyExperience;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfamyLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InfamyLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInfamySaveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZInfamySaveData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZInfamySaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZInfamySaveData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInfamySaveData_Statics::NewProp_InfamyExperience_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInfamySaveData" },
		{ "ModuleRelativePath", "Public/SBZInfamySaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZInfamySaveData_Statics::NewProp_InfamyExperience = { "InfamyExperience", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInfamySaveData, InfamyExperience), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInfamySaveData_Statics::NewProp_InfamyExperience_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfamySaveData_Statics::NewProp_InfamyExperience_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInfamySaveData_Statics::NewProp_InfamyLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInfamySaveData" },
		{ "ModuleRelativePath", "Public/SBZInfamySaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZInfamySaveData_Statics::NewProp_InfamyLevel = { "InfamyLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInfamySaveData, InfamyLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInfamySaveData_Statics::NewProp_InfamyLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfamySaveData_Statics::NewProp_InfamyLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZInfamySaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInfamySaveData_Statics::NewProp_InfamyExperience,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInfamySaveData_Statics::NewProp_InfamyLevel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZInfamySaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZInfamySaveData",
		sizeof(FSBZInfamySaveData),
		alignof(FSBZInfamySaveData),
		Z_Construct_UScriptStruct_FSBZInfamySaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfamySaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInfamySaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfamySaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZInfamySaveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZInfamySaveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZInfamySaveData"), sizeof(FSBZInfamySaveData), Get_Z_Construct_UScriptStruct_FSBZInfamySaveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZInfamySaveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZInfamySaveData_Hash() { return 43796232U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
