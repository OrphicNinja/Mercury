// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZNewsFeedEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZNewsFeedEntry() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZNewsFeedEntry();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZNewsFeedEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZNewsFeedEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZNewsFeedEntry, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZNewsFeedEntry"), sizeof(FSBZNewsFeedEntry), Get_Z_Construct_UScriptStruct_FSBZNewsFeedEntry_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZNewsFeedEntry>()
{
	return FSBZNewsFeedEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZNewsFeedEntry(FSBZNewsFeedEntry::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZNewsFeedEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZNewsFeedEntry
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZNewsFeedEntry()
	{
		UScriptStruct::DeferCppStructOps<FSBZNewsFeedEntry>(FName(TEXT("SBZNewsFeedEntry")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZNewsFeedEntry;
	struct Z_Construct_UScriptStruct_FSBZNewsFeedEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Body;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImageUrl;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZNewsFeedEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZNewsFeedEntry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZNewsFeedEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZNewsFeedEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZNewsFeedEntry_Statics::NewProp_Title_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNewsFeedEntry" },
		{ "ModuleRelativePath", "Public/SBZNewsFeedEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZNewsFeedEntry_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZNewsFeedEntry, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZNewsFeedEntry_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNewsFeedEntry_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZNewsFeedEntry_Statics::NewProp_Body_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNewsFeedEntry" },
		{ "ModuleRelativePath", "Public/SBZNewsFeedEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZNewsFeedEntry_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZNewsFeedEntry, Body), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZNewsFeedEntry_Statics::NewProp_Body_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNewsFeedEntry_Statics::NewProp_Body_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZNewsFeedEntry_Statics::NewProp_ImageUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNewsFeedEntry" },
		{ "ModuleRelativePath", "Public/SBZNewsFeedEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZNewsFeedEntry_Statics::NewProp_ImageUrl = { "ImageUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZNewsFeedEntry, ImageUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZNewsFeedEntry_Statics::NewProp_ImageUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNewsFeedEntry_Statics::NewProp_ImageUrl_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZNewsFeedEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZNewsFeedEntry_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZNewsFeedEntry_Statics::NewProp_Body,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZNewsFeedEntry_Statics::NewProp_ImageUrl,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZNewsFeedEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZNewsFeedEntry",
		sizeof(FSBZNewsFeedEntry),
		alignof(FSBZNewsFeedEntry),
		Z_Construct_UScriptStruct_FSBZNewsFeedEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNewsFeedEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZNewsFeedEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNewsFeedEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZNewsFeedEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZNewsFeedEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZNewsFeedEntry"), sizeof(FSBZNewsFeedEntry), Get_Z_Construct_UScriptStruct_FSBZNewsFeedEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZNewsFeedEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZNewsFeedEntry_Hash() { return 1109820986U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
