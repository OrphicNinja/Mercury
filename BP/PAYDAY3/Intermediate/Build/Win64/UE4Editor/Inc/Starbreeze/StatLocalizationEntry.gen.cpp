// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/StatLocalizationEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatLocalizationEntry() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FStatLocalizationEntry();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FStatLocalizationEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FStatLocalizationEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatLocalizationEntry, Z_Construct_UPackage__Script_Starbreeze(), TEXT("StatLocalizationEntry"), sizeof(FStatLocalizationEntry), Get_Z_Construct_UScriptStruct_FStatLocalizationEntry_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FStatLocalizationEntry>()
{
	return FStatLocalizationEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStatLocalizationEntry(FStatLocalizationEntry::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("StatLocalizationEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFStatLocalizationEntry
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFStatLocalizationEntry()
	{
		UScriptStruct::DeferCppStructOps<FStatLocalizationEntry>(FName(TEXT("StatLocalizationEntry")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFStatLocalizationEntry;
	struct Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveMultiple_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ObjectiveMultiple;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveSingle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ObjectiveSingle;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ObjectiveOverrides_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ObjectiveOverrides_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ObjectiveOverrides;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StatLocalizationEntry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatLocalizationEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewProp_StatCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StatLocalizationEntry" },
		{ "ModuleRelativePath", "Public/StatLocalizationEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewProp_StatCode = { "StatCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatLocalizationEntry, StatCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewProp_StatCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewProp_StatCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StatLocalizationEntry" },
		{ "ModuleRelativePath", "Public/StatLocalizationEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatLocalizationEntry, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StatLocalizationEntry" },
		{ "ModuleRelativePath", "Public/StatLocalizationEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatLocalizationEntry, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewProp_ObjectiveMultiple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StatLocalizationEntry" },
		{ "ModuleRelativePath", "Public/StatLocalizationEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewProp_ObjectiveMultiple = { "ObjectiveMultiple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatLocalizationEntry, ObjectiveMultiple), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewProp_ObjectiveMultiple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewProp_ObjectiveMultiple_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewProp_ObjectiveSingle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StatLocalizationEntry" },
		{ "ModuleRelativePath", "Public/StatLocalizationEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewProp_ObjectiveSingle = { "ObjectiveSingle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatLocalizationEntry, ObjectiveSingle), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewProp_ObjectiveSingle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewProp_ObjectiveSingle_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewProp_ObjectiveOverrides_ValueProp = { "ObjectiveOverrides", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewProp_ObjectiveOverrides_Key_KeyProp = { "ObjectiveOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewProp_ObjectiveOverrides_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StatLocalizationEntry" },
		{ "ModuleRelativePath", "Public/StatLocalizationEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewProp_ObjectiveOverrides = { "ObjectiveOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatLocalizationEntry, ObjectiveOverrides), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewProp_ObjectiveOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewProp_ObjectiveOverrides_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewProp_StatCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewProp_ObjectiveMultiple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewProp_ObjectiveSingle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewProp_ObjectiveOverrides_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewProp_ObjectiveOverrides_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::NewProp_ObjectiveOverrides,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"StatLocalizationEntry",
		sizeof(FStatLocalizationEntry),
		alignof(FStatLocalizationEntry),
		Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStatLocalizationEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStatLocalizationEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StatLocalizationEntry"), sizeof(FStatLocalizationEntry), Get_Z_Construct_UScriptStruct_FStatLocalizationEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStatLocalizationEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStatLocalizationEntry_Hash() { return 1494769498U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
