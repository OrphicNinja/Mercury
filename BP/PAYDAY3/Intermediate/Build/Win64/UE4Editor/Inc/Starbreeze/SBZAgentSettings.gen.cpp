// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAgentSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAgentSettings() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZAgentSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAgentSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAgentSettings, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAgentSettings"), sizeof(FSBZAgentSettings), Get_Z_Construct_UScriptStruct_FSBZAgentSettings_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAgentSettings>()
{
	return FSBZAgentSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAgentSettings(FSBZAgentSettings::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAgentSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentSettings
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentSettings()
	{
		UScriptStruct::DeferCppStructOps<FSBZAgentSettings>(FName(TEXT("SBZAgentSettings")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgentSettings;
	struct Z_Construct_UScriptStruct_FSBZAgentSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAngularSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAngularSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Friction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeighbourDetectionRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NeighbourDetectionRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavProjection_MetaData[];
#endif
		static void NewProp_bNavProjection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavProjection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavMeshProjectionInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NavMeshProjectionInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavMeshProjectionHeightScaleUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NavMeshProjectionHeightScaleUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavMeshProjectionHeightScaleDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NavMeshProjectionHeightScaleDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinNavMeshProjectionHeightUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinNavMeshProjectionHeightUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavMeshProjectionInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NavMeshProjectionInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RVOGroupMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RVOGroupMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RVOGroupsToAvoid_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RVOGroupsToAvoid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RVOGroupsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RVOGroupsToIgnore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RVOWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RVOWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RVOTestRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RVOTestRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JogSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JogSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAgentSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAgentSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_MaxAcceleration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentSettings" },
		{ "ModuleRelativePath", "Public/SBZAgentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_MaxAcceleration = { "MaxAcceleration", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentSettings, MaxAcceleration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_MaxAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_MaxAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_MaxAngularSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentSettings" },
		{ "ModuleRelativePath", "Public/SBZAgentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_MaxAngularSpeed = { "MaxAngularSpeed", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentSettings, MaxAngularSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_MaxAngularSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_MaxAngularSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_Friction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentSettings" },
		{ "ModuleRelativePath", "Public/SBZAgentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentSettings, Friction), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_Friction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_Friction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_Radius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentSettings" },
		{ "ModuleRelativePath", "Public/SBZAgentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentSettings, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_TraceRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentSettings" },
		{ "ModuleRelativePath", "Public/SBZAgentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_TraceRadius = { "TraceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentSettings, TraceRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_TraceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_TraceRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_Height_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentSettings" },
		{ "ModuleRelativePath", "Public/SBZAgentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentSettings, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_NeighbourDetectionRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentSettings" },
		{ "ModuleRelativePath", "Public/SBZAgentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_NeighbourDetectionRange = { "NeighbourDetectionRange", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentSettings, NeighbourDetectionRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_NeighbourDetectionRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_NeighbourDetectionRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_bNavProjection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentSettings" },
		{ "ModuleRelativePath", "Public/SBZAgentSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_bNavProjection_SetBit(void* Obj)
	{
		((FSBZAgentSettings*)Obj)->bNavProjection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_bNavProjection = { "bNavProjection", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSBZAgentSettings), &Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_bNavProjection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_bNavProjection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_bNavProjection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_NavMeshProjectionInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentSettings" },
		{ "ModuleRelativePath", "Public/SBZAgentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_NavMeshProjectionInterval = { "NavMeshProjectionInterval", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentSettings, NavMeshProjectionInterval), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_NavMeshProjectionInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_NavMeshProjectionInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_NavMeshProjectionHeightScaleUp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentSettings" },
		{ "ModuleRelativePath", "Public/SBZAgentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_NavMeshProjectionHeightScaleUp = { "NavMeshProjectionHeightScaleUp", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentSettings, NavMeshProjectionHeightScaleUp), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_NavMeshProjectionHeightScaleUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_NavMeshProjectionHeightScaleUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_NavMeshProjectionHeightScaleDown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentSettings" },
		{ "ModuleRelativePath", "Public/SBZAgentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_NavMeshProjectionHeightScaleDown = { "NavMeshProjectionHeightScaleDown", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentSettings, NavMeshProjectionHeightScaleDown), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_NavMeshProjectionHeightScaleDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_NavMeshProjectionHeightScaleDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_MinNavMeshProjectionHeightUp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentSettings" },
		{ "ModuleRelativePath", "Public/SBZAgentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_MinNavMeshProjectionHeightUp = { "MinNavMeshProjectionHeightUp", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentSettings, MinNavMeshProjectionHeightUp), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_MinNavMeshProjectionHeightUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_MinNavMeshProjectionHeightUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_NavMeshProjectionInterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentSettings" },
		{ "ModuleRelativePath", "Public/SBZAgentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_NavMeshProjectionInterpSpeed = { "NavMeshProjectionInterpSpeed", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentSettings, NavMeshProjectionInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_NavMeshProjectionInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_NavMeshProjectionInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_RVOGroupMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentSettings" },
		{ "ModuleRelativePath", "Public/SBZAgentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_RVOGroupMask = { "RVOGroupMask", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentSettings, RVOGroupMask), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_RVOGroupMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_RVOGroupMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_RVOGroupsToAvoid_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentSettings" },
		{ "ModuleRelativePath", "Public/SBZAgentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_RVOGroupsToAvoid = { "RVOGroupsToAvoid", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentSettings, RVOGroupsToAvoid), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_RVOGroupsToAvoid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_RVOGroupsToAvoid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_RVOGroupsToIgnore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentSettings" },
		{ "ModuleRelativePath", "Public/SBZAgentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_RVOGroupsToIgnore = { "RVOGroupsToIgnore", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentSettings, RVOGroupsToIgnore), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_RVOGroupsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_RVOGroupsToIgnore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_RVOWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentSettings" },
		{ "ModuleRelativePath", "Public/SBZAgentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_RVOWeight = { "RVOWeight", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentSettings, RVOWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_RVOWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_RVOWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_RVOTestRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentSettings" },
		{ "ModuleRelativePath", "Public/SBZAgentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_RVOTestRadius = { "RVOTestRadius", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentSettings, RVOTestRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_RVOTestRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_RVOTestRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_JogSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgentSettings" },
		{ "ModuleRelativePath", "Public/SBZAgentSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_JogSpeed = { "JogSpeed", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgentSettings, JogSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_JogSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_JogSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_MaxAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_MaxAngularSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_Friction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_TraceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_NeighbourDetectionRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_bNavProjection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_NavMeshProjectionInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_NavMeshProjectionHeightScaleUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_NavMeshProjectionHeightScaleDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_MinNavMeshProjectionHeightUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_NavMeshProjectionInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_RVOGroupMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_RVOGroupsToAvoid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_RVOGroupsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_RVOWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_RVOTestRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::NewProp_JogSpeed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAgentSettings",
		sizeof(FSBZAgentSettings),
		alignof(FSBZAgentSettings),
		Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAgentSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAgentSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAgentSettings"), sizeof(FSBZAgentSettings), Get_Z_Construct_UScriptStruct_FSBZAgentSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAgentSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAgentSettings_Hash() { return 2557768098U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
