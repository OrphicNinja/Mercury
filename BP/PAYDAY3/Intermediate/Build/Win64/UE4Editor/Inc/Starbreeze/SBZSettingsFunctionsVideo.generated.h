// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class ESBZFramerateMode : int32;
enum class ESBZReflexMode : int32;
struct FIntPoint;
enum class ESBZUpscaler : uint8;
enum class ESBZUpscalingMode : uint8;
#ifdef STARBREEZE_SBZSettingsFunctionsVideo_generated_h
#error "SBZSettingsFunctionsVideo.generated.h already included, missing '#pragma once' in SBZSettingsFunctionsVideo.h"
#endif
#define STARBREEZE_SBZSettingsFunctionsVideo_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsFunctionsVideo_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsFunctionsVideo_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAntiAliasingMode); \
	DECLARE_FUNCTION(execGetBrightness); \
	DECLARE_FUNCTION(execGetButtonVisibilityDLSSG); \
	DECLARE_FUNCTION(execGetButtonVisibilityFramerateMode); \
	DECLARE_FUNCTION(execGetButtonVisibilityReflexMode); \
	DECLARE_FUNCTION(execGetButtonVisibilityUpscalingMode); \
	DECLARE_FUNCTION(execGetButtonVisibilityUpscalingSharpness); \
	DECLARE_FUNCTION(execGetButtonVisibilityVSync); \
	DECLARE_FUNCTION(execGetCameraVerticalFieldOfView); \
	DECLARE_FUNCTION(execGetColorBlindMode); \
	DECLARE_FUNCTION(execGetColorBlindStrength); \
	DECLARE_FUNCTION(execGetContrast); \
	DECLARE_FUNCTION(execGetDefaultAntiAliasingMode); \
	DECLARE_FUNCTION(execGetDefaultBrightness); \
	DECLARE_FUNCTION(execGetDefaultCameraVerticalFieldOfView); \
	DECLARE_FUNCTION(execGetDefaultColorBlindMode); \
	DECLARE_FUNCTION(execGetDefaultColorBlindStrength); \
	DECLARE_FUNCTION(execGetDefaultContrast); \
	DECLARE_FUNCTION(execGetDefaultEffectsQuality); \
	DECLARE_FUNCTION(execGetDefaultFoliageQuality); \
	DECLARE_FUNCTION(execGetDefaultFramerateLimit); \
	DECLARE_FUNCTION(execGetDefaultFramerateMode); \
	DECLARE_FUNCTION(execGetDefaultGamma); \
	DECLARE_FUNCTION(execGetDefaultMaterialsQuality); \
	DECLARE_FUNCTION(execGetDefaultPostProcessingQuality); \
	DECLARE_FUNCTION(execGetDefaultReflexMode); \
	DECLARE_FUNCTION(execGetDefaultResolution); \
	DECLARE_FUNCTION(execGetDefaultShadowQuality); \
	DECLARE_FUNCTION(execGetDefaultTextureQuality); \
	DECLARE_FUNCTION(execGetDefaultUpscaler); \
	DECLARE_FUNCTION(execGetDefaultUpscalingMode); \
	DECLARE_FUNCTION(execGetDefaultUpscalingSharpness); \
	DECLARE_FUNCTION(execGetDefaultViewDistanceQuality); \
	DECLARE_FUNCTION(execGetDefaultWindowMode); \
	DECLARE_FUNCTION(execGetEffectsQuality); \
	DECLARE_FUNCTION(execGetFoliageQuality); \
	DECLARE_FUNCTION(execGetFramerateLimit); \
	DECLARE_FUNCTION(execGetFramerateMode); \
	DECLARE_FUNCTION(execGetGamma); \
	DECLARE_FUNCTION(execGetMaterialsQuality); \
	DECLARE_FUNCTION(execGetPostProcessingQuality); \
	DECLARE_FUNCTION(execGetReflexMode); \
	DECLARE_FUNCTION(execGetResolution); \
	DECLARE_FUNCTION(execGetShadowQuality); \
	DECLARE_FUNCTION(execGetTextureQuality); \
	DECLARE_FUNCTION(execGetUpscaler); \
	DECLARE_FUNCTION(execGetUpscalingMode); \
	DECLARE_FUNCTION(execGetUpscalingSharpness); \
	DECLARE_FUNCTION(execGetViewDistanceQuality); \
	DECLARE_FUNCTION(execGetWindowMode); \
	DECLARE_FUNCTION(execIsChromaticAberrationEnabled); \
	DECLARE_FUNCTION(execIsChromaticAberrationEnabledByDefault); \
	DECLARE_FUNCTION(execIsDepthOfFieldEnabled); \
	DECLARE_FUNCTION(execIsDepthOfFieldEnabledByDefault); \
	DECLARE_FUNCTION(execIsDLSSGEnabled); \
	DECLARE_FUNCTION(execIsDLSSGEnabledByDefault); \
	DECLARE_FUNCTION(execIsMotionBlurEnabled); \
	DECLARE_FUNCTION(execIsMotionBlurEnabledByDefault); \
	DECLARE_FUNCTION(execIsVSyncEnabled); \
	DECLARE_FUNCTION(execIsVSyncEnabledByDefault); \
	DECLARE_FUNCTION(execSetAntiAliasingMode); \
	DECLARE_FUNCTION(execSetBrightness); \
	DECLARE_FUNCTION(execSetCameraVerticalFieldOfView); \
	DECLARE_FUNCTION(execSetChromaticAberrationEnabled); \
	DECLARE_FUNCTION(execSetColorBlindMode); \
	DECLARE_FUNCTION(execSetColorBlindStrength); \
	DECLARE_FUNCTION(execSetContrast); \
	DECLARE_FUNCTION(execSetDepthOfFieldEnabled); \
	DECLARE_FUNCTION(execSetDLSSGEnabled); \
	DECLARE_FUNCTION(execSetEffectsQuality); \
	DECLARE_FUNCTION(execSetFoliageQuality); \
	DECLARE_FUNCTION(execSetFramerateLimit); \
	DECLARE_FUNCTION(execSetFramerateMode); \
	DECLARE_FUNCTION(execSetGamma); \
	DECLARE_FUNCTION(execSetMaterialsQuality); \
	DECLARE_FUNCTION(execSetMotionBlurEnabled); \
	DECLARE_FUNCTION(execSetPostProcessingQuality); \
	DECLARE_FUNCTION(execSetRecommendedQuality); \
	DECLARE_FUNCTION(execSetReflexMode); \
	DECLARE_FUNCTION(execSetResolution); \
	DECLARE_FUNCTION(execSetShadowQuality); \
	DECLARE_FUNCTION(execSetTextureQuality); \
	DECLARE_FUNCTION(execSetUpscaler); \
	DECLARE_FUNCTION(execSetUpscalingMode); \
	DECLARE_FUNCTION(execSetUpscalingSharpness); \
	DECLARE_FUNCTION(execSetViewDistanceQuality); \
	DECLARE_FUNCTION(execSetVSyncEnabled); \
	DECLARE_FUNCTION(execSetWindowMode);


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsFunctionsVideo_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAntiAliasingMode); \
	DECLARE_FUNCTION(execGetBrightness); \
	DECLARE_FUNCTION(execGetButtonVisibilityDLSSG); \
	DECLARE_FUNCTION(execGetButtonVisibilityFramerateMode); \
	DECLARE_FUNCTION(execGetButtonVisibilityReflexMode); \
	DECLARE_FUNCTION(execGetButtonVisibilityUpscalingMode); \
	DECLARE_FUNCTION(execGetButtonVisibilityUpscalingSharpness); \
	DECLARE_FUNCTION(execGetButtonVisibilityVSync); \
	DECLARE_FUNCTION(execGetCameraVerticalFieldOfView); \
	DECLARE_FUNCTION(execGetColorBlindMode); \
	DECLARE_FUNCTION(execGetColorBlindStrength); \
	DECLARE_FUNCTION(execGetContrast); \
	DECLARE_FUNCTION(execGetDefaultAntiAliasingMode); \
	DECLARE_FUNCTION(execGetDefaultBrightness); \
	DECLARE_FUNCTION(execGetDefaultCameraVerticalFieldOfView); \
	DECLARE_FUNCTION(execGetDefaultColorBlindMode); \
	DECLARE_FUNCTION(execGetDefaultColorBlindStrength); \
	DECLARE_FUNCTION(execGetDefaultContrast); \
	DECLARE_FUNCTION(execGetDefaultEffectsQuality); \
	DECLARE_FUNCTION(execGetDefaultFoliageQuality); \
	DECLARE_FUNCTION(execGetDefaultFramerateLimit); \
	DECLARE_FUNCTION(execGetDefaultFramerateMode); \
	DECLARE_FUNCTION(execGetDefaultGamma); \
	DECLARE_FUNCTION(execGetDefaultMaterialsQuality); \
	DECLARE_FUNCTION(execGetDefaultPostProcessingQuality); \
	DECLARE_FUNCTION(execGetDefaultReflexMode); \
	DECLARE_FUNCTION(execGetDefaultResolution); \
	DECLARE_FUNCTION(execGetDefaultShadowQuality); \
	DECLARE_FUNCTION(execGetDefaultTextureQuality); \
	DECLARE_FUNCTION(execGetDefaultUpscaler); \
	DECLARE_FUNCTION(execGetDefaultUpscalingMode); \
	DECLARE_FUNCTION(execGetDefaultUpscalingSharpness); \
	DECLARE_FUNCTION(execGetDefaultViewDistanceQuality); \
	DECLARE_FUNCTION(execGetDefaultWindowMode); \
	DECLARE_FUNCTION(execGetEffectsQuality); \
	DECLARE_FUNCTION(execGetFoliageQuality); \
	DECLARE_FUNCTION(execGetFramerateLimit); \
	DECLARE_FUNCTION(execGetFramerateMode); \
	DECLARE_FUNCTION(execGetGamma); \
	DECLARE_FUNCTION(execGetMaterialsQuality); \
	DECLARE_FUNCTION(execGetPostProcessingQuality); \
	DECLARE_FUNCTION(execGetReflexMode); \
	DECLARE_FUNCTION(execGetResolution); \
	DECLARE_FUNCTION(execGetShadowQuality); \
	DECLARE_FUNCTION(execGetTextureQuality); \
	DECLARE_FUNCTION(execGetUpscaler); \
	DECLARE_FUNCTION(execGetUpscalingMode); \
	DECLARE_FUNCTION(execGetUpscalingSharpness); \
	DECLARE_FUNCTION(execGetViewDistanceQuality); \
	DECLARE_FUNCTION(execGetWindowMode); \
	DECLARE_FUNCTION(execIsChromaticAberrationEnabled); \
	DECLARE_FUNCTION(execIsChromaticAberrationEnabledByDefault); \
	DECLARE_FUNCTION(execIsDepthOfFieldEnabled); \
	DECLARE_FUNCTION(execIsDepthOfFieldEnabledByDefault); \
	DECLARE_FUNCTION(execIsDLSSGEnabled); \
	DECLARE_FUNCTION(execIsDLSSGEnabledByDefault); \
	DECLARE_FUNCTION(execIsMotionBlurEnabled); \
	DECLARE_FUNCTION(execIsMotionBlurEnabledByDefault); \
	DECLARE_FUNCTION(execIsVSyncEnabled); \
	DECLARE_FUNCTION(execIsVSyncEnabledByDefault); \
	DECLARE_FUNCTION(execSetAntiAliasingMode); \
	DECLARE_FUNCTION(execSetBrightness); \
	DECLARE_FUNCTION(execSetCameraVerticalFieldOfView); \
	DECLARE_FUNCTION(execSetChromaticAberrationEnabled); \
	DECLARE_FUNCTION(execSetColorBlindMode); \
	DECLARE_FUNCTION(execSetColorBlindStrength); \
	DECLARE_FUNCTION(execSetContrast); \
	DECLARE_FUNCTION(execSetDepthOfFieldEnabled); \
	DECLARE_FUNCTION(execSetDLSSGEnabled); \
	DECLARE_FUNCTION(execSetEffectsQuality); \
	DECLARE_FUNCTION(execSetFoliageQuality); \
	DECLARE_FUNCTION(execSetFramerateLimit); \
	DECLARE_FUNCTION(execSetFramerateMode); \
	DECLARE_FUNCTION(execSetGamma); \
	DECLARE_FUNCTION(execSetMaterialsQuality); \
	DECLARE_FUNCTION(execSetMotionBlurEnabled); \
	DECLARE_FUNCTION(execSetPostProcessingQuality); \
	DECLARE_FUNCTION(execSetRecommendedQuality); \
	DECLARE_FUNCTION(execSetReflexMode); \
	DECLARE_FUNCTION(execSetResolution); \
	DECLARE_FUNCTION(execSetShadowQuality); \
	DECLARE_FUNCTION(execSetTextureQuality); \
	DECLARE_FUNCTION(execSetUpscaler); \
	DECLARE_FUNCTION(execSetUpscalingMode); \
	DECLARE_FUNCTION(execSetUpscalingSharpness); \
	DECLARE_FUNCTION(execSetViewDistanceQuality); \
	DECLARE_FUNCTION(execSetVSyncEnabled); \
	DECLARE_FUNCTION(execSetWindowMode);


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsFunctionsVideo_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZSettingsFunctionsVideo(); \
	friend struct Z_Construct_UClass_USBZSettingsFunctionsVideo_Statics; \
public: \
	DECLARE_CLASS(USBZSettingsFunctionsVideo, USBZSettingsFunctions, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSettingsFunctionsVideo)


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsFunctionsVideo_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSBZSettingsFunctionsVideo(); \
	friend struct Z_Construct_UClass_USBZSettingsFunctionsVideo_Statics; \
public: \
	DECLARE_CLASS(USBZSettingsFunctionsVideo, USBZSettingsFunctions, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSettingsFunctionsVideo)


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsFunctionsVideo_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZSettingsFunctionsVideo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSettingsFunctionsVideo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSettingsFunctionsVideo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSettingsFunctionsVideo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSettingsFunctionsVideo(USBZSettingsFunctionsVideo&&); \
	NO_API USBZSettingsFunctionsVideo(const USBZSettingsFunctionsVideo&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsFunctionsVideo_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSettingsFunctionsVideo(USBZSettingsFunctionsVideo&&); \
	NO_API USBZSettingsFunctionsVideo(const USBZSettingsFunctionsVideo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSettingsFunctionsVideo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSettingsFunctionsVideo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZSettingsFunctionsVideo)


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsFunctionsVideo_h_15_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsFunctionsVideo_h_13_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsFunctionsVideo_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsFunctionsVideo_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsFunctionsVideo_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsFunctionsVideo_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsFunctionsVideo_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsFunctionsVideo_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSettingsFunctionsVideo_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsFunctionsVideo_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsFunctionsVideo_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsFunctionsVideo_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsFunctionsVideo_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSettingsFunctionsVideo_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZSettingsFunctionsVideo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSettingsFunctionsVideo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
