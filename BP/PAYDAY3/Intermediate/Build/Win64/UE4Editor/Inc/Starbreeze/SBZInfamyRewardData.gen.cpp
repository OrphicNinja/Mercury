// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInfamyRewardData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInfamyRewardData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInfamyRewardData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZInfamyRewardData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZInfamyRewardData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZInfamyRewardData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZInfamyRewardData"), sizeof(FSBZInfamyRewardData), Get_Z_Construct_UScriptStruct_FSBZInfamyRewardData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZInfamyRewardData>()
{
	return FSBZInfamyRewardData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZInfamyRewardData(FSBZInfamyRewardData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZInfamyRewardData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInfamyRewardData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInfamyRewardData()
	{
		UScriptStruct::DeferCppStructOps<FSBZInfamyRewardData>(FName(TEXT("SBZInfamyRewardData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZInfamyRewardData;
	struct Z_Construct_UScriptStruct_FSBZInfamyRewardData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentGivenType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContentGivenType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentGivenValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ContentGivenValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInfamyRewardData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZInfamyRewardData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZInfamyRewardData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZInfamyRewardData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInfamyRewardData_Statics::NewProp_ContentGivenType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInfamyRewardData" },
		{ "ModuleRelativePath", "Public/SBZInfamyRewardData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZInfamyRewardData_Statics::NewProp_ContentGivenType = { "ContentGivenType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInfamyRewardData, ContentGivenType), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInfamyRewardData_Statics::NewProp_ContentGivenType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfamyRewardData_Statics::NewProp_ContentGivenType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInfamyRewardData_Statics::NewProp_ContentGivenValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInfamyRewardData" },
		{ "ModuleRelativePath", "Public/SBZInfamyRewardData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZInfamyRewardData_Statics::NewProp_ContentGivenValue = { "ContentGivenValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInfamyRewardData, ContentGivenValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInfamyRewardData_Statics::NewProp_ContentGivenValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfamyRewardData_Statics::NewProp_ContentGivenValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZInfamyRewardData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInfamyRewardData_Statics::NewProp_ContentGivenType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInfamyRewardData_Statics::NewProp_ContentGivenValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZInfamyRewardData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZInfamyRewardData",
		sizeof(FSBZInfamyRewardData),
		alignof(FSBZInfamyRewardData),
		Z_Construct_UScriptStruct_FSBZInfamyRewardData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfamyRewardData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInfamyRewardData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInfamyRewardData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZInfamyRewardData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZInfamyRewardData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZInfamyRewardData"), sizeof(FSBZInfamyRewardData), Get_Z_Construct_UScriptStruct_FSBZInfamyRewardData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZInfamyRewardData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZInfamyRewardData_Hash() { return 2846122528U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
