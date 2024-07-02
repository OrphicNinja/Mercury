// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAICharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAICharacter() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAICharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAICharacter();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIBaseCharacter();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZRoomScanningType();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAIBehaviorCategory();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAICharacterVariationCategory();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZNegotiationTradeType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCarriedStaticInteractionActor_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZBehaviorCategoryChangedDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnHogTied__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnHumanShield__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerMeleeHitReceived__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnEnabledAsObjective__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSensorComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZShoutTargetComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIEquipmentData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHumanShieldData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAmmoPickup_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlaceableCharges_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHelmetPopper_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSpecialAIComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalAnimationComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZInteractionAction();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerDataAsset_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZRoomLabel();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVariationSetData_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Interval();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTagStanceMapping();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIPointOfInterestDeadBody_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIPointOfInterest_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPagerData_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLifeActionTriggerVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerCharacter_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTripperMarkedInfo();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIVisualDetectorInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkableInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAutoAimInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZAICharacter::execDisableAsObjective)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableAsObjective();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICharacter::execEnableAsObjective)
	{
		P_GET_UBOOL(Z_Param_bImmediately);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableAsObjective(Z_Param_bImmediately,Z_Param_Distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICharacter::execMulticast_DropAttachedLoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_DropAttachedLoot_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICharacter::execMulticast_HostageState)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InHostageState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_HostageState_Implementation(Z_Param_InHostageState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICharacter::execMulticast_RoomScanning)
	{
		P_GET_ENUM(ESBZRoomScanningType,Z_Param_RoomScanningType);
		P_GET_PROPERTY(FIntProperty,Z_Param_AnimationIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_RoomScanning_Implementation(ESBZRoomScanningType(Z_Param_RoomScanningType),Z_Param_AnimationIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICharacter::execMulticast_SetAsObjectiveState)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewAsObjectiveState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetAsObjectiveState_Implementation(Z_Param_NewAsObjectiveState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICharacter::execMulticast_SetBehaviorCategory)
	{
		P_GET_ENUM(ESBZAIBehaviorCategory,Z_Param_RepCategory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetBehaviorCategory_Implementation(ESBZAIBehaviorCategory(Z_Param_RepCategory));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICharacter::execMulticast_SetHacked)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetHacked_Implementation(Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICharacter::execMulticast_SetInCover)
	{
		P_GET_UBOOL(Z_Param_bInIsInCover);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetInCover_Implementation(Z_Param_bInIsInCover);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICharacter::execMulticast_SetVariationCategory)
	{
		P_GET_ENUM(ESBZAICharacterVariationCategory,Z_Param_Category);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetVariationCategory_Implementation(ESBZAICharacterVariationCategory(Z_Param_Category));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICharacter::execMulticast_StopRoomScanning)
	{
		P_GET_ENUM(ESBZRoomScanningType,Z_Param_RoomScanningType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_StopRoomScanning_Implementation(ESBZRoomScanningType(Z_Param_RoomScanningType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICharacter::execMulticast_Surrender)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_Surrender_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICharacter::execOnAckAbortInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_InInteractor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAckAbortInteraction(Z_Param_InInteractable,Z_Param_InInteractor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICharacter::execOnAckCompleteInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_InInteractor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAckCompleteInteraction(Z_Param_InInteractable,Z_Param_InInteractor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICharacter::execOnAckRejectedPredictedInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_InInteractor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAckRejectedPredictedInteraction(Z_Param_InInteractable,Z_Param_InInteractor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICharacter::execOnAttachedLootTaken)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_BaseInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_InInteractor);
		P_GET_UBOOL(Z_Param_bIsLocallyControlledInteractor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttachedLootTaken(Z_Param_BaseInteractable,Z_Param_InInteractor,Z_Param_bIsLocallyControlledInteractor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICharacter::execOnEndInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_InInteractor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndInteraction(Z_Param_InInteractable,Z_Param_InInteractor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICharacter::execOnNegotiationTradeTypeChanged)
	{
		P_GET_ENUM(ESBZNegotiationTradeType,Z_Param_OldType);
		P_GET_ENUM(ESBZNegotiationTradeType,Z_Param_NewType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNegotiationTradeTypeChanged(ESBZNegotiationTradeType(Z_Param_OldType),ESBZNegotiationTradeType(Z_Param_NewType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICharacter::execOnPredictedAbortInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_InInteractor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPredictedAbortInteraction(Z_Param_InInteractable,Z_Param_InInteractor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICharacter::execOnPredictedEndInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_InInteractor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPredictedEndInteraction(Z_Param_InInteractable,Z_Param_InInteractor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICharacter::execOnRep_AsObjectiveState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AsObjectiveState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICharacter::execOnRep_BehaviorCategory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BehaviorCategory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICharacter::execOnRep_HostageState)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_OldHostageState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_HostageState(Z_Param_OldHostageState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICharacter::execOnRep_IsSurrendered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsSurrendered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICharacter::execOnRep_TelegraphAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_TelegraphAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICharacter::execOnRep_VariationCategory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_VariationCategory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICharacter::execOnServerCompleteInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_InInteractor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnServerCompleteInteraction(Z_Param_InInteractable,Z_Param_InInteractor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICharacter::execOnServerECMCountChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_OldCount);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AddedTime);
		P_GET_UBOOL(Z_Param_bInIsSignalScanActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnServerECMCountChanged(Z_Param_NewCount,Z_Param_OldCount,Z_Param_AddedTime,Z_Param_bInIsSignalScanActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICharacter::execOnServerEndInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_InInteractor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnServerEndInteraction(Z_Param_InInteractable,Z_Param_InInteractor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICharacter::execOnServerStartInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_InInteractor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnServerStartInteraction(Z_Param_InInteractable,Z_Param_InInteractor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICharacter::execOnStartInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_InInteractor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartInteraction(Z_Param_InInteractable,Z_Param_InInteractor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICharacter::execRemoveMarkerFromAsObjective)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMarkerFromAsObjective();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICharacter::execSetStartRoomLabel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartRoomLabel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICharacter::execSpawnLootOnCharacter)
	{
		P_GET_OBJECT(UClass,Z_Param_ClassTOSpawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASBZCarriedStaticInteractionActor**)Z_Param__Result=P_THIS->SpawnLootOnCharacter(Z_Param_ClassTOSpawn);
		P_NATIVE_END;
	}
	static FName NAME_ASBZAICharacter_BP_OnTagReactionPlayed = FName(TEXT("BP_OnTagReactionPlayed"));
	void ASBZAICharacter::BP_OnTagReactionPlayed()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZAICharacter_BP_OnTagReactionPlayed),NULL);
	}
	static FName NAME_ASBZAICharacter_Multicast_DropAttachedLoot = FName(TEXT("Multicast_DropAttachedLoot"));
	void ASBZAICharacter::Multicast_DropAttachedLoot()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZAICharacter_Multicast_DropAttachedLoot),NULL);
	}
	static FName NAME_ASBZAICharacter_Multicast_HostageState = FName(TEXT("Multicast_HostageState"));
	void ASBZAICharacter::Multicast_HostageState(uint8 InHostageState)
	{
		SBZAICharacter_eventMulticast_HostageState_Parms Parms;
		Parms.InHostageState=InHostageState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAICharacter_Multicast_HostageState),&Parms);
	}
	static FName NAME_ASBZAICharacter_Multicast_RoomScanning = FName(TEXT("Multicast_RoomScanning"));
	void ASBZAICharacter::Multicast_RoomScanning(ESBZRoomScanningType RoomScanningType, int32 AnimationIndex)
	{
		SBZAICharacter_eventMulticast_RoomScanning_Parms Parms;
		Parms.RoomScanningType=RoomScanningType;
		Parms.AnimationIndex=AnimationIndex;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAICharacter_Multicast_RoomScanning),&Parms);
	}
	static FName NAME_ASBZAICharacter_Multicast_SetAsObjectiveState = FName(TEXT("Multicast_SetAsObjectiveState"));
	void ASBZAICharacter::Multicast_SetAsObjectiveState(uint8 NewAsObjectiveState)
	{
		SBZAICharacter_eventMulticast_SetAsObjectiveState_Parms Parms;
		Parms.NewAsObjectiveState=NewAsObjectiveState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAICharacter_Multicast_SetAsObjectiveState),&Parms);
	}
	static FName NAME_ASBZAICharacter_Multicast_SetBehaviorCategory = FName(TEXT("Multicast_SetBehaviorCategory"));
	void ASBZAICharacter::Multicast_SetBehaviorCategory(ESBZAIBehaviorCategory RepCategory)
	{
		SBZAICharacter_eventMulticast_SetBehaviorCategory_Parms Parms;
		Parms.RepCategory=RepCategory;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAICharacter_Multicast_SetBehaviorCategory),&Parms);
	}
	static FName NAME_ASBZAICharacter_Multicast_SetHacked = FName(TEXT("Multicast_SetHacked"));
	void ASBZAICharacter::Multicast_SetHacked(float Duration)
	{
		SBZAICharacter_eventMulticast_SetHacked_Parms Parms;
		Parms.Duration=Duration;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAICharacter_Multicast_SetHacked),&Parms);
	}
	static FName NAME_ASBZAICharacter_Multicast_SetInCover = FName(TEXT("Multicast_SetInCover"));
	void ASBZAICharacter::Multicast_SetInCover(bool bInIsInCover)
	{
		SBZAICharacter_eventMulticast_SetInCover_Parms Parms;
		Parms.bInIsInCover=bInIsInCover ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAICharacter_Multicast_SetInCover),&Parms);
	}
	static FName NAME_ASBZAICharacter_Multicast_SetVariationCategory = FName(TEXT("Multicast_SetVariationCategory"));
	void ASBZAICharacter::Multicast_SetVariationCategory(ESBZAICharacterVariationCategory Category)
	{
		SBZAICharacter_eventMulticast_SetVariationCategory_Parms Parms;
		Parms.Category=Category;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAICharacter_Multicast_SetVariationCategory),&Parms);
	}
	static FName NAME_ASBZAICharacter_Multicast_StopRoomScanning = FName(TEXT("Multicast_StopRoomScanning"));
	void ASBZAICharacter::Multicast_StopRoomScanning(ESBZRoomScanningType RoomScanningType)
	{
		SBZAICharacter_eventMulticast_StopRoomScanning_Parms Parms;
		Parms.RoomScanningType=RoomScanningType;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAICharacter_Multicast_StopRoomScanning),&Parms);
	}
	static FName NAME_ASBZAICharacter_Multicast_Surrender = FName(TEXT("Multicast_Surrender"));
	void ASBZAICharacter::Multicast_Surrender()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZAICharacter_Multicast_Surrender),NULL);
	}
	void ASBZAICharacter::StaticRegisterNativesASBZAICharacter()
	{
		UClass* Class = ASBZAICharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableAsObjective", &ASBZAICharacter::execDisableAsObjective },
			{ "EnableAsObjective", &ASBZAICharacter::execEnableAsObjective },
			{ "Multicast_DropAttachedLoot", &ASBZAICharacter::execMulticast_DropAttachedLoot },
			{ "Multicast_HostageState", &ASBZAICharacter::execMulticast_HostageState },
			{ "Multicast_RoomScanning", &ASBZAICharacter::execMulticast_RoomScanning },
			{ "Multicast_SetAsObjectiveState", &ASBZAICharacter::execMulticast_SetAsObjectiveState },
			{ "Multicast_SetBehaviorCategory", &ASBZAICharacter::execMulticast_SetBehaviorCategory },
			{ "Multicast_SetHacked", &ASBZAICharacter::execMulticast_SetHacked },
			{ "Multicast_SetInCover", &ASBZAICharacter::execMulticast_SetInCover },
			{ "Multicast_SetVariationCategory", &ASBZAICharacter::execMulticast_SetVariationCategory },
			{ "Multicast_StopRoomScanning", &ASBZAICharacter::execMulticast_StopRoomScanning },
			{ "Multicast_Surrender", &ASBZAICharacter::execMulticast_Surrender },
			{ "OnAckAbortInteraction", &ASBZAICharacter::execOnAckAbortInteraction },
			{ "OnAckCompleteInteraction", &ASBZAICharacter::execOnAckCompleteInteraction },
			{ "OnAckRejectedPredictedInteraction", &ASBZAICharacter::execOnAckRejectedPredictedInteraction },
			{ "OnAttachedLootTaken", &ASBZAICharacter::execOnAttachedLootTaken },
			{ "OnEndInteraction", &ASBZAICharacter::execOnEndInteraction },
			{ "OnNegotiationTradeTypeChanged", &ASBZAICharacter::execOnNegotiationTradeTypeChanged },
			{ "OnPredictedAbortInteraction", &ASBZAICharacter::execOnPredictedAbortInteraction },
			{ "OnPredictedEndInteraction", &ASBZAICharacter::execOnPredictedEndInteraction },
			{ "OnRep_AsObjectiveState", &ASBZAICharacter::execOnRep_AsObjectiveState },
			{ "OnRep_BehaviorCategory", &ASBZAICharacter::execOnRep_BehaviorCategory },
			{ "OnRep_HostageState", &ASBZAICharacter::execOnRep_HostageState },
			{ "OnRep_IsSurrendered", &ASBZAICharacter::execOnRep_IsSurrendered },
			{ "OnRep_TelegraphAttack", &ASBZAICharacter::execOnRep_TelegraphAttack },
			{ "OnRep_VariationCategory", &ASBZAICharacter::execOnRep_VariationCategory },
			{ "OnServerCompleteInteraction", &ASBZAICharacter::execOnServerCompleteInteraction },
			{ "OnServerECMCountChanged", &ASBZAICharacter::execOnServerECMCountChanged },
			{ "OnServerEndInteraction", &ASBZAICharacter::execOnServerEndInteraction },
			{ "OnServerStartInteraction", &ASBZAICharacter::execOnServerStartInteraction },
			{ "OnStartInteraction", &ASBZAICharacter::execOnStartInteraction },
			{ "RemoveMarkerFromAsObjective", &ASBZAICharacter::execRemoveMarkerFromAsObjective },
			{ "SetStartRoomLabel", &ASBZAICharacter::execSetStartRoomLabel },
			{ "SpawnLootOnCharacter", &ASBZAICharacter::execSpawnLootOnCharacter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZAICharacter_BP_OnTagReactionPlayed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_BP_OnTagReactionPlayed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_BP_OnTagReactionPlayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "BP_OnTagReactionPlayed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_BP_OnTagReactionPlayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_BP_OnTagReactionPlayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_BP_OnTagReactionPlayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_BP_OnTagReactionPlayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICharacter_DisableAsObjective_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_DisableAsObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_DisableAsObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "DisableAsObjective", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_DisableAsObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_DisableAsObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_DisableAsObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_DisableAsObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICharacter_EnableAsObjective_Statics
	{
		struct SBZAICharacter_eventEnableAsObjective_Parms
		{
			bool bImmediately;
			float Distance;
		};
		static void NewProp_bImmediately_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImmediately;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZAICharacter_EnableAsObjective_Statics::NewProp_bImmediately_SetBit(void* Obj)
	{
		((SBZAICharacter_eventEnableAsObjective_Parms*)Obj)->bImmediately = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAICharacter_EnableAsObjective_Statics::NewProp_bImmediately = { "bImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAICharacter_eventEnableAsObjective_Parms), &Z_Construct_UFunction_ASBZAICharacter_EnableAsObjective_Statics::NewProp_bImmediately_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZAICharacter_EnableAsObjective_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventEnableAsObjective_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICharacter_EnableAsObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_EnableAsObjective_Statics::NewProp_bImmediately,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_EnableAsObjective_Statics::NewProp_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_EnableAsObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_EnableAsObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "EnableAsObjective", nullptr, nullptr, sizeof(SBZAICharacter_eventEnableAsObjective_Parms), Z_Construct_UFunction_ASBZAICharacter_EnableAsObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_EnableAsObjective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_EnableAsObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_EnableAsObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_EnableAsObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_EnableAsObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICharacter_Multicast_DropAttachedLoot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_Multicast_DropAttachedLoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_Multicast_DropAttachedLoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "Multicast_DropAttachedLoot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_Multicast_DropAttachedLoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_Multicast_DropAttachedLoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_Multicast_DropAttachedLoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_Multicast_DropAttachedLoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICharacter_Multicast_HostageState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InHostageState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAICharacter_Multicast_HostageState_Statics::NewProp_InHostageState = { "InHostageState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventMulticast_HostageState_Parms, InHostageState), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICharacter_Multicast_HostageState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_Multicast_HostageState_Statics::NewProp_InHostageState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_Multicast_HostageState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_Multicast_HostageState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "Multicast_HostageState", nullptr, nullptr, sizeof(SBZAICharacter_eventMulticast_HostageState_Parms), Z_Construct_UFunction_ASBZAICharacter_Multicast_HostageState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_Multicast_HostageState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_Multicast_HostageState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_Multicast_HostageState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_Multicast_HostageState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_Multicast_HostageState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICharacter_Multicast_RoomScanning_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RoomScanningType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RoomScanningType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AnimationIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAICharacter_Multicast_RoomScanning_Statics::NewProp_RoomScanningType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZAICharacter_Multicast_RoomScanning_Statics::NewProp_RoomScanningType = { "RoomScanningType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventMulticast_RoomScanning_Parms, RoomScanningType), Z_Construct_UEnum_Starbreeze_ESBZRoomScanningType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZAICharacter_Multicast_RoomScanning_Statics::NewProp_AnimationIndex = { "AnimationIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventMulticast_RoomScanning_Parms, AnimationIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICharacter_Multicast_RoomScanning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_Multicast_RoomScanning_Statics::NewProp_RoomScanningType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_Multicast_RoomScanning_Statics::NewProp_RoomScanningType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_Multicast_RoomScanning_Statics::NewProp_AnimationIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_Multicast_RoomScanning_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_Multicast_RoomScanning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "Multicast_RoomScanning", nullptr, nullptr, sizeof(SBZAICharacter_eventMulticast_RoomScanning_Parms), Z_Construct_UFunction_ASBZAICharacter_Multicast_RoomScanning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_Multicast_RoomScanning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_Multicast_RoomScanning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_Multicast_RoomScanning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_Multicast_RoomScanning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_Multicast_RoomScanning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICharacter_Multicast_SetAsObjectiveState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewAsObjectiveState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAICharacter_Multicast_SetAsObjectiveState_Statics::NewProp_NewAsObjectiveState = { "NewAsObjectiveState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventMulticast_SetAsObjectiveState_Parms, NewAsObjectiveState), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICharacter_Multicast_SetAsObjectiveState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_Multicast_SetAsObjectiveState_Statics::NewProp_NewAsObjectiveState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_Multicast_SetAsObjectiveState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_Multicast_SetAsObjectiveState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "Multicast_SetAsObjectiveState", nullptr, nullptr, sizeof(SBZAICharacter_eventMulticast_SetAsObjectiveState_Parms), Z_Construct_UFunction_ASBZAICharacter_Multicast_SetAsObjectiveState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_Multicast_SetAsObjectiveState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_Multicast_SetAsObjectiveState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_Multicast_SetAsObjectiveState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_Multicast_SetAsObjectiveState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_Multicast_SetAsObjectiveState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICharacter_Multicast_SetBehaviorCategory_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RepCategory_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RepCategory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAICharacter_Multicast_SetBehaviorCategory_Statics::NewProp_RepCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZAICharacter_Multicast_SetBehaviorCategory_Statics::NewProp_RepCategory = { "RepCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventMulticast_SetBehaviorCategory_Parms, RepCategory), Z_Construct_UEnum_Starbreeze_ESBZAIBehaviorCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICharacter_Multicast_SetBehaviorCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_Multicast_SetBehaviorCategory_Statics::NewProp_RepCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_Multicast_SetBehaviorCategory_Statics::NewProp_RepCategory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_Multicast_SetBehaviorCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_Multicast_SetBehaviorCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "Multicast_SetBehaviorCategory", nullptr, nullptr, sizeof(SBZAICharacter_eventMulticast_SetBehaviorCategory_Parms), Z_Construct_UFunction_ASBZAICharacter_Multicast_SetBehaviorCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_Multicast_SetBehaviorCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_Multicast_SetBehaviorCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_Multicast_SetBehaviorCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_Multicast_SetBehaviorCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_Multicast_SetBehaviorCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICharacter_Multicast_SetHacked_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZAICharacter_Multicast_SetHacked_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventMulticast_SetHacked_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICharacter_Multicast_SetHacked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_Multicast_SetHacked_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_Multicast_SetHacked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_Multicast_SetHacked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "Multicast_SetHacked", nullptr, nullptr, sizeof(SBZAICharacter_eventMulticast_SetHacked_Parms), Z_Construct_UFunction_ASBZAICharacter_Multicast_SetHacked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_Multicast_SetHacked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_Multicast_SetHacked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_Multicast_SetHacked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_Multicast_SetHacked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_Multicast_SetHacked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICharacter_Multicast_SetInCover_Statics
	{
		static void NewProp_bInIsInCover_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsInCover;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZAICharacter_Multicast_SetInCover_Statics::NewProp_bInIsInCover_SetBit(void* Obj)
	{
		((SBZAICharacter_eventMulticast_SetInCover_Parms*)Obj)->bInIsInCover = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAICharacter_Multicast_SetInCover_Statics::NewProp_bInIsInCover = { "bInIsInCover", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAICharacter_eventMulticast_SetInCover_Parms), &Z_Construct_UFunction_ASBZAICharacter_Multicast_SetInCover_Statics::NewProp_bInIsInCover_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICharacter_Multicast_SetInCover_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_Multicast_SetInCover_Statics::NewProp_bInIsInCover,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_Multicast_SetInCover_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_Multicast_SetInCover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "Multicast_SetInCover", nullptr, nullptr, sizeof(SBZAICharacter_eventMulticast_SetInCover_Parms), Z_Construct_UFunction_ASBZAICharacter_Multicast_SetInCover_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_Multicast_SetInCover_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_Multicast_SetInCover_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_Multicast_SetInCover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_Multicast_SetInCover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_Multicast_SetInCover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICharacter_Multicast_SetVariationCategory_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAICharacter_Multicast_SetVariationCategory_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZAICharacter_Multicast_SetVariationCategory_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventMulticast_SetVariationCategory_Parms, Category), Z_Construct_UEnum_Starbreeze_ESBZAICharacterVariationCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICharacter_Multicast_SetVariationCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_Multicast_SetVariationCategory_Statics::NewProp_Category_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_Multicast_SetVariationCategory_Statics::NewProp_Category,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_Multicast_SetVariationCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_Multicast_SetVariationCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "Multicast_SetVariationCategory", nullptr, nullptr, sizeof(SBZAICharacter_eventMulticast_SetVariationCategory_Parms), Z_Construct_UFunction_ASBZAICharacter_Multicast_SetVariationCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_Multicast_SetVariationCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_Multicast_SetVariationCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_Multicast_SetVariationCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_Multicast_SetVariationCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_Multicast_SetVariationCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICharacter_Multicast_StopRoomScanning_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RoomScanningType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RoomScanningType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAICharacter_Multicast_StopRoomScanning_Statics::NewProp_RoomScanningType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZAICharacter_Multicast_StopRoomScanning_Statics::NewProp_RoomScanningType = { "RoomScanningType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventMulticast_StopRoomScanning_Parms, RoomScanningType), Z_Construct_UEnum_Starbreeze_ESBZRoomScanningType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICharacter_Multicast_StopRoomScanning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_Multicast_StopRoomScanning_Statics::NewProp_RoomScanningType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_Multicast_StopRoomScanning_Statics::NewProp_RoomScanningType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_Multicast_StopRoomScanning_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_Multicast_StopRoomScanning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "Multicast_StopRoomScanning", nullptr, nullptr, sizeof(SBZAICharacter_eventMulticast_StopRoomScanning_Parms), Z_Construct_UFunction_ASBZAICharacter_Multicast_StopRoomScanning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_Multicast_StopRoomScanning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_Multicast_StopRoomScanning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_Multicast_StopRoomScanning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_Multicast_StopRoomScanning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_Multicast_StopRoomScanning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICharacter_Multicast_Surrender_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_Multicast_Surrender_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_Multicast_Surrender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "Multicast_Surrender", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_Multicast_Surrender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_Multicast_Surrender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_Multicast_Surrender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_Multicast_Surrender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICharacter_OnAckAbortInteraction_Statics
	{
		struct SBZAICharacter_eventOnAckAbortInteraction_Parms
		{
			USBZBaseInteractableComponent* InInteractable;
			USBZInteractorComponent* InInteractor;
			bool bInIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractor;
		static void NewProp_bInIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLocallyControlled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnAckAbortInteraction_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnAckAbortInteraction_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventOnAckAbortInteraction_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnAckAbortInteraction_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnAckAbortInteraction_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnAckAbortInteraction_Statics::NewProp_InInteractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnAckAbortInteraction_Statics::NewProp_InInteractor = { "InInteractor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventOnAckAbortInteraction_Parms, InInteractor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnAckAbortInteraction_Statics::NewProp_InInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnAckAbortInteraction_Statics::NewProp_InInteractor_MetaData)) };
	void Z_Construct_UFunction_ASBZAICharacter_OnAckAbortInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZAICharacter_eventOnAckAbortInteraction_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnAckAbortInteraction_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAICharacter_eventOnAckAbortInteraction_Parms), &Z_Construct_UFunction_ASBZAICharacter_OnAckAbortInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICharacter_OnAckAbortInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnAckAbortInteraction_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnAckAbortInteraction_Statics::NewProp_InInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnAckAbortInteraction_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnAckAbortInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_OnAckAbortInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "OnAckAbortInteraction", nullptr, nullptr, sizeof(SBZAICharacter_eventOnAckAbortInteraction_Parms), Z_Construct_UFunction_ASBZAICharacter_OnAckAbortInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnAckAbortInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnAckAbortInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnAckAbortInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_OnAckAbortInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_OnAckAbortInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICharacter_OnAckCompleteInteraction_Statics
	{
		struct SBZAICharacter_eventOnAckCompleteInteraction_Parms
		{
			USBZBaseInteractableComponent* InInteractable;
			USBZInteractorComponent* InInteractor;
			bool bInIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractor;
		static void NewProp_bInIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLocallyControlled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnAckCompleteInteraction_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnAckCompleteInteraction_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventOnAckCompleteInteraction_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnAckCompleteInteraction_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnAckCompleteInteraction_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnAckCompleteInteraction_Statics::NewProp_InInteractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnAckCompleteInteraction_Statics::NewProp_InInteractor = { "InInteractor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventOnAckCompleteInteraction_Parms, InInteractor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnAckCompleteInteraction_Statics::NewProp_InInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnAckCompleteInteraction_Statics::NewProp_InInteractor_MetaData)) };
	void Z_Construct_UFunction_ASBZAICharacter_OnAckCompleteInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZAICharacter_eventOnAckCompleteInteraction_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnAckCompleteInteraction_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAICharacter_eventOnAckCompleteInteraction_Parms), &Z_Construct_UFunction_ASBZAICharacter_OnAckCompleteInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICharacter_OnAckCompleteInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnAckCompleteInteraction_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnAckCompleteInteraction_Statics::NewProp_InInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnAckCompleteInteraction_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnAckCompleteInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_OnAckCompleteInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "OnAckCompleteInteraction", nullptr, nullptr, sizeof(SBZAICharacter_eventOnAckCompleteInteraction_Parms), Z_Construct_UFunction_ASBZAICharacter_OnAckCompleteInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnAckCompleteInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnAckCompleteInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnAckCompleteInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_OnAckCompleteInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_OnAckCompleteInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICharacter_OnAckRejectedPredictedInteraction_Statics
	{
		struct SBZAICharacter_eventOnAckRejectedPredictedInteraction_Parms
		{
			USBZBaseInteractableComponent* InInteractable;
			USBZInteractorComponent* InInteractor;
			bool bInIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractor;
		static void NewProp_bInIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLocallyControlled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnAckRejectedPredictedInteraction_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnAckRejectedPredictedInteraction_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventOnAckRejectedPredictedInteraction_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnAckRejectedPredictedInteraction_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnAckRejectedPredictedInteraction_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnAckRejectedPredictedInteraction_Statics::NewProp_InInteractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnAckRejectedPredictedInteraction_Statics::NewProp_InInteractor = { "InInteractor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventOnAckRejectedPredictedInteraction_Parms, InInteractor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnAckRejectedPredictedInteraction_Statics::NewProp_InInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnAckRejectedPredictedInteraction_Statics::NewProp_InInteractor_MetaData)) };
	void Z_Construct_UFunction_ASBZAICharacter_OnAckRejectedPredictedInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZAICharacter_eventOnAckRejectedPredictedInteraction_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnAckRejectedPredictedInteraction_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAICharacter_eventOnAckRejectedPredictedInteraction_Parms), &Z_Construct_UFunction_ASBZAICharacter_OnAckRejectedPredictedInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICharacter_OnAckRejectedPredictedInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnAckRejectedPredictedInteraction_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnAckRejectedPredictedInteraction_Statics::NewProp_InInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnAckRejectedPredictedInteraction_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnAckRejectedPredictedInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_OnAckRejectedPredictedInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "OnAckRejectedPredictedInteraction", nullptr, nullptr, sizeof(SBZAICharacter_eventOnAckRejectedPredictedInteraction_Parms), Z_Construct_UFunction_ASBZAICharacter_OnAckRejectedPredictedInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnAckRejectedPredictedInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnAckRejectedPredictedInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnAckRejectedPredictedInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_OnAckRejectedPredictedInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_OnAckRejectedPredictedInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICharacter_OnAttachedLootTaken_Statics
	{
		struct SBZAICharacter_eventOnAttachedLootTaken_Parms
		{
			USBZBaseInteractableComponent* BaseInteractable;
			USBZInteractorComponent* InInteractor;
			bool bIsLocallyControlledInteractor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractor;
		static void NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocallyControlledInteractor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnAttachedLootTaken_Statics::NewProp_BaseInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnAttachedLootTaken_Statics::NewProp_BaseInteractable = { "BaseInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventOnAttachedLootTaken_Parms, BaseInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnAttachedLootTaken_Statics::NewProp_BaseInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnAttachedLootTaken_Statics::NewProp_BaseInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnAttachedLootTaken_Statics::NewProp_InInteractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnAttachedLootTaken_Statics::NewProp_InInteractor = { "InInteractor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventOnAttachedLootTaken_Parms, InInteractor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnAttachedLootTaken_Statics::NewProp_InInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnAttachedLootTaken_Statics::NewProp_InInteractor_MetaData)) };
	void Z_Construct_UFunction_ASBZAICharacter_OnAttachedLootTaken_Statics::NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj)
	{
		((SBZAICharacter_eventOnAttachedLootTaken_Parms*)Obj)->bIsLocallyControlledInteractor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnAttachedLootTaken_Statics::NewProp_bIsLocallyControlledInteractor = { "bIsLocallyControlledInteractor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAICharacter_eventOnAttachedLootTaken_Parms), &Z_Construct_UFunction_ASBZAICharacter_OnAttachedLootTaken_Statics::NewProp_bIsLocallyControlledInteractor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICharacter_OnAttachedLootTaken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnAttachedLootTaken_Statics::NewProp_BaseInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnAttachedLootTaken_Statics::NewProp_InInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnAttachedLootTaken_Statics::NewProp_bIsLocallyControlledInteractor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnAttachedLootTaken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_OnAttachedLootTaken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "OnAttachedLootTaken", nullptr, nullptr, sizeof(SBZAICharacter_eventOnAttachedLootTaken_Parms), Z_Construct_UFunction_ASBZAICharacter_OnAttachedLootTaken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnAttachedLootTaken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnAttachedLootTaken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnAttachedLootTaken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_OnAttachedLootTaken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_OnAttachedLootTaken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICharacter_OnEndInteraction_Statics
	{
		struct SBZAICharacter_eventOnEndInteraction_Parms
		{
			USBZBaseInteractableComponent* InInteractable;
			USBZInteractorComponent* InInteractor;
			bool bInIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractor;
		static void NewProp_bInIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLocallyControlled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnEndInteraction_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnEndInteraction_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventOnEndInteraction_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnEndInteraction_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnEndInteraction_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnEndInteraction_Statics::NewProp_InInteractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnEndInteraction_Statics::NewProp_InInteractor = { "InInteractor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventOnEndInteraction_Parms, InInteractor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnEndInteraction_Statics::NewProp_InInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnEndInteraction_Statics::NewProp_InInteractor_MetaData)) };
	void Z_Construct_UFunction_ASBZAICharacter_OnEndInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZAICharacter_eventOnEndInteraction_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnEndInteraction_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAICharacter_eventOnEndInteraction_Parms), &Z_Construct_UFunction_ASBZAICharacter_OnEndInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICharacter_OnEndInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnEndInteraction_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnEndInteraction_Statics::NewProp_InInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnEndInteraction_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnEndInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_OnEndInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "OnEndInteraction", nullptr, nullptr, sizeof(SBZAICharacter_eventOnEndInteraction_Parms), Z_Construct_UFunction_ASBZAICharacter_OnEndInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnEndInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnEndInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnEndInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_OnEndInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_OnEndInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICharacter_OnNegotiationTradeTypeChanged_Statics
	{
		struct SBZAICharacter_eventOnNegotiationTradeTypeChanged_Parms
		{
			ESBZNegotiationTradeType OldType;
			ESBZNegotiationTradeType NewType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAICharacter_OnNegotiationTradeTypeChanged_Statics::NewProp_OldType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnNegotiationTradeTypeChanged_Statics::NewProp_OldType = { "OldType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventOnNegotiationTradeTypeChanged_Parms, OldType), Z_Construct_UEnum_Starbreeze_ESBZNegotiationTradeType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAICharacter_OnNegotiationTradeTypeChanged_Statics::NewProp_NewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnNegotiationTradeTypeChanged_Statics::NewProp_NewType = { "NewType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventOnNegotiationTradeTypeChanged_Parms, NewType), Z_Construct_UEnum_Starbreeze_ESBZNegotiationTradeType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICharacter_OnNegotiationTradeTypeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnNegotiationTradeTypeChanged_Statics::NewProp_OldType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnNegotiationTradeTypeChanged_Statics::NewProp_OldType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnNegotiationTradeTypeChanged_Statics::NewProp_NewType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnNegotiationTradeTypeChanged_Statics::NewProp_NewType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnNegotiationTradeTypeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_OnNegotiationTradeTypeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "OnNegotiationTradeTypeChanged", nullptr, nullptr, sizeof(SBZAICharacter_eventOnNegotiationTradeTypeChanged_Parms), Z_Construct_UFunction_ASBZAICharacter_OnNegotiationTradeTypeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnNegotiationTradeTypeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnNegotiationTradeTypeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnNegotiationTradeTypeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_OnNegotiationTradeTypeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_OnNegotiationTradeTypeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICharacter_OnPredictedAbortInteraction_Statics
	{
		struct SBZAICharacter_eventOnPredictedAbortInteraction_Parms
		{
			USBZBaseInteractableComponent* InInteractable;
			USBZInteractorComponent* InInteractor;
			bool bInIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractor;
		static void NewProp_bInIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLocallyControlled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnPredictedAbortInteraction_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnPredictedAbortInteraction_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventOnPredictedAbortInteraction_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnPredictedAbortInteraction_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnPredictedAbortInteraction_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnPredictedAbortInteraction_Statics::NewProp_InInteractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnPredictedAbortInteraction_Statics::NewProp_InInteractor = { "InInteractor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventOnPredictedAbortInteraction_Parms, InInteractor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnPredictedAbortInteraction_Statics::NewProp_InInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnPredictedAbortInteraction_Statics::NewProp_InInteractor_MetaData)) };
	void Z_Construct_UFunction_ASBZAICharacter_OnPredictedAbortInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZAICharacter_eventOnPredictedAbortInteraction_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnPredictedAbortInteraction_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAICharacter_eventOnPredictedAbortInteraction_Parms), &Z_Construct_UFunction_ASBZAICharacter_OnPredictedAbortInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICharacter_OnPredictedAbortInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnPredictedAbortInteraction_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnPredictedAbortInteraction_Statics::NewProp_InInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnPredictedAbortInteraction_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnPredictedAbortInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_OnPredictedAbortInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "OnPredictedAbortInteraction", nullptr, nullptr, sizeof(SBZAICharacter_eventOnPredictedAbortInteraction_Parms), Z_Construct_UFunction_ASBZAICharacter_OnPredictedAbortInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnPredictedAbortInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnPredictedAbortInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnPredictedAbortInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_OnPredictedAbortInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_OnPredictedAbortInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICharacter_OnPredictedEndInteraction_Statics
	{
		struct SBZAICharacter_eventOnPredictedEndInteraction_Parms
		{
			USBZBaseInteractableComponent* InInteractable;
			USBZInteractorComponent* InInteractor;
			bool bInIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractor;
		static void NewProp_bInIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLocallyControlled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnPredictedEndInteraction_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnPredictedEndInteraction_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventOnPredictedEndInteraction_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnPredictedEndInteraction_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnPredictedEndInteraction_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnPredictedEndInteraction_Statics::NewProp_InInteractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnPredictedEndInteraction_Statics::NewProp_InInteractor = { "InInteractor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventOnPredictedEndInteraction_Parms, InInteractor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnPredictedEndInteraction_Statics::NewProp_InInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnPredictedEndInteraction_Statics::NewProp_InInteractor_MetaData)) };
	void Z_Construct_UFunction_ASBZAICharacter_OnPredictedEndInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZAICharacter_eventOnPredictedEndInteraction_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnPredictedEndInteraction_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAICharacter_eventOnPredictedEndInteraction_Parms), &Z_Construct_UFunction_ASBZAICharacter_OnPredictedEndInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICharacter_OnPredictedEndInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnPredictedEndInteraction_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnPredictedEndInteraction_Statics::NewProp_InInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnPredictedEndInteraction_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnPredictedEndInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_OnPredictedEndInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "OnPredictedEndInteraction", nullptr, nullptr, sizeof(SBZAICharacter_eventOnPredictedEndInteraction_Parms), Z_Construct_UFunction_ASBZAICharacter_OnPredictedEndInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnPredictedEndInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnPredictedEndInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnPredictedEndInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_OnPredictedEndInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_OnPredictedEndInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICharacter_OnRep_AsObjectiveState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnRep_AsObjectiveState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_OnRep_AsObjectiveState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "OnRep_AsObjectiveState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnRep_AsObjectiveState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnRep_AsObjectiveState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_OnRep_AsObjectiveState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_OnRep_AsObjectiveState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICharacter_OnRep_BehaviorCategory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnRep_BehaviorCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_OnRep_BehaviorCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "OnRep_BehaviorCategory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnRep_BehaviorCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnRep_BehaviorCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_OnRep_BehaviorCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_OnRep_BehaviorCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICharacter_OnRep_HostageState_Statics
	{
		struct SBZAICharacter_eventOnRep_HostageState_Parms
		{
			uint8 OldHostageState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldHostageState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAICharacter_OnRep_HostageState_Statics::NewProp_OldHostageState = { "OldHostageState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventOnRep_HostageState_Parms, OldHostageState), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICharacter_OnRep_HostageState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnRep_HostageState_Statics::NewProp_OldHostageState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnRep_HostageState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_OnRep_HostageState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "OnRep_HostageState", nullptr, nullptr, sizeof(SBZAICharacter_eventOnRep_HostageState_Parms), Z_Construct_UFunction_ASBZAICharacter_OnRep_HostageState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnRep_HostageState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnRep_HostageState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnRep_HostageState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_OnRep_HostageState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_OnRep_HostageState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICharacter_OnRep_IsSurrendered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnRep_IsSurrendered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_OnRep_IsSurrendered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "OnRep_IsSurrendered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnRep_IsSurrendered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnRep_IsSurrendered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_OnRep_IsSurrendered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_OnRep_IsSurrendered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICharacter_OnRep_TelegraphAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnRep_TelegraphAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_OnRep_TelegraphAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "OnRep_TelegraphAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnRep_TelegraphAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnRep_TelegraphAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_OnRep_TelegraphAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_OnRep_TelegraphAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICharacter_OnRep_VariationCategory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnRep_VariationCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_OnRep_VariationCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "OnRep_VariationCategory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnRep_VariationCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnRep_VariationCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_OnRep_VariationCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_OnRep_VariationCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICharacter_OnServerCompleteInteraction_Statics
	{
		struct SBZAICharacter_eventOnServerCompleteInteraction_Parms
		{
			USBZBaseInteractableComponent* InInteractable;
			USBZInteractorComponent* InInteractor;
			bool bInIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractor;
		static void NewProp_bInIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLocallyControlled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnServerCompleteInteraction_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnServerCompleteInteraction_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventOnServerCompleteInteraction_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnServerCompleteInteraction_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnServerCompleteInteraction_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnServerCompleteInteraction_Statics::NewProp_InInteractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnServerCompleteInteraction_Statics::NewProp_InInteractor = { "InInteractor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventOnServerCompleteInteraction_Parms, InInteractor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnServerCompleteInteraction_Statics::NewProp_InInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnServerCompleteInteraction_Statics::NewProp_InInteractor_MetaData)) };
	void Z_Construct_UFunction_ASBZAICharacter_OnServerCompleteInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZAICharacter_eventOnServerCompleteInteraction_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnServerCompleteInteraction_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAICharacter_eventOnServerCompleteInteraction_Parms), &Z_Construct_UFunction_ASBZAICharacter_OnServerCompleteInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICharacter_OnServerCompleteInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnServerCompleteInteraction_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnServerCompleteInteraction_Statics::NewProp_InInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnServerCompleteInteraction_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnServerCompleteInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_OnServerCompleteInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "OnServerCompleteInteraction", nullptr, nullptr, sizeof(SBZAICharacter_eventOnServerCompleteInteraction_Parms), Z_Construct_UFunction_ASBZAICharacter_OnServerCompleteInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnServerCompleteInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnServerCompleteInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnServerCompleteInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_OnServerCompleteInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_OnServerCompleteInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICharacter_OnServerECMCountChanged_Statics
	{
		struct SBZAICharacter_eventOnServerECMCountChanged_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnServerECMCountChanged_Statics::NewProp_NewCount = { "NewCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventOnServerECMCountChanged_Parms, NewCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnServerECMCountChanged_Statics::NewProp_OldCount = { "OldCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventOnServerECMCountChanged_Parms, OldCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnServerECMCountChanged_Statics::NewProp_AddedTime = { "AddedTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventOnServerECMCountChanged_Parms, AddedTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZAICharacter_OnServerECMCountChanged_Statics::NewProp_bInIsSignalScanActive_SetBit(void* Obj)
	{
		((SBZAICharacter_eventOnServerECMCountChanged_Parms*)Obj)->bInIsSignalScanActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnServerECMCountChanged_Statics::NewProp_bInIsSignalScanActive = { "bInIsSignalScanActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAICharacter_eventOnServerECMCountChanged_Parms), &Z_Construct_UFunction_ASBZAICharacter_OnServerECMCountChanged_Statics::NewProp_bInIsSignalScanActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICharacter_OnServerECMCountChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnServerECMCountChanged_Statics::NewProp_NewCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnServerECMCountChanged_Statics::NewProp_OldCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnServerECMCountChanged_Statics::NewProp_AddedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnServerECMCountChanged_Statics::NewProp_bInIsSignalScanActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnServerECMCountChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_OnServerECMCountChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "OnServerECMCountChanged", nullptr, nullptr, sizeof(SBZAICharacter_eventOnServerECMCountChanged_Parms), Z_Construct_UFunction_ASBZAICharacter_OnServerECMCountChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnServerECMCountChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnServerECMCountChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnServerECMCountChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_OnServerECMCountChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_OnServerECMCountChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICharacter_OnServerEndInteraction_Statics
	{
		struct SBZAICharacter_eventOnServerEndInteraction_Parms
		{
			USBZBaseInteractableComponent* InInteractable;
			USBZInteractorComponent* InInteractor;
			bool bInIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractor;
		static void NewProp_bInIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLocallyControlled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnServerEndInteraction_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnServerEndInteraction_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventOnServerEndInteraction_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnServerEndInteraction_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnServerEndInteraction_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnServerEndInteraction_Statics::NewProp_InInteractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnServerEndInteraction_Statics::NewProp_InInteractor = { "InInteractor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventOnServerEndInteraction_Parms, InInteractor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnServerEndInteraction_Statics::NewProp_InInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnServerEndInteraction_Statics::NewProp_InInteractor_MetaData)) };
	void Z_Construct_UFunction_ASBZAICharacter_OnServerEndInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZAICharacter_eventOnServerEndInteraction_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnServerEndInteraction_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAICharacter_eventOnServerEndInteraction_Parms), &Z_Construct_UFunction_ASBZAICharacter_OnServerEndInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICharacter_OnServerEndInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnServerEndInteraction_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnServerEndInteraction_Statics::NewProp_InInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnServerEndInteraction_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnServerEndInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_OnServerEndInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "OnServerEndInteraction", nullptr, nullptr, sizeof(SBZAICharacter_eventOnServerEndInteraction_Parms), Z_Construct_UFunction_ASBZAICharacter_OnServerEndInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnServerEndInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnServerEndInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnServerEndInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_OnServerEndInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_OnServerEndInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICharacter_OnServerStartInteraction_Statics
	{
		struct SBZAICharacter_eventOnServerStartInteraction_Parms
		{
			USBZBaseInteractableComponent* InInteractable;
			USBZInteractorComponent* InInteractor;
			bool bInIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractor;
		static void NewProp_bInIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLocallyControlled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnServerStartInteraction_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnServerStartInteraction_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventOnServerStartInteraction_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnServerStartInteraction_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnServerStartInteraction_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnServerStartInteraction_Statics::NewProp_InInteractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnServerStartInteraction_Statics::NewProp_InInteractor = { "InInteractor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventOnServerStartInteraction_Parms, InInteractor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnServerStartInteraction_Statics::NewProp_InInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnServerStartInteraction_Statics::NewProp_InInteractor_MetaData)) };
	void Z_Construct_UFunction_ASBZAICharacter_OnServerStartInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZAICharacter_eventOnServerStartInteraction_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnServerStartInteraction_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAICharacter_eventOnServerStartInteraction_Parms), &Z_Construct_UFunction_ASBZAICharacter_OnServerStartInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICharacter_OnServerStartInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnServerStartInteraction_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnServerStartInteraction_Statics::NewProp_InInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnServerStartInteraction_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnServerStartInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_OnServerStartInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "OnServerStartInteraction", nullptr, nullptr, sizeof(SBZAICharacter_eventOnServerStartInteraction_Parms), Z_Construct_UFunction_ASBZAICharacter_OnServerStartInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnServerStartInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnServerStartInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnServerStartInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_OnServerStartInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_OnServerStartInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICharacter_OnStartInteraction_Statics
	{
		struct SBZAICharacter_eventOnStartInteraction_Parms
		{
			USBZBaseInteractableComponent* InInteractable;
			USBZInteractorComponent* InInteractor;
			bool bInIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractor;
		static void NewProp_bInIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLocallyControlled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnStartInteraction_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnStartInteraction_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventOnStartInteraction_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnStartInteraction_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnStartInteraction_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnStartInteraction_Statics::NewProp_InInteractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnStartInteraction_Statics::NewProp_InInteractor = { "InInteractor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventOnStartInteraction_Parms, InInteractor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnStartInteraction_Statics::NewProp_InInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnStartInteraction_Statics::NewProp_InInteractor_MetaData)) };
	void Z_Construct_UFunction_ASBZAICharacter_OnStartInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZAICharacter_eventOnStartInteraction_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAICharacter_OnStartInteraction_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAICharacter_eventOnStartInteraction_Parms), &Z_Construct_UFunction_ASBZAICharacter_OnStartInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICharacter_OnStartInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnStartInteraction_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnStartInteraction_Statics::NewProp_InInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_OnStartInteraction_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_OnStartInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_OnStartInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "OnStartInteraction", nullptr, nullptr, sizeof(SBZAICharacter_eventOnStartInteraction_Parms), Z_Construct_UFunction_ASBZAICharacter_OnStartInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnStartInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_OnStartInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_OnStartInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_OnStartInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_OnStartInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICharacter_RemoveMarkerFromAsObjective_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_RemoveMarkerFromAsObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_RemoveMarkerFromAsObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "RemoveMarkerFromAsObjective", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_RemoveMarkerFromAsObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_RemoveMarkerFromAsObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_RemoveMarkerFromAsObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_RemoveMarkerFromAsObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICharacter_SetStartRoomLabel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_SetStartRoomLabel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_SetStartRoomLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "SetStartRoomLabel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_SetStartRoomLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_SetStartRoomLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_SetStartRoomLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_SetStartRoomLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICharacter_SpawnLootOnCharacter_Statics
	{
		struct SBZAICharacter_eventSpawnLootOnCharacter_Parms
		{
			TSubclassOf<ASBZCarriedStaticInteractionActor>  ClassTOSpawn;
			ASBZCarriedStaticInteractionActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassTOSpawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ASBZAICharacter_SpawnLootOnCharacter_Statics::NewProp_ClassTOSpawn = { "ClassTOSpawn", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventSpawnLootOnCharacter_Parms, ClassTOSpawn), Z_Construct_UClass_ASBZCarriedStaticInteractionActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICharacter_SpawnLootOnCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICharacter_eventSpawnLootOnCharacter_Parms, ReturnValue), Z_Construct_UClass_ASBZCarriedStaticInteractionActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICharacter_SpawnLootOnCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_SpawnLootOnCharacter_Statics::NewProp_ClassTOSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICharacter_SpawnLootOnCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICharacter_SpawnLootOnCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICharacter_SpawnLootOnCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICharacter, nullptr, "SpawnLootOnCharacter", nullptr, nullptr, sizeof(SBZAICharacter_eventSpawnLootOnCharacter_Parms), Z_Construct_UFunction_ASBZAICharacter_SpawnLootOnCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_SpawnLootOnCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICharacter_SpawnLootOnCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICharacter_SpawnLootOnCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICharacter_SpawnLootOnCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICharacter_SpawnLootOnCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZAICharacter_NoRegister()
	{
		return ASBZAICharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAICharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockGoDownTagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlockGoDownTagContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletMagnetismSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BulletMagnetismSocketName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StickyAimSocketNameArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StickyAimSocketNameArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StickyAimSocketNameArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBehaviorCategoryChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBehaviorCategoryChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHogTiedChangedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHogTiedChangedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHumanShieldChangedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHumanShieldChangedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerMeleeHitReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerMeleeHitReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEnabledAsObjectiveDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEnabledAsObjectiveDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownOnGroundEyeHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DownOnGroundEyeHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostageState_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HostageState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSurrendered_MetaData[];
#endif
		static void NewProp_bIsSurrendered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSurrendered;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentBehaviorCategory_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBehaviorCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentBehaviorCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SensorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SensorComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoutTargetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShoutTargetComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquipmentData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HumanShieldData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HumanShieldData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurrenderedHumanShieldData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SurrenderedHumanShieldData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurrenderedUtilityData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SurrenderedUtilityData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoPickupAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AmmoPickupAsset;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlaceablePickupAssetArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaceablePickupAssetArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlaceablePickupAssetArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaceableSpawnForwardOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlaceableSpawnForwardOffset;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TradeHostagePickupAssetArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TradeHostagePickupAssetArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TradeHostagePickupAssetArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlertnessDataComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AlertnessDataComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MarkerComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HelmetPopper_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HelmetPopper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpecialType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalAnimationComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicalAnimationComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanRunWhileFocusing_MetaData[];
#endif
		static void NewProp_bCanRunWhileFocusing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanRunWhileFocusing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldTelegraphAttack_MetaData[];
#endif
		static void NewProp_bShouldTelegraphAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldTelegraphAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreferredCoverDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreferredCoverDist;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InteractionActions_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InteractionActions_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InteractionActions_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_InteractionActions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TradeOutline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TradeOutline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleasedOutline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReleasedOutline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveOutline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectiveOutline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveMarker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectiveMarker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveMarkerOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectiveMarkerOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveMarkerSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ObjectiveMarkerSocketName;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_StartRoomLabel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartRoomLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StartRoomLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsObjectiveState_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AsObjectiveState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VariationData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariationCategoryIndexIntervals_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VariationCategoryIndexIntervals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastInteractorCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastInteractorCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotBlockedDownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShotBlockedDownTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurrenderedNavFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SurrenderedNavFilter;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagToStanceMappingTable_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagToStanceMappingTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TagToStanceMappingTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTelegraphAttack_MetaData[];
#endif
		static void NewProp_bTelegraphAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTelegraphAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireWeaponComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireWeaponComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnKilledComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnKilledComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TauntComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TauntComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HumanShieldTaken_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HumanShieldTaken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HumanShieldReleased_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HumanShieldReleased;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeadBodyPOIClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DeadBodyPOIClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostagePOIClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HostagePOIClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HumanShieldPOIClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HumanShieldPOIClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeadBodyPOIInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeadBodyPOIInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostagePOIInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HostagePOIInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HumanShieldPOIInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HumanShieldPOIInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsValidHumanShield_MetaData[];
#endif
		static void NewProp_bIsValidHumanShield_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsValidHumanShield;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPagerEnabled_MetaData[];
#endif
		static void NewProp_bIsPagerEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPagerEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPagerEnabledOnce_MetaData[];
#endif
		static void NewProp_bIsPagerEnabledOnce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPagerEnabledOnce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCarriedKillInteraction_MetaData[];
#endif
		static void NewProp_bIsCarriedKillInteraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCarriedKillInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsBeingHogTied_MetaData[];
#endif
		static void NewProp_bIsBeingHogTied_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBeingHogTied;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBeenHogtied_MetaData[];
#endif
		static void NewProp_bHasBeenHogtied_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBeenHogtied;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInCover_MetaData[];
#endif
		static void NewProp_bIsInCover_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInCover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsCoverPose_MetaData[];
#endif
		static void NewProp_bWantsCoverPose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsCoverPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInDownOnGroundPose_MetaData[];
#endif
		static void NewProp_bIsInDownOnGroundPose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInDownOnGroundPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPagerSnatched_MetaData[];
#endif
		static void NewProp_bIsPagerSnatched_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPagerSnatched;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsScramblerSignalScanSkillActive_MetaData[];
#endif
		static void NewProp_bIsScramblerSignalScanSkillActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsScramblerSignalScanSkillActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasGuardBehavior_MetaData[];
#endif
		static void NewProp_bHasGuardBehavior_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasGuardBehavior;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHogTiedOnce_MetaData[];
#endif
		static void NewProp_bIsHogTiedOnce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHogTiedOnce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastTieHandsInstigatorPlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastTieHandsInstigatorPlayerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PagerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PagerData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PagerTriggeredCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PagerTriggeredCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PagerSnatchedInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PagerSnatchedInteractor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavQueryFilterOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NavQueryFilterOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidTargetDefeatStates_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_ValidTargetDefeatStates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanShootDownedIfFired_MetaData[];
#endif
		static void NewProp_bCanShootDownedIfFired_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanShootDownedIfFired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackedGameplayEffectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HackedGameplayEffectClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachedLoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachedLoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLifeActionTriggerVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentLifeActionTriggerVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocallyDamagedByPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocallyDamagedByPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingMeleeDownOnGoundInstigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PendingMeleeDownOnGoundInstigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurrenderInstigatorPlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SurrenderInstigatorPlayerState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VariationCategory_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariationCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VariationCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkGuard_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MarkGuard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkSpecials_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MarkSpecials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkEnemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MarkEnemy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatisticsMarkEnemyCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatisticsMarkEnemyCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatisticsMarkEnemyMicroCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatisticsMarkEnemyMicroCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBeSeenByThermalScope_MetaData[];
#endif
		static void NewProp_bCanBeSeenByThermalScope_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBeSeenByThermalScope;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_CQCSpecialistPinPullerDoneSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CQCSpecialistPinPullerDoneSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_CQCSpecialistPinPullerDoneSet;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_CQCSpecialistSoftAssetsDoneSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CQCSpecialistSoftAssetsDoneSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_CQCSpecialistSoftAssetsDoneSet;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TripperMarkedInfoArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TripperMarkedInfoArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TripperMarkedInfoArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillInstigatorController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KillInstigatorController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAICharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZAIBaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZAICharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZAICharacter_BP_OnTagReactionPlayed, "BP_OnTagReactionPlayed" }, // 2674023161
		{ &Z_Construct_UFunction_ASBZAICharacter_DisableAsObjective, "DisableAsObjective" }, // 787611904
		{ &Z_Construct_UFunction_ASBZAICharacter_EnableAsObjective, "EnableAsObjective" }, // 3469939051
		{ &Z_Construct_UFunction_ASBZAICharacter_Multicast_DropAttachedLoot, "Multicast_DropAttachedLoot" }, // 191306910
		{ &Z_Construct_UFunction_ASBZAICharacter_Multicast_HostageState, "Multicast_HostageState" }, // 2452012979
		{ &Z_Construct_UFunction_ASBZAICharacter_Multicast_RoomScanning, "Multicast_RoomScanning" }, // 873920618
		{ &Z_Construct_UFunction_ASBZAICharacter_Multicast_SetAsObjectiveState, "Multicast_SetAsObjectiveState" }, // 2391047717
		{ &Z_Construct_UFunction_ASBZAICharacter_Multicast_SetBehaviorCategory, "Multicast_SetBehaviorCategory" }, // 3723831194
		{ &Z_Construct_UFunction_ASBZAICharacter_Multicast_SetHacked, "Multicast_SetHacked" }, // 1839981444
		{ &Z_Construct_UFunction_ASBZAICharacter_Multicast_SetInCover, "Multicast_SetInCover" }, // 1137492928
		{ &Z_Construct_UFunction_ASBZAICharacter_Multicast_SetVariationCategory, "Multicast_SetVariationCategory" }, // 2157802972
		{ &Z_Construct_UFunction_ASBZAICharacter_Multicast_StopRoomScanning, "Multicast_StopRoomScanning" }, // 4143568061
		{ &Z_Construct_UFunction_ASBZAICharacter_Multicast_Surrender, "Multicast_Surrender" }, // 2371944739
		{ &Z_Construct_UFunction_ASBZAICharacter_OnAckAbortInteraction, "OnAckAbortInteraction" }, // 1621047174
		{ &Z_Construct_UFunction_ASBZAICharacter_OnAckCompleteInteraction, "OnAckCompleteInteraction" }, // 2520585659
		{ &Z_Construct_UFunction_ASBZAICharacter_OnAckRejectedPredictedInteraction, "OnAckRejectedPredictedInteraction" }, // 1143148808
		{ &Z_Construct_UFunction_ASBZAICharacter_OnAttachedLootTaken, "OnAttachedLootTaken" }, // 2168253000
		{ &Z_Construct_UFunction_ASBZAICharacter_OnEndInteraction, "OnEndInteraction" }, // 4155577440
		{ &Z_Construct_UFunction_ASBZAICharacter_OnNegotiationTradeTypeChanged, "OnNegotiationTradeTypeChanged" }, // 903064810
		{ &Z_Construct_UFunction_ASBZAICharacter_OnPredictedAbortInteraction, "OnPredictedAbortInteraction" }, // 4291328899
		{ &Z_Construct_UFunction_ASBZAICharacter_OnPredictedEndInteraction, "OnPredictedEndInteraction" }, // 2793010975
		{ &Z_Construct_UFunction_ASBZAICharacter_OnRep_AsObjectiveState, "OnRep_AsObjectiveState" }, // 248776806
		{ &Z_Construct_UFunction_ASBZAICharacter_OnRep_BehaviorCategory, "OnRep_BehaviorCategory" }, // 358827154
		{ &Z_Construct_UFunction_ASBZAICharacter_OnRep_HostageState, "OnRep_HostageState" }, // 2595030257
		{ &Z_Construct_UFunction_ASBZAICharacter_OnRep_IsSurrendered, "OnRep_IsSurrendered" }, // 1195112797
		{ &Z_Construct_UFunction_ASBZAICharacter_OnRep_TelegraphAttack, "OnRep_TelegraphAttack" }, // 681920404
		{ &Z_Construct_UFunction_ASBZAICharacter_OnRep_VariationCategory, "OnRep_VariationCategory" }, // 2230757989
		{ &Z_Construct_UFunction_ASBZAICharacter_OnServerCompleteInteraction, "OnServerCompleteInteraction" }, // 578655
		{ &Z_Construct_UFunction_ASBZAICharacter_OnServerECMCountChanged, "OnServerECMCountChanged" }, // 666602434
		{ &Z_Construct_UFunction_ASBZAICharacter_OnServerEndInteraction, "OnServerEndInteraction" }, // 2951616944
		{ &Z_Construct_UFunction_ASBZAICharacter_OnServerStartInteraction, "OnServerStartInteraction" }, // 31944344
		{ &Z_Construct_UFunction_ASBZAICharacter_OnStartInteraction, "OnStartInteraction" }, // 2635974803
		{ &Z_Construct_UFunction_ASBZAICharacter_RemoveMarkerFromAsObjective, "RemoveMarkerFromAsObjective" }, // 2533395431
		{ &Z_Construct_UFunction_ASBZAICharacter_SetStartRoomLabel, "SetStartRoomLabel" }, // 1029853754
		{ &Z_Construct_UFunction_ASBZAICharacter_SpawnLootOnCharacter, "SpawnLootOnCharacter" }, // 2686593455
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SBZAICharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_BlockGoDownTagContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_BlockGoDownTagContainer = { "BlockGoDownTagContainer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, BlockGoDownTagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_BlockGoDownTagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_BlockGoDownTagContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_BulletMagnetismSocketName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_BulletMagnetismSocketName = { "BulletMagnetismSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, BulletMagnetismSocketName), METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_BulletMagnetismSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_BulletMagnetismSocketName_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_StickyAimSocketNameArray_Inner = { "StickyAimSocketNameArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_StickyAimSocketNameArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_StickyAimSocketNameArray = { "StickyAimSocketNameArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, StickyAimSocketNameArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_StickyAimSocketNameArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_StickyAimSocketNameArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_OnBehaviorCategoryChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_OnBehaviorCategoryChanged = { "OnBehaviorCategoryChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, OnBehaviorCategoryChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZBehaviorCategoryChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_OnBehaviorCategoryChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_OnBehaviorCategoryChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_OnHogTiedChangedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_OnHogTiedChangedDelegate = { "OnHogTiedChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, OnHogTiedChangedDelegate), Z_Construct_UDelegateFunction_Starbreeze_SBZOnHogTied__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_OnHogTiedChangedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_OnHogTiedChangedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_OnHumanShieldChangedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_OnHumanShieldChangedDelegate = { "OnHumanShieldChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, OnHumanShieldChangedDelegate), Z_Construct_UDelegateFunction_Starbreeze_SBZOnHumanShield__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_OnHumanShieldChangedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_OnHumanShieldChangedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_OnPlayerMeleeHitReceived_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_OnPlayerMeleeHitReceived = { "OnPlayerMeleeHitReceived", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, OnPlayerMeleeHitReceived), Z_Construct_UDelegateFunction_Starbreeze_SBZOnPlayerMeleeHitReceived__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_OnPlayerMeleeHitReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_OnPlayerMeleeHitReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_OnEnabledAsObjectiveDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_OnEnabledAsObjectiveDelegate = { "OnEnabledAsObjectiveDelegate", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, OnEnabledAsObjectiveDelegate), Z_Construct_UDelegateFunction_Starbreeze_SBZOnEnabledAsObjective__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_OnEnabledAsObjectiveDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_OnEnabledAsObjectiveDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_DownOnGroundEyeHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_DownOnGroundEyeHeight = { "DownOnGroundEyeHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, DownOnGroundEyeHeight), METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_DownOnGroundEyeHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_DownOnGroundEyeHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HostageState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HostageState = { "HostageState", "OnRep_HostageState", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, HostageState), nullptr, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HostageState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HostageState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsSurrendered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsSurrendered_SetBit(void* Obj)
	{
		((ASBZAICharacter*)Obj)->bIsSurrendered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsSurrendered = { "bIsSurrendered", "OnRep_IsSurrendered", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZAICharacter), &Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsSurrendered_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsSurrendered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsSurrendered_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_CurrentBehaviorCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_CurrentBehaviorCategory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_CurrentBehaviorCategory = { "CurrentBehaviorCategory", "OnRep_BehaviorCategory", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, CurrentBehaviorCategory), Z_Construct_UEnum_Starbreeze_ESBZAIBehaviorCategory, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_CurrentBehaviorCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_CurrentBehaviorCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_SensorComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_SensorComponent = { "SensorComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, SensorComponent), Z_Construct_UClass_USBZSensorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_SensorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_SensorComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ShoutTargetComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ShoutTargetComponent = { "ShoutTargetComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, ShoutTargetComponent), Z_Construct_UClass_USBZShoutTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ShoutTargetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ShoutTargetComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_EquipmentData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_EquipmentData = { "EquipmentData", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, EquipmentData), Z_Construct_UClass_USBZAIEquipmentData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_EquipmentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_EquipmentData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HumanShieldData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HumanShieldData = { "HumanShieldData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, HumanShieldData), Z_Construct_UClass_USBZHumanShieldData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HumanShieldData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HumanShieldData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_SurrenderedHumanShieldData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_SurrenderedHumanShieldData = { "SurrenderedHumanShieldData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, SurrenderedHumanShieldData), Z_Construct_UClass_USBZHumanShieldData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_SurrenderedHumanShieldData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_SurrenderedHumanShieldData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_SurrenderedUtilityData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_SurrenderedUtilityData = { "SurrenderedUtilityData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, SurrenderedUtilityData), Z_Construct_UClass_USBZAIUtilityData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_SurrenderedUtilityData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_SurrenderedUtilityData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_AmmoPickupAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_AmmoPickupAsset = { "AmmoPickupAsset", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, AmmoPickupAsset), Z_Construct_UClass_ASBZAmmoPickup_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_AmmoPickupAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_AmmoPickupAsset_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PlaceablePickupAssetArray_Inner = { "PlaceablePickupAssetArray", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZPlaceableCharges_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PlaceablePickupAssetArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PlaceablePickupAssetArray = { "PlaceablePickupAssetArray", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, PlaceablePickupAssetArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PlaceablePickupAssetArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PlaceablePickupAssetArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PlaceableSpawnForwardOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PlaceableSpawnForwardOffset = { "PlaceableSpawnForwardOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, PlaceableSpawnForwardOffset), METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PlaceableSpawnForwardOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PlaceableSpawnForwardOffset_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_TradeHostagePickupAssetArray_Inner = { "TradeHostagePickupAssetArray", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZPlaceableCharges_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_TradeHostagePickupAssetArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_TradeHostagePickupAssetArray = { "TradeHostagePickupAssetArray", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, TradeHostagePickupAssetArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_TradeHostagePickupAssetArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_TradeHostagePickupAssetArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_AlertnessDataComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_AlertnessDataComponent = { "AlertnessDataComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, AlertnessDataComponent), Z_Construct_UClass_UDEPRECATED_SBZAlertnessDataComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_AlertnessDataComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_AlertnessDataComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_MarkerComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_MarkerComponent = { "MarkerComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, MarkerComponent), Z_Construct_UClass_USBZMarkerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_MarkerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_MarkerComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HelmetPopper_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HelmetPopper = { "HelmetPopper", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, HelmetPopper), Z_Construct_UClass_USBZHelmetPopper_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HelmetPopper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HelmetPopper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_SpecialType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_SpecialType = { "SpecialType", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, SpecialType), Z_Construct_UClass_USBZSpecialAIComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_SpecialType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_SpecialType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PhysicalAnimationComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PhysicalAnimationComponent = { "PhysicalAnimationComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, PhysicalAnimationComponent), Z_Construct_UClass_UPhysicalAnimationComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PhysicalAnimationComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PhysicalAnimationComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bCanRunWhileFocusing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bCanRunWhileFocusing_SetBit(void* Obj)
	{
		((ASBZAICharacter*)Obj)->bCanRunWhileFocusing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bCanRunWhileFocusing = { "bCanRunWhileFocusing", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZAICharacter), &Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bCanRunWhileFocusing_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bCanRunWhileFocusing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bCanRunWhileFocusing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bShouldTelegraphAttack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bShouldTelegraphAttack_SetBit(void* Obj)
	{
		((ASBZAICharacter*)Obj)->bShouldTelegraphAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bShouldTelegraphAttack = { "bShouldTelegraphAttack", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZAICharacter), &Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bShouldTelegraphAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bShouldTelegraphAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bShouldTelegraphAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PreferredCoverDist_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PreferredCoverDist = { "PreferredCoverDist", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, PreferredCoverDist), METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PreferredCoverDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PreferredCoverDist_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_InteractionActions_ValueProp = { "InteractionActions", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZAIAction_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_InteractionActions_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_InteractionActions_Key_KeyProp = { "InteractionActions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZInteractionAction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_InteractionActions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_InteractionActions = { "InteractionActions", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, InteractionActions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_InteractionActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_InteractionActions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_TradeOutline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_TradeOutline = { "TradeOutline", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, TradeOutline), Z_Construct_UClass_USBZOutlineAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_TradeOutline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_TradeOutline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ReleasedOutline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ReleasedOutline = { "ReleasedOutline", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, ReleasedOutline), Z_Construct_UClass_USBZOutlineAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ReleasedOutline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ReleasedOutline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ObjectiveOutline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ObjectiveOutline = { "ObjectiveOutline", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, ObjectiveOutline), Z_Construct_UClass_USBZOutlineAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ObjectiveOutline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ObjectiveOutline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ObjectiveMarker_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ObjectiveMarker = { "ObjectiveMarker", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, ObjectiveMarker), Z_Construct_UClass_USBZMarkerDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ObjectiveMarker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ObjectiveMarker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ObjectiveMarkerOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ObjectiveMarkerOffset = { "ObjectiveMarkerOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, ObjectiveMarkerOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ObjectiveMarkerOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ObjectiveMarkerOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ObjectiveMarkerSocketName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ObjectiveMarkerSocketName = { "ObjectiveMarkerSocketName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, ObjectiveMarkerSocketName), METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ObjectiveMarkerSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ObjectiveMarkerSocketName_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_StartRoomLabel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_StartRoomLabel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_StartRoomLabel = { "StartRoomLabel", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, StartRoomLabel), Z_Construct_UEnum_Starbreeze_ESBZRoomLabel, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_StartRoomLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_StartRoomLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_AsObjectiveState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_AsObjectiveState = { "AsObjectiveState", "OnRep_AsObjectiveState", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, AsObjectiveState), nullptr, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_AsObjectiveState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_AsObjectiveState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_VariationData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_VariationData = { "VariationData", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, VariationData), Z_Construct_UClass_USBZVariationSetData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_VariationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_VariationData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_VariationCategoryIndexIntervals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_VariationCategoryIndexIntervals = { "VariationCategoryIndexIntervals", nullptr, (EPropertyFlags)0x0020080000000021, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(VariationCategoryIndexIntervals, ASBZAICharacter), STRUCT_OFFSET(ASBZAICharacter, VariationCategoryIndexIntervals), Z_Construct_UScriptStruct_FInt32Interval, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_VariationCategoryIndexIntervals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_VariationCategoryIndexIntervals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_LastInteractorCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_LastInteractorCharacter = { "LastInteractorCharacter", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, LastInteractorCharacter), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_LastInteractorCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_LastInteractorCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ShotBlockedDownTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ShotBlockedDownTime = { "ShotBlockedDownTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, ShotBlockedDownTime), METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ShotBlockedDownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ShotBlockedDownTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_SurrenderedNavFilter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_SurrenderedNavFilter = { "SurrenderedNavFilter", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, SurrenderedNavFilter), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_SurrenderedNavFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_SurrenderedNavFilter_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_TagToStanceMappingTable_Inner = { "TagToStanceMappingTable", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZTagStanceMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_TagToStanceMappingTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_TagToStanceMappingTable = { "TagToStanceMappingTable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, TagToStanceMappingTable), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_TagToStanceMappingTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_TagToStanceMappingTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bTelegraphAttack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bTelegraphAttack_SetBit(void* Obj)
	{
		((ASBZAICharacter*)Obj)->bTelegraphAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bTelegraphAttack = { "bTelegraphAttack", "OnRep_TelegraphAttack", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZAICharacter), &Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bTelegraphAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bTelegraphAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bTelegraphAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_FireWeaponComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_FireWeaponComment = { "FireWeaponComment", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, FireWeaponComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_FireWeaponComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_FireWeaponComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_OnKilledComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_OnKilledComment = { "OnKilledComment", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, OnKilledComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_OnKilledComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_OnKilledComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_TauntComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_TauntComment = { "TauntComment", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, TauntComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_TauntComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_TauntComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HumanShieldTaken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HumanShieldTaken = { "HumanShieldTaken", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, HumanShieldTaken), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HumanShieldTaken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HumanShieldTaken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HumanShieldReleased_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HumanShieldReleased = { "HumanShieldReleased", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, HumanShieldReleased), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HumanShieldReleased_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HumanShieldReleased_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_DeadBodyPOIClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_DeadBodyPOIClass = { "DeadBodyPOIClass", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, DeadBodyPOIClass), Z_Construct_UClass_ASBZAIPointOfInterestDeadBody_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_DeadBodyPOIClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_DeadBodyPOIClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HostagePOIClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HostagePOIClass = { "HostagePOIClass", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, HostagePOIClass), Z_Construct_UClass_ASBZAIPointOfInterest_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HostagePOIClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HostagePOIClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HumanShieldPOIClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HumanShieldPOIClass = { "HumanShieldPOIClass", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, HumanShieldPOIClass), Z_Construct_UClass_ASBZAIPointOfInterest_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HumanShieldPOIClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HumanShieldPOIClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_DeadBodyPOIInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_DeadBodyPOIInstance = { "DeadBodyPOIInstance", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, DeadBodyPOIInstance), Z_Construct_UClass_ASBZAIPointOfInterestDeadBody_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_DeadBodyPOIInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_DeadBodyPOIInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HostagePOIInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HostagePOIInstance = { "HostagePOIInstance", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, HostagePOIInstance), Z_Construct_UClass_ASBZAIPointOfInterest_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HostagePOIInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HostagePOIInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HumanShieldPOIInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HumanShieldPOIInstance = { "HumanShieldPOIInstance", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, HumanShieldPOIInstance), Z_Construct_UClass_ASBZAIPointOfInterest_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HumanShieldPOIInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HumanShieldPOIInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsValidHumanShield_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsValidHumanShield_SetBit(void* Obj)
	{
		((ASBZAICharacter*)Obj)->bIsValidHumanShield = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsValidHumanShield = { "bIsValidHumanShield", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZAICharacter), &Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsValidHumanShield_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsValidHumanShield_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsValidHumanShield_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsPagerEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsPagerEnabled_SetBit(void* Obj)
	{
		((ASBZAICharacter*)Obj)->bIsPagerEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsPagerEnabled = { "bIsPagerEnabled", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZAICharacter), &Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsPagerEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsPagerEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsPagerEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsPagerEnabledOnce_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsPagerEnabledOnce_SetBit(void* Obj)
	{
		((ASBZAICharacter*)Obj)->bIsPagerEnabledOnce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsPagerEnabledOnce = { "bIsPagerEnabledOnce", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZAICharacter), &Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsPagerEnabledOnce_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsPagerEnabledOnce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsPagerEnabledOnce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsCarriedKillInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsCarriedKillInteraction_SetBit(void* Obj)
	{
		((ASBZAICharacter*)Obj)->bIsCarriedKillInteraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsCarriedKillInteraction = { "bIsCarriedKillInteraction", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZAICharacter), &Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsCarriedKillInteraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsCarriedKillInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsCarriedKillInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsBeingHogTied_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsBeingHogTied_SetBit(void* Obj)
	{
		((ASBZAICharacter*)Obj)->bIsBeingHogTied = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsBeingHogTied = { "bIsBeingHogTied", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZAICharacter), &Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsBeingHogTied_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsBeingHogTied_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsBeingHogTied_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bHasBeenHogtied_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bHasBeenHogtied_SetBit(void* Obj)
	{
		((ASBZAICharacter*)Obj)->bHasBeenHogtied = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bHasBeenHogtied = { "bHasBeenHogtied", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZAICharacter), &Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bHasBeenHogtied_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bHasBeenHogtied_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bHasBeenHogtied_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsInCover_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsInCover_SetBit(void* Obj)
	{
		((ASBZAICharacter*)Obj)->bIsInCover = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsInCover = { "bIsInCover", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZAICharacter), &Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsInCover_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsInCover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsInCover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bWantsCoverPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bWantsCoverPose_SetBit(void* Obj)
	{
		((ASBZAICharacter*)Obj)->bWantsCoverPose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bWantsCoverPose = { "bWantsCoverPose", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZAICharacter), &Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bWantsCoverPose_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bWantsCoverPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bWantsCoverPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsInDownOnGroundPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsInDownOnGroundPose_SetBit(void* Obj)
	{
		((ASBZAICharacter*)Obj)->bIsInDownOnGroundPose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsInDownOnGroundPose = { "bIsInDownOnGroundPose", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZAICharacter), &Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsInDownOnGroundPose_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsInDownOnGroundPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsInDownOnGroundPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsPagerSnatched_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsPagerSnatched_SetBit(void* Obj)
	{
		((ASBZAICharacter*)Obj)->bIsPagerSnatched = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsPagerSnatched = { "bIsPagerSnatched", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZAICharacter), &Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsPagerSnatched_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsPagerSnatched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsPagerSnatched_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsScramblerSignalScanSkillActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsScramblerSignalScanSkillActive_SetBit(void* Obj)
	{
		((ASBZAICharacter*)Obj)->bIsScramblerSignalScanSkillActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsScramblerSignalScanSkillActive = { "bIsScramblerSignalScanSkillActive", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZAICharacter), &Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsScramblerSignalScanSkillActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsScramblerSignalScanSkillActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsScramblerSignalScanSkillActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bHasGuardBehavior_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bHasGuardBehavior_SetBit(void* Obj)
	{
		((ASBZAICharacter*)Obj)->bHasGuardBehavior = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bHasGuardBehavior = { "bHasGuardBehavior", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZAICharacter), &Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bHasGuardBehavior_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bHasGuardBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bHasGuardBehavior_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsHogTiedOnce_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsHogTiedOnce_SetBit(void* Obj)
	{
		((ASBZAICharacter*)Obj)->bIsHogTiedOnce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsHogTiedOnce = { "bIsHogTiedOnce", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASBZAICharacter), &Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsHogTiedOnce_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsHogTiedOnce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsHogTiedOnce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_LastTieHandsInstigatorPlayerState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_LastTieHandsInstigatorPlayerState = { "LastTieHandsInstigatorPlayerState", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, LastTieHandsInstigatorPlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_LastTieHandsInstigatorPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_LastTieHandsInstigatorPlayerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PagerData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PagerData = { "PagerData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, PagerData), Z_Construct_UClass_USBZPagerData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PagerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PagerData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PagerTriggeredCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PagerTriggeredCount = { "PagerTriggeredCount", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, PagerTriggeredCount), METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PagerTriggeredCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PagerTriggeredCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PagerSnatchedInteractor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PagerSnatchedInteractor = { "PagerSnatchedInteractor", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, PagerSnatchedInteractor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PagerSnatchedInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PagerSnatchedInteractor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_NavQueryFilterOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_NavQueryFilterOverride = { "NavQueryFilterOverride", nullptr, (EPropertyFlags)0x0044000000002005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, NavQueryFilterOverride), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_NavQueryFilterOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_NavQueryFilterOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ValidTargetDefeatStates_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ValidTargetDefeatStates = { "ValidTargetDefeatStates", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, ValidTargetDefeatStates), METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ValidTargetDefeatStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ValidTargetDefeatStates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bCanShootDownedIfFired_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bCanShootDownedIfFired_SetBit(void* Obj)
	{
		((ASBZAICharacter*)Obj)->bCanShootDownedIfFired = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bCanShootDownedIfFired = { "bCanShootDownedIfFired", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZAICharacter), &Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bCanShootDownedIfFired_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bCanShootDownedIfFired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bCanShootDownedIfFired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HackedGameplayEffectClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HackedGameplayEffectClass = { "HackedGameplayEffectClass", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, HackedGameplayEffectClass), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HackedGameplayEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HackedGameplayEffectClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_AttachedLoot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_AttachedLoot = { "AttachedLoot", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, AttachedLoot), Z_Construct_UClass_ASBZCarriedStaticInteractionActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_AttachedLoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_AttachedLoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_CurrentLifeActionTriggerVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_CurrentLifeActionTriggerVolume = { "CurrentLifeActionTriggerVolume", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, CurrentLifeActionTriggerVolume), Z_Construct_UClass_ASBZLifeActionTriggerVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_CurrentLifeActionTriggerVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_CurrentLifeActionTriggerVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_LocallyDamagedByPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_LocallyDamagedByPlayer = { "LocallyDamagedByPlayer", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, LocallyDamagedByPlayer), Z_Construct_UClass_ASBZPlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_LocallyDamagedByPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_LocallyDamagedByPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PendingMeleeDownOnGoundInstigator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PendingMeleeDownOnGoundInstigator = { "PendingMeleeDownOnGoundInstigator", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, PendingMeleeDownOnGoundInstigator), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PendingMeleeDownOnGoundInstigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PendingMeleeDownOnGoundInstigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_SurrenderInstigatorPlayerState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_SurrenderInstigatorPlayerState = { "SurrenderInstigatorPlayerState", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, SurrenderInstigatorPlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_SurrenderInstigatorPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_SurrenderInstigatorPlayerState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_VariationCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_VariationCategory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_VariationCategory = { "VariationCategory", "OnRep_VariationCategory", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, VariationCategory), Z_Construct_UEnum_Starbreeze_ESBZAICharacterVariationCategory, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_VariationCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_VariationCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_MarkGuard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_MarkGuard = { "MarkGuard", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, MarkGuard), METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_MarkGuard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_MarkGuard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_MarkSpecials_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_MarkSpecials = { "MarkSpecials", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, MarkSpecials), METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_MarkSpecials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_MarkSpecials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_MarkEnemy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_MarkEnemy = { "MarkEnemy", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, MarkEnemy), METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_MarkEnemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_MarkEnemy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_StatisticsMarkEnemyCamera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_StatisticsMarkEnemyCamera = { "StatisticsMarkEnemyCamera", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, StatisticsMarkEnemyCamera), METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_StatisticsMarkEnemyCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_StatisticsMarkEnemyCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_StatisticsMarkEnemyMicroCamera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_StatisticsMarkEnemyMicroCamera = { "StatisticsMarkEnemyMicroCamera", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, StatisticsMarkEnemyMicroCamera), METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_StatisticsMarkEnemyMicroCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_StatisticsMarkEnemyMicroCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bCanBeSeenByThermalScope_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bCanBeSeenByThermalScope_SetBit(void* Obj)
	{
		((ASBZAICharacter*)Obj)->bCanBeSeenByThermalScope = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bCanBeSeenByThermalScope = { "bCanBeSeenByThermalScope", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZAICharacter), &Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bCanBeSeenByThermalScope_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bCanBeSeenByThermalScope_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bCanBeSeenByThermalScope_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_CQCSpecialistPinPullerDoneSet_ElementProp = { "CQCSpecialistPinPullerDoneSet", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_CQCSpecialistPinPullerDoneSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_CQCSpecialistPinPullerDoneSet = { "CQCSpecialistPinPullerDoneSet", nullptr, (EPropertyFlags)0x0040000000002001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, CQCSpecialistPinPullerDoneSet), METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_CQCSpecialistPinPullerDoneSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_CQCSpecialistPinPullerDoneSet_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_CQCSpecialistSoftAssetsDoneSet_ElementProp = { "CQCSpecialistSoftAssetsDoneSet", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_CQCSpecialistSoftAssetsDoneSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_CQCSpecialistSoftAssetsDoneSet = { "CQCSpecialistSoftAssetsDoneSet", nullptr, (EPropertyFlags)0x0040000000002001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, CQCSpecialistSoftAssetsDoneSet), METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_CQCSpecialistSoftAssetsDoneSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_CQCSpecialistSoftAssetsDoneSet_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_TripperMarkedInfoArray_Inner = { "TripperMarkedInfoArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZTripperMarkedInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_TripperMarkedInfoArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_TripperMarkedInfoArray = { "TripperMarkedInfoArray", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, TripperMarkedInfoArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_TripperMarkedInfoArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_TripperMarkedInfoArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_KillInstigatorController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacter" },
		{ "ModuleRelativePath", "Public/SBZAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_KillInstigatorController = { "KillInstigatorController", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICharacter, KillInstigatorController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_KillInstigatorController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_KillInstigatorController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZAICharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_BlockGoDownTagContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_BulletMagnetismSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_StickyAimSocketNameArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_StickyAimSocketNameArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_OnBehaviorCategoryChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_OnHogTiedChangedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_OnHumanShieldChangedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_OnPlayerMeleeHitReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_OnEnabledAsObjectiveDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_DownOnGroundEyeHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HostageState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsSurrendered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_CurrentBehaviorCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_CurrentBehaviorCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_SensorComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ShoutTargetComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_EquipmentData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HumanShieldData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_SurrenderedHumanShieldData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_SurrenderedUtilityData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_AmmoPickupAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PlaceablePickupAssetArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PlaceablePickupAssetArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PlaceableSpawnForwardOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_TradeHostagePickupAssetArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_TradeHostagePickupAssetArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_AlertnessDataComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_MarkerComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HelmetPopper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_SpecialType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PhysicalAnimationComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bCanRunWhileFocusing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bShouldTelegraphAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PreferredCoverDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_InteractionActions_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_InteractionActions_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_InteractionActions_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_InteractionActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_TradeOutline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ReleasedOutline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ObjectiveOutline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ObjectiveMarker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ObjectiveMarkerOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ObjectiveMarkerSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_StartRoomLabel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_StartRoomLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_AsObjectiveState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_VariationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_VariationCategoryIndexIntervals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_LastInteractorCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ShotBlockedDownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_SurrenderedNavFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_TagToStanceMappingTable_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_TagToStanceMappingTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bTelegraphAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_FireWeaponComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_OnKilledComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_TauntComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HumanShieldTaken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HumanShieldReleased,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_DeadBodyPOIClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HostagePOIClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HumanShieldPOIClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_DeadBodyPOIInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HostagePOIInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HumanShieldPOIInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsValidHumanShield,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsPagerEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsPagerEnabledOnce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsCarriedKillInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsBeingHogTied,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bHasBeenHogtied,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsInCover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bWantsCoverPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsInDownOnGroundPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsPagerSnatched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsScramblerSignalScanSkillActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bHasGuardBehavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bIsHogTiedOnce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_LastTieHandsInstigatorPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PagerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PagerTriggeredCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PagerSnatchedInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_NavQueryFilterOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_ValidTargetDefeatStates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bCanShootDownedIfFired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_HackedGameplayEffectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_AttachedLoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_CurrentLifeActionTriggerVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_LocallyDamagedByPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_PendingMeleeDownOnGoundInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_SurrenderInstigatorPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_VariationCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_VariationCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_MarkGuard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_MarkSpecials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_MarkEnemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_StatisticsMarkEnemyCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_StatisticsMarkEnemyMicroCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_bCanBeSeenByThermalScope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_CQCSpecialistPinPullerDoneSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_CQCSpecialistPinPullerDoneSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_CQCSpecialistSoftAssetsDoneSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_CQCSpecialistSoftAssetsDoneSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_TripperMarkedInfoArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_TripperMarkedInfoArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICharacter_Statics::NewProp_KillInstigatorController,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZAICharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZAIVisualDetectorInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAICharacter, ISBZAIVisualDetectorInterface), false },
			{ Z_Construct_UClass_USBZMarkableInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAICharacter, ISBZMarkableInterface), false },
			{ Z_Construct_UClass_USBZAutoAimInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAICharacter, ISBZAutoAimInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAICharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAICharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAICharacter_Statics::ClassParams = {
		&ASBZAICharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZAICharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAICharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAICharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAICharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAICharacter, 625459629);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAICharacter>()
	{
		return ASBZAICharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAICharacter(Z_Construct_UClass_ASBZAICharacter, &ASBZAICharacter::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAICharacter"), false, nullptr, nullptr, nullptr);

	void ASBZAICharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_HostageState(TEXT("HostageState"));
		static const FName Name_bIsSurrendered(TEXT("bIsSurrendered"));
		static const FName Name_CurrentBehaviorCategory(TEXT("CurrentBehaviorCategory"));
		static const FName Name_EquipmentData(TEXT("EquipmentData"));
		static const FName Name_AsObjectiveState(TEXT("AsObjectiveState"));
		static const FName Name_VariationData(TEXT("VariationData"));
		static const FName Name_VariationCategoryIndexIntervals(TEXT("VariationCategoryIndexIntervals"));
		static const FName Name_bTelegraphAttack(TEXT("bTelegraphAttack"));
		static const FName Name_VariationCategory(TEXT("VariationCategory"));

		const bool bIsValid = true
			&& Name_HostageState == ClassReps[(int32)ENetFields_Private::HostageState].Property->GetFName()
			&& Name_bIsSurrendered == ClassReps[(int32)ENetFields_Private::bIsSurrendered].Property->GetFName()
			&& Name_CurrentBehaviorCategory == ClassReps[(int32)ENetFields_Private::CurrentBehaviorCategory].Property->GetFName()
			&& Name_EquipmentData == ClassReps[(int32)ENetFields_Private::EquipmentData].Property->GetFName()
			&& Name_AsObjectiveState == ClassReps[(int32)ENetFields_Private::AsObjectiveState].Property->GetFName()
			&& Name_VariationData == ClassReps[(int32)ENetFields_Private::VariationData].Property->GetFName()
			&& Name_VariationCategoryIndexIntervals == ClassReps[(int32)ENetFields_Private::VariationCategoryIndexIntervals_STATIC_ARRAY].Property->GetFName()
			&& Name_bTelegraphAttack == ClassReps[(int32)ENetFields_Private::bTelegraphAttack].Property->GetFName()
			&& Name_VariationCategory == ClassReps[(int32)ENetFields_Private::VariationCategory].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZAICharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAICharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
