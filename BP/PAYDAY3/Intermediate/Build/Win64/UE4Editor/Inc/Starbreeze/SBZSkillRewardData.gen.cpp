// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillRewardData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillRewardData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSkillRewardData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZSkillRewardData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSkillRewardData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSkillRewardData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSkillRewardData"), sizeof(FSBZSkillRewardData), Get_Z_Construct_UScriptStruct_FSBZSkillRewardData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSkillRewardData>()
{
	return FSBZSkillRewardData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSkillRewardData(FSBZSkillRewardData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSkillRewardData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSkillRewardData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSkillRewardData()
	{
		UScriptStruct::DeferCppStructOps<FSBZSkillRewardData>(FName(TEXT("SBZSkillRewardData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSkillRewardData;
	struct Z_Construct_UScriptStruct_FSBZSkillRewardData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExperiencePoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExperiencePoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResearchedSkillLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ResearchedSkillLine;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ProgressedSkillLines_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressedSkillLines_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProgressedSkillLines;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSkillRewardData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillRewardData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSkillRewardData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSkillRewardData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSkillRewardData_Statics::NewProp_ExperiencePoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillRewardData" },
		{ "ModuleRelativePath", "Public/SBZSkillRewardData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZSkillRewardData_Statics::NewProp_ExperiencePoints = { "ExperiencePoints", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSkillRewardData, ExperiencePoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSkillRewardData_Statics::NewProp_ExperiencePoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSkillRewardData_Statics::NewProp_ExperiencePoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSkillRewardData_Statics::NewProp_ResearchedSkillLine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillRewardData" },
		{ "ModuleRelativePath", "Public/SBZSkillRewardData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZSkillRewardData_Statics::NewProp_ResearchedSkillLine = { "ResearchedSkillLine", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSkillRewardData, ResearchedSkillLine), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSkillRewardData_Statics::NewProp_ResearchedSkillLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSkillRewardData_Statics::NewProp_ResearchedSkillLine_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZSkillRewardData_Statics::NewProp_ProgressedSkillLines_Inner = { "ProgressedSkillLines", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSkillRewardData_Statics::NewProp_ProgressedSkillLines_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillRewardData" },
		{ "ModuleRelativePath", "Public/SBZSkillRewardData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZSkillRewardData_Statics::NewProp_ProgressedSkillLines = { "ProgressedSkillLines", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSkillRewardData, ProgressedSkillLines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSkillRewardData_Statics::NewProp_ProgressedSkillLines_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSkillRewardData_Statics::NewProp_ProgressedSkillLines_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSkillRewardData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSkillRewardData_Statics::NewProp_ExperiencePoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSkillRewardData_Statics::NewProp_ResearchedSkillLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSkillRewardData_Statics::NewProp_ProgressedSkillLines_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSkillRewardData_Statics::NewProp_ProgressedSkillLines,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSkillRewardData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSkillRewardData",
		sizeof(FSBZSkillRewardData),
		alignof(FSBZSkillRewardData),
		Z_Construct_UScriptStruct_FSBZSkillRewardData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSkillRewardData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSkillRewardData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSkillRewardData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSkillRewardData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSkillRewardData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSkillRewardData"), sizeof(FSBZSkillRewardData), Get_Z_Construct_UScriptStruct_FSBZSkillRewardData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSkillRewardData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSkillRewardData_Hash() { return 1639216499U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
