// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAkOutputSettings;
class UAkAudioEvent;
enum class AkActionOnEventType : uint8;
class AActor;
enum class EAkCurveInterpolation : uint8;
class UAkAudioType;
class UObject;
class USceneComponent;
struct FVector;
class UAkComponent;
class UAkMediaAsset;
class UAkRtpc;
enum class ERTPCValueType : uint8;
class UAkAudioBank;
struct FLatentActionInfo;
struct FAkExternalSourceInfo;
struct FRotator;
class UAkTrigger;
struct FAkOutputDeviceID;
enum class AkChannelConfiguration : uint8;
class UAkPortalComponent;
struct FTransform;
enum class AkMultiPositionType : uint8;
struct FAkChannelMask;
enum class PanningRule : uint8;
class UAkStateValue;
class UAkSwitchValue;
enum class ESBZAkPoolType : uint8;
class UAkAuxBus;
#ifdef AKAUDIO_AkGameplayStatics_generated_h
#error "AkGameplayStatics.generated.h already included, missing '#pragma once' in AkGameplayStatics.h"
#endif
#define AKAUDIO_AkGameplayStatics_generated_h

#define MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_SPARSE_DATA
#define MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddOutput); \
	DECLARE_FUNCTION(execAddOutputCaptureMarker); \
	DECLARE_FUNCTION(execCancelEventCallback); \
	DECLARE_FUNCTION(execClearBanks); \
	DECLARE_FUNCTION(execExecuteActionOnEvent); \
	DECLARE_FUNCTION(execExecuteActionOnPlayingID); \
	DECLARE_FUNCTION(execGetAkAudioTypeUserData); \
	DECLARE_FUNCTION(execGetAkComponent); \
	DECLARE_FUNCTION(execGetAkMediaAssetUserData); \
	DECLARE_FUNCTION(execGetAvailableAudioCultures); \
	DECLARE_FUNCTION(execGetCurrentAudioCulture); \
	DECLARE_FUNCTION(execGetOcclusionScalingFactor); \
	DECLARE_FUNCTION(execGetRTPCValue); \
	DECLARE_FUNCTION(execGetSpeakerAngles); \
	DECLARE_FUNCTION(execIsEditor); \
	DECLARE_FUNCTION(execIsGame); \
	DECLARE_FUNCTION(execLoadBank); \
	DECLARE_FUNCTION(execLoadBankAsync); \
	DECLARE_FUNCTION(execLoadBankByName); \
	DECLARE_FUNCTION(execLoadBanks); \
	DECLARE_FUNCTION(execLoadInitBank); \
	DECLARE_FUNCTION(execPostAndWaitForEndOfEvent); \
	DECLARE_FUNCTION(execPostAndWaitForEndOfEventAsync); \
	DECLARE_FUNCTION(execPostEvent); \
	DECLARE_FUNCTION(execPostEventAtLocation); \
	DECLARE_FUNCTION(execPostEventAtLocationByName); \
	DECLARE_FUNCTION(execPostEventAttached); \
	DECLARE_FUNCTION(execPostEventByName); \
	DECLARE_FUNCTION(execPostTrigger); \
	DECLARE_FUNCTION(execRemoveOutput); \
	DECLARE_FUNCTION(execReplaceMainOutput); \
	DECLARE_FUNCTION(execResetRTPCValue); \
	DECLARE_FUNCTION(execSetBusConfig); \
	DECLARE_FUNCTION(execSetCurrentAudioCulture); \
	DECLARE_FUNCTION(execSetCurrentAudioCultureAsync); \
	DECLARE_FUNCTION(execSetGameObjectToPortalObstruction); \
	DECLARE_FUNCTION(execSetMultipleChannelEmitterPositions); \
	DECLARE_FUNCTION(execSetMultipleChannelMaskEmitterPositions); \
	DECLARE_FUNCTION(execSetMultiplePositions); \
	DECLARE_FUNCTION(execSetOcclusionRefreshInterval); \
	DECLARE_FUNCTION(execSetOcclusionScalingFactor); \
	DECLARE_FUNCTION(execSetOutputBusVolume); \
	DECLARE_FUNCTION(execSetPanningRule); \
	DECLARE_FUNCTION(execSetPortalObstructionAndOcclusion); \
	DECLARE_FUNCTION(execSetPortalToPortalObstruction); \
	DECLARE_FUNCTION(execSetReflectionsOrder); \
	DECLARE_FUNCTION(execSetRTPCValue); \
	DECLARE_FUNCTION(execSetSpeakerAngles); \
	DECLARE_FUNCTION(execSetState); \
	DECLARE_FUNCTION(execSetSwitch); \
	DECLARE_FUNCTION(execSpawnAkComponentAtLocation); \
	DECLARE_FUNCTION(execStartAllAmbientSounds); \
	DECLARE_FUNCTION(execStartOutputCapture); \
	DECLARE_FUNCTION(execStartProfilerCapture); \
	DECLARE_FUNCTION(execStopActor); \
	DECLARE_FUNCTION(execStopAll); \
	DECLARE_FUNCTION(execStopAllAmbientSounds); \
	DECLARE_FUNCTION(execStopOutputCapture); \
	DECLARE_FUNCTION(execStopProfilerCapture); \
	DECLARE_FUNCTION(execUnloadBank); \
	DECLARE_FUNCTION(execUnloadBankAsync); \
	DECLARE_FUNCTION(execUnloadBankByName); \
	DECLARE_FUNCTION(execUseEarlyReflections); \
	DECLARE_FUNCTION(execUseReverbVolumes);


#define MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddOutput); \
	DECLARE_FUNCTION(execAddOutputCaptureMarker); \
	DECLARE_FUNCTION(execCancelEventCallback); \
	DECLARE_FUNCTION(execClearBanks); \
	DECLARE_FUNCTION(execExecuteActionOnEvent); \
	DECLARE_FUNCTION(execExecuteActionOnPlayingID); \
	DECLARE_FUNCTION(execGetAkAudioTypeUserData); \
	DECLARE_FUNCTION(execGetAkComponent); \
	DECLARE_FUNCTION(execGetAkMediaAssetUserData); \
	DECLARE_FUNCTION(execGetAvailableAudioCultures); \
	DECLARE_FUNCTION(execGetCurrentAudioCulture); \
	DECLARE_FUNCTION(execGetOcclusionScalingFactor); \
	DECLARE_FUNCTION(execGetRTPCValue); \
	DECLARE_FUNCTION(execGetSpeakerAngles); \
	DECLARE_FUNCTION(execIsEditor); \
	DECLARE_FUNCTION(execIsGame); \
	DECLARE_FUNCTION(execLoadBank); \
	DECLARE_FUNCTION(execLoadBankAsync); \
	DECLARE_FUNCTION(execLoadBankByName); \
	DECLARE_FUNCTION(execLoadBanks); \
	DECLARE_FUNCTION(execLoadInitBank); \
	DECLARE_FUNCTION(execPostAndWaitForEndOfEvent); \
	DECLARE_FUNCTION(execPostAndWaitForEndOfEventAsync); \
	DECLARE_FUNCTION(execPostEvent); \
	DECLARE_FUNCTION(execPostEventAtLocation); \
	DECLARE_FUNCTION(execPostEventAtLocationByName); \
	DECLARE_FUNCTION(execPostEventAttached); \
	DECLARE_FUNCTION(execPostEventByName); \
	DECLARE_FUNCTION(execPostTrigger); \
	DECLARE_FUNCTION(execRemoveOutput); \
	DECLARE_FUNCTION(execReplaceMainOutput); \
	DECLARE_FUNCTION(execResetRTPCValue); \
	DECLARE_FUNCTION(execSetBusConfig); \
	DECLARE_FUNCTION(execSetCurrentAudioCulture); \
	DECLARE_FUNCTION(execSetCurrentAudioCultureAsync); \
	DECLARE_FUNCTION(execSetGameObjectToPortalObstruction); \
	DECLARE_FUNCTION(execSetMultipleChannelEmitterPositions); \
	DECLARE_FUNCTION(execSetMultipleChannelMaskEmitterPositions); \
	DECLARE_FUNCTION(execSetMultiplePositions); \
	DECLARE_FUNCTION(execSetOcclusionRefreshInterval); \
	DECLARE_FUNCTION(execSetOcclusionScalingFactor); \
	DECLARE_FUNCTION(execSetOutputBusVolume); \
	DECLARE_FUNCTION(execSetPanningRule); \
	DECLARE_FUNCTION(execSetPortalObstructionAndOcclusion); \
	DECLARE_FUNCTION(execSetPortalToPortalObstruction); \
	DECLARE_FUNCTION(execSetReflectionsOrder); \
	DECLARE_FUNCTION(execSetRTPCValue); \
	DECLARE_FUNCTION(execSetSpeakerAngles); \
	DECLARE_FUNCTION(execSetState); \
	DECLARE_FUNCTION(execSetSwitch); \
	DECLARE_FUNCTION(execSpawnAkComponentAtLocation); \
	DECLARE_FUNCTION(execStartAllAmbientSounds); \
	DECLARE_FUNCTION(execStartOutputCapture); \
	DECLARE_FUNCTION(execStartProfilerCapture); \
	DECLARE_FUNCTION(execStopActor); \
	DECLARE_FUNCTION(execStopAll); \
	DECLARE_FUNCTION(execStopAllAmbientSounds); \
	DECLARE_FUNCTION(execStopOutputCapture); \
	DECLARE_FUNCTION(execStopProfilerCapture); \
	DECLARE_FUNCTION(execUnloadBank); \
	DECLARE_FUNCTION(execUnloadBankAsync); \
	DECLARE_FUNCTION(execUnloadBankByName); \
	DECLARE_FUNCTION(execUseEarlyReflections); \
	DECLARE_FUNCTION(execUseReverbVolumes);


#define MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkGameplayStatics(); \
	friend struct Z_Construct_UClass_UAkGameplayStatics_Statics; \
public: \
	DECLARE_CLASS(UAkGameplayStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkGameplayStatics)


#define MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUAkGameplayStatics(); \
	friend struct Z_Construct_UClass_UAkGameplayStatics_Statics; \
public: \
	DECLARE_CLASS(UAkGameplayStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkGameplayStatics)


#define MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkGameplayStatics(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkGameplayStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkGameplayStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkGameplayStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkGameplayStatics(UAkGameplayStatics&&); \
	NO_API UAkGameplayStatics(const UAkGameplayStatics&); \
public:


#define MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkGameplayStatics(UAkGameplayStatics&&); \
	NO_API UAkGameplayStatics(const UAkGameplayStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkGameplayStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkGameplayStatics); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAkGameplayStatics)


#define MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_PRIVATE_PROPERTY_OFFSET
#define MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_41_PROLOG
#define MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_SPARSE_DATA \
	MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_RPC_WRAPPERS \
	MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_INCLASS \
	MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_SPARSE_DATA \
	MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_INCLASS_NO_PURE_DECLS \
	MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkGameplayStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGameplayStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
