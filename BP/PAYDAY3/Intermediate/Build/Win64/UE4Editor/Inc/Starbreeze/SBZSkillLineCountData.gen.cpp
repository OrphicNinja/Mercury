// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillLineCountData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillLineCountData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSkillLineCountData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillLineData_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZSkillLineCountData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSkillLineCountData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSkillLineCountData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSkillLineCountData"), sizeof(FSBZSkillLineCountData), Get_Z_Construct_UScriptStruct_FSBZSkillLineCountData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSkillLineCountData>()
{
	return FSBZSkillLineCountData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSkillLineCountData(FSBZSkillLineCountData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSkillLineCountData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSkillLineCountData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSkillLineCountData()
	{
		UScriptStruct::DeferCppStructOps<FSBZSkillLineCountData>(FName(TEXT("SBZSkillLineCountData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSkillLineCountData;
	struct Z_Construct_UScriptStruct_FSBZSkillLineCountData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSkillLineCountData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillLineCountData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSkillLineCountData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSkillLineCountData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSkillLineCountData_Statics::NewProp_SkillLine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillLineCountData" },
		{ "ModuleRelativePath", "Public/SBZSkillLineCountData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSkillLineCountData_Statics::NewProp_SkillLine = { "SkillLine", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSkillLineCountData, SkillLine), Z_Construct_UClass_USBZSkillLineData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSkillLineCountData_Statics::NewProp_SkillLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSkillLineCountData_Statics::NewProp_SkillLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSkillLineCountData_Statics::NewProp_Count_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillLineCountData" },
		{ "ModuleRelativePath", "Public/SBZSkillLineCountData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZSkillLineCountData_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSkillLineCountData, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSkillLineCountData_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSkillLineCountData_Statics::NewProp_Count_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSkillLineCountData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSkillLineCountData_Statics::NewProp_SkillLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSkillLineCountData_Statics::NewProp_Count,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSkillLineCountData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSkillLineCountData",
		sizeof(FSBZSkillLineCountData),
		alignof(FSBZSkillLineCountData),
		Z_Construct_UScriptStruct_FSBZSkillLineCountData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSkillLineCountData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSkillLineCountData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSkillLineCountData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSkillLineCountData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSkillLineCountData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSkillLineCountData"), sizeof(FSBZSkillLineCountData), Get_Z_Construct_UScriptStruct_FSBZSkillLineCountData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSkillLineCountData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSkillLineCountData_Hash() { return 2696150918U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
