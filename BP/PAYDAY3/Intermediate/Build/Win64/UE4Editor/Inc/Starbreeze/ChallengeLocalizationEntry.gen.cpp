// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/ChallengeLocalizationEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChallengeLocalizationEntry() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeLocalizationEntry();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FChallengeLocalizationEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChallengeLocalizationEntry, Z_Construct_UPackage__Script_Starbreeze(), TEXT("ChallengeLocalizationEntry"), sizeof(FChallengeLocalizationEntry), Get_Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FChallengeLocalizationEntry>()
{
	return FChallengeLocalizationEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChallengeLocalizationEntry(FChallengeLocalizationEntry::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("ChallengeLocalizationEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFChallengeLocalizationEntry
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFChallengeLocalizationEntry()
	{
		UScriptStruct::DeferCppStructOps<FChallengeLocalizationEntry>(FName(TEXT("ChallengeLocalizationEntry")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFChallengeLocalizationEntry;
	struct Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChallengeId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InternalName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InternalDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InGameName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InGameName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InGameDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InGameDescription;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChallengeLocalizationEntry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChallengeLocalizationEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics::NewProp_ChallengeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeLocalizationEntry" },
		{ "ModuleRelativePath", "Public/ChallengeLocalizationEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics::NewProp_ChallengeId = { "ChallengeId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeLocalizationEntry, ChallengeId), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics::NewProp_ChallengeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics::NewProp_ChallengeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics::NewProp_InternalName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeLocalizationEntry" },
		{ "ModuleRelativePath", "Public/ChallengeLocalizationEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics::NewProp_InternalName = { "InternalName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeLocalizationEntry, InternalName), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics::NewProp_InternalName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics::NewProp_InternalName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics::NewProp_InternalDescription_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeLocalizationEntry" },
		{ "ModuleRelativePath", "Public/ChallengeLocalizationEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics::NewProp_InternalDescription = { "InternalDescription", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeLocalizationEntry, InternalDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics::NewProp_InternalDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics::NewProp_InternalDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics::NewProp_InGameName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeLocalizationEntry" },
		{ "ModuleRelativePath", "Public/ChallengeLocalizationEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics::NewProp_InGameName = { "InGameName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeLocalizationEntry, InGameName), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics::NewProp_InGameName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics::NewProp_InGameName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics::NewProp_InGameDescription_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeLocalizationEntry" },
		{ "ModuleRelativePath", "Public/ChallengeLocalizationEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics::NewProp_InGameDescription = { "InGameDescription", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeLocalizationEntry, InGameDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics::NewProp_InGameDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics::NewProp_InGameDescription_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics::NewProp_ChallengeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics::NewProp_InternalName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics::NewProp_InternalDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics::NewProp_InGameName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics::NewProp_InGameDescription,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"ChallengeLocalizationEntry",
		sizeof(FChallengeLocalizationEntry),
		alignof(FChallengeLocalizationEntry),
		Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChallengeLocalizationEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChallengeLocalizationEntry"), sizeof(FChallengeLocalizationEntry), Get_Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChallengeLocalizationEntry_Hash() { return 87379801U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
