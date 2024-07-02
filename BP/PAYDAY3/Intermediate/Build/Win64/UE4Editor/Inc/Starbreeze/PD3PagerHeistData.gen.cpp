// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3PagerHeistData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3PagerHeistData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FPD3PagerHeistData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FPD3PagerHeistData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FPD3PagerHeistData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPD3PagerHeistData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("PD3PagerHeistData"), sizeof(FPD3PagerHeistData), Get_Z_Construct_UScriptStruct_FPD3PagerHeistData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FPD3PagerHeistData>()
{
	return FPD3PagerHeistData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPD3PagerHeistData(FPD3PagerHeistData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("PD3PagerHeistData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFPD3PagerHeistData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFPD3PagerHeistData()
	{
		UScriptStruct::DeferCppStructOps<FPD3PagerHeistData>(FName(TEXT("PD3PagerHeistData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFPD3PagerHeistData;
	struct Z_Construct_UScriptStruct_FPD3PagerHeistData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAnswerCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxAnswerCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimedOutCountIncrease_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TimedOutCountIncrease;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3PagerHeistData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PD3PagerHeistData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPD3PagerHeistData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPD3PagerHeistData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3PagerHeistData_Statics::NewProp_MaxAnswerCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3PagerHeistData" },
		{ "ModuleRelativePath", "Public/PD3PagerHeistData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPD3PagerHeistData_Statics::NewProp_MaxAnswerCount = { "MaxAnswerCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3PagerHeistData, MaxAnswerCount), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3PagerHeistData_Statics::NewProp_MaxAnswerCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3PagerHeistData_Statics::NewProp_MaxAnswerCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3PagerHeistData_Statics::NewProp_TimedOutCountIncrease_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3PagerHeistData" },
		{ "ModuleRelativePath", "Public/PD3PagerHeistData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPD3PagerHeistData_Statics::NewProp_TimedOutCountIncrease = { "TimedOutCountIncrease", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3PagerHeistData, TimedOutCountIncrease), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3PagerHeistData_Statics::NewProp_TimedOutCountIncrease_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3PagerHeistData_Statics::NewProp_TimedOutCountIncrease_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPD3PagerHeistData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3PagerHeistData_Statics::NewProp_MaxAnswerCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3PagerHeistData_Statics::NewProp_TimedOutCountIncrease,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPD3PagerHeistData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"PD3PagerHeistData",
		sizeof(FPD3PagerHeistData),
		alignof(FPD3PagerHeistData),
		Z_Construct_UScriptStruct_FPD3PagerHeistData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3PagerHeistData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3PagerHeistData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3PagerHeistData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPD3PagerHeistData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPD3PagerHeistData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PD3PagerHeistData"), sizeof(FPD3PagerHeistData), Get_Z_Construct_UScriptStruct_FPD3PagerHeistData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPD3PagerHeistData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPD3PagerHeistData_Hash() { return 3605263876U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
