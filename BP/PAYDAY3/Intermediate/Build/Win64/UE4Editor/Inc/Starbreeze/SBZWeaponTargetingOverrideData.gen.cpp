// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponTargetingOverrideData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponTargetingOverrideData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponTargetingOverrideData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZWeaponTargetingOverrideData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponTargetingOverrideData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWeaponTargetingOverrideData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWeaponTargetingOverrideData"), sizeof(FSBZWeaponTargetingOverrideData), Get_Z_Construct_UScriptStruct_FSBZWeaponTargetingOverrideData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWeaponTargetingOverrideData>()
{
	return FSBZWeaponTargetingOverrideData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWeaponTargetingOverrideData(FSBZWeaponTargetingOverrideData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWeaponTargetingOverrideData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponTargetingOverrideData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponTargetingOverrideData()
	{
		UScriptStruct::DeferCppStructOps<FSBZWeaponTargetingOverrideData>(FName(TEXT("SBZWeaponTargetingOverrideData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponTargetingOverrideData;
	struct Z_Construct_UScriptStruct_FSBZWeaponTargetingOverrideData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetingXAxisOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetingXAxisOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponTargetingOverrideData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponTargetingOverrideData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWeaponTargetingOverrideData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWeaponTargetingOverrideData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponTargetingOverrideData_Statics::NewProp_TargetingXAxisOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponTargetingOverrideData" },
		{ "ModuleRelativePath", "Public/SBZWeaponTargetingOverrideData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponTargetingOverrideData_Statics::NewProp_TargetingXAxisOffset = { "TargetingXAxisOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponTargetingOverrideData, TargetingXAxisOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponTargetingOverrideData_Statics::NewProp_TargetingXAxisOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponTargetingOverrideData_Statics::NewProp_TargetingXAxisOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWeaponTargetingOverrideData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponTargetingOverrideData_Statics::NewProp_TargetingXAxisOffset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWeaponTargetingOverrideData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZWeaponTargetingOverrideData",
		sizeof(FSBZWeaponTargetingOverrideData),
		alignof(FSBZWeaponTargetingOverrideData),
		Z_Construct_UScriptStruct_FSBZWeaponTargetingOverrideData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponTargetingOverrideData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponTargetingOverrideData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponTargetingOverrideData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponTargetingOverrideData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponTargetingOverrideData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWeaponTargetingOverrideData"), sizeof(FSBZWeaponTargetingOverrideData), Get_Z_Construct_UScriptStruct_FSBZWeaponTargetingOverrideData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWeaponTargetingOverrideData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponTargetingOverrideData_Hash() { return 1438585563U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
