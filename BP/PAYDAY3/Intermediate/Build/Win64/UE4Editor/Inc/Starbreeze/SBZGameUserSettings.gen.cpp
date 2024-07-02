// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameUserSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameUserSettings() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameUserSettings_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameUserSettings();
	ENGINE_API UClass* Z_Construct_UClass_UGameUserSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EColorVisionDeficiency();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCrosshairSettings();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHitIndicatorSettings();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZOnlineJoinType();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDifficulty();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZUpscaler();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZUpscalingMode();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPopupType();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZReflexMode();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZFramerateMode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlatformsBackendSettingsInfo();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameInstance_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZGameUserSettings::execAreHitIndicatorsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AreHitIndicatorsEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execAreOutlinesEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AreOutlinesEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execAreSubtitlesEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AreSubtitlesEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execAutoSetQuality)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AutoSetQuality();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZGameUserSettings**)Z_Param__Result=USBZGameUserSettings::Get();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetAntiAliasingMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAntiAliasingMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetBrightness)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBrightness();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetCameraHorizontalFoV)
	{
		P_GET_UBOOL(Z_Param_bUseLastConfirmedResolution);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCameraHorizontalFoV(Z_Param_bUseLastConfirmedResolution);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetCameraVerticalFoV)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCameraVerticalFoV();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetCapsuleShadowQuality)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCapsuleShadowQuality();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetCinematicVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCinematicVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetColorBlindMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EColorVisionDeficiency*)Z_Param__Result=P_THIS->GetColorBlindMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetColorBlindStrength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetColorBlindStrength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetContrast)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetContrast();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetCrosshairsBarColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetCrosshairsBarColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetCrosshairsBarLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCrosshairsBarLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetCrosshairsBarWidth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCrosshairsBarWidth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetCrosshairsDotColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetCrosshairsDotColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetCrosshairsDotSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCrosshairsDotSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetCrosshairSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZCrosshairSettings*)Z_Param__Result=P_THIS->GetCrosshairSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetGamepadBindingsPreset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGamepadBindingsPreset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetGamepadHorizontalSensitivityMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGamepadHorizontalSensitivityMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetGamepadVerticalSensitivityMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGamepadVerticalSensitivityMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetGameSenseEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetGameSenseEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetGamma)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGamma();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetHitIndicatorColorCrit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetHitIndicatorColorCrit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetHitIndicatorColorHit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetHitIndicatorColorHit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetHitIndicatorColorKill)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetHitIndicatorColorKill();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetHitIndicatorScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHitIndicatorScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetHitIndicatorSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZHitIndicatorSettings*)Z_Param__Result=P_THIS->GetHitIndicatorSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetLobbyType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZOnlineJoinType*)Z_Param__Result=P_THIS->GetLobbyType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetMasterVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMasterVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetMatchmakingDifficulty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZDifficulty*)Z_Param__Result=P_THIS->GetMatchmakingDifficulty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetMaxCrosshairsScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxCrosshairsScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetMinCrosshairsScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMinCrosshairsScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetMouseSensitivity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMouseSensitivity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetMouseSensitivityMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMouseSensitivityMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetMusicVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMusicVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetPrimaryKeyboardBinding)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AxisOrActionName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKey*)Z_Param__Result=P_THIS->GetPrimaryKeyboardBinding(Z_Param_AxisOrActionName,Z_Param_Scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetSBZGameUserSettings)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZGameUserSettings**)Z_Param__Result=USBZGameUserSettings::GetSBZGameUserSettings(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetSecondaryKeyboardBinding)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AxisOrActionName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKey*)Z_Param__Result=P_THIS->GetSecondaryKeyboardBinding(Z_Param_AxisOrActionName,Z_Param_Scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetSFXVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSFXVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetSubtitlesSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSubtitlesSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetTargetingSensitivityMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTargetingSensitivityMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetTelemetryEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTelemetryEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetUpscaler)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZUpscaler*)Z_Param__Result=P_THIS->GetUpscaler();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetUpscalingMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZUpscalingMode*)Z_Param__Result=P_THIS->GetUpscalingMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetUpscalingSharpness)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetUpscalingSharpness();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetVoIPVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVoIPVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execGetVOVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVOVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execIsChatDisabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsChatDisabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execIsChromaticAberrationEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsChromaticAberrationEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execIsContractorAudioBriefingEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsContractorAudioBriefingEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execIsCrossplayDisabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCrossplayDisabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execIsDepthOfFieldEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDepthOfFieldEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execIsForceFeedbackEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsForceFeedbackEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execIsFPSDisplayEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFPSDisplayEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execIsHoldForTabMenuEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHoldForTabMenuEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execIsHoldToCrouchEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHoldToCrouchEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execIsHoldToRunEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHoldToRunEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execIsHoldToTargetEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHoldToTargetEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execIsInvertedYAxisEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInvertedYAxisEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execIsMotionBlurEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMotionBlurEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execIsMouseSmoothingEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMouseSmoothingEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execIsPopupShown)
	{
		P_GET_ENUM(ESBZPopupType,Z_Param_PopupType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPopupShown(ESBZPopupType(Z_Param_PopupType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execIsReticleEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsReticleEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execIsStoryVideoButtonsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStoryVideoButtonsEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execIsSwitchWeaponAutomaticallyEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSwitchWeaponAutomaticallyEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetAntiAliasingMode)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAntiAliasingMode(Z_Param_Mode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetAudioToDefaults)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAudioToDefaults();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetBrightness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBrightness(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetCameraVerticalFoV)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCameraVerticalFoV(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetCapsuleShadowQuality)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Quality);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCapsuleShadowQuality(Z_Param_Quality);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetChatDisabled)
	{
		P_GET_UBOOL(Z_Param_bDisable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChatDisabled(Z_Param_bDisable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetChromaticAberrationEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChromaticAberrationEnabled(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetCinematicVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCinematicVolume(Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetColorBlindMode)
	{
		P_GET_ENUM(EColorVisionDeficiency,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColorBlindMode(EColorVisionDeficiency(Z_Param_Value));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetColorBlindStrength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColorBlindStrength(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetContractorAudioBriefingEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetContractorAudioBriefingEnabled(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetContrast)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetContrast(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetCrosshairsBarColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCrosshairsBarColor(Z_Param_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetCrosshairsBarLength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Length);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCrosshairsBarLength(Z_Param_Length);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetCrosshairsBarWidth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Width);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCrosshairsBarWidth(Z_Param_Width);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetCrosshairsDotColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCrosshairsDotColor(Z_Param_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetCrosshairsDotSize)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCrosshairsDotSize(Z_Param_Size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetCrosshairSettings)
	{
		P_GET_STRUCT_REF(FSBZCrosshairSettings,Z_Param_Out_CrosshairSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCrosshairSettings(Z_Param_Out_CrosshairSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetCrossplayDisabled)
	{
		P_GET_UBOOL(Z_Param_bDisable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCrossplayDisabled(Z_Param_bDisable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetCustomVideoToDefaults)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCustomVideoToDefaults();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetDepthOfFieldEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDepthOfFieldEnabled(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetForceFeedbackEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetForceFeedbackEnabled(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetFPSDisplayEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFPSDisplayEnabled(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetGamepadBindingsPreset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Preset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGamepadBindingsPreset(Z_Param_Preset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetGamepadHorizontalSensitivityMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Sensitivity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGamepadHorizontalSensitivityMultiplier(Z_Param_Sensitivity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetGamepadToDefaults)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGamepadToDefaults();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetGamepadVerticalSensitivityMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InSensitivity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGamepadVerticalSensitivityMultiplier(Z_Param_InSensitivity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetGameplayToDefaults)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameplayToDefaults();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetGameSenseEnabled)
	{
		P_GET_UBOOL(Z_Param_bIsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameSenseEnabled(Z_Param_bIsEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetGamma)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGamma(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetHitIndicatorColorCrit)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHitIndicatorColorCrit(Z_Param_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetHitIndicatorColorHit)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHitIndicatorColorHit(Z_Param_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetHitIndicatorColorKill)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHitIndicatorColorKill(Z_Param_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetHitIndicatorScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHitIndicatorScale(Z_Param_Scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetHitIndicatorsEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHitIndicatorsEnabled(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSethitIndicatorSettings)
	{
		P_GET_STRUCT_REF(FSBZHitIndicatorSettings,Z_Param_Out_HitIndicatorSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SethitIndicatorSettings(Z_Param_Out_HitIndicatorSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetHoldForTabMenuEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHoldForTabMenuEnabled(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetHoldToCrouchEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHoldToCrouchEnabled(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetHoldToRunEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHoldToRunEnabled(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetHoldToTargetEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHoldToTargetEnabled(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetInvertedYAxisEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInvertedYAxisEnabled(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetKeyboardToDefaults)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetKeyboardToDefaults();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetLobbyType)
	{
		P_GET_ENUM(ESBZOnlineJoinType,Z_Param_InLobbyType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLobbyType(ESBZOnlineJoinType(Z_Param_InLobbyType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetMasterVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMasterVolume(Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetMatchmakingDifficulty)
	{
		P_GET_ENUM(ESBZDifficulty,Z_Param_InDifficulty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMatchmakingDifficulty(ESBZDifficulty(Z_Param_InDifficulty));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetMaxCrosshairsScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxCrosshairsScale(Z_Param_Scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetMinCrosshairsScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinCrosshairsScale(Z_Param_Scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetMotionBlurEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMotionBlurEnabled(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetMouseSensitivity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Sensitivity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMouseSensitivity(Z_Param_Sensitivity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetMouseSensitivityMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Sensitivity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMouseSensitivityMultiplier(Z_Param_Sensitivity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetMouseSmoothingEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMouseSmoothingEnabled(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetMusicVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMusicVolume(Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetOutlinesEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOutlinesEnabled(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetPopupShown)
	{
		P_GET_ENUM(ESBZPopupType,Z_Param_PopupType);
		P_GET_UBOOL(Z_Param_bIsShown);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPopupShown(ESBZPopupType(Z_Param_PopupType),Z_Param_bIsShown);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetPrimaryKeyboardBinding)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AxisOrActionName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPrimaryKeyboardBinding(Z_Param_AxisOrActionName,Z_Param_Scale,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetReticleEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReticleEnabled(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetSecondaryKeyboardBinding)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AxisOrActionName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSecondaryKeyboardBinding(Z_Param_AxisOrActionName,Z_Param_Scale,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetSFXVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSFXVolume(Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetStoryVideoButtonsEnabled)
	{
		P_GET_UBOOL(Z_Param_bInEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStoryVideoButtonsEnabled(Z_Param_bInEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetSubtitlesEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubtitlesEnabled(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetSubtitlesSize)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubtitlesSize(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetSwitchWeaponAutomaticallyEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSwitchWeaponAutomaticallyEnabled(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetTargetingSensitivityMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Sensitivity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetingSensitivityMultiplier(Z_Param_Sensitivity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetTelemetryEnabled)
	{
		P_GET_UBOOL(Z_Param_bIsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTelemetryEnabled(Z_Param_bIsEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetUpscaler)
	{
		P_GET_ENUM(ESBZUpscaler,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUpscaler(ESBZUpscaler(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetUpscalingMode)
	{
		P_GET_ENUM(ESBZUpscalingMode,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUpscalingMode(ESBZUpscalingMode(Z_Param_Mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetUpscalingSharpness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Sharpness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUpscalingSharpness(Z_Param_Sharpness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetUserInterfaceToDefaults)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUserInterfaceToDefaults();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetVideoToDefaults)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVideoToDefaults();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetVoIPVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVoIPVolume(Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameUserSettings::execSetVOVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVOVolume(Z_Param_Volume);
		P_NATIVE_END;
	}
	void USBZGameUserSettings::StaticRegisterNativesUSBZGameUserSettings()
	{
		UClass* Class = USBZGameUserSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AreHitIndicatorsEnabled", &USBZGameUserSettings::execAreHitIndicatorsEnabled },
			{ "AreOutlinesEnabled", &USBZGameUserSettings::execAreOutlinesEnabled },
			{ "AreSubtitlesEnabled", &USBZGameUserSettings::execAreSubtitlesEnabled },
			{ "AutoSetQuality", &USBZGameUserSettings::execAutoSetQuality },
			{ "Get", &USBZGameUserSettings::execGet },
			{ "GetAntiAliasingMode", &USBZGameUserSettings::execGetAntiAliasingMode },
			{ "GetBrightness", &USBZGameUserSettings::execGetBrightness },
			{ "GetCameraHorizontalFoV", &USBZGameUserSettings::execGetCameraHorizontalFoV },
			{ "GetCameraVerticalFoV", &USBZGameUserSettings::execGetCameraVerticalFoV },
			{ "GetCapsuleShadowQuality", &USBZGameUserSettings::execGetCapsuleShadowQuality },
			{ "GetCinematicVolume", &USBZGameUserSettings::execGetCinematicVolume },
			{ "GetColorBlindMode", &USBZGameUserSettings::execGetColorBlindMode },
			{ "GetColorBlindStrength", &USBZGameUserSettings::execGetColorBlindStrength },
			{ "GetContrast", &USBZGameUserSettings::execGetContrast },
			{ "GetCrosshairsBarColor", &USBZGameUserSettings::execGetCrosshairsBarColor },
			{ "GetCrosshairsBarLength", &USBZGameUserSettings::execGetCrosshairsBarLength },
			{ "GetCrosshairsBarWidth", &USBZGameUserSettings::execGetCrosshairsBarWidth },
			{ "GetCrosshairsDotColor", &USBZGameUserSettings::execGetCrosshairsDotColor },
			{ "GetCrosshairsDotSize", &USBZGameUserSettings::execGetCrosshairsDotSize },
			{ "GetCrosshairSettings", &USBZGameUserSettings::execGetCrosshairSettings },
			{ "GetGamepadBindingsPreset", &USBZGameUserSettings::execGetGamepadBindingsPreset },
			{ "GetGamepadHorizontalSensitivityMultiplier", &USBZGameUserSettings::execGetGamepadHorizontalSensitivityMultiplier },
			{ "GetGamepadVerticalSensitivityMultiplier", &USBZGameUserSettings::execGetGamepadVerticalSensitivityMultiplier },
			{ "GetGameSenseEnabled", &USBZGameUserSettings::execGetGameSenseEnabled },
			{ "GetGamma", &USBZGameUserSettings::execGetGamma },
			{ "GetHitIndicatorColorCrit", &USBZGameUserSettings::execGetHitIndicatorColorCrit },
			{ "GetHitIndicatorColorHit", &USBZGameUserSettings::execGetHitIndicatorColorHit },
			{ "GetHitIndicatorColorKill", &USBZGameUserSettings::execGetHitIndicatorColorKill },
			{ "GetHitIndicatorScale", &USBZGameUserSettings::execGetHitIndicatorScale },
			{ "GetHitIndicatorSettings", &USBZGameUserSettings::execGetHitIndicatorSettings },
			{ "GetLobbyType", &USBZGameUserSettings::execGetLobbyType },
			{ "GetMasterVolume", &USBZGameUserSettings::execGetMasterVolume },
			{ "GetMatchmakingDifficulty", &USBZGameUserSettings::execGetMatchmakingDifficulty },
			{ "GetMaxCrosshairsScale", &USBZGameUserSettings::execGetMaxCrosshairsScale },
			{ "GetMinCrosshairsScale", &USBZGameUserSettings::execGetMinCrosshairsScale },
			{ "GetMouseSensitivity", &USBZGameUserSettings::execGetMouseSensitivity },
			{ "GetMouseSensitivityMultiplier", &USBZGameUserSettings::execGetMouseSensitivityMultiplier },
			{ "GetMusicVolume", &USBZGameUserSettings::execGetMusicVolume },
			{ "GetPrimaryKeyboardBinding", &USBZGameUserSettings::execGetPrimaryKeyboardBinding },
			{ "GetSBZGameUserSettings", &USBZGameUserSettings::execGetSBZGameUserSettings },
			{ "GetSecondaryKeyboardBinding", &USBZGameUserSettings::execGetSecondaryKeyboardBinding },
			{ "GetSFXVolume", &USBZGameUserSettings::execGetSFXVolume },
			{ "GetSubtitlesSize", &USBZGameUserSettings::execGetSubtitlesSize },
			{ "GetTargetingSensitivityMultiplier", &USBZGameUserSettings::execGetTargetingSensitivityMultiplier },
			{ "GetTelemetryEnabled", &USBZGameUserSettings::execGetTelemetryEnabled },
			{ "GetUpscaler", &USBZGameUserSettings::execGetUpscaler },
			{ "GetUpscalingMode", &USBZGameUserSettings::execGetUpscalingMode },
			{ "GetUpscalingSharpness", &USBZGameUserSettings::execGetUpscalingSharpness },
			{ "GetVoIPVolume", &USBZGameUserSettings::execGetVoIPVolume },
			{ "GetVOVolume", &USBZGameUserSettings::execGetVOVolume },
			{ "IsChatDisabled", &USBZGameUserSettings::execIsChatDisabled },
			{ "IsChromaticAberrationEnabled", &USBZGameUserSettings::execIsChromaticAberrationEnabled },
			{ "IsContractorAudioBriefingEnabled", &USBZGameUserSettings::execIsContractorAudioBriefingEnabled },
			{ "IsCrossplayDisabled", &USBZGameUserSettings::execIsCrossplayDisabled },
			{ "IsDepthOfFieldEnabled", &USBZGameUserSettings::execIsDepthOfFieldEnabled },
			{ "IsForceFeedbackEnabled", &USBZGameUserSettings::execIsForceFeedbackEnabled },
			{ "IsFPSDisplayEnabled", &USBZGameUserSettings::execIsFPSDisplayEnabled },
			{ "IsHoldForTabMenuEnabled", &USBZGameUserSettings::execIsHoldForTabMenuEnabled },
			{ "IsHoldToCrouchEnabled", &USBZGameUserSettings::execIsHoldToCrouchEnabled },
			{ "IsHoldToRunEnabled", &USBZGameUserSettings::execIsHoldToRunEnabled },
			{ "IsHoldToTargetEnabled", &USBZGameUserSettings::execIsHoldToTargetEnabled },
			{ "IsInvertedYAxisEnabled", &USBZGameUserSettings::execIsInvertedYAxisEnabled },
			{ "IsMotionBlurEnabled", &USBZGameUserSettings::execIsMotionBlurEnabled },
			{ "IsMouseSmoothingEnabled", &USBZGameUserSettings::execIsMouseSmoothingEnabled },
			{ "IsPopupShown", &USBZGameUserSettings::execIsPopupShown },
			{ "IsReticleEnabled", &USBZGameUserSettings::execIsReticleEnabled },
			{ "IsStoryVideoButtonsEnabled", &USBZGameUserSettings::execIsStoryVideoButtonsEnabled },
			{ "IsSwitchWeaponAutomaticallyEnabled", &USBZGameUserSettings::execIsSwitchWeaponAutomaticallyEnabled },
			{ "SetAntiAliasingMode", &USBZGameUserSettings::execSetAntiAliasingMode },
			{ "SetAudioToDefaults", &USBZGameUserSettings::execSetAudioToDefaults },
			{ "SetBrightness", &USBZGameUserSettings::execSetBrightness },
			{ "SetCameraVerticalFoV", &USBZGameUserSettings::execSetCameraVerticalFoV },
			{ "SetCapsuleShadowQuality", &USBZGameUserSettings::execSetCapsuleShadowQuality },
			{ "SetChatDisabled", &USBZGameUserSettings::execSetChatDisabled },
			{ "SetChromaticAberrationEnabled", &USBZGameUserSettings::execSetChromaticAberrationEnabled },
			{ "SetCinematicVolume", &USBZGameUserSettings::execSetCinematicVolume },
			{ "SetColorBlindMode", &USBZGameUserSettings::execSetColorBlindMode },
			{ "SetColorBlindStrength", &USBZGameUserSettings::execSetColorBlindStrength },
			{ "SetContractorAudioBriefingEnabled", &USBZGameUserSettings::execSetContractorAudioBriefingEnabled },
			{ "SetContrast", &USBZGameUserSettings::execSetContrast },
			{ "SetCrosshairsBarColor", &USBZGameUserSettings::execSetCrosshairsBarColor },
			{ "SetCrosshairsBarLength", &USBZGameUserSettings::execSetCrosshairsBarLength },
			{ "SetCrosshairsBarWidth", &USBZGameUserSettings::execSetCrosshairsBarWidth },
			{ "SetCrosshairsDotColor", &USBZGameUserSettings::execSetCrosshairsDotColor },
			{ "SetCrosshairsDotSize", &USBZGameUserSettings::execSetCrosshairsDotSize },
			{ "SetCrosshairSettings", &USBZGameUserSettings::execSetCrosshairSettings },
			{ "SetCrossplayDisabled", &USBZGameUserSettings::execSetCrossplayDisabled },
			{ "SetCustomVideoToDefaults", &USBZGameUserSettings::execSetCustomVideoToDefaults },
			{ "SetDepthOfFieldEnabled", &USBZGameUserSettings::execSetDepthOfFieldEnabled },
			{ "SetForceFeedbackEnabled", &USBZGameUserSettings::execSetForceFeedbackEnabled },
			{ "SetFPSDisplayEnabled", &USBZGameUserSettings::execSetFPSDisplayEnabled },
			{ "SetGamepadBindingsPreset", &USBZGameUserSettings::execSetGamepadBindingsPreset },
			{ "SetGamepadHorizontalSensitivityMultiplier", &USBZGameUserSettings::execSetGamepadHorizontalSensitivityMultiplier },
			{ "SetGamepadToDefaults", &USBZGameUserSettings::execSetGamepadToDefaults },
			{ "SetGamepadVerticalSensitivityMultiplier", &USBZGameUserSettings::execSetGamepadVerticalSensitivityMultiplier },
			{ "SetGameplayToDefaults", &USBZGameUserSettings::execSetGameplayToDefaults },
			{ "SetGameSenseEnabled", &USBZGameUserSettings::execSetGameSenseEnabled },
			{ "SetGamma", &USBZGameUserSettings::execSetGamma },
			{ "SetHitIndicatorColorCrit", &USBZGameUserSettings::execSetHitIndicatorColorCrit },
			{ "SetHitIndicatorColorHit", &USBZGameUserSettings::execSetHitIndicatorColorHit },
			{ "SetHitIndicatorColorKill", &USBZGameUserSettings::execSetHitIndicatorColorKill },
			{ "SetHitIndicatorScale", &USBZGameUserSettings::execSetHitIndicatorScale },
			{ "SetHitIndicatorsEnabled", &USBZGameUserSettings::execSetHitIndicatorsEnabled },
			{ "SethitIndicatorSettings", &USBZGameUserSettings::execSethitIndicatorSettings },
			{ "SetHoldForTabMenuEnabled", &USBZGameUserSettings::execSetHoldForTabMenuEnabled },
			{ "SetHoldToCrouchEnabled", &USBZGameUserSettings::execSetHoldToCrouchEnabled },
			{ "SetHoldToRunEnabled", &USBZGameUserSettings::execSetHoldToRunEnabled },
			{ "SetHoldToTargetEnabled", &USBZGameUserSettings::execSetHoldToTargetEnabled },
			{ "SetInvertedYAxisEnabled", &USBZGameUserSettings::execSetInvertedYAxisEnabled },
			{ "SetKeyboardToDefaults", &USBZGameUserSettings::execSetKeyboardToDefaults },
			{ "SetLobbyType", &USBZGameUserSettings::execSetLobbyType },
			{ "SetMasterVolume", &USBZGameUserSettings::execSetMasterVolume },
			{ "SetMatchmakingDifficulty", &USBZGameUserSettings::execSetMatchmakingDifficulty },
			{ "SetMaxCrosshairsScale", &USBZGameUserSettings::execSetMaxCrosshairsScale },
			{ "SetMinCrosshairsScale", &USBZGameUserSettings::execSetMinCrosshairsScale },
			{ "SetMotionBlurEnabled", &USBZGameUserSettings::execSetMotionBlurEnabled },
			{ "SetMouseSensitivity", &USBZGameUserSettings::execSetMouseSensitivity },
			{ "SetMouseSensitivityMultiplier", &USBZGameUserSettings::execSetMouseSensitivityMultiplier },
			{ "SetMouseSmoothingEnabled", &USBZGameUserSettings::execSetMouseSmoothingEnabled },
			{ "SetMusicVolume", &USBZGameUserSettings::execSetMusicVolume },
			{ "SetOutlinesEnabled", &USBZGameUserSettings::execSetOutlinesEnabled },
			{ "SetPopupShown", &USBZGameUserSettings::execSetPopupShown },
			{ "SetPrimaryKeyboardBinding", &USBZGameUserSettings::execSetPrimaryKeyboardBinding },
			{ "SetReticleEnabled", &USBZGameUserSettings::execSetReticleEnabled },
			{ "SetSecondaryKeyboardBinding", &USBZGameUserSettings::execSetSecondaryKeyboardBinding },
			{ "SetSFXVolume", &USBZGameUserSettings::execSetSFXVolume },
			{ "SetStoryVideoButtonsEnabled", &USBZGameUserSettings::execSetStoryVideoButtonsEnabled },
			{ "SetSubtitlesEnabled", &USBZGameUserSettings::execSetSubtitlesEnabled },
			{ "SetSubtitlesSize", &USBZGameUserSettings::execSetSubtitlesSize },
			{ "SetSwitchWeaponAutomaticallyEnabled", &USBZGameUserSettings::execSetSwitchWeaponAutomaticallyEnabled },
			{ "SetTargetingSensitivityMultiplier", &USBZGameUserSettings::execSetTargetingSensitivityMultiplier },
			{ "SetTelemetryEnabled", &USBZGameUserSettings::execSetTelemetryEnabled },
			{ "SetUpscaler", &USBZGameUserSettings::execSetUpscaler },
			{ "SetUpscalingMode", &USBZGameUserSettings::execSetUpscalingMode },
			{ "SetUpscalingSharpness", &USBZGameUserSettings::execSetUpscalingSharpness },
			{ "SetUserInterfaceToDefaults", &USBZGameUserSettings::execSetUserInterfaceToDefaults },
			{ "SetVideoToDefaults", &USBZGameUserSettings::execSetVideoToDefaults },
			{ "SetVoIPVolume", &USBZGameUserSettings::execSetVoIPVolume },
			{ "SetVOVolume", &USBZGameUserSettings::execSetVOVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_AreHitIndicatorsEnabled_Statics
	{
		struct SBZGameUserSettings_eventAreHitIndicatorsEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_AreHitIndicatorsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventAreHitIndicatorsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_AreHitIndicatorsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventAreHitIndicatorsEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_AreHitIndicatorsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_AreHitIndicatorsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_AreHitIndicatorsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_AreHitIndicatorsEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_AreHitIndicatorsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "AreHitIndicatorsEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventAreHitIndicatorsEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_AreHitIndicatorsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_AreHitIndicatorsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_AreHitIndicatorsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_AreHitIndicatorsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_AreHitIndicatorsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_AreHitIndicatorsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_AreOutlinesEnabled_Statics
	{
		struct SBZGameUserSettings_eventAreOutlinesEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_AreOutlinesEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventAreOutlinesEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_AreOutlinesEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventAreOutlinesEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_AreOutlinesEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_AreOutlinesEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_AreOutlinesEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_AreOutlinesEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_AreOutlinesEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "AreOutlinesEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventAreOutlinesEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_AreOutlinesEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_AreOutlinesEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_AreOutlinesEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_AreOutlinesEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_AreOutlinesEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_AreOutlinesEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_AreSubtitlesEnabled_Statics
	{
		struct SBZGameUserSettings_eventAreSubtitlesEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_AreSubtitlesEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventAreSubtitlesEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_AreSubtitlesEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventAreSubtitlesEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_AreSubtitlesEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_AreSubtitlesEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_AreSubtitlesEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_AreSubtitlesEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_AreSubtitlesEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "AreSubtitlesEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventAreSubtitlesEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_AreSubtitlesEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_AreSubtitlesEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_AreSubtitlesEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_AreSubtitlesEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_AreSubtitlesEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_AreSubtitlesEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_AutoSetQuality_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_AutoSetQuality_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_AutoSetQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "AutoSetQuality", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_AutoSetQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_AutoSetQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_AutoSetQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_AutoSetQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_Get_Statics
	{
		struct SBZGameUserSettings_eventGet_Parms
		{
			USBZGameUserSettings* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameUserSettings_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGet_Parms, ReturnValue), Z_Construct_UClass_USBZGameUserSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "Get", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGet_Parms), Z_Construct_UFunction_USBZGameUserSettings_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetAntiAliasingMode_Statics
	{
		struct SBZGameUserSettings_eventGetAntiAliasingMode_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetAntiAliasingMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetAntiAliasingMode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetAntiAliasingMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetAntiAliasingMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetAntiAliasingMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetAntiAliasingMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetAntiAliasingMode", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetAntiAliasingMode_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetAntiAliasingMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetAntiAliasingMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetAntiAliasingMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetAntiAliasingMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetAntiAliasingMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetAntiAliasingMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetBrightness_Statics
	{
		struct SBZGameUserSettings_eventGetBrightness_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetBrightness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetBrightness_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetBrightness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetBrightness_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetBrightness_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetBrightness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetBrightness", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetBrightness_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetBrightness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetBrightness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetBrightness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetBrightness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetBrightness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetBrightness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetCameraHorizontalFoV_Statics
	{
		struct SBZGameUserSettings_eventGetCameraHorizontalFoV_Parms
		{
			bool bUseLastConfirmedResolution;
			int32 ReturnValue;
		};
		static void NewProp_bUseLastConfirmedResolution_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLastConfirmedResolution;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_GetCameraHorizontalFoV_Statics::NewProp_bUseLastConfirmedResolution_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventGetCameraHorizontalFoV_Parms*)Obj)->bUseLastConfirmedResolution = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetCameraHorizontalFoV_Statics::NewProp_bUseLastConfirmedResolution = { "bUseLastConfirmedResolution", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventGetCameraHorizontalFoV_Parms), &Z_Construct_UFunction_USBZGameUserSettings_GetCameraHorizontalFoV_Statics::NewProp_bUseLastConfirmedResolution_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetCameraHorizontalFoV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetCameraHorizontalFoV_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetCameraHorizontalFoV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetCameraHorizontalFoV_Statics::NewProp_bUseLastConfirmedResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetCameraHorizontalFoV_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetCameraHorizontalFoV_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetCameraHorizontalFoV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetCameraHorizontalFoV", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetCameraHorizontalFoV_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetCameraHorizontalFoV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetCameraHorizontalFoV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetCameraHorizontalFoV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetCameraHorizontalFoV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetCameraHorizontalFoV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetCameraHorizontalFoV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetCameraVerticalFoV_Statics
	{
		struct SBZGameUserSettings_eventGetCameraVerticalFoV_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetCameraVerticalFoV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetCameraVerticalFoV_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetCameraVerticalFoV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetCameraVerticalFoV_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetCameraVerticalFoV_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetCameraVerticalFoV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetCameraVerticalFoV", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetCameraVerticalFoV_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetCameraVerticalFoV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetCameraVerticalFoV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetCameraVerticalFoV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetCameraVerticalFoV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetCameraVerticalFoV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetCameraVerticalFoV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetCapsuleShadowQuality_Statics
	{
		struct SBZGameUserSettings_eventGetCapsuleShadowQuality_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetCapsuleShadowQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetCapsuleShadowQuality_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetCapsuleShadowQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetCapsuleShadowQuality_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetCapsuleShadowQuality_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetCapsuleShadowQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetCapsuleShadowQuality", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetCapsuleShadowQuality_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetCapsuleShadowQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetCapsuleShadowQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetCapsuleShadowQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetCapsuleShadowQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetCapsuleShadowQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetCapsuleShadowQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetCinematicVolume_Statics
	{
		struct SBZGameUserSettings_eventGetCinematicVolume_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetCinematicVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetCinematicVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetCinematicVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetCinematicVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetCinematicVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetCinematicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetCinematicVolume", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetCinematicVolume_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetCinematicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetCinematicVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetCinematicVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetCinematicVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetCinematicVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetCinematicVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetColorBlindMode_Statics
	{
		struct SBZGameUserSettings_eventGetColorBlindMode_Parms
		{
			EColorVisionDeficiency ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetColorBlindMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetColorBlindMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetColorBlindMode_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_EColorVisionDeficiency, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetColorBlindMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetColorBlindMode_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetColorBlindMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetColorBlindMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetColorBlindMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetColorBlindMode", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetColorBlindMode_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetColorBlindMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetColorBlindMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetColorBlindMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetColorBlindMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetColorBlindMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetColorBlindMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetColorBlindStrength_Statics
	{
		struct SBZGameUserSettings_eventGetColorBlindStrength_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetColorBlindStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetColorBlindStrength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetColorBlindStrength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetColorBlindStrength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetColorBlindStrength_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetColorBlindStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetColorBlindStrength", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetColorBlindStrength_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetColorBlindStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetColorBlindStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetColorBlindStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetColorBlindStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetColorBlindStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetColorBlindStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetContrast_Statics
	{
		struct SBZGameUserSettings_eventGetContrast_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetContrast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetContrast_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetContrast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetContrast_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetContrast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetContrast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetContrast", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetContrast_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetContrast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetContrast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetContrast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetContrast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetContrast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetContrast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarColor_Statics
	{
		struct SBZGameUserSettings_eventGetCrosshairsBarColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetCrosshairsBarColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetCrosshairsBarColor", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetCrosshairsBarColor_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarLength_Statics
	{
		struct SBZGameUserSettings_eventGetCrosshairsBarLength_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetCrosshairsBarLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarLength_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetCrosshairsBarLength", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetCrosshairsBarLength_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarWidth_Statics
	{
		struct SBZGameUserSettings_eventGetCrosshairsBarWidth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetCrosshairsBarWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarWidth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetCrosshairsBarWidth", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetCrosshairsBarWidth_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsDotColor_Statics
	{
		struct SBZGameUserSettings_eventGetCrosshairsDotColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsDotColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetCrosshairsDotColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsDotColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsDotColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsDotColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsDotColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetCrosshairsDotColor", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetCrosshairsDotColor_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsDotColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsDotColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsDotColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsDotColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsDotColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsDotColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsDotSize_Statics
	{
		struct SBZGameUserSettings_eventGetCrosshairsDotSize_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsDotSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetCrosshairsDotSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsDotSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsDotSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsDotSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsDotSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetCrosshairsDotSize", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetCrosshairsDotSize_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsDotSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsDotSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsDotSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsDotSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsDotSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsDotSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairSettings_Statics
	{
		struct SBZGameUserSettings_eventGetCrosshairSettings_Parms
		{
			FSBZCrosshairSettings ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetCrosshairSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZCrosshairSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetCrosshairSettings", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetCrosshairSettings_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetGamepadBindingsPreset_Statics
	{
		struct SBZGameUserSettings_eventGetGamepadBindingsPreset_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetGamepadBindingsPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetGamepadBindingsPreset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetGamepadBindingsPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetGamepadBindingsPreset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetGamepadBindingsPreset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetGamepadBindingsPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetGamepadBindingsPreset", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetGamepadBindingsPreset_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetGamepadBindingsPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetGamepadBindingsPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetGamepadBindingsPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetGamepadBindingsPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetGamepadBindingsPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetGamepadBindingsPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetGamepadHorizontalSensitivityMultiplier_Statics
	{
		struct SBZGameUserSettings_eventGetGamepadHorizontalSensitivityMultiplier_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetGamepadHorizontalSensitivityMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetGamepadHorizontalSensitivityMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetGamepadHorizontalSensitivityMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetGamepadHorizontalSensitivityMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetGamepadHorizontalSensitivityMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetGamepadHorizontalSensitivityMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetGamepadHorizontalSensitivityMultiplier", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetGamepadHorizontalSensitivityMultiplier_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetGamepadHorizontalSensitivityMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetGamepadHorizontalSensitivityMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetGamepadHorizontalSensitivityMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetGamepadHorizontalSensitivityMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetGamepadHorizontalSensitivityMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetGamepadHorizontalSensitivityMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetGamepadVerticalSensitivityMultiplier_Statics
	{
		struct SBZGameUserSettings_eventGetGamepadVerticalSensitivityMultiplier_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetGamepadVerticalSensitivityMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetGamepadVerticalSensitivityMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetGamepadVerticalSensitivityMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetGamepadVerticalSensitivityMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetGamepadVerticalSensitivityMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetGamepadVerticalSensitivityMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetGamepadVerticalSensitivityMultiplier", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetGamepadVerticalSensitivityMultiplier_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetGamepadVerticalSensitivityMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetGamepadVerticalSensitivityMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetGamepadVerticalSensitivityMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetGamepadVerticalSensitivityMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetGamepadVerticalSensitivityMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetGamepadVerticalSensitivityMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetGameSenseEnabled_Statics
	{
		struct SBZGameUserSettings_eventGetGameSenseEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_GetGameSenseEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventGetGameSenseEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetGameSenseEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventGetGameSenseEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_GetGameSenseEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetGameSenseEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetGameSenseEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetGameSenseEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetGameSenseEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetGameSenseEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetGameSenseEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetGameSenseEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetGameSenseEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetGameSenseEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetGameSenseEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetGameSenseEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetGameSenseEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetGamma_Statics
	{
		struct SBZGameUserSettings_eventGetGamma_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetGamma_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetGamma_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetGamma_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetGamma_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetGamma_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetGamma_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetGamma", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetGamma_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetGamma_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetGamma_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetGamma_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetGamma_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetGamma()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetGamma_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorCrit_Statics
	{
		struct SBZGameUserSettings_eventGetHitIndicatorColorCrit_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorCrit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetHitIndicatorColorCrit_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorCrit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorCrit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorCrit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorCrit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetHitIndicatorColorCrit", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetHitIndicatorColorCrit_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorCrit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorCrit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorCrit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorCrit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorCrit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorCrit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorHit_Statics
	{
		struct SBZGameUserSettings_eventGetHitIndicatorColorHit_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetHitIndicatorColorHit_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorHit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetHitIndicatorColorHit", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetHitIndicatorColorHit_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorKill_Statics
	{
		struct SBZGameUserSettings_eventGetHitIndicatorColorKill_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorKill_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetHitIndicatorColorKill_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorKill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorKill_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorKill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorKill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetHitIndicatorColorKill", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetHitIndicatorColorKill_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorKill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorKill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorKill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorKill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorKill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorKill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorScale_Statics
	{
		struct SBZGameUserSettings_eventGetHitIndicatorScale_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetHitIndicatorScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetHitIndicatorScale", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetHitIndicatorScale_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorSettings_Statics
	{
		struct SBZGameUserSettings_eventGetHitIndicatorSettings_Parms
		{
			FSBZHitIndicatorSettings ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetHitIndicatorSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZHitIndicatorSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetHitIndicatorSettings", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetHitIndicatorSettings_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetLobbyType_Statics
	{
		struct SBZGameUserSettings_eventGetLobbyType_Parms
		{
			ESBZOnlineJoinType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetLobbyType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetLobbyType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetLobbyType_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZOnlineJoinType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetLobbyType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetLobbyType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetLobbyType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetLobbyType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetLobbyType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetLobbyType", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetLobbyType_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetLobbyType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetLobbyType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetLobbyType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetLobbyType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetLobbyType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetLobbyType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetMasterVolume_Statics
	{
		struct SBZGameUserSettings_eventGetMasterVolume_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetMasterVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetMasterVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetMasterVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetMasterVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetMasterVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetMasterVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetMasterVolume", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetMasterVolume_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetMasterVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetMasterVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetMasterVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetMasterVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetMasterVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetMasterVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetMatchmakingDifficulty_Statics
	{
		struct SBZGameUserSettings_eventGetMatchmakingDifficulty_Parms
		{
			ESBZDifficulty ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetMatchmakingDifficulty_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetMatchmakingDifficulty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetMatchmakingDifficulty_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZDifficulty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetMatchmakingDifficulty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetMatchmakingDifficulty_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetMatchmakingDifficulty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetMatchmakingDifficulty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetMatchmakingDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetMatchmakingDifficulty", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetMatchmakingDifficulty_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetMatchmakingDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetMatchmakingDifficulty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetMatchmakingDifficulty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetMatchmakingDifficulty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetMatchmakingDifficulty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetMatchmakingDifficulty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetMaxCrosshairsScale_Statics
	{
		struct SBZGameUserSettings_eventGetMaxCrosshairsScale_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetMaxCrosshairsScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetMaxCrosshairsScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetMaxCrosshairsScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetMaxCrosshairsScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetMaxCrosshairsScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetMaxCrosshairsScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetMaxCrosshairsScale", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetMaxCrosshairsScale_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetMaxCrosshairsScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetMaxCrosshairsScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetMaxCrosshairsScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetMaxCrosshairsScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetMaxCrosshairsScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetMaxCrosshairsScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetMinCrosshairsScale_Statics
	{
		struct SBZGameUserSettings_eventGetMinCrosshairsScale_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetMinCrosshairsScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetMinCrosshairsScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetMinCrosshairsScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetMinCrosshairsScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetMinCrosshairsScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetMinCrosshairsScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetMinCrosshairsScale", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetMinCrosshairsScale_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetMinCrosshairsScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetMinCrosshairsScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetMinCrosshairsScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetMinCrosshairsScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetMinCrosshairsScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetMinCrosshairsScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetMouseSensitivity_Statics
	{
		struct SBZGameUserSettings_eventGetMouseSensitivity_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetMouseSensitivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetMouseSensitivity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetMouseSensitivity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetMouseSensitivity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetMouseSensitivity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetMouseSensitivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetMouseSensitivity", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetMouseSensitivity_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetMouseSensitivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetMouseSensitivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetMouseSensitivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetMouseSensitivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetMouseSensitivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetMouseSensitivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetMouseSensitivityMultiplier_Statics
	{
		struct SBZGameUserSettings_eventGetMouseSensitivityMultiplier_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetMouseSensitivityMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetMouseSensitivityMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetMouseSensitivityMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetMouseSensitivityMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetMouseSensitivityMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetMouseSensitivityMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetMouseSensitivityMultiplier", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetMouseSensitivityMultiplier_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetMouseSensitivityMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetMouseSensitivityMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetMouseSensitivityMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetMouseSensitivityMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetMouseSensitivityMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetMouseSensitivityMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetMusicVolume_Statics
	{
		struct SBZGameUserSettings_eventGetMusicVolume_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetMusicVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetMusicVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetMusicVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetMusicVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetMusicVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetMusicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetMusicVolume", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetMusicVolume_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetMusicVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetMusicVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetMusicVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetMusicVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetMusicVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetPrimaryKeyboardBinding_Statics
	{
		struct SBZGameUserSettings_eventGetPrimaryKeyboardBinding_Parms
		{
			FName AxisOrActionName;
			float Scale;
			FKey ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxisOrActionName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetPrimaryKeyboardBinding_Statics::NewProp_AxisOrActionName = { "AxisOrActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetPrimaryKeyboardBinding_Parms, AxisOrActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetPrimaryKeyboardBinding_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetPrimaryKeyboardBinding_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetPrimaryKeyboardBinding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetPrimaryKeyboardBinding_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetPrimaryKeyboardBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetPrimaryKeyboardBinding_Statics::NewProp_AxisOrActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetPrimaryKeyboardBinding_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetPrimaryKeyboardBinding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetPrimaryKeyboardBinding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetPrimaryKeyboardBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetPrimaryKeyboardBinding", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetPrimaryKeyboardBinding_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetPrimaryKeyboardBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetPrimaryKeyboardBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetPrimaryKeyboardBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetPrimaryKeyboardBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetPrimaryKeyboardBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetPrimaryKeyboardBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetSBZGameUserSettings_Statics
	{
		struct SBZGameUserSettings_eventGetSBZGameUserSettings_Parms
		{
			const UObject* WorldContextObject;
			USBZGameUserSettings* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetSBZGameUserSettings_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetSBZGameUserSettings_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetSBZGameUserSettings_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetSBZGameUserSettings_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetSBZGameUserSettings_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetSBZGameUserSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetSBZGameUserSettings_Parms, ReturnValue), Z_Construct_UClass_USBZGameUserSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetSBZGameUserSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetSBZGameUserSettings_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetSBZGameUserSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetSBZGameUserSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetSBZGameUserSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetSBZGameUserSettings", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetSBZGameUserSettings_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetSBZGameUserSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetSBZGameUserSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetSBZGameUserSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetSBZGameUserSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetSBZGameUserSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetSBZGameUserSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetSecondaryKeyboardBinding_Statics
	{
		struct SBZGameUserSettings_eventGetSecondaryKeyboardBinding_Parms
		{
			FName AxisOrActionName;
			float Scale;
			FKey ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxisOrActionName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetSecondaryKeyboardBinding_Statics::NewProp_AxisOrActionName = { "AxisOrActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetSecondaryKeyboardBinding_Parms, AxisOrActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetSecondaryKeyboardBinding_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetSecondaryKeyboardBinding_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetSecondaryKeyboardBinding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetSecondaryKeyboardBinding_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetSecondaryKeyboardBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetSecondaryKeyboardBinding_Statics::NewProp_AxisOrActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetSecondaryKeyboardBinding_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetSecondaryKeyboardBinding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetSecondaryKeyboardBinding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetSecondaryKeyboardBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetSecondaryKeyboardBinding", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetSecondaryKeyboardBinding_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetSecondaryKeyboardBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetSecondaryKeyboardBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetSecondaryKeyboardBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetSecondaryKeyboardBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetSecondaryKeyboardBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetSecondaryKeyboardBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetSFXVolume_Statics
	{
		struct SBZGameUserSettings_eventGetSFXVolume_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetSFXVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetSFXVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetSFXVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetSFXVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetSFXVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetSFXVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetSFXVolume", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetSFXVolume_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetSFXVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetSFXVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetSFXVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetSFXVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetSFXVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetSFXVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetSubtitlesSize_Statics
	{
		struct SBZGameUserSettings_eventGetSubtitlesSize_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetSubtitlesSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetSubtitlesSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetSubtitlesSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetSubtitlesSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetSubtitlesSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetSubtitlesSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetSubtitlesSize", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetSubtitlesSize_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetSubtitlesSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetSubtitlesSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetSubtitlesSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetSubtitlesSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetSubtitlesSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetSubtitlesSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetTargetingSensitivityMultiplier_Statics
	{
		struct SBZGameUserSettings_eventGetTargetingSensitivityMultiplier_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetTargetingSensitivityMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetTargetingSensitivityMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetTargetingSensitivityMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetTargetingSensitivityMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetTargetingSensitivityMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetTargetingSensitivityMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetTargetingSensitivityMultiplier", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetTargetingSensitivityMultiplier_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetTargetingSensitivityMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetTargetingSensitivityMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetTargetingSensitivityMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetTargetingSensitivityMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetTargetingSensitivityMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetTargetingSensitivityMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetTelemetryEnabled_Statics
	{
		struct SBZGameUserSettings_eventGetTelemetryEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_GetTelemetryEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventGetTelemetryEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetTelemetryEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventGetTelemetryEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_GetTelemetryEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetTelemetryEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetTelemetryEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetTelemetryEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetTelemetryEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetTelemetryEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetTelemetryEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetTelemetryEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetTelemetryEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetTelemetryEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetTelemetryEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetTelemetryEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetTelemetryEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetUpscaler_Statics
	{
		struct SBZGameUserSettings_eventGetUpscaler_Parms
		{
			ESBZUpscaler ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetUpscaler_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetUpscaler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetUpscaler_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZUpscaler, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetUpscaler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetUpscaler_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetUpscaler_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetUpscaler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetUpscaler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetUpscaler", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetUpscaler_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetUpscaler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetUpscaler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetUpscaler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetUpscaler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetUpscaler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetUpscaler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetUpscalingMode_Statics
	{
		struct SBZGameUserSettings_eventGetUpscalingMode_Parms
		{
			ESBZUpscalingMode ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetUpscalingMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetUpscalingMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetUpscalingMode_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZUpscalingMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetUpscalingMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetUpscalingMode_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetUpscalingMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetUpscalingMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetUpscalingMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetUpscalingMode", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetUpscalingMode_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetUpscalingMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetUpscalingMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetUpscalingMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetUpscalingMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetUpscalingMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetUpscalingMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetUpscalingSharpness_Statics
	{
		struct SBZGameUserSettings_eventGetUpscalingSharpness_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetUpscalingSharpness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetUpscalingSharpness_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetUpscalingSharpness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetUpscalingSharpness_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetUpscalingSharpness_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetUpscalingSharpness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetUpscalingSharpness", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetUpscalingSharpness_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetUpscalingSharpness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetUpscalingSharpness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetUpscalingSharpness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetUpscalingSharpness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetUpscalingSharpness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetUpscalingSharpness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetVoIPVolume_Statics
	{
		struct SBZGameUserSettings_eventGetVoIPVolume_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetVoIPVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetVoIPVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetVoIPVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetVoIPVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetVoIPVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetVoIPVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetVoIPVolume", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetVoIPVolume_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetVoIPVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetVoIPVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetVoIPVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetVoIPVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetVoIPVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetVoIPVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_GetVOVolume_Statics
	{
		struct SBZGameUserSettings_eventGetVOVolume_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_GetVOVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventGetVOVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_GetVOVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_GetVOVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_GetVOVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_GetVOVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "GetVOVolume", nullptr, nullptr, sizeof(SBZGameUserSettings_eventGetVOVolume_Parms), Z_Construct_UFunction_USBZGameUserSettings_GetVOVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetVOVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_GetVOVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_GetVOVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_GetVOVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_GetVOVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_IsChatDisabled_Statics
	{
		struct SBZGameUserSettings_eventIsChatDisabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_IsChatDisabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventIsChatDisabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_IsChatDisabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventIsChatDisabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_IsChatDisabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_IsChatDisabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_IsChatDisabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_IsChatDisabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_IsChatDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "IsChatDisabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventIsChatDisabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_IsChatDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsChatDisabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_IsChatDisabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsChatDisabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_IsChatDisabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_IsChatDisabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_IsChromaticAberrationEnabled_Statics
	{
		struct SBZGameUserSettings_eventIsChromaticAberrationEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_IsChromaticAberrationEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventIsChromaticAberrationEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_IsChromaticAberrationEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventIsChromaticAberrationEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_IsChromaticAberrationEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_IsChromaticAberrationEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_IsChromaticAberrationEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_IsChromaticAberrationEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_IsChromaticAberrationEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "IsChromaticAberrationEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventIsChromaticAberrationEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_IsChromaticAberrationEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsChromaticAberrationEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_IsChromaticAberrationEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsChromaticAberrationEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_IsChromaticAberrationEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_IsChromaticAberrationEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_IsContractorAudioBriefingEnabled_Statics
	{
		struct SBZGameUserSettings_eventIsContractorAudioBriefingEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_IsContractorAudioBriefingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventIsContractorAudioBriefingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_IsContractorAudioBriefingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventIsContractorAudioBriefingEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_IsContractorAudioBriefingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_IsContractorAudioBriefingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_IsContractorAudioBriefingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_IsContractorAudioBriefingEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_IsContractorAudioBriefingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "IsContractorAudioBriefingEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventIsContractorAudioBriefingEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_IsContractorAudioBriefingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsContractorAudioBriefingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_IsContractorAudioBriefingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsContractorAudioBriefingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_IsContractorAudioBriefingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_IsContractorAudioBriefingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_IsCrossplayDisabled_Statics
	{
		struct SBZGameUserSettings_eventIsCrossplayDisabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_IsCrossplayDisabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventIsCrossplayDisabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_IsCrossplayDisabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventIsCrossplayDisabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_IsCrossplayDisabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_IsCrossplayDisabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_IsCrossplayDisabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_IsCrossplayDisabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_IsCrossplayDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "IsCrossplayDisabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventIsCrossplayDisabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_IsCrossplayDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsCrossplayDisabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_IsCrossplayDisabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsCrossplayDisabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_IsCrossplayDisabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_IsCrossplayDisabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_IsDepthOfFieldEnabled_Statics
	{
		struct SBZGameUserSettings_eventIsDepthOfFieldEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_IsDepthOfFieldEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventIsDepthOfFieldEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_IsDepthOfFieldEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventIsDepthOfFieldEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_IsDepthOfFieldEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_IsDepthOfFieldEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_IsDepthOfFieldEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_IsDepthOfFieldEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_IsDepthOfFieldEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "IsDepthOfFieldEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventIsDepthOfFieldEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_IsDepthOfFieldEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsDepthOfFieldEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_IsDepthOfFieldEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsDepthOfFieldEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_IsDepthOfFieldEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_IsDepthOfFieldEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_IsForceFeedbackEnabled_Statics
	{
		struct SBZGameUserSettings_eventIsForceFeedbackEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_IsForceFeedbackEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventIsForceFeedbackEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_IsForceFeedbackEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventIsForceFeedbackEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_IsForceFeedbackEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_IsForceFeedbackEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_IsForceFeedbackEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_IsForceFeedbackEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_IsForceFeedbackEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "IsForceFeedbackEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventIsForceFeedbackEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_IsForceFeedbackEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsForceFeedbackEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_IsForceFeedbackEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsForceFeedbackEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_IsForceFeedbackEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_IsForceFeedbackEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_IsFPSDisplayEnabled_Statics
	{
		struct SBZGameUserSettings_eventIsFPSDisplayEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_IsFPSDisplayEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventIsFPSDisplayEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_IsFPSDisplayEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventIsFPSDisplayEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_IsFPSDisplayEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_IsFPSDisplayEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_IsFPSDisplayEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_IsFPSDisplayEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_IsFPSDisplayEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "IsFPSDisplayEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventIsFPSDisplayEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_IsFPSDisplayEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsFPSDisplayEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_IsFPSDisplayEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsFPSDisplayEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_IsFPSDisplayEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_IsFPSDisplayEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_IsHoldForTabMenuEnabled_Statics
	{
		struct SBZGameUserSettings_eventIsHoldForTabMenuEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_IsHoldForTabMenuEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventIsHoldForTabMenuEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_IsHoldForTabMenuEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventIsHoldForTabMenuEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_IsHoldForTabMenuEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_IsHoldForTabMenuEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_IsHoldForTabMenuEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_IsHoldForTabMenuEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_IsHoldForTabMenuEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "IsHoldForTabMenuEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventIsHoldForTabMenuEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_IsHoldForTabMenuEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsHoldForTabMenuEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_IsHoldForTabMenuEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsHoldForTabMenuEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_IsHoldForTabMenuEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_IsHoldForTabMenuEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_IsHoldToCrouchEnabled_Statics
	{
		struct SBZGameUserSettings_eventIsHoldToCrouchEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_IsHoldToCrouchEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventIsHoldToCrouchEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_IsHoldToCrouchEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventIsHoldToCrouchEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_IsHoldToCrouchEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_IsHoldToCrouchEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_IsHoldToCrouchEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_IsHoldToCrouchEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_IsHoldToCrouchEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "IsHoldToCrouchEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventIsHoldToCrouchEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_IsHoldToCrouchEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsHoldToCrouchEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_IsHoldToCrouchEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsHoldToCrouchEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_IsHoldToCrouchEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_IsHoldToCrouchEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_IsHoldToRunEnabled_Statics
	{
		struct SBZGameUserSettings_eventIsHoldToRunEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_IsHoldToRunEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventIsHoldToRunEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_IsHoldToRunEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventIsHoldToRunEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_IsHoldToRunEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_IsHoldToRunEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_IsHoldToRunEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_IsHoldToRunEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_IsHoldToRunEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "IsHoldToRunEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventIsHoldToRunEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_IsHoldToRunEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsHoldToRunEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_IsHoldToRunEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsHoldToRunEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_IsHoldToRunEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_IsHoldToRunEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_IsHoldToTargetEnabled_Statics
	{
		struct SBZGameUserSettings_eventIsHoldToTargetEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_IsHoldToTargetEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventIsHoldToTargetEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_IsHoldToTargetEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventIsHoldToTargetEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_IsHoldToTargetEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_IsHoldToTargetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_IsHoldToTargetEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_IsHoldToTargetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_IsHoldToTargetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "IsHoldToTargetEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventIsHoldToTargetEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_IsHoldToTargetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsHoldToTargetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_IsHoldToTargetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsHoldToTargetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_IsHoldToTargetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_IsHoldToTargetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_IsInvertedYAxisEnabled_Statics
	{
		struct SBZGameUserSettings_eventIsInvertedYAxisEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_IsInvertedYAxisEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventIsInvertedYAxisEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_IsInvertedYAxisEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventIsInvertedYAxisEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_IsInvertedYAxisEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_IsInvertedYAxisEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_IsInvertedYAxisEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_IsInvertedYAxisEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_IsInvertedYAxisEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "IsInvertedYAxisEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventIsInvertedYAxisEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_IsInvertedYAxisEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsInvertedYAxisEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_IsInvertedYAxisEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsInvertedYAxisEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_IsInvertedYAxisEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_IsInvertedYAxisEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_IsMotionBlurEnabled_Statics
	{
		struct SBZGameUserSettings_eventIsMotionBlurEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_IsMotionBlurEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventIsMotionBlurEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_IsMotionBlurEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventIsMotionBlurEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_IsMotionBlurEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_IsMotionBlurEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_IsMotionBlurEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_IsMotionBlurEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_IsMotionBlurEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "IsMotionBlurEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventIsMotionBlurEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_IsMotionBlurEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsMotionBlurEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_IsMotionBlurEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsMotionBlurEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_IsMotionBlurEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_IsMotionBlurEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_IsMouseSmoothingEnabled_Statics
	{
		struct SBZGameUserSettings_eventIsMouseSmoothingEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_IsMouseSmoothingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventIsMouseSmoothingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_IsMouseSmoothingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventIsMouseSmoothingEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_IsMouseSmoothingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_IsMouseSmoothingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_IsMouseSmoothingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_IsMouseSmoothingEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_IsMouseSmoothingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "IsMouseSmoothingEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventIsMouseSmoothingEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_IsMouseSmoothingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsMouseSmoothingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_IsMouseSmoothingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsMouseSmoothingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_IsMouseSmoothingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_IsMouseSmoothingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_IsPopupShown_Statics
	{
		struct SBZGameUserSettings_eventIsPopupShown_Parms
		{
			ESBZPopupType PopupType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PopupType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PopupType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameUserSettings_IsPopupShown_Statics::NewProp_PopupType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameUserSettings_IsPopupShown_Statics::NewProp_PopupType = { "PopupType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventIsPopupShown_Parms, PopupType), Z_Construct_UEnum_Starbreeze_ESBZPopupType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZGameUserSettings_IsPopupShown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventIsPopupShown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_IsPopupShown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventIsPopupShown_Parms), &Z_Construct_UFunction_USBZGameUserSettings_IsPopupShown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_IsPopupShown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_IsPopupShown_Statics::NewProp_PopupType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_IsPopupShown_Statics::NewProp_PopupType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_IsPopupShown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_IsPopupShown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_IsPopupShown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "IsPopupShown", nullptr, nullptr, sizeof(SBZGameUserSettings_eventIsPopupShown_Parms), Z_Construct_UFunction_USBZGameUserSettings_IsPopupShown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsPopupShown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_IsPopupShown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsPopupShown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_IsPopupShown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_IsPopupShown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_IsReticleEnabled_Statics
	{
		struct SBZGameUserSettings_eventIsReticleEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_IsReticleEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventIsReticleEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_IsReticleEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventIsReticleEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_IsReticleEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_IsReticleEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_IsReticleEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_IsReticleEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_IsReticleEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "IsReticleEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventIsReticleEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_IsReticleEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsReticleEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_IsReticleEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsReticleEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_IsReticleEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_IsReticleEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_IsStoryVideoButtonsEnabled_Statics
	{
		struct SBZGameUserSettings_eventIsStoryVideoButtonsEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_IsStoryVideoButtonsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventIsStoryVideoButtonsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_IsStoryVideoButtonsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventIsStoryVideoButtonsEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_IsStoryVideoButtonsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_IsStoryVideoButtonsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_IsStoryVideoButtonsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_IsStoryVideoButtonsEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_IsStoryVideoButtonsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "IsStoryVideoButtonsEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventIsStoryVideoButtonsEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_IsStoryVideoButtonsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsStoryVideoButtonsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_IsStoryVideoButtonsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsStoryVideoButtonsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_IsStoryVideoButtonsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_IsStoryVideoButtonsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_IsSwitchWeaponAutomaticallyEnabled_Statics
	{
		struct SBZGameUserSettings_eventIsSwitchWeaponAutomaticallyEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_IsSwitchWeaponAutomaticallyEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventIsSwitchWeaponAutomaticallyEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_IsSwitchWeaponAutomaticallyEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventIsSwitchWeaponAutomaticallyEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_IsSwitchWeaponAutomaticallyEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_IsSwitchWeaponAutomaticallyEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_IsSwitchWeaponAutomaticallyEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_IsSwitchWeaponAutomaticallyEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_IsSwitchWeaponAutomaticallyEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "IsSwitchWeaponAutomaticallyEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventIsSwitchWeaponAutomaticallyEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_IsSwitchWeaponAutomaticallyEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsSwitchWeaponAutomaticallyEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_IsSwitchWeaponAutomaticallyEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_IsSwitchWeaponAutomaticallyEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_IsSwitchWeaponAutomaticallyEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_IsSwitchWeaponAutomaticallyEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetAntiAliasingMode_Statics
	{
		struct SBZGameUserSettings_eventSetAntiAliasingMode_Parms
		{
			int32 Mode;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetAntiAliasingMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetAntiAliasingMode_Parms, Mode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetAntiAliasingMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetAntiAliasingMode_Statics::NewProp_Mode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetAntiAliasingMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetAntiAliasingMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetAntiAliasingMode", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetAntiAliasingMode_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetAntiAliasingMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetAntiAliasingMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetAntiAliasingMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetAntiAliasingMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetAntiAliasingMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetAntiAliasingMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetAudioToDefaults_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetAudioToDefaults_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetAudioToDefaults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetAudioToDefaults", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetAudioToDefaults_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetAudioToDefaults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetAudioToDefaults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetAudioToDefaults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetBrightness_Statics
	{
		struct SBZGameUserSettings_eventSetBrightness_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetBrightness_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetBrightness_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetBrightness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetBrightness_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetBrightness_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetBrightness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetBrightness", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetBrightness_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetBrightness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetBrightness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetBrightness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetBrightness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetBrightness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetBrightness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetCameraVerticalFoV_Statics
	{
		struct SBZGameUserSettings_eventSetCameraVerticalFoV_Parms
		{
			int32 Value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetCameraVerticalFoV_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetCameraVerticalFoV_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetCameraVerticalFoV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetCameraVerticalFoV_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetCameraVerticalFoV_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetCameraVerticalFoV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetCameraVerticalFoV", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetCameraVerticalFoV_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetCameraVerticalFoV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetCameraVerticalFoV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetCameraVerticalFoV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetCameraVerticalFoV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetCameraVerticalFoV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetCameraVerticalFoV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetCapsuleShadowQuality_Statics
	{
		struct SBZGameUserSettings_eventSetCapsuleShadowQuality_Parms
		{
			int32 Quality;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quality;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetCapsuleShadowQuality_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetCapsuleShadowQuality_Parms, Quality), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetCapsuleShadowQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetCapsuleShadowQuality_Statics::NewProp_Quality,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetCapsuleShadowQuality_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetCapsuleShadowQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetCapsuleShadowQuality", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetCapsuleShadowQuality_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetCapsuleShadowQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetCapsuleShadowQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetCapsuleShadowQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetCapsuleShadowQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetCapsuleShadowQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetCapsuleShadowQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetChatDisabled_Statics
	{
		struct SBZGameUserSettings_eventSetChatDisabled_Parms
		{
			bool bDisable;
		};
		static void NewProp_bDisable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_SetChatDisabled_Statics::NewProp_bDisable_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventSetChatDisabled_Parms*)Obj)->bDisable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetChatDisabled_Statics::NewProp_bDisable = { "bDisable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventSetChatDisabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_SetChatDisabled_Statics::NewProp_bDisable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetChatDisabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetChatDisabled_Statics::NewProp_bDisable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetChatDisabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetChatDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetChatDisabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetChatDisabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetChatDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetChatDisabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetChatDisabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetChatDisabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetChatDisabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetChatDisabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetChromaticAberrationEnabled_Statics
	{
		struct SBZGameUserSettings_eventSetChromaticAberrationEnabled_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_SetChromaticAberrationEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventSetChromaticAberrationEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetChromaticAberrationEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventSetChromaticAberrationEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_SetChromaticAberrationEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetChromaticAberrationEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetChromaticAberrationEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetChromaticAberrationEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetChromaticAberrationEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetChromaticAberrationEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetChromaticAberrationEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetChromaticAberrationEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetChromaticAberrationEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetChromaticAberrationEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetChromaticAberrationEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetChromaticAberrationEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetChromaticAberrationEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetCinematicVolume_Statics
	{
		struct SBZGameUserSettings_eventSetCinematicVolume_Parms
		{
			float Volume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetCinematicVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetCinematicVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetCinematicVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetCinematicVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetCinematicVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetCinematicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetCinematicVolume", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetCinematicVolume_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetCinematicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetCinematicVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetCinematicVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetCinematicVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetCinematicVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetCinematicVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetColorBlindMode_Statics
	{
		struct SBZGameUserSettings_eventSetColorBlindMode_Parms
		{
			EColorVisionDeficiency Value;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Value_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetColorBlindMode_Statics::NewProp_Value_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetColorBlindMode_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetColorBlindMode_Parms, Value), Z_Construct_UEnum_SlateCore_EColorVisionDeficiency, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetColorBlindMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetColorBlindMode_Statics::NewProp_Value_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetColorBlindMode_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetColorBlindMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetColorBlindMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetColorBlindMode", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetColorBlindMode_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetColorBlindMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetColorBlindMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetColorBlindMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetColorBlindMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetColorBlindMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetColorBlindMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetColorBlindStrength_Statics
	{
		struct SBZGameUserSettings_eventSetColorBlindStrength_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetColorBlindStrength_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetColorBlindStrength_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetColorBlindStrength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetColorBlindStrength_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetColorBlindStrength_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetColorBlindStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetColorBlindStrength", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetColorBlindStrength_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetColorBlindStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetColorBlindStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetColorBlindStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetColorBlindStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetColorBlindStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetColorBlindStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetContractorAudioBriefingEnabled_Statics
	{
		struct SBZGameUserSettings_eventSetContractorAudioBriefingEnabled_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_SetContractorAudioBriefingEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventSetContractorAudioBriefingEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetContractorAudioBriefingEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventSetContractorAudioBriefingEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_SetContractorAudioBriefingEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetContractorAudioBriefingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetContractorAudioBriefingEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetContractorAudioBriefingEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetContractorAudioBriefingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetContractorAudioBriefingEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetContractorAudioBriefingEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetContractorAudioBriefingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetContractorAudioBriefingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetContractorAudioBriefingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetContractorAudioBriefingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetContractorAudioBriefingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetContractorAudioBriefingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetContrast_Statics
	{
		struct SBZGameUserSettings_eventSetContrast_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetContrast_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetContrast_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetContrast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetContrast_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetContrast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetContrast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetContrast", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetContrast_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetContrast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetContrast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetContrast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetContrast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetContrast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetContrast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarColor_Statics
	{
		struct SBZGameUserSettings_eventSetCrosshairsBarColor_Parms
		{
			FLinearColor Color;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetCrosshairsBarColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarColor_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetCrosshairsBarColor", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetCrosshairsBarColor_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarLength_Statics
	{
		struct SBZGameUserSettings_eventSetCrosshairsBarLength_Parms
		{
			float Length;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarLength_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetCrosshairsBarLength_Parms, Length), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarLength_Statics::NewProp_Length,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarLength_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetCrosshairsBarLength", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetCrosshairsBarLength_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarWidth_Statics
	{
		struct SBZGameUserSettings_eventSetCrosshairsBarWidth_Parms
		{
			float Width;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarWidth_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetCrosshairsBarWidth_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarWidth_Statics::NewProp_Width,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarWidth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetCrosshairsBarWidth", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetCrosshairsBarWidth_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsDotColor_Statics
	{
		struct SBZGameUserSettings_eventSetCrosshairsDotColor_Parms
		{
			FLinearColor Color;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsDotColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetCrosshairsDotColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsDotColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsDotColor_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsDotColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsDotColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetCrosshairsDotColor", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetCrosshairsDotColor_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsDotColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsDotColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsDotColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsDotColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsDotColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsDotColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsDotSize_Statics
	{
		struct SBZGameUserSettings_eventSetCrosshairsDotSize_Parms
		{
			float Size;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsDotSize_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetCrosshairsDotSize_Parms, Size), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsDotSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsDotSize_Statics::NewProp_Size,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsDotSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsDotSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetCrosshairsDotSize", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetCrosshairsDotSize_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsDotSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsDotSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsDotSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsDotSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsDotSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsDotSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairSettings_Statics
	{
		struct SBZGameUserSettings_eventSetCrosshairSettings_Parms
		{
			FSBZCrosshairSettings CrosshairSettings;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CrosshairSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairSettings_Statics::NewProp_CrosshairSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairSettings_Statics::NewProp_CrosshairSettings = { "CrosshairSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetCrosshairSettings_Parms, CrosshairSettings), Z_Construct_UScriptStruct_FSBZCrosshairSettings, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairSettings_Statics::NewProp_CrosshairSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairSettings_Statics::NewProp_CrosshairSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairSettings_Statics::NewProp_CrosshairSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetCrosshairSettings", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetCrosshairSettings_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetCrossplayDisabled_Statics
	{
		struct SBZGameUserSettings_eventSetCrossplayDisabled_Parms
		{
			bool bDisable;
		};
		static void NewProp_bDisable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_SetCrossplayDisabled_Statics::NewProp_bDisable_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventSetCrossplayDisabled_Parms*)Obj)->bDisable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetCrossplayDisabled_Statics::NewProp_bDisable = { "bDisable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventSetCrossplayDisabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_SetCrossplayDisabled_Statics::NewProp_bDisable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetCrossplayDisabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetCrossplayDisabled_Statics::NewProp_bDisable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetCrossplayDisabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetCrossplayDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetCrossplayDisabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetCrossplayDisabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetCrossplayDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetCrossplayDisabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetCrossplayDisabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetCrossplayDisabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetCrossplayDisabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetCrossplayDisabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetCustomVideoToDefaults_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetCustomVideoToDefaults_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetCustomVideoToDefaults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetCustomVideoToDefaults", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetCustomVideoToDefaults_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetCustomVideoToDefaults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetCustomVideoToDefaults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetCustomVideoToDefaults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetDepthOfFieldEnabled_Statics
	{
		struct SBZGameUserSettings_eventSetDepthOfFieldEnabled_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_SetDepthOfFieldEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventSetDepthOfFieldEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetDepthOfFieldEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventSetDepthOfFieldEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_SetDepthOfFieldEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetDepthOfFieldEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetDepthOfFieldEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetDepthOfFieldEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetDepthOfFieldEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetDepthOfFieldEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetDepthOfFieldEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetDepthOfFieldEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetDepthOfFieldEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetDepthOfFieldEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetDepthOfFieldEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetDepthOfFieldEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetDepthOfFieldEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetForceFeedbackEnabled_Statics
	{
		struct SBZGameUserSettings_eventSetForceFeedbackEnabled_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_SetForceFeedbackEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventSetForceFeedbackEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetForceFeedbackEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventSetForceFeedbackEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_SetForceFeedbackEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetForceFeedbackEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetForceFeedbackEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetForceFeedbackEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetForceFeedbackEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetForceFeedbackEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetForceFeedbackEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetForceFeedbackEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetForceFeedbackEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetForceFeedbackEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetForceFeedbackEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetForceFeedbackEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetForceFeedbackEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetFPSDisplayEnabled_Statics
	{
		struct SBZGameUserSettings_eventSetFPSDisplayEnabled_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_SetFPSDisplayEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventSetFPSDisplayEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetFPSDisplayEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventSetFPSDisplayEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_SetFPSDisplayEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetFPSDisplayEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetFPSDisplayEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetFPSDisplayEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetFPSDisplayEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetFPSDisplayEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetFPSDisplayEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetFPSDisplayEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetFPSDisplayEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetFPSDisplayEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetFPSDisplayEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetFPSDisplayEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetFPSDisplayEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetGamepadBindingsPreset_Statics
	{
		struct SBZGameUserSettings_eventSetGamepadBindingsPreset_Parms
		{
			int32 Preset;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Preset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetGamepadBindingsPreset_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetGamepadBindingsPreset_Parms, Preset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetGamepadBindingsPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetGamepadBindingsPreset_Statics::NewProp_Preset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetGamepadBindingsPreset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetGamepadBindingsPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetGamepadBindingsPreset", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetGamepadBindingsPreset_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetGamepadBindingsPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetGamepadBindingsPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetGamepadBindingsPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetGamepadBindingsPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetGamepadBindingsPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetGamepadBindingsPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetGamepadHorizontalSensitivityMultiplier_Statics
	{
		struct SBZGameUserSettings_eventSetGamepadHorizontalSensitivityMultiplier_Parms
		{
			float Sensitivity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Sensitivity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetGamepadHorizontalSensitivityMultiplier_Statics::NewProp_Sensitivity = { "Sensitivity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetGamepadHorizontalSensitivityMultiplier_Parms, Sensitivity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetGamepadHorizontalSensitivityMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetGamepadHorizontalSensitivityMultiplier_Statics::NewProp_Sensitivity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetGamepadHorizontalSensitivityMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetGamepadHorizontalSensitivityMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetGamepadHorizontalSensitivityMultiplier", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetGamepadHorizontalSensitivityMultiplier_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetGamepadHorizontalSensitivityMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetGamepadHorizontalSensitivityMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetGamepadHorizontalSensitivityMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetGamepadHorizontalSensitivityMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetGamepadHorizontalSensitivityMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetGamepadHorizontalSensitivityMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetGamepadToDefaults_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetGamepadToDefaults_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetGamepadToDefaults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetGamepadToDefaults", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetGamepadToDefaults_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetGamepadToDefaults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetGamepadToDefaults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetGamepadToDefaults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetGamepadVerticalSensitivityMultiplier_Statics
	{
		struct SBZGameUserSettings_eventSetGamepadVerticalSensitivityMultiplier_Parms
		{
			float InSensitivity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InSensitivity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetGamepadVerticalSensitivityMultiplier_Statics::NewProp_InSensitivity = { "InSensitivity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetGamepadVerticalSensitivityMultiplier_Parms, InSensitivity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetGamepadVerticalSensitivityMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetGamepadVerticalSensitivityMultiplier_Statics::NewProp_InSensitivity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetGamepadVerticalSensitivityMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetGamepadVerticalSensitivityMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetGamepadVerticalSensitivityMultiplier", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetGamepadVerticalSensitivityMultiplier_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetGamepadVerticalSensitivityMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetGamepadVerticalSensitivityMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetGamepadVerticalSensitivityMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetGamepadVerticalSensitivityMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetGamepadVerticalSensitivityMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetGamepadVerticalSensitivityMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetGameplayToDefaults_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetGameplayToDefaults_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetGameplayToDefaults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetGameplayToDefaults", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetGameplayToDefaults_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetGameplayToDefaults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetGameplayToDefaults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetGameplayToDefaults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetGameSenseEnabled_Statics
	{
		struct SBZGameUserSettings_eventSetGameSenseEnabled_Parms
		{
			bool bIsEnabled;
		};
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_SetGameSenseEnabled_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventSetGameSenseEnabled_Parms*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetGameSenseEnabled_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventSetGameSenseEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_SetGameSenseEnabled_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetGameSenseEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetGameSenseEnabled_Statics::NewProp_bIsEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetGameSenseEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetGameSenseEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetGameSenseEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetGameSenseEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetGameSenseEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetGameSenseEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetGameSenseEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetGameSenseEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetGameSenseEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetGameSenseEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetGamma_Statics
	{
		struct SBZGameUserSettings_eventSetGamma_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetGamma_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetGamma_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetGamma_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetGamma_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetGamma_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetGamma_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetGamma", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetGamma_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetGamma_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetGamma_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetGamma_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetGamma_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetGamma()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetGamma_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorCrit_Statics
	{
		struct SBZGameUserSettings_eventSetHitIndicatorColorCrit_Parms
		{
			FLinearColor Color;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorCrit_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetHitIndicatorColorCrit_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorCrit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorCrit_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorCrit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorCrit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetHitIndicatorColorCrit", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetHitIndicatorColorCrit_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorCrit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorCrit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorCrit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorCrit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorCrit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorCrit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorHit_Statics
	{
		struct SBZGameUserSettings_eventSetHitIndicatorColorHit_Parms
		{
			FLinearColor Color;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorHit_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetHitIndicatorColorHit_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorHit_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetHitIndicatorColorHit", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetHitIndicatorColorHit_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorKill_Statics
	{
		struct SBZGameUserSettings_eventSetHitIndicatorColorKill_Parms
		{
			FLinearColor Color;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorKill_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetHitIndicatorColorKill_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorKill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorKill_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorKill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorKill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetHitIndicatorColorKill", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetHitIndicatorColorKill_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorKill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorKill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorKill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorKill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorKill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorKill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorScale_Statics
	{
		struct SBZGameUserSettings_eventSetHitIndicatorScale_Parms
		{
			float Scale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorScale_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetHitIndicatorScale_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorScale_Statics::NewProp_Scale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetHitIndicatorScale", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetHitIndicatorScale_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorsEnabled_Statics
	{
		struct SBZGameUserSettings_eventSetHitIndicatorsEnabled_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorsEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventSetHitIndicatorsEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorsEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventSetHitIndicatorsEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorsEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorsEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorsEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetHitIndicatorsEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetHitIndicatorsEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SethitIndicatorSettings_Statics
	{
		struct SBZGameUserSettings_eventSethitIndicatorSettings_Parms
		{
			FSBZHitIndicatorSettings HitIndicatorSettings;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitIndicatorSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitIndicatorSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SethitIndicatorSettings_Statics::NewProp_HitIndicatorSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SethitIndicatorSettings_Statics::NewProp_HitIndicatorSettings = { "HitIndicatorSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSethitIndicatorSettings_Parms, HitIndicatorSettings), Z_Construct_UScriptStruct_FSBZHitIndicatorSettings, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SethitIndicatorSettings_Statics::NewProp_HitIndicatorSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SethitIndicatorSettings_Statics::NewProp_HitIndicatorSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SethitIndicatorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SethitIndicatorSettings_Statics::NewProp_HitIndicatorSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SethitIndicatorSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SethitIndicatorSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SethitIndicatorSettings", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSethitIndicatorSettings_Parms), Z_Construct_UFunction_USBZGameUserSettings_SethitIndicatorSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SethitIndicatorSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SethitIndicatorSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SethitIndicatorSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SethitIndicatorSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SethitIndicatorSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetHoldForTabMenuEnabled_Statics
	{
		struct SBZGameUserSettings_eventSetHoldForTabMenuEnabled_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_SetHoldForTabMenuEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventSetHoldForTabMenuEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetHoldForTabMenuEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventSetHoldForTabMenuEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_SetHoldForTabMenuEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetHoldForTabMenuEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetHoldForTabMenuEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetHoldForTabMenuEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetHoldForTabMenuEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetHoldForTabMenuEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetHoldForTabMenuEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetHoldForTabMenuEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetHoldForTabMenuEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetHoldForTabMenuEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetHoldForTabMenuEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetHoldForTabMenuEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetHoldForTabMenuEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetHoldToCrouchEnabled_Statics
	{
		struct SBZGameUserSettings_eventSetHoldToCrouchEnabled_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_SetHoldToCrouchEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventSetHoldToCrouchEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetHoldToCrouchEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventSetHoldToCrouchEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_SetHoldToCrouchEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetHoldToCrouchEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetHoldToCrouchEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetHoldToCrouchEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetHoldToCrouchEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetHoldToCrouchEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetHoldToCrouchEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetHoldToCrouchEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetHoldToCrouchEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetHoldToCrouchEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetHoldToCrouchEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetHoldToCrouchEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetHoldToCrouchEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetHoldToRunEnabled_Statics
	{
		struct SBZGameUserSettings_eventSetHoldToRunEnabled_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_SetHoldToRunEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventSetHoldToRunEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetHoldToRunEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventSetHoldToRunEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_SetHoldToRunEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetHoldToRunEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetHoldToRunEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetHoldToRunEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetHoldToRunEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetHoldToRunEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetHoldToRunEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetHoldToRunEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetHoldToRunEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetHoldToRunEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetHoldToRunEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetHoldToRunEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetHoldToRunEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetHoldToTargetEnabled_Statics
	{
		struct SBZGameUserSettings_eventSetHoldToTargetEnabled_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_SetHoldToTargetEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventSetHoldToTargetEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetHoldToTargetEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventSetHoldToTargetEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_SetHoldToTargetEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetHoldToTargetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetHoldToTargetEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetHoldToTargetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetHoldToTargetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetHoldToTargetEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetHoldToTargetEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetHoldToTargetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetHoldToTargetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetHoldToTargetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetHoldToTargetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetHoldToTargetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetHoldToTargetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetInvertedYAxisEnabled_Statics
	{
		struct SBZGameUserSettings_eventSetInvertedYAxisEnabled_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_SetInvertedYAxisEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventSetInvertedYAxisEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetInvertedYAxisEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventSetInvertedYAxisEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_SetInvertedYAxisEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetInvertedYAxisEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetInvertedYAxisEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetInvertedYAxisEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetInvertedYAxisEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetInvertedYAxisEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetInvertedYAxisEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetInvertedYAxisEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetInvertedYAxisEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetInvertedYAxisEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetInvertedYAxisEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetInvertedYAxisEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetInvertedYAxisEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetKeyboardToDefaults_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetKeyboardToDefaults_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetKeyboardToDefaults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetKeyboardToDefaults", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetKeyboardToDefaults_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetKeyboardToDefaults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetKeyboardToDefaults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetKeyboardToDefaults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetLobbyType_Statics
	{
		struct SBZGameUserSettings_eventSetLobbyType_Parms
		{
			ESBZOnlineJoinType InLobbyType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InLobbyType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InLobbyType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetLobbyType_Statics::NewProp_InLobbyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetLobbyType_Statics::NewProp_InLobbyType = { "InLobbyType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetLobbyType_Parms, InLobbyType), Z_Construct_UEnum_Starbreeze_ESBZOnlineJoinType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetLobbyType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetLobbyType_Statics::NewProp_InLobbyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetLobbyType_Statics::NewProp_InLobbyType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetLobbyType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetLobbyType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetLobbyType", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetLobbyType_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetLobbyType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetLobbyType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetLobbyType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetLobbyType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetLobbyType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetLobbyType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetMasterVolume_Statics
	{
		struct SBZGameUserSettings_eventSetMasterVolume_Parms
		{
			float Volume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetMasterVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetMasterVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetMasterVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetMasterVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetMasterVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetMasterVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetMasterVolume", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetMasterVolume_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetMasterVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetMasterVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetMasterVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetMasterVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetMasterVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetMasterVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetMatchmakingDifficulty_Statics
	{
		struct SBZGameUserSettings_eventSetMatchmakingDifficulty_Parms
		{
			ESBZDifficulty InDifficulty;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InDifficulty_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InDifficulty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetMatchmakingDifficulty_Statics::NewProp_InDifficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetMatchmakingDifficulty_Statics::NewProp_InDifficulty = { "InDifficulty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetMatchmakingDifficulty_Parms, InDifficulty), Z_Construct_UEnum_Starbreeze_ESBZDifficulty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetMatchmakingDifficulty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetMatchmakingDifficulty_Statics::NewProp_InDifficulty_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetMatchmakingDifficulty_Statics::NewProp_InDifficulty,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetMatchmakingDifficulty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetMatchmakingDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetMatchmakingDifficulty", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetMatchmakingDifficulty_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetMatchmakingDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetMatchmakingDifficulty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetMatchmakingDifficulty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetMatchmakingDifficulty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetMatchmakingDifficulty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetMatchmakingDifficulty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetMaxCrosshairsScale_Statics
	{
		struct SBZGameUserSettings_eventSetMaxCrosshairsScale_Parms
		{
			float Scale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetMaxCrosshairsScale_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetMaxCrosshairsScale_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetMaxCrosshairsScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetMaxCrosshairsScale_Statics::NewProp_Scale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetMaxCrosshairsScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetMaxCrosshairsScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetMaxCrosshairsScale", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetMaxCrosshairsScale_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetMaxCrosshairsScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetMaxCrosshairsScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetMaxCrosshairsScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetMaxCrosshairsScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetMaxCrosshairsScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetMaxCrosshairsScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetMinCrosshairsScale_Statics
	{
		struct SBZGameUserSettings_eventSetMinCrosshairsScale_Parms
		{
			float Scale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetMinCrosshairsScale_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetMinCrosshairsScale_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetMinCrosshairsScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetMinCrosshairsScale_Statics::NewProp_Scale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetMinCrosshairsScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetMinCrosshairsScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetMinCrosshairsScale", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetMinCrosshairsScale_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetMinCrosshairsScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetMinCrosshairsScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetMinCrosshairsScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetMinCrosshairsScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetMinCrosshairsScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetMinCrosshairsScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetMotionBlurEnabled_Statics
	{
		struct SBZGameUserSettings_eventSetMotionBlurEnabled_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_SetMotionBlurEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventSetMotionBlurEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetMotionBlurEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventSetMotionBlurEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_SetMotionBlurEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetMotionBlurEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetMotionBlurEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetMotionBlurEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetMotionBlurEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetMotionBlurEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetMotionBlurEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetMotionBlurEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetMotionBlurEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetMotionBlurEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetMotionBlurEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetMotionBlurEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetMotionBlurEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetMouseSensitivity_Statics
	{
		struct SBZGameUserSettings_eventSetMouseSensitivity_Parms
		{
			float Sensitivity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Sensitivity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetMouseSensitivity_Statics::NewProp_Sensitivity = { "Sensitivity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetMouseSensitivity_Parms, Sensitivity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetMouseSensitivity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetMouseSensitivity_Statics::NewProp_Sensitivity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetMouseSensitivity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetMouseSensitivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetMouseSensitivity", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetMouseSensitivity_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetMouseSensitivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetMouseSensitivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetMouseSensitivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetMouseSensitivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetMouseSensitivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetMouseSensitivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetMouseSensitivityMultiplier_Statics
	{
		struct SBZGameUserSettings_eventSetMouseSensitivityMultiplier_Parms
		{
			float Sensitivity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Sensitivity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetMouseSensitivityMultiplier_Statics::NewProp_Sensitivity = { "Sensitivity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetMouseSensitivityMultiplier_Parms, Sensitivity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetMouseSensitivityMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetMouseSensitivityMultiplier_Statics::NewProp_Sensitivity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetMouseSensitivityMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetMouseSensitivityMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetMouseSensitivityMultiplier", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetMouseSensitivityMultiplier_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetMouseSensitivityMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetMouseSensitivityMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetMouseSensitivityMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetMouseSensitivityMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetMouseSensitivityMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetMouseSensitivityMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetMouseSmoothingEnabled_Statics
	{
		struct SBZGameUserSettings_eventSetMouseSmoothingEnabled_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_SetMouseSmoothingEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventSetMouseSmoothingEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetMouseSmoothingEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventSetMouseSmoothingEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_SetMouseSmoothingEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetMouseSmoothingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetMouseSmoothingEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetMouseSmoothingEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetMouseSmoothingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetMouseSmoothingEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetMouseSmoothingEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetMouseSmoothingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetMouseSmoothingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetMouseSmoothingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetMouseSmoothingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetMouseSmoothingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetMouseSmoothingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetMusicVolume_Statics
	{
		struct SBZGameUserSettings_eventSetMusicVolume_Parms
		{
			float Volume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetMusicVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetMusicVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetMusicVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetMusicVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetMusicVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetMusicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetMusicVolume", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetMusicVolume_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetMusicVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetMusicVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetMusicVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetMusicVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetMusicVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetOutlinesEnabled_Statics
	{
		struct SBZGameUserSettings_eventSetOutlinesEnabled_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_SetOutlinesEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventSetOutlinesEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetOutlinesEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventSetOutlinesEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_SetOutlinesEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetOutlinesEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetOutlinesEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetOutlinesEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetOutlinesEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetOutlinesEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetOutlinesEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetOutlinesEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetOutlinesEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetOutlinesEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetOutlinesEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetOutlinesEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetOutlinesEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetPopupShown_Statics
	{
		struct SBZGameUserSettings_eventSetPopupShown_Parms
		{
			ESBZPopupType PopupType;
			bool bIsShown;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PopupType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PopupType;
		static void NewProp_bIsShown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsShown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetPopupShown_Statics::NewProp_PopupType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetPopupShown_Statics::NewProp_PopupType = { "PopupType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetPopupShown_Parms, PopupType), Z_Construct_UEnum_Starbreeze_ESBZPopupType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZGameUserSettings_SetPopupShown_Statics::NewProp_bIsShown_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventSetPopupShown_Parms*)Obj)->bIsShown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetPopupShown_Statics::NewProp_bIsShown = { "bIsShown", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventSetPopupShown_Parms), &Z_Construct_UFunction_USBZGameUserSettings_SetPopupShown_Statics::NewProp_bIsShown_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetPopupShown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetPopupShown_Statics::NewProp_PopupType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetPopupShown_Statics::NewProp_PopupType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetPopupShown_Statics::NewProp_bIsShown,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetPopupShown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetPopupShown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetPopupShown", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetPopupShown_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetPopupShown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetPopupShown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetPopupShown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetPopupShown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetPopupShown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetPopupShown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetPrimaryKeyboardBinding_Statics
	{
		struct SBZGameUserSettings_eventSetPrimaryKeyboardBinding_Parms
		{
			FName AxisOrActionName;
			float Scale;
			FKey Key;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxisOrActionName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetPrimaryKeyboardBinding_Statics::NewProp_AxisOrActionName = { "AxisOrActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetPrimaryKeyboardBinding_Parms, AxisOrActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetPrimaryKeyboardBinding_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetPrimaryKeyboardBinding_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetPrimaryKeyboardBinding_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetPrimaryKeyboardBinding_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetPrimaryKeyboardBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetPrimaryKeyboardBinding_Statics::NewProp_AxisOrActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetPrimaryKeyboardBinding_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetPrimaryKeyboardBinding_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetPrimaryKeyboardBinding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetPrimaryKeyboardBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetPrimaryKeyboardBinding", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetPrimaryKeyboardBinding_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetPrimaryKeyboardBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetPrimaryKeyboardBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetPrimaryKeyboardBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetPrimaryKeyboardBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetPrimaryKeyboardBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetPrimaryKeyboardBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetReticleEnabled_Statics
	{
		struct SBZGameUserSettings_eventSetReticleEnabled_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_SetReticleEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventSetReticleEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetReticleEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventSetReticleEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_SetReticleEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetReticleEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetReticleEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetReticleEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetReticleEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetReticleEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetReticleEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetReticleEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetReticleEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetReticleEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetReticleEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetReticleEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetReticleEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetSecondaryKeyboardBinding_Statics
	{
		struct SBZGameUserSettings_eventSetSecondaryKeyboardBinding_Parms
		{
			FName AxisOrActionName;
			float Scale;
			FKey Key;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxisOrActionName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetSecondaryKeyboardBinding_Statics::NewProp_AxisOrActionName = { "AxisOrActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetSecondaryKeyboardBinding_Parms, AxisOrActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetSecondaryKeyboardBinding_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetSecondaryKeyboardBinding_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetSecondaryKeyboardBinding_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetSecondaryKeyboardBinding_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetSecondaryKeyboardBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetSecondaryKeyboardBinding_Statics::NewProp_AxisOrActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetSecondaryKeyboardBinding_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetSecondaryKeyboardBinding_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetSecondaryKeyboardBinding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetSecondaryKeyboardBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetSecondaryKeyboardBinding", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetSecondaryKeyboardBinding_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetSecondaryKeyboardBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetSecondaryKeyboardBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetSecondaryKeyboardBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetSecondaryKeyboardBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetSecondaryKeyboardBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetSecondaryKeyboardBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetSFXVolume_Statics
	{
		struct SBZGameUserSettings_eventSetSFXVolume_Parms
		{
			float Volume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetSFXVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetSFXVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetSFXVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetSFXVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetSFXVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetSFXVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetSFXVolume", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetSFXVolume_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetSFXVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetSFXVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetSFXVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetSFXVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetSFXVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetSFXVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetStoryVideoButtonsEnabled_Statics
	{
		struct SBZGameUserSettings_eventSetStoryVideoButtonsEnabled_Parms
		{
			bool bInEnable;
		};
		static void NewProp_bInEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_SetStoryVideoButtonsEnabled_Statics::NewProp_bInEnable_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventSetStoryVideoButtonsEnabled_Parms*)Obj)->bInEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetStoryVideoButtonsEnabled_Statics::NewProp_bInEnable = { "bInEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventSetStoryVideoButtonsEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_SetStoryVideoButtonsEnabled_Statics::NewProp_bInEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetStoryVideoButtonsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetStoryVideoButtonsEnabled_Statics::NewProp_bInEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetStoryVideoButtonsEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetStoryVideoButtonsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetStoryVideoButtonsEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetStoryVideoButtonsEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetStoryVideoButtonsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetStoryVideoButtonsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetStoryVideoButtonsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetStoryVideoButtonsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetStoryVideoButtonsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetStoryVideoButtonsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetSubtitlesEnabled_Statics
	{
		struct SBZGameUserSettings_eventSetSubtitlesEnabled_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_SetSubtitlesEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventSetSubtitlesEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetSubtitlesEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventSetSubtitlesEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_SetSubtitlesEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetSubtitlesEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetSubtitlesEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetSubtitlesEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetSubtitlesEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetSubtitlesEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetSubtitlesEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetSubtitlesEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetSubtitlesEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetSubtitlesEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetSubtitlesEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetSubtitlesEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetSubtitlesEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetSubtitlesSize_Statics
	{
		struct SBZGameUserSettings_eventSetSubtitlesSize_Parms
		{
			int32 Value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetSubtitlesSize_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetSubtitlesSize_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetSubtitlesSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetSubtitlesSize_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetSubtitlesSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetSubtitlesSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetSubtitlesSize", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetSubtitlesSize_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetSubtitlesSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetSubtitlesSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetSubtitlesSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetSubtitlesSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetSubtitlesSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetSubtitlesSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetSwitchWeaponAutomaticallyEnabled_Statics
	{
		struct SBZGameUserSettings_eventSetSwitchWeaponAutomaticallyEnabled_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_SetSwitchWeaponAutomaticallyEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventSetSwitchWeaponAutomaticallyEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetSwitchWeaponAutomaticallyEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventSetSwitchWeaponAutomaticallyEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_SetSwitchWeaponAutomaticallyEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetSwitchWeaponAutomaticallyEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetSwitchWeaponAutomaticallyEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetSwitchWeaponAutomaticallyEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetSwitchWeaponAutomaticallyEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetSwitchWeaponAutomaticallyEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetSwitchWeaponAutomaticallyEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetSwitchWeaponAutomaticallyEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetSwitchWeaponAutomaticallyEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetSwitchWeaponAutomaticallyEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetSwitchWeaponAutomaticallyEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetSwitchWeaponAutomaticallyEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetSwitchWeaponAutomaticallyEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetTargetingSensitivityMultiplier_Statics
	{
		struct SBZGameUserSettings_eventSetTargetingSensitivityMultiplier_Parms
		{
			float Sensitivity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Sensitivity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetTargetingSensitivityMultiplier_Statics::NewProp_Sensitivity = { "Sensitivity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetTargetingSensitivityMultiplier_Parms, Sensitivity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetTargetingSensitivityMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetTargetingSensitivityMultiplier_Statics::NewProp_Sensitivity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetTargetingSensitivityMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetTargetingSensitivityMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetTargetingSensitivityMultiplier", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetTargetingSensitivityMultiplier_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetTargetingSensitivityMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetTargetingSensitivityMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetTargetingSensitivityMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetTargetingSensitivityMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetTargetingSensitivityMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetTargetingSensitivityMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetTelemetryEnabled_Statics
	{
		struct SBZGameUserSettings_eventSetTelemetryEnabled_Parms
		{
			bool bIsEnabled;
		};
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZGameUserSettings_SetTelemetryEnabled_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((SBZGameUserSettings_eventSetTelemetryEnabled_Parms*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetTelemetryEnabled_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameUserSettings_eventSetTelemetryEnabled_Parms), &Z_Construct_UFunction_USBZGameUserSettings_SetTelemetryEnabled_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetTelemetryEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetTelemetryEnabled_Statics::NewProp_bIsEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetTelemetryEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetTelemetryEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetTelemetryEnabled", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetTelemetryEnabled_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetTelemetryEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetTelemetryEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetTelemetryEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetTelemetryEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetTelemetryEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetTelemetryEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetUpscaler_Statics
	{
		struct SBZGameUserSettings_eventSetUpscaler_Parms
		{
			ESBZUpscaler Type;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetUpscaler_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetUpscaler_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetUpscaler_Parms, Type), Z_Construct_UEnum_Starbreeze_ESBZUpscaler, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetUpscaler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetUpscaler_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetUpscaler_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetUpscaler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetUpscaler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetUpscaler", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetUpscaler_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetUpscaler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetUpscaler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetUpscaler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetUpscaler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetUpscaler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetUpscaler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetUpscalingMode_Statics
	{
		struct SBZGameUserSettings_eventSetUpscalingMode_Parms
		{
			ESBZUpscalingMode Mode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetUpscalingMode_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetUpscalingMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetUpscalingMode_Parms, Mode), Z_Construct_UEnum_Starbreeze_ESBZUpscalingMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetUpscalingMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetUpscalingMode_Statics::NewProp_Mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetUpscalingMode_Statics::NewProp_Mode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetUpscalingMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetUpscalingMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetUpscalingMode", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetUpscalingMode_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetUpscalingMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetUpscalingMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetUpscalingMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetUpscalingMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetUpscalingMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetUpscalingMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetUpscalingSharpness_Statics
	{
		struct SBZGameUserSettings_eventSetUpscalingSharpness_Parms
		{
			float Sharpness;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Sharpness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetUpscalingSharpness_Statics::NewProp_Sharpness = { "Sharpness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetUpscalingSharpness_Parms, Sharpness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetUpscalingSharpness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetUpscalingSharpness_Statics::NewProp_Sharpness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetUpscalingSharpness_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetUpscalingSharpness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetUpscalingSharpness", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetUpscalingSharpness_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetUpscalingSharpness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetUpscalingSharpness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetUpscalingSharpness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetUpscalingSharpness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetUpscalingSharpness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetUpscalingSharpness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetUserInterfaceToDefaults_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetUserInterfaceToDefaults_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetUserInterfaceToDefaults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetUserInterfaceToDefaults", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetUserInterfaceToDefaults_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetUserInterfaceToDefaults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetUserInterfaceToDefaults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetUserInterfaceToDefaults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetVideoToDefaults_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetVideoToDefaults_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetVideoToDefaults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetVideoToDefaults", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetVideoToDefaults_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetVideoToDefaults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetVideoToDefaults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetVideoToDefaults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetVoIPVolume_Statics
	{
		struct SBZGameUserSettings_eventSetVoIPVolume_Parms
		{
			float Volume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetVoIPVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetVoIPVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetVoIPVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetVoIPVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetVoIPVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetVoIPVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetVoIPVolume", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetVoIPVolume_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetVoIPVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetVoIPVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetVoIPVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetVoIPVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetVoIPVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetVoIPVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameUserSettings_SetVOVolume_Statics
	{
		struct SBZGameUserSettings_eventSetVOVolume_Parms
		{
			float Volume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameUserSettings_SetVOVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameUserSettings_eventSetVOVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameUserSettings_SetVOVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameUserSettings_SetVOVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameUserSettings_SetVOVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameUserSettings_SetVOVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameUserSettings, nullptr, "SetVOVolume", nullptr, nullptr, sizeof(SBZGameUserSettings_eventSetVOVolume_Parms), Z_Construct_UFunction_USBZGameUserSettings_SetVOVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetVOVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameUserSettings_SetVOVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameUserSettings_SetVOVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameUserSettings_SetVOVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameUserSettings_SetVOVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZGameUserSettings_NoRegister()
	{
		return USBZGameUserSettings::StaticClass();
	}
	struct Z_Construct_UClass_USBZGameUserSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SBZVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_SBZVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDLSSG_MetaData[];
#endif
		static void NewProp_bUseDLSSG_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDLSSG;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReflexMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReflexMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReflexMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraVerticalFoV_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CameraVerticalFoV;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FramerateMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FramerateMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FramerateMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Brightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Contrast_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Contrast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gamma_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gamma;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ColorBlindMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorBlindMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ColorBlindMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorBlindStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ColorBlindStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMotionBlur_MetaData[];
#endif
		static void NewProp_bUseMotionBlur_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMotionBlur;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDepthOfField_MetaData[];
#endif
		static void NewProp_bUseDepthOfField_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDepthOfField;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseChromaticAberration_MetaData[];
#endif
		static void NewProp_bUseChromaticAberration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseChromaticAberration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AntiAliasingMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AntiAliasingMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UpscalingMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpscalingMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UpscalingMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpscalingSharpness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpscalingSharpness;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Upscaler_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Upscaler_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Upscaler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleShadowQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CapsuleShadowQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseOutlines_MetaData[];
#endif
		static void NewProp_bUseOutlines_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseOutlines;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSubtitles_MetaData[];
#endif
		static void NewProp_bUseSubtitles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSubtitles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitlesSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubtitlesSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFPSDisplay_MetaData[];
#endif
		static void NewProp_bUseFPSDisplay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFPSDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseReticle_MetaData[];
#endif
		static void NewProp_bUseReticle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseReticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairsBarWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrosshairsBarWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairsBarLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrosshairsBarLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairsDotSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrosshairsDotSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinCrosshairsScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinCrosshairsScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCrosshairsScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxCrosshairsScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairsBarColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CrosshairsBarColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairsDotColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CrosshairsDotColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseHitIndicators_MetaData[];
#endif
		static void NewProp_bUseHitIndicators_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseHitIndicators;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitIndicatorScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitIndicatorScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitIndicatorColorHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitIndicatorColorHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitIndicatorColorCrit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitIndicatorColorCrit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitIndicatorColorKill_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitIndicatorColorKill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableStoryVideoButtons_MetaData[];
#endif
		static void NewProp_bEnableStoryVideoButtons_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableStoryVideoButtons;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LobbyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LobbyType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MatchmakingDifficulty_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchmakingDifficulty_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MatchmakingDifficulty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MasterVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MusicVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MusicVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VOVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VOVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SFXVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SFXVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoipVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VoipVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CinematicVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CinematicVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseContractorAudioBriefing_MetaData[];
#endif
		static void NewProp_bUseContractorAudioBriefing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseContractorAudioBriefing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivityMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivityMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMouseSmoothing_MetaData[];
#endif
		static void NewProp_bUseMouseSmoothing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMouseSmoothing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsGamepadLookSensitivityCurveEnabled_MetaData[];
#endif
		static void NewProp_bIsGamepadLookSensitivityCurveEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsGamepadLookSensitivityCurveEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GamepadLookDeadZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GamepadLookDeadZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GamepadLookAccelerationMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GamepadLookAccelerationMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GamepadLookAccelerationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GamepadLookAccelerationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsGamepadAimAssistEnabled_MetaData[];
#endif
		static void NewProp_bIsGamepadAimAssistEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsGamepadAimAssistEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GamepadAimAssistStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GamepadAimAssistStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GamepadHorizontalSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GamepadHorizontalSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GamepadVerticalSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GamepadVerticalSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseInvertedYAxis_MetaData[];
#endif
		static void NewProp_bUseInvertedYAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseInvertedYAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseForceFeedback_MetaData[];
#endif
		static void NewProp_bUseForceFeedback_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseForceFeedback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetingSensitivityMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetingSensitivityMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseHoldToRun_MetaData[];
#endif
		static void NewProp_bUseHoldToRun_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseHoldToRun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseHoldToCrouch_MetaData[];
#endif
		static void NewProp_bUseHoldToCrouch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseHoldToCrouch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseHoldToTarget_MetaData[];
#endif
		static void NewProp_bUseHoldToTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseHoldToTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHoldToSlide_MetaData[];
#endif
		static void NewProp_bIsHoldToSlide_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHoldToSlide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSwitchWeaponAutomatically_MetaData[];
#endif
		static void NewProp_bUseSwitchWeaponAutomatically_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSwitchWeaponAutomatically;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsChatDisabled_MetaData[];
#endif
		static void NewProp_bIsChatDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsChatDisabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCrossplayDisabled_MetaData[];
#endif
		static void NewProp_bIsCrossplayDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCrossplayDisabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseHoldForTabMenu_MetaData[];
#endif
		static void NewProp_bUseHoldForTabMenu_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseHoldForTabMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRememberSkipIntroSequence_MetaData[];
#endif
		static void NewProp_bIsRememberSkipIntroSequence_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRememberSkipIntroSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadbobScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeadbobScale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxisKeyboardBindings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisKeyboardBindings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AxisKeyboardBindings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionKeyboardBindings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionKeyboardBindings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActionKeyboardBindings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GamepadBindingsPreset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GamepadBindingsPreset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformsBackendSettingsInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlatformsBackendSettingsInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopupsShownBitmask_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PopupsShownBitmask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdapterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdapterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPUPerfIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CPUPerfIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GPUPerfIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GPUPerfIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptimalViewDistanceQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OptimalViewDistanceQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptimalShadowQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OptimalShadowQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptimalOptimalPostProcessQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OptimalOptimalPostProcessQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptimalTextureQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OptimalTextureQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptimalEffectsQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OptimalEffectsQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptimalFoliageQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OptimalFoliageQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptimalShadingQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OptimalShadingQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameInstance;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InvalidSkillSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvalidSkillSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_InvalidSkillSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGameUserSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameUserSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZGameUserSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZGameUserSettings_AreHitIndicatorsEnabled, "AreHitIndicatorsEnabled" }, // 4006483033
		{ &Z_Construct_UFunction_USBZGameUserSettings_AreOutlinesEnabled, "AreOutlinesEnabled" }, // 842227124
		{ &Z_Construct_UFunction_USBZGameUserSettings_AreSubtitlesEnabled, "AreSubtitlesEnabled" }, // 4131998487
		{ &Z_Construct_UFunction_USBZGameUserSettings_AutoSetQuality, "AutoSetQuality" }, // 2201585749
		{ &Z_Construct_UFunction_USBZGameUserSettings_Get, "Get" }, // 355441075
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetAntiAliasingMode, "GetAntiAliasingMode" }, // 4283796841
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetBrightness, "GetBrightness" }, // 1612006570
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetCameraHorizontalFoV, "GetCameraHorizontalFoV" }, // 2857903003
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetCameraVerticalFoV, "GetCameraVerticalFoV" }, // 1522934189
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetCapsuleShadowQuality, "GetCapsuleShadowQuality" }, // 3080633847
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetCinematicVolume, "GetCinematicVolume" }, // 4036398667
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetColorBlindMode, "GetColorBlindMode" }, // 3402981213
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetColorBlindStrength, "GetColorBlindStrength" }, // 392659548
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetContrast, "GetContrast" }, // 3555086853
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarColor, "GetCrosshairsBarColor" }, // 3572885392
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarLength, "GetCrosshairsBarLength" }, // 3547169396
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsBarWidth, "GetCrosshairsBarWidth" }, // 2165344053
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsDotColor, "GetCrosshairsDotColor" }, // 3156263995
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairsDotSize, "GetCrosshairsDotSize" }, // 3317907137
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetCrosshairSettings, "GetCrosshairSettings" }, // 2878727793
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetGamepadBindingsPreset, "GetGamepadBindingsPreset" }, // 486328669
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetGamepadHorizontalSensitivityMultiplier, "GetGamepadHorizontalSensitivityMultiplier" }, // 240682751
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetGamepadVerticalSensitivityMultiplier, "GetGamepadVerticalSensitivityMultiplier" }, // 983890234
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetGameSenseEnabled, "GetGameSenseEnabled" }, // 2493314957
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetGamma, "GetGamma" }, // 1204324862
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorCrit, "GetHitIndicatorColorCrit" }, // 3607177238
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorHit, "GetHitIndicatorColorHit" }, // 1959704951
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorColorKill, "GetHitIndicatorColorKill" }, // 1464788891
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorScale, "GetHitIndicatorScale" }, // 3589652466
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetHitIndicatorSettings, "GetHitIndicatorSettings" }, // 3856757950
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetLobbyType, "GetLobbyType" }, // 127112892
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetMasterVolume, "GetMasterVolume" }, // 3593808588
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetMatchmakingDifficulty, "GetMatchmakingDifficulty" }, // 2004817421
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetMaxCrosshairsScale, "GetMaxCrosshairsScale" }, // 1709150208
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetMinCrosshairsScale, "GetMinCrosshairsScale" }, // 2652653111
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetMouseSensitivity, "GetMouseSensitivity" }, // 2150180080
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetMouseSensitivityMultiplier, "GetMouseSensitivityMultiplier" }, // 3333156641
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetMusicVolume, "GetMusicVolume" }, // 1987324162
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetPrimaryKeyboardBinding, "GetPrimaryKeyboardBinding" }, // 3294892155
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetSBZGameUserSettings, "GetSBZGameUserSettings" }, // 571105686
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetSecondaryKeyboardBinding, "GetSecondaryKeyboardBinding" }, // 1258002184
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetSFXVolume, "GetSFXVolume" }, // 524040154
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetSubtitlesSize, "GetSubtitlesSize" }, // 875225178
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetTargetingSensitivityMultiplier, "GetTargetingSensitivityMultiplier" }, // 3761647451
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetTelemetryEnabled, "GetTelemetryEnabled" }, // 1082615176
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetUpscaler, "GetUpscaler" }, // 1137922117
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetUpscalingMode, "GetUpscalingMode" }, // 577639939
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetUpscalingSharpness, "GetUpscalingSharpness" }, // 1349906057
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetVoIPVolume, "GetVoIPVolume" }, // 3726131947
		{ &Z_Construct_UFunction_USBZGameUserSettings_GetVOVolume, "GetVOVolume" }, // 4065832124
		{ &Z_Construct_UFunction_USBZGameUserSettings_IsChatDisabled, "IsChatDisabled" }, // 99894373
		{ &Z_Construct_UFunction_USBZGameUserSettings_IsChromaticAberrationEnabled, "IsChromaticAberrationEnabled" }, // 154459985
		{ &Z_Construct_UFunction_USBZGameUserSettings_IsContractorAudioBriefingEnabled, "IsContractorAudioBriefingEnabled" }, // 434874118
		{ &Z_Construct_UFunction_USBZGameUserSettings_IsCrossplayDisabled, "IsCrossplayDisabled" }, // 2410615035
		{ &Z_Construct_UFunction_USBZGameUserSettings_IsDepthOfFieldEnabled, "IsDepthOfFieldEnabled" }, // 1878627664
		{ &Z_Construct_UFunction_USBZGameUserSettings_IsForceFeedbackEnabled, "IsForceFeedbackEnabled" }, // 3978614231
		{ &Z_Construct_UFunction_USBZGameUserSettings_IsFPSDisplayEnabled, "IsFPSDisplayEnabled" }, // 895522435
		{ &Z_Construct_UFunction_USBZGameUserSettings_IsHoldForTabMenuEnabled, "IsHoldForTabMenuEnabled" }, // 2392020651
		{ &Z_Construct_UFunction_USBZGameUserSettings_IsHoldToCrouchEnabled, "IsHoldToCrouchEnabled" }, // 470505993
		{ &Z_Construct_UFunction_USBZGameUserSettings_IsHoldToRunEnabled, "IsHoldToRunEnabled" }, // 336525111
		{ &Z_Construct_UFunction_USBZGameUserSettings_IsHoldToTargetEnabled, "IsHoldToTargetEnabled" }, // 3134317590
		{ &Z_Construct_UFunction_USBZGameUserSettings_IsInvertedYAxisEnabled, "IsInvertedYAxisEnabled" }, // 316681507
		{ &Z_Construct_UFunction_USBZGameUserSettings_IsMotionBlurEnabled, "IsMotionBlurEnabled" }, // 574408750
		{ &Z_Construct_UFunction_USBZGameUserSettings_IsMouseSmoothingEnabled, "IsMouseSmoothingEnabled" }, // 671486727
		{ &Z_Construct_UFunction_USBZGameUserSettings_IsPopupShown, "IsPopupShown" }, // 2435459225
		{ &Z_Construct_UFunction_USBZGameUserSettings_IsReticleEnabled, "IsReticleEnabled" }, // 463531893
		{ &Z_Construct_UFunction_USBZGameUserSettings_IsStoryVideoButtonsEnabled, "IsStoryVideoButtonsEnabled" }, // 254694892
		{ &Z_Construct_UFunction_USBZGameUserSettings_IsSwitchWeaponAutomaticallyEnabled, "IsSwitchWeaponAutomaticallyEnabled" }, // 3705385992
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetAntiAliasingMode, "SetAntiAliasingMode" }, // 597210406
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetAudioToDefaults, "SetAudioToDefaults" }, // 2767924956
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetBrightness, "SetBrightness" }, // 4259042942
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetCameraVerticalFoV, "SetCameraVerticalFoV" }, // 191947099
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetCapsuleShadowQuality, "SetCapsuleShadowQuality" }, // 331556273
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetChatDisabled, "SetChatDisabled" }, // 3096559544
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetChromaticAberrationEnabled, "SetChromaticAberrationEnabled" }, // 533125572
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetCinematicVolume, "SetCinematicVolume" }, // 2416796884
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetColorBlindMode, "SetColorBlindMode" }, // 1881487709
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetColorBlindStrength, "SetColorBlindStrength" }, // 1680310851
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetContractorAudioBriefingEnabled, "SetContractorAudioBriefingEnabled" }, // 2384842957
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetContrast, "SetContrast" }, // 4185046901
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarColor, "SetCrosshairsBarColor" }, // 4109634204
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarLength, "SetCrosshairsBarLength" }, // 2963008650
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsBarWidth, "SetCrosshairsBarWidth" }, // 1072701702
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsDotColor, "SetCrosshairsDotColor" }, // 1933210062
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairsDotSize, "SetCrosshairsDotSize" }, // 376318754
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetCrosshairSettings, "SetCrosshairSettings" }, // 1147664393
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetCrossplayDisabled, "SetCrossplayDisabled" }, // 510434967
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetCustomVideoToDefaults, "SetCustomVideoToDefaults" }, // 3688900139
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetDepthOfFieldEnabled, "SetDepthOfFieldEnabled" }, // 302943303
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetForceFeedbackEnabled, "SetForceFeedbackEnabled" }, // 4194041317
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetFPSDisplayEnabled, "SetFPSDisplayEnabled" }, // 1911690109
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetGamepadBindingsPreset, "SetGamepadBindingsPreset" }, // 115591449
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetGamepadHorizontalSensitivityMultiplier, "SetGamepadHorizontalSensitivityMultiplier" }, // 864003951
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetGamepadToDefaults, "SetGamepadToDefaults" }, // 2067051618
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetGamepadVerticalSensitivityMultiplier, "SetGamepadVerticalSensitivityMultiplier" }, // 2674772972
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetGameplayToDefaults, "SetGameplayToDefaults" }, // 3626449312
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetGameSenseEnabled, "SetGameSenseEnabled" }, // 2748906024
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetGamma, "SetGamma" }, // 1835305396
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorCrit, "SetHitIndicatorColorCrit" }, // 955941397
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorHit, "SetHitIndicatorColorHit" }, // 3473329335
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorColorKill, "SetHitIndicatorColorKill" }, // 1627647887
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorScale, "SetHitIndicatorScale" }, // 1004728502
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetHitIndicatorsEnabled, "SetHitIndicatorsEnabled" }, // 3397591251
		{ &Z_Construct_UFunction_USBZGameUserSettings_SethitIndicatorSettings, "SethitIndicatorSettings" }, // 1393757703
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetHoldForTabMenuEnabled, "SetHoldForTabMenuEnabled" }, // 1893281075
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetHoldToCrouchEnabled, "SetHoldToCrouchEnabled" }, // 707771665
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetHoldToRunEnabled, "SetHoldToRunEnabled" }, // 3879123726
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetHoldToTargetEnabled, "SetHoldToTargetEnabled" }, // 4197988293
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetInvertedYAxisEnabled, "SetInvertedYAxisEnabled" }, // 3100690821
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetKeyboardToDefaults, "SetKeyboardToDefaults" }, // 4076290060
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetLobbyType, "SetLobbyType" }, // 1639616538
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetMasterVolume, "SetMasterVolume" }, // 3296037342
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetMatchmakingDifficulty, "SetMatchmakingDifficulty" }, // 942624780
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetMaxCrosshairsScale, "SetMaxCrosshairsScale" }, // 1967518641
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetMinCrosshairsScale, "SetMinCrosshairsScale" }, // 2195908688
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetMotionBlurEnabled, "SetMotionBlurEnabled" }, // 210858854
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetMouseSensitivity, "SetMouseSensitivity" }, // 2410447425
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetMouseSensitivityMultiplier, "SetMouseSensitivityMultiplier" }, // 3652040962
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetMouseSmoothingEnabled, "SetMouseSmoothingEnabled" }, // 1582522652
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetMusicVolume, "SetMusicVolume" }, // 3871609043
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetOutlinesEnabled, "SetOutlinesEnabled" }, // 1797074150
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetPopupShown, "SetPopupShown" }, // 1507354354
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetPrimaryKeyboardBinding, "SetPrimaryKeyboardBinding" }, // 3261181446
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetReticleEnabled, "SetReticleEnabled" }, // 1213437356
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetSecondaryKeyboardBinding, "SetSecondaryKeyboardBinding" }, // 1098724819
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetSFXVolume, "SetSFXVolume" }, // 2101886554
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetStoryVideoButtonsEnabled, "SetStoryVideoButtonsEnabled" }, // 3443479549
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetSubtitlesEnabled, "SetSubtitlesEnabled" }, // 2784862284
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetSubtitlesSize, "SetSubtitlesSize" }, // 1993327796
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetSwitchWeaponAutomaticallyEnabled, "SetSwitchWeaponAutomaticallyEnabled" }, // 1900494308
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetTargetingSensitivityMultiplier, "SetTargetingSensitivityMultiplier" }, // 3442753864
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetTelemetryEnabled, "SetTelemetryEnabled" }, // 2153443974
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetUpscaler, "SetUpscaler" }, // 3344438816
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetUpscalingMode, "SetUpscalingMode" }, // 3126011309
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetUpscalingSharpness, "SetUpscalingSharpness" }, // 1782343623
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetUserInterfaceToDefaults, "SetUserInterfaceToDefaults" }, // 2698624733
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetVideoToDefaults, "SetVideoToDefaults" }, // 3299732129
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetVoIPVolume, "SetVoIPVolume" }, // 248596063
		{ &Z_Construct_UFunction_USBZGameUserSettings_SetVOVolume, "SetVOVolume" }, // 964209767
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGameUserSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_SBZVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_SBZVersion = { "SBZVersion", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, SBZVersion), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_SBZVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_SBZVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseDLSSG_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseDLSSG_SetBit(void* Obj)
	{
		((USBZGameUserSettings*)Obj)->bUseDLSSG = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseDLSSG = { "bUseDLSSG", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZGameUserSettings), &Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseDLSSG_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseDLSSG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseDLSSG_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_ReflexMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_ReflexMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_ReflexMode = { "ReflexMode", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, ReflexMode), Z_Construct_UEnum_Starbreeze_ESBZReflexMode, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_ReflexMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_ReflexMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CameraVerticalFoV_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CameraVerticalFoV = { "CameraVerticalFoV", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, CameraVerticalFoV), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CameraVerticalFoV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CameraVerticalFoV_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_FramerateMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_FramerateMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_FramerateMode = { "FramerateMode", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, FramerateMode), Z_Construct_UEnum_Starbreeze_ESBZFramerateMode, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_FramerateMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_FramerateMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_Brightness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_Brightness = { "Brightness", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, Brightness), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_Brightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_Brightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_Contrast_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_Contrast = { "Contrast", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, Contrast), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_Contrast_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_Contrast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_Gamma_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_Gamma = { "Gamma", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, Gamma), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_Gamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_Gamma_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_ColorBlindMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_ColorBlindMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_ColorBlindMode = { "ColorBlindMode", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, ColorBlindMode), Z_Construct_UEnum_SlateCore_EColorVisionDeficiency, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_ColorBlindMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_ColorBlindMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_ColorBlindStrength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_ColorBlindStrength = { "ColorBlindStrength", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, ColorBlindStrength), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_ColorBlindStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_ColorBlindStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseMotionBlur_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseMotionBlur_SetBit(void* Obj)
	{
		((USBZGameUserSettings*)Obj)->bUseMotionBlur = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseMotionBlur = { "bUseMotionBlur", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZGameUserSettings), &Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseMotionBlur_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseMotionBlur_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseMotionBlur_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseDepthOfField_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseDepthOfField_SetBit(void* Obj)
	{
		((USBZGameUserSettings*)Obj)->bUseDepthOfField = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseDepthOfField = { "bUseDepthOfField", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZGameUserSettings), &Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseDepthOfField_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseDepthOfField_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseDepthOfField_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseChromaticAberration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseChromaticAberration_SetBit(void* Obj)
	{
		((USBZGameUserSettings*)Obj)->bUseChromaticAberration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseChromaticAberration = { "bUseChromaticAberration", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZGameUserSettings), &Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseChromaticAberration_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseChromaticAberration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseChromaticAberration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_AntiAliasingMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_AntiAliasingMode = { "AntiAliasingMode", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, AntiAliasingMode), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_AntiAliasingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_AntiAliasingMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_UpscalingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_UpscalingMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_UpscalingMode = { "UpscalingMode", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, UpscalingMode), Z_Construct_UEnum_Starbreeze_ESBZUpscalingMode, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_UpscalingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_UpscalingMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_UpscalingSharpness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_UpscalingSharpness = { "UpscalingSharpness", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, UpscalingSharpness), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_UpscalingSharpness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_UpscalingSharpness_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_Upscaler_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_Upscaler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_Upscaler = { "Upscaler", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, Upscaler), Z_Construct_UEnum_Starbreeze_ESBZUpscaler, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_Upscaler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_Upscaler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CapsuleShadowQuality_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CapsuleShadowQuality = { "CapsuleShadowQuality", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, CapsuleShadowQuality), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CapsuleShadowQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CapsuleShadowQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseOutlines_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseOutlines_SetBit(void* Obj)
	{
		((USBZGameUserSettings*)Obj)->bUseOutlines = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseOutlines = { "bUseOutlines", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZGameUserSettings), &Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseOutlines_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseOutlines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseOutlines_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseSubtitles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseSubtitles_SetBit(void* Obj)
	{
		((USBZGameUserSettings*)Obj)->bUseSubtitles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseSubtitles = { "bUseSubtitles", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZGameUserSettings), &Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseSubtitles_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseSubtitles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseSubtitles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_SubtitlesSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_SubtitlesSize = { "SubtitlesSize", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, SubtitlesSize), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_SubtitlesSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_SubtitlesSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseFPSDisplay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseFPSDisplay_SetBit(void* Obj)
	{
		((USBZGameUserSettings*)Obj)->bUseFPSDisplay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseFPSDisplay = { "bUseFPSDisplay", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZGameUserSettings), &Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseFPSDisplay_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseFPSDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseFPSDisplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseReticle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseReticle_SetBit(void* Obj)
	{
		((USBZGameUserSettings*)Obj)->bUseReticle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseReticle = { "bUseReticle", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZGameUserSettings), &Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseReticle_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseReticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseReticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CrosshairsBarWidth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CrosshairsBarWidth = { "CrosshairsBarWidth", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, CrosshairsBarWidth), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CrosshairsBarWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CrosshairsBarWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CrosshairsBarLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CrosshairsBarLength = { "CrosshairsBarLength", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, CrosshairsBarLength), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CrosshairsBarLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CrosshairsBarLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CrosshairsDotSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CrosshairsDotSize = { "CrosshairsDotSize", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, CrosshairsDotSize), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CrosshairsDotSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CrosshairsDotSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MinCrosshairsScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MinCrosshairsScale = { "MinCrosshairsScale", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, MinCrosshairsScale), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MinCrosshairsScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MinCrosshairsScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MaxCrosshairsScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MaxCrosshairsScale = { "MaxCrosshairsScale", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, MaxCrosshairsScale), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MaxCrosshairsScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MaxCrosshairsScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CrosshairsBarColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CrosshairsBarColor = { "CrosshairsBarColor", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, CrosshairsBarColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CrosshairsBarColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CrosshairsBarColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CrosshairsDotColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CrosshairsDotColor = { "CrosshairsDotColor", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, CrosshairsDotColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CrosshairsDotColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CrosshairsDotColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHitIndicators_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHitIndicators_SetBit(void* Obj)
	{
		((USBZGameUserSettings*)Obj)->bUseHitIndicators = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHitIndicators = { "bUseHitIndicators", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZGameUserSettings), &Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHitIndicators_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHitIndicators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHitIndicators_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_HitIndicatorScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_HitIndicatorScale = { "HitIndicatorScale", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, HitIndicatorScale), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_HitIndicatorScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_HitIndicatorScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_HitIndicatorColorHit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_HitIndicatorColorHit = { "HitIndicatorColorHit", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, HitIndicatorColorHit), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_HitIndicatorColorHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_HitIndicatorColorHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_HitIndicatorColorCrit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_HitIndicatorColorCrit = { "HitIndicatorColorCrit", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, HitIndicatorColorCrit), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_HitIndicatorColorCrit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_HitIndicatorColorCrit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_HitIndicatorColorKill_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_HitIndicatorColorKill = { "HitIndicatorColorKill", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, HitIndicatorColorKill), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_HitIndicatorColorKill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_HitIndicatorColorKill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bEnableStoryVideoButtons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bEnableStoryVideoButtons_SetBit(void* Obj)
	{
		((USBZGameUserSettings*)Obj)->bEnableStoryVideoButtons = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bEnableStoryVideoButtons = { "bEnableStoryVideoButtons", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZGameUserSettings), &Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bEnableStoryVideoButtons_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bEnableStoryVideoButtons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bEnableStoryVideoButtons_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_LobbyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_LobbyType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_LobbyType = { "LobbyType", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, LobbyType), Z_Construct_UEnum_Starbreeze_ESBZOnlineJoinType, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_LobbyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_LobbyType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MatchmakingDifficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MatchmakingDifficulty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MatchmakingDifficulty = { "MatchmakingDifficulty", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, MatchmakingDifficulty), Z_Construct_UEnum_Starbreeze_ESBZDifficulty, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MatchmakingDifficulty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MatchmakingDifficulty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MasterVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MasterVolume = { "MasterVolume", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, MasterVolume), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MasterVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MasterVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MusicVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MusicVolume = { "MusicVolume", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, MusicVolume), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MusicVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MusicVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_VOVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_VOVolume = { "VOVolume", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, VOVolume), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_VOVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_VOVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_SFXVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_SFXVolume = { "SFXVolume", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, SFXVolume), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_SFXVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_SFXVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_VoipVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_VoipVolume = { "VoipVolume", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, VoipVolume), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_VoipVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_VoipVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CinematicVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CinematicVolume = { "CinematicVolume", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, CinematicVolume), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CinematicVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CinematicVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseContractorAudioBriefing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseContractorAudioBriefing_SetBit(void* Obj)
	{
		((USBZGameUserSettings*)Obj)->bUseContractorAudioBriefing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseContractorAudioBriefing = { "bUseContractorAudioBriefing", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZGameUserSettings), &Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseContractorAudioBriefing_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseContractorAudioBriefing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseContractorAudioBriefing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MouseSensitivityMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MouseSensitivityMultiplier = { "MouseSensitivityMultiplier", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, MouseSensitivityMultiplier), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MouseSensitivityMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MouseSensitivityMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseMouseSmoothing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseMouseSmoothing_SetBit(void* Obj)
	{
		((USBZGameUserSettings*)Obj)->bUseMouseSmoothing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseMouseSmoothing = { "bUseMouseSmoothing", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZGameUserSettings), &Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseMouseSmoothing_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseMouseSmoothing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseMouseSmoothing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsGamepadLookSensitivityCurveEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsGamepadLookSensitivityCurveEnabled_SetBit(void* Obj)
	{
		((USBZGameUserSettings*)Obj)->bIsGamepadLookSensitivityCurveEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsGamepadLookSensitivityCurveEnabled = { "bIsGamepadLookSensitivityCurveEnabled", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZGameUserSettings), &Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsGamepadLookSensitivityCurveEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsGamepadLookSensitivityCurveEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsGamepadLookSensitivityCurveEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadLookDeadZone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadLookDeadZone = { "GamepadLookDeadZone", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, GamepadLookDeadZone), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadLookDeadZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadLookDeadZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadLookAccelerationMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadLookAccelerationMultiplier = { "GamepadLookAccelerationMultiplier", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, GamepadLookAccelerationMultiplier), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadLookAccelerationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadLookAccelerationMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadLookAccelerationTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadLookAccelerationTime = { "GamepadLookAccelerationTime", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, GamepadLookAccelerationTime), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadLookAccelerationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadLookAccelerationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsGamepadAimAssistEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsGamepadAimAssistEnabled_SetBit(void* Obj)
	{
		((USBZGameUserSettings*)Obj)->bIsGamepadAimAssistEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsGamepadAimAssistEnabled = { "bIsGamepadAimAssistEnabled", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZGameUserSettings), &Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsGamepadAimAssistEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsGamepadAimAssistEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsGamepadAimAssistEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadAimAssistStrength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadAimAssistStrength = { "GamepadAimAssistStrength", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, GamepadAimAssistStrength), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadAimAssistStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadAimAssistStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadHorizontalSensitivity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadHorizontalSensitivity = { "GamepadHorizontalSensitivity", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, GamepadHorizontalSensitivity), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadHorizontalSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadHorizontalSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadVerticalSensitivity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadVerticalSensitivity = { "GamepadVerticalSensitivity", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, GamepadVerticalSensitivity), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadVerticalSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadVerticalSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseInvertedYAxis_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseInvertedYAxis_SetBit(void* Obj)
	{
		((USBZGameUserSettings*)Obj)->bUseInvertedYAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseInvertedYAxis = { "bUseInvertedYAxis", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZGameUserSettings), &Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseInvertedYAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseInvertedYAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseInvertedYAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseForceFeedback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseForceFeedback_SetBit(void* Obj)
	{
		((USBZGameUserSettings*)Obj)->bUseForceFeedback = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseForceFeedback = { "bUseForceFeedback", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZGameUserSettings), &Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseForceFeedback_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseForceFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseForceFeedback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_TargetingSensitivityMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_TargetingSensitivityMultiplier = { "TargetingSensitivityMultiplier", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, TargetingSensitivityMultiplier), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_TargetingSensitivityMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_TargetingSensitivityMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHoldToRun_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHoldToRun_SetBit(void* Obj)
	{
		((USBZGameUserSettings*)Obj)->bUseHoldToRun = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHoldToRun = { "bUseHoldToRun", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZGameUserSettings), &Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHoldToRun_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHoldToRun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHoldToRun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHoldToCrouch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHoldToCrouch_SetBit(void* Obj)
	{
		((USBZGameUserSettings*)Obj)->bUseHoldToCrouch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHoldToCrouch = { "bUseHoldToCrouch", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZGameUserSettings), &Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHoldToCrouch_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHoldToCrouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHoldToCrouch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHoldToTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHoldToTarget_SetBit(void* Obj)
	{
		((USBZGameUserSettings*)Obj)->bUseHoldToTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHoldToTarget = { "bUseHoldToTarget", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZGameUserSettings), &Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHoldToTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHoldToTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHoldToTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsHoldToSlide_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsHoldToSlide_SetBit(void* Obj)
	{
		((USBZGameUserSettings*)Obj)->bIsHoldToSlide = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsHoldToSlide = { "bIsHoldToSlide", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZGameUserSettings), &Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsHoldToSlide_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsHoldToSlide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsHoldToSlide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseSwitchWeaponAutomatically_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseSwitchWeaponAutomatically_SetBit(void* Obj)
	{
		((USBZGameUserSettings*)Obj)->bUseSwitchWeaponAutomatically = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseSwitchWeaponAutomatically = { "bUseSwitchWeaponAutomatically", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZGameUserSettings), &Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseSwitchWeaponAutomatically_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseSwitchWeaponAutomatically_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseSwitchWeaponAutomatically_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsChatDisabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsChatDisabled_SetBit(void* Obj)
	{
		((USBZGameUserSettings*)Obj)->bIsChatDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsChatDisabled = { "bIsChatDisabled", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZGameUserSettings), &Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsChatDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsChatDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsChatDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsCrossplayDisabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsCrossplayDisabled_SetBit(void* Obj)
	{
		((USBZGameUserSettings*)Obj)->bIsCrossplayDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsCrossplayDisabled = { "bIsCrossplayDisabled", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZGameUserSettings), &Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsCrossplayDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsCrossplayDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsCrossplayDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MouseSensitivity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MouseSensitivity = { "MouseSensitivity", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, MouseSensitivity), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MouseSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MouseSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHoldForTabMenu_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHoldForTabMenu_SetBit(void* Obj)
	{
		((USBZGameUserSettings*)Obj)->bUseHoldForTabMenu = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHoldForTabMenu = { "bUseHoldForTabMenu", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZGameUserSettings), &Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHoldForTabMenu_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHoldForTabMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHoldForTabMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsRememberSkipIntroSequence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsRememberSkipIntroSequence_SetBit(void* Obj)
	{
		((USBZGameUserSettings*)Obj)->bIsRememberSkipIntroSequence = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsRememberSkipIntroSequence = { "bIsRememberSkipIntroSequence", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZGameUserSettings), &Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsRememberSkipIntroSequence_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsRememberSkipIntroSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsRememberSkipIntroSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_HeadbobScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_HeadbobScale = { "HeadbobScale", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, HeadbobScale), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_HeadbobScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_HeadbobScale_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_AxisKeyboardBindings_Inner = { "AxisKeyboardBindings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZInputAxisKeyboardBinding, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_AxisKeyboardBindings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_AxisKeyboardBindings = { "AxisKeyboardBindings", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, AxisKeyboardBindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_AxisKeyboardBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_AxisKeyboardBindings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_ActionKeyboardBindings_Inner = { "ActionKeyboardBindings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZInputActionKeyboardBinding, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_ActionKeyboardBindings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_ActionKeyboardBindings = { "ActionKeyboardBindings", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, ActionKeyboardBindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_ActionKeyboardBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_ActionKeyboardBindings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadBindingsPreset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadBindingsPreset = { "GamepadBindingsPreset", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, GamepadBindingsPreset), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadBindingsPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadBindingsPreset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_PlatformsBackendSettingsInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_PlatformsBackendSettingsInfo = { "PlatformsBackendSettingsInfo", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, PlatformsBackendSettingsInfo), Z_Construct_UScriptStruct_FSBZPlatformsBackendSettingsInfo, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_PlatformsBackendSettingsInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_PlatformsBackendSettingsInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_PopupsShownBitmask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_PopupsShownBitmask = { "PopupsShownBitmask", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, PopupsShownBitmask), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_PopupsShownBitmask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_PopupsShownBitmask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_AdapterName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_AdapterName = { "AdapterName", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, AdapterName), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_AdapterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_AdapterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CPUPerfIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CPUPerfIndex = { "CPUPerfIndex", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, CPUPerfIndex), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CPUPerfIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CPUPerfIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GPUPerfIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GPUPerfIndex = { "GPUPerfIndex", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, GPUPerfIndex), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GPUPerfIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GPUPerfIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalViewDistanceQuality_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalViewDistanceQuality = { "OptimalViewDistanceQuality", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, OptimalViewDistanceQuality), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalViewDistanceQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalViewDistanceQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalShadowQuality_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalShadowQuality = { "OptimalShadowQuality", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, OptimalShadowQuality), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalShadowQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalShadowQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalOptimalPostProcessQuality_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalOptimalPostProcessQuality = { "OptimalOptimalPostProcessQuality", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, OptimalOptimalPostProcessQuality), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalOptimalPostProcessQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalOptimalPostProcessQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalTextureQuality_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalTextureQuality = { "OptimalTextureQuality", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, OptimalTextureQuality), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalTextureQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalTextureQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalEffectsQuality_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalEffectsQuality = { "OptimalEffectsQuality", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, OptimalEffectsQuality), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalEffectsQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalEffectsQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalFoliageQuality_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalFoliageQuality = { "OptimalFoliageQuality", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, OptimalFoliageQuality), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalFoliageQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalFoliageQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalShadingQuality_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalShadingQuality = { "OptimalShadingQuality", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, OptimalShadingQuality), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalShadingQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalShadingQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GameInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GameInstance = { "GameInstance", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, GameInstance), Z_Construct_UClass_USBZGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GameInstance_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_InvalidSkillSet_ElementProp = { "InvalidSkillSet", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZSkillData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_InvalidSkillSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameUserSettings" },
		{ "ModuleRelativePath", "Public/SBZGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_InvalidSkillSet = { "InvalidSkillSet", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameUserSettings, InvalidSkillSet), METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_InvalidSkillSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_InvalidSkillSet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZGameUserSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_SBZVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseDLSSG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_ReflexMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_ReflexMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CameraVerticalFoV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_FramerateMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_FramerateMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_Brightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_Contrast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_Gamma,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_ColorBlindMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_ColorBlindMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_ColorBlindStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseMotionBlur,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseDepthOfField,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseChromaticAberration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_AntiAliasingMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_UpscalingMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_UpscalingMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_UpscalingSharpness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_Upscaler_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_Upscaler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CapsuleShadowQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseOutlines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseSubtitles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_SubtitlesSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseFPSDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseReticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CrosshairsBarWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CrosshairsBarLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CrosshairsDotSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MinCrosshairsScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MaxCrosshairsScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CrosshairsBarColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CrosshairsDotColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHitIndicators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_HitIndicatorScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_HitIndicatorColorHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_HitIndicatorColorCrit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_HitIndicatorColorKill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bEnableStoryVideoButtons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_LobbyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_LobbyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MatchmakingDifficulty_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MatchmakingDifficulty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MasterVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MusicVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_VOVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_SFXVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_VoipVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CinematicVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseContractorAudioBriefing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MouseSensitivityMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseMouseSmoothing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsGamepadLookSensitivityCurveEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadLookDeadZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadLookAccelerationMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadLookAccelerationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsGamepadAimAssistEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadAimAssistStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadHorizontalSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadVerticalSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseInvertedYAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseForceFeedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_TargetingSensitivityMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHoldToRun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHoldToCrouch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHoldToTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsHoldToSlide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseSwitchWeaponAutomatically,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsChatDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsCrossplayDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_MouseSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bUseHoldForTabMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_bIsRememberSkipIntroSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_HeadbobScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_AxisKeyboardBindings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_AxisKeyboardBindings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_ActionKeyboardBindings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_ActionKeyboardBindings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GamepadBindingsPreset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_PlatformsBackendSettingsInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_PopupsShownBitmask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_AdapterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_CPUPerfIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GPUPerfIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalViewDistanceQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalShadowQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalOptimalPostProcessQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalTextureQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalEffectsQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalFoliageQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_OptimalShadingQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_GameInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_InvalidSkillSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameUserSettings_Statics::NewProp_InvalidSkillSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGameUserSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGameUserSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGameUserSettings_Statics::ClassParams = {
		&USBZGameUserSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZGameUserSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::PropPointers),
		0,
		0x409000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZGameUserSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameUserSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGameUserSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGameUserSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGameUserSettings, 2268122565);
	template<> STARBREEZE_API UClass* StaticClass<USBZGameUserSettings>()
	{
		return USBZGameUserSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGameUserSettings(Z_Construct_UClass_USBZGameUserSettings, &USBZGameUserSettings::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGameUserSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGameUserSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
