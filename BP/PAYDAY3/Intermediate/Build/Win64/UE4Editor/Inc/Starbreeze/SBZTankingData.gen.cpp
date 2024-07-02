// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTankingData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTankingData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTankingData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZTankingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZTankingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZTankingData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZTankingData"), sizeof(FSBZTankingData), Get_Z_Construct_UScriptStruct_FSBZTankingData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZTankingData>()
{
	return FSBZTankingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZTankingData(FSBZTankingData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZTankingData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTankingData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTankingData()
	{
		UScriptStruct::DeferCppStructOps<FSBZTankingData>(FName(TEXT("SBZTankingData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZTankingData;
	struct Z_Construct_UScriptStruct_FSBZTankingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankingAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TankingAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankingAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TankingAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankingMinYawAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TankingMinYawAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankingMaxYawAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TankingMaxYawAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankingMinRollAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TankingMinRollAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankingMaxRollAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TankingMaxRollAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankingYawMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TankingYawMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankingRollMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TankingRollMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankingSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TankingSensitivity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTankingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZTankingData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZTankingData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTankingData" },
		{ "ModuleRelativePath", "Public/SBZTankingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingAmount = { "TankingAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTankingData, TankingAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTankingData" },
		{ "ModuleRelativePath", "Public/SBZTankingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingAlpha = { "TankingAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTankingData, TankingAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingMinYawAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTankingData" },
		{ "ModuleRelativePath", "Public/SBZTankingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingMinYawAngle = { "TankingMinYawAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTankingData, TankingMinYawAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingMinYawAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingMinYawAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingMaxYawAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTankingData" },
		{ "ModuleRelativePath", "Public/SBZTankingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingMaxYawAngle = { "TankingMaxYawAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTankingData, TankingMaxYawAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingMaxYawAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingMaxYawAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingMinRollAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTankingData" },
		{ "ModuleRelativePath", "Public/SBZTankingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingMinRollAngle = { "TankingMinRollAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTankingData, TankingMinRollAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingMinRollAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingMinRollAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingMaxRollAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTankingData" },
		{ "ModuleRelativePath", "Public/SBZTankingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingMaxRollAngle = { "TankingMaxRollAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTankingData, TankingMaxRollAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingMaxRollAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingMaxRollAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingYawMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTankingData" },
		{ "ModuleRelativePath", "Public/SBZTankingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingYawMultiplier = { "TankingYawMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTankingData, TankingYawMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingYawMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingYawMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingRollMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTankingData" },
		{ "ModuleRelativePath", "Public/SBZTankingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingRollMultiplier = { "TankingRollMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTankingData, TankingRollMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingRollMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingRollMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingSensitivity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTankingData" },
		{ "ModuleRelativePath", "Public/SBZTankingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingSensitivity = { "TankingSensitivity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTankingData, TankingSensitivity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingSensitivity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZTankingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingMinYawAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingMaxYawAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingMinRollAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingMaxRollAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingYawMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingRollMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTankingData_Statics::NewProp_TankingSensitivity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZTankingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZTankingData",
		sizeof(FSBZTankingData),
		alignof(FSBZTankingData),
		Z_Construct_UScriptStruct_FSBZTankingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTankingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTankingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTankingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZTankingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZTankingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZTankingData"), sizeof(FSBZTankingData), Get_Z_Construct_UScriptStruct_FSBZTankingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZTankingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZTankingData_Hash() { return 622992877U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
