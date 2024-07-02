// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponGunKickData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponGunKickData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponGunKickData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData();
// End Cross Module References
class UScriptStruct* FSBZWeaponGunKickData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWeaponGunKickData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWeaponGunKickData"), sizeof(FSBZWeaponGunKickData), Get_Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWeaponGunKickData>()
{
	return FSBZWeaponGunKickData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWeaponGunKickData(FSBZWeaponGunKickData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWeaponGunKickData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponGunKickData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponGunKickData()
	{
		UScriptStruct::DeferCppStructOps<FSBZWeaponGunKickData>(FName(TEXT("SBZWeaponGunKickData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponGunKickData;
	struct Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalTop_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VerticalTop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalBottom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VerticalBottom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VerticalMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HorizontalRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HorizontalLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HorizontalMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponGunKickData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWeaponGunKickData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_SpeedDeflect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponGunKickData" },
		{ "ModuleRelativePath", "Public/SBZWeaponGunKickData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_SpeedDeflect = { "SpeedDeflect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponGunKickData, SpeedDeflect), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_SpeedDeflect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_SpeedDeflect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_SpeedRecover_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponGunKickData" },
		{ "ModuleRelativePath", "Public/SBZWeaponGunKickData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_SpeedRecover = { "SpeedRecover", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponGunKickData, SpeedRecover), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_SpeedRecover_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_SpeedRecover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_DeflectCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponGunKickData" },
		{ "ModuleRelativePath", "Public/SBZWeaponGunKickData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_DeflectCurve = { "DeflectCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponGunKickData, DeflectCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_DeflectCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_DeflectCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_RecoverCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponGunKickData" },
		{ "ModuleRelativePath", "Public/SBZWeaponGunKickData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_RecoverCurve = { "RecoverCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponGunKickData, RecoverCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_RecoverCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_RecoverCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_VerticalTop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponGunKickData" },
		{ "ModuleRelativePath", "Public/SBZWeaponGunKickData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_VerticalTop = { "VerticalTop", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponGunKickData, VerticalTop), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_VerticalTop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_VerticalTop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_VerticalBottom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponGunKickData" },
		{ "ModuleRelativePath", "Public/SBZWeaponGunKickData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_VerticalBottom = { "VerticalBottom", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponGunKickData, VerticalBottom), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_VerticalBottom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_VerticalBottom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_VerticalMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponGunKickData" },
		{ "ModuleRelativePath", "Public/SBZWeaponGunKickData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_VerticalMultiplier = { "VerticalMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponGunKickData, VerticalMultiplier), Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_VerticalMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_VerticalMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_HorizontalRight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponGunKickData" },
		{ "ModuleRelativePath", "Public/SBZWeaponGunKickData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_HorizontalRight = { "HorizontalRight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponGunKickData, HorizontalRight), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_HorizontalRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_HorizontalRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_HorizontalLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponGunKickData" },
		{ "ModuleRelativePath", "Public/SBZWeaponGunKickData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_HorizontalLeft = { "HorizontalLeft", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponGunKickData, HorizontalLeft), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_HorizontalLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_HorizontalLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_HorizontalMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponGunKickData" },
		{ "ModuleRelativePath", "Public/SBZWeaponGunKickData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_HorizontalMultiplier = { "HorizontalMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponGunKickData, HorizontalMultiplier), Z_Construct_UScriptStruct_FSBZWeaponGunKickMultiplierData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_HorizontalMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_HorizontalMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_SpeedDeflect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_SpeedRecover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_DeflectCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_RecoverCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_VerticalTop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_VerticalBottom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_VerticalMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_HorizontalRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_HorizontalLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::NewProp_HorizontalMultiplier,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZWeaponGunKickData",
		sizeof(FSBZWeaponGunKickData),
		alignof(FSBZWeaponGunKickData),
		Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponGunKickData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWeaponGunKickData"), sizeof(FSBZWeaponGunKickData), Get_Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponGunKickData_Hash() { return 3128763058U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
