// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIConfigDPSData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIConfigDPSData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAIConfigDPSData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZAIConfigDPSData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAIConfigDPSData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAIConfigDPSData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAIConfigDPSData"), sizeof(FSBZAIConfigDPSData), Get_Z_Construct_UScriptStruct_FSBZAIConfigDPSData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAIConfigDPSData>()
{
	return FSBZAIConfigDPSData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAIConfigDPSData(FSBZAIConfigDPSData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAIConfigDPSData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAIConfigDPSData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAIConfigDPSData()
	{
		UScriptStruct::DeferCppStructOps<FSBZAIConfigDPSData>(FName(TEXT("SBZAIConfigDPSData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAIConfigDPSData;
	struct Z_Construct_UScriptStruct_FSBZAIConfigDPSData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Interval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIConfigDPSData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAIConfigDPSData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAIConfigDPSData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAIConfigDPSData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIConfigDPSData_Statics::NewProp_Damage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfigDPSData" },
		{ "ModuleRelativePath", "Public/SBZAIConfigDPSData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAIConfigDPSData_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAIConfigDPSData, Damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIConfigDPSData_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIConfigDPSData_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAIConfigDPSData_Statics::NewProp_Interval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIConfigDPSData" },
		{ "ModuleRelativePath", "Public/SBZAIConfigDPSData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAIConfigDPSData_Statics::NewProp_Interval = { "Interval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAIConfigDPSData, Interval), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIConfigDPSData_Statics::NewProp_Interval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIConfigDPSData_Statics::NewProp_Interval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAIConfigDPSData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIConfigDPSData_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAIConfigDPSData_Statics::NewProp_Interval,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAIConfigDPSData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAIConfigDPSData",
		sizeof(FSBZAIConfigDPSData),
		alignof(FSBZAIConfigDPSData),
		Z_Construct_UScriptStruct_FSBZAIConfigDPSData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIConfigDPSData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAIConfigDPSData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAIConfigDPSData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAIConfigDPSData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAIConfigDPSData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAIConfigDPSData"), sizeof(FSBZAIConfigDPSData), Get_Z_Construct_UScriptStruct_FSBZAIConfigDPSData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAIConfigDPSData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAIConfigDPSData_Hash() { return 1877786787U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
