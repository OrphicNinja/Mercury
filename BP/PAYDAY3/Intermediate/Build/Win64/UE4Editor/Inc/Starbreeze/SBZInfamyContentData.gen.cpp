// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInfamyContentData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInfamyContentData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInfamyContentData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInfamyRewardData();
// End Cross Module References
class UScriptStruct* FSBZInfamyContentData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZInfamyContentData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZInfamyContentData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZInfamyContentData"), sizeof(FSBZInfamyContentData), Get_Z_Construct_UScriptStruct_FSBZInfamyContentData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZInfamyContentData>()
{
	return FSBZInfamyContentData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZInfamyContentData(FSBZInfamyContentData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZInfamyContentData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInfamyContentData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInfamyContentData()
	{
		UScriptStruct::DeferCppStructOps<FSBZInfamyContentData>(FName(TEXT("SBZInfamyContentData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZInfamyContentData;
	struct Z_Construct_UScriptStruct_FSBZInfamyContentData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfamyLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InfamyLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfamyPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InfamyPoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InfamyRewards_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfamyRewards_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InfamyRewards;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInfamyContentData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZInfamyContentData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZInfamyContentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZInfamyContentData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInfamyContentData_Statics::NewProp_InfamyLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInfamyContentData" },
		{ "ModuleRelativePath", "Public/SBZInfamyContentData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZInfamyContentData_Statics::NewProp_InfamyLevel = { "InfamyLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInfamyContentData, InfamyLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInfamyContentData_Statics::NewProp_InfamyLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfamyContentData_Statics::NewProp_InfamyLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInfamyContentData_Statics::NewProp_InfamyPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInfamyContentData" },
		{ "ModuleRelativePath", "Public/SBZInfamyContentData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZInfamyContentData_Statics::NewProp_InfamyPoints = { "InfamyPoints", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInfamyContentData, InfamyPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInfamyContentData_Statics::NewProp_InfamyPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfamyContentData_Statics::NewProp_InfamyPoints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZInfamyContentData_Statics::NewProp_InfamyRewards_Inner = { "InfamyRewards", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZInfamyRewardData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInfamyContentData_Statics::NewProp_InfamyRewards_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInfamyContentData" },
		{ "ModuleRelativePath", "Public/SBZInfamyContentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZInfamyContentData_Statics::NewProp_InfamyRewards = { "InfamyRewards", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInfamyContentData, InfamyRewards), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInfamyContentData_Statics::NewProp_InfamyRewards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfamyContentData_Statics::NewProp_InfamyRewards_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZInfamyContentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInfamyContentData_Statics::NewProp_InfamyLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInfamyContentData_Statics::NewProp_InfamyPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInfamyContentData_Statics::NewProp_InfamyRewards_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInfamyContentData_Statics::NewProp_InfamyRewards,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZInfamyContentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZInfamyContentData",
		sizeof(FSBZInfamyContentData),
		alignof(FSBZInfamyContentData),
		Z_Construct_UScriptStruct_FSBZInfamyContentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfamyContentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInfamyContentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfamyContentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZInfamyContentData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZInfamyContentData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZInfamyContentData"), sizeof(FSBZInfamyContentData), Get_Z_Construct_UScriptStruct_FSBZInfamyContentData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZInfamyContentData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZInfamyContentData_Hash() { return 3397509986U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
