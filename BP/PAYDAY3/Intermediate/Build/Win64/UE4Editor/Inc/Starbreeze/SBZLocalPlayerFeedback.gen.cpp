// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLocalPlayerFeedback.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLocalPlayerFeedback() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLocalPlayerFeedback();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPostProcessSettingsPresetDataAsset_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLockCameraData();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackEffect_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerCameraManager_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTransformCameraModifier_NoRegister();
// End Cross Module References
	void USBZLocalPlayerFeedback::StaticRegisterNativesUSBZLocalPlayerFeedback()
	{
	}
	UClass* Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister()
	{
		return USBZLocalPlayerFeedback::StaticClass();
	}
	struct Z_Construct_UClass_USBZLocalPlayerFeedback_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFirstPlayModifier_MetaData[];
#endif
		static void NewProp_bUseFirstPlayModifier_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFirstPlayModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPlayCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FirstPlayCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PostProcessSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessFadeInBlendCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostProcessFadeInBlendCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessBlendCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostProcessBlendCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessFadeOutBlendCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostProcessFadeOutBlendCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoopingCurve_MetaData[];
#endif
		static void NewProp_bLoopingCurve_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoopingCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SustainTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SustainTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoFadeOut_MetaData[];
#endif
		static void NewProp_bAutoFadeOut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoFadeOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleLifeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParticleLifeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraShakeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CameraShakeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraShakeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraShakeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraShakeScaleFirstPlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraShakeScaleFirstPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldOfViewAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FieldOfViewAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopPassFieldOfViewAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TopPassFieldOfViewAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldOfViewOverridenAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FieldOfViewOverridenAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraPositionModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraPositionModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraRotationModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraRotationModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandRigModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HandRigModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCameraLocked_MetaData[];
#endif
		static void NewProp_bIsCameraLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCameraLocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockCameraData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LockCameraData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AkStartEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkStartEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AkStopEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkStopEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AkStopEventTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AkStopEventTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceFeedbackEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForceFeedbackEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioRTPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AudioRTPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioRTPCValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AudioRTPCValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverridenFOVPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OverridenFOVPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRemoveAtEndOfActionPhase_MetaData[];
#endif
		static void NewProp_bRemoveAtEndOfActionPhase_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveAtEndOfActionPhase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensParticleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LensParticleComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraShake_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraShake;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AkComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformCameraModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TransformCameraModifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLocalPlayerFeedback.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bUseFirstPlayModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	void Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bUseFirstPlayModifier_SetBit(void* Obj)
	{
		((USBZLocalPlayerFeedback*)Obj)->bUseFirstPlayModifier = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bUseFirstPlayModifier = { "bUseFirstPlayModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZLocalPlayerFeedback), &Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bUseFirstPlayModifier_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bUseFirstPlayModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bUseFirstPlayModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_FirstPlayCooldown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_FirstPlayCooldown = { "FirstPlayCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLocalPlayerFeedback, FirstPlayCooldown), METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_FirstPlayCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_FirstPlayCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_PostProcessSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLocalPlayerFeedback, PostProcessSettings), Z_Construct_UClass_USBZPostProcessSettingsPresetDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_PostProcessSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_PostProcessSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_Intensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLocalPlayerFeedback, Intensity), METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_PostProcessFadeInBlendCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_PostProcessFadeInBlendCurve = { "PostProcessFadeInBlendCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLocalPlayerFeedback, PostProcessFadeInBlendCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_PostProcessFadeInBlendCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_PostProcessFadeInBlendCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_PostProcessBlendCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_PostProcessBlendCurve = { "PostProcessBlendCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLocalPlayerFeedback, PostProcessBlendCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_PostProcessBlendCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_PostProcessBlendCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_PostProcessFadeOutBlendCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_PostProcessFadeOutBlendCurve = { "PostProcessFadeOutBlendCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLocalPlayerFeedback, PostProcessFadeOutBlendCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_PostProcessFadeOutBlendCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_PostProcessFadeOutBlendCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bLoopingCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	void Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bLoopingCurve_SetBit(void* Obj)
	{
		((USBZLocalPlayerFeedback*)Obj)->bLoopingCurve = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bLoopingCurve = { "bLoopingCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZLocalPlayerFeedback), &Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bLoopingCurve_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bLoopingCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bLoopingCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_SustainTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_SustainTime = { "SustainTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLocalPlayerFeedback, SustainTime), METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_SustainTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_SustainTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bAutoFadeOut_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	void Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bAutoFadeOut_SetBit(void* Obj)
	{
		((USBZLocalPlayerFeedback*)Obj)->bAutoFadeOut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bAutoFadeOut = { "bAutoFadeOut", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZLocalPlayerFeedback), &Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bAutoFadeOut_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bAutoFadeOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bAutoFadeOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_ParticleSystem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_ParticleSystem = { "ParticleSystem", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLocalPlayerFeedback, ParticleSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_ParticleSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_ParticleSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_ParticleLifeTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_ParticleLifeTime = { "ParticleLifeTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLocalPlayerFeedback, ParticleLifeTime), METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_ParticleLifeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_ParticleLifeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraShakeClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraShakeClass = { "CameraShakeClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLocalPlayerFeedback, CameraShakeClass), Z_Construct_UClass_UCameraShakeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraShakeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraShakeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraShakeScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraShakeScale = { "CameraShakeScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLocalPlayerFeedback, CameraShakeScale), METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraShakeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraShakeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraShakeScaleFirstPlay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraShakeScaleFirstPlay = { "CameraShakeScaleFirstPlay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLocalPlayerFeedback, CameraShakeScaleFirstPlay), METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraShakeScaleFirstPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraShakeScaleFirstPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_FieldOfViewAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_FieldOfViewAngle = { "FieldOfViewAngle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLocalPlayerFeedback, FieldOfViewAngle), METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_FieldOfViewAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_FieldOfViewAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_TopPassFieldOfViewAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_TopPassFieldOfViewAngle = { "TopPassFieldOfViewAngle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLocalPlayerFeedback, TopPassFieldOfViewAngle), METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_TopPassFieldOfViewAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_TopPassFieldOfViewAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_FieldOfViewOverridenAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_FieldOfViewOverridenAngle = { "FieldOfViewOverridenAngle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLocalPlayerFeedback, FieldOfViewOverridenAngle), METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_FieldOfViewOverridenAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_FieldOfViewOverridenAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraPositionModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraPositionModifier = { "CameraPositionModifier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLocalPlayerFeedback, CameraPositionModifier), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraPositionModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraPositionModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraRotationModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraRotationModifier = { "CameraRotationModifier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLocalPlayerFeedback, CameraRotationModifier), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraRotationModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraRotationModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_HandRigModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_HandRigModifier = { "HandRigModifier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLocalPlayerFeedback, HandRigModifier), METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_HandRigModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_HandRigModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bIsCameraLocked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	void Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bIsCameraLocked_SetBit(void* Obj)
	{
		((USBZLocalPlayerFeedback*)Obj)->bIsCameraLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bIsCameraLocked = { "bIsCameraLocked", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZLocalPlayerFeedback), &Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bIsCameraLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bIsCameraLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bIsCameraLocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_LockCameraData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_LockCameraData = { "LockCameraData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLocalPlayerFeedback, LockCameraData), Z_Construct_UScriptStruct_FSBZLockCameraData, METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_LockCameraData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_LockCameraData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_AkStartEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_AkStartEvent = { "AkStartEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLocalPlayerFeedback, AkStartEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_AkStartEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_AkStartEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_AkStopEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_AkStopEvent = { "AkStopEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLocalPlayerFeedback, AkStopEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_AkStopEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_AkStopEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_AkStopEventTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_AkStopEventTime = { "AkStopEventTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLocalPlayerFeedback, AkStopEventTime), METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_AkStopEventTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_AkStopEventTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_ForceFeedbackEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_ForceFeedbackEffect = { "ForceFeedbackEffect", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLocalPlayerFeedback, ForceFeedbackEffect), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_ForceFeedbackEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_ForceFeedbackEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_AudioRTPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_AudioRTPC = { "AudioRTPC", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLocalPlayerFeedback, AudioRTPC), METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_AudioRTPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_AudioRTPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_AudioRTPCValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_AudioRTPCValue = { "AudioRTPCValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLocalPlayerFeedback, AudioRTPCValue), METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_AudioRTPCValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_AudioRTPCValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLocalPlayerFeedback, Priority), METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_OverridenFOVPriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_OverridenFOVPriority = { "OverridenFOVPriority", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLocalPlayerFeedback, OverridenFOVPriority), METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_OverridenFOVPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_OverridenFOVPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bRemoveAtEndOfActionPhase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	void Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bRemoveAtEndOfActionPhase_SetBit(void* Obj)
	{
		((USBZLocalPlayerFeedback*)Obj)->bRemoveAtEndOfActionPhase = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bRemoveAtEndOfActionPhase = { "bRemoveAtEndOfActionPhase", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZLocalPlayerFeedback), &Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bRemoveAtEndOfActionPhase_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bRemoveAtEndOfActionPhase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bRemoveAtEndOfActionPhase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraOwner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraOwner = { "CameraOwner", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLocalPlayerFeedback, CameraOwner), Z_Construct_UClass_ASBZPlayerCameraManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_LensParticleComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_LensParticleComponent = { "LensParticleComponent", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLocalPlayerFeedback, LensParticleComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_LensParticleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_LensParticleComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraShake_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraShake = { "CameraShake", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLocalPlayerFeedback, CameraShake), Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraShake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraShake_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_AkComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_AkComponent = { "AkComponent", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLocalPlayerFeedback, AkComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_AkComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_AkComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_TransformCameraModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedback" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedback.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_TransformCameraModifier = { "TransformCameraModifier", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLocalPlayerFeedback, TransformCameraModifier), Z_Construct_UClass_USBZTransformCameraModifier_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_TransformCameraModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_TransformCameraModifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bUseFirstPlayModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_FirstPlayCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_PostProcessSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_Intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_PostProcessFadeInBlendCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_PostProcessBlendCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_PostProcessFadeOutBlendCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bLoopingCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_SustainTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bAutoFadeOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_ParticleSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_ParticleLifeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraShakeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraShakeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraShakeScaleFirstPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_FieldOfViewAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_TopPassFieldOfViewAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_FieldOfViewOverridenAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraPositionModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraRotationModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_HandRigModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bIsCameraLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_LockCameraData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_AkStartEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_AkStopEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_AkStopEventTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_ForceFeedbackEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_AudioRTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_AudioRTPCValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_OverridenFOVPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_bRemoveAtEndOfActionPhase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_LensParticleComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_CameraShake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_AkComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::NewProp_TransformCameraModifier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZLocalPlayerFeedback>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::ClassParams = {
		&USBZLocalPlayerFeedback::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::PropPointers),
		0,
		0x008000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZLocalPlayerFeedback()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZLocalPlayerFeedback_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZLocalPlayerFeedback, 423106564);
	template<> STARBREEZE_API UClass* StaticClass<USBZLocalPlayerFeedback>()
	{
		return USBZLocalPlayerFeedback::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZLocalPlayerFeedback(Z_Construct_UClass_USBZLocalPlayerFeedback, &USBZLocalPlayerFeedback::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZLocalPlayerFeedback"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZLocalPlayerFeedback);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
