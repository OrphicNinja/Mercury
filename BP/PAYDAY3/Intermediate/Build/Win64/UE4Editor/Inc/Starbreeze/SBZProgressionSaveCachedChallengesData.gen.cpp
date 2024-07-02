// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZProgressionSaveCachedChallengesData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZProgressionSaveCachedChallengesData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZProgressionSaveCachedChallengesData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeData();
// End Cross Module References
class UScriptStruct* FSBZProgressionSaveCachedChallengesData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZProgressionSaveCachedChallengesData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZProgressionSaveCachedChallengesData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZProgressionSaveCachedChallengesData"), sizeof(FSBZProgressionSaveCachedChallengesData), Get_Z_Construct_UScriptStruct_FSBZProgressionSaveCachedChallengesData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZProgressionSaveCachedChallengesData>()
{
	return FSBZProgressionSaveCachedChallengesData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZProgressionSaveCachedChallengesData(FSBZProgressionSaveCachedChallengesData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZProgressionSaveCachedChallengesData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZProgressionSaveCachedChallengesData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZProgressionSaveCachedChallengesData()
	{
		UScriptStruct::DeferCppStructOps<FSBZProgressionSaveCachedChallengesData>(FName(TEXT("SBZProgressionSaveCachedChallengesData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZProgressionSaveCachedChallengesData;
	struct Z_Construct_UScriptStruct_FSBZProgressionSaveCachedChallengesData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedChallenges_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CachedChallenges_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedChallenges_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CachedChallenges;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionSaveCachedChallengesData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZProgressionSaveCachedChallengesData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZProgressionSaveCachedChallengesData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZProgressionSaveCachedChallengesData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveCachedChallengesData_Statics::NewProp_CachedChallenges_ValueProp = { "CachedChallenges", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZChallengeData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveCachedChallengesData_Statics::NewProp_CachedChallenges_Key_KeyProp = { "CachedChallenges_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZProgressionSaveCachedChallengesData_Statics::NewProp_CachedChallenges_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProgressionSaveCachedChallengesData" },
		{ "ModuleRelativePath", "Public/SBZProgressionSaveCachedChallengesData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZProgressionSaveCachedChallengesData_Statics::NewProp_CachedChallenges = { "CachedChallenges", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZProgressionSaveCachedChallengesData, CachedChallenges), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionSaveCachedChallengesData_Statics::NewProp_CachedChallenges_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionSaveCachedChallengesData_Statics::NewProp_CachedChallenges_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZProgressionSaveCachedChallengesData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveCachedChallengesData_Statics::NewProp_CachedChallenges_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveCachedChallengesData_Statics::NewProp_CachedChallenges_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZProgressionSaveCachedChallengesData_Statics::NewProp_CachedChallenges,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZProgressionSaveCachedChallengesData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZProgressionSaveCachedChallengesData",
		sizeof(FSBZProgressionSaveCachedChallengesData),
		alignof(FSBZProgressionSaveCachedChallengesData),
		Z_Construct_UScriptStruct_FSBZProgressionSaveCachedChallengesData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionSaveCachedChallengesData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZProgressionSaveCachedChallengesData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZProgressionSaveCachedChallengesData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZProgressionSaveCachedChallengesData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZProgressionSaveCachedChallengesData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZProgressionSaveCachedChallengesData"), sizeof(FSBZProgressionSaveCachedChallengesData), Get_Z_Construct_UScriptStruct_FSBZProgressionSaveCachedChallengesData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZProgressionSaveCachedChallengesData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZProgressionSaveCachedChallengesData_Hash() { return 1494660472U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
