// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWrinklePackedFloatData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWrinklePackedFloatData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWrinklePackedFloatData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZWrinklePackedFloatData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWrinklePackedFloatData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWrinklePackedFloatData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWrinklePackedFloatData"), sizeof(FSBZWrinklePackedFloatData), Get_Z_Construct_UScriptStruct_FSBZWrinklePackedFloatData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWrinklePackedFloatData>()
{
	return FSBZWrinklePackedFloatData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWrinklePackedFloatData(FSBZWrinklePackedFloatData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWrinklePackedFloatData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWrinklePackedFloatData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWrinklePackedFloatData()
	{
		UScriptStruct::DeferCppStructOps<FSBZWrinklePackedFloatData>(FName(TEXT("SBZWrinklePackedFloatData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWrinklePackedFloatData;
	struct Z_Construct_UScriptStruct_FSBZWrinklePackedFloatData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackedFloatIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PackedFloatIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurveName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWrinklePackedFloatData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWrinklePackedFloatData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWrinklePackedFloatData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWrinklePackedFloatData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWrinklePackedFloatData_Statics::NewProp_PackedFloatIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWrinklePackedFloatData" },
		{ "ModuleRelativePath", "Public/SBZWrinklePackedFloatData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZWrinklePackedFloatData_Statics::NewProp_PackedFloatIndex = { "PackedFloatIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWrinklePackedFloatData, PackedFloatIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWrinklePackedFloatData_Statics::NewProp_PackedFloatIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWrinklePackedFloatData_Statics::NewProp_PackedFloatIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWrinklePackedFloatData_Statics::NewProp_CurveName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWrinklePackedFloatData" },
		{ "ModuleRelativePath", "Public/SBZWrinklePackedFloatData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZWrinklePackedFloatData_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWrinklePackedFloatData, CurveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWrinklePackedFloatData_Statics::NewProp_CurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWrinklePackedFloatData_Statics::NewProp_CurveName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWrinklePackedFloatData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWrinklePackedFloatData_Statics::NewProp_PackedFloatIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWrinklePackedFloatData_Statics::NewProp_CurveName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWrinklePackedFloatData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZWrinklePackedFloatData",
		sizeof(FSBZWrinklePackedFloatData),
		alignof(FSBZWrinklePackedFloatData),
		Z_Construct_UScriptStruct_FSBZWrinklePackedFloatData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWrinklePackedFloatData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWrinklePackedFloatData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWrinklePackedFloatData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWrinklePackedFloatData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWrinklePackedFloatData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWrinklePackedFloatData"), sizeof(FSBZWrinklePackedFloatData), Get_Z_Construct_UScriptStruct_FSBZWrinklePackedFloatData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWrinklePackedFloatData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWrinklePackedFloatData_Hash() { return 1849331644U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
