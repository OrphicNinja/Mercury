// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCharacterEndMissionResultData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCharacterEndMissionResultData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippableEndMissionResultData();
// End Cross Module References
class UScriptStruct* FSBZCharacterEndMissionResultData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCharacterEndMissionResultData"), sizeof(FSBZCharacterEndMissionResultData), Get_Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCharacterEndMissionResultData>()
{
	return FSBZCharacterEndMissionResultData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCharacterEndMissionResultData(FSBZCharacterEndMissionResultData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCharacterEndMissionResultData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCharacterEndMissionResultData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCharacterEndMissionResultData()
	{
		UScriptStruct::DeferCppStructOps<FSBZCharacterEndMissionResultData>(FName(TEXT("SBZCharacterEndMissionResultData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCharacterEndMissionResultData;
	struct Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EquippableArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EquippableArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeenDefeatedCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BeenDefeatedCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeenRevivedCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BeenRevivedCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeenKilledCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BeenKilledCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HaveKilledCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HaveKilledCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HaveSpecialKilledCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HaveSpecialKilledCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HaveCivilianKilledCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HaveCivilianKilledCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HaveGuardKilledCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HaveGuardKilledCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HaveHeadshotKilledCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HaveHeadshotKilledCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecuredBagCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SecuredBagCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstantLootTakenCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstantLootTakenCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCharacterEndMissionResultData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCharacterEndMissionResultData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_EquippableArray_Inner = { "EquippableArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZEquippableEndMissionResultData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_EquippableArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZCharacterEndMissionResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_EquippableArray = { "EquippableArray", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterEndMissionResultData, EquippableArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_EquippableArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_EquippableArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_BeenDefeatedCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZCharacterEndMissionResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_BeenDefeatedCount = { "BeenDefeatedCount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterEndMissionResultData, BeenDefeatedCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_BeenDefeatedCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_BeenDefeatedCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_BeenRevivedCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZCharacterEndMissionResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_BeenRevivedCount = { "BeenRevivedCount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterEndMissionResultData, BeenRevivedCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_BeenRevivedCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_BeenRevivedCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_BeenKilledCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZCharacterEndMissionResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_BeenKilledCount = { "BeenKilledCount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterEndMissionResultData, BeenKilledCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_BeenKilledCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_BeenKilledCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_HaveKilledCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZCharacterEndMissionResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_HaveKilledCount = { "HaveKilledCount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterEndMissionResultData, HaveKilledCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_HaveKilledCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_HaveKilledCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_HaveSpecialKilledCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZCharacterEndMissionResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_HaveSpecialKilledCount = { "HaveSpecialKilledCount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterEndMissionResultData, HaveSpecialKilledCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_HaveSpecialKilledCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_HaveSpecialKilledCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_HaveCivilianKilledCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZCharacterEndMissionResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_HaveCivilianKilledCount = { "HaveCivilianKilledCount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterEndMissionResultData, HaveCivilianKilledCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_HaveCivilianKilledCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_HaveCivilianKilledCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_HaveGuardKilledCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZCharacterEndMissionResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_HaveGuardKilledCount = { "HaveGuardKilledCount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterEndMissionResultData, HaveGuardKilledCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_HaveGuardKilledCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_HaveGuardKilledCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_HaveHeadshotKilledCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZCharacterEndMissionResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_HaveHeadshotKilledCount = { "HaveHeadshotKilledCount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterEndMissionResultData, HaveHeadshotKilledCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_HaveHeadshotKilledCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_HaveHeadshotKilledCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_SecuredBagCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZCharacterEndMissionResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_SecuredBagCount = { "SecuredBagCount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterEndMissionResultData, SecuredBagCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_SecuredBagCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_SecuredBagCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_InstantLootTakenCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEndMissionResultData" },
		{ "ModuleRelativePath", "Public/SBZCharacterEndMissionResultData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_InstantLootTakenCount = { "InstantLootTakenCount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterEndMissionResultData, InstantLootTakenCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_InstantLootTakenCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_InstantLootTakenCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_EquippableArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_EquippableArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_BeenDefeatedCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_BeenRevivedCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_BeenKilledCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_HaveKilledCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_HaveSpecialKilledCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_HaveCivilianKilledCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_HaveGuardKilledCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_HaveHeadshotKilledCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_SecuredBagCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::NewProp_InstantLootTakenCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCharacterEndMissionResultData",
		sizeof(FSBZCharacterEndMissionResultData),
		alignof(FSBZCharacterEndMissionResultData),
		Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCharacterEndMissionResultData"), sizeof(FSBZCharacterEndMissionResultData), Get_Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData_Hash() { return 2171751262U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
