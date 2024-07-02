// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponAimAssistData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponAimAssistData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponAimAssistData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData();
// End Cross Module References
class UScriptStruct* FSBZWeaponAimAssistData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWeaponAimAssistData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWeaponAimAssistData"), sizeof(FSBZWeaponAimAssistData), Get_Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWeaponAimAssistData>()
{
	return FSBZWeaponAimAssistData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWeaponAimAssistData(FSBZWeaponAimAssistData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWeaponAimAssistData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponAimAssistData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponAimAssistData()
	{
		UScriptStruct::DeferCppStructOps<FSBZWeaponAimAssistData>(FName(TEXT("SBZWeaponAimAssistData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponAimAssistData;
	struct Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectionSideDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DetectionSideDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectionDistancePriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DetectionDistancePriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinTargetSelectionDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinTargetSelectionDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTriggeredByWeaponFire_MetaData[];
#endif
		static void NewProp_bIsTriggeredByWeaponFire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTriggeredByWeaponFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StickyAimDurationOnWeaponFire_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StickyAimDurationOnWeaponFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscapeSpeedIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EscapeSpeedIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscapeSpeedOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EscapeSpeedOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimAssistSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimAssistSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SensitivityModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SensitivityModifier;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MagnetismDistanceDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagnetismDistanceDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MagnetismDistanceDataArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAllSockets_MetaData[];
#endif
		static void NewProp_bUseAllSockets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAllSockets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponAimAssistData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWeaponAimAssistData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_DetectionSideDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAimAssistData" },
		{ "ModuleRelativePath", "Public/SBZWeaponAimAssistData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_DetectionSideDistance = { "DetectionSideDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponAimAssistData, DetectionSideDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_DetectionSideDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_DetectionSideDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_DetectionDistancePriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAimAssistData" },
		{ "ModuleRelativePath", "Public/SBZWeaponAimAssistData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_DetectionDistancePriority = { "DetectionDistancePriority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponAimAssistData, DetectionDistancePriority), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_DetectionDistancePriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_DetectionDistancePriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_MinTargetSelectionDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAimAssistData" },
		{ "ModuleRelativePath", "Public/SBZWeaponAimAssistData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_MinTargetSelectionDuration = { "MinTargetSelectionDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponAimAssistData, MinTargetSelectionDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_MinTargetSelectionDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_MinTargetSelectionDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_MinDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAimAssistData" },
		{ "ModuleRelativePath", "Public/SBZWeaponAimAssistData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_MinDuration = { "MinDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponAimAssistData, MinDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_MinDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_MinDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_MaxDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAimAssistData" },
		{ "ModuleRelativePath", "Public/SBZWeaponAimAssistData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_MaxDuration = { "MaxDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponAimAssistData, MaxDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_MaxDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_MaxDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_bIsTriggeredByWeaponFire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAimAssistData" },
		{ "ModuleRelativePath", "Public/SBZWeaponAimAssistData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_bIsTriggeredByWeaponFire_SetBit(void* Obj)
	{
		((FSBZWeaponAimAssistData*)Obj)->bIsTriggeredByWeaponFire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_bIsTriggeredByWeaponFire = { "bIsTriggeredByWeaponFire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZWeaponAimAssistData), &Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_bIsTriggeredByWeaponFire_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_bIsTriggeredByWeaponFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_bIsTriggeredByWeaponFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_StickyAimDurationOnWeaponFire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAimAssistData" },
		{ "ModuleRelativePath", "Public/SBZWeaponAimAssistData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_StickyAimDurationOnWeaponFire = { "StickyAimDurationOnWeaponFire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponAimAssistData, StickyAimDurationOnWeaponFire), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_StickyAimDurationOnWeaponFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_StickyAimDurationOnWeaponFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_EscapeSpeedIn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAimAssistData" },
		{ "ModuleRelativePath", "Public/SBZWeaponAimAssistData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_EscapeSpeedIn = { "EscapeSpeedIn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponAimAssistData, EscapeSpeedIn), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_EscapeSpeedIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_EscapeSpeedIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_EscapeSpeedOut_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAimAssistData" },
		{ "ModuleRelativePath", "Public/SBZWeaponAimAssistData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_EscapeSpeedOut = { "EscapeSpeedOut", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponAimAssistData, EscapeSpeedOut), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_EscapeSpeedOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_EscapeSpeedOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_AimAssistSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAimAssistData" },
		{ "ModuleRelativePath", "Public/SBZWeaponAimAssistData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_AimAssistSpeed = { "AimAssistSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponAimAssistData, AimAssistSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_AimAssistSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_AimAssistSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_MinDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAimAssistData" },
		{ "ModuleRelativePath", "Public/SBZWeaponAimAssistData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_MinDistance = { "MinDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponAimAssistData, MinDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_MinDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_MinDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_SensitivityModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAimAssistData" },
		{ "ModuleRelativePath", "Public/SBZWeaponAimAssistData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_SensitivityModifier = { "SensitivityModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponAimAssistData, SensitivityModifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_SensitivityModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_SensitivityModifier_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_MagnetismDistanceDataArray_Inner = { "MagnetismDistanceDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZWeaponAimAssistMagnetismData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_MagnetismDistanceDataArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAimAssistData" },
		{ "ModuleRelativePath", "Public/SBZWeaponAimAssistData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_MagnetismDistanceDataArray = { "MagnetismDistanceDataArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponAimAssistData, MagnetismDistanceDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_MagnetismDistanceDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_MagnetismDistanceDataArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_bUseAllSockets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponAimAssistData" },
		{ "ModuleRelativePath", "Public/SBZWeaponAimAssistData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_bUseAllSockets_SetBit(void* Obj)
	{
		((FSBZWeaponAimAssistData*)Obj)->bUseAllSockets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_bUseAllSockets = { "bUseAllSockets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZWeaponAimAssistData), &Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_bUseAllSockets_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_bUseAllSockets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_bUseAllSockets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_DetectionSideDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_DetectionDistancePriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_MinTargetSelectionDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_MinDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_MaxDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_bIsTriggeredByWeaponFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_StickyAimDurationOnWeaponFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_EscapeSpeedIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_EscapeSpeedOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_AimAssistSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_MinDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_SensitivityModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_MagnetismDistanceDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_MagnetismDistanceDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::NewProp_bUseAllSockets,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZWeaponAimAssistData",
		sizeof(FSBZWeaponAimAssistData),
		alignof(FSBZWeaponAimAssistData),
		Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponAimAssistData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWeaponAimAssistData"), sizeof(FSBZWeaponAimAssistData), Get_Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponAimAssistData_Hash() { return 3049987268U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
