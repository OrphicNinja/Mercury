// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkipIntroSequenceData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkipIntroSequenceData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSkipIntroSequenceData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZSkipIntroSequenceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSkipIntroSequenceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSkipIntroSequenceData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSkipIntroSequenceData"), sizeof(FSBZSkipIntroSequenceData), Get_Z_Construct_UScriptStruct_FSBZSkipIntroSequenceData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSkipIntroSequenceData>()
{
	return FSBZSkipIntroSequenceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSkipIntroSequenceData(FSBZSkipIntroSequenceData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSkipIntroSequenceData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSkipIntroSequenceData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSkipIntroSequenceData()
	{
		UScriptStruct::DeferCppStructOps<FSBZSkipIntroSequenceData>(FName(TEXT("SBZSkipIntroSequenceData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSkipIntroSequenceData;
	struct Z_Construct_UScriptStruct_FSBZSkipIntroSequenceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SkipArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SkipArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSkipIntroSequenceData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSkipIntroSequenceData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSkipIntroSequenceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSkipIntroSequenceData>();
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSkipIntroSequenceData_Statics::NewProp_SkipArray_Inner = { "SkipArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSkipIntroSequenceData_Statics::NewProp_SkipArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkipIntroSequenceData" },
		{ "ModuleRelativePath", "Public/SBZSkipIntroSequenceData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZSkipIntroSequenceData_Statics::NewProp_SkipArray = { "SkipArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSkipIntroSequenceData, SkipArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSkipIntroSequenceData_Statics::NewProp_SkipArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSkipIntroSequenceData_Statics::NewProp_SkipArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSkipIntroSequenceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSkipIntroSequenceData_Statics::NewProp_SkipArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSkipIntroSequenceData_Statics::NewProp_SkipArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSkipIntroSequenceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSkipIntroSequenceData",
		sizeof(FSBZSkipIntroSequenceData),
		alignof(FSBZSkipIntroSequenceData),
		Z_Construct_UScriptStruct_FSBZSkipIntroSequenceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSkipIntroSequenceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSkipIntroSequenceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSkipIntroSequenceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSkipIntroSequenceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSkipIntroSequenceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSkipIntroSequenceData"), sizeof(FSBZSkipIntroSequenceData), Get_Z_Construct_UScriptStruct_FSBZSkipIntroSequenceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSkipIntroSequenceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSkipIntroSequenceData_Hash() { return 1527212078U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
