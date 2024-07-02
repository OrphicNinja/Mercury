// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWrinkleCPDData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWrinkleCPDData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWrinkleCPDData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWrinklePackedFloatData();
// End Cross Module References
class UScriptStruct* FSBZWrinkleCPDData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWrinkleCPDData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWrinkleCPDData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWrinkleCPDData"), sizeof(FSBZWrinkleCPDData), Get_Z_Construct_UScriptStruct_FSBZWrinkleCPDData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWrinkleCPDData>()
{
	return FSBZWrinkleCPDData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWrinkleCPDData(FSBZWrinkleCPDData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWrinkleCPDData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWrinkleCPDData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWrinkleCPDData()
	{
		UScriptStruct::DeferCppStructOps<FSBZWrinkleCPDData>(FName(TEXT("SBZWrinkleCPDData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWrinkleCPDData;
	struct Z_Construct_UScriptStruct_FSBZWrinkleCPDData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPDIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CPDIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PackedFloatDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackedFloatDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PackedFloatDataArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWrinkleCPDData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWrinkleCPDData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWrinkleCPDData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWrinkleCPDData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWrinkleCPDData_Statics::NewProp_CPDIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWrinkleCPDData" },
		{ "ModuleRelativePath", "Public/SBZWrinkleCPDData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZWrinkleCPDData_Statics::NewProp_CPDIndex = { "CPDIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWrinkleCPDData, CPDIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWrinkleCPDData_Statics::NewProp_CPDIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWrinkleCPDData_Statics::NewProp_CPDIndex_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWrinkleCPDData_Statics::NewProp_PackedFloatDataArray_Inner = { "PackedFloatDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZWrinklePackedFloatData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWrinkleCPDData_Statics::NewProp_PackedFloatDataArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWrinkleCPDData" },
		{ "ModuleRelativePath", "Public/SBZWrinkleCPDData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZWrinkleCPDData_Statics::NewProp_PackedFloatDataArray = { "PackedFloatDataArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWrinkleCPDData, PackedFloatDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWrinkleCPDData_Statics::NewProp_PackedFloatDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWrinkleCPDData_Statics::NewProp_PackedFloatDataArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWrinkleCPDData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWrinkleCPDData_Statics::NewProp_CPDIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWrinkleCPDData_Statics::NewProp_PackedFloatDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWrinkleCPDData_Statics::NewProp_PackedFloatDataArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWrinkleCPDData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZWrinkleCPDData",
		sizeof(FSBZWrinkleCPDData),
		alignof(FSBZWrinkleCPDData),
		Z_Construct_UScriptStruct_FSBZWrinkleCPDData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWrinkleCPDData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWrinkleCPDData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWrinkleCPDData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWrinkleCPDData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWrinkleCPDData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWrinkleCPDData"), sizeof(FSBZWrinkleCPDData), Get_Z_Construct_UScriptStruct_FSBZWrinkleCPDData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWrinkleCPDData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWrinkleCPDData_Hash() { return 3540121497U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
