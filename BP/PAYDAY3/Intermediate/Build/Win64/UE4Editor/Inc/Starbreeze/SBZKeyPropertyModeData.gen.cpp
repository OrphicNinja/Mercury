// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZKeyPropertyModeData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZKeyPropertyModeData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZKeyPropertyModeData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZKeyPropertyModeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZKeyPropertyModeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZKeyPropertyModeData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZKeyPropertyModeData"), sizeof(FSBZKeyPropertyModeData), Get_Z_Construct_UScriptStruct_FSBZKeyPropertyModeData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZKeyPropertyModeData>()
{
	return FSBZKeyPropertyModeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZKeyPropertyModeData(FSBZKeyPropertyModeData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZKeyPropertyModeData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZKeyPropertyModeData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZKeyPropertyModeData()
	{
		UScriptStruct::DeferCppStructOps<FSBZKeyPropertyModeData>(FName(TEXT("SBZKeyPropertyModeData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZKeyPropertyModeData;
	struct Z_Construct_UScriptStruct_FSBZKeyPropertyModeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeadZoneArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeadZoneArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZKeyPropertyModeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZKeyPropertyModeData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZKeyPropertyModeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZKeyPropertyModeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZKeyPropertyModeData_Statics::NewProp_DeadZoneArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKeyPropertyModeData" },
		{ "ModuleRelativePath", "Public/SBZKeyPropertyModeData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZKeyPropertyModeData_Statics::NewProp_DeadZoneArray = { "DeadZoneArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZKeyPropertyModeData, DeadZoneArray), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZKeyPropertyModeData_Statics::NewProp_DeadZoneArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZKeyPropertyModeData_Statics::NewProp_DeadZoneArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZKeyPropertyModeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZKeyPropertyModeData_Statics::NewProp_DeadZoneArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZKeyPropertyModeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZKeyPropertyModeData",
		sizeof(FSBZKeyPropertyModeData),
		alignof(FSBZKeyPropertyModeData),
		Z_Construct_UScriptStruct_FSBZKeyPropertyModeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZKeyPropertyModeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZKeyPropertyModeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZKeyPropertyModeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZKeyPropertyModeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZKeyPropertyModeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZKeyPropertyModeData"), sizeof(FSBZKeyPropertyModeData), Get_Z_Construct_UScriptStruct_FSBZKeyPropertyModeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZKeyPropertyModeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZKeyPropertyModeData_Hash() { return 786651419U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
