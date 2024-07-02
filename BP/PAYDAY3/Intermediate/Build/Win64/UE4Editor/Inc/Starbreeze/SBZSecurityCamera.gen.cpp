// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSecurityCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSecurityCamera() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSecurityCamera_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSecurityCamera();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCameraColorState();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCameraState();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZRuntimeState();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZExplosionResult();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3HeistState();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIVisualDetectionComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZ_BPOnCameraStateChanged__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerViewingChanged__DelegateSignature();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActionNotificationAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHackableInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAttractorComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZComponentSelector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3DispatchCallerReason();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCameraOptions();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZShoutTargetComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAmbientSoundComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHurtReactionData();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCameraSoundState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAttractorInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIVisualDetectorInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCameraViewInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPawnLifetime_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTypeInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRuntimeInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZExplosive_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHurtReactionDataInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkableInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRoomVolumeInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAutoAimInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZSecurityCamera::execSetAttractorInstigator)
	{
		P_GET_OBJECT(APawn,Z_Param_NewInstigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttractorInstigator(Z_Param_NewInstigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityCamera::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityCamera::execChangeRTPC)
	{
		P_GET_OBJECT(UAkRtpc,Z_Param_RTPC);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_InterpolationTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeRTPC(Z_Param_RTPC,Z_Param_Value,Z_Param_InterpolationTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityCamera::execGetCameraState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZCameraState*)Z_Param__Result=P_THIS->GetCameraState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityCamera::execGetRuntimeState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetRuntimeState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityCamera::execMulticast_BecomeViewTarget)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_BecomeViewTarget_Implementation(Z_Param_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityCamera::execMulticast_EndViewTarget)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_EndViewTarget_Implementation(Z_Param_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityCamera::execMulticast_OnChangeState)
	{
		P_GET_ENUM(ESBZCameraState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnChangeState_Implementation(ESBZCameraState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityCamera::execMulticast_RefundRuntime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_RefundRuntime_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityCamera::execMulticast_RemoveRuntime)
	{
		P_GET_ENUM(ESBZRuntimeState,Z_Param_InRuntimeToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_RemoveRuntime_Implementation(ESBZRuntimeState(Z_Param_InRuntimeToRemove));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityCamera::execMulticast_ReplicateExplosion)
	{
		P_GET_STRUCT(FSBZExplosionResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ReplicateExplosion_Implementation(Z_Param_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityCamera::execMulticast_RuntimeExpired)
	{
		P_GET_ENUM(ESBZRuntimeState,Z_Param_InRuntimeState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_RuntimeExpired_Implementation(ESBZRuntimeState(Z_Param_InRuntimeState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityCamera::execMulticast_SetECMDisabled)
	{
		P_GET_UBOOL(Z_Param_bInIsDisabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetECMDisabled_Implementation(Z_Param_bInIsDisabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityCamera::execMulticast_SetRuntimed)
	{
		P_GET_ENUM(ESBZRuntimeState,Z_Param_InRuntimeState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetRuntimed_Implementation(ESBZRuntimeState(Z_Param_InRuntimeState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityCamera::execMulticast_SetRuntimeExplosionInstigator)
	{
		P_GET_OBJECT(AActor,Z_Param_InExplosionInstigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetRuntimeExplosionInstigator_Implementation(Z_Param_InExplosionInstigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityCamera::execMulticast_SetShielded)
	{
		P_GET_UBOOL(Z_Param_bInShielded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetShielded_Implementation(Z_Param_bInShielded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityCamera::execMulticast_StartAlarm)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_StartAlarm_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityCamera::execMulticast_StartNonVisionGeneratorInvestigation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_StartNonVisionGeneratorInvestigation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityCamera::execMulticast_UpdateRoughDetection)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewRoughVisualDetectionValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_UpdateRoughDetection_Implementation(Z_Param_NewRoughVisualDetectionValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityCamera::execOnAckAbortInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bIsLocallyControlledInteractor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAckAbortInteraction(Z_Param_InInteractable,Z_Param_Interactor,Z_Param_bIsLocallyControlledInteractor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityCamera::execOnAckCompleteInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bIsLocallyControlledInteractor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAckCompleteInteraction(Z_Param_InInteractable,Z_Param_Interactor,Z_Param_bIsLocallyControlledInteractor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityCamera::execOnECMCountChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_OldCount);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AddedTime);
		P_GET_UBOOL(Z_Param_bInIsSignalScanActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnECMCountChanged(Z_Param_NewCount,Z_Param_OldCount,Z_Param_AddedTime,Z_Param_bInIsSignalScanActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityCamera::execOnHeistStateChanged)
	{
		P_GET_ENUM(EPD3HeistState,Z_Param_OldState);
		P_GET_ENUM(EPD3HeistState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHeistStateChanged(EPD3HeistState(Z_Param_OldState),EPD3HeistState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityCamera::execOnPerceptionUpdated)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPerceptionUpdated(Z_Param_Actor,Z_Param_Stimulus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityCamera::execOnPredictedAbortInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bIsLocallyControlledInteractor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPredictedAbortInteraction(Z_Param_InInteractable,Z_Param_Interactor,Z_Param_bIsLocallyControlledInteractor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityCamera::execOnRep_CameraState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CameraState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityCamera::execOnRep_CurrentCamRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentCamRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityCamera::execOnRep_IsShielded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsShielded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityCamera::execOnRep_RoughDetection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_RoughDetection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityCamera::execOnRep_RuntimeState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_RuntimeState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityCamera::execOnRep_TargetCamRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_TargetCamRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityCamera::execOnRep_ViewTargetPlayerStateIdArray)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_OldViewTargetPlayerStateIdArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ViewTargetPlayerStateIdArray(Z_Param_Out_OldViewTargetPlayerStateIdArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityCamera::execOnServerAbortInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bIsLocallyControlledInteractor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnServerAbortInteraction(Z_Param_InInteractable,Z_Param_Interactor,Z_Param_bIsLocallyControlledInteractor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityCamera::execOnVisualDetection)
	{
		P_GET_OBJECT(USBZAIVisualDetectionComponent,Z_Param_DetectionComponent);
		P_GET_UBOOL(Z_Param_bWasDetected);
		P_GET_OBJECT(AActor,Z_Param_DetectedTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnVisualDetection(Z_Param_DetectionComponent,Z_Param_bWasDetected,Z_Param_DetectedTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSecurityCamera::execPlaySoundEvent)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AudioEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaySoundEvent(Z_Param_AudioEvent);
		P_NATIVE_END;
	}
	static FName NAME_ASBZSecurityCamera_BP_OnCameraColorStateChanged = FName(TEXT("BP_OnCameraColorStateChanged"));
	void ASBZSecurityCamera::BP_OnCameraColorStateChanged(ESBZCameraColorState NewCameraColorState)
	{
		SBZSecurityCamera_eventBP_OnCameraColorStateChanged_Parms Parms;
		Parms.NewCameraColorState=NewCameraColorState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZSecurityCamera_BP_OnCameraColorStateChanged),&Parms);
	}
	static FName NAME_ASBZSecurityCamera_BP_OnIndestructibleCamera = FName(TEXT("BP_OnIndestructibleCamera"));
	void ASBZSecurityCamera::BP_OnIndestructibleCamera()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZSecurityCamera_BP_OnIndestructibleCamera),NULL);
	}
	static FName NAME_ASBZSecurityCamera_BP_OnStateChanged = FName(TEXT("BP_OnStateChanged"));
	void ASBZSecurityCamera::BP_OnStateChanged(ESBZCameraState OldState, ESBZCameraState NewState, bool bDoCosmetics)
	{
		SBZSecurityCamera_eventBP_OnStateChanged_Parms Parms;
		Parms.OldState=OldState;
		Parms.NewState=NewState;
		Parms.bDoCosmetics=bDoCosmetics ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZSecurityCamera_BP_OnStateChanged),&Parms);
	}
	static FName NAME_ASBZSecurityCamera_BP_OnViewTargetChanged = FName(TEXT("BP_OnViewTargetChanged"));
	void ASBZSecurityCamera::BP_OnViewTargetChanged(bool bIsViewTarget)
	{
		SBZSecurityCamera_eventBP_OnViewTargetChanged_Parms Parms;
		Parms.bIsViewTarget=bIsViewTarget ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZSecurityCamera_BP_OnViewTargetChanged),&Parms);
	}
	static FName NAME_ASBZSecurityCamera_Multicast_BecomeViewTarget = FName(TEXT("Multicast_BecomeViewTarget"));
	void ASBZSecurityCamera::Multicast_BecomeViewTarget(int32 PlayerId)
	{
		SBZSecurityCamera_eventMulticast_BecomeViewTarget_Parms Parms;
		Parms.PlayerId=PlayerId;
		ProcessEvent(FindFunctionChecked(NAME_ASBZSecurityCamera_Multicast_BecomeViewTarget),&Parms);
	}
	static FName NAME_ASBZSecurityCamera_Multicast_EndViewTarget = FName(TEXT("Multicast_EndViewTarget"));
	void ASBZSecurityCamera::Multicast_EndViewTarget(int32 PlayerId)
	{
		SBZSecurityCamera_eventMulticast_EndViewTarget_Parms Parms;
		Parms.PlayerId=PlayerId;
		ProcessEvent(FindFunctionChecked(NAME_ASBZSecurityCamera_Multicast_EndViewTarget),&Parms);
	}
	static FName NAME_ASBZSecurityCamera_Multicast_OnChangeState = FName(TEXT("Multicast_OnChangeState"));
	void ASBZSecurityCamera::Multicast_OnChangeState(ESBZCameraState NewState)
	{
		SBZSecurityCamera_eventMulticast_OnChangeState_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZSecurityCamera_Multicast_OnChangeState),&Parms);
	}
	static FName NAME_ASBZSecurityCamera_Multicast_RefundRuntime = FName(TEXT("Multicast_RefundRuntime"));
	void ASBZSecurityCamera::Multicast_RefundRuntime()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZSecurityCamera_Multicast_RefundRuntime),NULL);
	}
	static FName NAME_ASBZSecurityCamera_Multicast_RemoveRuntime = FName(TEXT("Multicast_RemoveRuntime"));
	void ASBZSecurityCamera::Multicast_RemoveRuntime(ESBZRuntimeState InRuntimeToRemove)
	{
		SBZSecurityCamera_eventMulticast_RemoveRuntime_Parms Parms;
		Parms.InRuntimeToRemove=InRuntimeToRemove;
		ProcessEvent(FindFunctionChecked(NAME_ASBZSecurityCamera_Multicast_RemoveRuntime),&Parms);
	}
	static FName NAME_ASBZSecurityCamera_Multicast_ReplicateExplosion = FName(TEXT("Multicast_ReplicateExplosion"));
	void ASBZSecurityCamera::Multicast_ReplicateExplosion(FSBZExplosionResult const& Result)
	{
		SBZSecurityCamera_eventMulticast_ReplicateExplosion_Parms Parms;
		Parms.Result=Result;
		ProcessEvent(FindFunctionChecked(NAME_ASBZSecurityCamera_Multicast_ReplicateExplosion),&Parms);
	}
	static FName NAME_ASBZSecurityCamera_Multicast_RuntimeExpired = FName(TEXT("Multicast_RuntimeExpired"));
	void ASBZSecurityCamera::Multicast_RuntimeExpired(ESBZRuntimeState InRuntimeState)
	{
		SBZSecurityCamera_eventMulticast_RuntimeExpired_Parms Parms;
		Parms.InRuntimeState=InRuntimeState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZSecurityCamera_Multicast_RuntimeExpired),&Parms);
	}
	static FName NAME_ASBZSecurityCamera_Multicast_SetECMDisabled = FName(TEXT("Multicast_SetECMDisabled"));
	void ASBZSecurityCamera::Multicast_SetECMDisabled(bool bInIsDisabled)
	{
		SBZSecurityCamera_eventMulticast_SetECMDisabled_Parms Parms;
		Parms.bInIsDisabled=bInIsDisabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZSecurityCamera_Multicast_SetECMDisabled),&Parms);
	}
	static FName NAME_ASBZSecurityCamera_Multicast_SetRuntimed = FName(TEXT("Multicast_SetRuntimed"));
	void ASBZSecurityCamera::Multicast_SetRuntimed(ESBZRuntimeState InRuntimeState)
	{
		SBZSecurityCamera_eventMulticast_SetRuntimed_Parms Parms;
		Parms.InRuntimeState=InRuntimeState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZSecurityCamera_Multicast_SetRuntimed),&Parms);
	}
	static FName NAME_ASBZSecurityCamera_Multicast_SetRuntimeExplosionInstigator = FName(TEXT("Multicast_SetRuntimeExplosionInstigator"));
	void ASBZSecurityCamera::Multicast_SetRuntimeExplosionInstigator(AActor* InExplosionInstigator)
	{
		SBZSecurityCamera_eventMulticast_SetRuntimeExplosionInstigator_Parms Parms;
		Parms.InExplosionInstigator=InExplosionInstigator;
		ProcessEvent(FindFunctionChecked(NAME_ASBZSecurityCamera_Multicast_SetRuntimeExplosionInstigator),&Parms);
	}
	static FName NAME_ASBZSecurityCamera_Multicast_SetShielded = FName(TEXT("Multicast_SetShielded"));
	void ASBZSecurityCamera::Multicast_SetShielded(bool bInShielded)
	{
		SBZSecurityCamera_eventMulticast_SetShielded_Parms Parms;
		Parms.bInShielded=bInShielded ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZSecurityCamera_Multicast_SetShielded),&Parms);
	}
	static FName NAME_ASBZSecurityCamera_Multicast_StartAlarm = FName(TEXT("Multicast_StartAlarm"));
	void ASBZSecurityCamera::Multicast_StartAlarm()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZSecurityCamera_Multicast_StartAlarm),NULL);
	}
	static FName NAME_ASBZSecurityCamera_Multicast_StartNonVisionGeneratorInvestigation = FName(TEXT("Multicast_StartNonVisionGeneratorInvestigation"));
	void ASBZSecurityCamera::Multicast_StartNonVisionGeneratorInvestigation()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZSecurityCamera_Multicast_StartNonVisionGeneratorInvestigation),NULL);
	}
	static FName NAME_ASBZSecurityCamera_Multicast_UpdateRoughDetection = FName(TEXT("Multicast_UpdateRoughDetection"));
	void ASBZSecurityCamera::Multicast_UpdateRoughDetection(uint8 NewRoughVisualDetectionValue)
	{
		SBZSecurityCamera_eventMulticast_UpdateRoughDetection_Parms Parms;
		Parms.NewRoughVisualDetectionValue=NewRoughVisualDetectionValue;
		ProcessEvent(FindFunctionChecked(NAME_ASBZSecurityCamera_Multicast_UpdateRoughDetection),&Parms);
	}
	static FName NAME_ASBZSecurityCamera_OnRuntimeStateApplied = FName(TEXT("OnRuntimeStateApplied"));
	void ASBZSecurityCamera::OnRuntimeStateApplied(ESBZRuntimeState AppliedState)
	{
		SBZSecurityCamera_eventOnRuntimeStateApplied_Parms Parms;
		Parms.AppliedState=AppliedState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZSecurityCamera_OnRuntimeStateApplied),&Parms);
	}
	static FName NAME_ASBZSecurityCamera_OnRuntimeStateRemoved = FName(TEXT("OnRuntimeStateRemoved"));
	void ASBZSecurityCamera::OnRuntimeStateRemoved(ESBZRuntimeState AppliedState)
	{
		SBZSecurityCamera_eventOnRuntimeStateRemoved_Parms Parms;
		Parms.AppliedState=AppliedState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZSecurityCamera_OnRuntimeStateRemoved),&Parms);
	}
	static FName NAME_ASBZSecurityCamera_OnShieldApplied = FName(TEXT("OnShieldApplied"));
	void ASBZSecurityCamera::OnShieldApplied()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZSecurityCamera_OnShieldApplied),NULL);
	}
	static FName NAME_ASBZSecurityCamera_OnShieldRemoved = FName(TEXT("OnShieldRemoved"));
	void ASBZSecurityCamera::OnShieldRemoved()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZSecurityCamera_OnShieldRemoved),NULL);
	}
	void ASBZSecurityCamera::StaticRegisterNativesASBZSecurityCamera()
	{
		UClass* Class = ASBZSecurityCamera::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeRTPC", &ASBZSecurityCamera::execChangeRTPC },
			{ "GetCameraState", &ASBZSecurityCamera::execGetCameraState },
			{ "GetRuntimeState", &ASBZSecurityCamera::execGetRuntimeState },
			{ "Multicast_BecomeViewTarget", &ASBZSecurityCamera::execMulticast_BecomeViewTarget },
			{ "Multicast_EndViewTarget", &ASBZSecurityCamera::execMulticast_EndViewTarget },
			{ "Multicast_OnChangeState", &ASBZSecurityCamera::execMulticast_OnChangeState },
			{ "Multicast_RefundRuntime", &ASBZSecurityCamera::execMulticast_RefundRuntime },
			{ "Multicast_RemoveRuntime", &ASBZSecurityCamera::execMulticast_RemoveRuntime },
			{ "Multicast_ReplicateExplosion", &ASBZSecurityCamera::execMulticast_ReplicateExplosion },
			{ "Multicast_RuntimeExpired", &ASBZSecurityCamera::execMulticast_RuntimeExpired },
			{ "Multicast_SetECMDisabled", &ASBZSecurityCamera::execMulticast_SetECMDisabled },
			{ "Multicast_SetRuntimed", &ASBZSecurityCamera::execMulticast_SetRuntimed },
			{ "Multicast_SetRuntimeExplosionInstigator", &ASBZSecurityCamera::execMulticast_SetRuntimeExplosionInstigator },
			{ "Multicast_SetShielded", &ASBZSecurityCamera::execMulticast_SetShielded },
			{ "Multicast_StartAlarm", &ASBZSecurityCamera::execMulticast_StartAlarm },
			{ "Multicast_StartNonVisionGeneratorInvestigation", &ASBZSecurityCamera::execMulticast_StartNonVisionGeneratorInvestigation },
			{ "Multicast_UpdateRoughDetection", &ASBZSecurityCamera::execMulticast_UpdateRoughDetection },
			{ "OnAckAbortInteraction", &ASBZSecurityCamera::execOnAckAbortInteraction },
			{ "OnAckCompleteInteraction", &ASBZSecurityCamera::execOnAckCompleteInteraction },
			{ "OnECMCountChanged", &ASBZSecurityCamera::execOnECMCountChanged },
			{ "OnHeistStateChanged", &ASBZSecurityCamera::execOnHeistStateChanged },
			{ "OnPerceptionUpdated", &ASBZSecurityCamera::execOnPerceptionUpdated },
			{ "OnPredictedAbortInteraction", &ASBZSecurityCamera::execOnPredictedAbortInteraction },
			{ "OnRep_CameraState", &ASBZSecurityCamera::execOnRep_CameraState },
			{ "OnRep_CurrentCamRotation", &ASBZSecurityCamera::execOnRep_CurrentCamRotation },
			{ "OnRep_IsShielded", &ASBZSecurityCamera::execOnRep_IsShielded },
			{ "OnRep_RoughDetection", &ASBZSecurityCamera::execOnRep_RoughDetection },
			{ "OnRep_RuntimeState", &ASBZSecurityCamera::execOnRep_RuntimeState },
			{ "OnRep_TargetCamRotation", &ASBZSecurityCamera::execOnRep_TargetCamRotation },
			{ "OnRep_ViewTargetPlayerStateIdArray", &ASBZSecurityCamera::execOnRep_ViewTargetPlayerStateIdArray },
			{ "OnServerAbortInteraction", &ASBZSecurityCamera::execOnServerAbortInteraction },
			{ "OnVisualDetection", &ASBZSecurityCamera::execOnVisualDetection },
			{ "PlaySoundEvent", &ASBZSecurityCamera::execPlaySoundEvent },
			{ "SetAttractorInstigator", &ASBZSecurityCamera::execSetAttractorInstigator },
			{ "SetEnabled", &ASBZSecurityCamera::execSetEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_BP_OnCameraColorStateChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewCameraColorState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewCameraColorState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZSecurityCamera_BP_OnCameraColorStateChanged_Statics::NewProp_NewCameraColorState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_BP_OnCameraColorStateChanged_Statics::NewProp_NewCameraColorState = { "NewCameraColorState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventBP_OnCameraColorStateChanged_Parms, NewCameraColorState), Z_Construct_UEnum_Starbreeze_ESBZCameraColorState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSecurityCamera_BP_OnCameraColorStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_BP_OnCameraColorStateChanged_Statics::NewProp_NewCameraColorState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_BP_OnCameraColorStateChanged_Statics::NewProp_NewCameraColorState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_BP_OnCameraColorStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_BP_OnCameraColorStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "BP_OnCameraColorStateChanged", nullptr, nullptr, sizeof(SBZSecurityCamera_eventBP_OnCameraColorStateChanged_Parms), Z_Construct_UFunction_ASBZSecurityCamera_BP_OnCameraColorStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_BP_OnCameraColorStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_BP_OnCameraColorStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_BP_OnCameraColorStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_BP_OnCameraColorStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_BP_OnCameraColorStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_BP_OnIndestructibleCamera_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_BP_OnIndestructibleCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_BP_OnIndestructibleCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "BP_OnIndestructibleCamera", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_BP_OnIndestructibleCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_BP_OnIndestructibleCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_BP_OnIndestructibleCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_BP_OnIndestructibleCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_BP_OnStateChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZSecurityCamera_BP_OnStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_BP_OnStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventBP_OnStateChanged_Parms, OldState), Z_Construct_UEnum_Starbreeze_ESBZCameraState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZSecurityCamera_BP_OnStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_BP_OnStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventBP_OnStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZCameraState, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZSecurityCamera_BP_OnStateChanged_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZSecurityCamera_eventBP_OnStateChanged_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_BP_OnStateChanged_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSecurityCamera_eventBP_OnStateChanged_Parms), &Z_Construct_UFunction_ASBZSecurityCamera_BP_OnStateChanged_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSecurityCamera_BP_OnStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_BP_OnStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_BP_OnStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_BP_OnStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_BP_OnStateChanged_Statics::NewProp_NewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_BP_OnStateChanged_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_BP_OnStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_BP_OnStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "BP_OnStateChanged", nullptr, nullptr, sizeof(SBZSecurityCamera_eventBP_OnStateChanged_Parms), Z_Construct_UFunction_ASBZSecurityCamera_BP_OnStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_BP_OnStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_BP_OnStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_BP_OnStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_BP_OnStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_BP_OnStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_BP_OnViewTargetChanged_Statics
	{
		static void NewProp_bIsViewTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsViewTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZSecurityCamera_BP_OnViewTargetChanged_Statics::NewProp_bIsViewTarget_SetBit(void* Obj)
	{
		((SBZSecurityCamera_eventBP_OnViewTargetChanged_Parms*)Obj)->bIsViewTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_BP_OnViewTargetChanged_Statics::NewProp_bIsViewTarget = { "bIsViewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSecurityCamera_eventBP_OnViewTargetChanged_Parms), &Z_Construct_UFunction_ASBZSecurityCamera_BP_OnViewTargetChanged_Statics::NewProp_bIsViewTarget_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSecurityCamera_BP_OnViewTargetChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_BP_OnViewTargetChanged_Statics::NewProp_bIsViewTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_BP_OnViewTargetChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_BP_OnViewTargetChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "BP_OnViewTargetChanged", nullptr, nullptr, sizeof(SBZSecurityCamera_eventBP_OnViewTargetChanged_Parms), Z_Construct_UFunction_ASBZSecurityCamera_BP_OnViewTargetChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_BP_OnViewTargetChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_BP_OnViewTargetChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_BP_OnViewTargetChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_BP_OnViewTargetChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_BP_OnViewTargetChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_ChangeRTPC_Statics
	{
		struct SBZSecurityCamera_eventChangeRTPC_Parms
		{
			UAkRtpc* RTPC;
			float Value;
			int32 InterpolationTime;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RTPC;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InterpolationTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_ChangeRTPC_Statics::NewProp_RTPC = { "RTPC", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventChangeRTPC_Parms, RTPC), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_ChangeRTPC_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventChangeRTPC_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_ChangeRTPC_Statics::NewProp_InterpolationTime = { "InterpolationTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventChangeRTPC_Parms, InterpolationTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSecurityCamera_ChangeRTPC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_ChangeRTPC_Statics::NewProp_RTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_ChangeRTPC_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_ChangeRTPC_Statics::NewProp_InterpolationTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_ChangeRTPC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_ChangeRTPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "ChangeRTPC", nullptr, nullptr, sizeof(SBZSecurityCamera_eventChangeRTPC_Parms), Z_Construct_UFunction_ASBZSecurityCamera_ChangeRTPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_ChangeRTPC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_ChangeRTPC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_ChangeRTPC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_ChangeRTPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_ChangeRTPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_GetCameraState_Statics
	{
		struct SBZSecurityCamera_eventGetCameraState_Parms
		{
			ESBZCameraState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZSecurityCamera_GetCameraState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_GetCameraState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventGetCameraState_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZCameraState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSecurityCamera_GetCameraState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_GetCameraState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_GetCameraState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_GetCameraState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_GetCameraState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "GetCameraState", nullptr, nullptr, sizeof(SBZSecurityCamera_eventGetCameraState_Parms), Z_Construct_UFunction_ASBZSecurityCamera_GetCameraState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_GetCameraState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_GetCameraState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_GetCameraState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_GetCameraState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_GetCameraState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_GetRuntimeState_Statics
	{
		struct SBZSecurityCamera_eventGetRuntimeState_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZSecurityCamera_GetRuntimeState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventGetRuntimeState_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSecurityCamera_GetRuntimeState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_GetRuntimeState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_GetRuntimeState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_GetRuntimeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "GetRuntimeState", nullptr, nullptr, sizeof(SBZSecurityCamera_eventGetRuntimeState_Parms), Z_Construct_UFunction_ASBZSecurityCamera_GetRuntimeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_GetRuntimeState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_GetRuntimeState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_GetRuntimeState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_GetRuntimeState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_GetRuntimeState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_Multicast_BecomeViewTarget_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_Multicast_BecomeViewTarget_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventMulticast_BecomeViewTarget_Parms, PlayerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSecurityCamera_Multicast_BecomeViewTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_Multicast_BecomeViewTarget_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_Multicast_BecomeViewTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_Multicast_BecomeViewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "Multicast_BecomeViewTarget", nullptr, nullptr, sizeof(SBZSecurityCamera_eventMulticast_BecomeViewTarget_Parms), Z_Construct_UFunction_ASBZSecurityCamera_Multicast_BecomeViewTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_BecomeViewTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_BecomeViewTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_BecomeViewTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_Multicast_BecomeViewTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_Multicast_BecomeViewTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_Multicast_EndViewTarget_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_Multicast_EndViewTarget_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventMulticast_EndViewTarget_Parms, PlayerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSecurityCamera_Multicast_EndViewTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_Multicast_EndViewTarget_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_Multicast_EndViewTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_Multicast_EndViewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "Multicast_EndViewTarget", nullptr, nullptr, sizeof(SBZSecurityCamera_eventMulticast_EndViewTarget_Parms), Z_Construct_UFunction_ASBZSecurityCamera_Multicast_EndViewTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_EndViewTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_EndViewTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_EndViewTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_Multicast_EndViewTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_Multicast_EndViewTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_Multicast_OnChangeState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZSecurityCamera_Multicast_OnChangeState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_Multicast_OnChangeState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventMulticast_OnChangeState_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZCameraState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSecurityCamera_Multicast_OnChangeState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_Multicast_OnChangeState_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_Multicast_OnChangeState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_Multicast_OnChangeState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_Multicast_OnChangeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "Multicast_OnChangeState", nullptr, nullptr, sizeof(SBZSecurityCamera_eventMulticast_OnChangeState_Parms), Z_Construct_UFunction_ASBZSecurityCamera_Multicast_OnChangeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_OnChangeState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_OnChangeState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_OnChangeState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_Multicast_OnChangeState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_Multicast_OnChangeState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RefundRuntime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RefundRuntime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RefundRuntime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "Multicast_RefundRuntime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RefundRuntime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RefundRuntime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RefundRuntime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RefundRuntime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RemoveRuntime_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InRuntimeToRemove_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InRuntimeToRemove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RemoveRuntime_Statics::NewProp_InRuntimeToRemove_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RemoveRuntime_Statics::NewProp_InRuntimeToRemove = { "InRuntimeToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventMulticast_RemoveRuntime_Parms, InRuntimeToRemove), Z_Construct_UEnum_Starbreeze_ESBZRuntimeState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RemoveRuntime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RemoveRuntime_Statics::NewProp_InRuntimeToRemove_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RemoveRuntime_Statics::NewProp_InRuntimeToRemove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RemoveRuntime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RemoveRuntime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "Multicast_RemoveRuntime", nullptr, nullptr, sizeof(SBZSecurityCamera_eventMulticast_RemoveRuntime_Parms), Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RemoveRuntime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RemoveRuntime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RemoveRuntime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RemoveRuntime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RemoveRuntime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RemoveRuntime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_Multicast_ReplicateExplosion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_Multicast_ReplicateExplosion_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventMulticast_ReplicateExplosion_Parms, Result), Z_Construct_UScriptStruct_FSBZExplosionResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSecurityCamera_Multicast_ReplicateExplosion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_Multicast_ReplicateExplosion_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_Multicast_ReplicateExplosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "Multicast_ReplicateExplosion", nullptr, nullptr, sizeof(SBZSecurityCamera_eventMulticast_ReplicateExplosion_Parms), Z_Construct_UFunction_ASBZSecurityCamera_Multicast_ReplicateExplosion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_ReplicateExplosion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_Multicast_ReplicateExplosion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_Multicast_ReplicateExplosion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RuntimeExpired_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InRuntimeState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InRuntimeState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RuntimeExpired_Statics::NewProp_InRuntimeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RuntimeExpired_Statics::NewProp_InRuntimeState = { "InRuntimeState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventMulticast_RuntimeExpired_Parms, InRuntimeState), Z_Construct_UEnum_Starbreeze_ESBZRuntimeState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RuntimeExpired_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RuntimeExpired_Statics::NewProp_InRuntimeState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RuntimeExpired_Statics::NewProp_InRuntimeState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RuntimeExpired_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RuntimeExpired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "Multicast_RuntimeExpired", nullptr, nullptr, sizeof(SBZSecurityCamera_eventMulticast_RuntimeExpired_Parms), Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RuntimeExpired_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RuntimeExpired_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RuntimeExpired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RuntimeExpired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RuntimeExpired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RuntimeExpired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetECMDisabled_Statics
	{
		static void NewProp_bInIsDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsDisabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetECMDisabled_Statics::NewProp_bInIsDisabled_SetBit(void* Obj)
	{
		((SBZSecurityCamera_eventMulticast_SetECMDisabled_Parms*)Obj)->bInIsDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetECMDisabled_Statics::NewProp_bInIsDisabled = { "bInIsDisabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSecurityCamera_eventMulticast_SetECMDisabled_Parms), &Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetECMDisabled_Statics::NewProp_bInIsDisabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetECMDisabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetECMDisabled_Statics::NewProp_bInIsDisabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetECMDisabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetECMDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "Multicast_SetECMDisabled", nullptr, nullptr, sizeof(SBZSecurityCamera_eventMulticast_SetECMDisabled_Parms), Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetECMDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetECMDisabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetECMDisabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetECMDisabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetECMDisabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetECMDisabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetRuntimed_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InRuntimeState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InRuntimeState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetRuntimed_Statics::NewProp_InRuntimeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetRuntimed_Statics::NewProp_InRuntimeState = { "InRuntimeState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventMulticast_SetRuntimed_Parms, InRuntimeState), Z_Construct_UEnum_Starbreeze_ESBZRuntimeState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetRuntimed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetRuntimed_Statics::NewProp_InRuntimeState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetRuntimed_Statics::NewProp_InRuntimeState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetRuntimed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetRuntimed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "Multicast_SetRuntimed", nullptr, nullptr, sizeof(SBZSecurityCamera_eventMulticast_SetRuntimed_Parms), Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetRuntimed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetRuntimed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetRuntimed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetRuntimed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetRuntimed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetRuntimed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetRuntimeExplosionInstigator_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InExplosionInstigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetRuntimeExplosionInstigator_Statics::NewProp_InExplosionInstigator = { "InExplosionInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventMulticast_SetRuntimeExplosionInstigator_Parms, InExplosionInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetRuntimeExplosionInstigator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetRuntimeExplosionInstigator_Statics::NewProp_InExplosionInstigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetRuntimeExplosionInstigator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetRuntimeExplosionInstigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "Multicast_SetRuntimeExplosionInstigator", nullptr, nullptr, sizeof(SBZSecurityCamera_eventMulticast_SetRuntimeExplosionInstigator_Parms), Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetRuntimeExplosionInstigator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetRuntimeExplosionInstigator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetRuntimeExplosionInstigator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetRuntimeExplosionInstigator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetRuntimeExplosionInstigator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetRuntimeExplosionInstigator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetShielded_Statics
	{
		static void NewProp_bInShielded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInShielded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetShielded_Statics::NewProp_bInShielded_SetBit(void* Obj)
	{
		((SBZSecurityCamera_eventMulticast_SetShielded_Parms*)Obj)->bInShielded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetShielded_Statics::NewProp_bInShielded = { "bInShielded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSecurityCamera_eventMulticast_SetShielded_Parms), &Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetShielded_Statics::NewProp_bInShielded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetShielded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetShielded_Statics::NewProp_bInShielded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetShielded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetShielded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "Multicast_SetShielded", nullptr, nullptr, sizeof(SBZSecurityCamera_eventMulticast_SetShielded_Parms), Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetShielded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetShielded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetShielded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetShielded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetShielded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetShielded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_Multicast_StartAlarm_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_Multicast_StartAlarm_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_Multicast_StartAlarm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "Multicast_StartAlarm", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_StartAlarm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_StartAlarm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_Multicast_StartAlarm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_Multicast_StartAlarm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_Multicast_StartNonVisionGeneratorInvestigation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_Multicast_StartNonVisionGeneratorInvestigation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_Multicast_StartNonVisionGeneratorInvestigation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "Multicast_StartNonVisionGeneratorInvestigation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_StartNonVisionGeneratorInvestigation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_StartNonVisionGeneratorInvestigation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_Multicast_StartNonVisionGeneratorInvestigation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_Multicast_StartNonVisionGeneratorInvestigation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_Multicast_UpdateRoughDetection_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewRoughVisualDetectionValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZSecurityCamera_Multicast_UpdateRoughDetection_Statics::NewProp_NewRoughVisualDetectionValue = { "NewRoughVisualDetectionValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventMulticast_UpdateRoughDetection_Parms, NewRoughVisualDetectionValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSecurityCamera_Multicast_UpdateRoughDetection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_Multicast_UpdateRoughDetection_Statics::NewProp_NewRoughVisualDetectionValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_Multicast_UpdateRoughDetection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_Multicast_UpdateRoughDetection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "Multicast_UpdateRoughDetection", nullptr, nullptr, sizeof(SBZSecurityCamera_eventMulticast_UpdateRoughDetection_Parms), Z_Construct_UFunction_ASBZSecurityCamera_Multicast_UpdateRoughDetection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_UpdateRoughDetection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_UpdateRoughDetection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_Multicast_UpdateRoughDetection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_Multicast_UpdateRoughDetection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_Multicast_UpdateRoughDetection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_OnAckAbortInteraction_Statics
	{
		struct SBZSecurityCamera_eventOnAckAbortInteraction_Parms
		{
			USBZBaseInteractableComponent* InInteractable;
			USBZInteractorComponent* Interactor;
			bool bIsLocallyControlledInteractor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static void NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocallyControlledInteractor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_OnAckAbortInteraction_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_OnAckAbortInteraction_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventOnAckAbortInteraction_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_OnAckAbortInteraction_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnAckAbortInteraction_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_OnAckAbortInteraction_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_OnAckAbortInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventOnAckAbortInteraction_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_OnAckAbortInteraction_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnAckAbortInteraction_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZSecurityCamera_OnAckAbortInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj)
	{
		((SBZSecurityCamera_eventOnAckAbortInteraction_Parms*)Obj)->bIsLocallyControlledInteractor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_OnAckAbortInteraction_Statics::NewProp_bIsLocallyControlledInteractor = { "bIsLocallyControlledInteractor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSecurityCamera_eventOnAckAbortInteraction_Parms), &Z_Construct_UFunction_ASBZSecurityCamera_OnAckAbortInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSecurityCamera_OnAckAbortInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_OnAckAbortInteraction_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_OnAckAbortInteraction_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_OnAckAbortInteraction_Statics::NewProp_bIsLocallyControlledInteractor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_OnAckAbortInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_OnAckAbortInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "OnAckAbortInteraction", nullptr, nullptr, sizeof(SBZSecurityCamera_eventOnAckAbortInteraction_Parms), Z_Construct_UFunction_ASBZSecurityCamera_OnAckAbortInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnAckAbortInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_OnAckAbortInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnAckAbortInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_OnAckAbortInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_OnAckAbortInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_OnAckCompleteInteraction_Statics
	{
		struct SBZSecurityCamera_eventOnAckCompleteInteraction_Parms
		{
			USBZBaseInteractableComponent* InInteractable;
			USBZInteractorComponent* Interactor;
			bool bIsLocallyControlledInteractor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static void NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocallyControlledInteractor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_OnAckCompleteInteraction_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_OnAckCompleteInteraction_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventOnAckCompleteInteraction_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_OnAckCompleteInteraction_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnAckCompleteInteraction_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_OnAckCompleteInteraction_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_OnAckCompleteInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventOnAckCompleteInteraction_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_OnAckCompleteInteraction_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnAckCompleteInteraction_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZSecurityCamera_OnAckCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj)
	{
		((SBZSecurityCamera_eventOnAckCompleteInteraction_Parms*)Obj)->bIsLocallyControlledInteractor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_OnAckCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor = { "bIsLocallyControlledInteractor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSecurityCamera_eventOnAckCompleteInteraction_Parms), &Z_Construct_UFunction_ASBZSecurityCamera_OnAckCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSecurityCamera_OnAckCompleteInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_OnAckCompleteInteraction_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_OnAckCompleteInteraction_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_OnAckCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_OnAckCompleteInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_OnAckCompleteInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "OnAckCompleteInteraction", nullptr, nullptr, sizeof(SBZSecurityCamera_eventOnAckCompleteInteraction_Parms), Z_Construct_UFunction_ASBZSecurityCamera_OnAckCompleteInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnAckCompleteInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_OnAckCompleteInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnAckCompleteInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_OnAckCompleteInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_OnAckCompleteInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_OnECMCountChanged_Statics
	{
		struct SBZSecurityCamera_eventOnECMCountChanged_Parms
		{
			int32 NewCount;
			int32 OldCount;
			float AddedTime;
			bool bInIsSignalScanActive;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OldCount;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AddedTime;
		static void NewProp_bInIsSignalScanActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsSignalScanActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_OnECMCountChanged_Statics::NewProp_NewCount = { "NewCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventOnECMCountChanged_Parms, NewCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_OnECMCountChanged_Statics::NewProp_OldCount = { "OldCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventOnECMCountChanged_Parms, OldCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_OnECMCountChanged_Statics::NewProp_AddedTime = { "AddedTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventOnECMCountChanged_Parms, AddedTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZSecurityCamera_OnECMCountChanged_Statics::NewProp_bInIsSignalScanActive_SetBit(void* Obj)
	{
		((SBZSecurityCamera_eventOnECMCountChanged_Parms*)Obj)->bInIsSignalScanActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_OnECMCountChanged_Statics::NewProp_bInIsSignalScanActive = { "bInIsSignalScanActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSecurityCamera_eventOnECMCountChanged_Parms), &Z_Construct_UFunction_ASBZSecurityCamera_OnECMCountChanged_Statics::NewProp_bInIsSignalScanActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSecurityCamera_OnECMCountChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_OnECMCountChanged_Statics::NewProp_NewCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_OnECMCountChanged_Statics::NewProp_OldCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_OnECMCountChanged_Statics::NewProp_AddedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_OnECMCountChanged_Statics::NewProp_bInIsSignalScanActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_OnECMCountChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_OnECMCountChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "OnECMCountChanged", nullptr, nullptr, sizeof(SBZSecurityCamera_eventOnECMCountChanged_Parms), Z_Construct_UFunction_ASBZSecurityCamera_OnECMCountChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnECMCountChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_OnECMCountChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnECMCountChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_OnECMCountChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_OnECMCountChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_OnHeistStateChanged_Statics
	{
		struct SBZSecurityCamera_eventOnHeistStateChanged_Parms
		{
			EPD3HeistState OldState;
			EPD3HeistState NewState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZSecurityCamera_OnHeistStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_OnHeistStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventOnHeistStateChanged_Parms, OldState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZSecurityCamera_OnHeistStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_OnHeistStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventOnHeistStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSecurityCamera_OnHeistStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_OnHeistStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_OnHeistStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_OnHeistStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_OnHeistStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_OnHeistStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_OnHeistStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "OnHeistStateChanged", nullptr, nullptr, sizeof(SBZSecurityCamera_eventOnHeistStateChanged_Parms), Z_Construct_UFunction_ASBZSecurityCamera_OnHeistStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnHeistStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_OnHeistStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnHeistStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_OnHeistStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_OnHeistStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_OnPerceptionUpdated_Statics
	{
		struct SBZSecurityCamera_eventOnPerceptionUpdated_Parms
		{
			AActor* Actor;
			FAIStimulus Stimulus;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stimulus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_OnPerceptionUpdated_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventOnPerceptionUpdated_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_OnPerceptionUpdated_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventOnPerceptionUpdated_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSecurityCamera_OnPerceptionUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_OnPerceptionUpdated_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_OnPerceptionUpdated_Statics::NewProp_Stimulus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_OnPerceptionUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_OnPerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "OnPerceptionUpdated", nullptr, nullptr, sizeof(SBZSecurityCamera_eventOnPerceptionUpdated_Parms), Z_Construct_UFunction_ASBZSecurityCamera_OnPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnPerceptionUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_OnPerceptionUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnPerceptionUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_OnPerceptionUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_OnPerceptionUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_OnPredictedAbortInteraction_Statics
	{
		struct SBZSecurityCamera_eventOnPredictedAbortInteraction_Parms
		{
			USBZBaseInteractableComponent* InInteractable;
			USBZInteractorComponent* Interactor;
			bool bIsLocallyControlledInteractor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static void NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocallyControlledInteractor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_OnPredictedAbortInteraction_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_OnPredictedAbortInteraction_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventOnPredictedAbortInteraction_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_OnPredictedAbortInteraction_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnPredictedAbortInteraction_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_OnPredictedAbortInteraction_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_OnPredictedAbortInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventOnPredictedAbortInteraction_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_OnPredictedAbortInteraction_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnPredictedAbortInteraction_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZSecurityCamera_OnPredictedAbortInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj)
	{
		((SBZSecurityCamera_eventOnPredictedAbortInteraction_Parms*)Obj)->bIsLocallyControlledInteractor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_OnPredictedAbortInteraction_Statics::NewProp_bIsLocallyControlledInteractor = { "bIsLocallyControlledInteractor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSecurityCamera_eventOnPredictedAbortInteraction_Parms), &Z_Construct_UFunction_ASBZSecurityCamera_OnPredictedAbortInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSecurityCamera_OnPredictedAbortInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_OnPredictedAbortInteraction_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_OnPredictedAbortInteraction_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_OnPredictedAbortInteraction_Statics::NewProp_bIsLocallyControlledInteractor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_OnPredictedAbortInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_OnPredictedAbortInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "OnPredictedAbortInteraction", nullptr, nullptr, sizeof(SBZSecurityCamera_eventOnPredictedAbortInteraction_Parms), Z_Construct_UFunction_ASBZSecurityCamera_OnPredictedAbortInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnPredictedAbortInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_OnPredictedAbortInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnPredictedAbortInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_OnPredictedAbortInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_OnPredictedAbortInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_OnRep_CameraState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_OnRep_CameraState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_OnRep_CameraState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "OnRep_CameraState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_OnRep_CameraState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnRep_CameraState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_OnRep_CameraState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_OnRep_CameraState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_OnRep_CurrentCamRotation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_OnRep_CurrentCamRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_OnRep_CurrentCamRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "OnRep_CurrentCamRotation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_OnRep_CurrentCamRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnRep_CurrentCamRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_OnRep_CurrentCamRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_OnRep_CurrentCamRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_OnRep_IsShielded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_OnRep_IsShielded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_OnRep_IsShielded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "OnRep_IsShielded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_OnRep_IsShielded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnRep_IsShielded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_OnRep_IsShielded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_OnRep_IsShielded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_OnRep_RoughDetection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_OnRep_RoughDetection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_OnRep_RoughDetection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "OnRep_RoughDetection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_OnRep_RoughDetection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnRep_RoughDetection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_OnRep_RoughDetection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_OnRep_RoughDetection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_OnRep_RuntimeState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_OnRep_RuntimeState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_OnRep_RuntimeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "OnRep_RuntimeState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_OnRep_RuntimeState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnRep_RuntimeState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_OnRep_RuntimeState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_OnRep_RuntimeState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_OnRep_TargetCamRotation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_OnRep_TargetCamRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_OnRep_TargetCamRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "OnRep_TargetCamRotation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_OnRep_TargetCamRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnRep_TargetCamRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_OnRep_TargetCamRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_OnRep_TargetCamRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_OnRep_ViewTargetPlayerStateIdArray_Statics
	{
		struct SBZSecurityCamera_eventOnRep_ViewTargetPlayerStateIdArray_Parms
		{
			TArray<int32> OldViewTargetPlayerStateIdArray;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OldViewTargetPlayerStateIdArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldViewTargetPlayerStateIdArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OldViewTargetPlayerStateIdArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_OnRep_ViewTargetPlayerStateIdArray_Statics::NewProp_OldViewTargetPlayerStateIdArray_Inner = { "OldViewTargetPlayerStateIdArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_OnRep_ViewTargetPlayerStateIdArray_Statics::NewProp_OldViewTargetPlayerStateIdArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_OnRep_ViewTargetPlayerStateIdArray_Statics::NewProp_OldViewTargetPlayerStateIdArray = { "OldViewTargetPlayerStateIdArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventOnRep_ViewTargetPlayerStateIdArray_Parms, OldViewTargetPlayerStateIdArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_OnRep_ViewTargetPlayerStateIdArray_Statics::NewProp_OldViewTargetPlayerStateIdArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnRep_ViewTargetPlayerStateIdArray_Statics::NewProp_OldViewTargetPlayerStateIdArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSecurityCamera_OnRep_ViewTargetPlayerStateIdArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_OnRep_ViewTargetPlayerStateIdArray_Statics::NewProp_OldViewTargetPlayerStateIdArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_OnRep_ViewTargetPlayerStateIdArray_Statics::NewProp_OldViewTargetPlayerStateIdArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_OnRep_ViewTargetPlayerStateIdArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_OnRep_ViewTargetPlayerStateIdArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "OnRep_ViewTargetPlayerStateIdArray", nullptr, nullptr, sizeof(SBZSecurityCamera_eventOnRep_ViewTargetPlayerStateIdArray_Parms), Z_Construct_UFunction_ASBZSecurityCamera_OnRep_ViewTargetPlayerStateIdArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnRep_ViewTargetPlayerStateIdArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_OnRep_ViewTargetPlayerStateIdArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnRep_ViewTargetPlayerStateIdArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_OnRep_ViewTargetPlayerStateIdArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_OnRep_ViewTargetPlayerStateIdArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_OnRuntimeStateApplied_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AppliedState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AppliedState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZSecurityCamera_OnRuntimeStateApplied_Statics::NewProp_AppliedState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_OnRuntimeStateApplied_Statics::NewProp_AppliedState = { "AppliedState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventOnRuntimeStateApplied_Parms, AppliedState), Z_Construct_UEnum_Starbreeze_ESBZRuntimeState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSecurityCamera_OnRuntimeStateApplied_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_OnRuntimeStateApplied_Statics::NewProp_AppliedState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_OnRuntimeStateApplied_Statics::NewProp_AppliedState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_OnRuntimeStateApplied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_OnRuntimeStateApplied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "OnRuntimeStateApplied", nullptr, nullptr, sizeof(SBZSecurityCamera_eventOnRuntimeStateApplied_Parms), Z_Construct_UFunction_ASBZSecurityCamera_OnRuntimeStateApplied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnRuntimeStateApplied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_OnRuntimeStateApplied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnRuntimeStateApplied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_OnRuntimeStateApplied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_OnRuntimeStateApplied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_OnRuntimeStateRemoved_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AppliedState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AppliedState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZSecurityCamera_OnRuntimeStateRemoved_Statics::NewProp_AppliedState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_OnRuntimeStateRemoved_Statics::NewProp_AppliedState = { "AppliedState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventOnRuntimeStateRemoved_Parms, AppliedState), Z_Construct_UEnum_Starbreeze_ESBZRuntimeState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSecurityCamera_OnRuntimeStateRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_OnRuntimeStateRemoved_Statics::NewProp_AppliedState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_OnRuntimeStateRemoved_Statics::NewProp_AppliedState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_OnRuntimeStateRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_OnRuntimeStateRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "OnRuntimeStateRemoved", nullptr, nullptr, sizeof(SBZSecurityCamera_eventOnRuntimeStateRemoved_Parms), Z_Construct_UFunction_ASBZSecurityCamera_OnRuntimeStateRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnRuntimeStateRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_OnRuntimeStateRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnRuntimeStateRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_OnRuntimeStateRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_OnRuntimeStateRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_OnServerAbortInteraction_Statics
	{
		struct SBZSecurityCamera_eventOnServerAbortInteraction_Parms
		{
			USBZBaseInteractableComponent* InInteractable;
			USBZInteractorComponent* Interactor;
			bool bIsLocallyControlledInteractor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static void NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocallyControlledInteractor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_OnServerAbortInteraction_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_OnServerAbortInteraction_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventOnServerAbortInteraction_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_OnServerAbortInteraction_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnServerAbortInteraction_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_OnServerAbortInteraction_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_OnServerAbortInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventOnServerAbortInteraction_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_OnServerAbortInteraction_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnServerAbortInteraction_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZSecurityCamera_OnServerAbortInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj)
	{
		((SBZSecurityCamera_eventOnServerAbortInteraction_Parms*)Obj)->bIsLocallyControlledInteractor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_OnServerAbortInteraction_Statics::NewProp_bIsLocallyControlledInteractor = { "bIsLocallyControlledInteractor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSecurityCamera_eventOnServerAbortInteraction_Parms), &Z_Construct_UFunction_ASBZSecurityCamera_OnServerAbortInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSecurityCamera_OnServerAbortInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_OnServerAbortInteraction_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_OnServerAbortInteraction_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_OnServerAbortInteraction_Statics::NewProp_bIsLocallyControlledInteractor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_OnServerAbortInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_OnServerAbortInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "OnServerAbortInteraction", nullptr, nullptr, sizeof(SBZSecurityCamera_eventOnServerAbortInteraction_Parms), Z_Construct_UFunction_ASBZSecurityCamera_OnServerAbortInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnServerAbortInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_OnServerAbortInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnServerAbortInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_OnServerAbortInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_OnServerAbortInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_OnShieldApplied_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_OnShieldApplied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_OnShieldApplied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "OnShieldApplied", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_OnShieldApplied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnShieldApplied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_OnShieldApplied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_OnShieldApplied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_OnShieldRemoved_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_OnShieldRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_OnShieldRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "OnShieldRemoved", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_OnShieldRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnShieldRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_OnShieldRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_OnShieldRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_OnVisualDetection_Statics
	{
		struct SBZSecurityCamera_eventOnVisualDetection_Parms
		{
			USBZAIVisualDetectionComponent* DetectionComponent;
			bool bWasDetected;
			AActor* DetectedTarget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DetectionComponent;
		static void NewProp_bWasDetected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasDetected;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DetectedTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_OnVisualDetection_Statics::NewProp_DetectionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_OnVisualDetection_Statics::NewProp_DetectionComponent = { "DetectionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventOnVisualDetection_Parms, DetectionComponent), Z_Construct_UClass_USBZAIVisualDetectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_OnVisualDetection_Statics::NewProp_DetectionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnVisualDetection_Statics::NewProp_DetectionComponent_MetaData)) };
	void Z_Construct_UFunction_ASBZSecurityCamera_OnVisualDetection_Statics::NewProp_bWasDetected_SetBit(void* Obj)
	{
		((SBZSecurityCamera_eventOnVisualDetection_Parms*)Obj)->bWasDetected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_OnVisualDetection_Statics::NewProp_bWasDetected = { "bWasDetected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSecurityCamera_eventOnVisualDetection_Parms), &Z_Construct_UFunction_ASBZSecurityCamera_OnVisualDetection_Statics::NewProp_bWasDetected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_OnVisualDetection_Statics::NewProp_DetectedTarget = { "DetectedTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventOnVisualDetection_Parms, DetectedTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSecurityCamera_OnVisualDetection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_OnVisualDetection_Statics::NewProp_DetectionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_OnVisualDetection_Statics::NewProp_bWasDetected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_OnVisualDetection_Statics::NewProp_DetectedTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_OnVisualDetection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_OnVisualDetection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "OnVisualDetection", nullptr, nullptr, sizeof(SBZSecurityCamera_eventOnVisualDetection_Parms), Z_Construct_UFunction_ASBZSecurityCamera_OnVisualDetection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnVisualDetection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_OnVisualDetection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_OnVisualDetection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_OnVisualDetection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_OnVisualDetection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_PlaySoundEvent_Statics
	{
		struct SBZSecurityCamera_eventPlaySoundEvent_Parms
		{
			UAkAudioEvent* AudioEvent;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_PlaySoundEvent_Statics::NewProp_AudioEvent = { "AudioEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventPlaySoundEvent_Parms, AudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSecurityCamera_PlaySoundEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_PlaySoundEvent_Statics::NewProp_AudioEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_PlaySoundEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_PlaySoundEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "PlaySoundEvent", nullptr, nullptr, sizeof(SBZSecurityCamera_eventPlaySoundEvent_Parms), Z_Construct_UFunction_ASBZSecurityCamera_PlaySoundEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_PlaySoundEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_PlaySoundEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_PlaySoundEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_PlaySoundEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_PlaySoundEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_SetAttractorInstigator_Statics
	{
		struct SBZSecurityCamera_eventSetAttractorInstigator_Parms
		{
			APawn* NewInstigator;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewInstigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_SetAttractorInstigator_Statics::NewProp_NewInstigator = { "NewInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSecurityCamera_eventSetAttractorInstigator_Parms, NewInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSecurityCamera_SetAttractorInstigator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_SetAttractorInstigator_Statics::NewProp_NewInstigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_SetAttractorInstigator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_SetAttractorInstigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "SetAttractorInstigator", nullptr, nullptr, sizeof(SBZSecurityCamera_eventSetAttractorInstigator_Parms), Z_Construct_UFunction_ASBZSecurityCamera_SetAttractorInstigator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_SetAttractorInstigator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_SetAttractorInstigator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_SetAttractorInstigator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_SetAttractorInstigator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_SetAttractorInstigator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSecurityCamera_SetEnabled_Statics
	{
		struct SBZSecurityCamera_eventSetEnabled_Parms
		{
			bool bEnabled;
			bool ReturnValue;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZSecurityCamera_SetEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZSecurityCamera_eventSetEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_SetEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSecurityCamera_eventSetEnabled_Parms), &Z_Construct_UFunction_ASBZSecurityCamera_SetEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZSecurityCamera_SetEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZSecurityCamera_eventSetEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZSecurityCamera_SetEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSecurityCamera_eventSetEnabled_Parms), &Z_Construct_UFunction_ASBZSecurityCamera_SetEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSecurityCamera_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_SetEnabled_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecurityCamera_SetEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecurityCamera_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecurityCamera_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecurityCamera, nullptr, "SetEnabled", nullptr, nullptr, sizeof(SBZSecurityCamera_eventSetEnabled_Parms), Z_Construct_UFunction_ASBZSecurityCamera_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecurityCamera_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecurityCamera_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecurityCamera_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecurityCamera_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZSecurityCamera_NoRegister()
	{
		return ASBZSecurityCamera::StaticClass();
	}
	struct Z_Construct_UClass_ASBZSecurityCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BP_OnCameraStateChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnCameraStateChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerViewingChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerViewingChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Escalations_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Escalations_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Escalations_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Escalations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionNotificationAssetArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionNotificationAssetArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackableInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HackableInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MarkerComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttractorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttractorComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBodyRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraBodyRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraEyeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraEyeOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookAtLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRotationSpeedYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentRotationSpeedYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRotationSpeedPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentRotationSpeedPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SFXMinimumRotationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SFXMinimumRotationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRotating_MetaData[];
#endif
		static void NewProp_bIsRotating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRotating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SightRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeripheralVisionAngleDegrees_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PeripheralVisionAngleDegrees;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InvestigateEscalation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvestigateEscalation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InvestigateEscalation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimeState_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RuntimeState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsShielded_MetaData[];
#endif
		static void NewProp_bIsShielded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsShielded;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CameraState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CameraState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CameraSetting_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CameraSetting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecurityCameraRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecurityCameraRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLookAtLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLookAtLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndLookAtLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLookAtLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraTargetRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraTargetRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraCurrentRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraCurrentRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraLastRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraLastRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanDestroy_MetaData[];
#endif
		static void NewProp_bCanDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanDestroy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBeIndesctructable_MetaData[];
#endif
		static void NewProp_bCanBeIndesctructable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBeIndesctructable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoutoutTargetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShoutoutTargetComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutlineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutlineAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspiciousStartValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuspiciousStartValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlarmStartValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlarmStartValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlarmSoundDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlarmSoundDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraSoundComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraSoundComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationStartEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RotationStartEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationStopEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RotationStopEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspiciousStartEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuspiciousStartEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspiciousStopEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuspiciousStopEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlarmStartEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AlarmStartEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlarmStopEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AlarmStopEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraSilentEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraSilentEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraSuspicionLevelRTPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraSuspicionLevelRTPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraSuspicionLevelPitchRTPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraSuspicionLevelPitchRTPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraRotationVelocityRTPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraRotationVelocityRTPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraPossessionRTPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraPossessionRTPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationInterpolationTimeInMs_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationInterpolationTimeInMs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PossessionInterpolationTimeInMs_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PossessionInterpolationTimeInMs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisualDetectionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VisualDetectionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoughDetection_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RoughDetection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldTickInEditor_MetaData[];
#endif
		static void NewProp_bShouldTickInEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldTickInEditor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterestingTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InterestingTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_POIDetectionSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_POIDetectionSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyDetectMovement_MetaData[];
#endif
		static void NewProp_bOnlyDetectMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyDetectMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalRuntimeMarkedDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdditionalRuntimeMarkedDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EMPEffectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EMPEffectClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EMPExplodedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EMPExplodedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EMPDetonationEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EMPDetonationEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EMPStunDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EMPStunDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerExplosionRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerExplosionRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIExplosionRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AIExplosionRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HurtReactionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HurtReactionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimeLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RuntimeLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimeTagsToMark_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RuntimeTagsToMark;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoAimComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AutoAimComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionInstigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionInstigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPOIDetection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentPOIDetection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastDetection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastDetection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDetection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentDetection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsECMDisabled_MetaData[];
#endif
		static void NewProp_bIsECMDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsECMDisabled;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SoundState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SoundState;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ViewTargetPlayerStateIdArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewTargetPlayerStateIdArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ViewTargetPlayerStateIdArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_YawLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PitchLimit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerceivedData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerceivedData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerceivedData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerceivedActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerceivedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerceivedActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DetectedActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DetectedActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatisticsMarkCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatisticsMarkCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentRoom;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentlyMarkedActorsArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentlyMarkedActorsArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentlyMarkedActorsArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HackedByPlayerArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackedByPlayerArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HackedByPlayerArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZSecurityCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZSecurityCamera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZSecurityCamera_BP_OnCameraColorStateChanged, "BP_OnCameraColorStateChanged" }, // 2396767513
		{ &Z_Construct_UFunction_ASBZSecurityCamera_BP_OnIndestructibleCamera, "BP_OnIndestructibleCamera" }, // 2033663399
		{ &Z_Construct_UFunction_ASBZSecurityCamera_BP_OnStateChanged, "BP_OnStateChanged" }, // 4161902962
		{ &Z_Construct_UFunction_ASBZSecurityCamera_BP_OnViewTargetChanged, "BP_OnViewTargetChanged" }, // 1754919648
		{ &Z_Construct_UFunction_ASBZSecurityCamera_ChangeRTPC, "ChangeRTPC" }, // 91835697
		{ &Z_Construct_UFunction_ASBZSecurityCamera_GetCameraState, "GetCameraState" }, // 2253867039
		{ &Z_Construct_UFunction_ASBZSecurityCamera_GetRuntimeState, "GetRuntimeState" }, // 3273003274
		{ &Z_Construct_UFunction_ASBZSecurityCamera_Multicast_BecomeViewTarget, "Multicast_BecomeViewTarget" }, // 2352111262
		{ &Z_Construct_UFunction_ASBZSecurityCamera_Multicast_EndViewTarget, "Multicast_EndViewTarget" }, // 768158788
		{ &Z_Construct_UFunction_ASBZSecurityCamera_Multicast_OnChangeState, "Multicast_OnChangeState" }, // 4196992119
		{ &Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RefundRuntime, "Multicast_RefundRuntime" }, // 1583293706
		{ &Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RemoveRuntime, "Multicast_RemoveRuntime" }, // 2119236998
		{ &Z_Construct_UFunction_ASBZSecurityCamera_Multicast_ReplicateExplosion, "Multicast_ReplicateExplosion" }, // 2042008780
		{ &Z_Construct_UFunction_ASBZSecurityCamera_Multicast_RuntimeExpired, "Multicast_RuntimeExpired" }, // 1668992312
		{ &Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetECMDisabled, "Multicast_SetECMDisabled" }, // 2957920815
		{ &Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetRuntimed, "Multicast_SetRuntimed" }, // 2224017402
		{ &Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetRuntimeExplosionInstigator, "Multicast_SetRuntimeExplosionInstigator" }, // 1130959239
		{ &Z_Construct_UFunction_ASBZSecurityCamera_Multicast_SetShielded, "Multicast_SetShielded" }, // 1168688930
		{ &Z_Construct_UFunction_ASBZSecurityCamera_Multicast_StartAlarm, "Multicast_StartAlarm" }, // 1667211456
		{ &Z_Construct_UFunction_ASBZSecurityCamera_Multicast_StartNonVisionGeneratorInvestigation, "Multicast_StartNonVisionGeneratorInvestigation" }, // 2750006015
		{ &Z_Construct_UFunction_ASBZSecurityCamera_Multicast_UpdateRoughDetection, "Multicast_UpdateRoughDetection" }, // 3824666537
		{ &Z_Construct_UFunction_ASBZSecurityCamera_OnAckAbortInteraction, "OnAckAbortInteraction" }, // 1297420635
		{ &Z_Construct_UFunction_ASBZSecurityCamera_OnAckCompleteInteraction, "OnAckCompleteInteraction" }, // 3696515377
		{ &Z_Construct_UFunction_ASBZSecurityCamera_OnECMCountChanged, "OnECMCountChanged" }, // 468653253
		{ &Z_Construct_UFunction_ASBZSecurityCamera_OnHeistStateChanged, "OnHeistStateChanged" }, // 105378727
		{ &Z_Construct_UFunction_ASBZSecurityCamera_OnPerceptionUpdated, "OnPerceptionUpdated" }, // 3010403075
		{ &Z_Construct_UFunction_ASBZSecurityCamera_OnPredictedAbortInteraction, "OnPredictedAbortInteraction" }, // 3749688843
		{ &Z_Construct_UFunction_ASBZSecurityCamera_OnRep_CameraState, "OnRep_CameraState" }, // 2988348208
		{ &Z_Construct_UFunction_ASBZSecurityCamera_OnRep_CurrentCamRotation, "OnRep_CurrentCamRotation" }, // 903675550
		{ &Z_Construct_UFunction_ASBZSecurityCamera_OnRep_IsShielded, "OnRep_IsShielded" }, // 3792832585
		{ &Z_Construct_UFunction_ASBZSecurityCamera_OnRep_RoughDetection, "OnRep_RoughDetection" }, // 1178211965
		{ &Z_Construct_UFunction_ASBZSecurityCamera_OnRep_RuntimeState, "OnRep_RuntimeState" }, // 1630597932
		{ &Z_Construct_UFunction_ASBZSecurityCamera_OnRep_TargetCamRotation, "OnRep_TargetCamRotation" }, // 2910633361
		{ &Z_Construct_UFunction_ASBZSecurityCamera_OnRep_ViewTargetPlayerStateIdArray, "OnRep_ViewTargetPlayerStateIdArray" }, // 4268430479
		{ &Z_Construct_UFunction_ASBZSecurityCamera_OnRuntimeStateApplied, "OnRuntimeStateApplied" }, // 627454153
		{ &Z_Construct_UFunction_ASBZSecurityCamera_OnRuntimeStateRemoved, "OnRuntimeStateRemoved" }, // 1461945510
		{ &Z_Construct_UFunction_ASBZSecurityCamera_OnServerAbortInteraction, "OnServerAbortInteraction" }, // 4031468383
		{ &Z_Construct_UFunction_ASBZSecurityCamera_OnShieldApplied, "OnShieldApplied" }, // 1100322915
		{ &Z_Construct_UFunction_ASBZSecurityCamera_OnShieldRemoved, "OnShieldRemoved" }, // 437563548
		{ &Z_Construct_UFunction_ASBZSecurityCamera_OnVisualDetection, "OnVisualDetection" }, // 556493190
		{ &Z_Construct_UFunction_ASBZSecurityCamera_PlaySoundEvent, "PlaySoundEvent" }, // 2325504668
		{ &Z_Construct_UFunction_ASBZSecurityCamera_SetAttractorInstigator, "SetAttractorInstigator" }, // 3010399435
		{ &Z_Construct_UFunction_ASBZSecurityCamera_SetEnabled, "SetEnabled" }, // 2072446814
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SBZSecurityCamera.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_BP_OnCameraStateChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_BP_OnCameraStateChanged = { "BP_OnCameraStateChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, BP_OnCameraStateChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZ_BPOnCameraStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_BP_OnCameraStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_BP_OnCameraStateChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_OnPlayerViewingChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_OnPlayerViewingChanged = { "OnPlayerViewingChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, OnPlayerViewingChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZPlayerViewingChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_OnPlayerViewingChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_OnPlayerViewingChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, Type), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_Escalations_ValueProp = { "Escalations", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZActionNotificationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_Escalations_Key_KeyProp = { "Escalations_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_Escalations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_Escalations = { "Escalations", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, Escalations), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_Escalations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_Escalations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_ActionNotificationAssetArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_ActionNotificationAssetArray = { "ActionNotificationAssetArray", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(ActionNotificationAssetArray, ASBZSecurityCamera), STRUCT_OFFSET(ASBZSecurityCamera, ActionNotificationAssetArray), Z_Construct_UClass_USBZActionNotificationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_ActionNotificationAssetArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_ActionNotificationAssetArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_HackableInteractable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_HackableInteractable = { "HackableInteractable", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, HackableInteractable), Z_Construct_UClass_USBZHackableInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_HackableInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_HackableInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_MarkerComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_MarkerComponent = { "MarkerComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, MarkerComponent), Z_Construct_UClass_USBZMarkerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_MarkerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_MarkerComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AttractorComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AttractorComponent = { "AttractorComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, AttractorComponent), Z_Construct_UClass_USBZAIAttractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AttractorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AttractorComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraBodyRoot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraBodyRoot = { "CameraBodyRoot", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, CameraBodyRoot), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraBodyRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraBodyRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraEyeOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraEyeOffset = { "CameraEyeOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, CameraEyeOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraEyeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraEyeOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_LookAtLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_LookAtLocation = { "LookAtLocation", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, LookAtLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_LookAtLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_LookAtLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, RotationSpeed), METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RotationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CurrentRotationSpeedYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CurrentRotationSpeedYaw = { "CurrentRotationSpeedYaw", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, CurrentRotationSpeedYaw), METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CurrentRotationSpeedYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CurrentRotationSpeedYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CurrentRotationSpeedPitch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CurrentRotationSpeedPitch = { "CurrentRotationSpeedPitch", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, CurrentRotationSpeedPitch), METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CurrentRotationSpeedPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CurrentRotationSpeedPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SFXMinimumRotationSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SFXMinimumRotationSpeed = { "SFXMinimumRotationSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, SFXMinimumRotationSpeed), METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SFXMinimumRotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SFXMinimumRotationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bIsRotating_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	void Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bIsRotating_SetBit(void* Obj)
	{
		((ASBZSecurityCamera*)Obj)->bIsRotating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bIsRotating = { "bIsRotating", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZSecurityCamera), &Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bIsRotating_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bIsRotating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bIsRotating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_WaitTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_WaitTime = { "WaitTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, WaitTime), METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_WaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_WaitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SightRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SightRadius = { "SightRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, SightRadius), METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SightRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SightRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_PeripheralVisionAngleDegrees_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_PeripheralVisionAngleDegrees = { "PeripheralVisionAngleDegrees", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, PeripheralVisionAngleDegrees), METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_PeripheralVisionAngleDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_PeripheralVisionAngleDegrees_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_InvestigateEscalation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_InvestigateEscalation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_InvestigateEscalation = { "InvestigateEscalation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, InvestigateEscalation), Z_Construct_UEnum_Starbreeze_EPD3DispatchCallerReason, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_InvestigateEscalation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_InvestigateEscalation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RuntimeState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RuntimeState = { "RuntimeState", "OnRep_RuntimeState", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, RuntimeState), nullptr, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RuntimeState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RuntimeState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bIsShielded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	void Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bIsShielded_SetBit(void* Obj)
	{
		((ASBZSecurityCamera*)Obj)->bIsShielded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bIsShielded = { "bIsShielded", "OnRep_IsShielded", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZSecurityCamera), &Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bIsShielded_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bIsShielded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bIsShielded_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraState = { "CameraState", "OnRep_CameraState", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, CameraState), Z_Construct_UEnum_Starbreeze_ESBZCameraState, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraSetting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraSetting = { "CameraSetting", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, CameraSetting), Z_Construct_UEnum_Starbreeze_ESBZCameraOptions, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraSetting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SecurityCameraRoot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SecurityCameraRoot = { "SecurityCameraRoot", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, SecurityCameraRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SecurityCameraRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SecurityCameraRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_StartLookAtLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_StartLookAtLocation = { "StartLookAtLocation", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, StartLookAtLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_StartLookAtLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_StartLookAtLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_EndLookAtLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_EndLookAtLocation = { "EndLookAtLocation", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, EndLookAtLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_EndLookAtLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_EndLookAtLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraTargetRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraTargetRotation = { "CameraTargetRotation", "OnRep_TargetCamRotation", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, CameraTargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraTargetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraTargetRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraCurrentRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraCurrentRotation = { "CameraCurrentRotation", "OnRep_CurrentCamRotation", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, CameraCurrentRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraCurrentRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraCurrentRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraLastRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraLastRotation = { "CameraLastRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, CameraLastRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraLastRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraLastRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bCanDestroy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	void Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bCanDestroy_SetBit(void* Obj)
	{
		((ASBZSecurityCamera*)Obj)->bCanDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bCanDestroy = { "bCanDestroy", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZSecurityCamera), &Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bCanDestroy_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bCanDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bCanDestroy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_Health_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, Health), METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bCanBeIndesctructable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	void Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bCanBeIndesctructable_SetBit(void* Obj)
	{
		((ASBZSecurityCamera*)Obj)->bCanBeIndesctructable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bCanBeIndesctructable = { "bCanBeIndesctructable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZSecurityCamera), &Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bCanBeIndesctructable_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bCanBeIndesctructable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bCanBeIndesctructable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_ShoutoutTargetComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_ShoutoutTargetComponent = { "ShoutoutTargetComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, ShoutoutTargetComponent), Z_Construct_UClass_USBZShoutTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_ShoutoutTargetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_ShoutoutTargetComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_OutlineComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_OutlineComponent = { "OutlineComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, OutlineComponent), Z_Construct_UClass_USBZOutlineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_OutlineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_OutlineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_OutlineAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_OutlineAsset = { "OutlineAsset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, OutlineAsset), Z_Construct_UClass_USBZOutlineAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_OutlineAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_OutlineAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SuspiciousStartValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SuspiciousStartValue = { "SuspiciousStartValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, SuspiciousStartValue), METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SuspiciousStartValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SuspiciousStartValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AlarmStartValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AlarmStartValue = { "AlarmStartValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, AlarmStartValue), METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AlarmStartValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AlarmStartValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AlarmSoundDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AlarmSoundDuration = { "AlarmSoundDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, AlarmSoundDuration), METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AlarmSoundDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AlarmSoundDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraSoundComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraSoundComponent = { "CameraSoundComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, CameraSoundComponent), Z_Construct_UClass_USBZAmbientSoundComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraSoundComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraSoundComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RotationStartEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RotationStartEvent = { "RotationStartEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, RotationStartEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RotationStartEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RotationStartEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RotationStopEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RotationStopEvent = { "RotationStopEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, RotationStopEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RotationStopEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RotationStopEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SuspiciousStartEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SuspiciousStartEvent = { "SuspiciousStartEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, SuspiciousStartEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SuspiciousStartEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SuspiciousStartEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SuspiciousStopEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SuspiciousStopEvent = { "SuspiciousStopEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, SuspiciousStopEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SuspiciousStopEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SuspiciousStopEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AlarmStartEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AlarmStartEvent = { "AlarmStartEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, AlarmStartEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AlarmStartEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AlarmStartEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AlarmStopEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AlarmStopEvent = { "AlarmStopEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, AlarmStopEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AlarmStopEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AlarmStopEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraSilentEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraSilentEvent = { "CameraSilentEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, CameraSilentEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraSilentEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraSilentEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraSuspicionLevelRTPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraSuspicionLevelRTPC = { "CameraSuspicionLevelRTPC", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, CameraSuspicionLevelRTPC), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraSuspicionLevelRTPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraSuspicionLevelRTPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraSuspicionLevelPitchRTPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraSuspicionLevelPitchRTPC = { "CameraSuspicionLevelPitchRTPC", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, CameraSuspicionLevelPitchRTPC), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraSuspicionLevelPitchRTPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraSuspicionLevelPitchRTPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraRotationVelocityRTPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraRotationVelocityRTPC = { "CameraRotationVelocityRTPC", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, CameraRotationVelocityRTPC), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraRotationVelocityRTPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraRotationVelocityRTPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraPossessionRTPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraPossessionRTPC = { "CameraPossessionRTPC", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, CameraPossessionRTPC), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraPossessionRTPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraPossessionRTPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RotationInterpolationTimeInMs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RotationInterpolationTimeInMs = { "RotationInterpolationTimeInMs", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, RotationInterpolationTimeInMs), METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RotationInterpolationTimeInMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RotationInterpolationTimeInMs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_PossessionInterpolationTimeInMs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_PossessionInterpolationTimeInMs = { "PossessionInterpolationTimeInMs", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, PossessionInterpolationTimeInMs), METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_PossessionInterpolationTimeInMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_PossessionInterpolationTimeInMs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_VisualDetectionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_VisualDetectionComponent = { "VisualDetectionComponent", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, VisualDetectionComponent), Z_Construct_UClass_USBZAIVisualDetectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_VisualDetectionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_VisualDetectionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RoughDetection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RoughDetection = { "RoughDetection", "OnRep_RoughDetection", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, RoughDetection), nullptr, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RoughDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RoughDetection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bShouldTickInEditor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	void Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bShouldTickInEditor_SetBit(void* Obj)
	{
		((ASBZSecurityCamera*)Obj)->bShouldTickInEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bShouldTickInEditor = { "bShouldTickInEditor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZSecurityCamera), &Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bShouldTickInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bShouldTickInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bShouldTickInEditor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_InterestingTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_InterestingTags = { "InterestingTags", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, InterestingTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_InterestingTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_InterestingTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_POIDetectionSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_POIDetectionSpeed = { "POIDetectionSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, POIDetectionSpeed), METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_POIDetectionSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_POIDetectionSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bOnlyDetectMovement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	void Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bOnlyDetectMovement_SetBit(void* Obj)
	{
		((ASBZSecurityCamera*)Obj)->bOnlyDetectMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bOnlyDetectMovement = { "bOnlyDetectMovement", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZSecurityCamera), &Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bOnlyDetectMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bOnlyDetectMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bOnlyDetectMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AdditionalRuntimeMarkedDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AdditionalRuntimeMarkedDuration = { "AdditionalRuntimeMarkedDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, AdditionalRuntimeMarkedDuration), METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AdditionalRuntimeMarkedDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AdditionalRuntimeMarkedDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_EMPEffectClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_EMPEffectClass = { "EMPEffectClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, EMPEffectClass), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_EMPEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_EMPEffectClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_EMPExplodedEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_EMPExplodedEvent = { "EMPExplodedEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, EMPExplodedEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_EMPExplodedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_EMPExplodedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_EMPDetonationEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_EMPDetonationEffect = { "EMPDetonationEffect", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, EMPDetonationEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_EMPDetonationEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_EMPDetonationEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_EMPStunDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_EMPStunDuration = { "EMPStunDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, EMPStunDuration), METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_EMPStunDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_EMPStunDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_PlayerExplosionRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_PlayerExplosionRange = { "PlayerExplosionRange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, PlayerExplosionRange), METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_PlayerExplosionRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_PlayerExplosionRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AIExplosionRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AIExplosionRange = { "AIExplosionRange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, AIExplosionRange), METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AIExplosionRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AIExplosionRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_HurtReactionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_HurtReactionData = { "HurtReactionData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, HurtReactionData), Z_Construct_UScriptStruct_FSBZHurtReactionData, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_HurtReactionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_HurtReactionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RuntimeLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RuntimeLimit = { "RuntimeLimit", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, RuntimeLimit), METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RuntimeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RuntimeLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RuntimeTagsToMark_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RuntimeTagsToMark = { "RuntimeTagsToMark", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, RuntimeTagsToMark), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RuntimeTagsToMark_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RuntimeTagsToMark_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AutoAimComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AutoAimComponent = { "AutoAimComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, AutoAimComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AutoAimComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AutoAimComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_ExplosionInstigator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_ExplosionInstigator = { "ExplosionInstigator", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, ExplosionInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_ExplosionInstigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_ExplosionInstigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CurrentPOIDetection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CurrentPOIDetection = { "CurrentPOIDetection", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, CurrentPOIDetection), METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CurrentPOIDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CurrentPOIDetection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_LastDetection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_LastDetection = { "LastDetection", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, LastDetection), METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_LastDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_LastDetection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CurrentDetection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CurrentDetection = { "CurrentDetection", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, CurrentDetection), METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CurrentDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CurrentDetection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bIsECMDisabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	void Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bIsECMDisabled_SetBit(void* Obj)
	{
		((ASBZSecurityCamera*)Obj)->bIsECMDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bIsECMDisabled = { "bIsECMDisabled", nullptr, (EPropertyFlags)0x0020080000002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZSecurityCamera), &Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bIsECMDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bIsECMDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bIsECMDisabled_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SoundState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SoundState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SoundState = { "SoundState", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, SoundState), Z_Construct_UEnum_Starbreeze_ESBZCameraSoundState, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SoundState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SoundState_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_ViewTargetPlayerStateIdArray_Inner = { "ViewTargetPlayerStateIdArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_ViewTargetPlayerStateIdArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_ViewTargetPlayerStateIdArray = { "ViewTargetPlayerStateIdArray", "OnRep_ViewTargetPlayerStateIdArray", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, ViewTargetPlayerStateIdArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_ViewTargetPlayerStateIdArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_ViewTargetPlayerStateIdArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_YawLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_YawLimit = { "YawLimit", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, YawLimit), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_YawLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_YawLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_PitchLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_PitchLimit = { "PitchLimit", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, PitchLimit), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_PitchLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_PitchLimit_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_PerceivedData_Inner = { "PerceivedData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZSecurityCameraDetectionData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_PerceivedData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_PerceivedData = { "PerceivedData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, PerceivedData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_PerceivedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_PerceivedData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_PerceivedActors_Inner = { "PerceivedActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_PerceivedActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_PerceivedActors = { "PerceivedActors", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, PerceivedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_PerceivedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_PerceivedActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_DetectedActors_Inner = { "DetectedActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_DetectedActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_DetectedActors = { "DetectedActors", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, DetectedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_DetectedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_DetectedActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_StatisticsMarkCamera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_StatisticsMarkCamera = { "StatisticsMarkCamera", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, StatisticsMarkCamera), METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_StatisticsMarkCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_StatisticsMarkCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CurrentRoom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CurrentRoom = { "CurrentRoom", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, CurrentRoom), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CurrentRoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CurrentRoom_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CurrentlyMarkedActorsArray_Inner = { "CurrentlyMarkedActorsArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CurrentlyMarkedActorsArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CurrentlyMarkedActorsArray = { "CurrentlyMarkedActorsArray", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, CurrentlyMarkedActorsArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CurrentlyMarkedActorsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CurrentlyMarkedActorsArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_HackedByPlayerArray_Inner = { "HackedByPlayerArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_HackedByPlayerArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecurityCamera" },
		{ "ModuleRelativePath", "Public/SBZSecurityCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_HackedByPlayerArray = { "HackedByPlayerArray", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSecurityCamera, HackedByPlayerArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_HackedByPlayerArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_HackedByPlayerArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZSecurityCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_BP_OnCameraStateChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_OnPlayerViewingChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_Escalations_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_Escalations_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_Escalations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_ActionNotificationAssetArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_HackableInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_MarkerComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AttractorComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraBodyRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraEyeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_LookAtLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RotationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CurrentRotationSpeedYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CurrentRotationSpeedPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SFXMinimumRotationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bIsRotating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_WaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SightRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_PeripheralVisionAngleDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_InvestigateEscalation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_InvestigateEscalation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RuntimeState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bIsShielded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraSetting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SecurityCameraRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_StartLookAtLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_EndLookAtLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraTargetRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraCurrentRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraLastRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bCanDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bCanBeIndesctructable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_ShoutoutTargetComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_OutlineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_OutlineAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SuspiciousStartValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AlarmStartValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AlarmSoundDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraSoundComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RotationStartEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RotationStopEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SuspiciousStartEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SuspiciousStopEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AlarmStartEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AlarmStopEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraSilentEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraSuspicionLevelRTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraSuspicionLevelPitchRTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraRotationVelocityRTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CameraPossessionRTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RotationInterpolationTimeInMs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_PossessionInterpolationTimeInMs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_VisualDetectionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RoughDetection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bShouldTickInEditor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_InterestingTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_POIDetectionSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bOnlyDetectMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AdditionalRuntimeMarkedDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_EMPEffectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_EMPExplodedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_EMPDetonationEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_EMPStunDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_PlayerExplosionRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AIExplosionRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_HurtReactionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RuntimeLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_RuntimeTagsToMark,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_AutoAimComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_ExplosionInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CurrentPOIDetection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_LastDetection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CurrentDetection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_bIsECMDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SoundState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_SoundState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_ViewTargetPlayerStateIdArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_ViewTargetPlayerStateIdArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_YawLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_PitchLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_PerceivedData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_PerceivedData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_PerceivedActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_PerceivedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_DetectedActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_DetectedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_StatisticsMarkCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CurrentRoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CurrentlyMarkedActorsArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_CurrentlyMarkedActorsArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_HackedByPlayerArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSecurityCamera_Statics::NewProp_HackedByPlayerArray,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZSecurityCamera_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZAIAttractorInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZSecurityCamera, ISBZAIAttractorInterface), false },
			{ Z_Construct_UClass_USBZAIVisualDetectorInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZSecurityCamera, ISBZAIVisualDetectorInterface), false },
			{ Z_Construct_UClass_USBZCameraViewInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZSecurityCamera, ISBZCameraViewInterface), false },
			{ Z_Construct_UClass_USBZPawnLifetime_NoRegister, (int32)VTABLE_OFFSET(ASBZSecurityCamera, ISBZPawnLifetime), false },
			{ Z_Construct_UClass_USBZTypeInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZSecurityCamera, ISBZTypeInterface), false },
			{ Z_Construct_UClass_USBZRuntimeInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZSecurityCamera, ISBZRuntimeInterface), false },
			{ Z_Construct_UClass_USBZExplosive_NoRegister, (int32)VTABLE_OFFSET(ASBZSecurityCamera, ISBZExplosive), false },
			{ Z_Construct_UClass_USBZHurtReactionDataInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZSecurityCamera, ISBZHurtReactionDataInterface), false },
			{ Z_Construct_UClass_USBZMarkableInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZSecurityCamera, ISBZMarkableInterface), false },
			{ Z_Construct_UClass_USBZRoomVolumeInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZSecurityCamera, ISBZRoomVolumeInterface), false },
			{ Z_Construct_UClass_USBZAutoAimInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZSecurityCamera, ISBZAutoAimInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZSecurityCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZSecurityCamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZSecurityCamera_Statics::ClassParams = {
		&ASBZSecurityCamera::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZSecurityCamera_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZSecurityCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecurityCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZSecurityCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZSecurityCamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZSecurityCamera, 94779358);
	template<> STARBREEZE_API UClass* StaticClass<ASBZSecurityCamera>()
	{
		return ASBZSecurityCamera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZSecurityCamera(Z_Construct_UClass_ASBZSecurityCamera, &ASBZSecurityCamera::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZSecurityCamera"), false, nullptr, nullptr, nullptr);

	void ASBZSecurityCamera::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_RuntimeState(TEXT("RuntimeState"));
		static const FName Name_bIsShielded(TEXT("bIsShielded"));
		static const FName Name_CameraState(TEXT("CameraState"));
		static const FName Name_CameraTargetRotation(TEXT("CameraTargetRotation"));
		static const FName Name_CameraCurrentRotation(TEXT("CameraCurrentRotation"));
		static const FName Name_RoughDetection(TEXT("RoughDetection"));
		static const FName Name_bIsECMDisabled(TEXT("bIsECMDisabled"));
		static const FName Name_ViewTargetPlayerStateIdArray(TEXT("ViewTargetPlayerStateIdArray"));

		const bool bIsValid = true
			&& Name_RuntimeState == ClassReps[(int32)ENetFields_Private::RuntimeState].Property->GetFName()
			&& Name_bIsShielded == ClassReps[(int32)ENetFields_Private::bIsShielded].Property->GetFName()
			&& Name_CameraState == ClassReps[(int32)ENetFields_Private::CameraState].Property->GetFName()
			&& Name_CameraTargetRotation == ClassReps[(int32)ENetFields_Private::CameraTargetRotation].Property->GetFName()
			&& Name_CameraCurrentRotation == ClassReps[(int32)ENetFields_Private::CameraCurrentRotation].Property->GetFName()
			&& Name_RoughDetection == ClassReps[(int32)ENetFields_Private::RoughDetection].Property->GetFName()
			&& Name_bIsECMDisabled == ClassReps[(int32)ENetFields_Private::bIsECMDisabled].Property->GetFName()
			&& Name_ViewTargetPlayerStateIdArray == ClassReps[(int32)ENetFields_Private::ViewTargetPlayerStateIdArray].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZSecurityCamera"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZSecurityCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
