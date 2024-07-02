// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponGunKickBackData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponGunKickBackData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
// End Cross Module References
class UScriptStruct* FSBZWeaponGunKickBackData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWeaponGunKickBackData"), sizeof(FSBZWeaponGunKickBackData), Get_Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWeaponGunKickBackData>()
{
	return FSBZWeaponGunKickBackData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWeaponGunKickBackData(FSBZWeaponGunKickBackData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWeaponGunKickBackData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponGunKickBackData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponGunKickBackData()
	{
		UScriptStruct::DeferCppStructOps<FSBZWeaponGunKickBackData>(FName(TEXT("SBZWeaponGunKickBackData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponGunKickBackData;
	struct Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedDeflect_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedDeflect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedRecover_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedRecover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeflectCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeflectCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoverCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RecoverCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponGunKickBackData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWeaponGunKickBackData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::NewProp_SpeedDeflect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponGunKickBackData" },
		{ "ModuleRelativePath", "Public/SBZWeaponGunKickBackData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::NewProp_SpeedDeflect = { "SpeedDeflect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponGunKickBackData, SpeedDeflect), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::NewProp_SpeedDeflect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::NewProp_SpeedDeflect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::NewProp_SpeedRecover_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponGunKickBackData" },
		{ "ModuleRelativePath", "Public/SBZWeaponGunKickBackData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::NewProp_SpeedRecover = { "SpeedRecover", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponGunKickBackData, SpeedRecover), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::NewProp_SpeedRecover_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::NewProp_SpeedRecover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::NewProp_DeflectCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponGunKickBackData" },
		{ "ModuleRelativePath", "Public/SBZWeaponGunKickBackData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::NewProp_DeflectCurve = { "DeflectCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponGunKickBackData, DeflectCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::NewProp_DeflectCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::NewProp_DeflectCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::NewProp_RecoverCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponGunKickBackData" },
		{ "ModuleRelativePath", "Public/SBZWeaponGunKickBackData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::NewProp_RecoverCurve = { "RecoverCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponGunKickBackData, RecoverCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::NewProp_RecoverCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::NewProp_RecoverCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::NewProp_Distance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponGunKickBackData" },
		{ "ModuleRelativePath", "Public/SBZWeaponGunKickBackData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponGunKickBackData, Distance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponGunKickBackData" },
		{ "ModuleRelativePath", "Public/SBZWeaponGunKickBackData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponGunKickBackData, MaxDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::NewProp_MaxDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::NewProp_SpeedDeflect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::NewProp_SpeedRecover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::NewProp_DeflectCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::NewProp_RecoverCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::NewProp_MaxDistance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZWeaponGunKickBackData",
		sizeof(FSBZWeaponGunKickBackData),
		alignof(FSBZWeaponGunKickBackData),
		Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWeaponGunKickBackData"), sizeof(FSBZWeaponGunKickBackData), Get_Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData_Hash() { return 699380646U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
