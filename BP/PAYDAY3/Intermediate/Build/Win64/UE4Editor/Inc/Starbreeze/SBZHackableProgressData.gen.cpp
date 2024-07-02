// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHackableProgressData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHackableProgressData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHackableProgressData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZHackableProgressData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZHackableProgressData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZHackableProgressData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZHackableProgressData"), sizeof(FSBZHackableProgressData), Get_Z_Construct_UScriptStruct_FSBZHackableProgressData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZHackableProgressData>()
{
	return FSBZHackableProgressData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZHackableProgressData(FSBZHackableProgressData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZHackableProgressData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHackableProgressData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHackableProgressData()
	{
		UScriptStruct::DeferCppStructOps<FSBZHackableProgressData>(FName(TEXT("SBZHackableProgressData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZHackableProgressData;
	struct Z_Construct_UScriptStruct_FSBZHackableProgressData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdateFrequency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHackableProgressData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZHackableProgressData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZHackableProgressData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZHackableProgressData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHackableProgressData_Statics::NewProp_CurrentProgress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableProgressData" },
		{ "ModuleRelativePath", "Public/SBZHackableProgressData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZHackableProgressData_Statics::NewProp_CurrentProgress = { "CurrentProgress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHackableProgressData, CurrentProgress), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHackableProgressData_Statics::NewProp_CurrentProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHackableProgressData_Statics::NewProp_CurrentProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHackableProgressData_Statics::NewProp_UpdateFrequency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackableProgressData" },
		{ "ModuleRelativePath", "Public/SBZHackableProgressData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZHackableProgressData_Statics::NewProp_UpdateFrequency = { "UpdateFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHackableProgressData, UpdateFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHackableProgressData_Statics::NewProp_UpdateFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHackableProgressData_Statics::NewProp_UpdateFrequency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZHackableProgressData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHackableProgressData_Statics::NewProp_CurrentProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHackableProgressData_Statics::NewProp_UpdateFrequency,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZHackableProgressData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZHackableProgressData",
		sizeof(FSBZHackableProgressData),
		alignof(FSBZHackableProgressData),
		Z_Construct_UScriptStruct_FSBZHackableProgressData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHackableProgressData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHackableProgressData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHackableProgressData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZHackableProgressData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZHackableProgressData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZHackableProgressData"), sizeof(FSBZHackableProgressData), Get_Z_Construct_UScriptStruct_FSBZHackableProgressData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZHackableProgressData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZHackableProgressData_Hash() { return 367409284U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
