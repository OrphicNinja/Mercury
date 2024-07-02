// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZFlooredIntervalDetectionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZFlooredIntervalDetectionSettings() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZFlooredIntervalDetectionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZFlooredIntervalDetectionSettings"), sizeof(FSBZFlooredIntervalDetectionSettings), Get_Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZFlooredIntervalDetectionSettings>()
{
	return FSBZFlooredIntervalDetectionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZFlooredIntervalDetectionSettings(FSBZFlooredIntervalDetectionSettings::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZFlooredIntervalDetectionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZFlooredIntervalDetectionSettings
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZFlooredIntervalDetectionSettings()
	{
		UScriptStruct::DeferCppStructOps<FSBZFlooredIntervalDetectionSettings>(FName(TEXT("SBZFlooredIntervalDetectionSettings")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZFlooredIntervalDetectionSettings;
	struct Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDisablingCurve_MetaData[];
#endif
		static void NewProp_bUseDisablingCurve_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDisablingCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisablingCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DisablingCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDisablingFrameInterval_MetaData[];
#endif
		static void NewProp_bUseDisablingFrameInterval_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDisablingFrameInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt16PropertyParams NewProp_MinFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt16PropertyParams NewProp_MaxFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToeBaseHeightThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ToeBaseHeightThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToeBasePitchThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ToeBasePitchThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorBoneHeightThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloorBoneHeightThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorBonePitchThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloorBonePitchThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoComputeLooping_MetaData[];
#endif
		static void NewProp_bAutoComputeLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoComputeLooping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLooping_MetaData[];
#endif
		static void NewProp_bIsLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLooping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDoingToeToTip_MetaData[];
#endif
		static void NewProp_bIsDoingToeToTip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDoingToeToTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[];
#endif
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinIntervalFrameCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinIntervalFrameCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateContactCurves_MetaData[];
#endif
		static void NewProp_bCreateContactCurves_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateContactCurves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateContactNotifies_MetaData[];
#endif
		static void NewProp_bCreateContactNotifies_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateContactNotifies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootContactNotifyTrackName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FootContactNotifyTrackName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RootBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftCurveName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftCurveName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightCurveName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightCurveName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftFloorBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftFloorBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftToeBaseBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftToeBaseBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightFloorBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightFloorBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightToeBaseBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightToeBaseBoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZFlooredIntervalDetectionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZFlooredIntervalDetectionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bUseDisablingCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFlooredIntervalDetectionSettings" },
		{ "ModuleRelativePath", "Public/SBZFlooredIntervalDetectionSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bUseDisablingCurve_SetBit(void* Obj)
	{
		((FSBZFlooredIntervalDetectionSettings*)Obj)->bUseDisablingCurve = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bUseDisablingCurve = { "bUseDisablingCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZFlooredIntervalDetectionSettings), &Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bUseDisablingCurve_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bUseDisablingCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bUseDisablingCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_DisablingCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFlooredIntervalDetectionSettings" },
		{ "ModuleRelativePath", "Public/SBZFlooredIntervalDetectionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_DisablingCurve = { "DisablingCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFlooredIntervalDetectionSettings, DisablingCurve), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_DisablingCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_DisablingCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bUseDisablingFrameInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFlooredIntervalDetectionSettings" },
		{ "ModuleRelativePath", "Public/SBZFlooredIntervalDetectionSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bUseDisablingFrameInterval_SetBit(void* Obj)
	{
		((FSBZFlooredIntervalDetectionSettings*)Obj)->bUseDisablingFrameInterval = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bUseDisablingFrameInterval = { "bUseDisablingFrameInterval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZFlooredIntervalDetectionSettings), &Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bUseDisablingFrameInterval_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bUseDisablingFrameInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bUseDisablingFrameInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_MinFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFlooredIntervalDetectionSettings" },
		{ "ModuleRelativePath", "Public/SBZFlooredIntervalDetectionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_MinFrame = { "MinFrame", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFlooredIntervalDetectionSettings, MinFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_MinFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_MinFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_MaxFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFlooredIntervalDetectionSettings" },
		{ "ModuleRelativePath", "Public/SBZFlooredIntervalDetectionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_MaxFrame = { "MaxFrame", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFlooredIntervalDetectionSettings, MaxFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_MaxFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_MaxFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_ToeBaseHeightThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFlooredIntervalDetectionSettings" },
		{ "ModuleRelativePath", "Public/SBZFlooredIntervalDetectionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_ToeBaseHeightThreshold = { "ToeBaseHeightThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFlooredIntervalDetectionSettings, ToeBaseHeightThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_ToeBaseHeightThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_ToeBaseHeightThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_ToeBasePitchThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFlooredIntervalDetectionSettings" },
		{ "ModuleRelativePath", "Public/SBZFlooredIntervalDetectionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_ToeBasePitchThreshold = { "ToeBasePitchThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFlooredIntervalDetectionSettings, ToeBasePitchThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_ToeBasePitchThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_ToeBasePitchThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_FloorBoneHeightThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFlooredIntervalDetectionSettings" },
		{ "ModuleRelativePath", "Public/SBZFlooredIntervalDetectionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_FloorBoneHeightThreshold = { "FloorBoneHeightThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFlooredIntervalDetectionSettings, FloorBoneHeightThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_FloorBoneHeightThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_FloorBoneHeightThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_FloorBonePitchThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFlooredIntervalDetectionSettings" },
		{ "ModuleRelativePath", "Public/SBZFlooredIntervalDetectionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_FloorBonePitchThreshold = { "FloorBonePitchThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFlooredIntervalDetectionSettings, FloorBonePitchThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_FloorBonePitchThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_FloorBonePitchThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bAutoComputeLooping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFlooredIntervalDetectionSettings" },
		{ "ModuleRelativePath", "Public/SBZFlooredIntervalDetectionSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bAutoComputeLooping_SetBit(void* Obj)
	{
		((FSBZFlooredIntervalDetectionSettings*)Obj)->bAutoComputeLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bAutoComputeLooping = { "bAutoComputeLooping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZFlooredIntervalDetectionSettings), &Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bAutoComputeLooping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bAutoComputeLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bAutoComputeLooping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bIsLooping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFlooredIntervalDetectionSettings" },
		{ "ModuleRelativePath", "Public/SBZFlooredIntervalDetectionSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bIsLooping_SetBit(void* Obj)
	{
		((FSBZFlooredIntervalDetectionSettings*)Obj)->bIsLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bIsLooping = { "bIsLooping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZFlooredIntervalDetectionSettings), &Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bIsLooping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bIsLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bIsLooping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bIsDoingToeToTip_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFlooredIntervalDetectionSettings" },
		{ "ModuleRelativePath", "Public/SBZFlooredIntervalDetectionSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bIsDoingToeToTip_SetBit(void* Obj)
	{
		((FSBZFlooredIntervalDetectionSettings*)Obj)->bIsDoingToeToTip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bIsDoingToeToTip = { "bIsDoingToeToTip", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZFlooredIntervalDetectionSettings), &Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bIsDoingToeToTip_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bIsDoingToeToTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bIsDoingToeToTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bDebug_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFlooredIntervalDetectionSettings" },
		{ "ModuleRelativePath", "Public/SBZFlooredIntervalDetectionSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((FSBZFlooredIntervalDetectionSettings*)Obj)->bDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZFlooredIntervalDetectionSettings), &Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_MinIntervalFrameCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFlooredIntervalDetectionSettings" },
		{ "ModuleRelativePath", "Public/SBZFlooredIntervalDetectionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_MinIntervalFrameCount = { "MinIntervalFrameCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFlooredIntervalDetectionSettings, MinIntervalFrameCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_MinIntervalFrameCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_MinIntervalFrameCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bCreateContactCurves_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFlooredIntervalDetectionSettings" },
		{ "ModuleRelativePath", "Public/SBZFlooredIntervalDetectionSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bCreateContactCurves_SetBit(void* Obj)
	{
		((FSBZFlooredIntervalDetectionSettings*)Obj)->bCreateContactCurves = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bCreateContactCurves = { "bCreateContactCurves", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZFlooredIntervalDetectionSettings), &Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bCreateContactCurves_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bCreateContactCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bCreateContactCurves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bCreateContactNotifies_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFlooredIntervalDetectionSettings" },
		{ "ModuleRelativePath", "Public/SBZFlooredIntervalDetectionSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bCreateContactNotifies_SetBit(void* Obj)
	{
		((FSBZFlooredIntervalDetectionSettings*)Obj)->bCreateContactNotifies = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bCreateContactNotifies = { "bCreateContactNotifies", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZFlooredIntervalDetectionSettings), &Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bCreateContactNotifies_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bCreateContactNotifies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bCreateContactNotifies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_FootContactNotifyTrackName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFlooredIntervalDetectionSettings" },
		{ "ModuleRelativePath", "Public/SBZFlooredIntervalDetectionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_FootContactNotifyTrackName = { "FootContactNotifyTrackName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFlooredIntervalDetectionSettings, FootContactNotifyTrackName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_FootContactNotifyTrackName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_FootContactNotifyTrackName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_RootBoneName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFlooredIntervalDetectionSettings" },
		{ "ModuleRelativePath", "Public/SBZFlooredIntervalDetectionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_RootBoneName = { "RootBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFlooredIntervalDetectionSettings, RootBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_RootBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_RootBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_LeftCurveName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFlooredIntervalDetectionSettings" },
		{ "ModuleRelativePath", "Public/SBZFlooredIntervalDetectionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_LeftCurveName = { "LeftCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFlooredIntervalDetectionSettings, LeftCurveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_LeftCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_LeftCurveName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_RightCurveName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFlooredIntervalDetectionSettings" },
		{ "ModuleRelativePath", "Public/SBZFlooredIntervalDetectionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_RightCurveName = { "RightCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFlooredIntervalDetectionSettings, RightCurveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_RightCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_RightCurveName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_LeftFloorBoneName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFlooredIntervalDetectionSettings" },
		{ "ModuleRelativePath", "Public/SBZFlooredIntervalDetectionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_LeftFloorBoneName = { "LeftFloorBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFlooredIntervalDetectionSettings, LeftFloorBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_LeftFloorBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_LeftFloorBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_LeftToeBaseBoneName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFlooredIntervalDetectionSettings" },
		{ "ModuleRelativePath", "Public/SBZFlooredIntervalDetectionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_LeftToeBaseBoneName = { "LeftToeBaseBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFlooredIntervalDetectionSettings, LeftToeBaseBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_LeftToeBaseBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_LeftToeBaseBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_RightFloorBoneName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFlooredIntervalDetectionSettings" },
		{ "ModuleRelativePath", "Public/SBZFlooredIntervalDetectionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_RightFloorBoneName = { "RightFloorBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFlooredIntervalDetectionSettings, RightFloorBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_RightFloorBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_RightFloorBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_RightToeBaseBoneName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFlooredIntervalDetectionSettings" },
		{ "ModuleRelativePath", "Public/SBZFlooredIntervalDetectionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_RightToeBaseBoneName = { "RightToeBaseBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZFlooredIntervalDetectionSettings, RightToeBaseBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_RightToeBaseBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_RightToeBaseBoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bUseDisablingCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_DisablingCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bUseDisablingFrameInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_MinFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_MaxFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_ToeBaseHeightThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_ToeBasePitchThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_FloorBoneHeightThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_FloorBonePitchThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bAutoComputeLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bIsLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bIsDoingToeToTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_MinIntervalFrameCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bCreateContactCurves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_bCreateContactNotifies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_FootContactNotifyTrackName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_RootBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_LeftCurveName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_RightCurveName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_LeftFloorBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_LeftToeBaseBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_RightFloorBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::NewProp_RightToeBaseBoneName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZFlooredIntervalDetectionSettings",
		sizeof(FSBZFlooredIntervalDetectionSettings),
		alignof(FSBZFlooredIntervalDetectionSettings),
		Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZFlooredIntervalDetectionSettings"), sizeof(FSBZFlooredIntervalDetectionSettings), Get_Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZFlooredIntervalDetectionSettings_Hash() { return 747288629U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
