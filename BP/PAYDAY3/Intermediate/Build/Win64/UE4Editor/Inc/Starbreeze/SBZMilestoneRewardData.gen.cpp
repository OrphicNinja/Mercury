// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMilestoneRewardData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMilestoneRewardData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMilestoneRewardData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZMilestoneRewardData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZMilestoneRewardData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZMilestoneRewardData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZMilestoneRewardData"), sizeof(FSBZMilestoneRewardData), Get_Z_Construct_UScriptStruct_FSBZMilestoneRewardData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZMilestoneRewardData>()
{
	return FSBZMilestoneRewardData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZMilestoneRewardData(FSBZMilestoneRewardData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZMilestoneRewardData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMilestoneRewardData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMilestoneRewardData()
	{
		UScriptStruct::DeferCppStructOps<FSBZMilestoneRewardData>(FName(TEXT("SBZMilestoneRewardData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZMilestoneRewardData;
	struct Z_Construct_UScriptStruct_FSBZMilestoneRewardData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MilestoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MilestoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MilestoneRewardRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MilestoneRewardRatio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMilestoneRewardData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZMilestoneRewardData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZMilestoneRewardData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZMilestoneRewardData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMilestoneRewardData_Statics::NewProp_MilestoneName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMilestoneRewardData" },
		{ "ModuleRelativePath", "Public/SBZMilestoneRewardData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZMilestoneRewardData_Statics::NewProp_MilestoneName = { "MilestoneName", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMilestoneRewardData, MilestoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMilestoneRewardData_Statics::NewProp_MilestoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMilestoneRewardData_Statics::NewProp_MilestoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMilestoneRewardData_Statics::NewProp_MilestoneRewardRatio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMilestoneRewardData" },
		{ "ModuleRelativePath", "Public/SBZMilestoneRewardData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZMilestoneRewardData_Statics::NewProp_MilestoneRewardRatio = { "MilestoneRewardRatio", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMilestoneRewardData, MilestoneRewardRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMilestoneRewardData_Statics::NewProp_MilestoneRewardRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMilestoneRewardData_Statics::NewProp_MilestoneRewardRatio_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZMilestoneRewardData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMilestoneRewardData_Statics::NewProp_MilestoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMilestoneRewardData_Statics::NewProp_MilestoneRewardRatio,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZMilestoneRewardData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZMilestoneRewardData",
		sizeof(FSBZMilestoneRewardData),
		alignof(FSBZMilestoneRewardData),
		Z_Construct_UScriptStruct_FSBZMilestoneRewardData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMilestoneRewardData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMilestoneRewardData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMilestoneRewardData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZMilestoneRewardData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZMilestoneRewardData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZMilestoneRewardData"), sizeof(FSBZMilestoneRewardData), Get_Z_Construct_UScriptStruct_FSBZMilestoneRewardData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZMilestoneRewardData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZMilestoneRewardData_Hash() { return 473696886U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
