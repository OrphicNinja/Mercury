// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInstantLootValues.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInstantLootValues() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInstantLootValues();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZInstantLootValues::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZInstantLootValues_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZInstantLootValues, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZInstantLootValues"), sizeof(FSBZInstantLootValues), Get_Z_Construct_UScriptStruct_FSBZInstantLootValues_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZInstantLootValues>()
{
	return FSBZInstantLootValues::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZInstantLootValues(FSBZInstantLootValues::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZInstantLootValues"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInstantLootValues
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInstantLootValues()
	{
		UScriptStruct::DeferCppStructOps<FSBZInstantLootValues>(FName(TEXT("SBZInstantLootValues")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZInstantLootValues;
	struct Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StealthMaxPayoutArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StealthMaxPayoutArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StealthMaxPayoutArray;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoudMaxPayoutArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoudMaxPayoutArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LoudMaxPayoutArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalPoints;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NameToPointMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NameToPointMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameToPointMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_NameToPointMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZInstantLootValues.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZInstantLootValues>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::NewProp_StealthMaxPayoutArray_Inner = { "StealthMaxPayoutArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::NewProp_StealthMaxPayoutArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInstantLootValues" },
		{ "ModuleRelativePath", "Public/SBZInstantLootValues.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::NewProp_StealthMaxPayoutArray = { "StealthMaxPayoutArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInstantLootValues, StealthMaxPayoutArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::NewProp_StealthMaxPayoutArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::NewProp_StealthMaxPayoutArray_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::NewProp_LoudMaxPayoutArray_Inner = { "LoudMaxPayoutArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::NewProp_LoudMaxPayoutArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInstantLootValues" },
		{ "ModuleRelativePath", "Public/SBZInstantLootValues.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::NewProp_LoudMaxPayoutArray = { "LoudMaxPayoutArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInstantLootValues, LoudMaxPayoutArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::NewProp_LoudMaxPayoutArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::NewProp_LoudMaxPayoutArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::NewProp_TotalPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInstantLootValues" },
		{ "ModuleRelativePath", "Public/SBZInstantLootValues.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::NewProp_TotalPoints = { "TotalPoints", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInstantLootValues, TotalPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::NewProp_TotalPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::NewProp_TotalPoints_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::NewProp_NameToPointMap_ValueProp = { "NameToPointMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::NewProp_NameToPointMap_Key_KeyProp = { "NameToPointMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::NewProp_NameToPointMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInstantLootValues" },
		{ "ModuleRelativePath", "Public/SBZInstantLootValues.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::NewProp_NameToPointMap = { "NameToPointMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInstantLootValues, NameToPointMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::NewProp_NameToPointMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::NewProp_NameToPointMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::NewProp_StealthMaxPayoutArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::NewProp_StealthMaxPayoutArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::NewProp_LoudMaxPayoutArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::NewProp_LoudMaxPayoutArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::NewProp_TotalPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::NewProp_NameToPointMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::NewProp_NameToPointMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::NewProp_NameToPointMap,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZInstantLootValues",
		sizeof(FSBZInstantLootValues),
		alignof(FSBZInstantLootValues),
		Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZInstantLootValues()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZInstantLootValues_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZInstantLootValues"), sizeof(FSBZInstantLootValues), Get_Z_Construct_UScriptStruct_FSBZInstantLootValues_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZInstantLootValues_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZInstantLootValues_Hash() { return 874560345U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
