// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkSpatialAudioSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSpatialAudioSettings() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSpatialAudioSettings();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
class UScriptStruct* FAkSpatialAudioSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkSpatialAudioSettings, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkSpatialAudioSettings"), sizeof(FAkSpatialAudioSettings), Get_Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkSpatialAudioSettings>()
{
	return FAkSpatialAudioSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkSpatialAudioSettings(FAkSpatialAudioSettings::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkSpatialAudioSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkSpatialAudioSettings
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkSpatialAudioSettings()
	{
		UScriptStruct::DeferCppStructOps<FAkSpatialAudioSettings>(FName(TEXT("AkSpatialAudioSettings")));
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkSpatialAudioSettings;
	struct Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSoundPropagationDepth_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaxSoundPropagationDepth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfPrimaryRays_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumberOfPrimaryRays;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReflectionOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ReflectionOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumPathLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumPathLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPULimitPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CPULimitPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableDiffractionOnReflections_MetaData[];
#endif
		static void NewProp_EnableDiffractionOnReflections_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableDiffractionOnReflections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableGeometricDiffractionAndTransmission_MetaData[];
#endif
		static void NewProp_EnableGeometricDiffractionAndTransmission_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableGeometricDiffractionAndTransmission;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CalcEmitterVirtualPosition_MetaData[];
#endif
		static void NewProp_CalcEmitterVirtualPosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CalcEmitterVirtualPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseObstruction_MetaData[];
#endif
		static void NewProp_UseObstruction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseObstruction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseOcclusion_MetaData[];
#endif
		static void NewProp_UseOcclusion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseOcclusion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkSpatialAudioSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkSpatialAudioSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxSoundPropagationDepth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSpatialAudioSettings" },
		{ "ModuleRelativePath", "Public/AkSpatialAudioSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxSoundPropagationDepth = { "MaxSoundPropagationDepth", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, MaxSoundPropagationDepth), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxSoundPropagationDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxSoundPropagationDepth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MovementThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSpatialAudioSettings" },
		{ "ModuleRelativePath", "Public/AkSpatialAudioSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MovementThreshold = { "MovementThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, MovementThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MovementThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MovementThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_NumberOfPrimaryRays_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSpatialAudioSettings" },
		{ "ModuleRelativePath", "Public/AkSpatialAudioSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_NumberOfPrimaryRays = { "NumberOfPrimaryRays", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, NumberOfPrimaryRays), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_NumberOfPrimaryRays_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_NumberOfPrimaryRays_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_ReflectionOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSpatialAudioSettings" },
		{ "ModuleRelativePath", "Public/AkSpatialAudioSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_ReflectionOrder = { "ReflectionOrder", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, ReflectionOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_ReflectionOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_ReflectionOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaximumPathLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSpatialAudioSettings" },
		{ "ModuleRelativePath", "Public/AkSpatialAudioSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaximumPathLength = { "MaximumPathLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, MaximumPathLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaximumPathLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaximumPathLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CPULimitPercentage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSpatialAudioSettings" },
		{ "ModuleRelativePath", "Public/AkSpatialAudioSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CPULimitPercentage = { "CPULimitPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, CPULimitPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CPULimitPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CPULimitPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_EnableDiffractionOnReflections_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSpatialAudioSettings" },
		{ "ModuleRelativePath", "Public/AkSpatialAudioSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_EnableDiffractionOnReflections_SetBit(void* Obj)
	{
		((FAkSpatialAudioSettings*)Obj)->EnableDiffractionOnReflections = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_EnableDiffractionOnReflections = { "EnableDiffractionOnReflections", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAkSpatialAudioSettings), &Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_EnableDiffractionOnReflections_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_EnableDiffractionOnReflections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_EnableDiffractionOnReflections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_EnableGeometricDiffractionAndTransmission_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSpatialAudioSettings" },
		{ "ModuleRelativePath", "Public/AkSpatialAudioSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_EnableGeometricDiffractionAndTransmission_SetBit(void* Obj)
	{
		((FAkSpatialAudioSettings*)Obj)->EnableGeometricDiffractionAndTransmission = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_EnableGeometricDiffractionAndTransmission = { "EnableGeometricDiffractionAndTransmission", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAkSpatialAudioSettings), &Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_EnableGeometricDiffractionAndTransmission_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_EnableGeometricDiffractionAndTransmission_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_EnableGeometricDiffractionAndTransmission_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CalcEmitterVirtualPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSpatialAudioSettings" },
		{ "ModuleRelativePath", "Public/AkSpatialAudioSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CalcEmitterVirtualPosition_SetBit(void* Obj)
	{
		((FAkSpatialAudioSettings*)Obj)->CalcEmitterVirtualPosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CalcEmitterVirtualPosition = { "CalcEmitterVirtualPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAkSpatialAudioSettings), &Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CalcEmitterVirtualPosition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CalcEmitterVirtualPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CalcEmitterVirtualPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_UseObstruction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSpatialAudioSettings" },
		{ "ModuleRelativePath", "Public/AkSpatialAudioSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_UseObstruction_SetBit(void* Obj)
	{
		((FAkSpatialAudioSettings*)Obj)->UseObstruction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_UseObstruction = { "UseObstruction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAkSpatialAudioSettings), &Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_UseObstruction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_UseObstruction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_UseObstruction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_UseOcclusion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSpatialAudioSettings" },
		{ "ModuleRelativePath", "Public/AkSpatialAudioSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_UseOcclusion_SetBit(void* Obj)
	{
		((FAkSpatialAudioSettings*)Obj)->UseOcclusion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_UseOcclusion = { "UseOcclusion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAkSpatialAudioSettings), &Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_UseOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_UseOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_UseOcclusion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxSoundPropagationDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MovementThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_NumberOfPrimaryRays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_ReflectionOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaximumPathLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CPULimitPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_EnableDiffractionOnReflections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_EnableGeometricDiffractionAndTransmission,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CalcEmitterVirtualPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_UseObstruction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_UseOcclusion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkSpatialAudioSettings",
		sizeof(FAkSpatialAudioSettings),
		alignof(FAkSpatialAudioSettings),
		Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkSpatialAudioSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkSpatialAudioSettings"), sizeof(FAkSpatialAudioSettings), Get_Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Hash() { return 1240175377U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
