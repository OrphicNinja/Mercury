// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTitleData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTitleData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTitleData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZTitleData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZTitleData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZTitleData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZTitleData"), sizeof(FSBZTitleData), Get_Z_Construct_UScriptStruct_FSBZTitleData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZTitleData>()
{
	return FSBZTitleData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZTitleData(FSBZTitleData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZTitleData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTitleData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTitleData()
	{
		UScriptStruct::DeferCppStructOps<FSBZTitleData>(FName(TEXT("SBZTitleData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZTitleData;
	struct Z_Construct_UScriptStruct_FSBZTitleData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TitleData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTitleData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZTitleData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZTitleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZTitleData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTitleData_Statics::NewProp_TitleData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTitleData" },
		{ "ModuleRelativePath", "Public/SBZTitleData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZTitleData_Statics::NewProp_TitleData = { "TitleData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTitleData, TitleData), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTitleData_Statics::NewProp_TitleData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTitleData_Statics::NewProp_TitleData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZTitleData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTitleData_Statics::NewProp_TitleData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZTitleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZTitleData",
		sizeof(FSBZTitleData),
		alignof(FSBZTitleData),
		Z_Construct_UScriptStruct_FSBZTitleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTitleData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTitleData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTitleData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZTitleData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZTitleData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZTitleData"), sizeof(FSBZTitleData), Get_Z_Construct_UScriptStruct_FSBZTitleData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZTitleData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZTitleData_Hash() { return 294212892U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
