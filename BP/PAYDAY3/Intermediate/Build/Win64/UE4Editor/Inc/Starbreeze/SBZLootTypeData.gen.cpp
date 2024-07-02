// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLootTypeData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLootTypeData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLootTypeData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZLootTypeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZLootTypeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZLootTypeData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZLootTypeData"), sizeof(FSBZLootTypeData), Get_Z_Construct_UScriptStruct_FSBZLootTypeData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZLootTypeData>()
{
	return FSBZLootTypeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZLootTypeData(FSBZLootTypeData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZLootTypeData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLootTypeData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLootTypeData()
	{
		UScriptStruct::DeferCppStructOps<FSBZLootTypeData>(FName(TEXT("SBZLootTypeData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZLootTypeData;
	struct Z_Construct_UScriptStruct_FSBZLootTypeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LootValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LootValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxValueForLootType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxValueForLootType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfamyPointValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InfamyPointValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxInfamyPointsForLootType_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxInfamyPointsForLootType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLootTypeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZLootTypeData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZLootTypeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZLootTypeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLootTypeData_Statics::NewProp_LootValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLootTypeData" },
		{ "ModuleRelativePath", "Public/SBZLootTypeData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZLootTypeData_Statics::NewProp_LootValue = { "LootValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLootTypeData, LootValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLootTypeData_Statics::NewProp_LootValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLootTypeData_Statics::NewProp_LootValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLootTypeData_Statics::NewProp_MaxValueForLootType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLootTypeData" },
		{ "ModuleRelativePath", "Public/SBZLootTypeData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZLootTypeData_Statics::NewProp_MaxValueForLootType = { "MaxValueForLootType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLootTypeData, MaxValueForLootType), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLootTypeData_Statics::NewProp_MaxValueForLootType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLootTypeData_Statics::NewProp_MaxValueForLootType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLootTypeData_Statics::NewProp_InfamyPointValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLootTypeData" },
		{ "ModuleRelativePath", "Public/SBZLootTypeData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZLootTypeData_Statics::NewProp_InfamyPointValue = { "InfamyPointValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLootTypeData, InfamyPointValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLootTypeData_Statics::NewProp_InfamyPointValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLootTypeData_Statics::NewProp_InfamyPointValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLootTypeData_Statics::NewProp_MaxInfamyPointsForLootType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLootTypeData" },
		{ "ModuleRelativePath", "Public/SBZLootTypeData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZLootTypeData_Statics::NewProp_MaxInfamyPointsForLootType = { "MaxInfamyPointsForLootType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLootTypeData, MaxInfamyPointsForLootType), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLootTypeData_Statics::NewProp_MaxInfamyPointsForLootType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLootTypeData_Statics::NewProp_MaxInfamyPointsForLootType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZLootTypeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLootTypeData_Statics::NewProp_LootValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLootTypeData_Statics::NewProp_MaxValueForLootType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLootTypeData_Statics::NewProp_InfamyPointValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLootTypeData_Statics::NewProp_MaxInfamyPointsForLootType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZLootTypeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZLootTypeData",
		sizeof(FSBZLootTypeData),
		alignof(FSBZLootTypeData),
		Z_Construct_UScriptStruct_FSBZLootTypeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLootTypeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLootTypeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLootTypeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZLootTypeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZLootTypeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZLootTypeData"), sizeof(FSBZLootTypeData), Get_Z_Construct_UScriptStruct_FSBZLootTypeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZLootTypeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZLootTypeData_Hash() { return 245467770U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
