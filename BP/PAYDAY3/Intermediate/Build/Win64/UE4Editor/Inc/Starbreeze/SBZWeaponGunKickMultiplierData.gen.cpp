// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponGunKickMultiplierData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponGunKickMultiplierData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZWeaponGunKickMultiplierData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWeaponGunKickMultiplierData"), sizeof(FSBZWeaponGunKickMultiplierData), Get_Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWeaponGunKickMultiplierData>()
{
	return FSBZWeaponGunKickMultiplierData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWeaponGunKickMultiplierData(FSBZWeaponGunKickMultiplierData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWeaponGunKickMultiplierData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponGunKickMultiplierData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponGunKickMultiplierData()
	{
		UScriptStruct::DeferCppStructOps<FSBZWeaponGunKickMultiplierData>(FName(TEXT("SBZWeaponGunKickMultiplierData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponGunKickMultiplierData;
	struct Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Increment_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Increment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Threshold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponGunKickMultiplierData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWeaponGunKickMultiplierData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Statics::NewProp_Start_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponGunKickMultiplierData" },
		{ "ModuleRelativePath", "Public/SBZWeaponGunKickMultiplierData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponGunKickMultiplierData, Start), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Statics::NewProp_Increment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponGunKickMultiplierData" },
		{ "ModuleRelativePath", "Public/SBZWeaponGunKickMultiplierData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Statics::NewProp_Increment = { "Increment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponGunKickMultiplierData, Increment), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Statics::NewProp_Increment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Statics::NewProp_Increment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Statics::NewProp_Max_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponGunKickMultiplierData" },
		{ "ModuleRelativePath", "Public/SBZWeaponGunKickMultiplierData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponGunKickMultiplierData, Max), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Statics::NewProp_Threshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponGunKickMultiplierData" },
		{ "ModuleRelativePath", "Public/SBZWeaponGunKickMultiplierData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponGunKickMultiplierData, Threshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Statics::NewProp_Threshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Statics::NewProp_Threshold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Statics::NewProp_Increment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Statics::NewProp_Threshold,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZWeaponGunKickMultiplierData",
		sizeof(FSBZWeaponGunKickMultiplierData),
		alignof(FSBZWeaponGunKickMultiplierData),
		Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWeaponGunKickMultiplierData"), sizeof(FSBZWeaponGunKickMultiplierData), Get_Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData_Hash() { return 1719946848U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
