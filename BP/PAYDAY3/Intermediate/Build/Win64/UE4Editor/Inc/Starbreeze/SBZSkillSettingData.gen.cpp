// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillSettingData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillSettingData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSkillSettingData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHackerSkillSettingData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMicroCameraSkillSettingData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCutterSkillSettingData();
// End Cross Module References
class UScriptStruct* FSBZSkillSettingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSkillSettingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSkillSettingData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSkillSettingData"), sizeof(FSBZSkillSettingData), Get_Z_Construct_UScriptStruct_FSBZSkillSettingData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSkillSettingData>()
{
	return FSBZSkillSettingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSkillSettingData(FSBZSkillSettingData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSkillSettingData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSkillSettingData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSkillSettingData()
	{
		UScriptStruct::DeferCppStructOps<FSBZSkillSettingData>(FName(TEXT("SBZSkillSettingData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSkillSettingData;
	struct Z_Construct_UScriptStruct_FSBZSkillSettingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hacker_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hacker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MicroCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MicroCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cutter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Cutter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSkillSettingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillSettingData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSkillSettingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSkillSettingData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSkillSettingData_Statics::NewProp_Hacker_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillSettingData" },
		{ "ModuleRelativePath", "Public/SBZSkillSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSkillSettingData_Statics::NewProp_Hacker = { "Hacker", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSkillSettingData, Hacker), Z_Construct_UScriptStruct_FSBZHackerSkillSettingData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSkillSettingData_Statics::NewProp_Hacker_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSkillSettingData_Statics::NewProp_Hacker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSkillSettingData_Statics::NewProp_MicroCamera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillSettingData" },
		{ "ModuleRelativePath", "Public/SBZSkillSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSkillSettingData_Statics::NewProp_MicroCamera = { "MicroCamera", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSkillSettingData, MicroCamera), Z_Construct_UScriptStruct_FSBZMicroCameraSkillSettingData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSkillSettingData_Statics::NewProp_MicroCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSkillSettingData_Statics::NewProp_MicroCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSkillSettingData_Statics::NewProp_Cutter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillSettingData" },
		{ "ModuleRelativePath", "Public/SBZSkillSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSkillSettingData_Statics::NewProp_Cutter = { "Cutter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSkillSettingData, Cutter), Z_Construct_UScriptStruct_FSBZCutterSkillSettingData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSkillSettingData_Statics::NewProp_Cutter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSkillSettingData_Statics::NewProp_Cutter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSkillSettingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSkillSettingData_Statics::NewProp_Hacker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSkillSettingData_Statics::NewProp_MicroCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSkillSettingData_Statics::NewProp_Cutter,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSkillSettingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSkillSettingData",
		sizeof(FSBZSkillSettingData),
		alignof(FSBZSkillSettingData),
		Z_Construct_UScriptStruct_FSBZSkillSettingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSkillSettingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSkillSettingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSkillSettingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSkillSettingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSkillSettingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSkillSettingData"), sizeof(FSBZSkillSettingData), Get_Z_Construct_UScriptStruct_FSBZSkillSettingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSkillSettingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSkillSettingData_Hash() { return 1948667777U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
