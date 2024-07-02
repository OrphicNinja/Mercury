// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIDrone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIDrone() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIDrone_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIDrone();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZRuntimeState();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZExplosionResult();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIDroneAttributeSet_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippableConfig();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZEquippable_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICharacterAbilityData_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAIVisibilityNodeComputationFrequency();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterVoiceComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZShoutTargetComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRangedWeapon_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGenericTeamId();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHackableInteractableComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZFactionIdHelper();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHurtReactionData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineAsset_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPawnInterface_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPawnLifetime_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZProjectileInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTypeInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIVisibilityRelevant_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRoomVolumeInterface_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRuntimeInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZExplosive_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHurtReactionDataInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceComponentInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAutoAimInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkableInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZAIDrone::execGetOwnedGameplayTags)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetOwnedGameplayTags(Z_Param_Out_TagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIDrone::execHasAllMatchingGameplayTags)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAllMatchingGameplayTags(Z_Param_Out_TagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIDrone::execHasAnyMatchingGameplayTags)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAnyMatchingGameplayTags(Z_Param_Out_TagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIDrone::execHasMatchingGameplayTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_TagToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasMatchingGameplayTag(Z_Param_TagToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIDrone::execAddForce)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddForce(Z_Param_Out_LinearForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIDrone::execMulticast_OnKill)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnKill_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIDrone::execMulticast_PredictedRagdollDenied)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_HurtReactionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_PredictedRagdollDenied_Implementation(Z_Param_HurtReactionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIDrone::execMulticast_RemoveRuntime)
	{
		P_GET_ENUM(ESBZRuntimeState,Z_Param_InRuntimeToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_RemoveRuntime_Implementation(ESBZRuntimeState(Z_Param_InRuntimeToRemove));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIDrone::execMulticast_ReplicateExplosion)
	{
		P_GET_STRUCT(FSBZExplosionResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ReplicateExplosion_Implementation(Z_Param_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIDrone::execMulticast_SetCurrentTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_NewTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetCurrentTarget_Implementation(Z_Param_NewTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIDrone::execMulticast_SetRuntimed)
	{
		P_GET_ENUM(ESBZRuntimeState,Z_Param_InRuntimeState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetRuntimed_Implementation(ESBZRuntimeState(Z_Param_InRuntimeState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIDrone::execMulticast_StartHackingSentry)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_StartHackingSentry_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIDrone::execMulticast_StopHackingSentry)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_StopHackingSentry_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIDrone::execMulticast_TelegraphAttack)
	{
		P_GET_UBOOL(Z_Param_bInIsTelegraphingAttack);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_TelegraphAttack_Implementation(Z_Param_bInIsTelegraphingAttack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIDrone::execOnAckAbortInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bIsLocallyControlledInteractor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAckAbortInteraction(Z_Param_InInteractable,Z_Param_Interactor,Z_Param_bIsLocallyControlledInteractor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIDrone::execOnAckCompleteInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bIsLocallyControlledInteractor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAckCompleteInteraction(Z_Param_InInteractable,Z_Param_Interactor,Z_Param_bIsLocallyControlledInteractor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIDrone::execOnECMCountChanged)
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
	DEFINE_FUNCTION(ASBZAIDrone::execOnPredictedAbortInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bIsLocallyControlledInteractor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPredictedAbortInteraction(Z_Param_InInteractable,Z_Param_Interactor,Z_Param_bIsLocallyControlledInteractor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIDrone::execOnRep_IsHackingSentry)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsHackingSentry();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIDrone::execOnRep_RuntimeState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_RuntimeState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIDrone::execOnServerAbortInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bIsLocallyControlledInteractor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnServerAbortInteraction(Z_Param_InInteractable,Z_Param_Interactor,Z_Param_bIsLocallyControlledInteractor);
		P_NATIVE_END;
	}
	static FName NAME_ASBZAIDrone_BP_OnKill_Client = FName(TEXT("BP_OnKill_Client"));
	void ASBZAIDrone::BP_OnKill_Client()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZAIDrone_BP_OnKill_Client),NULL);
	}
	static FName NAME_ASBZAIDrone_Multicast_OnKill = FName(TEXT("Multicast_OnKill"));
	void ASBZAIDrone::Multicast_OnKill()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZAIDrone_Multicast_OnKill),NULL);
	}
	static FName NAME_ASBZAIDrone_Multicast_PredictedRagdollDenied = FName(TEXT("Multicast_PredictedRagdollDenied"));
	void ASBZAIDrone::Multicast_PredictedRagdollDenied(int32 HurtReactionIndex)
	{
		SBZAIDrone_eventMulticast_PredictedRagdollDenied_Parms Parms;
		Parms.HurtReactionIndex=HurtReactionIndex;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAIDrone_Multicast_PredictedRagdollDenied),&Parms);
	}
	static FName NAME_ASBZAIDrone_Multicast_RemoveRuntime = FName(TEXT("Multicast_RemoveRuntime"));
	void ASBZAIDrone::Multicast_RemoveRuntime(ESBZRuntimeState InRuntimeToRemove)
	{
		SBZAIDrone_eventMulticast_RemoveRuntime_Parms Parms;
		Parms.InRuntimeToRemove=InRuntimeToRemove;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAIDrone_Multicast_RemoveRuntime),&Parms);
	}
	static FName NAME_ASBZAIDrone_Multicast_ReplicateExplosion = FName(TEXT("Multicast_ReplicateExplosion"));
	void ASBZAIDrone::Multicast_ReplicateExplosion(FSBZExplosionResult const& Result)
	{
		SBZAIDrone_eventMulticast_ReplicateExplosion_Parms Parms;
		Parms.Result=Result;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAIDrone_Multicast_ReplicateExplosion),&Parms);
	}
	static FName NAME_ASBZAIDrone_Multicast_SetCurrentTarget = FName(TEXT("Multicast_SetCurrentTarget"));
	void ASBZAIDrone::Multicast_SetCurrentTarget(AActor* NewTarget)
	{
		SBZAIDrone_eventMulticast_SetCurrentTarget_Parms Parms;
		Parms.NewTarget=NewTarget;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAIDrone_Multicast_SetCurrentTarget),&Parms);
	}
	static FName NAME_ASBZAIDrone_Multicast_SetRuntimed = FName(TEXT("Multicast_SetRuntimed"));
	void ASBZAIDrone::Multicast_SetRuntimed(ESBZRuntimeState InRuntimeState)
	{
		SBZAIDrone_eventMulticast_SetRuntimed_Parms Parms;
		Parms.InRuntimeState=InRuntimeState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAIDrone_Multicast_SetRuntimed),&Parms);
	}
	static FName NAME_ASBZAIDrone_Multicast_StartHackingSentry = FName(TEXT("Multicast_StartHackingSentry"));
	void ASBZAIDrone::Multicast_StartHackingSentry()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZAIDrone_Multicast_StartHackingSentry),NULL);
	}
	static FName NAME_ASBZAIDrone_Multicast_StopHackingSentry = FName(TEXT("Multicast_StopHackingSentry"));
	void ASBZAIDrone::Multicast_StopHackingSentry()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZAIDrone_Multicast_StopHackingSentry),NULL);
	}
	static FName NAME_ASBZAIDrone_Multicast_TelegraphAttack = FName(TEXT("Multicast_TelegraphAttack"));
	void ASBZAIDrone::Multicast_TelegraphAttack(bool bInIsTelegraphingAttack)
	{
		SBZAIDrone_eventMulticast_TelegraphAttack_Parms Parms;
		Parms.bInIsTelegraphingAttack=bInIsTelegraphingAttack ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAIDrone_Multicast_TelegraphAttack),&Parms);
	}
	static FName NAME_ASBZAIDrone_OnRuntimeStateApplied = FName(TEXT("OnRuntimeStateApplied"));
	void ASBZAIDrone::OnRuntimeStateApplied(ESBZRuntimeState AppliedState)
	{
		SBZAIDrone_eventOnRuntimeStateApplied_Parms Parms;
		Parms.AppliedState=AppliedState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAIDrone_OnRuntimeStateApplied),&Parms);
	}
	static FName NAME_ASBZAIDrone_OnRuntimeStateRemoved = FName(TEXT("OnRuntimeStateRemoved"));
	void ASBZAIDrone::OnRuntimeStateRemoved(ESBZRuntimeState AppliedState)
	{
		SBZAIDrone_eventOnRuntimeStateRemoved_Parms Parms;
		Parms.AppliedState=AppliedState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAIDrone_OnRuntimeStateRemoved),&Parms);
	}
	void ASBZAIDrone::StaticRegisterNativesASBZAIDrone()
	{
		UClass* Class = ASBZAIDrone::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddForce", &ASBZAIDrone::execAddForce },
			{ "GetOwnedGameplayTags", &ASBZAIDrone::execGetOwnedGameplayTags },
			{ "HasAllMatchingGameplayTags", &ASBZAIDrone::execHasAllMatchingGameplayTags },
			{ "HasAnyMatchingGameplayTags", &ASBZAIDrone::execHasAnyMatchingGameplayTags },
			{ "HasMatchingGameplayTag", &ASBZAIDrone::execHasMatchingGameplayTag },
			{ "Multicast_OnKill", &ASBZAIDrone::execMulticast_OnKill },
			{ "Multicast_PredictedRagdollDenied", &ASBZAIDrone::execMulticast_PredictedRagdollDenied },
			{ "Multicast_RemoveRuntime", &ASBZAIDrone::execMulticast_RemoveRuntime },
			{ "Multicast_ReplicateExplosion", &ASBZAIDrone::execMulticast_ReplicateExplosion },
			{ "Multicast_SetCurrentTarget", &ASBZAIDrone::execMulticast_SetCurrentTarget },
			{ "Multicast_SetRuntimed", &ASBZAIDrone::execMulticast_SetRuntimed },
			{ "Multicast_StartHackingSentry", &ASBZAIDrone::execMulticast_StartHackingSentry },
			{ "Multicast_StopHackingSentry", &ASBZAIDrone::execMulticast_StopHackingSentry },
			{ "Multicast_TelegraphAttack", &ASBZAIDrone::execMulticast_TelegraphAttack },
			{ "OnAckAbortInteraction", &ASBZAIDrone::execOnAckAbortInteraction },
			{ "OnAckCompleteInteraction", &ASBZAIDrone::execOnAckCompleteInteraction },
			{ "OnECMCountChanged", &ASBZAIDrone::execOnECMCountChanged },
			{ "OnPredictedAbortInteraction", &ASBZAIDrone::execOnPredictedAbortInteraction },
			{ "OnRep_IsHackingSentry", &ASBZAIDrone::execOnRep_IsHackingSentry },
			{ "OnRep_RuntimeState", &ASBZAIDrone::execOnRep_RuntimeState },
			{ "OnServerAbortInteraction", &ASBZAIDrone::execOnServerAbortInteraction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZAIDrone_AddForce_Statics
	{
		struct SBZAIDrone_eventAddForce_Parms
		{
			FVector LinearForce;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearForce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_AddForce_Statics::NewProp_LinearForce_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIDrone_AddForce_Statics::NewProp_LinearForce = { "LinearForce", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIDrone_eventAddForce_Parms, LinearForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_AddForce_Statics::NewProp_LinearForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_AddForce_Statics::NewProp_LinearForce_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIDrone_AddForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_AddForce_Statics::NewProp_LinearForce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_AddForce_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIDrone_AddForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIDrone, nullptr, "AddForce", nullptr, nullptr, sizeof(SBZAIDrone_eventAddForce_Parms), Z_Construct_UFunction_ASBZAIDrone_AddForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_AddForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_AddForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_AddForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIDrone_AddForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIDrone_AddForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIDrone_BP_OnKill_Client_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_BP_OnKill_Client_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIDrone_BP_OnKill_Client_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIDrone, nullptr, "BP_OnKill_Client", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_BP_OnKill_Client_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_BP_OnKill_Client_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIDrone_BP_OnKill_Client()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIDrone_BP_OnKill_Client_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIDrone_GetOwnedGameplayTags_Statics
	{
		struct SBZAIDrone_eventGetOwnedGameplayTags_Parms
		{
			FGameplayTagContainer TagContainer;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIDrone_GetOwnedGameplayTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIDrone_eventGetOwnedGameplayTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIDrone_GetOwnedGameplayTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_GetOwnedGameplayTags_Statics::NewProp_TagContainer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_GetOwnedGameplayTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIDrone_GetOwnedGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIDrone, nullptr, "GetOwnedGameplayTags", nullptr, nullptr, sizeof(SBZAIDrone_eventGetOwnedGameplayTags_Parms), Z_Construct_UFunction_ASBZAIDrone_GetOwnedGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_GetOwnedGameplayTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_GetOwnedGameplayTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_GetOwnedGameplayTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIDrone_GetOwnedGameplayTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIDrone_GetOwnedGameplayTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIDrone_HasAllMatchingGameplayTags_Statics
	{
		struct SBZAIDrone_eventHasAllMatchingGameplayTags_Parms
		{
			FGameplayTagContainer TagContainer;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_HasAllMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIDrone_HasAllMatchingGameplayTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIDrone_eventHasAllMatchingGameplayTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_HasAllMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_HasAllMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData)) };
	void Z_Construct_UFunction_ASBZAIDrone_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZAIDrone_eventHasAllMatchingGameplayTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIDrone_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIDrone_eventHasAllMatchingGameplayTags_Parms), &Z_Construct_UFunction_ASBZAIDrone_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIDrone_HasAllMatchingGameplayTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_HasAllMatchingGameplayTags_Statics::NewProp_TagContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_HasAllMatchingGameplayTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIDrone_HasAllMatchingGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIDrone, nullptr, "HasAllMatchingGameplayTags", nullptr, nullptr, sizeof(SBZAIDrone_eventHasAllMatchingGameplayTags_Parms), Z_Construct_UFunction_ASBZAIDrone_HasAllMatchingGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_HasAllMatchingGameplayTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_HasAllMatchingGameplayTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_HasAllMatchingGameplayTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIDrone_HasAllMatchingGameplayTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIDrone_HasAllMatchingGameplayTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIDrone_HasAnyMatchingGameplayTags_Statics
	{
		struct SBZAIDrone_eventHasAnyMatchingGameplayTags_Parms
		{
			FGameplayTagContainer TagContainer;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIDrone_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIDrone_eventHasAnyMatchingGameplayTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData)) };
	void Z_Construct_UFunction_ASBZAIDrone_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZAIDrone_eventHasAnyMatchingGameplayTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIDrone_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIDrone_eventHasAnyMatchingGameplayTags_Parms), &Z_Construct_UFunction_ASBZAIDrone_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIDrone_HasAnyMatchingGameplayTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_HasAnyMatchingGameplayTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIDrone_HasAnyMatchingGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIDrone, nullptr, "HasAnyMatchingGameplayTags", nullptr, nullptr, sizeof(SBZAIDrone_eventHasAnyMatchingGameplayTags_Parms), Z_Construct_UFunction_ASBZAIDrone_HasAnyMatchingGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_HasAnyMatchingGameplayTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_HasAnyMatchingGameplayTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_HasAnyMatchingGameplayTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIDrone_HasAnyMatchingGameplayTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIDrone_HasAnyMatchingGameplayTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIDrone_HasMatchingGameplayTag_Statics
	{
		struct SBZAIDrone_eventHasMatchingGameplayTag_Parms
		{
			FGameplayTag TagToCheck;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIDrone_HasMatchingGameplayTag_Statics::NewProp_TagToCheck = { "TagToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIDrone_eventHasMatchingGameplayTag_Parms, TagToCheck), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZAIDrone_HasMatchingGameplayTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZAIDrone_eventHasMatchingGameplayTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIDrone_HasMatchingGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIDrone_eventHasMatchingGameplayTag_Parms), &Z_Construct_UFunction_ASBZAIDrone_HasMatchingGameplayTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIDrone_HasMatchingGameplayTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_HasMatchingGameplayTag_Statics::NewProp_TagToCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_HasMatchingGameplayTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_HasMatchingGameplayTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIDrone_HasMatchingGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIDrone, nullptr, "HasMatchingGameplayTag", nullptr, nullptr, sizeof(SBZAIDrone_eventHasMatchingGameplayTag_Parms), Z_Construct_UFunction_ASBZAIDrone_HasMatchingGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_HasMatchingGameplayTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_HasMatchingGameplayTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_HasMatchingGameplayTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIDrone_HasMatchingGameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIDrone_HasMatchingGameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIDrone_Multicast_OnKill_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_Multicast_OnKill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIDrone_Multicast_OnKill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIDrone, nullptr, "Multicast_OnKill", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_Multicast_OnKill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_Multicast_OnKill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIDrone_Multicast_OnKill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIDrone_Multicast_OnKill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIDrone_Multicast_PredictedRagdollDenied_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HurtReactionIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZAIDrone_Multicast_PredictedRagdollDenied_Statics::NewProp_HurtReactionIndex = { "HurtReactionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIDrone_eventMulticast_PredictedRagdollDenied_Parms, HurtReactionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIDrone_Multicast_PredictedRagdollDenied_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_Multicast_PredictedRagdollDenied_Statics::NewProp_HurtReactionIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_Multicast_PredictedRagdollDenied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIDrone_Multicast_PredictedRagdollDenied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIDrone, nullptr, "Multicast_PredictedRagdollDenied", nullptr, nullptr, sizeof(SBZAIDrone_eventMulticast_PredictedRagdollDenied_Parms), Z_Construct_UFunction_ASBZAIDrone_Multicast_PredictedRagdollDenied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_Multicast_PredictedRagdollDenied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_Multicast_PredictedRagdollDenied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_Multicast_PredictedRagdollDenied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIDrone_Multicast_PredictedRagdollDenied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIDrone_Multicast_PredictedRagdollDenied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIDrone_Multicast_RemoveRuntime_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InRuntimeToRemove_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InRuntimeToRemove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAIDrone_Multicast_RemoveRuntime_Statics::NewProp_InRuntimeToRemove_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZAIDrone_Multicast_RemoveRuntime_Statics::NewProp_InRuntimeToRemove = { "InRuntimeToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIDrone_eventMulticast_RemoveRuntime_Parms, InRuntimeToRemove), Z_Construct_UEnum_Starbreeze_ESBZRuntimeState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIDrone_Multicast_RemoveRuntime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_Multicast_RemoveRuntime_Statics::NewProp_InRuntimeToRemove_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_Multicast_RemoveRuntime_Statics::NewProp_InRuntimeToRemove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_Multicast_RemoveRuntime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIDrone_Multicast_RemoveRuntime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIDrone, nullptr, "Multicast_RemoveRuntime", nullptr, nullptr, sizeof(SBZAIDrone_eventMulticast_RemoveRuntime_Parms), Z_Construct_UFunction_ASBZAIDrone_Multicast_RemoveRuntime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_Multicast_RemoveRuntime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_Multicast_RemoveRuntime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_Multicast_RemoveRuntime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIDrone_Multicast_RemoveRuntime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIDrone_Multicast_RemoveRuntime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIDrone_Multicast_ReplicateExplosion_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIDrone_Multicast_ReplicateExplosion_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIDrone_eventMulticast_ReplicateExplosion_Parms, Result), Z_Construct_UScriptStruct_FSBZExplosionResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_Multicast_ReplicateExplosion_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIDrone_Multicast_ReplicateExplosion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_Multicast_ReplicateExplosion_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIDrone_Multicast_ReplicateExplosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIDrone, nullptr, "Multicast_ReplicateExplosion", nullptr, nullptr, sizeof(SBZAIDrone_eventMulticast_ReplicateExplosion_Parms), Z_Construct_UFunction_ASBZAIDrone_Multicast_ReplicateExplosion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_Multicast_ReplicateExplosion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_Multicast_ReplicateExplosion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIDrone_Multicast_ReplicateExplosion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIDrone_Multicast_ReplicateExplosion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIDrone_Multicast_SetCurrentTarget_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIDrone_Multicast_SetCurrentTarget_Statics::NewProp_NewTarget = { "NewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIDrone_eventMulticast_SetCurrentTarget_Parms, NewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIDrone_Multicast_SetCurrentTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_Multicast_SetCurrentTarget_Statics::NewProp_NewTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_Multicast_SetCurrentTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIDrone_Multicast_SetCurrentTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIDrone, nullptr, "Multicast_SetCurrentTarget", nullptr, nullptr, sizeof(SBZAIDrone_eventMulticast_SetCurrentTarget_Parms), Z_Construct_UFunction_ASBZAIDrone_Multicast_SetCurrentTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_Multicast_SetCurrentTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_Multicast_SetCurrentTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_Multicast_SetCurrentTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIDrone_Multicast_SetCurrentTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIDrone_Multicast_SetCurrentTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIDrone_Multicast_SetRuntimed_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InRuntimeState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InRuntimeState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAIDrone_Multicast_SetRuntimed_Statics::NewProp_InRuntimeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZAIDrone_Multicast_SetRuntimed_Statics::NewProp_InRuntimeState = { "InRuntimeState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIDrone_eventMulticast_SetRuntimed_Parms, InRuntimeState), Z_Construct_UEnum_Starbreeze_ESBZRuntimeState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIDrone_Multicast_SetRuntimed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_Multicast_SetRuntimed_Statics::NewProp_InRuntimeState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_Multicast_SetRuntimed_Statics::NewProp_InRuntimeState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_Multicast_SetRuntimed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIDrone_Multicast_SetRuntimed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIDrone, nullptr, "Multicast_SetRuntimed", nullptr, nullptr, sizeof(SBZAIDrone_eventMulticast_SetRuntimed_Parms), Z_Construct_UFunction_ASBZAIDrone_Multicast_SetRuntimed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_Multicast_SetRuntimed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_Multicast_SetRuntimed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_Multicast_SetRuntimed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIDrone_Multicast_SetRuntimed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIDrone_Multicast_SetRuntimed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIDrone_Multicast_StartHackingSentry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_Multicast_StartHackingSentry_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIDrone_Multicast_StartHackingSentry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIDrone, nullptr, "Multicast_StartHackingSentry", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_Multicast_StartHackingSentry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_Multicast_StartHackingSentry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIDrone_Multicast_StartHackingSentry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIDrone_Multicast_StartHackingSentry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIDrone_Multicast_StopHackingSentry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_Multicast_StopHackingSentry_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIDrone_Multicast_StopHackingSentry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIDrone, nullptr, "Multicast_StopHackingSentry", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_Multicast_StopHackingSentry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_Multicast_StopHackingSentry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIDrone_Multicast_StopHackingSentry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIDrone_Multicast_StopHackingSentry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIDrone_Multicast_TelegraphAttack_Statics
	{
		static void NewProp_bInIsTelegraphingAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsTelegraphingAttack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZAIDrone_Multicast_TelegraphAttack_Statics::NewProp_bInIsTelegraphingAttack_SetBit(void* Obj)
	{
		((SBZAIDrone_eventMulticast_TelegraphAttack_Parms*)Obj)->bInIsTelegraphingAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIDrone_Multicast_TelegraphAttack_Statics::NewProp_bInIsTelegraphingAttack = { "bInIsTelegraphingAttack", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIDrone_eventMulticast_TelegraphAttack_Parms), &Z_Construct_UFunction_ASBZAIDrone_Multicast_TelegraphAttack_Statics::NewProp_bInIsTelegraphingAttack_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIDrone_Multicast_TelegraphAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_Multicast_TelegraphAttack_Statics::NewProp_bInIsTelegraphingAttack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_Multicast_TelegraphAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIDrone_Multicast_TelegraphAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIDrone, nullptr, "Multicast_TelegraphAttack", nullptr, nullptr, sizeof(SBZAIDrone_eventMulticast_TelegraphAttack_Parms), Z_Construct_UFunction_ASBZAIDrone_Multicast_TelegraphAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_Multicast_TelegraphAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_Multicast_TelegraphAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_Multicast_TelegraphAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIDrone_Multicast_TelegraphAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIDrone_Multicast_TelegraphAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIDrone_OnAckAbortInteraction_Statics
	{
		struct SBZAIDrone_eventOnAckAbortInteraction_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_OnAckAbortInteraction_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIDrone_OnAckAbortInteraction_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIDrone_eventOnAckAbortInteraction_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_OnAckAbortInteraction_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_OnAckAbortInteraction_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_OnAckAbortInteraction_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIDrone_OnAckAbortInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIDrone_eventOnAckAbortInteraction_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_OnAckAbortInteraction_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_OnAckAbortInteraction_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZAIDrone_OnAckAbortInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj)
	{
		((SBZAIDrone_eventOnAckAbortInteraction_Parms*)Obj)->bIsLocallyControlledInteractor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIDrone_OnAckAbortInteraction_Statics::NewProp_bIsLocallyControlledInteractor = { "bIsLocallyControlledInteractor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIDrone_eventOnAckAbortInteraction_Parms), &Z_Construct_UFunction_ASBZAIDrone_OnAckAbortInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIDrone_OnAckAbortInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_OnAckAbortInteraction_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_OnAckAbortInteraction_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_OnAckAbortInteraction_Statics::NewProp_bIsLocallyControlledInteractor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_OnAckAbortInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIDrone_OnAckAbortInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIDrone, nullptr, "OnAckAbortInteraction", nullptr, nullptr, sizeof(SBZAIDrone_eventOnAckAbortInteraction_Parms), Z_Construct_UFunction_ASBZAIDrone_OnAckAbortInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_OnAckAbortInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_OnAckAbortInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_OnAckAbortInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIDrone_OnAckAbortInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIDrone_OnAckAbortInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIDrone_OnAckCompleteInteraction_Statics
	{
		struct SBZAIDrone_eventOnAckCompleteInteraction_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_OnAckCompleteInteraction_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIDrone_OnAckCompleteInteraction_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIDrone_eventOnAckCompleteInteraction_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_OnAckCompleteInteraction_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_OnAckCompleteInteraction_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_OnAckCompleteInteraction_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIDrone_OnAckCompleteInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIDrone_eventOnAckCompleteInteraction_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_OnAckCompleteInteraction_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_OnAckCompleteInteraction_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZAIDrone_OnAckCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj)
	{
		((SBZAIDrone_eventOnAckCompleteInteraction_Parms*)Obj)->bIsLocallyControlledInteractor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIDrone_OnAckCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor = { "bIsLocallyControlledInteractor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIDrone_eventOnAckCompleteInteraction_Parms), &Z_Construct_UFunction_ASBZAIDrone_OnAckCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIDrone_OnAckCompleteInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_OnAckCompleteInteraction_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_OnAckCompleteInteraction_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_OnAckCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_OnAckCompleteInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIDrone_OnAckCompleteInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIDrone, nullptr, "OnAckCompleteInteraction", nullptr, nullptr, sizeof(SBZAIDrone_eventOnAckCompleteInteraction_Parms), Z_Construct_UFunction_ASBZAIDrone_OnAckCompleteInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_OnAckCompleteInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_OnAckCompleteInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_OnAckCompleteInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIDrone_OnAckCompleteInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIDrone_OnAckCompleteInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIDrone_OnECMCountChanged_Statics
	{
		struct SBZAIDrone_eventOnECMCountChanged_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZAIDrone_OnECMCountChanged_Statics::NewProp_NewCount = { "NewCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIDrone_eventOnECMCountChanged_Parms, NewCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZAIDrone_OnECMCountChanged_Statics::NewProp_OldCount = { "OldCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIDrone_eventOnECMCountChanged_Parms, OldCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZAIDrone_OnECMCountChanged_Statics::NewProp_AddedTime = { "AddedTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIDrone_eventOnECMCountChanged_Parms, AddedTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZAIDrone_OnECMCountChanged_Statics::NewProp_bInIsSignalScanActive_SetBit(void* Obj)
	{
		((SBZAIDrone_eventOnECMCountChanged_Parms*)Obj)->bInIsSignalScanActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIDrone_OnECMCountChanged_Statics::NewProp_bInIsSignalScanActive = { "bInIsSignalScanActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIDrone_eventOnECMCountChanged_Parms), &Z_Construct_UFunction_ASBZAIDrone_OnECMCountChanged_Statics::NewProp_bInIsSignalScanActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIDrone_OnECMCountChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_OnECMCountChanged_Statics::NewProp_NewCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_OnECMCountChanged_Statics::NewProp_OldCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_OnECMCountChanged_Statics::NewProp_AddedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_OnECMCountChanged_Statics::NewProp_bInIsSignalScanActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_OnECMCountChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIDrone_OnECMCountChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIDrone, nullptr, "OnECMCountChanged", nullptr, nullptr, sizeof(SBZAIDrone_eventOnECMCountChanged_Parms), Z_Construct_UFunction_ASBZAIDrone_OnECMCountChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_OnECMCountChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_OnECMCountChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_OnECMCountChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIDrone_OnECMCountChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIDrone_OnECMCountChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIDrone_OnPredictedAbortInteraction_Statics
	{
		struct SBZAIDrone_eventOnPredictedAbortInteraction_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_OnPredictedAbortInteraction_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIDrone_OnPredictedAbortInteraction_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIDrone_eventOnPredictedAbortInteraction_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_OnPredictedAbortInteraction_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_OnPredictedAbortInteraction_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_OnPredictedAbortInteraction_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIDrone_OnPredictedAbortInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIDrone_eventOnPredictedAbortInteraction_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_OnPredictedAbortInteraction_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_OnPredictedAbortInteraction_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZAIDrone_OnPredictedAbortInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj)
	{
		((SBZAIDrone_eventOnPredictedAbortInteraction_Parms*)Obj)->bIsLocallyControlledInteractor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIDrone_OnPredictedAbortInteraction_Statics::NewProp_bIsLocallyControlledInteractor = { "bIsLocallyControlledInteractor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIDrone_eventOnPredictedAbortInteraction_Parms), &Z_Construct_UFunction_ASBZAIDrone_OnPredictedAbortInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIDrone_OnPredictedAbortInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_OnPredictedAbortInteraction_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_OnPredictedAbortInteraction_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_OnPredictedAbortInteraction_Statics::NewProp_bIsLocallyControlledInteractor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_OnPredictedAbortInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIDrone_OnPredictedAbortInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIDrone, nullptr, "OnPredictedAbortInteraction", nullptr, nullptr, sizeof(SBZAIDrone_eventOnPredictedAbortInteraction_Parms), Z_Construct_UFunction_ASBZAIDrone_OnPredictedAbortInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_OnPredictedAbortInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_OnPredictedAbortInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_OnPredictedAbortInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIDrone_OnPredictedAbortInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIDrone_OnPredictedAbortInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIDrone_OnRep_IsHackingSentry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_OnRep_IsHackingSentry_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIDrone_OnRep_IsHackingSentry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIDrone, nullptr, "OnRep_IsHackingSentry", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_OnRep_IsHackingSentry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_OnRep_IsHackingSentry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIDrone_OnRep_IsHackingSentry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIDrone_OnRep_IsHackingSentry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIDrone_OnRep_RuntimeState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_OnRep_RuntimeState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIDrone_OnRep_RuntimeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIDrone, nullptr, "OnRep_RuntimeState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_OnRep_RuntimeState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_OnRep_RuntimeState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIDrone_OnRep_RuntimeState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIDrone_OnRep_RuntimeState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIDrone_OnRuntimeStateApplied_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AppliedState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AppliedState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAIDrone_OnRuntimeStateApplied_Statics::NewProp_AppliedState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZAIDrone_OnRuntimeStateApplied_Statics::NewProp_AppliedState = { "AppliedState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIDrone_eventOnRuntimeStateApplied_Parms, AppliedState), Z_Construct_UEnum_Starbreeze_ESBZRuntimeState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIDrone_OnRuntimeStateApplied_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_OnRuntimeStateApplied_Statics::NewProp_AppliedState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_OnRuntimeStateApplied_Statics::NewProp_AppliedState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_OnRuntimeStateApplied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIDrone_OnRuntimeStateApplied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIDrone, nullptr, "OnRuntimeStateApplied", nullptr, nullptr, sizeof(SBZAIDrone_eventOnRuntimeStateApplied_Parms), Z_Construct_UFunction_ASBZAIDrone_OnRuntimeStateApplied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_OnRuntimeStateApplied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_OnRuntimeStateApplied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_OnRuntimeStateApplied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIDrone_OnRuntimeStateApplied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIDrone_OnRuntimeStateApplied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIDrone_OnRuntimeStateRemoved_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AppliedState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AppliedState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAIDrone_OnRuntimeStateRemoved_Statics::NewProp_AppliedState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZAIDrone_OnRuntimeStateRemoved_Statics::NewProp_AppliedState = { "AppliedState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIDrone_eventOnRuntimeStateRemoved_Parms, AppliedState), Z_Construct_UEnum_Starbreeze_ESBZRuntimeState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIDrone_OnRuntimeStateRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_OnRuntimeStateRemoved_Statics::NewProp_AppliedState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_OnRuntimeStateRemoved_Statics::NewProp_AppliedState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_OnRuntimeStateRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIDrone_OnRuntimeStateRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIDrone, nullptr, "OnRuntimeStateRemoved", nullptr, nullptr, sizeof(SBZAIDrone_eventOnRuntimeStateRemoved_Parms), Z_Construct_UFunction_ASBZAIDrone_OnRuntimeStateRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_OnRuntimeStateRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_OnRuntimeStateRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_OnRuntimeStateRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIDrone_OnRuntimeStateRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIDrone_OnRuntimeStateRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIDrone_OnServerAbortInteraction_Statics
	{
		struct SBZAIDrone_eventOnServerAbortInteraction_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_OnServerAbortInteraction_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIDrone_OnServerAbortInteraction_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIDrone_eventOnServerAbortInteraction_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_OnServerAbortInteraction_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_OnServerAbortInteraction_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_OnServerAbortInteraction_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIDrone_OnServerAbortInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIDrone_eventOnServerAbortInteraction_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_OnServerAbortInteraction_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_OnServerAbortInteraction_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZAIDrone_OnServerAbortInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj)
	{
		((SBZAIDrone_eventOnServerAbortInteraction_Parms*)Obj)->bIsLocallyControlledInteractor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIDrone_OnServerAbortInteraction_Statics::NewProp_bIsLocallyControlledInteractor = { "bIsLocallyControlledInteractor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIDrone_eventOnServerAbortInteraction_Parms), &Z_Construct_UFunction_ASBZAIDrone_OnServerAbortInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIDrone_OnServerAbortInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_OnServerAbortInteraction_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_OnServerAbortInteraction_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIDrone_OnServerAbortInteraction_Statics::NewProp_bIsLocallyControlledInteractor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIDrone_OnServerAbortInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIDrone_OnServerAbortInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIDrone, nullptr, "OnServerAbortInteraction", nullptr, nullptr, sizeof(SBZAIDrone_eventOnServerAbortInteraction_Parms), Z_Construct_UFunction_ASBZAIDrone_OnServerAbortInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_OnServerAbortInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIDrone_OnServerAbortInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIDrone_OnServerAbortInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIDrone_OnServerAbortInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIDrone_OnServerAbortInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZAIDrone_NoRegister()
	{
		return ASBZAIDrone::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAIDrone_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyedEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedEvent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EquippableConfigArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableConfigArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EquippableConfigArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippableArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EquippableArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreferredRangeBuffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreferredRangeBuffer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AIVisibilityNodeComputationFrequency_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIVisibilityNodeComputationFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AIVisibilityNodeComputationFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoiceComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StimuliSourceComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StimuliSourceComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutlineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoutTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShoutTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangedWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RangedWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeamId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangedWeaponAttachmentSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RangedWeaponAttachmentSocket;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoomVolumes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomVolumes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RoomVolumes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackableInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HackableInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimeState_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RuntimeState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackedFactionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HackedFactionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerExplosionRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerExplosionRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIExplosionRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AIExplosionRange;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TacticalFlashEffectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TacticalFlashEffectClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TacticalFlashPlayerFeedback_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TacticalFlashPlayerFeedback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuaranteedFlashDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GuaranteedFlashDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumAngleDifference_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumAngleDifference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlashPlayerFalloffExponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlashPlayerFalloffExponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TacticalFlashFeedbackCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TacticalFlashFeedbackCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TacticalFlashTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TacticalFlashTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlashTagEffectDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlashTagEffectDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TacticalFlashRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TacticalFlashRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuffBlockMinThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BuffBlockMinThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuffBlockCooldownAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BuffBlockCooldownAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HurtReactionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HurtReactionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimedComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RuntimedComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireWeaponComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireWeaponComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionInstigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionInstigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatisticsMarkDrone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatisticsMarkDrone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatisticsMarkEnemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatisticsMarkEnemy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatisticsMarkEnemyCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatisticsMarkEnemyCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatisticsMarkEnemyMicroCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatisticsMarkEnemyMicroCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIDamageModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AIDamageModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkedGameplayEffectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MarkedGameplayEffectClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkedOutline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MarkedOutline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AKComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AKComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SentryHackDamageAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SentryHackDamageAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SentryHackDamageInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SentryHackDamageInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldTelegraphAttack_MetaData[];
#endif
		static void NewProp_bShouldTelegraphAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldTelegraphAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHackingSentry_MetaData[];
#endif
		static void NewProp_bIsHackingSentry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHackingSentry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackingSentryEffectComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HackingSentryEffectComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackingSentryEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HackingSentryEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceEffectDistanceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TraceEffectDistanceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceEffectStunDurationName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TraceEffectStunDurationName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceEndBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TraceEndBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackingSentryEventStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HackingSentryEventStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackingSentryEventStop_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HackingSentryEventStop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAIDrone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZAIDrone_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZAIDrone_AddForce, "AddForce" }, // 581652454
		{ &Z_Construct_UFunction_ASBZAIDrone_BP_OnKill_Client, "BP_OnKill_Client" }, // 350056637
		{ &Z_Construct_UFunction_ASBZAIDrone_GetOwnedGameplayTags, "GetOwnedGameplayTags" }, // 3474281591
		{ &Z_Construct_UFunction_ASBZAIDrone_HasAllMatchingGameplayTags, "HasAllMatchingGameplayTags" }, // 3426574957
		{ &Z_Construct_UFunction_ASBZAIDrone_HasAnyMatchingGameplayTags, "HasAnyMatchingGameplayTags" }, // 3350031339
		{ &Z_Construct_UFunction_ASBZAIDrone_HasMatchingGameplayTag, "HasMatchingGameplayTag" }, // 153492648
		{ &Z_Construct_UFunction_ASBZAIDrone_Multicast_OnKill, "Multicast_OnKill" }, // 3502744855
		{ &Z_Construct_UFunction_ASBZAIDrone_Multicast_PredictedRagdollDenied, "Multicast_PredictedRagdollDenied" }, // 1280563571
		{ &Z_Construct_UFunction_ASBZAIDrone_Multicast_RemoveRuntime, "Multicast_RemoveRuntime" }, // 719703461
		{ &Z_Construct_UFunction_ASBZAIDrone_Multicast_ReplicateExplosion, "Multicast_ReplicateExplosion" }, // 4229555042
		{ &Z_Construct_UFunction_ASBZAIDrone_Multicast_SetCurrentTarget, "Multicast_SetCurrentTarget" }, // 1788075261
		{ &Z_Construct_UFunction_ASBZAIDrone_Multicast_SetRuntimed, "Multicast_SetRuntimed" }, // 3745238247
		{ &Z_Construct_UFunction_ASBZAIDrone_Multicast_StartHackingSentry, "Multicast_StartHackingSentry" }, // 4170519975
		{ &Z_Construct_UFunction_ASBZAIDrone_Multicast_StopHackingSentry, "Multicast_StopHackingSentry" }, // 2805538627
		{ &Z_Construct_UFunction_ASBZAIDrone_Multicast_TelegraphAttack, "Multicast_TelegraphAttack" }, // 433848265
		{ &Z_Construct_UFunction_ASBZAIDrone_OnAckAbortInteraction, "OnAckAbortInteraction" }, // 2117343690
		{ &Z_Construct_UFunction_ASBZAIDrone_OnAckCompleteInteraction, "OnAckCompleteInteraction" }, // 2670991162
		{ &Z_Construct_UFunction_ASBZAIDrone_OnECMCountChanged, "OnECMCountChanged" }, // 1772094897
		{ &Z_Construct_UFunction_ASBZAIDrone_OnPredictedAbortInteraction, "OnPredictedAbortInteraction" }, // 86493271
		{ &Z_Construct_UFunction_ASBZAIDrone_OnRep_IsHackingSentry, "OnRep_IsHackingSentry" }, // 3433306500
		{ &Z_Construct_UFunction_ASBZAIDrone_OnRep_RuntimeState, "OnRep_RuntimeState" }, // 3450258934
		{ &Z_Construct_UFunction_ASBZAIDrone_OnRuntimeStateApplied, "OnRuntimeStateApplied" }, // 2308839024
		{ &Z_Construct_UFunction_ASBZAIDrone_OnRuntimeStateRemoved, "OnRuntimeStateRemoved" }, // 1439356372
		{ &Z_Construct_UFunction_ASBZAIDrone_OnServerAbortInteraction, "OnServerAbortInteraction" }, // 4250981389
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SBZAIDrone.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, AttributeSet), Z_Construct_UClass_USBZAIDroneAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AttributeSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_DestroyedEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_DestroyedEffect = { "DestroyedEffect", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, DestroyedEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_DestroyedEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_DestroyedEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_DestroyedEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_DestroyedEvent = { "DestroyedEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, DestroyedEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_DestroyedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_DestroyedEvent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_EquippableConfigArray_Inner = { "EquippableConfigArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZEquippableConfig, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_EquippableConfigArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_EquippableConfigArray = { "EquippableConfigArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, EquippableConfigArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_EquippableConfigArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_EquippableConfigArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_EquippableArray_Inner = { "EquippableArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZEquippable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_EquippableArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_EquippableArray = { "EquippableArray", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, EquippableArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_EquippableArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_EquippableArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_PreferredRangeBuffer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_PreferredRangeBuffer = { "PreferredRangeBuffer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, PreferredRangeBuffer), METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_PreferredRangeBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_PreferredRangeBuffer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AbilitySystemComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AbilityData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AbilityData = { "AbilityData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, AbilityData), Z_Construct_UClass_USBZAICharacterAbilityData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AbilityData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AbilityData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, Type), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AIVisibilityNodeComputationFrequency_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AIVisibilityNodeComputationFrequency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AIVisibilityNodeComputationFrequency = { "AIVisibilityNodeComputationFrequency", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, AIVisibilityNodeComputationFrequency), Z_Construct_UEnum_Starbreeze_ESBZAIVisibilityNodeComputationFrequency, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AIVisibilityNodeComputationFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AIVisibilityNodeComputationFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_VoiceComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_VoiceComponent = { "VoiceComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, VoiceComponent), Z_Construct_UClass_USBZCharacterVoiceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_VoiceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_VoiceComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_StimuliSourceComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_StimuliSourceComponent = { "StimuliSourceComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, StimuliSourceComponent), Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_StimuliSourceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_StimuliSourceComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_OutlineComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_OutlineComponent = { "OutlineComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, OutlineComponent), Z_Construct_UClass_USBZOutlineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_OutlineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_OutlineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_ShoutTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_ShoutTarget = { "ShoutTarget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, ShoutTarget), Z_Construct_UClass_USBZShoutTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_ShoutTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_ShoutTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_RangedWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_RangedWeapon = { "RangedWeapon", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, RangedWeapon), Z_Construct_UClass_ASBZRangedWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_RangedWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_RangedWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TeamId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, TeamId), Z_Construct_UScriptStruct_FGenericTeamId, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TeamId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TeamId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_RangedWeaponAttachmentSocket_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_RangedWeaponAttachmentSocket = { "RangedWeaponAttachmentSocket", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, RangedWeaponAttachmentSocket), METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_RangedWeaponAttachmentSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_RangedWeaponAttachmentSocket_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_RoomVolumes_Inner = { "RoomVolumes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_RoomVolumes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_RoomVolumes = { "RoomVolumes", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, RoomVolumes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_RoomVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_RoomVolumes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HackableInteractable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HackableInteractable = { "HackableInteractable", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, HackableInteractable), Z_Construct_UClass_USBZHackableInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HackableInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HackableInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_RuntimeState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_RuntimeState = { "RuntimeState", "OnRep_RuntimeState", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, RuntimeState), nullptr, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_RuntimeState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_RuntimeState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HackedFactionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HackedFactionId = { "HackedFactionId", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, HackedFactionId), Z_Construct_UScriptStruct_FSBZFactionIdHelper, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HackedFactionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HackedFactionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_PlayerExplosionRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_PlayerExplosionRange = { "PlayerExplosionRange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, PlayerExplosionRange), METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_PlayerExplosionRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_PlayerExplosionRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AIExplosionRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AIExplosionRange = { "AIExplosionRange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, AIExplosionRange), METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AIExplosionRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AIExplosionRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_EMPEffectClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_EMPEffectClass = { "EMPEffectClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, EMPEffectClass), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_EMPEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_EMPEffectClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_EMPExplodedEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_EMPExplodedEvent = { "EMPExplodedEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, EMPExplodedEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_EMPExplodedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_EMPExplodedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_EMPDetonationEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_EMPDetonationEffect = { "EMPDetonationEffect", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, EMPDetonationEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_EMPDetonationEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_EMPDetonationEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_EMPStunDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_EMPStunDuration = { "EMPStunDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, EMPStunDuration), METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_EMPStunDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_EMPStunDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TacticalFlashEffectClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TacticalFlashEffectClass = { "TacticalFlashEffectClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, TacticalFlashEffectClass), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TacticalFlashEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TacticalFlashEffectClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TacticalFlashPlayerFeedback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TacticalFlashPlayerFeedback = { "TacticalFlashPlayerFeedback", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, TacticalFlashPlayerFeedback), Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TacticalFlashPlayerFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TacticalFlashPlayerFeedback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_GuaranteedFlashDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_GuaranteedFlashDistance = { "GuaranteedFlashDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, GuaranteedFlashDistance), METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_GuaranteedFlashDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_GuaranteedFlashDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_MaximumAngleDifference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_MaximumAngleDifference = { "MaximumAngleDifference", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, MaximumAngleDifference), METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_MaximumAngleDifference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_MaximumAngleDifference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_FlashPlayerFalloffExponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_FlashPlayerFalloffExponent = { "FlashPlayerFalloffExponent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, FlashPlayerFalloffExponent), METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_FlashPlayerFalloffExponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_FlashPlayerFalloffExponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TacticalFlashFeedbackCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TacticalFlashFeedbackCurve = { "TacticalFlashFeedbackCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, TacticalFlashFeedbackCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TacticalFlashFeedbackCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TacticalFlashFeedbackCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TacticalFlashTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TacticalFlashTag = { "TacticalFlashTag", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, TacticalFlashTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TacticalFlashTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TacticalFlashTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_FlashTagEffectDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_FlashTagEffectDuration = { "FlashTagEffectDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, FlashTagEffectDuration), METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_FlashTagEffectDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_FlashTagEffectDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TacticalFlashRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TacticalFlashRange = { "TacticalFlashRange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, TacticalFlashRange), METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TacticalFlashRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TacticalFlashRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_BuffBlockMinThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_BuffBlockMinThreshold = { "BuffBlockMinThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, BuffBlockMinThreshold), METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_BuffBlockMinThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_BuffBlockMinThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_BuffBlockCooldownAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_BuffBlockCooldownAmount = { "BuffBlockCooldownAmount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, BuffBlockCooldownAmount), METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_BuffBlockCooldownAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_BuffBlockCooldownAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HurtReactionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HurtReactionData = { "HurtReactionData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, HurtReactionData), Z_Construct_UScriptStruct_FSBZHurtReactionData, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HurtReactionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HurtReactionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_RuntimedComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_RuntimedComment = { "RuntimedComment", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, RuntimedComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_RuntimedComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_RuntimedComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_FireWeaponComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_FireWeaponComment = { "FireWeaponComment", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, FireWeaponComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_FireWeaponComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_FireWeaponComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_ExplosionInstigator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_ExplosionInstigator = { "ExplosionInstigator", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, ExplosionInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_ExplosionInstigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_ExplosionInstigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_CurrentTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0020080000002025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, CurrentTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_CurrentTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_CurrentTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_StatisticsMarkDrone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_StatisticsMarkDrone = { "StatisticsMarkDrone", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, StatisticsMarkDrone), METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_StatisticsMarkDrone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_StatisticsMarkDrone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_StatisticsMarkEnemy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_StatisticsMarkEnemy = { "StatisticsMarkEnemy", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, StatisticsMarkEnemy), METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_StatisticsMarkEnemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_StatisticsMarkEnemy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_StatisticsMarkEnemyCamera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_StatisticsMarkEnemyCamera = { "StatisticsMarkEnemyCamera", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, StatisticsMarkEnemyCamera), METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_StatisticsMarkEnemyCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_StatisticsMarkEnemyCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_StatisticsMarkEnemyMicroCamera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_StatisticsMarkEnemyMicroCamera = { "StatisticsMarkEnemyMicroCamera", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, StatisticsMarkEnemyMicroCamera), METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_StatisticsMarkEnemyMicroCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_StatisticsMarkEnemyMicroCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AIDamageModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AIDamageModifier = { "AIDamageModifier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, AIDamageModifier), METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AIDamageModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AIDamageModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_MarkedGameplayEffectClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_MarkedGameplayEffectClass = { "MarkedGameplayEffectClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, MarkedGameplayEffectClass), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_MarkedGameplayEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_MarkedGameplayEffectClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_MarkedOutline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_MarkedOutline = { "MarkedOutline", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, MarkedOutline), Z_Construct_UClass_USBZOutlineAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_MarkedOutline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_MarkedOutline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AKComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AKComponent = { "AKComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, AKComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AKComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AKComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_SentryHackDamageAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_SentryHackDamageAmount = { "SentryHackDamageAmount", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(SentryHackDamageAmount, ASBZAIDrone), STRUCT_OFFSET(ASBZAIDrone, SentryHackDamageAmount), METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_SentryHackDamageAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_SentryHackDamageAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_SentryHackDamageInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_SentryHackDamageInterval = { "SentryHackDamageInterval", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(SentryHackDamageInterval, ASBZAIDrone), STRUCT_OFFSET(ASBZAIDrone, SentryHackDamageInterval), METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_SentryHackDamageInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_SentryHackDamageInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_bShouldTelegraphAttack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_bShouldTelegraphAttack_SetBit(void* Obj)
	{
		((ASBZAIDrone*)Obj)->bShouldTelegraphAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_bShouldTelegraphAttack = { "bShouldTelegraphAttack", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZAIDrone), &Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_bShouldTelegraphAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_bShouldTelegraphAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_bShouldTelegraphAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_bIsHackingSentry_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_bIsHackingSentry_SetBit(void* Obj)
	{
		((ASBZAIDrone*)Obj)->bIsHackingSentry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_bIsHackingSentry = { "bIsHackingSentry", "OnRep_IsHackingSentry", (EPropertyFlags)0x0040000100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZAIDrone), &Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_bIsHackingSentry_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_bIsHackingSentry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_bIsHackingSentry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HackingSentryEffectComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HackingSentryEffectComponent = { "HackingSentryEffectComponent", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, HackingSentryEffectComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HackingSentryEffectComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HackingSentryEffectComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HackingSentryEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HackingSentryEffect = { "HackingSentryEffect", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, HackingSentryEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HackingSentryEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HackingSentryEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TraceEffectDistanceName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TraceEffectDistanceName = { "TraceEffectDistanceName", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, TraceEffectDistanceName), METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TraceEffectDistanceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TraceEffectDistanceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TraceEffectStunDurationName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TraceEffectStunDurationName = { "TraceEffectStunDurationName", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, TraceEffectStunDurationName), METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TraceEffectStunDurationName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TraceEffectStunDurationName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TraceEndBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TraceEndBone = { "TraceEndBone", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, TraceEndBone), METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TraceEndBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TraceEndBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HackingSentryEventStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HackingSentryEventStart = { "HackingSentryEventStart", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, HackingSentryEventStart), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HackingSentryEventStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HackingSentryEventStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HackingSentryEventStop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDrone" },
		{ "ModuleRelativePath", "Public/SBZAIDrone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HackingSentryEventStop = { "HackingSentryEventStop", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDrone, HackingSentryEventStop), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HackingSentryEventStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HackingSentryEventStop_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZAIDrone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AttributeSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_DestroyedEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_DestroyedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_EquippableConfigArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_EquippableConfigArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_EquippableArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_EquippableArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_PreferredRangeBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AbilitySystemComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AbilityData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AIVisibilityNodeComputationFrequency_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AIVisibilityNodeComputationFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_VoiceComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_StimuliSourceComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_OutlineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_ShoutTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_RangedWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TeamId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_RangedWeaponAttachmentSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_RoomVolumes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_RoomVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HackableInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_RuntimeState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HackedFactionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_PlayerExplosionRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AIExplosionRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_EMPEffectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_EMPExplodedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_EMPDetonationEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_EMPStunDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TacticalFlashEffectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TacticalFlashPlayerFeedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_GuaranteedFlashDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_MaximumAngleDifference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_FlashPlayerFalloffExponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TacticalFlashFeedbackCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TacticalFlashTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_FlashTagEffectDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TacticalFlashRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_BuffBlockMinThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_BuffBlockCooldownAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HurtReactionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_RuntimedComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_FireWeaponComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_ExplosionInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_CurrentTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_StatisticsMarkDrone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_StatisticsMarkEnemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_StatisticsMarkEnemyCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_StatisticsMarkEnemyMicroCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AIDamageModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_MarkedGameplayEffectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_MarkedOutline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_AKComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_SentryHackDamageAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_SentryHackDamageInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_bShouldTelegraphAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_bIsHackingSentry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HackingSentryEffectComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HackingSentryEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TraceEffectDistanceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TraceEffectStunDurationName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_TraceEndBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HackingSentryEventStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDrone_Statics::NewProp_HackingSentryEventStop,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZAIDrone_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZPawnInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAIDrone, ISBZPawnInterface), false },
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAIDrone, IAbilitySystemInterface), false },
			{ Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAIDrone, IGenericTeamAgentInterface), false },
			{ Z_Construct_UClass_USBZPawnLifetime_NoRegister, (int32)VTABLE_OFFSET(ASBZAIDrone, ISBZPawnLifetime), false },
			{ Z_Construct_UClass_USBZProjectileInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAIDrone, ISBZProjectileInterface), false },
			{ Z_Construct_UClass_USBZTypeInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAIDrone, ISBZTypeInterface), false },
			{ Z_Construct_UClass_USBZAIVisibilityRelevant_NoRegister, (int32)VTABLE_OFFSET(ASBZAIDrone, ISBZAIVisibilityRelevant), false },
			{ Z_Construct_UClass_USBZRoomVolumeInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAIDrone, ISBZRoomVolumeInterface), false },
			{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAIDrone, IGameplayTagAssetInterface), false },
			{ Z_Construct_UClass_USBZRuntimeInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAIDrone, ISBZRuntimeInterface), false },
			{ Z_Construct_UClass_USBZExplosive_NoRegister, (int32)VTABLE_OFFSET(ASBZAIDrone, ISBZExplosive), false },
			{ Z_Construct_UClass_USBZHurtReactionDataInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAIDrone, ISBZHurtReactionDataInterface), false },
			{ Z_Construct_UClass_USBZVoiceComponentInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAIDrone, ISBZVoiceComponentInterface), false },
			{ Z_Construct_UClass_USBZAutoAimInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAIDrone, ISBZAutoAimInterface), false },
			{ Z_Construct_UClass_USBZMarkableInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAIDrone, ISBZMarkableInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAIDrone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAIDrone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAIDrone_Statics::ClassParams = {
		&ASBZAIDrone::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZAIDrone_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAIDrone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDrone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAIDrone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAIDrone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAIDrone, 895889712);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAIDrone>()
	{
		return ASBZAIDrone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAIDrone(Z_Construct_UClass_ASBZAIDrone, &ASBZAIDrone::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAIDrone"), false, nullptr, nullptr, nullptr);

	void ASBZAIDrone::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_TeamId(TEXT("TeamId"));
		static const FName Name_RuntimeState(TEXT("RuntimeState"));
		static const FName Name_CurrentTarget(TEXT("CurrentTarget"));
		static const FName Name_bIsHackingSentry(TEXT("bIsHackingSentry"));

		const bool bIsValid = true
			&& Name_TeamId == ClassReps[(int32)ENetFields_Private::TeamId].Property->GetFName()
			&& Name_RuntimeState == ClassReps[(int32)ENetFields_Private::RuntimeState].Property->GetFName()
			&& Name_CurrentTarget == ClassReps[(int32)ENetFields_Private::CurrentTarget].Property->GetFName()
			&& Name_bIsHackingSentry == ClassReps[(int32)ENetFields_Private::bIsHackingSentry].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZAIDrone"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAIDrone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
