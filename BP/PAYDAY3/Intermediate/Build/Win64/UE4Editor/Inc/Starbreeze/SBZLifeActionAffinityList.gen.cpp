// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLifeActionAffinityList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLifeActionAffinityList() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLifeActionAffinityList();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLifeActionAffinity();
// End Cross Module References
class UScriptStruct* FSBZLifeActionAffinityList::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZLifeActionAffinityList_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZLifeActionAffinityList, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZLifeActionAffinityList"), sizeof(FSBZLifeActionAffinityList), Get_Z_Construct_UScriptStruct_FSBZLifeActionAffinityList_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZLifeActionAffinityList>()
{
	return FSBZLifeActionAffinityList::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZLifeActionAffinityList(FSBZLifeActionAffinityList::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZLifeActionAffinityList"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLifeActionAffinityList
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLifeActionAffinityList()
	{
		UScriptStruct::DeferCppStructOps<FSBZLifeActionAffinityList>(FName(TEXT("SBZLifeActionAffinityList")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZLifeActionAffinityList;
	struct Z_Construct_UScriptStruct_FSBZLifeActionAffinityList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Affinities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Affinities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Affinities;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLifeActionAffinityList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeActionAffinityList.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZLifeActionAffinityList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZLifeActionAffinityList>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLifeActionAffinityList_Statics::NewProp_Affinities_Inner = { "Affinities", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZLifeActionAffinity, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLifeActionAffinityList_Statics::NewProp_Affinities_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionAffinityList" },
		{ "ModuleRelativePath", "Public/SBZLifeActionAffinityList.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZLifeActionAffinityList_Statics::NewProp_Affinities = { "Affinities", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLifeActionAffinityList, Affinities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLifeActionAffinityList_Statics::NewProp_Affinities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionAffinityList_Statics::NewProp_Affinities_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZLifeActionAffinityList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLifeActionAffinityList_Statics::NewProp_Affinities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLifeActionAffinityList_Statics::NewProp_Affinities,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZLifeActionAffinityList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZLifeActionAffinityList",
		sizeof(FSBZLifeActionAffinityList),
		alignof(FSBZLifeActionAffinityList),
		Z_Construct_UScriptStruct_FSBZLifeActionAffinityList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionAffinityList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLifeActionAffinityList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeActionAffinityList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZLifeActionAffinityList()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZLifeActionAffinityList_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZLifeActionAffinityList"), sizeof(FSBZLifeActionAffinityList), Get_Z_Construct_UScriptStruct_FSBZLifeActionAffinityList_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZLifeActionAffinityList_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZLifeActionAffinityList_Hash() { return 1975602281U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
