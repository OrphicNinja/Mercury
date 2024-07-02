// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class UAkRtpc;
enum class ESBZCameraState : uint8;
enum class ESBZRuntimeState : uint8;
struct FSBZExplosionResult;
class AActor;
class USBZBaseInteractableComponent;
class USBZInteractorComponent;
enum class EPD3HeistState : uint8;
struct FAIStimulus;
class USBZAIVisualDetectionComponent;
class UAkAudioEvent;
enum class ESBZCameraColorState : uint8;
#ifdef STARBREEZE_SBZSecurityCamera_generated_h
#error "SBZSecurityCamera.generated.h already included, missing '#pragma once' in SBZSecurityCamera.h"
#endif
#define STARBREEZE_SBZSecurityCamera_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSecurityCamera_h_60_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSecurityCamera_h_60_RPC_WRAPPERS \
	virtual void Multicast_BecomeViewTarget_Implementation(int32 PlayerId); \
	virtual void Multicast_EndViewTarget_Implementation(int32 PlayerId); \
	virtual void Multicast_OnChangeState_Implementation(ESBZCameraState NewState); \
	virtual void Multicast_RefundRuntime_Implementation(); \
	virtual void Multicast_RemoveRuntime_Implementation(ESBZRuntimeState InRuntimeToRemove); \
	virtual void Multicast_ReplicateExplosion_Implementation(FSBZExplosionResult const& Result); \
	virtual void Multicast_RuntimeExpired_Implementation(ESBZRuntimeState InRuntimeState); \
	virtual void Multicast_SetECMDisabled_Implementation(bool bInIsDisabled); \
	virtual void Multicast_SetRuntimed_Implementation(ESBZRuntimeState InRuntimeState); \
	virtual void Multicast_SetRuntimeExplosionInstigator_Implementation(AActor* InExplosionInstigator); \
	virtual void Multicast_SetShielded_Implementation(bool bInShielded); \
	virtual void Multicast_StartAlarm_Implementation(); \
	virtual void Multicast_StartNonVisionGeneratorInvestigation_Implementation(); \
	virtual void Multicast_UpdateRoughDetection_Implementation(uint8 NewRoughVisualDetectionValue); \
 \
	DECLARE_FUNCTION(execSetAttractorInstigator); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execChangeRTPC); \
	DECLARE_FUNCTION(execGetCameraState); \
	DECLARE_FUNCTION(execGetRuntimeState); \
	DECLARE_FUNCTION(execMulticast_BecomeViewTarget); \
	DECLARE_FUNCTION(execMulticast_EndViewTarget); \
	DECLARE_FUNCTION(execMulticast_OnChangeState); \
	DECLARE_FUNCTION(execMulticast_RefundRuntime); \
	DECLARE_FUNCTION(execMulticast_RemoveRuntime); \
	DECLARE_FUNCTION(execMulticast_ReplicateExplosion); \
	DECLARE_FUNCTION(execMulticast_RuntimeExpired); \
	DECLARE_FUNCTION(execMulticast_SetECMDisabled); \
	DECLARE_FUNCTION(execMulticast_SetRuntimed); \
	DECLARE_FUNCTION(execMulticast_SetRuntimeExplosionInstigator); \
	DECLARE_FUNCTION(execMulticast_SetShielded); \
	DECLARE_FUNCTION(execMulticast_StartAlarm); \
	DECLARE_FUNCTION(execMulticast_StartNonVisionGeneratorInvestigation); \
	DECLARE_FUNCTION(execMulticast_UpdateRoughDetection); \
	DECLARE_FUNCTION(execOnAckAbortInteraction); \
	DECLARE_FUNCTION(execOnAckCompleteInteraction); \
	DECLARE_FUNCTION(execOnECMCountChanged); \
	DECLARE_FUNCTION(execOnHeistStateChanged); \
	DECLARE_FUNCTION(execOnPerceptionUpdated); \
	DECLARE_FUNCTION(execOnPredictedAbortInteraction); \
	DECLARE_FUNCTION(execOnRep_CameraState); \
	DECLARE_FUNCTION(execOnRep_CurrentCamRotation); \
	DECLARE_FUNCTION(execOnRep_IsShielded); \
	DECLARE_FUNCTION(execOnRep_RoughDetection); \
	DECLARE_FUNCTION(execOnRep_RuntimeState); \
	DECLARE_FUNCTION(execOnRep_TargetCamRotation); \
	DECLARE_FUNCTION(execOnRep_ViewTargetPlayerStateIdArray); \
	DECLARE_FUNCTION(execOnServerAbortInteraction); \
	DECLARE_FUNCTION(execOnVisualDetection); \
	DECLARE_FUNCTION(execPlaySoundEvent);


#define PAYDAY3_Source_Starbreeze_Public_SBZSecurityCamera_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_BecomeViewTarget_Implementation(int32 PlayerId); \
	virtual void Multicast_EndViewTarget_Implementation(int32 PlayerId); \
	virtual void Multicast_OnChangeState_Implementation(ESBZCameraState NewState); \
	virtual void Multicast_RefundRuntime_Implementation(); \
	virtual void Multicast_RemoveRuntime_Implementation(ESBZRuntimeState InRuntimeToRemove); \
	virtual void Multicast_ReplicateExplosion_Implementation(FSBZExplosionResult const& Result); \
	virtual void Multicast_RuntimeExpired_Implementation(ESBZRuntimeState InRuntimeState); \
	virtual void Multicast_SetECMDisabled_Implementation(bool bInIsDisabled); \
	virtual void Multicast_SetRuntimed_Implementation(ESBZRuntimeState InRuntimeState); \
	virtual void Multicast_SetRuntimeExplosionInstigator_Implementation(AActor* InExplosionInstigator); \
	virtual void Multicast_SetShielded_Implementation(bool bInShielded); \
	virtual void Multicast_StartAlarm_Implementation(); \
	virtual void Multicast_StartNonVisionGeneratorInvestigation_Implementation(); \
	virtual void Multicast_UpdateRoughDetection_Implementation(uint8 NewRoughVisualDetectionValue); \
 \
	DECLARE_FUNCTION(execSetAttractorInstigator); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execChangeRTPC); \
	DECLARE_FUNCTION(execGetCameraState); \
	DECLARE_FUNCTION(execGetRuntimeState); \
	DECLARE_FUNCTION(execMulticast_BecomeViewTarget); \
	DECLARE_FUNCTION(execMulticast_EndViewTarget); \
	DECLARE_FUNCTION(execMulticast_OnChangeState); \
	DECLARE_FUNCTION(execMulticast_RefundRuntime); \
	DECLARE_FUNCTION(execMulticast_RemoveRuntime); \
	DECLARE_FUNCTION(execMulticast_ReplicateExplosion); \
	DECLARE_FUNCTION(execMulticast_RuntimeExpired); \
	DECLARE_FUNCTION(execMulticast_SetECMDisabled); \
	DECLARE_FUNCTION(execMulticast_SetRuntimed); \
	DECLARE_FUNCTION(execMulticast_SetRuntimeExplosionInstigator); \
	DECLARE_FUNCTION(execMulticast_SetShielded); \
	DECLARE_FUNCTION(execMulticast_StartAlarm); \
	DECLARE_FUNCTION(execMulticast_StartNonVisionGeneratorInvestigation); \
	DECLARE_FUNCTION(execMulticast_UpdateRoughDetection); \
	DECLARE_FUNCTION(execOnAckAbortInteraction); \
	DECLARE_FUNCTION(execOnAckCompleteInteraction); \
	DECLARE_FUNCTION(execOnECMCountChanged); \
	DECLARE_FUNCTION(execOnHeistStateChanged); \
	DECLARE_FUNCTION(execOnPerceptionUpdated); \
	DECLARE_FUNCTION(execOnPredictedAbortInteraction); \
	DECLARE_FUNCTION(execOnRep_CameraState); \
	DECLARE_FUNCTION(execOnRep_CurrentCamRotation); \
	DECLARE_FUNCTION(execOnRep_IsShielded); \
	DECLARE_FUNCTION(execOnRep_RoughDetection); \
	DECLARE_FUNCTION(execOnRep_RuntimeState); \
	DECLARE_FUNCTION(execOnRep_TargetCamRotation); \
	DECLARE_FUNCTION(execOnRep_ViewTargetPlayerStateIdArray); \
	DECLARE_FUNCTION(execOnServerAbortInteraction); \
	DECLARE_FUNCTION(execOnVisualDetection); \
	DECLARE_FUNCTION(execPlaySoundEvent);


#define PAYDAY3_Source_Starbreeze_Public_SBZSecurityCamera_h_60_EVENT_PARMS \
	struct SBZSecurityCamera_eventBP_OnCameraColorStateChanged_Parms \
	{ \
		ESBZCameraColorState NewCameraColorState; \
	}; \
	struct SBZSecurityCamera_eventBP_OnStateChanged_Parms \
	{ \
		ESBZCameraState OldState; \
		ESBZCameraState NewState; \
		bool bDoCosmetics; \
	}; \
	struct SBZSecurityCamera_eventBP_OnViewTargetChanged_Parms \
	{ \
		bool bIsViewTarget; \
	}; \
	struct SBZSecurityCamera_eventMulticast_BecomeViewTarget_Parms \
	{ \
		int32 PlayerId; \
	}; \
	struct SBZSecurityCamera_eventMulticast_EndViewTarget_Parms \
	{ \
		int32 PlayerId; \
	}; \
	struct SBZSecurityCamera_eventMulticast_OnChangeState_Parms \
	{ \
		ESBZCameraState NewState; \
	}; \
	struct SBZSecurityCamera_eventMulticast_RemoveRuntime_Parms \
	{ \
		ESBZRuntimeState InRuntimeToRemove; \
	}; \
	struct SBZSecurityCamera_eventMulticast_ReplicateExplosion_Parms \
	{ \
		FSBZExplosionResult Result; \
	}; \
	struct SBZSecurityCamera_eventMulticast_RuntimeExpired_Parms \
	{ \
		ESBZRuntimeState InRuntimeState; \
	}; \
	struct SBZSecurityCamera_eventMulticast_SetECMDisabled_Parms \
	{ \
		bool bInIsDisabled; \
	}; \
	struct SBZSecurityCamera_eventMulticast_SetRuntimed_Parms \
	{ \
		ESBZRuntimeState InRuntimeState; \
	}; \
	struct SBZSecurityCamera_eventMulticast_SetRuntimeExplosionInstigator_Parms \
	{ \
		AActor* InExplosionInstigator; \
	}; \
	struct SBZSecurityCamera_eventMulticast_SetShielded_Parms \
	{ \
		bool bInShielded; \
	}; \
	struct SBZSecurityCamera_eventMulticast_UpdateRoughDetection_Parms \
	{ \
		uint8 NewRoughVisualDetectionValue; \
	}; \
	struct SBZSecurityCamera_eventOnRuntimeStateApplied_Parms \
	{ \
		ESBZRuntimeState AppliedState; \
	}; \
	struct SBZSecurityCamera_eventOnRuntimeStateRemoved_Parms \
	{ \
		ESBZRuntimeState AppliedState; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZSecurityCamera_h_60_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZSecurityCamera_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZSecurityCamera(); \
	friend struct Z_Construct_UClass_ASBZSecurityCamera_Statics; \
public: \
	DECLARE_CLASS(ASBZSecurityCamera, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZSecurityCamera) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZSecurityCamera*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RuntimeState=NETFIELD_REP_START, \
		bIsShielded, \
		CameraState, \
		CameraTargetRotation, \
		CameraCurrentRotation, \
		RoughDetection, \
		bIsECMDisabled, \
		ViewTargetPlayerStateIdArray, \
		NETFIELD_REP_END=ViewTargetPlayerStateIdArray	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZSecurityCamera_h_60_INCLASS \
private: \
	static void StaticRegisterNativesASBZSecurityCamera(); \
	friend struct Z_Construct_UClass_ASBZSecurityCamera_Statics; \
public: \
	DECLARE_CLASS(ASBZSecurityCamera, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZSecurityCamera) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZSecurityCamera*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RuntimeState=NETFIELD_REP_START, \
		bIsShielded, \
		CameraState, \
		CameraTargetRotation, \
		CameraCurrentRotation, \
		RoughDetection, \
		bIsECMDisabled, \
		ViewTargetPlayerStateIdArray, \
		NETFIELD_REP_END=ViewTargetPlayerStateIdArray	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZSecurityCamera_h_60_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZSecurityCamera(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZSecurityCamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZSecurityCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZSecurityCamera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZSecurityCamera(ASBZSecurityCamera&&); \
	NO_API ASBZSecurityCamera(const ASBZSecurityCamera&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSecurityCamera_h_60_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZSecurityCamera(ASBZSecurityCamera&&); \
	NO_API ASBZSecurityCamera(const ASBZSecurityCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZSecurityCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZSecurityCamera); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZSecurityCamera)


#define PAYDAY3_Source_Starbreeze_Public_SBZSecurityCamera_h_60_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Type() { return STRUCT_OFFSET(ASBZSecurityCamera, Type); } \
	FORCEINLINE static uint32 __PPO__Escalations() { return STRUCT_OFFSET(ASBZSecurityCamera, Escalations); } \
	FORCEINLINE static uint32 __PPO__ActionNotificationAssetArray() { return STRUCT_OFFSET(ASBZSecurityCamera, ActionNotificationAssetArray); } \
	FORCEINLINE static uint32 __PPO__HackableInteractable() { return STRUCT_OFFSET(ASBZSecurityCamera, HackableInteractable); } \
	FORCEINLINE static uint32 __PPO__MarkerComponent() { return STRUCT_OFFSET(ASBZSecurityCamera, MarkerComponent); } \
	FORCEINLINE static uint32 __PPO__AttractorComponent() { return STRUCT_OFFSET(ASBZSecurityCamera, AttractorComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBodyRoot() { return STRUCT_OFFSET(ASBZSecurityCamera, CameraBodyRoot); } \
	FORCEINLINE static uint32 __PPO__CameraEyeOffset() { return STRUCT_OFFSET(ASBZSecurityCamera, CameraEyeOffset); } \
	FORCEINLINE static uint32 __PPO__LookAtLocation() { return STRUCT_OFFSET(ASBZSecurityCamera, LookAtLocation); } \
	FORCEINLINE static uint32 __PPO__RotationSpeed() { return STRUCT_OFFSET(ASBZSecurityCamera, RotationSpeed); } \
	FORCEINLINE static uint32 __PPO__CurrentRotationSpeedYaw() { return STRUCT_OFFSET(ASBZSecurityCamera, CurrentRotationSpeedYaw); } \
	FORCEINLINE static uint32 __PPO__CurrentRotationSpeedPitch() { return STRUCT_OFFSET(ASBZSecurityCamera, CurrentRotationSpeedPitch); } \
	FORCEINLINE static uint32 __PPO__SFXMinimumRotationSpeed() { return STRUCT_OFFSET(ASBZSecurityCamera, SFXMinimumRotationSpeed); } \
	FORCEINLINE static uint32 __PPO__bIsRotating() { return STRUCT_OFFSET(ASBZSecurityCamera, bIsRotating); } \
	FORCEINLINE static uint32 __PPO__WaitTime() { return STRUCT_OFFSET(ASBZSecurityCamera, WaitTime); } \
	FORCEINLINE static uint32 __PPO__SightRadius() { return STRUCT_OFFSET(ASBZSecurityCamera, SightRadius); } \
	FORCEINLINE static uint32 __PPO__PeripheralVisionAngleDegrees() { return STRUCT_OFFSET(ASBZSecurityCamera, PeripheralVisionAngleDegrees); } \
	FORCEINLINE static uint32 __PPO__InvestigateEscalation() { return STRUCT_OFFSET(ASBZSecurityCamera, InvestigateEscalation); } \
	FORCEINLINE static uint32 __PPO__RuntimeState() { return STRUCT_OFFSET(ASBZSecurityCamera, RuntimeState); } \
	FORCEINLINE static uint32 __PPO__bIsShielded() { return STRUCT_OFFSET(ASBZSecurityCamera, bIsShielded); } \
	FORCEINLINE static uint32 __PPO__CameraState() { return STRUCT_OFFSET(ASBZSecurityCamera, CameraState); } \
	FORCEINLINE static uint32 __PPO__CameraSetting() { return STRUCT_OFFSET(ASBZSecurityCamera, CameraSetting); } \
	FORCEINLINE static uint32 __PPO__SecurityCameraRoot() { return STRUCT_OFFSET(ASBZSecurityCamera, SecurityCameraRoot); } \
	FORCEINLINE static uint32 __PPO__StartLookAtLocation() { return STRUCT_OFFSET(ASBZSecurityCamera, StartLookAtLocation); } \
	FORCEINLINE static uint32 __PPO__EndLookAtLocation() { return STRUCT_OFFSET(ASBZSecurityCamera, EndLookAtLocation); } \
	FORCEINLINE static uint32 __PPO__CameraTargetRotation() { return STRUCT_OFFSET(ASBZSecurityCamera, CameraTargetRotation); } \
	FORCEINLINE static uint32 __PPO__CameraCurrentRotation() { return STRUCT_OFFSET(ASBZSecurityCamera, CameraCurrentRotation); } \
	FORCEINLINE static uint32 __PPO__CameraLastRotation() { return STRUCT_OFFSET(ASBZSecurityCamera, CameraLastRotation); } \
	FORCEINLINE static uint32 __PPO__bCanDestroy() { return STRUCT_OFFSET(ASBZSecurityCamera, bCanDestroy); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(ASBZSecurityCamera, Health); } \
	FORCEINLINE static uint32 __PPO__bCanBeIndesctructable() { return STRUCT_OFFSET(ASBZSecurityCamera, bCanBeIndesctructable); } \
	FORCEINLINE static uint32 __PPO__ShoutoutTargetComponent() { return STRUCT_OFFSET(ASBZSecurityCamera, ShoutoutTargetComponent); } \
	FORCEINLINE static uint32 __PPO__OutlineComponent() { return STRUCT_OFFSET(ASBZSecurityCamera, OutlineComponent); } \
	FORCEINLINE static uint32 __PPO__OutlineAsset() { return STRUCT_OFFSET(ASBZSecurityCamera, OutlineAsset); } \
	FORCEINLINE static uint32 __PPO__SuspiciousStartValue() { return STRUCT_OFFSET(ASBZSecurityCamera, SuspiciousStartValue); } \
	FORCEINLINE static uint32 __PPO__AlarmStartValue() { return STRUCT_OFFSET(ASBZSecurityCamera, AlarmStartValue); } \
	FORCEINLINE static uint32 __PPO__AlarmSoundDuration() { return STRUCT_OFFSET(ASBZSecurityCamera, AlarmSoundDuration); } \
	FORCEINLINE static uint32 __PPO__CameraSoundComponent() { return STRUCT_OFFSET(ASBZSecurityCamera, CameraSoundComponent); } \
	FORCEINLINE static uint32 __PPO__RotationStartEvent() { return STRUCT_OFFSET(ASBZSecurityCamera, RotationStartEvent); } \
	FORCEINLINE static uint32 __PPO__RotationStopEvent() { return STRUCT_OFFSET(ASBZSecurityCamera, RotationStopEvent); } \
	FORCEINLINE static uint32 __PPO__SuspiciousStartEvent() { return STRUCT_OFFSET(ASBZSecurityCamera, SuspiciousStartEvent); } \
	FORCEINLINE static uint32 __PPO__SuspiciousStopEvent() { return STRUCT_OFFSET(ASBZSecurityCamera, SuspiciousStopEvent); } \
	FORCEINLINE static uint32 __PPO__AlarmStartEvent() { return STRUCT_OFFSET(ASBZSecurityCamera, AlarmStartEvent); } \
	FORCEINLINE static uint32 __PPO__AlarmStopEvent() { return STRUCT_OFFSET(ASBZSecurityCamera, AlarmStopEvent); } \
	FORCEINLINE static uint32 __PPO__CameraSilentEvent() { return STRUCT_OFFSET(ASBZSecurityCamera, CameraSilentEvent); } \
	FORCEINLINE static uint32 __PPO__CameraSuspicionLevelRTPC() { return STRUCT_OFFSET(ASBZSecurityCamera, CameraSuspicionLevelRTPC); } \
	FORCEINLINE static uint32 __PPO__CameraSuspicionLevelPitchRTPC() { return STRUCT_OFFSET(ASBZSecurityCamera, CameraSuspicionLevelPitchRTPC); } \
	FORCEINLINE static uint32 __PPO__CameraRotationVelocityRTPC() { return STRUCT_OFFSET(ASBZSecurityCamera, CameraRotationVelocityRTPC); } \
	FORCEINLINE static uint32 __PPO__CameraPossessionRTPC() { return STRUCT_OFFSET(ASBZSecurityCamera, CameraPossessionRTPC); } \
	FORCEINLINE static uint32 __PPO__RotationInterpolationTimeInMs() { return STRUCT_OFFSET(ASBZSecurityCamera, RotationInterpolationTimeInMs); } \
	FORCEINLINE static uint32 __PPO__PossessionInterpolationTimeInMs() { return STRUCT_OFFSET(ASBZSecurityCamera, PossessionInterpolationTimeInMs); } \
	FORCEINLINE static uint32 __PPO__VisualDetectionComponent() { return STRUCT_OFFSET(ASBZSecurityCamera, VisualDetectionComponent); } \
	FORCEINLINE static uint32 __PPO__RoughDetection() { return STRUCT_OFFSET(ASBZSecurityCamera, RoughDetection); } \
	FORCEINLINE static uint32 __PPO__bShouldTickInEditor() { return STRUCT_OFFSET(ASBZSecurityCamera, bShouldTickInEditor); } \
	FORCEINLINE static uint32 __PPO__InterestingTags() { return STRUCT_OFFSET(ASBZSecurityCamera, InterestingTags); } \
	FORCEINLINE static uint32 __PPO__POIDetectionSpeed() { return STRUCT_OFFSET(ASBZSecurityCamera, POIDetectionSpeed); } \
	FORCEINLINE static uint32 __PPO__bOnlyDetectMovement() { return STRUCT_OFFSET(ASBZSecurityCamera, bOnlyDetectMovement); } \
	FORCEINLINE static uint32 __PPO__AdditionalRuntimeMarkedDuration() { return STRUCT_OFFSET(ASBZSecurityCamera, AdditionalRuntimeMarkedDuration); } \
	FORCEINLINE static uint32 __PPO__EMPEffectClass() { return STRUCT_OFFSET(ASBZSecurityCamera, EMPEffectClass); } \
	FORCEINLINE static uint32 __PPO__EMPExplodedEvent() { return STRUCT_OFFSET(ASBZSecurityCamera, EMPExplodedEvent); } \
	FORCEINLINE static uint32 __PPO__EMPDetonationEffect() { return STRUCT_OFFSET(ASBZSecurityCamera, EMPDetonationEffect); } \
	FORCEINLINE static uint32 __PPO__EMPStunDuration() { return STRUCT_OFFSET(ASBZSecurityCamera, EMPStunDuration); } \
	FORCEINLINE static uint32 __PPO__PlayerExplosionRange() { return STRUCT_OFFSET(ASBZSecurityCamera, PlayerExplosionRange); } \
	FORCEINLINE static uint32 __PPO__AIExplosionRange() { return STRUCT_OFFSET(ASBZSecurityCamera, AIExplosionRange); } \
	FORCEINLINE static uint32 __PPO__HurtReactionData() { return STRUCT_OFFSET(ASBZSecurityCamera, HurtReactionData); } \
	FORCEINLINE static uint32 __PPO__RuntimeLimit() { return STRUCT_OFFSET(ASBZSecurityCamera, RuntimeLimit); } \
	FORCEINLINE static uint32 __PPO__RuntimeTagsToMark() { return STRUCT_OFFSET(ASBZSecurityCamera, RuntimeTagsToMark); } \
	FORCEINLINE static uint32 __PPO__AutoAimComponent() { return STRUCT_OFFSET(ASBZSecurityCamera, AutoAimComponent); } \
	FORCEINLINE static uint32 __PPO__ExplosionInstigator() { return STRUCT_OFFSET(ASBZSecurityCamera, ExplosionInstigator); } \
	FORCEINLINE static uint32 __PPO__CurrentPOIDetection() { return STRUCT_OFFSET(ASBZSecurityCamera, CurrentPOIDetection); } \
	FORCEINLINE static uint32 __PPO__LastDetection() { return STRUCT_OFFSET(ASBZSecurityCamera, LastDetection); } \
	FORCEINLINE static uint32 __PPO__CurrentDetection() { return STRUCT_OFFSET(ASBZSecurityCamera, CurrentDetection); } \
	FORCEINLINE static uint32 __PPO__bIsECMDisabled() { return STRUCT_OFFSET(ASBZSecurityCamera, bIsECMDisabled); } \
	FORCEINLINE static uint32 __PPO__SoundState() { return STRUCT_OFFSET(ASBZSecurityCamera, SoundState); } \
	FORCEINLINE static uint32 __PPO__ViewTargetPlayerStateIdArray() { return STRUCT_OFFSET(ASBZSecurityCamera, ViewTargetPlayerStateIdArray); } \
	FORCEINLINE static uint32 __PPO__YawLimit() { return STRUCT_OFFSET(ASBZSecurityCamera, YawLimit); } \
	FORCEINLINE static uint32 __PPO__PitchLimit() { return STRUCT_OFFSET(ASBZSecurityCamera, PitchLimit); } \
	FORCEINLINE static uint32 __PPO__PerceivedData() { return STRUCT_OFFSET(ASBZSecurityCamera, PerceivedData); } \
	FORCEINLINE static uint32 __PPO__PerceivedActors() { return STRUCT_OFFSET(ASBZSecurityCamera, PerceivedActors); } \
	FORCEINLINE static uint32 __PPO__DetectedActors() { return STRUCT_OFFSET(ASBZSecurityCamera, DetectedActors); } \
	FORCEINLINE static uint32 __PPO__StatisticsMarkCamera() { return STRUCT_OFFSET(ASBZSecurityCamera, StatisticsMarkCamera); } \
	FORCEINLINE static uint32 __PPO__CurrentRoom() { return STRUCT_OFFSET(ASBZSecurityCamera, CurrentRoom); } \
	FORCEINLINE static uint32 __PPO__CurrentlyMarkedActorsArray() { return STRUCT_OFFSET(ASBZSecurityCamera, CurrentlyMarkedActorsArray); } \
	FORCEINLINE static uint32 __PPO__HackedByPlayerArray() { return STRUCT_OFFSET(ASBZSecurityCamera, HackedByPlayerArray); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSecurityCamera_h_58_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZSecurityCamera_h_60_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZSecurityCamera_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSecurityCamera_h_60_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSecurityCamera_h_60_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSecurityCamera_h_60_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSecurityCamera_h_60_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSecurityCamera_h_60_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSecurityCamera_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSecurityCamera_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSecurityCamera_h_60_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSecurityCamera_h_60_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSecurityCamera_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSecurityCamera_h_60_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSecurityCamera_h_60_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSecurityCamera_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZSecurityCamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSecurityCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
