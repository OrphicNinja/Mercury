// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAgilitySlideParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAgilitySlideParams() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAgilitySlideParams_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAgilitySlideParams();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLockCameraData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings();
// End Cross Module References
	void USBZAgilitySlideParams::StaticRegisterNativesUSBZAgilitySlideParams()
	{
	}
	UClass* Z_Construct_UClass_USBZAgilitySlideParams_NoRegister()
	{
		return USBZAgilitySlideParams::StaticClass();
	}
	struct Z_Construct_UClass_USBZAgilitySlideParams_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityAngleAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocityAngleAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightSlideOver_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeightSlideOver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpeedCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockCameraData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LockCameraData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToleranceTimeToSlide_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ToleranceTimeToSlide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlideDistanceModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlideDistanceModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlideSpeedModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlideSpeedModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSlopeModifiers_MetaData[];
#endif
		static void NewProp_bUseSlopeModifiers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSlopeModifiers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlopeDistanceModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlopeDistanceModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlopeSpeedModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlopeSpeedModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryHeightTransitionCameraSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EntryHeightTransitionCameraSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExitHeightTransitionCameraSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExitHeightTransitionCameraSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseEntrySpeed_MetaData[];
#endif
		static void NewProp_bUseEntrySpeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseEntrySpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinEntrySpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinEntrySpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntrySpeedBoost_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EntrySpeedBoost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistFromEndToPlayExit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistFromEndToPlayExit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalDistFromEndToPlayExit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocalDistFromEndToPlayExit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelingBackInputAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CancelingBackInputAlpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAgilitySlideParams_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgilitySlideParams_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAgilitySlideParams.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAgilitySlideParams.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_VelocityAngleAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilitySlideParams" },
		{ "ModuleRelativePath", "Public/SBZAgilitySlideParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_VelocityAngleAlpha = { "VelocityAngleAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgilitySlideParams, VelocityAngleAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_VelocityAngleAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_VelocityAngleAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_MaxAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilitySlideParams" },
		{ "ModuleRelativePath", "Public/SBZAgilitySlideParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_MaxAngle = { "MaxAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgilitySlideParams, MaxAngle), METADATA_PARAMS(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_MaxAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_MaxAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilitySlideParams" },
		{ "ModuleRelativePath", "Public/SBZAgilitySlideParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgilitySlideParams, MaxDistance), METADATA_PARAMS(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_MaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_MinDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilitySlideParams" },
		{ "ModuleRelativePath", "Public/SBZAgilitySlideParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_MinDistance = { "MinDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgilitySlideParams, MinDistance), METADATA_PARAMS(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_MinDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_MinDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_HeightSlideOver_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilitySlideParams" },
		{ "ModuleRelativePath", "Public/SBZAgilitySlideParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_HeightSlideOver = { "HeightSlideOver", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgilitySlideParams, HeightSlideOver), METADATA_PARAMS(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_HeightSlideOver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_HeightSlideOver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_SpeedCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilitySlideParams" },
		{ "ModuleRelativePath", "Public/SBZAgilitySlideParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_SpeedCurve = { "SpeedCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgilitySlideParams, SpeedCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_SpeedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_SpeedCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_LockCameraData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilitySlideParams" },
		{ "ModuleRelativePath", "Public/SBZAgilitySlideParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_LockCameraData = { "LockCameraData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgilitySlideParams, LockCameraData), Z_Construct_UScriptStruct_FSBZLockCameraData, METADATA_PARAMS(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_LockCameraData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_LockCameraData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_ToleranceTimeToSlide_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilitySlideParams" },
		{ "ModuleRelativePath", "Public/SBZAgilitySlideParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_ToleranceTimeToSlide = { "ToleranceTimeToSlide", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgilitySlideParams, ToleranceTimeToSlide), METADATA_PARAMS(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_ToleranceTimeToSlide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_ToleranceTimeToSlide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_SlideDistanceModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilitySlideParams" },
		{ "ModuleRelativePath", "Public/SBZAgilitySlideParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_SlideDistanceModifier = { "SlideDistanceModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgilitySlideParams, SlideDistanceModifier), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_SlideDistanceModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_SlideDistanceModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_SlideSpeedModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilitySlideParams" },
		{ "ModuleRelativePath", "Public/SBZAgilitySlideParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_SlideSpeedModifier = { "SlideSpeedModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgilitySlideParams, SlideSpeedModifier), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_SlideSpeedModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_SlideSpeedModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_bUseSlopeModifiers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilitySlideParams" },
		{ "ModuleRelativePath", "Public/SBZAgilitySlideParams.h" },
	};
#endif
	void Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_bUseSlopeModifiers_SetBit(void* Obj)
	{
		((USBZAgilitySlideParams*)Obj)->bUseSlopeModifiers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_bUseSlopeModifiers = { "bUseSlopeModifiers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAgilitySlideParams), &Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_bUseSlopeModifiers_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_bUseSlopeModifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_bUseSlopeModifiers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_SlopeDistanceModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilitySlideParams" },
		{ "ModuleRelativePath", "Public/SBZAgilitySlideParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_SlopeDistanceModifier = { "SlopeDistanceModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgilitySlideParams, SlopeDistanceModifier), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_SlopeDistanceModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_SlopeDistanceModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_SlopeSpeedModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilitySlideParams" },
		{ "ModuleRelativePath", "Public/SBZAgilitySlideParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_SlopeSpeedModifier = { "SlopeSpeedModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgilitySlideParams, SlopeSpeedModifier), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_SlopeSpeedModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_SlopeSpeedModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_EntryHeightTransitionCameraSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilitySlideParams" },
		{ "ModuleRelativePath", "Public/SBZAgilitySlideParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_EntryHeightTransitionCameraSettings = { "EntryHeightTransitionCameraSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgilitySlideParams, EntryHeightTransitionCameraSettings), Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings, METADATA_PARAMS(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_EntryHeightTransitionCameraSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_EntryHeightTransitionCameraSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_ExitHeightTransitionCameraSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilitySlideParams" },
		{ "ModuleRelativePath", "Public/SBZAgilitySlideParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_ExitHeightTransitionCameraSettings = { "ExitHeightTransitionCameraSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgilitySlideParams, ExitHeightTransitionCameraSettings), Z_Construct_UScriptStruct_FSBZHeightTransitionCameraSettings, METADATA_PARAMS(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_ExitHeightTransitionCameraSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_ExitHeightTransitionCameraSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_bUseEntrySpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilitySlideParams" },
		{ "ModuleRelativePath", "Public/SBZAgilitySlideParams.h" },
	};
#endif
	void Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_bUseEntrySpeed_SetBit(void* Obj)
	{
		((USBZAgilitySlideParams*)Obj)->bUseEntrySpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_bUseEntrySpeed = { "bUseEntrySpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAgilitySlideParams), &Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_bUseEntrySpeed_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_bUseEntrySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_bUseEntrySpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_MinEntrySpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilitySlideParams" },
		{ "ModuleRelativePath", "Public/SBZAgilitySlideParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_MinEntrySpeed = { "MinEntrySpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgilitySlideParams, MinEntrySpeed), METADATA_PARAMS(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_MinEntrySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_MinEntrySpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_EntrySpeedBoost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilitySlideParams" },
		{ "ModuleRelativePath", "Public/SBZAgilitySlideParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_EntrySpeedBoost = { "EntrySpeedBoost", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgilitySlideParams, EntrySpeedBoost), METADATA_PARAMS(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_EntrySpeedBoost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_EntrySpeedBoost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_DistFromEndToPlayExit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilitySlideParams" },
		{ "ModuleRelativePath", "Public/SBZAgilitySlideParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_DistFromEndToPlayExit = { "DistFromEndToPlayExit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgilitySlideParams, DistFromEndToPlayExit), METADATA_PARAMS(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_DistFromEndToPlayExit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_DistFromEndToPlayExit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_LocalDistFromEndToPlayExit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilitySlideParams" },
		{ "ModuleRelativePath", "Public/SBZAgilitySlideParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_LocalDistFromEndToPlayExit = { "LocalDistFromEndToPlayExit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgilitySlideParams, LocalDistFromEndToPlayExit), METADATA_PARAMS(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_LocalDistFromEndToPlayExit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_LocalDistFromEndToPlayExit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_CancelingBackInputAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilitySlideParams" },
		{ "ModuleRelativePath", "Public/SBZAgilitySlideParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_CancelingBackInputAlpha = { "CancelingBackInputAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgilitySlideParams, CancelingBackInputAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_CancelingBackInputAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_CancelingBackInputAlpha_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAgilitySlideParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_VelocityAngleAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_MaxAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_MaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_MinDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_HeightSlideOver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_SpeedCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_LockCameraData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_ToleranceTimeToSlide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_SlideDistanceModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_SlideSpeedModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_bUseSlopeModifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_SlopeDistanceModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_SlopeSpeedModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_EntryHeightTransitionCameraSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_ExitHeightTransitionCameraSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_bUseEntrySpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_MinEntrySpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_EntrySpeedBoost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_DistFromEndToPlayExit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_LocalDistFromEndToPlayExit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgilitySlideParams_Statics::NewProp_CancelingBackInputAlpha,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAgilitySlideParams_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAgilitySlideParams>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAgilitySlideParams_Statics::ClassParams = {
		&USBZAgilitySlideParams::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAgilitySlideParams_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilitySlideParams_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAgilitySlideParams_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilitySlideParams_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAgilitySlideParams()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAgilitySlideParams_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAgilitySlideParams, 1808423991);
	template<> STARBREEZE_API UClass* StaticClass<USBZAgilitySlideParams>()
	{
		return USBZAgilitySlideParams::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAgilitySlideParams(Z_Construct_UClass_USBZAgilitySlideParams, &USBZAgilitySlideParams::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAgilitySlideParams"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAgilitySlideParams);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
