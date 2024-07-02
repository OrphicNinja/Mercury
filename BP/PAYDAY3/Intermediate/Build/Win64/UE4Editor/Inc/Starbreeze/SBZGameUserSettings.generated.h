// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZGameUserSettings;
enum class EColorVisionDeficiency : uint8;
struct FLinearColor;
struct FSBZCrosshairSettings;
struct FSBZHitIndicatorSettings;
enum class ESBZOnlineJoinType : uint8;
enum class ESBZDifficulty : uint8;
struct FKey;
class UObject;
enum class ESBZUpscaler : uint8;
enum class ESBZUpscalingMode : uint8;
enum class ESBZPopupType : uint8;
#ifdef STARBREEZE_SBZGameUserSettings_generated_h
#error "SBZGameUserSettings.generated.h already included, missing '#pragma once' in SBZGameUserSettings.h"
#endif
#define STARBREEZE_SBZGameUserSettings_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZGameUserSettings_h_29_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZGameUserSettings_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAreHitIndicatorsEnabled); \
	DECLARE_FUNCTION(execAreOutlinesEnabled); \
	DECLARE_FUNCTION(execAreSubtitlesEnabled); \
	DECLARE_FUNCTION(execAutoSetQuality); \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execGetAntiAliasingMode); \
	DECLARE_FUNCTION(execGetBrightness); \
	DECLARE_FUNCTION(execGetCameraHorizontalFoV); \
	DECLARE_FUNCTION(execGetCameraVerticalFoV); \
	DECLARE_FUNCTION(execGetCapsuleShadowQuality); \
	DECLARE_FUNCTION(execGetCinematicVolume); \
	DECLARE_FUNCTION(execGetColorBlindMode); \
	DECLARE_FUNCTION(execGetColorBlindStrength); \
	DECLARE_FUNCTION(execGetContrast); \
	DECLARE_FUNCTION(execGetCrosshairsBarColor); \
	DECLARE_FUNCTION(execGetCrosshairsBarLength); \
	DECLARE_FUNCTION(execGetCrosshairsBarWidth); \
	DECLARE_FUNCTION(execGetCrosshairsDotColor); \
	DECLARE_FUNCTION(execGetCrosshairsDotSize); \
	DECLARE_FUNCTION(execGetCrosshairSettings); \
	DECLARE_FUNCTION(execGetGamepadBindingsPreset); \
	DECLARE_FUNCTION(execGetGamepadHorizontalSensitivityMultiplier); \
	DECLARE_FUNCTION(execGetGamepadVerticalSensitivityMultiplier); \
	DECLARE_FUNCTION(execGetGameSenseEnabled); \
	DECLARE_FUNCTION(execGetGamma); \
	DECLARE_FUNCTION(execGetHitIndicatorColorCrit); \
	DECLARE_FUNCTION(execGetHitIndicatorColorHit); \
	DECLARE_FUNCTION(execGetHitIndicatorColorKill); \
	DECLARE_FUNCTION(execGetHitIndicatorScale); \
	DECLARE_FUNCTION(execGetHitIndicatorSettings); \
	DECLARE_FUNCTION(execGetLobbyType); \
	DECLARE_FUNCTION(execGetMasterVolume); \
	DECLARE_FUNCTION(execGetMatchmakingDifficulty); \
	DECLARE_FUNCTION(execGetMaxCrosshairsScale); \
	DECLARE_FUNCTION(execGetMinCrosshairsScale); \
	DECLARE_FUNCTION(execGetMouseSensitivity); \
	DECLARE_FUNCTION(execGetMouseSensitivityMultiplier); \
	DECLARE_FUNCTION(execGetMusicVolume); \
	DECLARE_FUNCTION(execGetPrimaryKeyboardBinding); \
	DECLARE_FUNCTION(execGetSBZGameUserSettings); \
	DECLARE_FUNCTION(execGetSecondaryKeyboardBinding); \
	DECLARE_FUNCTION(execGetSFXVolume); \
	DECLARE_FUNCTION(execGetSubtitlesSize); \
	DECLARE_FUNCTION(execGetTargetingSensitivityMultiplier); \
	DECLARE_FUNCTION(execGetTelemetryEnabled); \
	DECLARE_FUNCTION(execGetUpscaler); \
	DECLARE_FUNCTION(execGetUpscalingMode); \
	DECLARE_FUNCTION(execGetUpscalingSharpness); \
	DECLARE_FUNCTION(execGetVoIPVolume); \
	DECLARE_FUNCTION(execGetVOVolume); \
	DECLARE_FUNCTION(execIsChatDisabled); \
	DECLARE_FUNCTION(execIsChromaticAberrationEnabled); \
	DECLARE_FUNCTION(execIsContractorAudioBriefingEnabled); \
	DECLARE_FUNCTION(execIsCrossplayDisabled); \
	DECLARE_FUNCTION(execIsDepthOfFieldEnabled); \
	DECLARE_FUNCTION(execIsForceFeedbackEnabled); \
	DECLARE_FUNCTION(execIsFPSDisplayEnabled); \
	DECLARE_FUNCTION(execIsHoldForTabMenuEnabled); \
	DECLARE_FUNCTION(execIsHoldToCrouchEnabled); \
	DECLARE_FUNCTION(execIsHoldToRunEnabled); \
	DECLARE_FUNCTION(execIsHoldToTargetEnabled); \
	DECLARE_FUNCTION(execIsInvertedYAxisEnabled); \
	DECLARE_FUNCTION(execIsMotionBlurEnabled); \
	DECLARE_FUNCTION(execIsMouseSmoothingEnabled); \
	DECLARE_FUNCTION(execIsPopupShown); \
	DECLARE_FUNCTION(execIsReticleEnabled); \
	DECLARE_FUNCTION(execIsStoryVideoButtonsEnabled); \
	DECLARE_FUNCTION(execIsSwitchWeaponAutomaticallyEnabled); \
	DECLARE_FUNCTION(execSetAntiAliasingMode); \
	DECLARE_FUNCTION(execSetAudioToDefaults); \
	DECLARE_FUNCTION(execSetBrightness); \
	DECLARE_FUNCTION(execSetCameraVerticalFoV); \
	DECLARE_FUNCTION(execSetCapsuleShadowQuality); \
	DECLARE_FUNCTION(execSetChatDisabled); \
	DECLARE_FUNCTION(execSetChromaticAberrationEnabled); \
	DECLARE_FUNCTION(execSetCinematicVolume); \
	DECLARE_FUNCTION(execSetColorBlindMode); \
	DECLARE_FUNCTION(execSetColorBlindStrength); \
	DECLARE_FUNCTION(execSetContractorAudioBriefingEnabled); \
	DECLARE_FUNCTION(execSetContrast); \
	DECLARE_FUNCTION(execSetCrosshairsBarColor); \
	DECLARE_FUNCTION(execSetCrosshairsBarLength); \
	DECLARE_FUNCTION(execSetCrosshairsBarWidth); \
	DECLARE_FUNCTION(execSetCrosshairsDotColor); \
	DECLARE_FUNCTION(execSetCrosshairsDotSize); \
	DECLARE_FUNCTION(execSetCrosshairSettings); \
	DECLARE_FUNCTION(execSetCrossplayDisabled); \
	DECLARE_FUNCTION(execSetCustomVideoToDefaults); \
	DECLARE_FUNCTION(execSetDepthOfFieldEnabled); \
	DECLARE_FUNCTION(execSetForceFeedbackEnabled); \
	DECLARE_FUNCTION(execSetFPSDisplayEnabled); \
	DECLARE_FUNCTION(execSetGamepadBindingsPreset); \
	DECLARE_FUNCTION(execSetGamepadHorizontalSensitivityMultiplier); \
	DECLARE_FUNCTION(execSetGamepadToDefaults); \
	DECLARE_FUNCTION(execSetGamepadVerticalSensitivityMultiplier); \
	DECLARE_FUNCTION(execSetGameplayToDefaults); \
	DECLARE_FUNCTION(execSetGameSenseEnabled); \
	DECLARE_FUNCTION(execSetGamma); \
	DECLARE_FUNCTION(execSetHitIndicatorColorCrit); \
	DECLARE_FUNCTION(execSetHitIndicatorColorHit); \
	DECLARE_FUNCTION(execSetHitIndicatorColorKill); \
	DECLARE_FUNCTION(execSetHitIndicatorScale); \
	DECLARE_FUNCTION(execSetHitIndicatorsEnabled); \
	DECLARE_FUNCTION(execSethitIndicatorSettings); \
	DECLARE_FUNCTION(execSetHoldForTabMenuEnabled); \
	DECLARE_FUNCTION(execSetHoldToCrouchEnabled); \
	DECLARE_FUNCTION(execSetHoldToRunEnabled); \
	DECLARE_FUNCTION(execSetHoldToTargetEnabled); \
	DECLARE_FUNCTION(execSetInvertedYAxisEnabled); \
	DECLARE_FUNCTION(execSetKeyboardToDefaults); \
	DECLARE_FUNCTION(execSetLobbyType); \
	DECLARE_FUNCTION(execSetMasterVolume); \
	DECLARE_FUNCTION(execSetMatchmakingDifficulty); \
	DECLARE_FUNCTION(execSetMaxCrosshairsScale); \
	DECLARE_FUNCTION(execSetMinCrosshairsScale); \
	DECLARE_FUNCTION(execSetMotionBlurEnabled); \
	DECLARE_FUNCTION(execSetMouseSensitivity); \
	DECLARE_FUNCTION(execSetMouseSensitivityMultiplier); \
	DECLARE_FUNCTION(execSetMouseSmoothingEnabled); \
	DECLARE_FUNCTION(execSetMusicVolume); \
	DECLARE_FUNCTION(execSetOutlinesEnabled); \
	DECLARE_FUNCTION(execSetPopupShown); \
	DECLARE_FUNCTION(execSetPrimaryKeyboardBinding); \
	DECLARE_FUNCTION(execSetReticleEnabled); \
	DECLARE_FUNCTION(execSetSecondaryKeyboardBinding); \
	DECLARE_FUNCTION(execSetSFXVolume); \
	DECLARE_FUNCTION(execSetStoryVideoButtonsEnabled); \
	DECLARE_FUNCTION(execSetSubtitlesEnabled); \
	DECLARE_FUNCTION(execSetSubtitlesSize); \
	DECLARE_FUNCTION(execSetSwitchWeaponAutomaticallyEnabled); \
	DECLARE_FUNCTION(execSetTargetingSensitivityMultiplier); \
	DECLARE_FUNCTION(execSetTelemetryEnabled); \
	DECLARE_FUNCTION(execSetUpscaler); \
	DECLARE_FUNCTION(execSetUpscalingMode); \
	DECLARE_FUNCTION(execSetUpscalingSharpness); \
	DECLARE_FUNCTION(execSetUserInterfaceToDefaults); \
	DECLARE_FUNCTION(execSetVideoToDefaults); \
	DECLARE_FUNCTION(execSetVoIPVolume); \
	DECLARE_FUNCTION(execSetVOVolume);


#define PAYDAY3_Source_Starbreeze_Public_SBZGameUserSettings_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAreHitIndicatorsEnabled); \
	DECLARE_FUNCTION(execAreOutlinesEnabled); \
	DECLARE_FUNCTION(execAreSubtitlesEnabled); \
	DECLARE_FUNCTION(execAutoSetQuality); \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execGetAntiAliasingMode); \
	DECLARE_FUNCTION(execGetBrightness); \
	DECLARE_FUNCTION(execGetCameraHorizontalFoV); \
	DECLARE_FUNCTION(execGetCameraVerticalFoV); \
	DECLARE_FUNCTION(execGetCapsuleShadowQuality); \
	DECLARE_FUNCTION(execGetCinematicVolume); \
	DECLARE_FUNCTION(execGetColorBlindMode); \
	DECLARE_FUNCTION(execGetColorBlindStrength); \
	DECLARE_FUNCTION(execGetContrast); \
	DECLARE_FUNCTION(execGetCrosshairsBarColor); \
	DECLARE_FUNCTION(execGetCrosshairsBarLength); \
	DECLARE_FUNCTION(execGetCrosshairsBarWidth); \
	DECLARE_FUNCTION(execGetCrosshairsDotColor); \
	DECLARE_FUNCTION(execGetCrosshairsDotSize); \
	DECLARE_FUNCTION(execGetCrosshairSettings); \
	DECLARE_FUNCTION(execGetGamepadBindingsPreset); \
	DECLARE_FUNCTION(execGetGamepadHorizontalSensitivityMultiplier); \
	DECLARE_FUNCTION(execGetGamepadVerticalSensitivityMultiplier); \
	DECLARE_FUNCTION(execGetGameSenseEnabled); \
	DECLARE_FUNCTION(execGetGamma); \
	DECLARE_FUNCTION(execGetHitIndicatorColorCrit); \
	DECLARE_FUNCTION(execGetHitIndicatorColorHit); \
	DECLARE_FUNCTION(execGetHitIndicatorColorKill); \
	DECLARE_FUNCTION(execGetHitIndicatorScale); \
	DECLARE_FUNCTION(execGetHitIndicatorSettings); \
	DECLARE_FUNCTION(execGetLobbyType); \
	DECLARE_FUNCTION(execGetMasterVolume); \
	DECLARE_FUNCTION(execGetMatchmakingDifficulty); \
	DECLARE_FUNCTION(execGetMaxCrosshairsScale); \
	DECLARE_FUNCTION(execGetMinCrosshairsScale); \
	DECLARE_FUNCTION(execGetMouseSensitivity); \
	DECLARE_FUNCTION(execGetMouseSensitivityMultiplier); \
	DECLARE_FUNCTION(execGetMusicVolume); \
	DECLARE_FUNCTION(execGetPrimaryKeyboardBinding); \
	DECLARE_FUNCTION(execGetSBZGameUserSettings); \
	DECLARE_FUNCTION(execGetSecondaryKeyboardBinding); \
	DECLARE_FUNCTION(execGetSFXVolume); \
	DECLARE_FUNCTION(execGetSubtitlesSize); \
	DECLARE_FUNCTION(execGetTargetingSensitivityMultiplier); \
	DECLARE_FUNCTION(execGetTelemetryEnabled); \
	DECLARE_FUNCTION(execGetUpscaler); \
	DECLARE_FUNCTION(execGetUpscalingMode); \
	DECLARE_FUNCTION(execGetUpscalingSharpness); \
	DECLARE_FUNCTION(execGetVoIPVolume); \
	DECLARE_FUNCTION(execGetVOVolume); \
	DECLARE_FUNCTION(execIsChatDisabled); \
	DECLARE_FUNCTION(execIsChromaticAberrationEnabled); \
	DECLARE_FUNCTION(execIsContractorAudioBriefingEnabled); \
	DECLARE_FUNCTION(execIsCrossplayDisabled); \
	DECLARE_FUNCTION(execIsDepthOfFieldEnabled); \
	DECLARE_FUNCTION(execIsForceFeedbackEnabled); \
	DECLARE_FUNCTION(execIsFPSDisplayEnabled); \
	DECLARE_FUNCTION(execIsHoldForTabMenuEnabled); \
	DECLARE_FUNCTION(execIsHoldToCrouchEnabled); \
	DECLARE_FUNCTION(execIsHoldToRunEnabled); \
	DECLARE_FUNCTION(execIsHoldToTargetEnabled); \
	DECLARE_FUNCTION(execIsInvertedYAxisEnabled); \
	DECLARE_FUNCTION(execIsMotionBlurEnabled); \
	DECLARE_FUNCTION(execIsMouseSmoothingEnabled); \
	DECLARE_FUNCTION(execIsPopupShown); \
	DECLARE_FUNCTION(execIsReticleEnabled); \
	DECLARE_FUNCTION(execIsStoryVideoButtonsEnabled); \
	DECLARE_FUNCTION(execIsSwitchWeaponAutomaticallyEnabled); \
	DECLARE_FUNCTION(execSetAntiAliasingMode); \
	DECLARE_FUNCTION(execSetAudioToDefaults); \
	DECLARE_FUNCTION(execSetBrightness); \
	DECLARE_FUNCTION(execSetCameraVerticalFoV); \
	DECLARE_FUNCTION(execSetCapsuleShadowQuality); \
	DECLARE_FUNCTION(execSetChatDisabled); \
	DECLARE_FUNCTION(execSetChromaticAberrationEnabled); \
	DECLARE_FUNCTION(execSetCinematicVolume); \
	DECLARE_FUNCTION(execSetColorBlindMode); \
	DECLARE_FUNCTION(execSetColorBlindStrength); \
	DECLARE_FUNCTION(execSetContractorAudioBriefingEnabled); \
	DECLARE_FUNCTION(execSetContrast); \
	DECLARE_FUNCTION(execSetCrosshairsBarColor); \
	DECLARE_FUNCTION(execSetCrosshairsBarLength); \
	DECLARE_FUNCTION(execSetCrosshairsBarWidth); \
	DECLARE_FUNCTION(execSetCrosshairsDotColor); \
	DECLARE_FUNCTION(execSetCrosshairsDotSize); \
	DECLARE_FUNCTION(execSetCrosshairSettings); \
	DECLARE_FUNCTION(execSetCrossplayDisabled); \
	DECLARE_FUNCTION(execSetCustomVideoToDefaults); \
	DECLARE_FUNCTION(execSetDepthOfFieldEnabled); \
	DECLARE_FUNCTION(execSetForceFeedbackEnabled); \
	DECLARE_FUNCTION(execSetFPSDisplayEnabled); \
	DECLARE_FUNCTION(execSetGamepadBindingsPreset); \
	DECLARE_FUNCTION(execSetGamepadHorizontalSensitivityMultiplier); \
	DECLARE_FUNCTION(execSetGamepadToDefaults); \
	DECLARE_FUNCTION(execSetGamepadVerticalSensitivityMultiplier); \
	DECLARE_FUNCTION(execSetGameplayToDefaults); \
	DECLARE_FUNCTION(execSetGameSenseEnabled); \
	DECLARE_FUNCTION(execSetGamma); \
	DECLARE_FUNCTION(execSetHitIndicatorColorCrit); \
	DECLARE_FUNCTION(execSetHitIndicatorColorHit); \
	DECLARE_FUNCTION(execSetHitIndicatorColorKill); \
	DECLARE_FUNCTION(execSetHitIndicatorScale); \
	DECLARE_FUNCTION(execSetHitIndicatorsEnabled); \
	DECLARE_FUNCTION(execSethitIndicatorSettings); \
	DECLARE_FUNCTION(execSetHoldForTabMenuEnabled); \
	DECLARE_FUNCTION(execSetHoldToCrouchEnabled); \
	DECLARE_FUNCTION(execSetHoldToRunEnabled); \
	DECLARE_FUNCTION(execSetHoldToTargetEnabled); \
	DECLARE_FUNCTION(execSetInvertedYAxisEnabled); \
	DECLARE_FUNCTION(execSetKeyboardToDefaults); \
	DECLARE_FUNCTION(execSetLobbyType); \
	DECLARE_FUNCTION(execSetMasterVolume); \
	DECLARE_FUNCTION(execSetMatchmakingDifficulty); \
	DECLARE_FUNCTION(execSetMaxCrosshairsScale); \
	DECLARE_FUNCTION(execSetMinCrosshairsScale); \
	DECLARE_FUNCTION(execSetMotionBlurEnabled); \
	DECLARE_FUNCTION(execSetMouseSensitivity); \
	DECLARE_FUNCTION(execSetMouseSensitivityMultiplier); \
	DECLARE_FUNCTION(execSetMouseSmoothingEnabled); \
	DECLARE_FUNCTION(execSetMusicVolume); \
	DECLARE_FUNCTION(execSetOutlinesEnabled); \
	DECLARE_FUNCTION(execSetPopupShown); \
	DECLARE_FUNCTION(execSetPrimaryKeyboardBinding); \
	DECLARE_FUNCTION(execSetReticleEnabled); \
	DECLARE_FUNCTION(execSetSecondaryKeyboardBinding); \
	DECLARE_FUNCTION(execSetSFXVolume); \
	DECLARE_FUNCTION(execSetStoryVideoButtonsEnabled); \
	DECLARE_FUNCTION(execSetSubtitlesEnabled); \
	DECLARE_FUNCTION(execSetSubtitlesSize); \
	DECLARE_FUNCTION(execSetSwitchWeaponAutomaticallyEnabled); \
	DECLARE_FUNCTION(execSetTargetingSensitivityMultiplier); \
	DECLARE_FUNCTION(execSetTelemetryEnabled); \
	DECLARE_FUNCTION(execSetUpscaler); \
	DECLARE_FUNCTION(execSetUpscalingMode); \
	DECLARE_FUNCTION(execSetUpscalingSharpness); \
	DECLARE_FUNCTION(execSetUserInterfaceToDefaults); \
	DECLARE_FUNCTION(execSetVideoToDefaults); \
	DECLARE_FUNCTION(execSetVoIPVolume); \
	DECLARE_FUNCTION(execSetVOVolume);


#define PAYDAY3_Source_Starbreeze_Public_SBZGameUserSettings_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZGameUserSettings(); \
	friend struct Z_Construct_UClass_USBZGameUserSettings_Statics; \
public: \
	DECLARE_CLASS(USBZGameUserSettings, UGameUserSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZGameUserSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZGameUserSettings_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUSBZGameUserSettings(); \
	friend struct Z_Construct_UClass_USBZGameUserSettings_Statics; \
public: \
	DECLARE_CLASS(USBZGameUserSettings, UGameUserSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZGameUserSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define PAYDAY3_Source_Starbreeze_Public_SBZGameUserSettings_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZGameUserSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZGameUserSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZGameUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZGameUserSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZGameUserSettings(USBZGameUserSettings&&); \
	NO_API USBZGameUserSettings(const USBZGameUserSettings&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZGameUserSettings_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZGameUserSettings(USBZGameUserSettings&&); \
	NO_API USBZGameUserSettings(const USBZGameUserSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZGameUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZGameUserSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZGameUserSettings)


#define PAYDAY3_Source_Starbreeze_Public_SBZGameUserSettings_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SBZVersion() { return STRUCT_OFFSET(USBZGameUserSettings, SBZVersion); } \
	FORCEINLINE static uint32 __PPO__ReflexMode() { return STRUCT_OFFSET(USBZGameUserSettings, ReflexMode); } \
	FORCEINLINE static uint32 __PPO__CameraVerticalFoV() { return STRUCT_OFFSET(USBZGameUserSettings, CameraVerticalFoV); } \
	FORCEINLINE static uint32 __PPO__FramerateMode() { return STRUCT_OFFSET(USBZGameUserSettings, FramerateMode); } \
	FORCEINLINE static uint32 __PPO__Brightness() { return STRUCT_OFFSET(USBZGameUserSettings, Brightness); } \
	FORCEINLINE static uint32 __PPO__Contrast() { return STRUCT_OFFSET(USBZGameUserSettings, Contrast); } \
	FORCEINLINE static uint32 __PPO__Gamma() { return STRUCT_OFFSET(USBZGameUserSettings, Gamma); } \
	FORCEINLINE static uint32 __PPO__ColorBlindMode() { return STRUCT_OFFSET(USBZGameUserSettings, ColorBlindMode); } \
	FORCEINLINE static uint32 __PPO__ColorBlindStrength() { return STRUCT_OFFSET(USBZGameUserSettings, ColorBlindStrength); } \
	FORCEINLINE static uint32 __PPO__bUseMotionBlur() { return STRUCT_OFFSET(USBZGameUserSettings, bUseMotionBlur); } \
	FORCEINLINE static uint32 __PPO__bUseDepthOfField() { return STRUCT_OFFSET(USBZGameUserSettings, bUseDepthOfField); } \
	FORCEINLINE static uint32 __PPO__bUseChromaticAberration() { return STRUCT_OFFSET(USBZGameUserSettings, bUseChromaticAberration); } \
	FORCEINLINE static uint32 __PPO__AntiAliasingMode() { return STRUCT_OFFSET(USBZGameUserSettings, AntiAliasingMode); } \
	FORCEINLINE static uint32 __PPO__UpscalingMode() { return STRUCT_OFFSET(USBZGameUserSettings, UpscalingMode); } \
	FORCEINLINE static uint32 __PPO__UpscalingSharpness() { return STRUCT_OFFSET(USBZGameUserSettings, UpscalingSharpness); } \
	FORCEINLINE static uint32 __PPO__Upscaler() { return STRUCT_OFFSET(USBZGameUserSettings, Upscaler); } \
	FORCEINLINE static uint32 __PPO__CapsuleShadowQuality() { return STRUCT_OFFSET(USBZGameUserSettings, CapsuleShadowQuality); } \
	FORCEINLINE static uint32 __PPO__bUseOutlines() { return STRUCT_OFFSET(USBZGameUserSettings, bUseOutlines); } \
	FORCEINLINE static uint32 __PPO__bUseSubtitles() { return STRUCT_OFFSET(USBZGameUserSettings, bUseSubtitles); } \
	FORCEINLINE static uint32 __PPO__SubtitlesSize() { return STRUCT_OFFSET(USBZGameUserSettings, SubtitlesSize); } \
	FORCEINLINE static uint32 __PPO__bUseFPSDisplay() { return STRUCT_OFFSET(USBZGameUserSettings, bUseFPSDisplay); } \
	FORCEINLINE static uint32 __PPO__bUseReticle() { return STRUCT_OFFSET(USBZGameUserSettings, bUseReticle); } \
	FORCEINLINE static uint32 __PPO__CrosshairsBarWidth() { return STRUCT_OFFSET(USBZGameUserSettings, CrosshairsBarWidth); } \
	FORCEINLINE static uint32 __PPO__CrosshairsBarLength() { return STRUCT_OFFSET(USBZGameUserSettings, CrosshairsBarLength); } \
	FORCEINLINE static uint32 __PPO__CrosshairsDotSize() { return STRUCT_OFFSET(USBZGameUserSettings, CrosshairsDotSize); } \
	FORCEINLINE static uint32 __PPO__MinCrosshairsScale() { return STRUCT_OFFSET(USBZGameUserSettings, MinCrosshairsScale); } \
	FORCEINLINE static uint32 __PPO__MaxCrosshairsScale() { return STRUCT_OFFSET(USBZGameUserSettings, MaxCrosshairsScale); } \
	FORCEINLINE static uint32 __PPO__CrosshairsBarColor() { return STRUCT_OFFSET(USBZGameUserSettings, CrosshairsBarColor); } \
	FORCEINLINE static uint32 __PPO__CrosshairsDotColor() { return STRUCT_OFFSET(USBZGameUserSettings, CrosshairsDotColor); } \
	FORCEINLINE static uint32 __PPO__bUseHitIndicators() { return STRUCT_OFFSET(USBZGameUserSettings, bUseHitIndicators); } \
	FORCEINLINE static uint32 __PPO__HitIndicatorScale() { return STRUCT_OFFSET(USBZGameUserSettings, HitIndicatorScale); } \
	FORCEINLINE static uint32 __PPO__HitIndicatorColorHit() { return STRUCT_OFFSET(USBZGameUserSettings, HitIndicatorColorHit); } \
	FORCEINLINE static uint32 __PPO__HitIndicatorColorCrit() { return STRUCT_OFFSET(USBZGameUserSettings, HitIndicatorColorCrit); } \
	FORCEINLINE static uint32 __PPO__HitIndicatorColorKill() { return STRUCT_OFFSET(USBZGameUserSettings, HitIndicatorColorKill); } \
	FORCEINLINE static uint32 __PPO__bEnableStoryVideoButtons() { return STRUCT_OFFSET(USBZGameUserSettings, bEnableStoryVideoButtons); } \
	FORCEINLINE static uint32 __PPO__LobbyType() { return STRUCT_OFFSET(USBZGameUserSettings, LobbyType); } \
	FORCEINLINE static uint32 __PPO__MatchmakingDifficulty() { return STRUCT_OFFSET(USBZGameUserSettings, MatchmakingDifficulty); } \
	FORCEINLINE static uint32 __PPO__MasterVolume() { return STRUCT_OFFSET(USBZGameUserSettings, MasterVolume); } \
	FORCEINLINE static uint32 __PPO__MusicVolume() { return STRUCT_OFFSET(USBZGameUserSettings, MusicVolume); } \
	FORCEINLINE static uint32 __PPO__VOVolume() { return STRUCT_OFFSET(USBZGameUserSettings, VOVolume); } \
	FORCEINLINE static uint32 __PPO__SFXVolume() { return STRUCT_OFFSET(USBZGameUserSettings, SFXVolume); } \
	FORCEINLINE static uint32 __PPO__VoipVolume() { return STRUCT_OFFSET(USBZGameUserSettings, VoipVolume); } \
	FORCEINLINE static uint32 __PPO__CinematicVolume() { return STRUCT_OFFSET(USBZGameUserSettings, CinematicVolume); } \
	FORCEINLINE static uint32 __PPO__bUseContractorAudioBriefing() { return STRUCT_OFFSET(USBZGameUserSettings, bUseContractorAudioBriefing); } \
	FORCEINLINE static uint32 __PPO__MouseSensitivityMultiplier() { return STRUCT_OFFSET(USBZGameUserSettings, MouseSensitivityMultiplier); } \
	FORCEINLINE static uint32 __PPO__bUseMouseSmoothing() { return STRUCT_OFFSET(USBZGameUserSettings, bUseMouseSmoothing); } \
	FORCEINLINE static uint32 __PPO__bIsGamepadLookSensitivityCurveEnabled() { return STRUCT_OFFSET(USBZGameUserSettings, bIsGamepadLookSensitivityCurveEnabled); } \
	FORCEINLINE static uint32 __PPO__GamepadLookDeadZone() { return STRUCT_OFFSET(USBZGameUserSettings, GamepadLookDeadZone); } \
	FORCEINLINE static uint32 __PPO__GamepadLookAccelerationMultiplier() { return STRUCT_OFFSET(USBZGameUserSettings, GamepadLookAccelerationMultiplier); } \
	FORCEINLINE static uint32 __PPO__GamepadLookAccelerationTime() { return STRUCT_OFFSET(USBZGameUserSettings, GamepadLookAccelerationTime); } \
	FORCEINLINE static uint32 __PPO__bIsGamepadAimAssistEnabled() { return STRUCT_OFFSET(USBZGameUserSettings, bIsGamepadAimAssistEnabled); } \
	FORCEINLINE static uint32 __PPO__GamepadAimAssistStrength() { return STRUCT_OFFSET(USBZGameUserSettings, GamepadAimAssistStrength); } \
	FORCEINLINE static uint32 __PPO__GamepadHorizontalSensitivity() { return STRUCT_OFFSET(USBZGameUserSettings, GamepadHorizontalSensitivity); } \
	FORCEINLINE static uint32 __PPO__GamepadVerticalSensitivity() { return STRUCT_OFFSET(USBZGameUserSettings, GamepadVerticalSensitivity); } \
	FORCEINLINE static uint32 __PPO__bUseInvertedYAxis() { return STRUCT_OFFSET(USBZGameUserSettings, bUseInvertedYAxis); } \
	FORCEINLINE static uint32 __PPO__bUseForceFeedback() { return STRUCT_OFFSET(USBZGameUserSettings, bUseForceFeedback); } \
	FORCEINLINE static uint32 __PPO__TargetingSensitivityMultiplier() { return STRUCT_OFFSET(USBZGameUserSettings, TargetingSensitivityMultiplier); } \
	FORCEINLINE static uint32 __PPO__bUseHoldToRun() { return STRUCT_OFFSET(USBZGameUserSettings, bUseHoldToRun); } \
	FORCEINLINE static uint32 __PPO__bUseHoldToCrouch() { return STRUCT_OFFSET(USBZGameUserSettings, bUseHoldToCrouch); } \
	FORCEINLINE static uint32 __PPO__bUseHoldToTarget() { return STRUCT_OFFSET(USBZGameUserSettings, bUseHoldToTarget); } \
	FORCEINLINE static uint32 __PPO__bIsHoldToSlide() { return STRUCT_OFFSET(USBZGameUserSettings, bIsHoldToSlide); } \
	FORCEINLINE static uint32 __PPO__bUseSwitchWeaponAutomatically() { return STRUCT_OFFSET(USBZGameUserSettings, bUseSwitchWeaponAutomatically); } \
	FORCEINLINE static uint32 __PPO__bIsChatDisabled() { return STRUCT_OFFSET(USBZGameUserSettings, bIsChatDisabled); } \
	FORCEINLINE static uint32 __PPO__bIsCrossplayDisabled() { return STRUCT_OFFSET(USBZGameUserSettings, bIsCrossplayDisabled); } \
	FORCEINLINE static uint32 __PPO__MouseSensitivity() { return STRUCT_OFFSET(USBZGameUserSettings, MouseSensitivity); } \
	FORCEINLINE static uint32 __PPO__bUseHoldForTabMenu() { return STRUCT_OFFSET(USBZGameUserSettings, bUseHoldForTabMenu); } \
	FORCEINLINE static uint32 __PPO__bIsRememberSkipIntroSequence() { return STRUCT_OFFSET(USBZGameUserSettings, bIsRememberSkipIntroSequence); } \
	FORCEINLINE static uint32 __PPO__HeadbobScale() { return STRUCT_OFFSET(USBZGameUserSettings, HeadbobScale); } \
	FORCEINLINE static uint32 __PPO__AxisKeyboardBindings() { return STRUCT_OFFSET(USBZGameUserSettings, AxisKeyboardBindings); } \
	FORCEINLINE static uint32 __PPO__ActionKeyboardBindings() { return STRUCT_OFFSET(USBZGameUserSettings, ActionKeyboardBindings); } \
	FORCEINLINE static uint32 __PPO__GamepadBindingsPreset() { return STRUCT_OFFSET(USBZGameUserSettings, GamepadBindingsPreset); } \
	FORCEINLINE static uint32 __PPO__PlatformsBackendSettingsInfo() { return STRUCT_OFFSET(USBZGameUserSettings, PlatformsBackendSettingsInfo); } \
	FORCEINLINE static uint32 __PPO__PopupsShownBitmask() { return STRUCT_OFFSET(USBZGameUserSettings, PopupsShownBitmask); } \
	FORCEINLINE static uint32 __PPO__AdapterName() { return STRUCT_OFFSET(USBZGameUserSettings, AdapterName); } \
	FORCEINLINE static uint32 __PPO__CPUPerfIndex() { return STRUCT_OFFSET(USBZGameUserSettings, CPUPerfIndex); } \
	FORCEINLINE static uint32 __PPO__GPUPerfIndex() { return STRUCT_OFFSET(USBZGameUserSettings, GPUPerfIndex); } \
	FORCEINLINE static uint32 __PPO__OptimalViewDistanceQuality() { return STRUCT_OFFSET(USBZGameUserSettings, OptimalViewDistanceQuality); } \
	FORCEINLINE static uint32 __PPO__OptimalShadowQuality() { return STRUCT_OFFSET(USBZGameUserSettings, OptimalShadowQuality); } \
	FORCEINLINE static uint32 __PPO__OptimalOptimalPostProcessQuality() { return STRUCT_OFFSET(USBZGameUserSettings, OptimalOptimalPostProcessQuality); } \
	FORCEINLINE static uint32 __PPO__OptimalTextureQuality() { return STRUCT_OFFSET(USBZGameUserSettings, OptimalTextureQuality); } \
	FORCEINLINE static uint32 __PPO__OptimalEffectsQuality() { return STRUCT_OFFSET(USBZGameUserSettings, OptimalEffectsQuality); } \
	FORCEINLINE static uint32 __PPO__OptimalFoliageQuality() { return STRUCT_OFFSET(USBZGameUserSettings, OptimalFoliageQuality); } \
	FORCEINLINE static uint32 __PPO__OptimalShadingQuality() { return STRUCT_OFFSET(USBZGameUserSettings, OptimalShadingQuality); } \
	FORCEINLINE static uint32 __PPO__GameInstance() { return STRUCT_OFFSET(USBZGameUserSettings, GameInstance); } \
	FORCEINLINE static uint32 __PPO__InvalidSkillSet() { return STRUCT_OFFSET(USBZGameUserSettings, InvalidSkillSet); }


#define PAYDAY3_Source_Starbreeze_Public_SBZGameUserSettings_h_27_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZGameUserSettings_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGameUserSettings_h_29_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGameUserSettings_h_29_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGameUserSettings_h_29_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameUserSettings_h_29_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameUserSettings_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZGameUserSettings_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZGameUserSettings_h_29_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZGameUserSettings_h_29_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZGameUserSettings_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameUserSettings_h_29_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZGameUserSettings_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZGameUserSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZGameUserSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
