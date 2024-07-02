// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkAudioEvent;
struct FAkExternalSourceInfo;
struct FLatentActionInfo;
class UAkTrigger;
class UAkComponent;
class UAkSwitchValue;
class UAkAuxBus;
#ifdef AKAUDIO_AkComponent_generated_h
#error "AkComponent.generated.h already included, missing '#pragma once' in AkComponent.h"
#endif
#define AKAUDIO_AkComponent_generated_h

#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_SPARSE_DATA
#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEnableDebugSoundObstruction); \
	DECLARE_FUNCTION(execEnableSoundObstruction); \
	DECLARE_FUNCTION(execEnableSoundSourceFilter); \
	DECLARE_FUNCTION(execGetAttenuationRadius); \
	DECLARE_FUNCTION(execGetSoundSourceFilter); \
	DECLARE_FUNCTION(execPostAkEventAndWaitForEnd); \
	DECLARE_FUNCTION(execPostAkEventAndWaitForEndAsync); \
	DECLARE_FUNCTION(execPostAkEventByName); \
	DECLARE_FUNCTION(execPostAssociatedAkEventAndWaitForEnd); \
	DECLARE_FUNCTION(execPostAssociatedAkEventAndWaitForEndAsync); \
	DECLARE_FUNCTION(execPostTrigger); \
	DECLARE_FUNCTION(execSetAttenuationScalingFactor); \
	DECLARE_FUNCTION(execSetEarlyReflectionsAuxBus); \
	DECLARE_FUNCTION(execSetEarlyReflectionsVolume); \
	DECLARE_FUNCTION(execSetGameObjectRadius); \
	DECLARE_FUNCTION(execSetListeners); \
	DECLARE_FUNCTION(execSetOutputBusVolume); \
	DECLARE_FUNCTION(execSetSoundSourceFilter); \
	DECLARE_FUNCTION(execSetStopWhenOwnerDestroyed); \
	DECLARE_FUNCTION(execSetSwitch); \
	DECLARE_FUNCTION(execShowAudioBank); \
	DECLARE_FUNCTION(execShowDynamicSoundAttenuation); \
	DECLARE_FUNCTION(execShowDynamicSoundSource); \
	DECLARE_FUNCTION(execShowSoundEvent); \
	DECLARE_FUNCTION(execShowSoundObstruction); \
	DECLARE_FUNCTION(execShowStaticSoundAttenuation); \
	DECLARE_FUNCTION(execShowStaticSoundSource); \
	DECLARE_FUNCTION(execUseEarlyReflections); \
	DECLARE_FUNCTION(execUseReverbVolumes);


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEnableDebugSoundObstruction); \
	DECLARE_FUNCTION(execEnableSoundObstruction); \
	DECLARE_FUNCTION(execEnableSoundSourceFilter); \
	DECLARE_FUNCTION(execGetAttenuationRadius); \
	DECLARE_FUNCTION(execGetSoundSourceFilter); \
	DECLARE_FUNCTION(execPostAkEventAndWaitForEnd); \
	DECLARE_FUNCTION(execPostAkEventAndWaitForEndAsync); \
	DECLARE_FUNCTION(execPostAkEventByName); \
	DECLARE_FUNCTION(execPostAssociatedAkEventAndWaitForEnd); \
	DECLARE_FUNCTION(execPostAssociatedAkEventAndWaitForEndAsync); \
	DECLARE_FUNCTION(execPostTrigger); \
	DECLARE_FUNCTION(execSetAttenuationScalingFactor); \
	DECLARE_FUNCTION(execSetEarlyReflectionsAuxBus); \
	DECLARE_FUNCTION(execSetEarlyReflectionsVolume); \
	DECLARE_FUNCTION(execSetGameObjectRadius); \
	DECLARE_FUNCTION(execSetListeners); \
	DECLARE_FUNCTION(execSetOutputBusVolume); \
	DECLARE_FUNCTION(execSetSoundSourceFilter); \
	DECLARE_FUNCTION(execSetStopWhenOwnerDestroyed); \
	DECLARE_FUNCTION(execSetSwitch); \
	DECLARE_FUNCTION(execShowAudioBank); \
	DECLARE_FUNCTION(execShowDynamicSoundAttenuation); \
	DECLARE_FUNCTION(execShowDynamicSoundSource); \
	DECLARE_FUNCTION(execShowSoundEvent); \
	DECLARE_FUNCTION(execShowSoundObstruction); \
	DECLARE_FUNCTION(execShowStaticSoundAttenuation); \
	DECLARE_FUNCTION(execShowStaticSoundSource); \
	DECLARE_FUNCTION(execUseEarlyReflections); \
	DECLARE_FUNCTION(execUseReverbVolumes);


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkComponent(); \
	friend struct Z_Construct_UClass_UAkComponent_Statics; \
public: \
	DECLARE_CLASS(UAkComponent, UAkGameObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkComponent)


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAkComponent(); \
	friend struct Z_Construct_UClass_UAkComponent_Statics; \
public: \
	DECLARE_CLASS(UAkComponent, UAkGameObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkComponent)


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkComponent(UAkComponent&&); \
	NO_API UAkComponent(const UAkComponent&); \
public:


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkComponent(UAkComponent&&); \
	NO_API UAkComponent(const UAkComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAkComponent)


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EarlyReflectionAuxBus() { return STRUCT_OFFSET(UAkComponent, EarlyReflectionAuxBus); } \
	FORCEINLINE static uint32 __PPO__EarlyReflectionAuxBusName() { return STRUCT_OFFSET(UAkComponent, EarlyReflectionAuxBusName); } \
	FORCEINLINE static uint32 __PPO__EarlyReflectionOrder() { return STRUCT_OFFSET(UAkComponent, EarlyReflectionOrder); } \
	FORCEINLINE static uint32 __PPO__EarlyReflectionBusSendGain() { return STRUCT_OFFSET(UAkComponent, EarlyReflectionBusSendGain); } \
	FORCEINLINE static uint32 __PPO__EarlyReflectionMaxPathLength() { return STRUCT_OFFSET(UAkComponent, EarlyReflectionMaxPathLength); } \
	FORCEINLINE static uint32 __PPO__roomReverbAuxBusGain() { return STRUCT_OFFSET(UAkComponent, roomReverbAuxBusGain); } \
	FORCEINLINE static uint32 __PPO__diffractionMaxEdges() { return STRUCT_OFFSET(UAkComponent, diffractionMaxEdges); } \
	FORCEINLINE static uint32 __PPO__diffractionMaxPaths() { return STRUCT_OFFSET(UAkComponent, diffractionMaxPaths); } \
	FORCEINLINE static uint32 __PPO__diffractionMaxPathLength() { return STRUCT_OFFSET(UAkComponent, diffractionMaxPathLength); }


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_15_PROLOG
#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_SPARSE_DATA \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_RPC_WRAPPERS \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_INCLASS \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_SPARSE_DATA \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
