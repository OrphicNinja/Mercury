// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZProgressionSaveChallengesData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZProgressionSaveChallengesData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDailyChallengeBlock();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FSBZProgressionSaveChallengesData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZProgressionSaveChallengesData"), sizeof(FSBZProgressionSaveChallengesData), Get_Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZProgressionSaveChallengesData>()
{
	return FSBZProgressionSaveChallengesData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZProgressionSaveChallengesData(FSBZProgressionSaveChallengesData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZProgressionSaveChallengesData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZProgressionSaveChallengesData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZProgressionSaveChallengesData()
	{
		UScriptStruct::DeferCppStructOps<FSBZProgressionSaveChallengesData>(FName(TEXT("SBZProgressionSaveChallengesData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZProgressionSaveChallengesData;
	struct Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SavedChallenges_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavedChallenges_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SavedChallenges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FetchedFromAPI_MetaData[];
#endif
		static void NewProp_FetchedFromAPI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FetchedFromAPI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DailyChallengeBlockMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DailyChallengeBlockMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DailyChallengePullDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DailyChallengePullDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RerollAvailable_MetaData[];
#endif
		static void NewProp_RerollAvailable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RerollAvailable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZProgressionSaveChallengesData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZProgressionSaveChallengesData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::NewProp_SavedChallenges_Inner = { "SavedChallenges", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZClientSaveChallengeV2, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::NewProp_SavedChallenges_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProgressionSaveChallengesData" },
		{ "ModuleRelativePath", "Public/SBZProgressionSaveChallengesData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::NewProp_SavedChallenges = { "SavedChallenges", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZProgressionSaveChallengesData, SavedChallenges), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::NewProp_SavedChallenges_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::NewProp_SavedChallenges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::NewProp_FetchedFromAPI_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProgressionSaveChallengesData" },
		{ "ModuleRelativePath", "Public/SBZProgressionSaveChallengesData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::NewProp_FetchedFromAPI_SetBit(void* Obj)
	{
		((FSBZProgressionSaveChallengesData*)Obj)->FetchedFromAPI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::NewProp_FetchedFromAPI = { "FetchedFromAPI", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZProgressionSaveChallengesData), &Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::NewProp_FetchedFromAPI_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::NewProp_FetchedFromAPI_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::NewProp_FetchedFromAPI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::NewProp_DailyChallengeBlockMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProgressionSaveChallengesData" },
		{ "ModuleRelativePath", "Public/SBZProgressionSaveChallengesData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::NewProp_DailyChallengeBlockMap = { "DailyChallengeBlockMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZProgressionSaveChallengesData, DailyChallengeBlockMap), Z_Construct_UScriptStruct_FSBZDailyChallengeBlock, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::NewProp_DailyChallengeBlockMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::NewProp_DailyChallengeBlockMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::NewProp_DailyChallengePullDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProgressionSaveChallengesData" },
		{ "ModuleRelativePath", "Public/SBZProgressionSaveChallengesData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::NewProp_DailyChallengePullDate = { "DailyChallengePullDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZProgressionSaveChallengesData, DailyChallengePullDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::NewProp_DailyChallengePullDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::NewProp_DailyChallengePullDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::NewProp_RerollAvailable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProgressionSaveChallengesData" },
		{ "ModuleRelativePath", "Public/SBZProgressionSaveChallengesData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::NewProp_RerollAvailable_SetBit(void* Obj)
	{
		((FSBZProgressionSaveChallengesData*)Obj)->RerollAvailable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::NewProp_RerollAvailable = { "RerollAvailable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZProgressionSaveChallengesData), &Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::NewProp_RerollAvailable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::NewProp_RerollAvailable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::NewProp_RerollAvailable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::NewProp_SavedChallenges_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::NewProp_SavedChallenges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::NewProp_FetchedFromAPI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::NewProp_DailyChallengeBlockMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::NewProp_DailyChallengePullDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::NewProp_RerollAvailable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZProgressionSaveChallengesData",
		sizeof(FSBZProgressionSaveChallengesData),
		alignof(FSBZProgressionSaveChallengesData),
		Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZProgressionSaveChallengesData"), sizeof(FSBZProgressionSaveChallengesData), Get_Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZProgressionSaveChallengesData_Hash() { return 1065511081U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
