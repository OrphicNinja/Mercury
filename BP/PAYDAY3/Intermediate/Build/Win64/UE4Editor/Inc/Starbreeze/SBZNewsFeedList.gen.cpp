// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZNewsFeedList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZNewsFeedList() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZNewsFeedList();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZNewsFeedEntry();
// End Cross Module References
class UScriptStruct* FSBZNewsFeedList::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZNewsFeedList_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZNewsFeedList, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZNewsFeedList"), sizeof(FSBZNewsFeedList), Get_Z_Construct_UScriptStruct_FSBZNewsFeedList_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZNewsFeedList>()
{
	return FSBZNewsFeedList::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZNewsFeedList(FSBZNewsFeedList::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZNewsFeedList"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZNewsFeedList
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZNewsFeedList()
	{
		UScriptStruct::DeferCppStructOps<FSBZNewsFeedList>(FName(TEXT("SBZNewsFeedList")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZNewsFeedList;
	struct Z_Construct_UScriptStruct_FSBZNewsFeedList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewsList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewsList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewsList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZNewsFeedList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZNewsFeedList.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZNewsFeedList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZNewsFeedList>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZNewsFeedList_Statics::NewProp_NewsList_Inner = { "NewsList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZNewsFeedEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZNewsFeedList_Statics::NewProp_NewsList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNewsFeedList" },
		{ "ModuleRelativePath", "Public/SBZNewsFeedList.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZNewsFeedList_Statics::NewProp_NewsList = { "NewsList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZNewsFeedList, NewsList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZNewsFeedList_Statics::NewProp_NewsList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNewsFeedList_Statics::NewProp_NewsList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZNewsFeedList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZNewsFeedList_Statics::NewProp_NewsList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZNewsFeedList_Statics::NewProp_NewsList,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZNewsFeedList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZNewsFeedList",
		sizeof(FSBZNewsFeedList),
		alignof(FSBZNewsFeedList),
		Z_Construct_UScriptStruct_FSBZNewsFeedList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNewsFeedList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZNewsFeedList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNewsFeedList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZNewsFeedList()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZNewsFeedList_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZNewsFeedList"), sizeof(FSBZNewsFeedList), Get_Z_Construct_UScriptStruct_FSBZNewsFeedList_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZNewsFeedList_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZNewsFeedList_Hash() { return 4189482779U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
