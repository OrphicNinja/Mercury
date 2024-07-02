// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAgilityTraversalQueryParamsRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAgilityTraversalQueryParamsRow() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAgilityTraversalType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZFloatLimit();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLockCameraData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
class UScriptStruct* FSBZAgilityTraversalQueryParamsRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAgilityTraversalQueryParamsRow"), sizeof(FSBZAgilityTraversalQueryParamsRow), Get_Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAgilityTraversalQueryParamsRow>()
{
	return FSBZAgilityTraversalQueryParamsRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow(FSBZAgilityTraversalQueryParamsRow::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAgilityTraversalQueryParamsRow"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgilityTraversalQueryParamsRow
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgilityTraversalQueryParamsRow()
	{
		UScriptStruct::DeferCppStructOps<FSBZAgilityTraversalQueryParamsRow>(FName(TEXT("SBZAgilityTraversalQueryParamsRow")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgilityTraversalQueryParamsRow;
	struct Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AgilityType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgilityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AgilityType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPerformSprintCheck_MetaData[];
#endif
		static void NewProp_bPerformSprintCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPerformSprintCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMustWantToSprint_MetaData[];
#endif
		static void NewProp_bMustWantToSprint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMustWantToSprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObstacleHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObstacleHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpeedLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraverseDistancePerSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraverseDistancePerSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerDistancePerSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TriggerDistancePerSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistAfterObstaclePerSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DistAfterObstaclePerSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinFallHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinFallHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpSpeedCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JumpSpeedCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEntrySpeedOverridesJumpCurve_MetaData[];
#endif
		static void NewProp_bEntrySpeedOverridesJumpCurve_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEntrySpeedOverridesJumpCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraversalSpeedCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraversalSpeedCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEntrySpeedOverridesTraversalCurve_MetaData[];
#endif
		static void NewProp_bEntrySpeedOverridesTraversalCurve_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEntrySpeedOverridesTraversalCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandingSpeedCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LandingSpeedCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEntrySpeedOverridesLandCurve_MetaData[];
#endif
		static void NewProp_bEntrySpeedOverridesLandCurve_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEntrySpeedOverridesLandCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EyeHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EyeHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockCameraData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LockCameraData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalQueryParamsRow.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAgilityTraversalQueryParamsRow>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_AgilityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_AgilityType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTraversalQueryParamsRow" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalQueryParamsRow.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_AgilityType = { "AgilityType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityTraversalQueryParamsRow, AgilityType), Z_Construct_UEnum_Starbreeze_ESBZAgilityTraversalType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_AgilityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_AgilityType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bPerformSprintCheck_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTraversalQueryParamsRow" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalQueryParamsRow.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bPerformSprintCheck_SetBit(void* Obj)
	{
		((FSBZAgilityTraversalQueryParamsRow*)Obj)->bPerformSprintCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bPerformSprintCheck = { "bPerformSprintCheck", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZAgilityTraversalQueryParamsRow), &Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bPerformSprintCheck_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bPerformSprintCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bPerformSprintCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bMustWantToSprint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTraversalQueryParamsRow" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalQueryParamsRow.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bMustWantToSprint_SetBit(void* Obj)
	{
		((FSBZAgilityTraversalQueryParamsRow*)Obj)->bMustWantToSprint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bMustWantToSprint = { "bMustWantToSprint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZAgilityTraversalQueryParamsRow), &Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bMustWantToSprint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bMustWantToSprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bMustWantToSprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_ObstacleHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTraversalQueryParamsRow" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalQueryParamsRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_ObstacleHeight = { "ObstacleHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityTraversalQueryParamsRow, ObstacleHeight), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_ObstacleHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_ObstacleHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_SpeedLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTraversalQueryParamsRow" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalQueryParamsRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_SpeedLimit = { "SpeedLimit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityTraversalQueryParamsRow, SpeedLimit), Z_Construct_UScriptStruct_FSBZFloatLimit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_SpeedLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_SpeedLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_TraverseDistancePerSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTraversalQueryParamsRow" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalQueryParamsRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_TraverseDistancePerSpeed = { "TraverseDistancePerSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityTraversalQueryParamsRow, TraverseDistancePerSpeed), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_TraverseDistancePerSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_TraverseDistancePerSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_TriggerDistancePerSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTraversalQueryParamsRow" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalQueryParamsRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_TriggerDistancePerSpeed = { "TriggerDistancePerSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityTraversalQueryParamsRow, TriggerDistancePerSpeed), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_TriggerDistancePerSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_TriggerDistancePerSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_DistAfterObstaclePerSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTraversalQueryParamsRow" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalQueryParamsRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_DistAfterObstaclePerSpeed = { "DistAfterObstaclePerSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityTraversalQueryParamsRow, DistAfterObstaclePerSpeed), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_DistAfterObstaclePerSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_DistAfterObstaclePerSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_MinFallHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTraversalQueryParamsRow" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalQueryParamsRow.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_MinFallHeight = { "MinFallHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityTraversalQueryParamsRow, MinFallHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_MinFallHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_MinFallHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_JumpSpeedCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTraversalQueryParamsRow" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalQueryParamsRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_JumpSpeedCurve = { "JumpSpeedCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityTraversalQueryParamsRow, JumpSpeedCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_JumpSpeedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_JumpSpeedCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bEntrySpeedOverridesJumpCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTraversalQueryParamsRow" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalQueryParamsRow.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bEntrySpeedOverridesJumpCurve_SetBit(void* Obj)
	{
		((FSBZAgilityTraversalQueryParamsRow*)Obj)->bEntrySpeedOverridesJumpCurve = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bEntrySpeedOverridesJumpCurve = { "bEntrySpeedOverridesJumpCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZAgilityTraversalQueryParamsRow), &Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bEntrySpeedOverridesJumpCurve_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bEntrySpeedOverridesJumpCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bEntrySpeedOverridesJumpCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_TraversalSpeedCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTraversalQueryParamsRow" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalQueryParamsRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_TraversalSpeedCurve = { "TraversalSpeedCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityTraversalQueryParamsRow, TraversalSpeedCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_TraversalSpeedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_TraversalSpeedCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bEntrySpeedOverridesTraversalCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTraversalQueryParamsRow" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalQueryParamsRow.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bEntrySpeedOverridesTraversalCurve_SetBit(void* Obj)
	{
		((FSBZAgilityTraversalQueryParamsRow*)Obj)->bEntrySpeedOverridesTraversalCurve = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bEntrySpeedOverridesTraversalCurve = { "bEntrySpeedOverridesTraversalCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZAgilityTraversalQueryParamsRow), &Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bEntrySpeedOverridesTraversalCurve_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bEntrySpeedOverridesTraversalCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bEntrySpeedOverridesTraversalCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_LandingSpeedCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTraversalQueryParamsRow" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalQueryParamsRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_LandingSpeedCurve = { "LandingSpeedCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityTraversalQueryParamsRow, LandingSpeedCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_LandingSpeedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_LandingSpeedCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bEntrySpeedOverridesLandCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTraversalQueryParamsRow" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalQueryParamsRow.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bEntrySpeedOverridesLandCurve_SetBit(void* Obj)
	{
		((FSBZAgilityTraversalQueryParamsRow*)Obj)->bEntrySpeedOverridesLandCurve = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bEntrySpeedOverridesLandCurve = { "bEntrySpeedOverridesLandCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZAgilityTraversalQueryParamsRow), &Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bEntrySpeedOverridesLandCurve_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bEntrySpeedOverridesLandCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bEntrySpeedOverridesLandCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_EyeHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTraversalQueryParamsRow" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalQueryParamsRow.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_EyeHeight = { "EyeHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityTraversalQueryParamsRow, EyeHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_EyeHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_EyeHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_LockCameraData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTraversalQueryParamsRow" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalQueryParamsRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_LockCameraData = { "LockCameraData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityTraversalQueryParamsRow, LockCameraData), Z_Construct_UScriptStruct_FSBZLockCameraData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_LockCameraData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_LockCameraData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_DebugColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTraversalQueryParamsRow" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalQueryParamsRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityTraversalQueryParamsRow, DebugColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_DebugColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_DebugColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_AgilityType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_AgilityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bPerformSprintCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bMustWantToSprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_ObstacleHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_SpeedLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_TraverseDistancePerSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_TriggerDistancePerSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_DistAfterObstaclePerSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_MinFallHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_JumpSpeedCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bEntrySpeedOverridesJumpCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_TraversalSpeedCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bEntrySpeedOverridesTraversalCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_LandingSpeedCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_bEntrySpeedOverridesLandCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_EyeHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_LockCameraData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::NewProp_DebugColor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAgilityTraversalQueryParamsRow",
		sizeof(FSBZAgilityTraversalQueryParamsRow),
		alignof(FSBZAgilityTraversalQueryParamsRow),
		Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAgilityTraversalQueryParamsRow"), sizeof(FSBZAgilityTraversalQueryParamsRow), Get_Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAgilityTraversalQueryParamsRow_Hash() { return 3023117077U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
