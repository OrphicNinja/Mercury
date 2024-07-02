// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteCustomization/Public/PlayerRecordSummaryData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerRecordSummaryData() {}
// Cross Module References
	ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerRecordSummaryData();
	UPackage* Z_Construct_UPackage__Script_AccelByteCustomization();
	ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerRecordProgressSummary();
// End Cross Module References
class UScriptStruct* FPlayerRecordSummaryData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCELBYTECUSTOMIZATION_API uint32 Get_Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerRecordSummaryData, Z_Construct_UPackage__Script_AccelByteCustomization(), TEXT("PlayerRecordSummaryData"), sizeof(FPlayerRecordSummaryData), Get_Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Hash());
	}
	return Singleton;
}
template<> ACCELBYTECUSTOMIZATION_API UScriptStruct* StaticStruct<FPlayerRecordSummaryData>()
{
	return FPlayerRecordSummaryData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerRecordSummaryData(FPlayerRecordSummaryData::StaticStruct, TEXT("/Script/AccelByteCustomization"), TEXT("PlayerRecordSummaryData"), false, nullptr, nullptr);
static struct FScriptStruct_AccelByteCustomization_StaticRegisterNativesFPlayerRecordSummaryData
{
	FScriptStruct_AccelByteCustomization_StaticRegisterNativesFPlayerRecordSummaryData()
	{
		UScriptStruct::DeferCppStructOps<FPlayerRecordSummaryData>(FName(TEXT("PlayerRecordSummaryData")));
	}
} ScriptStruct_AccelByteCustomization_StaticRegisterNativesFPlayerRecordSummaryData;
	struct Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Total_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Total;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProgressSummary_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressSummary_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProgressSummary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerRecordSummaryData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerRecordSummaryData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerRecordSummaryData" },
		{ "ModuleRelativePath", "Public/PlayerRecordSummaryData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerRecordSummaryData, Namespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_Namespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerRecordSummaryData" },
		{ "ModuleRelativePath", "Public/PlayerRecordSummaryData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerRecordSummaryData, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_Tag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerRecordSummaryData" },
		{ "ModuleRelativePath", "Public/PlayerRecordSummaryData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerRecordSummaryData, Tag), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_Tag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_Total_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerRecordSummaryData" },
		{ "ModuleRelativePath", "Public/PlayerRecordSummaryData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_Total = { "Total", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerRecordSummaryData, Total), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_Total_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_Total_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_ProgressSummary_Inner = { "ProgressSummary", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlayerRecordProgressSummary, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_ProgressSummary_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerRecordSummaryData" },
		{ "ModuleRelativePath", "Public/PlayerRecordSummaryData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_ProgressSummary = { "ProgressSummary", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerRecordSummaryData, ProgressSummary), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_ProgressSummary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_ProgressSummary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_Namespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_Total,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_ProgressSummary_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::NewProp_ProgressSummary,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteCustomization,
		nullptr,
		&NewStructOps,
		"PlayerRecordSummaryData",
		sizeof(FPlayerRecordSummaryData),
		alignof(FPlayerRecordSummaryData),
		Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerRecordSummaryData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AccelByteCustomization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerRecordSummaryData"), sizeof(FPlayerRecordSummaryData), Get_Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerRecordSummaryData_Hash() { return 1259627764U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
