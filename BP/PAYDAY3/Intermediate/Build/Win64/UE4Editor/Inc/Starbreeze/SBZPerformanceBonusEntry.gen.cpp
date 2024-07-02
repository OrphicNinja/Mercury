// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPerformanceBonusEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPerformanceBonusEntry() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZPerformanceBonusEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPerformanceBonusEntry"), sizeof(FSBZPerformanceBonusEntry), Get_Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPerformanceBonusEntry>()
{
	return FSBZPerformanceBonusEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPerformanceBonusEntry(FSBZPerformanceBonusEntry::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPerformanceBonusEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPerformanceBonusEntry
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPerformanceBonusEntry()
	{
		UScriptStruct::DeferCppStructOps<FSBZPerformanceBonusEntry>(FName(TEXT("SBZPerformanceBonusEntry")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPerformanceBonusEntry;
	struct Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Modifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPerformanceBonusEntry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPerformanceBonusEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry_Statics::NewProp_Min_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPerformanceBonusEntry" },
		{ "ModuleRelativePath", "Public/SBZPerformanceBonusEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPerformanceBonusEntry, Min), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry_Statics::NewProp_Max_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPerformanceBonusEntry" },
		{ "ModuleRelativePath", "Public/SBZPerformanceBonusEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPerformanceBonusEntry, Max), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry_Statics::NewProp_Modifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPerformanceBonusEntry" },
		{ "ModuleRelativePath", "Public/SBZPerformanceBonusEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPerformanceBonusEntry, Modifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry_Statics::NewProp_Modifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry_Statics::NewProp_Modifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry_Statics::NewProp_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry_Statics::NewProp_Modifier,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZPerformanceBonusEntry",
		sizeof(FSBZPerformanceBonusEntry),
		alignof(FSBZPerformanceBonusEntry),
		Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPerformanceBonusEntry"), sizeof(FSBZPerformanceBonusEntry), Get_Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPerformanceBonusEntry_Hash() { return 2092448085U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
