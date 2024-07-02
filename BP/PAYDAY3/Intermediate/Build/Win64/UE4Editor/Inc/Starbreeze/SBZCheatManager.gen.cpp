// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCheatManager.h"
#include "Engine/Classes/GameFramework/PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCheatManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCheatManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCheatManager();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCheatManagerBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3DispatchCaller();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3DispatchCallerReason();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPlayerAbilityBuffType();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDamageWeight();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZInteractionAction();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAIOrderMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMilestoneType();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEndMissionResultData();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZEndMissionResult();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDifficulty();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3HeistState();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCharacterStance();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPartSlot_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPartDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsDataAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZCheatManager::execApplyGameplayEffectTarget)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AssetName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FStrProperty,Z_Param_NameMagnitudeString);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyGameplayEffectTarget(Z_Param_Out_AssetName,Z_Param_Duration,Z_Param_NameMagnitudeString,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execCallDispatcher)
	{
		P_GET_ENUM(EPD3DispatchCaller,Z_Param_Caller);
		P_GET_ENUM(EPD3DispatchCallerReason,Z_Param_Reason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallDispatcher(EPD3DispatchCaller(Z_Param_Caller),EPD3DispatchCallerReason(Z_Param_Reason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execChangeAssaultDrama)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeAssaultDrama(Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execConsumePlayerAbilityBuff)
	{
		P_GET_ENUM(ESBZPlayerAbilityBuffType,Z_Param_Type);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConsumePlayerAbilityBuff(ESBZPlayerAbilityBuffType(Z_Param_Type),Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execConsumePlayerAbilityBuffAll)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConsumePlayerAbilityBuffAll(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execCuffPlayer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CuffPlayer(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execDamageAllCrewAI)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_ENUM(ESBZDamageWeight,Z_Param_DamageWeight);
		P_GET_PROPERTY(FIntProperty,Z_Param_DamageWeightModifier);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DamageTypeName);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DamageAllCrewAI(Z_Param_Damage,ESBZDamageWeight(Z_Param_DamageWeight),Z_Param_DamageWeightModifier,Z_Param_Out_DamageTypeName,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execDamageCharacter)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_ENUM(ESBZDamageWeight,Z_Param_DamageWeight);
		P_GET_PROPERTY(FIntProperty,Z_Param_DamageWeightModifier);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DamageTypeName);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DamageCharacter(Z_Param_Damage,ESBZDamageWeight(Z_Param_DamageWeight),Z_Param_DamageWeightModifier,Z_Param_Out_DamageTypeName,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execDamagePlayer)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_ENUM(ESBZDamageWeight,Z_Param_DamageWeight);
		P_GET_PROPERTY(FIntProperty,Z_Param_DamageWeightModifier);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DamageTypeName);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DamagePlayer(Z_Param_Damage,ESBZDamageWeight(Z_Param_DamageWeight),Z_Param_DamageWeightModifier,Z_Param_Out_DamageTypeName,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execDebugCreateBloodSplatterImpact)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugCreateBloodSplatterImpact();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execDebugCreateExplosionImpact)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugCreateExplosionImpact();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execDebugCreateFootstepImpact)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugCreateFootstepImpact();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execDebugCreateProjectileImpact)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugCreateProjectileImpact();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execDebugShowSubtitle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_LocID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugShowSubtitle(Z_Param_LocID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execDebugVehicleSplineData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugVehicleSplineData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execDefeatCrewAI)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CrewAIIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DefeatCrewAI(Z_Param_CrewAIIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execDefeatPlayer)
	{
		P_GET_UBOOL(Z_Param_bIsDirectIntoCustody);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DefeatPlayer(Z_Param_bIsDirectIntoCustody,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execDefeatTarget)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DefeatTarget(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execDestroyAllAI)
	{
		P_GET_UBOOL(Z_Param_bOnlyRagdolls);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyAllAI(Z_Param_bOnlyRagdolls);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execDestroyAllDebris)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyAllDebris();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execDestroyTargetAI)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyTargetAI(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execDumpPlayersMergePartyStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpPlayersMergePartyStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execEquipOverkillWeapon)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquipOverkillWeapon(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execFindBlocker)
	{
		P_GET_UBOOL(Z_Param_bIsComplex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TraceDistance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TraceRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OverlapDistance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OverlapRadius);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxHitCountTrace);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxHitCountOverlap);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DrawDuration);
		P_GET_UBOOL(Z_Param_bIsDrawPersistent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindBlocker(Z_Param_bIsComplex,Z_Param_TraceDistance,Z_Param_TraceRadius,Z_Param_OverlapDistance,Z_Param_OverlapRadius,Z_Param_MaxHitCountTrace,Z_Param_MaxHitCountOverlap,Z_Param_DrawDuration,Z_Param_bIsDrawPersistent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execFindClassReferences)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ClassName);
		P_GET_UBOOL(Z_Param_bIsSubClassesIncluded);
		P_GET_UBOOL(Z_Param_bIsBlueprintsIncluded);
		P_GET_UBOOL(Z_Param_bIsAssetsLoaded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindClassReferences(Z_Param_Out_ClassName,Z_Param_bIsSubClassesIncluded,Z_Param_bIsBlueprintsIncluded,Z_Param_bIsAssetsLoaded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execGainPlayerAbilityBuff)
	{
		P_GET_ENUM(ESBZPlayerAbilityBuffType,Z_Param_Type);
		P_GET_UBOOL(Z_Param_bIsRefreshAllowed);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GainPlayerAbilityBuff(ESBZPlayerAbilityBuffType(Z_Param_Type),Z_Param_bIsRefreshAllowed,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execGainPlayerAbilityBuffAll)
	{
		P_GET_UBOOL(Z_Param_bIsRefreshAllowed);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GainPlayerAbilityBuffAll(Z_Param_bIsRefreshAllowed,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execGamepadOpenInGameCheatMenu)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GamepadOpenInGameCheatMenu(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execGiveAmmo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_GET_PROPERTY(FIntProperty,Z_Param_WeaponIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GiveAmmo(Z_Param_Amount,Z_Param_WeaponIndex,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execGivePlaceableAmmo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlaceableIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GivePlaceableAmmo(Z_Param_Count,Z_Param_PlaceableIndex,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execGiveThrowableAmmo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_GET_PROPERTY(FIntProperty,Z_Param_ThrowableIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GiveThrowableAmmo(Z_Param_Count,Z_Param_ThrowableIndex,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execGiveToolAmmo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GiveToolAmmo(Z_Param_Count,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execGrabInstantLoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrabInstantLoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execInputActionPlayer)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ActionName);
		P_GET_PROPERTY(FByteProperty,Z_Param_InputEvent);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputActionPlayer(Z_Param_Out_ActionName,EInputEvent(Z_Param_InputEvent),Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execInputActionTarget)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ActionName);
		P_GET_PROPERTY(FByteProperty,Z_Param_InputEvent);
		P_GET_UBOOL(Z_Param_bIsReleaseCancelingAbility);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputActionTarget(Z_Param_Out_ActionName,EInputEvent(Z_Param_InputEvent),Z_Param_bIsReleaseCancelingAbility,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execInputAxisPlayer)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AxisName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InputValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputAxisPlayer(Z_Param_Out_AxisName,Z_Param_InputValue,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execInputAxisTarget)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AxisName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InputValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputAxisTarget(Z_Param_Out_AxisName,Z_Param_InputValue,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execInputKeyPlayer)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
		P_GET_PROPERTY(FByteProperty,Z_Param_InputEvent);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputKeyPlayer(Z_Param_Out_Key,EInputEvent(Z_Param_InputEvent),Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execInputKeyTarget)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
		P_GET_PROPERTY(FByteProperty,Z_Param_InputEvent);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputKeyTarget(Z_Param_Out_Key,EInputEvent(Z_Param_InputEvent),Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execInputVectorAxisPlayer)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AxisName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Z);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputVectorAxisPlayer(Z_Param_Out_AxisName,Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execInputVectorAxisTarget)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AxisName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Z);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputVectorAxisTarget(Z_Param_Out_AxisName,Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execInteractAITarget)
	{
		P_GET_ENUM(ESBZInteractionAction,Z_Param_Action);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InteractAITarget(ESBZInteractionAction(Z_Param_Action),Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execKillAllAI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KillAllAI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execKillAllCrewAI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KillAllCrewAI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execKillPlayer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KillPlayer(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execKillTarget)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KillTarget(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execListenToRewardLogs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ListenToRewardLogs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execLobotomizeAllAI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LobotomizeAllAI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execLobotomizeAllCrewAI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LobotomizeAllCrewAI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execLogSceneComponents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LogSceneComponents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execMoveDebugActorTarget)
	{
		P_GET_ENUM(ESBZAIOrderMode,Z_Param_OrderMode);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_MoveOrderAssetName);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveDebugActorTarget(ESBZAIOrderMode(Z_Param_OrderMode),Z_Param_Out_MoveOrderAssetName,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execOverlapSphere)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_CollisionChannel);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Profile);
		P_GET_UBOOL(Z_Param_bIsObjectType);
		P_GET_UBOOL(Z_Param_bIsComplex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxHitCount);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DrawDuration);
		P_GET_UBOOL(Z_Param_bIsDrawPersistent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OverlapSphere(ECollisionChannel(Z_Param_CollisionChannel),Z_Param_Out_Profile,Z_Param_bIsObjectType,Z_Param_bIsComplex,Z_Param_Distance,Z_Param_MaxHitCount,Z_Param_Radius,Z_Param_DrawDuration,Z_Param_bIsDrawPersistent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execPerceptionOnAllAI)
	{
		P_GET_UBOOL(Z_Param_bShouldHavePerception);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerceptionOnAllAI(Z_Param_bShouldHavePerception);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execPossessSelf)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PossessSelf(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execPossessTarget)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PossessTarget(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execPrintAllInteractable)
	{
		P_GET_UBOOL(Z_Param_bIsTemplate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintAllInteractable(Z_Param_bIsTemplate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execPrintAnimNotifies)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_NotifyName);
		P_GET_UBOOL(Z_Param_bIsOnlyMontages);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintAnimNotifies(Z_Param_Out_NotifyName,Z_Param_bIsOnlyMontages);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execPrintExperienceMilestone)
	{
		P_GET_ENUM(ESBZMilestoneType,Z_Param_MilestoneType);
		P_GET_PROPERTY(FStrProperty,Z_Param_MilestoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintExperienceMilestone(ESBZMilestoneType(Z_Param_MilestoneType),Z_Param_MilestoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execPrintMissionSeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintMissionSeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execPrintPlayerIDArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintPlayerIDArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execPrintRewardLogEvent)
	{
		P_GET_STRUCT_REF(FSBZEndMissionResultData,Z_Param_Out_EndMissionResultData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintRewardLogEvent(Z_Param_Out_EndMissionResultData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execPrintServerWorldInfo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintServerWorldInfo(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execPrintTagChanges)
	{
		P_GET_UBOOL(Z_Param_bIsPrintEnabled);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Tag);
		P_GET_UBOOL(Z_Param_bIsStackTrace);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintTagChanges(Z_Param_bIsPrintEnabled,Z_Param_Out_Tag,Z_Param_bIsStackTrace,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execPrintTarget)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintTarget(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execPrintTargetTagChanges)
	{
		P_GET_UBOOL(Z_Param_bIsPrintEnabled);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Tag);
		P_GET_UBOOL(Z_Param_bIsStackTrace);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintTargetTagChanges(Z_Param_bIsPrintEnabled,Z_Param_Out_Tag,Z_Param_bIsStackTrace,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execPrintWorldInfo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintWorldInfo(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execRebuildAssetLookup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RebuildAssetLookup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execRefreshPlayerAbilityBuff)
	{
		P_GET_ENUM(ESBZPlayerAbilityBuffType,Z_Param_Type);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshPlayerAbilityBuff(ESBZPlayerAbilityBuffType(Z_Param_Type),Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execRefreshPlayerAbilityBuffAll)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshPlayerAbilityBuffAll(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execReportBug)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Description);
		P_GET_UBOOL(Z_Param_bIsEverywhere);
		P_GET_UBOOL(Z_Param_bIsBlockerChecked);
		P_GET_UBOOL(Z_Param_bIsInteractableChecked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReportBug(Z_Param_Description,Z_Param_bIsEverywhere,Z_Param_bIsBlockerChecked,Z_Param_bIsInteractableChecked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execRequestMissionEnd)
	{
		P_GET_ENUM(ESBZEndMissionResult,Z_Param_Result);
		P_GET_PROPERTY(FIntProperty,Z_Param_OutroVariation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestMissionEnd(ESBZEndMissionResult(Z_Param_Result),Z_Param_OutroVariation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execRequestMissionFail)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestMissionFail();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execRequestMissionSuccess)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestMissionSuccess();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execResearchAllSkills)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResearchAllSkills(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execResetCVars)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetCVars();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execReviveCrewAI)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CrewAIIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReviveCrewAI(Z_Param_CrewAIIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execRevivePlayer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RevivePlayer(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execReviveTarget)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReviveTarget(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSecureAllAvailableLoot)
	{
		P_GET_UBOOL(Z_Param_bClearClaim);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SecureAllAvailableLoot(Z_Param_bClearClaim);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSecureBag)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AssetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SecureBag(Z_Param_Count,Z_Param_Out_AssetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSelectDebugActorTarget)
	{
		P_GET_UBOOL(Z_Param_bIsSelectedInEditor);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectDebugActorTarget(Z_Param_bIsSelectedInEditor,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSendSessionMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendSessionMessage(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetAddMissionFailedTimeout)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AddTimeout);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAddMissionFailedTimeout(Z_Param_AddTimeout);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetAllSkills)
	{
		P_GET_UBOOL(Z_Param_bIsAcquired);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllSkills(Z_Param_bIsAcquired,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetAmmoInventory)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewAmmoCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_WeaponIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAmmoInventory(Z_Param_NewAmmoCount,Z_Param_WeaponIndex,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetAmmoLoaded)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewAmmoCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_WeaponIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAmmoLoaded(Z_Param_NewAmmoCount,Z_Param_WeaponIndex,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetAssaultActive)
	{
		P_GET_UBOOL(Z_Param_bIsActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAssaultActive(Z_Param_bIsActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetAssaultLevelProgression)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Progression);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAssaultLevelProgression(Z_Param_Progression);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetCrouchedTarget)
	{
		P_GET_UBOOL(Z_Param_bIsCrouched);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCrouchedTarget(Z_Param_bIsCrouched,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetDifficulty)
	{
		P_GET_ENUM(ESBZDifficulty,Z_Param_Difficulty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDifficulty(ESBZDifficulty(Z_Param_Difficulty));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetDownedCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDownedCount(Z_Param_Count,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetDrawTransform)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Z);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Yaw);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Pitch);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Roll);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDrawTransform(Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_Yaw,Z_Param_Pitch,Z_Param_Roll,Z_Param_ScaleX,Z_Param_ScaleY,Z_Param_ScaleZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetDrawTransformEnabled)
	{
		P_GET_UBOOL(Z_Param_bIsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDrawTransformEnabled(Z_Param_bIsEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetEquippable)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_EquippableDataName);
		P_GET_PROPERTY(FIntProperty,Z_Param_EquippableIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEquippable(Z_Param_Out_EquippableDataName,Z_Param_EquippableIndex,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetEquippablePart)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SlotDataName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PartDataName);
		P_GET_PROPERTY(FIntProperty,Z_Param_EquippableIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEquippablePart(Z_Param_Out_SlotDataName,Z_Param_Out_PartDataName,Z_Param_EquippableIndex,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetEquippablePreset)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_EquippableDataName);
		P_GET_PROPERTY(FIntProperty,Z_Param_EquippableIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEquippablePreset(Z_Param_Out_EquippableDataName,Z_Param_EquippableIndex,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetEquippableWeaponPreset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_WeaponPresetGuid);
		P_GET_PROPERTY(FIntProperty,Z_Param_EquippableIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEquippableWeaponPreset(Z_Param_WeaponPresetGuid,Z_Param_EquippableIndex,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetEquippedTarget)
	{
		P_GET_UBOOL(Z_Param_bIsEquipped);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEquippedTarget(Z_Param_bIsEquipped,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetFriendlyFireSettings)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFriendlyFireSettings(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetGod)
	{
		P_GET_UBOOL(Z_Param_bIsGod);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGod(Z_Param_bIsGod,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetHeistState)
	{
		P_GET_ENUM(EPD3HeistState,Z_Param_HeistState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeistState(EPD3HeistState(Z_Param_HeistState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetInaudiblePlayer)
	{
		P_GET_UBOOL(Z_Param_bIsInaudible);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInaudiblePlayer(Z_Param_bIsInaudible,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetInfiniteAmmo)
	{
		P_GET_UBOOL(Z_Param_bHasInifinteAmmo);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInfiniteAmmo(Z_Param_bHasInifinteAmmo,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetInteractorModeIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ModeIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteractorModeIndex(Z_Param_ModeIndex,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetInvisiblePlayer)
	{
		P_GET_UBOOL(Z_Param_bIsInvisible);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInvisiblePlayer(Z_Param_bIsInvisible,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetJesus)
	{
		P_GET_UBOOL(Z_Param_bIsJesus);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetJesus(Z_Param_bIsJesus,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetLastArrestedByGuard)
	{
		P_GET_UBOOL(Z_Param_bIsLastArrestedByGuard);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLastArrestedByGuard(Z_Param_bIsLastArrestedByGuard,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetLooseTagCount)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Tag);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLooseTagCount(Z_Param_Out_Tag,Z_Param_Count,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetMarkedTarget)
	{
		P_GET_UBOOL(Z_Param_bIsMarked);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMarkedTarget(Z_Param_bIsMarked,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetMaxAICrewCountOverride)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxAICrewCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxAICrewCountOverride(Z_Param_MaxAICrewCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetMilestonePassed)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MilestoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMilestonePassed(Z_Param_MilestoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetMilestonesPassedLoud)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MilestonesPassed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMilestonesPassedLoud(Z_Param_MilestonesPassed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetMilestonesPassedStealth)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MilestonesPassed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMilestonesPassedStealth(Z_Param_MilestonesPassed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetMissionActive)
	{
		P_GET_UBOOL(Z_Param_bIsActive);
		P_GET_UBOOL(Z_Param_bIsLocalOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMissionActive(Z_Param_bIsActive,Z_Param_bIsLocalOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetMissionFailedEnabled)
	{
		P_GET_UBOOL(Z_Param_bIsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMissionFailedEnabled(Z_Param_bIsEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetOptionalMilestonePassed)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_OptionalMilestoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOptionalMilestonePassed(Z_Param_OptionalMilestoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetOverkillWeaponProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InProgress);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOverkillWeaponProgress(Z_Param_InProgress,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetPlaceable)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PlaceableDataName);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlaceableIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlaceable(Z_Param_Out_PlaceableDataName,Z_Param_PlaceableIndex,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetPlaceableAmmo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlaceableIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlaceableAmmo(Z_Param_Count,Z_Param_PlaceableIndex,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetPlayerAbilityBuffBlockCooldown)
	{
		P_GET_ENUM(ESBZPlayerAbilityBuffType,Z_Param_Type);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Cooldown);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerAbilityBuffBlockCooldown(ESBZPlayerAbilityBuffType(Z_Param_Type),Z_Param_Cooldown,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetPlayerAbilityBuffBlockCooldownAll)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Cooldown);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerAbilityBuffBlockCooldownAll(Z_Param_Cooldown,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetPlayerAbilityBuffBlocked)
	{
		P_GET_ENUM(ESBZPlayerAbilityBuffType,Z_Param_Type);
		P_GET_UBOOL(Z_Param_bIsBlocked);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerAbilityBuffBlocked(ESBZPlayerAbilityBuffType(Z_Param_Type),Z_Param_bIsBlocked,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetPlayerAbilityBuffBlockedAll)
	{
		P_GET_UBOOL(Z_Param_bIsBlocked);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerAbilityBuffBlockedAll(Z_Param_bIsBlocked,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetPlayerArmor)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PlayerArmorName);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerArmor(Z_Param_Out_PlayerArmorName,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetPlayerCharacter)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_CharacterClassName);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerCharacter(Z_Param_Out_CharacterClassName,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetPlayerGlove)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PlayerMaskName);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerGlove(Z_Param_Out_PlayerMaskName,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetPlayerMask)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PlayerMaskName);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerMask(Z_Param_Out_PlayerMaskName,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetPlayerMergePartySelected)
	{
		P_GET_UBOOL(Z_Param_bIsMergePartySelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerMergePartySelected(Z_Param_bIsMergePartySelected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetPlayerName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerName(Z_Param_Name,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetPlayerSuit)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PlayerMaskName);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerSuit(Z_Param_Out_PlayerMaskName,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetRegisterRewardPrints)
	{
		P_GET_UBOOL(Z_Param_bIsRegistered);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRegisterRewardPrints(Z_Param_bIsRegistered);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetSharedTagCount)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Tag);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSharedTagCount(Z_Param_Out_Tag,Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetSkill)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SkillDataName);
		P_GET_UBOOL(Z_Param_bIsAcquired);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSkill(Z_Param_Out_SkillDataName,Z_Param_bIsAcquired,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetTargetCharacterStance)
	{
		P_GET_ENUM(ESBZCharacterStance,Z_Param_Stance);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetCharacterStance(ESBZCharacterStance(Z_Param_Stance),Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetTargetEquippableIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EquippableIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetEquippableIndex(Z_Param_EquippableIndex,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetTargetEquippableIndexTarget)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EquippableIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetEquippableIndexTarget(Z_Param_EquippableIndex,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetTargetLooseTagCount)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Tag);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetLooseTagCount(Z_Param_Out_Tag,Z_Param_Count,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetThrowable)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ThrowableDataName);
		P_GET_PROPERTY(FIntProperty,Z_Param_ThrowableIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetThrowable(Z_Param_Out_ThrowableDataName,Z_Param_ThrowableIndex,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetThrowableAmmo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_GET_PROPERTY(FIntProperty,Z_Param_ThrowableIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetThrowableAmmo(Z_Param_Count,Z_Param_ThrowableIndex,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetTool)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ToolDataName);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTool(Z_Param_Out_ToolDataName,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSetToolAmmo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetToolAmmo(Z_Param_Count,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSimulateChallengeNotificationReceived)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SimulateChallengeNotificationReceived();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSpawn)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AssetName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Yaw);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Spawn(Z_Param_Out_AssetName,Z_Param_Count,Z_Param_Distance,Z_Param_PlayerIndex,Z_Param_Yaw);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSpawnAllAITypes)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Offset);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Yaw);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnAllAITypes(Z_Param_Count,Z_Param_Distance,Z_Param_Offset,Z_Param_Yaw,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSpawnFBI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnFBI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execStartEndlessAssault)
	{
		P_GET_UBOOL(Z_Param_bForceStartAssault);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartEndlessAssault(Z_Param_bForceStartAssault);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSubduePlayer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubduePlayer(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execSurrenderTarget)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SurrenderTarget(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execTasePlayer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TasePlayer(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execThrowItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ThrowItem(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execToggleCrouchedTarget)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleCrouchedTarget(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execToggleDebugCameraAndTeleport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleDebugCameraAndTeleport();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execToggleGod)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleGod(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execToggleInaudiblePlayer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleInaudiblePlayer(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execToggleInvisiblePlayer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleInvisiblePlayer(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execTrace)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_CollisionChannel);
		P_GET_PROPERTY(FNameProperty,Z_Param_Profile);
		P_GET_UBOOL(Z_Param_bIsObjectType);
		P_GET_UBOOL(Z_Param_bIsComplex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxHitCount);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DrawDuration);
		P_GET_UBOOL(Z_Param_bIsDrawPersistent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Trace(ECollisionChannel(Z_Param_CollisionChannel),Z_Param_Profile,Z_Param_bIsObjectType,Z_Param_bIsComplex,Z_Param_Distance,Z_Param_MaxHitCount,Z_Param_Radius,Z_Param_DrawDuration,Z_Param_bIsDrawPersistent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execViewSelfByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ViewSelfByIndex(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCheatManager::execViewTarget)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ViewTarget(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	void USBZCheatManager::StaticRegisterNativesUSBZCheatManager()
	{
		UClass* Class = USBZCheatManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyGameplayEffectTarget", &USBZCheatManager::execApplyGameplayEffectTarget },
			{ "CallDispatcher", &USBZCheatManager::execCallDispatcher },
			{ "ChangeAssaultDrama", &USBZCheatManager::execChangeAssaultDrama },
			{ "ConsumePlayerAbilityBuff", &USBZCheatManager::execConsumePlayerAbilityBuff },
			{ "ConsumePlayerAbilityBuffAll", &USBZCheatManager::execConsumePlayerAbilityBuffAll },
			{ "CuffPlayer", &USBZCheatManager::execCuffPlayer },
			{ "DamageAllCrewAI", &USBZCheatManager::execDamageAllCrewAI },
			{ "DamageCharacter", &USBZCheatManager::execDamageCharacter },
			{ "DamagePlayer", &USBZCheatManager::execDamagePlayer },
			{ "DebugCreateBloodSplatterImpact", &USBZCheatManager::execDebugCreateBloodSplatterImpact },
			{ "DebugCreateExplosionImpact", &USBZCheatManager::execDebugCreateExplosionImpact },
			{ "DebugCreateFootstepImpact", &USBZCheatManager::execDebugCreateFootstepImpact },
			{ "DebugCreateProjectileImpact", &USBZCheatManager::execDebugCreateProjectileImpact },
			{ "DebugShowSubtitle", &USBZCheatManager::execDebugShowSubtitle },
			{ "DebugVehicleSplineData", &USBZCheatManager::execDebugVehicleSplineData },
			{ "DefeatCrewAI", &USBZCheatManager::execDefeatCrewAI },
			{ "DefeatPlayer", &USBZCheatManager::execDefeatPlayer },
			{ "DefeatTarget", &USBZCheatManager::execDefeatTarget },
			{ "DestroyAllAI", &USBZCheatManager::execDestroyAllAI },
			{ "DestroyAllDebris", &USBZCheatManager::execDestroyAllDebris },
			{ "DestroyTargetAI", &USBZCheatManager::execDestroyTargetAI },
			{ "DumpPlayersMergePartyStatus", &USBZCheatManager::execDumpPlayersMergePartyStatus },
			{ "EquipOverkillWeapon", &USBZCheatManager::execEquipOverkillWeapon },
			{ "FindBlocker", &USBZCheatManager::execFindBlocker },
			{ "FindClassReferences", &USBZCheatManager::execFindClassReferences },
			{ "GainPlayerAbilityBuff", &USBZCheatManager::execGainPlayerAbilityBuff },
			{ "GainPlayerAbilityBuffAll", &USBZCheatManager::execGainPlayerAbilityBuffAll },
			{ "GamepadOpenInGameCheatMenu", &USBZCheatManager::execGamepadOpenInGameCheatMenu },
			{ "GiveAmmo", &USBZCheatManager::execGiveAmmo },
			{ "GivePlaceableAmmo", &USBZCheatManager::execGivePlaceableAmmo },
			{ "GiveThrowableAmmo", &USBZCheatManager::execGiveThrowableAmmo },
			{ "GiveToolAmmo", &USBZCheatManager::execGiveToolAmmo },
			{ "GrabInstantLoot", &USBZCheatManager::execGrabInstantLoot },
			{ "InputActionPlayer", &USBZCheatManager::execInputActionPlayer },
			{ "InputActionTarget", &USBZCheatManager::execInputActionTarget },
			{ "InputAxisPlayer", &USBZCheatManager::execInputAxisPlayer },
			{ "InputAxisTarget", &USBZCheatManager::execInputAxisTarget },
			{ "InputKeyPlayer", &USBZCheatManager::execInputKeyPlayer },
			{ "InputKeyTarget", &USBZCheatManager::execInputKeyTarget },
			{ "InputVectorAxisPlayer", &USBZCheatManager::execInputVectorAxisPlayer },
			{ "InputVectorAxisTarget", &USBZCheatManager::execInputVectorAxisTarget },
			{ "InteractAITarget", &USBZCheatManager::execInteractAITarget },
			{ "KillAllAI", &USBZCheatManager::execKillAllAI },
			{ "KillAllCrewAI", &USBZCheatManager::execKillAllCrewAI },
			{ "KillPlayer", &USBZCheatManager::execKillPlayer },
			{ "KillTarget", &USBZCheatManager::execKillTarget },
			{ "ListenToRewardLogs", &USBZCheatManager::execListenToRewardLogs },
			{ "LobotomizeAllAI", &USBZCheatManager::execLobotomizeAllAI },
			{ "LobotomizeAllCrewAI", &USBZCheatManager::execLobotomizeAllCrewAI },
			{ "LogSceneComponents", &USBZCheatManager::execLogSceneComponents },
			{ "MoveDebugActorTarget", &USBZCheatManager::execMoveDebugActorTarget },
			{ "OverlapSphere", &USBZCheatManager::execOverlapSphere },
			{ "PerceptionOnAllAI", &USBZCheatManager::execPerceptionOnAllAI },
			{ "PossessSelf", &USBZCheatManager::execPossessSelf },
			{ "PossessTarget", &USBZCheatManager::execPossessTarget },
			{ "PrintAllInteractable", &USBZCheatManager::execPrintAllInteractable },
			{ "PrintAnimNotifies", &USBZCheatManager::execPrintAnimNotifies },
			{ "PrintExperienceMilestone", &USBZCheatManager::execPrintExperienceMilestone },
			{ "PrintMissionSeed", &USBZCheatManager::execPrintMissionSeed },
			{ "PrintPlayerIDArray", &USBZCheatManager::execPrintPlayerIDArray },
			{ "PrintRewardLogEvent", &USBZCheatManager::execPrintRewardLogEvent },
			{ "PrintServerWorldInfo", &USBZCheatManager::execPrintServerWorldInfo },
			{ "PrintTagChanges", &USBZCheatManager::execPrintTagChanges },
			{ "PrintTarget", &USBZCheatManager::execPrintTarget },
			{ "PrintTargetTagChanges", &USBZCheatManager::execPrintTargetTagChanges },
			{ "PrintWorldInfo", &USBZCheatManager::execPrintWorldInfo },
			{ "RebuildAssetLookup", &USBZCheatManager::execRebuildAssetLookup },
			{ "RefreshPlayerAbilityBuff", &USBZCheatManager::execRefreshPlayerAbilityBuff },
			{ "RefreshPlayerAbilityBuffAll", &USBZCheatManager::execRefreshPlayerAbilityBuffAll },
			{ "ReportBug", &USBZCheatManager::execReportBug },
			{ "RequestMissionEnd", &USBZCheatManager::execRequestMissionEnd },
			{ "RequestMissionFail", &USBZCheatManager::execRequestMissionFail },
			{ "RequestMissionSuccess", &USBZCheatManager::execRequestMissionSuccess },
			{ "ResearchAllSkills", &USBZCheatManager::execResearchAllSkills },
			{ "ResetCVars", &USBZCheatManager::execResetCVars },
			{ "ReviveCrewAI", &USBZCheatManager::execReviveCrewAI },
			{ "RevivePlayer", &USBZCheatManager::execRevivePlayer },
			{ "ReviveTarget", &USBZCheatManager::execReviveTarget },
			{ "SecureAllAvailableLoot", &USBZCheatManager::execSecureAllAvailableLoot },
			{ "SecureBag", &USBZCheatManager::execSecureBag },
			{ "SelectDebugActorTarget", &USBZCheatManager::execSelectDebugActorTarget },
			{ "SendSessionMessage", &USBZCheatManager::execSendSessionMessage },
			{ "SetAddMissionFailedTimeout", &USBZCheatManager::execSetAddMissionFailedTimeout },
			{ "SetAllSkills", &USBZCheatManager::execSetAllSkills },
			{ "SetAmmoInventory", &USBZCheatManager::execSetAmmoInventory },
			{ "SetAmmoLoaded", &USBZCheatManager::execSetAmmoLoaded },
			{ "SetAssaultActive", &USBZCheatManager::execSetAssaultActive },
			{ "SetAssaultLevelProgression", &USBZCheatManager::execSetAssaultLevelProgression },
			{ "SetCrouchedTarget", &USBZCheatManager::execSetCrouchedTarget },
			{ "SetDifficulty", &USBZCheatManager::execSetDifficulty },
			{ "SetDownedCount", &USBZCheatManager::execSetDownedCount },
			{ "SetDrawTransform", &USBZCheatManager::execSetDrawTransform },
			{ "SetDrawTransformEnabled", &USBZCheatManager::execSetDrawTransformEnabled },
			{ "SetEquippable", &USBZCheatManager::execSetEquippable },
			{ "SetEquippablePart", &USBZCheatManager::execSetEquippablePart },
			{ "SetEquippablePreset", &USBZCheatManager::execSetEquippablePreset },
			{ "SetEquippableWeaponPreset", &USBZCheatManager::execSetEquippableWeaponPreset },
			{ "SetEquippedTarget", &USBZCheatManager::execSetEquippedTarget },
			{ "SetFriendlyFireSettings", &USBZCheatManager::execSetFriendlyFireSettings },
			{ "SetGod", &USBZCheatManager::execSetGod },
			{ "SetHeistState", &USBZCheatManager::execSetHeistState },
			{ "SetInaudiblePlayer", &USBZCheatManager::execSetInaudiblePlayer },
			{ "SetInfiniteAmmo", &USBZCheatManager::execSetInfiniteAmmo },
			{ "SetInteractorModeIndex", &USBZCheatManager::execSetInteractorModeIndex },
			{ "SetInvisiblePlayer", &USBZCheatManager::execSetInvisiblePlayer },
			{ "SetJesus", &USBZCheatManager::execSetJesus },
			{ "SetLastArrestedByGuard", &USBZCheatManager::execSetLastArrestedByGuard },
			{ "SetLooseTagCount", &USBZCheatManager::execSetLooseTagCount },
			{ "SetMarkedTarget", &USBZCheatManager::execSetMarkedTarget },
			{ "SetMaxAICrewCountOverride", &USBZCheatManager::execSetMaxAICrewCountOverride },
			{ "SetMilestonePassed", &USBZCheatManager::execSetMilestonePassed },
			{ "SetMilestonesPassedLoud", &USBZCheatManager::execSetMilestonesPassedLoud },
			{ "SetMilestonesPassedStealth", &USBZCheatManager::execSetMilestonesPassedStealth },
			{ "SetMissionActive", &USBZCheatManager::execSetMissionActive },
			{ "SetMissionFailedEnabled", &USBZCheatManager::execSetMissionFailedEnabled },
			{ "SetOptionalMilestonePassed", &USBZCheatManager::execSetOptionalMilestonePassed },
			{ "SetOverkillWeaponProgress", &USBZCheatManager::execSetOverkillWeaponProgress },
			{ "SetPlaceable", &USBZCheatManager::execSetPlaceable },
			{ "SetPlaceableAmmo", &USBZCheatManager::execSetPlaceableAmmo },
			{ "SetPlayerAbilityBuffBlockCooldown", &USBZCheatManager::execSetPlayerAbilityBuffBlockCooldown },
			{ "SetPlayerAbilityBuffBlockCooldownAll", &USBZCheatManager::execSetPlayerAbilityBuffBlockCooldownAll },
			{ "SetPlayerAbilityBuffBlocked", &USBZCheatManager::execSetPlayerAbilityBuffBlocked },
			{ "SetPlayerAbilityBuffBlockedAll", &USBZCheatManager::execSetPlayerAbilityBuffBlockedAll },
			{ "SetPlayerArmor", &USBZCheatManager::execSetPlayerArmor },
			{ "SetPlayerCharacter", &USBZCheatManager::execSetPlayerCharacter },
			{ "SetPlayerGlove", &USBZCheatManager::execSetPlayerGlove },
			{ "SetPlayerMask", &USBZCheatManager::execSetPlayerMask },
			{ "SetPlayerMergePartySelected", &USBZCheatManager::execSetPlayerMergePartySelected },
			{ "SetPlayerName", &USBZCheatManager::execSetPlayerName },
			{ "SetPlayerSuit", &USBZCheatManager::execSetPlayerSuit },
			{ "SetRegisterRewardPrints", &USBZCheatManager::execSetRegisterRewardPrints },
			{ "SetSharedTagCount", &USBZCheatManager::execSetSharedTagCount },
			{ "SetSkill", &USBZCheatManager::execSetSkill },
			{ "SetTargetCharacterStance", &USBZCheatManager::execSetTargetCharacterStance },
			{ "SetTargetEquippableIndex", &USBZCheatManager::execSetTargetEquippableIndex },
			{ "SetTargetEquippableIndexTarget", &USBZCheatManager::execSetTargetEquippableIndexTarget },
			{ "SetTargetLooseTagCount", &USBZCheatManager::execSetTargetLooseTagCount },
			{ "SetThrowable", &USBZCheatManager::execSetThrowable },
			{ "SetThrowableAmmo", &USBZCheatManager::execSetThrowableAmmo },
			{ "SetTool", &USBZCheatManager::execSetTool },
			{ "SetToolAmmo", &USBZCheatManager::execSetToolAmmo },
			{ "SimulateChallengeNotificationReceived", &USBZCheatManager::execSimulateChallengeNotificationReceived },
			{ "Spawn", &USBZCheatManager::execSpawn },
			{ "SpawnAllAITypes", &USBZCheatManager::execSpawnAllAITypes },
			{ "SpawnFBI", &USBZCheatManager::execSpawnFBI },
			{ "StartEndlessAssault", &USBZCheatManager::execStartEndlessAssault },
			{ "SubduePlayer", &USBZCheatManager::execSubduePlayer },
			{ "SurrenderTarget", &USBZCheatManager::execSurrenderTarget },
			{ "TasePlayer", &USBZCheatManager::execTasePlayer },
			{ "ThrowItem", &USBZCheatManager::execThrowItem },
			{ "ToggleCrouchedTarget", &USBZCheatManager::execToggleCrouchedTarget },
			{ "ToggleDebugCameraAndTeleport", &USBZCheatManager::execToggleDebugCameraAndTeleport },
			{ "ToggleGod", &USBZCheatManager::execToggleGod },
			{ "ToggleInaudiblePlayer", &USBZCheatManager::execToggleInaudiblePlayer },
			{ "ToggleInvisiblePlayer", &USBZCheatManager::execToggleInvisiblePlayer },
			{ "Trace", &USBZCheatManager::execTrace },
			{ "ViewSelfByIndex", &USBZCheatManager::execViewSelfByIndex },
			{ "ViewTarget", &USBZCheatManager::execViewTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZCheatManager_ApplyGameplayEffectTarget_Statics
	{
		struct SBZCheatManager_eventApplyGameplayEffectTarget_Parms
		{
			FName AssetName;
			float Duration;
			FString NameMagnitudeString;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AssetName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameMagnitudeString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NameMagnitudeString;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_ApplyGameplayEffectTarget_Statics::NewProp_AssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_ApplyGameplayEffectTarget_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventApplyGameplayEffectTarget_Parms, AssetName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_ApplyGameplayEffectTarget_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ApplyGameplayEffectTarget_Statics::NewProp_AssetName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_ApplyGameplayEffectTarget_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventApplyGameplayEffectTarget_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_ApplyGameplayEffectTarget_Statics::NewProp_NameMagnitudeString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManager_ApplyGameplayEffectTarget_Statics::NewProp_NameMagnitudeString = { "NameMagnitudeString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventApplyGameplayEffectTarget_Parms, NameMagnitudeString), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_ApplyGameplayEffectTarget_Statics::NewProp_NameMagnitudeString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ApplyGameplayEffectTarget_Statics::NewProp_NameMagnitudeString_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_ApplyGameplayEffectTarget_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventApplyGameplayEffectTarget_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_ApplyGameplayEffectTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_ApplyGameplayEffectTarget_Statics::NewProp_AssetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_ApplyGameplayEffectTarget_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_ApplyGameplayEffectTarget_Statics::NewProp_NameMagnitudeString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_ApplyGameplayEffectTarget_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_ApplyGameplayEffectTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_ApplyGameplayEffectTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "ApplyGameplayEffectTarget", nullptr, nullptr, sizeof(SBZCheatManager_eventApplyGameplayEffectTarget_Parms), Z_Construct_UFunction_USBZCheatManager_ApplyGameplayEffectTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ApplyGameplayEffectTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_ApplyGameplayEffectTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ApplyGameplayEffectTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_ApplyGameplayEffectTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_ApplyGameplayEffectTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_CallDispatcher_Statics
	{
		struct SBZCheatManager_eventCallDispatcher_Parms
		{
			EPD3DispatchCaller Caller;
			EPD3DispatchCallerReason Reason;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Caller_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Reason_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Reason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCheatManager_CallDispatcher_Statics::NewProp_Caller_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCheatManager_CallDispatcher_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventCallDispatcher_Parms, Caller), Z_Construct_UEnum_Starbreeze_EPD3DispatchCaller, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCheatManager_CallDispatcher_Statics::NewProp_Reason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCheatManager_CallDispatcher_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventCallDispatcher_Parms, Reason), Z_Construct_UEnum_Starbreeze_EPD3DispatchCallerReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_CallDispatcher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_CallDispatcher_Statics::NewProp_Caller_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_CallDispatcher_Statics::NewProp_Caller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_CallDispatcher_Statics::NewProp_Reason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_CallDispatcher_Statics::NewProp_Reason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_CallDispatcher_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_CallDispatcher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "CallDispatcher", nullptr, nullptr, sizeof(SBZCheatManager_eventCallDispatcher_Parms), Z_Construct_UFunction_USBZCheatManager_CallDispatcher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_CallDispatcher_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_CallDispatcher_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_CallDispatcher_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_CallDispatcher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_CallDispatcher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_ChangeAssaultDrama_Statics
	{
		struct SBZCheatManager_eventChangeAssaultDrama_Parms
		{
			float Amount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_ChangeAssaultDrama_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventChangeAssaultDrama_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_ChangeAssaultDrama_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_ChangeAssaultDrama_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_ChangeAssaultDrama_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_ChangeAssaultDrama_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "ChangeAssaultDrama", nullptr, nullptr, sizeof(SBZCheatManager_eventChangeAssaultDrama_Parms), Z_Construct_UFunction_USBZCheatManager_ChangeAssaultDrama_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ChangeAssaultDrama_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_ChangeAssaultDrama_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ChangeAssaultDrama_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_ChangeAssaultDrama()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_ChangeAssaultDrama_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_ConsumePlayerAbilityBuff_Statics
	{
		struct SBZCheatManager_eventConsumePlayerAbilityBuff_Parms
		{
			ESBZPlayerAbilityBuffType Type;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCheatManager_ConsumePlayerAbilityBuff_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCheatManager_ConsumePlayerAbilityBuff_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventConsumePlayerAbilityBuff_Parms, Type), Z_Construct_UEnum_Starbreeze_ESBZPlayerAbilityBuffType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_ConsumePlayerAbilityBuff_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventConsumePlayerAbilityBuff_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_ConsumePlayerAbilityBuff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_ConsumePlayerAbilityBuff_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_ConsumePlayerAbilityBuff_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_ConsumePlayerAbilityBuff_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_ConsumePlayerAbilityBuff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_ConsumePlayerAbilityBuff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "ConsumePlayerAbilityBuff", nullptr, nullptr, sizeof(SBZCheatManager_eventConsumePlayerAbilityBuff_Parms), Z_Construct_UFunction_USBZCheatManager_ConsumePlayerAbilityBuff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ConsumePlayerAbilityBuff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_ConsumePlayerAbilityBuff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ConsumePlayerAbilityBuff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_ConsumePlayerAbilityBuff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_ConsumePlayerAbilityBuff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_ConsumePlayerAbilityBuffAll_Statics
	{
		struct SBZCheatManager_eventConsumePlayerAbilityBuffAll_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_ConsumePlayerAbilityBuffAll_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventConsumePlayerAbilityBuffAll_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_ConsumePlayerAbilityBuffAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_ConsumePlayerAbilityBuffAll_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_ConsumePlayerAbilityBuffAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_ConsumePlayerAbilityBuffAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "ConsumePlayerAbilityBuffAll", nullptr, nullptr, sizeof(SBZCheatManager_eventConsumePlayerAbilityBuffAll_Parms), Z_Construct_UFunction_USBZCheatManager_ConsumePlayerAbilityBuffAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ConsumePlayerAbilityBuffAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_ConsumePlayerAbilityBuffAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ConsumePlayerAbilityBuffAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_ConsumePlayerAbilityBuffAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_ConsumePlayerAbilityBuffAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_CuffPlayer_Statics
	{
		struct SBZCheatManager_eventCuffPlayer_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_CuffPlayer_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventCuffPlayer_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_CuffPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_CuffPlayer_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_CuffPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_CuffPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "CuffPlayer", nullptr, nullptr, sizeof(SBZCheatManager_eventCuffPlayer_Parms), Z_Construct_UFunction_USBZCheatManager_CuffPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_CuffPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_CuffPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_CuffPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_CuffPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_CuffPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_DamageAllCrewAI_Statics
	{
		struct SBZCheatManager_eventDamageAllCrewAI_Parms
		{
			float Damage;
			ESBZDamageWeight DamageWeight;
			int32 DamageWeightModifier;
			FName DamageTypeName;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DamageWeight_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DamageWeight;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DamageWeightModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageTypeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DamageTypeName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_DamageAllCrewAI_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventDamageAllCrewAI_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCheatManager_DamageAllCrewAI_Statics::NewProp_DamageWeight_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCheatManager_DamageAllCrewAI_Statics::NewProp_DamageWeight = { "DamageWeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventDamageAllCrewAI_Parms, DamageWeight), Z_Construct_UEnum_Starbreeze_ESBZDamageWeight, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_DamageAllCrewAI_Statics::NewProp_DamageWeightModifier = { "DamageWeightModifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventDamageAllCrewAI_Parms, DamageWeightModifier), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_DamageAllCrewAI_Statics::NewProp_DamageTypeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_DamageAllCrewAI_Statics::NewProp_DamageTypeName = { "DamageTypeName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventDamageAllCrewAI_Parms, DamageTypeName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_DamageAllCrewAI_Statics::NewProp_DamageTypeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_DamageAllCrewAI_Statics::NewProp_DamageTypeName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_DamageAllCrewAI_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventDamageAllCrewAI_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_DamageAllCrewAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_DamageAllCrewAI_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_DamageAllCrewAI_Statics::NewProp_DamageWeight_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_DamageAllCrewAI_Statics::NewProp_DamageWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_DamageAllCrewAI_Statics::NewProp_DamageWeightModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_DamageAllCrewAI_Statics::NewProp_DamageTypeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_DamageAllCrewAI_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_DamageAllCrewAI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_DamageAllCrewAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "DamageAllCrewAI", nullptr, nullptr, sizeof(SBZCheatManager_eventDamageAllCrewAI_Parms), Z_Construct_UFunction_USBZCheatManager_DamageAllCrewAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_DamageAllCrewAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_DamageAllCrewAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_DamageAllCrewAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_DamageAllCrewAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_DamageAllCrewAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_DamageCharacter_Statics
	{
		struct SBZCheatManager_eventDamageCharacter_Parms
		{
			float Damage;
			ESBZDamageWeight DamageWeight;
			int32 DamageWeightModifier;
			FName DamageTypeName;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DamageWeight_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DamageWeight;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DamageWeightModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageTypeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DamageTypeName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_DamageCharacter_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventDamageCharacter_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCheatManager_DamageCharacter_Statics::NewProp_DamageWeight_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCheatManager_DamageCharacter_Statics::NewProp_DamageWeight = { "DamageWeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventDamageCharacter_Parms, DamageWeight), Z_Construct_UEnum_Starbreeze_ESBZDamageWeight, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_DamageCharacter_Statics::NewProp_DamageWeightModifier = { "DamageWeightModifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventDamageCharacter_Parms, DamageWeightModifier), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_DamageCharacter_Statics::NewProp_DamageTypeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_DamageCharacter_Statics::NewProp_DamageTypeName = { "DamageTypeName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventDamageCharacter_Parms, DamageTypeName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_DamageCharacter_Statics::NewProp_DamageTypeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_DamageCharacter_Statics::NewProp_DamageTypeName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_DamageCharacter_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventDamageCharacter_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_DamageCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_DamageCharacter_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_DamageCharacter_Statics::NewProp_DamageWeight_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_DamageCharacter_Statics::NewProp_DamageWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_DamageCharacter_Statics::NewProp_DamageWeightModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_DamageCharacter_Statics::NewProp_DamageTypeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_DamageCharacter_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_DamageCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_DamageCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "DamageCharacter", nullptr, nullptr, sizeof(SBZCheatManager_eventDamageCharacter_Parms), Z_Construct_UFunction_USBZCheatManager_DamageCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_DamageCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_DamageCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_DamageCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_DamageCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_DamageCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_DamagePlayer_Statics
	{
		struct SBZCheatManager_eventDamagePlayer_Parms
		{
			float Damage;
			ESBZDamageWeight DamageWeight;
			int32 DamageWeightModifier;
			FName DamageTypeName;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DamageWeight_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DamageWeight;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DamageWeightModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageTypeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DamageTypeName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_DamagePlayer_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventDamagePlayer_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCheatManager_DamagePlayer_Statics::NewProp_DamageWeight_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCheatManager_DamagePlayer_Statics::NewProp_DamageWeight = { "DamageWeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventDamagePlayer_Parms, DamageWeight), Z_Construct_UEnum_Starbreeze_ESBZDamageWeight, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_DamagePlayer_Statics::NewProp_DamageWeightModifier = { "DamageWeightModifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventDamagePlayer_Parms, DamageWeightModifier), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_DamagePlayer_Statics::NewProp_DamageTypeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_DamagePlayer_Statics::NewProp_DamageTypeName = { "DamageTypeName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventDamagePlayer_Parms, DamageTypeName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_DamagePlayer_Statics::NewProp_DamageTypeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_DamagePlayer_Statics::NewProp_DamageTypeName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_DamagePlayer_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventDamagePlayer_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_DamagePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_DamagePlayer_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_DamagePlayer_Statics::NewProp_DamageWeight_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_DamagePlayer_Statics::NewProp_DamageWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_DamagePlayer_Statics::NewProp_DamageWeightModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_DamagePlayer_Statics::NewProp_DamageTypeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_DamagePlayer_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_DamagePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_DamagePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "DamagePlayer", nullptr, nullptr, sizeof(SBZCheatManager_eventDamagePlayer_Parms), Z_Construct_UFunction_USBZCheatManager_DamagePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_DamagePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_DamagePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_DamagePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_DamagePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_DamagePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_DebugCreateBloodSplatterImpact_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_DebugCreateBloodSplatterImpact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_DebugCreateBloodSplatterImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "DebugCreateBloodSplatterImpact", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_DebugCreateBloodSplatterImpact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_DebugCreateBloodSplatterImpact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_DebugCreateBloodSplatterImpact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_DebugCreateBloodSplatterImpact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_DebugCreateExplosionImpact_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_DebugCreateExplosionImpact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_DebugCreateExplosionImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "DebugCreateExplosionImpact", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_DebugCreateExplosionImpact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_DebugCreateExplosionImpact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_DebugCreateExplosionImpact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_DebugCreateExplosionImpact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_DebugCreateFootstepImpact_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_DebugCreateFootstepImpact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_DebugCreateFootstepImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "DebugCreateFootstepImpact", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_DebugCreateFootstepImpact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_DebugCreateFootstepImpact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_DebugCreateFootstepImpact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_DebugCreateFootstepImpact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_DebugCreateProjectileImpact_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_DebugCreateProjectileImpact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_DebugCreateProjectileImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "DebugCreateProjectileImpact", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_DebugCreateProjectileImpact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_DebugCreateProjectileImpact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_DebugCreateProjectileImpact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_DebugCreateProjectileImpact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_DebugShowSubtitle_Statics
	{
		struct SBZCheatManager_eventDebugShowSubtitle_Parms
		{
			FString LocID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_DebugShowSubtitle_Statics::NewProp_LocID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManager_DebugShowSubtitle_Statics::NewProp_LocID = { "LocID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventDebugShowSubtitle_Parms, LocID), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_DebugShowSubtitle_Statics::NewProp_LocID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_DebugShowSubtitle_Statics::NewProp_LocID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_DebugShowSubtitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_DebugShowSubtitle_Statics::NewProp_LocID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_DebugShowSubtitle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_DebugShowSubtitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "DebugShowSubtitle", nullptr, nullptr, sizeof(SBZCheatManager_eventDebugShowSubtitle_Parms), Z_Construct_UFunction_USBZCheatManager_DebugShowSubtitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_DebugShowSubtitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_DebugShowSubtitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_DebugShowSubtitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_DebugShowSubtitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_DebugShowSubtitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_DebugVehicleSplineData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_DebugVehicleSplineData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_DebugVehicleSplineData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "DebugVehicleSplineData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_DebugVehicleSplineData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_DebugVehicleSplineData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_DebugVehicleSplineData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_DebugVehicleSplineData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_DefeatCrewAI_Statics
	{
		struct SBZCheatManager_eventDefeatCrewAI_Parms
		{
			int32 CrewAIIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CrewAIIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_DefeatCrewAI_Statics::NewProp_CrewAIIndex = { "CrewAIIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventDefeatCrewAI_Parms, CrewAIIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_DefeatCrewAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_DefeatCrewAI_Statics::NewProp_CrewAIIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_DefeatCrewAI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_DefeatCrewAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "DefeatCrewAI", nullptr, nullptr, sizeof(SBZCheatManager_eventDefeatCrewAI_Parms), Z_Construct_UFunction_USBZCheatManager_DefeatCrewAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_DefeatCrewAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_DefeatCrewAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_DefeatCrewAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_DefeatCrewAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_DefeatCrewAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_DefeatPlayer_Statics
	{
		struct SBZCheatManager_eventDefeatPlayer_Parms
		{
			bool bIsDirectIntoCustody;
			int32 PlayerIndex;
		};
		static void NewProp_bIsDirectIntoCustody_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDirectIntoCustody;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCheatManager_DefeatPlayer_Statics::NewProp_bIsDirectIntoCustody_SetBit(void* Obj)
	{
		((SBZCheatManager_eventDefeatPlayer_Parms*)Obj)->bIsDirectIntoCustody = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_DefeatPlayer_Statics::NewProp_bIsDirectIntoCustody = { "bIsDirectIntoCustody", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventDefeatPlayer_Parms), &Z_Construct_UFunction_USBZCheatManager_DefeatPlayer_Statics::NewProp_bIsDirectIntoCustody_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_DefeatPlayer_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventDefeatPlayer_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_DefeatPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_DefeatPlayer_Statics::NewProp_bIsDirectIntoCustody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_DefeatPlayer_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_DefeatPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_DefeatPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "DefeatPlayer", nullptr, nullptr, sizeof(SBZCheatManager_eventDefeatPlayer_Parms), Z_Construct_UFunction_USBZCheatManager_DefeatPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_DefeatPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_DefeatPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_DefeatPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_DefeatPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_DefeatPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_DefeatTarget_Statics
	{
		struct SBZCheatManager_eventDefeatTarget_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_DefeatTarget_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventDefeatTarget_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_DefeatTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_DefeatTarget_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_DefeatTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_DefeatTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "DefeatTarget", nullptr, nullptr, sizeof(SBZCheatManager_eventDefeatTarget_Parms), Z_Construct_UFunction_USBZCheatManager_DefeatTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_DefeatTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_DefeatTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_DefeatTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_DefeatTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_DefeatTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_DestroyAllAI_Statics
	{
		struct SBZCheatManager_eventDestroyAllAI_Parms
		{
			bool bOnlyRagdolls;
		};
		static void NewProp_bOnlyRagdolls_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyRagdolls;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCheatManager_DestroyAllAI_Statics::NewProp_bOnlyRagdolls_SetBit(void* Obj)
	{
		((SBZCheatManager_eventDestroyAllAI_Parms*)Obj)->bOnlyRagdolls = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_DestroyAllAI_Statics::NewProp_bOnlyRagdolls = { "bOnlyRagdolls", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventDestroyAllAI_Parms), &Z_Construct_UFunction_USBZCheatManager_DestroyAllAI_Statics::NewProp_bOnlyRagdolls_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_DestroyAllAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_DestroyAllAI_Statics::NewProp_bOnlyRagdolls,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_DestroyAllAI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_DestroyAllAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "DestroyAllAI", nullptr, nullptr, sizeof(SBZCheatManager_eventDestroyAllAI_Parms), Z_Construct_UFunction_USBZCheatManager_DestroyAllAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_DestroyAllAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_DestroyAllAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_DestroyAllAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_DestroyAllAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_DestroyAllAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_DestroyAllDebris_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_DestroyAllDebris_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_DestroyAllDebris_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "DestroyAllDebris", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_DestroyAllDebris_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_DestroyAllDebris_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_DestroyAllDebris()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_DestroyAllDebris_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_DestroyTargetAI_Statics
	{
		struct SBZCheatManager_eventDestroyTargetAI_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_DestroyTargetAI_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventDestroyTargetAI_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_DestroyTargetAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_DestroyTargetAI_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_DestroyTargetAI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_DestroyTargetAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "DestroyTargetAI", nullptr, nullptr, sizeof(SBZCheatManager_eventDestroyTargetAI_Parms), Z_Construct_UFunction_USBZCheatManager_DestroyTargetAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_DestroyTargetAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_DestroyTargetAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_DestroyTargetAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_DestroyTargetAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_DestroyTargetAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_DumpPlayersMergePartyStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_DumpPlayersMergePartyStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_DumpPlayersMergePartyStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "DumpPlayersMergePartyStatus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_DumpPlayersMergePartyStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_DumpPlayersMergePartyStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_DumpPlayersMergePartyStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_DumpPlayersMergePartyStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_EquipOverkillWeapon_Statics
	{
		struct SBZCheatManager_eventEquipOverkillWeapon_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_EquipOverkillWeapon_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventEquipOverkillWeapon_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_EquipOverkillWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_EquipOverkillWeapon_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_EquipOverkillWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_EquipOverkillWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "EquipOverkillWeapon", nullptr, nullptr, sizeof(SBZCheatManager_eventEquipOverkillWeapon_Parms), Z_Construct_UFunction_USBZCheatManager_EquipOverkillWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_EquipOverkillWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_EquipOverkillWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_EquipOverkillWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_EquipOverkillWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_EquipOverkillWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_FindBlocker_Statics
	{
		struct SBZCheatManager_eventFindBlocker_Parms
		{
			bool bIsComplex;
			float TraceDistance;
			float TraceRadius;
			float OverlapDistance;
			float OverlapRadius;
			int32 MaxHitCountTrace;
			int32 MaxHitCountOverlap;
			float DrawDuration;
			bool bIsDrawPersistent;
		};
		static void NewProp_bIsComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsComplex;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceRadius;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverlapDistance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverlapRadius;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxHitCountTrace;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxHitCountOverlap;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DrawDuration;
		static void NewProp_bIsDrawPersistent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDrawPersistent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCheatManager_FindBlocker_Statics::NewProp_bIsComplex_SetBit(void* Obj)
	{
		((SBZCheatManager_eventFindBlocker_Parms*)Obj)->bIsComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_FindBlocker_Statics::NewProp_bIsComplex = { "bIsComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventFindBlocker_Parms), &Z_Construct_UFunction_USBZCheatManager_FindBlocker_Statics::NewProp_bIsComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_FindBlocker_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventFindBlocker_Parms, TraceDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_FindBlocker_Statics::NewProp_TraceRadius = { "TraceRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventFindBlocker_Parms, TraceRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_FindBlocker_Statics::NewProp_OverlapDistance = { "OverlapDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventFindBlocker_Parms, OverlapDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_FindBlocker_Statics::NewProp_OverlapRadius = { "OverlapRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventFindBlocker_Parms, OverlapRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_FindBlocker_Statics::NewProp_MaxHitCountTrace = { "MaxHitCountTrace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventFindBlocker_Parms, MaxHitCountTrace), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_FindBlocker_Statics::NewProp_MaxHitCountOverlap = { "MaxHitCountOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventFindBlocker_Parms, MaxHitCountOverlap), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_FindBlocker_Statics::NewProp_DrawDuration = { "DrawDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventFindBlocker_Parms, DrawDuration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZCheatManager_FindBlocker_Statics::NewProp_bIsDrawPersistent_SetBit(void* Obj)
	{
		((SBZCheatManager_eventFindBlocker_Parms*)Obj)->bIsDrawPersistent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_FindBlocker_Statics::NewProp_bIsDrawPersistent = { "bIsDrawPersistent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventFindBlocker_Parms), &Z_Construct_UFunction_USBZCheatManager_FindBlocker_Statics::NewProp_bIsDrawPersistent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_FindBlocker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_FindBlocker_Statics::NewProp_bIsComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_FindBlocker_Statics::NewProp_TraceDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_FindBlocker_Statics::NewProp_TraceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_FindBlocker_Statics::NewProp_OverlapDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_FindBlocker_Statics::NewProp_OverlapRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_FindBlocker_Statics::NewProp_MaxHitCountTrace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_FindBlocker_Statics::NewProp_MaxHitCountOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_FindBlocker_Statics::NewProp_DrawDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_FindBlocker_Statics::NewProp_bIsDrawPersistent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_FindBlocker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_FindBlocker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "FindBlocker", nullptr, nullptr, sizeof(SBZCheatManager_eventFindBlocker_Parms), Z_Construct_UFunction_USBZCheatManager_FindBlocker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_FindBlocker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_FindBlocker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_FindBlocker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_FindBlocker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_FindBlocker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_FindClassReferences_Statics
	{
		struct SBZCheatManager_eventFindClassReferences_Parms
		{
			FName ClassName;
			bool bIsSubClassesIncluded;
			bool bIsBlueprintsIncluded;
			bool bIsAssetsLoaded;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClassName;
		static void NewProp_bIsSubClassesIncluded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSubClassesIncluded;
		static void NewProp_bIsBlueprintsIncluded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBlueprintsIncluded;
		static void NewProp_bIsAssetsLoaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAssetsLoaded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_FindClassReferences_Statics::NewProp_ClassName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_FindClassReferences_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventFindClassReferences_Parms, ClassName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_FindClassReferences_Statics::NewProp_ClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_FindClassReferences_Statics::NewProp_ClassName_MetaData)) };
	void Z_Construct_UFunction_USBZCheatManager_FindClassReferences_Statics::NewProp_bIsSubClassesIncluded_SetBit(void* Obj)
	{
		((SBZCheatManager_eventFindClassReferences_Parms*)Obj)->bIsSubClassesIncluded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_FindClassReferences_Statics::NewProp_bIsSubClassesIncluded = { "bIsSubClassesIncluded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventFindClassReferences_Parms), &Z_Construct_UFunction_USBZCheatManager_FindClassReferences_Statics::NewProp_bIsSubClassesIncluded_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZCheatManager_FindClassReferences_Statics::NewProp_bIsBlueprintsIncluded_SetBit(void* Obj)
	{
		((SBZCheatManager_eventFindClassReferences_Parms*)Obj)->bIsBlueprintsIncluded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_FindClassReferences_Statics::NewProp_bIsBlueprintsIncluded = { "bIsBlueprintsIncluded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventFindClassReferences_Parms), &Z_Construct_UFunction_USBZCheatManager_FindClassReferences_Statics::NewProp_bIsBlueprintsIncluded_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZCheatManager_FindClassReferences_Statics::NewProp_bIsAssetsLoaded_SetBit(void* Obj)
	{
		((SBZCheatManager_eventFindClassReferences_Parms*)Obj)->bIsAssetsLoaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_FindClassReferences_Statics::NewProp_bIsAssetsLoaded = { "bIsAssetsLoaded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventFindClassReferences_Parms), &Z_Construct_UFunction_USBZCheatManager_FindClassReferences_Statics::NewProp_bIsAssetsLoaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_FindClassReferences_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_FindClassReferences_Statics::NewProp_ClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_FindClassReferences_Statics::NewProp_bIsSubClassesIncluded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_FindClassReferences_Statics::NewProp_bIsBlueprintsIncluded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_FindClassReferences_Statics::NewProp_bIsAssetsLoaded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_FindClassReferences_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_FindClassReferences_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "FindClassReferences", nullptr, nullptr, sizeof(SBZCheatManager_eventFindClassReferences_Parms), Z_Construct_UFunction_USBZCheatManager_FindClassReferences_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_FindClassReferences_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_FindClassReferences_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_FindClassReferences_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_FindClassReferences()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_FindClassReferences_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuff_Statics
	{
		struct SBZCheatManager_eventGainPlayerAbilityBuff_Parms
		{
			ESBZPlayerAbilityBuffType Type;
			bool bIsRefreshAllowed;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static void NewProp_bIsRefreshAllowed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRefreshAllowed;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuff_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuff_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventGainPlayerAbilityBuff_Parms, Type), Z_Construct_UEnum_Starbreeze_ESBZPlayerAbilityBuffType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuff_Statics::NewProp_bIsRefreshAllowed_SetBit(void* Obj)
	{
		((SBZCheatManager_eventGainPlayerAbilityBuff_Parms*)Obj)->bIsRefreshAllowed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuff_Statics::NewProp_bIsRefreshAllowed = { "bIsRefreshAllowed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventGainPlayerAbilityBuff_Parms), &Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuff_Statics::NewProp_bIsRefreshAllowed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuff_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventGainPlayerAbilityBuff_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuff_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuff_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuff_Statics::NewProp_bIsRefreshAllowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuff_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "GainPlayerAbilityBuff", nullptr, nullptr, sizeof(SBZCheatManager_eventGainPlayerAbilityBuff_Parms), Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuffAll_Statics
	{
		struct SBZCheatManager_eventGainPlayerAbilityBuffAll_Parms
		{
			bool bIsRefreshAllowed;
			int32 PlayerIndex;
		};
		static void NewProp_bIsRefreshAllowed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRefreshAllowed;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuffAll_Statics::NewProp_bIsRefreshAllowed_SetBit(void* Obj)
	{
		((SBZCheatManager_eventGainPlayerAbilityBuffAll_Parms*)Obj)->bIsRefreshAllowed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuffAll_Statics::NewProp_bIsRefreshAllowed = { "bIsRefreshAllowed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventGainPlayerAbilityBuffAll_Parms), &Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuffAll_Statics::NewProp_bIsRefreshAllowed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuffAll_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventGainPlayerAbilityBuffAll_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuffAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuffAll_Statics::NewProp_bIsRefreshAllowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuffAll_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuffAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuffAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "GainPlayerAbilityBuffAll", nullptr, nullptr, sizeof(SBZCheatManager_eventGainPlayerAbilityBuffAll_Parms), Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuffAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuffAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuffAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuffAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuffAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuffAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_GamepadOpenInGameCheatMenu_Statics
	{
		struct SBZCheatManager_eventGamepadOpenInGameCheatMenu_Parms
		{
			FKey Key;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCheatManager_GamepadOpenInGameCheatMenu_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventGamepadOpenInGameCheatMenu_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_GamepadOpenInGameCheatMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_GamepadOpenInGameCheatMenu_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_GamepadOpenInGameCheatMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_GamepadOpenInGameCheatMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "GamepadOpenInGameCheatMenu", nullptr, nullptr, sizeof(SBZCheatManager_eventGamepadOpenInGameCheatMenu_Parms), Z_Construct_UFunction_USBZCheatManager_GamepadOpenInGameCheatMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_GamepadOpenInGameCheatMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_GamepadOpenInGameCheatMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_GamepadOpenInGameCheatMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_GamepadOpenInGameCheatMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_GamepadOpenInGameCheatMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_GiveAmmo_Statics
	{
		struct SBZCheatManager_eventGiveAmmo_Parms
		{
			int32 Amount;
			int32 WeaponIndex;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_GiveAmmo_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventGiveAmmo_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_GiveAmmo_Statics::NewProp_WeaponIndex = { "WeaponIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventGiveAmmo_Parms, WeaponIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_GiveAmmo_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventGiveAmmo_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_GiveAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_GiveAmmo_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_GiveAmmo_Statics::NewProp_WeaponIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_GiveAmmo_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_GiveAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_GiveAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "GiveAmmo", nullptr, nullptr, sizeof(SBZCheatManager_eventGiveAmmo_Parms), Z_Construct_UFunction_USBZCheatManager_GiveAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_GiveAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_GiveAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_GiveAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_GiveAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_GiveAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_GivePlaceableAmmo_Statics
	{
		struct SBZCheatManager_eventGivePlaceableAmmo_Parms
		{
			int32 Count;
			int32 PlaceableIndex;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlaceableIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_GivePlaceableAmmo_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventGivePlaceableAmmo_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_GivePlaceableAmmo_Statics::NewProp_PlaceableIndex = { "PlaceableIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventGivePlaceableAmmo_Parms, PlaceableIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_GivePlaceableAmmo_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventGivePlaceableAmmo_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_GivePlaceableAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_GivePlaceableAmmo_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_GivePlaceableAmmo_Statics::NewProp_PlaceableIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_GivePlaceableAmmo_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_GivePlaceableAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_GivePlaceableAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "GivePlaceableAmmo", nullptr, nullptr, sizeof(SBZCheatManager_eventGivePlaceableAmmo_Parms), Z_Construct_UFunction_USBZCheatManager_GivePlaceableAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_GivePlaceableAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_GivePlaceableAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_GivePlaceableAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_GivePlaceableAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_GivePlaceableAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_GiveThrowableAmmo_Statics
	{
		struct SBZCheatManager_eventGiveThrowableAmmo_Parms
		{
			int32 Count;
			int32 ThrowableIndex;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ThrowableIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_GiveThrowableAmmo_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventGiveThrowableAmmo_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_GiveThrowableAmmo_Statics::NewProp_ThrowableIndex = { "ThrowableIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventGiveThrowableAmmo_Parms, ThrowableIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_GiveThrowableAmmo_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventGiveThrowableAmmo_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_GiveThrowableAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_GiveThrowableAmmo_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_GiveThrowableAmmo_Statics::NewProp_ThrowableIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_GiveThrowableAmmo_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_GiveThrowableAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_GiveThrowableAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "GiveThrowableAmmo", nullptr, nullptr, sizeof(SBZCheatManager_eventGiveThrowableAmmo_Parms), Z_Construct_UFunction_USBZCheatManager_GiveThrowableAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_GiveThrowableAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_GiveThrowableAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_GiveThrowableAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_GiveThrowableAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_GiveThrowableAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_GiveToolAmmo_Statics
	{
		struct SBZCheatManager_eventGiveToolAmmo_Parms
		{
			int32 Count;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_GiveToolAmmo_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventGiveToolAmmo_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_GiveToolAmmo_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventGiveToolAmmo_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_GiveToolAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_GiveToolAmmo_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_GiveToolAmmo_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_GiveToolAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_GiveToolAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "GiveToolAmmo", nullptr, nullptr, sizeof(SBZCheatManager_eventGiveToolAmmo_Parms), Z_Construct_UFunction_USBZCheatManager_GiveToolAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_GiveToolAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_GiveToolAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_GiveToolAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_GiveToolAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_GiveToolAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_GrabInstantLoot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_GrabInstantLoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_GrabInstantLoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "GrabInstantLoot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_GrabInstantLoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_GrabInstantLoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_GrabInstantLoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_GrabInstantLoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_InputActionPlayer_Statics
	{
		struct SBZCheatManager_eventInputActionPlayer_Parms
		{
			FName ActionName;
			TEnumAsByte<EInputEvent> InputEvent;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputEvent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_InputActionPlayer_Statics::NewProp_ActionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_InputActionPlayer_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventInputActionPlayer_Parms, ActionName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_InputActionPlayer_Statics::NewProp_ActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_InputActionPlayer_Statics::NewProp_ActionName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCheatManager_InputActionPlayer_Statics::NewProp_InputEvent = { "InputEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventInputActionPlayer_Parms, InputEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_InputActionPlayer_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventInputActionPlayer_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_InputActionPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_InputActionPlayer_Statics::NewProp_ActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_InputActionPlayer_Statics::NewProp_InputEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_InputActionPlayer_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_InputActionPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_InputActionPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "InputActionPlayer", nullptr, nullptr, sizeof(SBZCheatManager_eventInputActionPlayer_Parms), Z_Construct_UFunction_USBZCheatManager_InputActionPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_InputActionPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_InputActionPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_InputActionPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_InputActionPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_InputActionPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_InputActionTarget_Statics
	{
		struct SBZCheatManager_eventInputActionTarget_Parms
		{
			FName ActionName;
			TEnumAsByte<EInputEvent> InputEvent;
			bool bIsReleaseCancelingAbility;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputEvent;
		static void NewProp_bIsReleaseCancelingAbility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReleaseCancelingAbility;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_InputActionTarget_Statics::NewProp_ActionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_InputActionTarget_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventInputActionTarget_Parms, ActionName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_InputActionTarget_Statics::NewProp_ActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_InputActionTarget_Statics::NewProp_ActionName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCheatManager_InputActionTarget_Statics::NewProp_InputEvent = { "InputEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventInputActionTarget_Parms, InputEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZCheatManager_InputActionTarget_Statics::NewProp_bIsReleaseCancelingAbility_SetBit(void* Obj)
	{
		((SBZCheatManager_eventInputActionTarget_Parms*)Obj)->bIsReleaseCancelingAbility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_InputActionTarget_Statics::NewProp_bIsReleaseCancelingAbility = { "bIsReleaseCancelingAbility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventInputActionTarget_Parms), &Z_Construct_UFunction_USBZCheatManager_InputActionTarget_Statics::NewProp_bIsReleaseCancelingAbility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_InputActionTarget_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventInputActionTarget_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_InputActionTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_InputActionTarget_Statics::NewProp_ActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_InputActionTarget_Statics::NewProp_InputEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_InputActionTarget_Statics::NewProp_bIsReleaseCancelingAbility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_InputActionTarget_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_InputActionTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_InputActionTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "InputActionTarget", nullptr, nullptr, sizeof(SBZCheatManager_eventInputActionTarget_Parms), Z_Construct_UFunction_USBZCheatManager_InputActionTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_InputActionTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_InputActionTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_InputActionTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_InputActionTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_InputActionTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_InputAxisPlayer_Statics
	{
		struct SBZCheatManager_eventInputAxisPlayer_Parms
		{
			FName AxisName;
			float InputValue;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxisName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_InputAxisPlayer_Statics::NewProp_AxisName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_InputAxisPlayer_Statics::NewProp_AxisName = { "AxisName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventInputAxisPlayer_Parms, AxisName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_InputAxisPlayer_Statics::NewProp_AxisName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_InputAxisPlayer_Statics::NewProp_AxisName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_InputAxisPlayer_Statics::NewProp_InputValue = { "InputValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventInputAxisPlayer_Parms, InputValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_InputAxisPlayer_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventInputAxisPlayer_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_InputAxisPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_InputAxisPlayer_Statics::NewProp_AxisName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_InputAxisPlayer_Statics::NewProp_InputValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_InputAxisPlayer_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_InputAxisPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_InputAxisPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "InputAxisPlayer", nullptr, nullptr, sizeof(SBZCheatManager_eventInputAxisPlayer_Parms), Z_Construct_UFunction_USBZCheatManager_InputAxisPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_InputAxisPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_InputAxisPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_InputAxisPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_InputAxisPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_InputAxisPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_InputAxisTarget_Statics
	{
		struct SBZCheatManager_eventInputAxisTarget_Parms
		{
			FName AxisName;
			float InputValue;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxisName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_InputAxisTarget_Statics::NewProp_AxisName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_InputAxisTarget_Statics::NewProp_AxisName = { "AxisName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventInputAxisTarget_Parms, AxisName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_InputAxisTarget_Statics::NewProp_AxisName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_InputAxisTarget_Statics::NewProp_AxisName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_InputAxisTarget_Statics::NewProp_InputValue = { "InputValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventInputAxisTarget_Parms, InputValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_InputAxisTarget_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventInputAxisTarget_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_InputAxisTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_InputAxisTarget_Statics::NewProp_AxisName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_InputAxisTarget_Statics::NewProp_InputValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_InputAxisTarget_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_InputAxisTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_InputAxisTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "InputAxisTarget", nullptr, nullptr, sizeof(SBZCheatManager_eventInputAxisTarget_Parms), Z_Construct_UFunction_USBZCheatManager_InputAxisTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_InputAxisTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_InputAxisTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_InputAxisTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_InputAxisTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_InputAxisTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_InputKeyPlayer_Statics
	{
		struct SBZCheatManager_eventInputKeyPlayer_Parms
		{
			FKey Key;
			TEnumAsByte<EInputEvent> InputEvent;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputEvent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_InputKeyPlayer_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCheatManager_InputKeyPlayer_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventInputKeyPlayer_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_InputKeyPlayer_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_InputKeyPlayer_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCheatManager_InputKeyPlayer_Statics::NewProp_InputEvent = { "InputEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventInputKeyPlayer_Parms, InputEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_InputKeyPlayer_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventInputKeyPlayer_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_InputKeyPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_InputKeyPlayer_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_InputKeyPlayer_Statics::NewProp_InputEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_InputKeyPlayer_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_InputKeyPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_InputKeyPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "InputKeyPlayer", nullptr, nullptr, sizeof(SBZCheatManager_eventInputKeyPlayer_Parms), Z_Construct_UFunction_USBZCheatManager_InputKeyPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_InputKeyPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_InputKeyPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_InputKeyPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_InputKeyPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_InputKeyPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_InputKeyTarget_Statics
	{
		struct SBZCheatManager_eventInputKeyTarget_Parms
		{
			FKey Key;
			TEnumAsByte<EInputEvent> InputEvent;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputEvent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_InputKeyTarget_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCheatManager_InputKeyTarget_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventInputKeyTarget_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_InputKeyTarget_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_InputKeyTarget_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCheatManager_InputKeyTarget_Statics::NewProp_InputEvent = { "InputEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventInputKeyTarget_Parms, InputEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_InputKeyTarget_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventInputKeyTarget_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_InputKeyTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_InputKeyTarget_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_InputKeyTarget_Statics::NewProp_InputEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_InputKeyTarget_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_InputKeyTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_InputKeyTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "InputKeyTarget", nullptr, nullptr, sizeof(SBZCheatManager_eventInputKeyTarget_Parms), Z_Construct_UFunction_USBZCheatManager_InputKeyTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_InputKeyTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_InputKeyTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_InputKeyTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_InputKeyTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_InputKeyTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_InputVectorAxisPlayer_Statics
	{
		struct SBZCheatManager_eventInputVectorAxisPlayer_Parms
		{
			FName AxisName;
			float X;
			float Y;
			float Z;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxisName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Z;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_InputVectorAxisPlayer_Statics::NewProp_AxisName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_InputVectorAxisPlayer_Statics::NewProp_AxisName = { "AxisName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventInputVectorAxisPlayer_Parms, AxisName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_InputVectorAxisPlayer_Statics::NewProp_AxisName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_InputVectorAxisPlayer_Statics::NewProp_AxisName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_InputVectorAxisPlayer_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventInputVectorAxisPlayer_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_InputVectorAxisPlayer_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventInputVectorAxisPlayer_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_InputVectorAxisPlayer_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventInputVectorAxisPlayer_Parms, Z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_InputVectorAxisPlayer_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventInputVectorAxisPlayer_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_InputVectorAxisPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_InputVectorAxisPlayer_Statics::NewProp_AxisName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_InputVectorAxisPlayer_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_InputVectorAxisPlayer_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_InputVectorAxisPlayer_Statics::NewProp_Z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_InputVectorAxisPlayer_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_InputVectorAxisPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_InputVectorAxisPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "InputVectorAxisPlayer", nullptr, nullptr, sizeof(SBZCheatManager_eventInputVectorAxisPlayer_Parms), Z_Construct_UFunction_USBZCheatManager_InputVectorAxisPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_InputVectorAxisPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_InputVectorAxisPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_InputVectorAxisPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_InputVectorAxisPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_InputVectorAxisPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_InputVectorAxisTarget_Statics
	{
		struct SBZCheatManager_eventInputVectorAxisTarget_Parms
		{
			FName AxisName;
			float X;
			float Y;
			float Z;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxisName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Z;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_InputVectorAxisTarget_Statics::NewProp_AxisName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_InputVectorAxisTarget_Statics::NewProp_AxisName = { "AxisName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventInputVectorAxisTarget_Parms, AxisName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_InputVectorAxisTarget_Statics::NewProp_AxisName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_InputVectorAxisTarget_Statics::NewProp_AxisName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_InputVectorAxisTarget_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventInputVectorAxisTarget_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_InputVectorAxisTarget_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventInputVectorAxisTarget_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_InputVectorAxisTarget_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventInputVectorAxisTarget_Parms, Z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_InputVectorAxisTarget_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventInputVectorAxisTarget_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_InputVectorAxisTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_InputVectorAxisTarget_Statics::NewProp_AxisName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_InputVectorAxisTarget_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_InputVectorAxisTarget_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_InputVectorAxisTarget_Statics::NewProp_Z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_InputVectorAxisTarget_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_InputVectorAxisTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_InputVectorAxisTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "InputVectorAxisTarget", nullptr, nullptr, sizeof(SBZCheatManager_eventInputVectorAxisTarget_Parms), Z_Construct_UFunction_USBZCheatManager_InputVectorAxisTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_InputVectorAxisTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_InputVectorAxisTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_InputVectorAxisTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_InputVectorAxisTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_InputVectorAxisTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_InteractAITarget_Statics
	{
		struct SBZCheatManager_eventInteractAITarget_Parms
		{
			ESBZInteractionAction Action;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Action;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCheatManager_InteractAITarget_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCheatManager_InteractAITarget_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventInteractAITarget_Parms, Action), Z_Construct_UEnum_Starbreeze_ESBZInteractionAction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_InteractAITarget_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventInteractAITarget_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_InteractAITarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_InteractAITarget_Statics::NewProp_Action_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_InteractAITarget_Statics::NewProp_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_InteractAITarget_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_InteractAITarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_InteractAITarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "InteractAITarget", nullptr, nullptr, sizeof(SBZCheatManager_eventInteractAITarget_Parms), Z_Construct_UFunction_USBZCheatManager_InteractAITarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_InteractAITarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_InteractAITarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_InteractAITarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_InteractAITarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_InteractAITarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_KillAllAI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_KillAllAI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_KillAllAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "KillAllAI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_KillAllAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_KillAllAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_KillAllAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_KillAllAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_KillAllCrewAI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_KillAllCrewAI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_KillAllCrewAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "KillAllCrewAI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_KillAllCrewAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_KillAllCrewAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_KillAllCrewAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_KillAllCrewAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_KillPlayer_Statics
	{
		struct SBZCheatManager_eventKillPlayer_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_KillPlayer_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventKillPlayer_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_KillPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_KillPlayer_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_KillPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_KillPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "KillPlayer", nullptr, nullptr, sizeof(SBZCheatManager_eventKillPlayer_Parms), Z_Construct_UFunction_USBZCheatManager_KillPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_KillPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_KillPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_KillPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_KillPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_KillPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_KillTarget_Statics
	{
		struct SBZCheatManager_eventKillTarget_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_KillTarget_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventKillTarget_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_KillTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_KillTarget_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_KillTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_KillTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "KillTarget", nullptr, nullptr, sizeof(SBZCheatManager_eventKillTarget_Parms), Z_Construct_UFunction_USBZCheatManager_KillTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_KillTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_KillTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_KillTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_KillTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_KillTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_ListenToRewardLogs_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_ListenToRewardLogs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_ListenToRewardLogs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "ListenToRewardLogs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_ListenToRewardLogs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ListenToRewardLogs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_ListenToRewardLogs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_ListenToRewardLogs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_LobotomizeAllAI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_LobotomizeAllAI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_LobotomizeAllAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "LobotomizeAllAI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_LobotomizeAllAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_LobotomizeAllAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_LobotomizeAllAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_LobotomizeAllAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_LobotomizeAllCrewAI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_LobotomizeAllCrewAI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_LobotomizeAllCrewAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "LobotomizeAllCrewAI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_LobotomizeAllCrewAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_LobotomizeAllCrewAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_LobotomizeAllCrewAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_LobotomizeAllCrewAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_LogSceneComponents_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_LogSceneComponents_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_LogSceneComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "LogSceneComponents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_LogSceneComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_LogSceneComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_LogSceneComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_LogSceneComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_MoveDebugActorTarget_Statics
	{
		struct SBZCheatManager_eventMoveDebugActorTarget_Parms
		{
			ESBZAIOrderMode OrderMode;
			FName MoveOrderAssetName;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OrderMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OrderMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveOrderAssetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MoveOrderAssetName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCheatManager_MoveDebugActorTarget_Statics::NewProp_OrderMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCheatManager_MoveDebugActorTarget_Statics::NewProp_OrderMode = { "OrderMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventMoveDebugActorTarget_Parms, OrderMode), Z_Construct_UEnum_Starbreeze_ESBZAIOrderMode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_MoveDebugActorTarget_Statics::NewProp_MoveOrderAssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_MoveDebugActorTarget_Statics::NewProp_MoveOrderAssetName = { "MoveOrderAssetName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventMoveDebugActorTarget_Parms, MoveOrderAssetName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_MoveDebugActorTarget_Statics::NewProp_MoveOrderAssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_MoveDebugActorTarget_Statics::NewProp_MoveOrderAssetName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_MoveDebugActorTarget_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventMoveDebugActorTarget_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_MoveDebugActorTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_MoveDebugActorTarget_Statics::NewProp_OrderMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_MoveDebugActorTarget_Statics::NewProp_OrderMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_MoveDebugActorTarget_Statics::NewProp_MoveOrderAssetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_MoveDebugActorTarget_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_MoveDebugActorTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_MoveDebugActorTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "MoveDebugActorTarget", nullptr, nullptr, sizeof(SBZCheatManager_eventMoveDebugActorTarget_Parms), Z_Construct_UFunction_USBZCheatManager_MoveDebugActorTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_MoveDebugActorTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_MoveDebugActorTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_MoveDebugActorTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_MoveDebugActorTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_MoveDebugActorTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics
	{
		struct SBZCheatManager_eventOverlapSphere_Parms
		{
			TEnumAsByte<ECollisionChannel> CollisionChannel;
			FName Profile;
			bool bIsObjectType;
			bool bIsComplex;
			float Distance;
			int32 MaxHitCount;
			float Radius;
			float DrawDuration;
			bool bIsDrawPersistent;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Profile_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Profile;
		static void NewProp_bIsObjectType_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsObjectType;
		static void NewProp_bIsComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsComplex;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxHitCount;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DrawDuration;
		static void NewProp_bIsDrawPersistent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDrawPersistent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventOverlapSphere_Parms, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::NewProp_Profile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventOverlapSphere_Parms, Profile), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::NewProp_Profile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::NewProp_Profile_MetaData)) };
	void Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::NewProp_bIsObjectType_SetBit(void* Obj)
	{
		((SBZCheatManager_eventOverlapSphere_Parms*)Obj)->bIsObjectType = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::NewProp_bIsObjectType = { "bIsObjectType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventOverlapSphere_Parms), &Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::NewProp_bIsObjectType_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::NewProp_bIsComplex_SetBit(void* Obj)
	{
		((SBZCheatManager_eventOverlapSphere_Parms*)Obj)->bIsComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::NewProp_bIsComplex = { "bIsComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventOverlapSphere_Parms), &Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::NewProp_bIsComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventOverlapSphere_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::NewProp_MaxHitCount = { "MaxHitCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventOverlapSphere_Parms, MaxHitCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventOverlapSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::NewProp_DrawDuration = { "DrawDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventOverlapSphere_Parms, DrawDuration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::NewProp_bIsDrawPersistent_SetBit(void* Obj)
	{
		((SBZCheatManager_eventOverlapSphere_Parms*)Obj)->bIsDrawPersistent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::NewProp_bIsDrawPersistent = { "bIsDrawPersistent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventOverlapSphere_Parms), &Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::NewProp_bIsDrawPersistent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::NewProp_CollisionChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::NewProp_Profile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::NewProp_bIsObjectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::NewProp_bIsComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::NewProp_MaxHitCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::NewProp_DrawDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::NewProp_bIsDrawPersistent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "OverlapSphere", nullptr, nullptr, sizeof(SBZCheatManager_eventOverlapSphere_Parms), Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_OverlapSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_OverlapSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_PerceptionOnAllAI_Statics
	{
		struct SBZCheatManager_eventPerceptionOnAllAI_Parms
		{
			bool bShouldHavePerception;
		};
		static void NewProp_bShouldHavePerception_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldHavePerception;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCheatManager_PerceptionOnAllAI_Statics::NewProp_bShouldHavePerception_SetBit(void* Obj)
	{
		((SBZCheatManager_eventPerceptionOnAllAI_Parms*)Obj)->bShouldHavePerception = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_PerceptionOnAllAI_Statics::NewProp_bShouldHavePerception = { "bShouldHavePerception", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventPerceptionOnAllAI_Parms), &Z_Construct_UFunction_USBZCheatManager_PerceptionOnAllAI_Statics::NewProp_bShouldHavePerception_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_PerceptionOnAllAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_PerceptionOnAllAI_Statics::NewProp_bShouldHavePerception,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_PerceptionOnAllAI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_PerceptionOnAllAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "PerceptionOnAllAI", nullptr, nullptr, sizeof(SBZCheatManager_eventPerceptionOnAllAI_Parms), Z_Construct_UFunction_USBZCheatManager_PerceptionOnAllAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_PerceptionOnAllAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_PerceptionOnAllAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_PerceptionOnAllAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_PerceptionOnAllAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_PerceptionOnAllAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_PossessSelf_Statics
	{
		struct SBZCheatManager_eventPossessSelf_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_PossessSelf_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventPossessSelf_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_PossessSelf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_PossessSelf_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_PossessSelf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_PossessSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "PossessSelf", nullptr, nullptr, sizeof(SBZCheatManager_eventPossessSelf_Parms), Z_Construct_UFunction_USBZCheatManager_PossessSelf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_PossessSelf_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_PossessSelf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_PossessSelf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_PossessSelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_PossessSelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_PossessTarget_Statics
	{
		struct SBZCheatManager_eventPossessTarget_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_PossessTarget_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventPossessTarget_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_PossessTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_PossessTarget_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_PossessTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_PossessTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "PossessTarget", nullptr, nullptr, sizeof(SBZCheatManager_eventPossessTarget_Parms), Z_Construct_UFunction_USBZCheatManager_PossessTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_PossessTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_PossessTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_PossessTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_PossessTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_PossessTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_PrintAllInteractable_Statics
	{
		struct SBZCheatManager_eventPrintAllInteractable_Parms
		{
			bool bIsTemplate;
		};
		static void NewProp_bIsTemplate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTemplate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCheatManager_PrintAllInteractable_Statics::NewProp_bIsTemplate_SetBit(void* Obj)
	{
		((SBZCheatManager_eventPrintAllInteractable_Parms*)Obj)->bIsTemplate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_PrintAllInteractable_Statics::NewProp_bIsTemplate = { "bIsTemplate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventPrintAllInteractable_Parms), &Z_Construct_UFunction_USBZCheatManager_PrintAllInteractable_Statics::NewProp_bIsTemplate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_PrintAllInteractable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_PrintAllInteractable_Statics::NewProp_bIsTemplate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_PrintAllInteractable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_PrintAllInteractable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "PrintAllInteractable", nullptr, nullptr, sizeof(SBZCheatManager_eventPrintAllInteractable_Parms), Z_Construct_UFunction_USBZCheatManager_PrintAllInteractable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_PrintAllInteractable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_PrintAllInteractable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_PrintAllInteractable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_PrintAllInteractable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_PrintAllInteractable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_PrintAnimNotifies_Statics
	{
		struct SBZCheatManager_eventPrintAnimNotifies_Parms
		{
			FName NotifyName;
			bool bIsOnlyMontages;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NotifyName;
		static void NewProp_bIsOnlyMontages_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOnlyMontages;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_PrintAnimNotifies_Statics::NewProp_NotifyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_PrintAnimNotifies_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventPrintAnimNotifies_Parms, NotifyName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_PrintAnimNotifies_Statics::NewProp_NotifyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_PrintAnimNotifies_Statics::NewProp_NotifyName_MetaData)) };
	void Z_Construct_UFunction_USBZCheatManager_PrintAnimNotifies_Statics::NewProp_bIsOnlyMontages_SetBit(void* Obj)
	{
		((SBZCheatManager_eventPrintAnimNotifies_Parms*)Obj)->bIsOnlyMontages = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_PrintAnimNotifies_Statics::NewProp_bIsOnlyMontages = { "bIsOnlyMontages", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventPrintAnimNotifies_Parms), &Z_Construct_UFunction_USBZCheatManager_PrintAnimNotifies_Statics::NewProp_bIsOnlyMontages_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_PrintAnimNotifies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_PrintAnimNotifies_Statics::NewProp_NotifyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_PrintAnimNotifies_Statics::NewProp_bIsOnlyMontages,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_PrintAnimNotifies_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_PrintAnimNotifies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "PrintAnimNotifies", nullptr, nullptr, sizeof(SBZCheatManager_eventPrintAnimNotifies_Parms), Z_Construct_UFunction_USBZCheatManager_PrintAnimNotifies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_PrintAnimNotifies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_PrintAnimNotifies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_PrintAnimNotifies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_PrintAnimNotifies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_PrintAnimNotifies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_PrintExperienceMilestone_Statics
	{
		struct SBZCheatManager_eventPrintExperienceMilestone_Parms
		{
			ESBZMilestoneType MilestoneType;
			FString MilestoneName;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MilestoneType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MilestoneType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MilestoneType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MilestoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MilestoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCheatManager_PrintExperienceMilestone_Statics::NewProp_MilestoneType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_PrintExperienceMilestone_Statics::NewProp_MilestoneType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCheatManager_PrintExperienceMilestone_Statics::NewProp_MilestoneType = { "MilestoneType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventPrintExperienceMilestone_Parms, MilestoneType), Z_Construct_UEnum_Starbreeze_ESBZMilestoneType, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_PrintExperienceMilestone_Statics::NewProp_MilestoneType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_PrintExperienceMilestone_Statics::NewProp_MilestoneType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_PrintExperienceMilestone_Statics::NewProp_MilestoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManager_PrintExperienceMilestone_Statics::NewProp_MilestoneName = { "MilestoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventPrintExperienceMilestone_Parms, MilestoneName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_PrintExperienceMilestone_Statics::NewProp_MilestoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_PrintExperienceMilestone_Statics::NewProp_MilestoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_PrintExperienceMilestone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_PrintExperienceMilestone_Statics::NewProp_MilestoneType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_PrintExperienceMilestone_Statics::NewProp_MilestoneType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_PrintExperienceMilestone_Statics::NewProp_MilestoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_PrintExperienceMilestone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_PrintExperienceMilestone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "PrintExperienceMilestone", nullptr, nullptr, sizeof(SBZCheatManager_eventPrintExperienceMilestone_Parms), Z_Construct_UFunction_USBZCheatManager_PrintExperienceMilestone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_PrintExperienceMilestone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_PrintExperienceMilestone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_PrintExperienceMilestone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_PrintExperienceMilestone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_PrintExperienceMilestone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_PrintMissionSeed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_PrintMissionSeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_PrintMissionSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "PrintMissionSeed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_PrintMissionSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_PrintMissionSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_PrintMissionSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_PrintMissionSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_PrintPlayerIDArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_PrintPlayerIDArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_PrintPlayerIDArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "PrintPlayerIDArray", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_PrintPlayerIDArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_PrintPlayerIDArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_PrintPlayerIDArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_PrintPlayerIDArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_PrintRewardLogEvent_Statics
	{
		struct SBZCheatManager_eventPrintRewardLogEvent_Parms
		{
			FSBZEndMissionResultData EndMissionResultData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndMissionResultData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndMissionResultData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_PrintRewardLogEvent_Statics::NewProp_EndMissionResultData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCheatManager_PrintRewardLogEvent_Statics::NewProp_EndMissionResultData = { "EndMissionResultData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventPrintRewardLogEvent_Parms, EndMissionResultData), Z_Construct_UScriptStruct_FSBZEndMissionResultData, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_PrintRewardLogEvent_Statics::NewProp_EndMissionResultData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_PrintRewardLogEvent_Statics::NewProp_EndMissionResultData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_PrintRewardLogEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_PrintRewardLogEvent_Statics::NewProp_EndMissionResultData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_PrintRewardLogEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_PrintRewardLogEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "PrintRewardLogEvent", nullptr, nullptr, sizeof(SBZCheatManager_eventPrintRewardLogEvent_Parms), Z_Construct_UFunction_USBZCheatManager_PrintRewardLogEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_PrintRewardLogEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_PrintRewardLogEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_PrintRewardLogEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_PrintRewardLogEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_PrintRewardLogEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_PrintServerWorldInfo_Statics
	{
		struct SBZCheatManager_eventPrintServerWorldInfo_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_PrintServerWorldInfo_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventPrintServerWorldInfo_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_PrintServerWorldInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_PrintServerWorldInfo_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_PrintServerWorldInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_PrintServerWorldInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "PrintServerWorldInfo", nullptr, nullptr, sizeof(SBZCheatManager_eventPrintServerWorldInfo_Parms), Z_Construct_UFunction_USBZCheatManager_PrintServerWorldInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_PrintServerWorldInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_PrintServerWorldInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_PrintServerWorldInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_PrintServerWorldInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_PrintServerWorldInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_PrintTagChanges_Statics
	{
		struct SBZCheatManager_eventPrintTagChanges_Parms
		{
			bool bIsPrintEnabled;
			FName Tag;
			bool bIsStackTrace;
			int32 PlayerIndex;
		};
		static void NewProp_bIsPrintEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPrintEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static void NewProp_bIsStackTrace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStackTrace;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCheatManager_PrintTagChanges_Statics::NewProp_bIsPrintEnabled_SetBit(void* Obj)
	{
		((SBZCheatManager_eventPrintTagChanges_Parms*)Obj)->bIsPrintEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_PrintTagChanges_Statics::NewProp_bIsPrintEnabled = { "bIsPrintEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventPrintTagChanges_Parms), &Z_Construct_UFunction_USBZCheatManager_PrintTagChanges_Statics::NewProp_bIsPrintEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_PrintTagChanges_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_PrintTagChanges_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventPrintTagChanges_Parms, Tag), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_PrintTagChanges_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_PrintTagChanges_Statics::NewProp_Tag_MetaData)) };
	void Z_Construct_UFunction_USBZCheatManager_PrintTagChanges_Statics::NewProp_bIsStackTrace_SetBit(void* Obj)
	{
		((SBZCheatManager_eventPrintTagChanges_Parms*)Obj)->bIsStackTrace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_PrintTagChanges_Statics::NewProp_bIsStackTrace = { "bIsStackTrace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventPrintTagChanges_Parms), &Z_Construct_UFunction_USBZCheatManager_PrintTagChanges_Statics::NewProp_bIsStackTrace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_PrintTagChanges_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventPrintTagChanges_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_PrintTagChanges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_PrintTagChanges_Statics::NewProp_bIsPrintEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_PrintTagChanges_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_PrintTagChanges_Statics::NewProp_bIsStackTrace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_PrintTagChanges_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_PrintTagChanges_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_PrintTagChanges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "PrintTagChanges", nullptr, nullptr, sizeof(SBZCheatManager_eventPrintTagChanges_Parms), Z_Construct_UFunction_USBZCheatManager_PrintTagChanges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_PrintTagChanges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_PrintTagChanges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_PrintTagChanges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_PrintTagChanges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_PrintTagChanges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_PrintTarget_Statics
	{
		struct SBZCheatManager_eventPrintTarget_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_PrintTarget_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventPrintTarget_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_PrintTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_PrintTarget_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_PrintTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_PrintTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "PrintTarget", nullptr, nullptr, sizeof(SBZCheatManager_eventPrintTarget_Parms), Z_Construct_UFunction_USBZCheatManager_PrintTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_PrintTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_PrintTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_PrintTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_PrintTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_PrintTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_PrintTargetTagChanges_Statics
	{
		struct SBZCheatManager_eventPrintTargetTagChanges_Parms
		{
			bool bIsPrintEnabled;
			FName Tag;
			bool bIsStackTrace;
			int32 PlayerIndex;
		};
		static void NewProp_bIsPrintEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPrintEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static void NewProp_bIsStackTrace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStackTrace;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCheatManager_PrintTargetTagChanges_Statics::NewProp_bIsPrintEnabled_SetBit(void* Obj)
	{
		((SBZCheatManager_eventPrintTargetTagChanges_Parms*)Obj)->bIsPrintEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_PrintTargetTagChanges_Statics::NewProp_bIsPrintEnabled = { "bIsPrintEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventPrintTargetTagChanges_Parms), &Z_Construct_UFunction_USBZCheatManager_PrintTargetTagChanges_Statics::NewProp_bIsPrintEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_PrintTargetTagChanges_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_PrintTargetTagChanges_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventPrintTargetTagChanges_Parms, Tag), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_PrintTargetTagChanges_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_PrintTargetTagChanges_Statics::NewProp_Tag_MetaData)) };
	void Z_Construct_UFunction_USBZCheatManager_PrintTargetTagChanges_Statics::NewProp_bIsStackTrace_SetBit(void* Obj)
	{
		((SBZCheatManager_eventPrintTargetTagChanges_Parms*)Obj)->bIsStackTrace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_PrintTargetTagChanges_Statics::NewProp_bIsStackTrace = { "bIsStackTrace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventPrintTargetTagChanges_Parms), &Z_Construct_UFunction_USBZCheatManager_PrintTargetTagChanges_Statics::NewProp_bIsStackTrace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_PrintTargetTagChanges_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventPrintTargetTagChanges_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_PrintTargetTagChanges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_PrintTargetTagChanges_Statics::NewProp_bIsPrintEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_PrintTargetTagChanges_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_PrintTargetTagChanges_Statics::NewProp_bIsStackTrace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_PrintTargetTagChanges_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_PrintTargetTagChanges_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_PrintTargetTagChanges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "PrintTargetTagChanges", nullptr, nullptr, sizeof(SBZCheatManager_eventPrintTargetTagChanges_Parms), Z_Construct_UFunction_USBZCheatManager_PrintTargetTagChanges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_PrintTargetTagChanges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_PrintTargetTagChanges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_PrintTargetTagChanges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_PrintTargetTagChanges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_PrintTargetTagChanges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_PrintWorldInfo_Statics
	{
		struct SBZCheatManager_eventPrintWorldInfo_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_PrintWorldInfo_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventPrintWorldInfo_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_PrintWorldInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_PrintWorldInfo_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_PrintWorldInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_PrintWorldInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "PrintWorldInfo", nullptr, nullptr, sizeof(SBZCheatManager_eventPrintWorldInfo_Parms), Z_Construct_UFunction_USBZCheatManager_PrintWorldInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_PrintWorldInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_PrintWorldInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_PrintWorldInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_PrintWorldInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_PrintWorldInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_RebuildAssetLookup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_RebuildAssetLookup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_RebuildAssetLookup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "RebuildAssetLookup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_RebuildAssetLookup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_RebuildAssetLookup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_RebuildAssetLookup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_RebuildAssetLookup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_RefreshPlayerAbilityBuff_Statics
	{
		struct SBZCheatManager_eventRefreshPlayerAbilityBuff_Parms
		{
			ESBZPlayerAbilityBuffType Type;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCheatManager_RefreshPlayerAbilityBuff_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCheatManager_RefreshPlayerAbilityBuff_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventRefreshPlayerAbilityBuff_Parms, Type), Z_Construct_UEnum_Starbreeze_ESBZPlayerAbilityBuffType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_RefreshPlayerAbilityBuff_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventRefreshPlayerAbilityBuff_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_RefreshPlayerAbilityBuff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_RefreshPlayerAbilityBuff_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_RefreshPlayerAbilityBuff_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_RefreshPlayerAbilityBuff_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_RefreshPlayerAbilityBuff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_RefreshPlayerAbilityBuff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "RefreshPlayerAbilityBuff", nullptr, nullptr, sizeof(SBZCheatManager_eventRefreshPlayerAbilityBuff_Parms), Z_Construct_UFunction_USBZCheatManager_RefreshPlayerAbilityBuff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_RefreshPlayerAbilityBuff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_RefreshPlayerAbilityBuff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_RefreshPlayerAbilityBuff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_RefreshPlayerAbilityBuff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_RefreshPlayerAbilityBuff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_RefreshPlayerAbilityBuffAll_Statics
	{
		struct SBZCheatManager_eventRefreshPlayerAbilityBuffAll_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_RefreshPlayerAbilityBuffAll_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventRefreshPlayerAbilityBuffAll_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_RefreshPlayerAbilityBuffAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_RefreshPlayerAbilityBuffAll_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_RefreshPlayerAbilityBuffAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_RefreshPlayerAbilityBuffAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "RefreshPlayerAbilityBuffAll", nullptr, nullptr, sizeof(SBZCheatManager_eventRefreshPlayerAbilityBuffAll_Parms), Z_Construct_UFunction_USBZCheatManager_RefreshPlayerAbilityBuffAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_RefreshPlayerAbilityBuffAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_RefreshPlayerAbilityBuffAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_RefreshPlayerAbilityBuffAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_RefreshPlayerAbilityBuffAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_RefreshPlayerAbilityBuffAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_ReportBug_Statics
	{
		struct SBZCheatManager_eventReportBug_Parms
		{
			FString Description;
			bool bIsEverywhere;
			bool bIsBlockerChecked;
			bool bIsInteractableChecked;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
		static void NewProp_bIsEverywhere_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEverywhere;
		static void NewProp_bIsBlockerChecked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBlockerChecked;
		static void NewProp_bIsInteractableChecked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInteractableChecked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_ReportBug_Statics::NewProp_Description_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManager_ReportBug_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventReportBug_Parms, Description), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_ReportBug_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ReportBug_Statics::NewProp_Description_MetaData)) };
	void Z_Construct_UFunction_USBZCheatManager_ReportBug_Statics::NewProp_bIsEverywhere_SetBit(void* Obj)
	{
		((SBZCheatManager_eventReportBug_Parms*)Obj)->bIsEverywhere = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_ReportBug_Statics::NewProp_bIsEverywhere = { "bIsEverywhere", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventReportBug_Parms), &Z_Construct_UFunction_USBZCheatManager_ReportBug_Statics::NewProp_bIsEverywhere_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZCheatManager_ReportBug_Statics::NewProp_bIsBlockerChecked_SetBit(void* Obj)
	{
		((SBZCheatManager_eventReportBug_Parms*)Obj)->bIsBlockerChecked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_ReportBug_Statics::NewProp_bIsBlockerChecked = { "bIsBlockerChecked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventReportBug_Parms), &Z_Construct_UFunction_USBZCheatManager_ReportBug_Statics::NewProp_bIsBlockerChecked_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZCheatManager_ReportBug_Statics::NewProp_bIsInteractableChecked_SetBit(void* Obj)
	{
		((SBZCheatManager_eventReportBug_Parms*)Obj)->bIsInteractableChecked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_ReportBug_Statics::NewProp_bIsInteractableChecked = { "bIsInteractableChecked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventReportBug_Parms), &Z_Construct_UFunction_USBZCheatManager_ReportBug_Statics::NewProp_bIsInteractableChecked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_ReportBug_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_ReportBug_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_ReportBug_Statics::NewProp_bIsEverywhere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_ReportBug_Statics::NewProp_bIsBlockerChecked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_ReportBug_Statics::NewProp_bIsInteractableChecked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_ReportBug_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_ReportBug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "ReportBug", nullptr, nullptr, sizeof(SBZCheatManager_eventReportBug_Parms), Z_Construct_UFunction_USBZCheatManager_ReportBug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ReportBug_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_ReportBug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ReportBug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_ReportBug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_ReportBug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_RequestMissionEnd_Statics
	{
		struct SBZCheatManager_eventRequestMissionEnd_Parms
		{
			ESBZEndMissionResult Result;
			int32 OutroVariation;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutroVariation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCheatManager_RequestMissionEnd_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCheatManager_RequestMissionEnd_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventRequestMissionEnd_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZEndMissionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_RequestMissionEnd_Statics::NewProp_OutroVariation = { "OutroVariation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventRequestMissionEnd_Parms, OutroVariation), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_RequestMissionEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_RequestMissionEnd_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_RequestMissionEnd_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_RequestMissionEnd_Statics::NewProp_OutroVariation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_RequestMissionEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_RequestMissionEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "RequestMissionEnd", nullptr, nullptr, sizeof(SBZCheatManager_eventRequestMissionEnd_Parms), Z_Construct_UFunction_USBZCheatManager_RequestMissionEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_RequestMissionEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_RequestMissionEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_RequestMissionEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_RequestMissionEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_RequestMissionEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_RequestMissionFail_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_RequestMissionFail_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_RequestMissionFail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "RequestMissionFail", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_RequestMissionFail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_RequestMissionFail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_RequestMissionFail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_RequestMissionFail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_RequestMissionSuccess_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_RequestMissionSuccess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_RequestMissionSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "RequestMissionSuccess", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_RequestMissionSuccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_RequestMissionSuccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_RequestMissionSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_RequestMissionSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_ResearchAllSkills_Statics
	{
		struct SBZCheatManager_eventResearchAllSkills_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_ResearchAllSkills_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventResearchAllSkills_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_ResearchAllSkills_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_ResearchAllSkills_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_ResearchAllSkills_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_ResearchAllSkills_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "ResearchAllSkills", nullptr, nullptr, sizeof(SBZCheatManager_eventResearchAllSkills_Parms), Z_Construct_UFunction_USBZCheatManager_ResearchAllSkills_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ResearchAllSkills_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_ResearchAllSkills_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ResearchAllSkills_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_ResearchAllSkills()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_ResearchAllSkills_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_ResetCVars_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_ResetCVars_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_ResetCVars_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "ResetCVars", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_ResetCVars_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ResetCVars_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_ResetCVars()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_ResetCVars_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_ReviveCrewAI_Statics
	{
		struct SBZCheatManager_eventReviveCrewAI_Parms
		{
			int32 CrewAIIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CrewAIIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_ReviveCrewAI_Statics::NewProp_CrewAIIndex = { "CrewAIIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventReviveCrewAI_Parms, CrewAIIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_ReviveCrewAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_ReviveCrewAI_Statics::NewProp_CrewAIIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_ReviveCrewAI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_ReviveCrewAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "ReviveCrewAI", nullptr, nullptr, sizeof(SBZCheatManager_eventReviveCrewAI_Parms), Z_Construct_UFunction_USBZCheatManager_ReviveCrewAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ReviveCrewAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_ReviveCrewAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ReviveCrewAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_ReviveCrewAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_ReviveCrewAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_RevivePlayer_Statics
	{
		struct SBZCheatManager_eventRevivePlayer_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_RevivePlayer_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventRevivePlayer_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_RevivePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_RevivePlayer_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_RevivePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_RevivePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "RevivePlayer", nullptr, nullptr, sizeof(SBZCheatManager_eventRevivePlayer_Parms), Z_Construct_UFunction_USBZCheatManager_RevivePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_RevivePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_RevivePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_RevivePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_RevivePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_RevivePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_ReviveTarget_Statics
	{
		struct SBZCheatManager_eventReviveTarget_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_ReviveTarget_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventReviveTarget_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_ReviveTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_ReviveTarget_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_ReviveTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_ReviveTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "ReviveTarget", nullptr, nullptr, sizeof(SBZCheatManager_eventReviveTarget_Parms), Z_Construct_UFunction_USBZCheatManager_ReviveTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ReviveTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_ReviveTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ReviveTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_ReviveTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_ReviveTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SecureAllAvailableLoot_Statics
	{
		struct SBZCheatManager_eventSecureAllAvailableLoot_Parms
		{
			bool bClearClaim;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClearClaim_MetaData[];
#endif
		static void NewProp_bClearClaim_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClearClaim;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SecureAllAvailableLoot_Statics::NewProp_bClearClaim_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USBZCheatManager_SecureAllAvailableLoot_Statics::NewProp_bClearClaim_SetBit(void* Obj)
	{
		((SBZCheatManager_eventSecureAllAvailableLoot_Parms*)Obj)->bClearClaim = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_SecureAllAvailableLoot_Statics::NewProp_bClearClaim = { "bClearClaim", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventSecureAllAvailableLoot_Parms), &Z_Construct_UFunction_USBZCheatManager_SecureAllAvailableLoot_Statics::NewProp_bClearClaim_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SecureAllAvailableLoot_Statics::NewProp_bClearClaim_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SecureAllAvailableLoot_Statics::NewProp_bClearClaim_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SecureAllAvailableLoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SecureAllAvailableLoot_Statics::NewProp_bClearClaim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SecureAllAvailableLoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SecureAllAvailableLoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SecureAllAvailableLoot", nullptr, nullptr, sizeof(SBZCheatManager_eventSecureAllAvailableLoot_Parms), Z_Construct_UFunction_USBZCheatManager_SecureAllAvailableLoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SecureAllAvailableLoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SecureAllAvailableLoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SecureAllAvailableLoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SecureAllAvailableLoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SecureAllAvailableLoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SecureBag_Statics
	{
		struct SBZCheatManager_eventSecureBag_Parms
		{
			int32 Count;
			FName AssetName;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AssetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SecureBag_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSecureBag_Parms, Count), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SecureBag_Statics::NewProp_AssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_SecureBag_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSecureBag_Parms, AssetName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SecureBag_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SecureBag_Statics::NewProp_AssetName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SecureBag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SecureBag_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SecureBag_Statics::NewProp_AssetName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SecureBag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SecureBag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SecureBag", nullptr, nullptr, sizeof(SBZCheatManager_eventSecureBag_Parms), Z_Construct_UFunction_USBZCheatManager_SecureBag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SecureBag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SecureBag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SecureBag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SecureBag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SecureBag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SelectDebugActorTarget_Statics
	{
		struct SBZCheatManager_eventSelectDebugActorTarget_Parms
		{
			bool bIsSelectedInEditor;
			int32 PlayerIndex;
		};
		static void NewProp_bIsSelectedInEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSelectedInEditor;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCheatManager_SelectDebugActorTarget_Statics::NewProp_bIsSelectedInEditor_SetBit(void* Obj)
	{
		((SBZCheatManager_eventSelectDebugActorTarget_Parms*)Obj)->bIsSelectedInEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_SelectDebugActorTarget_Statics::NewProp_bIsSelectedInEditor = { "bIsSelectedInEditor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventSelectDebugActorTarget_Parms), &Z_Construct_UFunction_USBZCheatManager_SelectDebugActorTarget_Statics::NewProp_bIsSelectedInEditor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SelectDebugActorTarget_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSelectDebugActorTarget_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SelectDebugActorTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SelectDebugActorTarget_Statics::NewProp_bIsSelectedInEditor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SelectDebugActorTarget_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SelectDebugActorTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SelectDebugActorTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SelectDebugActorTarget", nullptr, nullptr, sizeof(SBZCheatManager_eventSelectDebugActorTarget_Parms), Z_Construct_UFunction_USBZCheatManager_SelectDebugActorTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SelectDebugActorTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SelectDebugActorTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SelectDebugActorTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SelectDebugActorTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SelectDebugActorTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SendSessionMessage_Statics
	{
		struct SBZCheatManager_eventSendSessionMessage_Parms
		{
			FString Message;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SendSessionMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManager_SendSessionMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSendSessionMessage_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SendSessionMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SendSessionMessage_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SendSessionMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SendSessionMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SendSessionMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SendSessionMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SendSessionMessage", nullptr, nullptr, sizeof(SBZCheatManager_eventSendSessionMessage_Parms), Z_Construct_UFunction_USBZCheatManager_SendSessionMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SendSessionMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SendSessionMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SendSessionMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SendSessionMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SendSessionMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetAddMissionFailedTimeout_Statics
	{
		struct SBZCheatManager_eventSetAddMissionFailedTimeout_Parms
		{
			float AddTimeout;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AddTimeout;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_SetAddMissionFailedTimeout_Statics::NewProp_AddTimeout = { "AddTimeout", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetAddMissionFailedTimeout_Parms, AddTimeout), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetAddMissionFailedTimeout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetAddMissionFailedTimeout_Statics::NewProp_AddTimeout,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetAddMissionFailedTimeout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetAddMissionFailedTimeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetAddMissionFailedTimeout", nullptr, nullptr, sizeof(SBZCheatManager_eventSetAddMissionFailedTimeout_Parms), Z_Construct_UFunction_USBZCheatManager_SetAddMissionFailedTimeout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetAddMissionFailedTimeout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetAddMissionFailedTimeout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetAddMissionFailedTimeout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetAddMissionFailedTimeout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetAddMissionFailedTimeout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetAllSkills_Statics
	{
		struct SBZCheatManager_eventSetAllSkills_Parms
		{
			bool bIsAcquired;
			int32 PlayerIndex;
		};
		static void NewProp_bIsAcquired_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAcquired;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCheatManager_SetAllSkills_Statics::NewProp_bIsAcquired_SetBit(void* Obj)
	{
		((SBZCheatManager_eventSetAllSkills_Parms*)Obj)->bIsAcquired = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_SetAllSkills_Statics::NewProp_bIsAcquired = { "bIsAcquired", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventSetAllSkills_Parms), &Z_Construct_UFunction_USBZCheatManager_SetAllSkills_Statics::NewProp_bIsAcquired_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetAllSkills_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetAllSkills_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetAllSkills_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetAllSkills_Statics::NewProp_bIsAcquired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetAllSkills_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetAllSkills_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetAllSkills_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetAllSkills", nullptr, nullptr, sizeof(SBZCheatManager_eventSetAllSkills_Parms), Z_Construct_UFunction_USBZCheatManager_SetAllSkills_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetAllSkills_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetAllSkills_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetAllSkills_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetAllSkills()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetAllSkills_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetAmmoInventory_Statics
	{
		struct SBZCheatManager_eventSetAmmoInventory_Parms
		{
			float NewAmmoCount;
			int32 WeaponIndex;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewAmmoCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_SetAmmoInventory_Statics::NewProp_NewAmmoCount = { "NewAmmoCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetAmmoInventory_Parms, NewAmmoCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetAmmoInventory_Statics::NewProp_WeaponIndex = { "WeaponIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetAmmoInventory_Parms, WeaponIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetAmmoInventory_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetAmmoInventory_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetAmmoInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetAmmoInventory_Statics::NewProp_NewAmmoCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetAmmoInventory_Statics::NewProp_WeaponIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetAmmoInventory_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetAmmoInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetAmmoInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetAmmoInventory", nullptr, nullptr, sizeof(SBZCheatManager_eventSetAmmoInventory_Parms), Z_Construct_UFunction_USBZCheatManager_SetAmmoInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetAmmoInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetAmmoInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetAmmoInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetAmmoInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetAmmoInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetAmmoLoaded_Statics
	{
		struct SBZCheatManager_eventSetAmmoLoaded_Parms
		{
			float NewAmmoCount;
			int32 WeaponIndex;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewAmmoCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_SetAmmoLoaded_Statics::NewProp_NewAmmoCount = { "NewAmmoCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetAmmoLoaded_Parms, NewAmmoCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetAmmoLoaded_Statics::NewProp_WeaponIndex = { "WeaponIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetAmmoLoaded_Parms, WeaponIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetAmmoLoaded_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetAmmoLoaded_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetAmmoLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetAmmoLoaded_Statics::NewProp_NewAmmoCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetAmmoLoaded_Statics::NewProp_WeaponIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetAmmoLoaded_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetAmmoLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetAmmoLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetAmmoLoaded", nullptr, nullptr, sizeof(SBZCheatManager_eventSetAmmoLoaded_Parms), Z_Construct_UFunction_USBZCheatManager_SetAmmoLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetAmmoLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetAmmoLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetAmmoLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetAmmoLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetAmmoLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetAssaultActive_Statics
	{
		struct SBZCheatManager_eventSetAssaultActive_Parms
		{
			bool bIsActive;
		};
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCheatManager_SetAssaultActive_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((SBZCheatManager_eventSetAssaultActive_Parms*)Obj)->bIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_SetAssaultActive_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventSetAssaultActive_Parms), &Z_Construct_UFunction_USBZCheatManager_SetAssaultActive_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetAssaultActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetAssaultActive_Statics::NewProp_bIsActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetAssaultActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetAssaultActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetAssaultActive", nullptr, nullptr, sizeof(SBZCheatManager_eventSetAssaultActive_Parms), Z_Construct_UFunction_USBZCheatManager_SetAssaultActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetAssaultActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetAssaultActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetAssaultActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetAssaultActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetAssaultActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetAssaultLevelProgression_Statics
	{
		struct SBZCheatManager_eventSetAssaultLevelProgression_Parms
		{
			float Progression;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Progression;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_SetAssaultLevelProgression_Statics::NewProp_Progression = { "Progression", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetAssaultLevelProgression_Parms, Progression), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetAssaultLevelProgression_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetAssaultLevelProgression_Statics::NewProp_Progression,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetAssaultLevelProgression_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetAssaultLevelProgression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetAssaultLevelProgression", nullptr, nullptr, sizeof(SBZCheatManager_eventSetAssaultLevelProgression_Parms), Z_Construct_UFunction_USBZCheatManager_SetAssaultLevelProgression_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetAssaultLevelProgression_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetAssaultLevelProgression_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetAssaultLevelProgression_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetAssaultLevelProgression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetAssaultLevelProgression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetCrouchedTarget_Statics
	{
		struct SBZCheatManager_eventSetCrouchedTarget_Parms
		{
			bool bIsCrouched;
			int32 PlayerIndex;
		};
		static void NewProp_bIsCrouched_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCrouched;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCheatManager_SetCrouchedTarget_Statics::NewProp_bIsCrouched_SetBit(void* Obj)
	{
		((SBZCheatManager_eventSetCrouchedTarget_Parms*)Obj)->bIsCrouched = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_SetCrouchedTarget_Statics::NewProp_bIsCrouched = { "bIsCrouched", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventSetCrouchedTarget_Parms), &Z_Construct_UFunction_USBZCheatManager_SetCrouchedTarget_Statics::NewProp_bIsCrouched_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetCrouchedTarget_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetCrouchedTarget_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetCrouchedTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetCrouchedTarget_Statics::NewProp_bIsCrouched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetCrouchedTarget_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetCrouchedTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetCrouchedTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetCrouchedTarget", nullptr, nullptr, sizeof(SBZCheatManager_eventSetCrouchedTarget_Parms), Z_Construct_UFunction_USBZCheatManager_SetCrouchedTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetCrouchedTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetCrouchedTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetCrouchedTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetCrouchedTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetCrouchedTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetDifficulty_Statics
	{
		struct SBZCheatManager_eventSetDifficulty_Parms
		{
			ESBZDifficulty Difficulty;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Difficulty_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Difficulty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCheatManager_SetDifficulty_Statics::NewProp_Difficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCheatManager_SetDifficulty_Statics::NewProp_Difficulty = { "Difficulty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetDifficulty_Parms, Difficulty), Z_Construct_UEnum_Starbreeze_ESBZDifficulty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetDifficulty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetDifficulty_Statics::NewProp_Difficulty_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetDifficulty_Statics::NewProp_Difficulty,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetDifficulty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetDifficulty", nullptr, nullptr, sizeof(SBZCheatManager_eventSetDifficulty_Parms), Z_Construct_UFunction_USBZCheatManager_SetDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetDifficulty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetDifficulty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetDifficulty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetDifficulty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetDifficulty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetDownedCount_Statics
	{
		struct SBZCheatManager_eventSetDownedCount_Parms
		{
			int32 Count;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetDownedCount_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetDownedCount_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetDownedCount_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetDownedCount_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetDownedCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetDownedCount_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetDownedCount_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetDownedCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetDownedCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetDownedCount", nullptr, nullptr, sizeof(SBZCheatManager_eventSetDownedCount_Parms), Z_Construct_UFunction_USBZCheatManager_SetDownedCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetDownedCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetDownedCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetDownedCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetDownedCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetDownedCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetDrawTransform_Statics
	{
		struct SBZCheatManager_eventSetDrawTransform_Parms
		{
			float X;
			float Y;
			float Z;
			float Yaw;
			float Pitch;
			float Roll;
			float ScaleX;
			float ScaleY;
			float ScaleZ;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Z;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Yaw;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pitch;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Roll;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleX;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleZ;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_SetDrawTransform_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetDrawTransform_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_SetDrawTransform_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetDrawTransform_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_SetDrawTransform_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetDrawTransform_Parms, Z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_SetDrawTransform_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetDrawTransform_Parms, Yaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_SetDrawTransform_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetDrawTransform_Parms, Pitch), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_SetDrawTransform_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetDrawTransform_Parms, Roll), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_SetDrawTransform_Statics::NewProp_ScaleX = { "ScaleX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetDrawTransform_Parms, ScaleX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_SetDrawTransform_Statics::NewProp_ScaleY = { "ScaleY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetDrawTransform_Parms, ScaleY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_SetDrawTransform_Statics::NewProp_ScaleZ = { "ScaleZ", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetDrawTransform_Parms, ScaleZ), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetDrawTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetDrawTransform_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetDrawTransform_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetDrawTransform_Statics::NewProp_Z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetDrawTransform_Statics::NewProp_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetDrawTransform_Statics::NewProp_Pitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetDrawTransform_Statics::NewProp_Roll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetDrawTransform_Statics::NewProp_ScaleX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetDrawTransform_Statics::NewProp_ScaleY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetDrawTransform_Statics::NewProp_ScaleZ,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetDrawTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetDrawTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetDrawTransform", nullptr, nullptr, sizeof(SBZCheatManager_eventSetDrawTransform_Parms), Z_Construct_UFunction_USBZCheatManager_SetDrawTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetDrawTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetDrawTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetDrawTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetDrawTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetDrawTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetDrawTransformEnabled_Statics
	{
		struct SBZCheatManager_eventSetDrawTransformEnabled_Parms
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
	void Z_Construct_UFunction_USBZCheatManager_SetDrawTransformEnabled_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((SBZCheatManager_eventSetDrawTransformEnabled_Parms*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_SetDrawTransformEnabled_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventSetDrawTransformEnabled_Parms), &Z_Construct_UFunction_USBZCheatManager_SetDrawTransformEnabled_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetDrawTransformEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetDrawTransformEnabled_Statics::NewProp_bIsEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetDrawTransformEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetDrawTransformEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetDrawTransformEnabled", nullptr, nullptr, sizeof(SBZCheatManager_eventSetDrawTransformEnabled_Parms), Z_Construct_UFunction_USBZCheatManager_SetDrawTransformEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetDrawTransformEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetDrawTransformEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetDrawTransformEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetDrawTransformEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetDrawTransformEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetEquippable_Statics
	{
		struct SBZCheatManager_eventSetEquippable_Parms
		{
			FName EquippableDataName;
			int32 EquippableIndex;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableDataName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EquippableDataName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EquippableIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetEquippable_Statics::NewProp_EquippableDataName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_SetEquippable_Statics::NewProp_EquippableDataName = { "EquippableDataName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetEquippable_Parms, EquippableDataName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetEquippable_Statics::NewProp_EquippableDataName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetEquippable_Statics::NewProp_EquippableDataName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetEquippable_Statics::NewProp_EquippableIndex = { "EquippableIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetEquippable_Parms, EquippableIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetEquippable_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetEquippable_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetEquippable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetEquippable_Statics::NewProp_EquippableDataName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetEquippable_Statics::NewProp_EquippableIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetEquippable_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetEquippable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetEquippable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetEquippable", nullptr, nullptr, sizeof(SBZCheatManager_eventSetEquippable_Parms), Z_Construct_UFunction_USBZCheatManager_SetEquippable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetEquippable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetEquippable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetEquippable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetEquippable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetEquippable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetEquippablePart_Statics
	{
		struct SBZCheatManager_eventSetEquippablePart_Parms
		{
			FName SlotDataName;
			FName PartDataName;
			int32 EquippableIndex;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotDataName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotDataName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartDataName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PartDataName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EquippableIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetEquippablePart_Statics::NewProp_SlotDataName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_SetEquippablePart_Statics::NewProp_SlotDataName = { "SlotDataName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetEquippablePart_Parms, SlotDataName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetEquippablePart_Statics::NewProp_SlotDataName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetEquippablePart_Statics::NewProp_SlotDataName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetEquippablePart_Statics::NewProp_PartDataName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_SetEquippablePart_Statics::NewProp_PartDataName = { "PartDataName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetEquippablePart_Parms, PartDataName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetEquippablePart_Statics::NewProp_PartDataName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetEquippablePart_Statics::NewProp_PartDataName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetEquippablePart_Statics::NewProp_EquippableIndex = { "EquippableIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetEquippablePart_Parms, EquippableIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetEquippablePart_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetEquippablePart_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetEquippablePart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetEquippablePart_Statics::NewProp_SlotDataName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetEquippablePart_Statics::NewProp_PartDataName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetEquippablePart_Statics::NewProp_EquippableIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetEquippablePart_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetEquippablePart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetEquippablePart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetEquippablePart", nullptr, nullptr, sizeof(SBZCheatManager_eventSetEquippablePart_Parms), Z_Construct_UFunction_USBZCheatManager_SetEquippablePart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetEquippablePart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetEquippablePart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetEquippablePart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetEquippablePart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetEquippablePart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetEquippablePreset_Statics
	{
		struct SBZCheatManager_eventSetEquippablePreset_Parms
		{
			FName EquippableDataName;
			int32 EquippableIndex;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableDataName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EquippableDataName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EquippableIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetEquippablePreset_Statics::NewProp_EquippableDataName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_SetEquippablePreset_Statics::NewProp_EquippableDataName = { "EquippableDataName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetEquippablePreset_Parms, EquippableDataName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetEquippablePreset_Statics::NewProp_EquippableDataName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetEquippablePreset_Statics::NewProp_EquippableDataName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetEquippablePreset_Statics::NewProp_EquippableIndex = { "EquippableIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetEquippablePreset_Parms, EquippableIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetEquippablePreset_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetEquippablePreset_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetEquippablePreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetEquippablePreset_Statics::NewProp_EquippableDataName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetEquippablePreset_Statics::NewProp_EquippableIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetEquippablePreset_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetEquippablePreset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetEquippablePreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetEquippablePreset", nullptr, nullptr, sizeof(SBZCheatManager_eventSetEquippablePreset_Parms), Z_Construct_UFunction_USBZCheatManager_SetEquippablePreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetEquippablePreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetEquippablePreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetEquippablePreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetEquippablePreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetEquippablePreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetEquippableWeaponPreset_Statics
	{
		struct SBZCheatManager_eventSetEquippableWeaponPreset_Parms
		{
			FString WeaponPresetGuid;
			int32 EquippableIndex;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPresetGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WeaponPresetGuid;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EquippableIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetEquippableWeaponPreset_Statics::NewProp_WeaponPresetGuid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManager_SetEquippableWeaponPreset_Statics::NewProp_WeaponPresetGuid = { "WeaponPresetGuid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetEquippableWeaponPreset_Parms, WeaponPresetGuid), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetEquippableWeaponPreset_Statics::NewProp_WeaponPresetGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetEquippableWeaponPreset_Statics::NewProp_WeaponPresetGuid_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetEquippableWeaponPreset_Statics::NewProp_EquippableIndex = { "EquippableIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetEquippableWeaponPreset_Parms, EquippableIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetEquippableWeaponPreset_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetEquippableWeaponPreset_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetEquippableWeaponPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetEquippableWeaponPreset_Statics::NewProp_WeaponPresetGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetEquippableWeaponPreset_Statics::NewProp_EquippableIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetEquippableWeaponPreset_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetEquippableWeaponPreset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetEquippableWeaponPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetEquippableWeaponPreset", nullptr, nullptr, sizeof(SBZCheatManager_eventSetEquippableWeaponPreset_Parms), Z_Construct_UFunction_USBZCheatManager_SetEquippableWeaponPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetEquippableWeaponPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetEquippableWeaponPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetEquippableWeaponPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetEquippableWeaponPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetEquippableWeaponPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetEquippedTarget_Statics
	{
		struct SBZCheatManager_eventSetEquippedTarget_Parms
		{
			bool bIsEquipped;
			int32 PlayerIndex;
		};
		static void NewProp_bIsEquipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEquipped;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCheatManager_SetEquippedTarget_Statics::NewProp_bIsEquipped_SetBit(void* Obj)
	{
		((SBZCheatManager_eventSetEquippedTarget_Parms*)Obj)->bIsEquipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_SetEquippedTarget_Statics::NewProp_bIsEquipped = { "bIsEquipped", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventSetEquippedTarget_Parms), &Z_Construct_UFunction_USBZCheatManager_SetEquippedTarget_Statics::NewProp_bIsEquipped_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetEquippedTarget_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetEquippedTarget_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetEquippedTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetEquippedTarget_Statics::NewProp_bIsEquipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetEquippedTarget_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetEquippedTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetEquippedTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetEquippedTarget", nullptr, nullptr, sizeof(SBZCheatManager_eventSetEquippedTarget_Parms), Z_Construct_UFunction_USBZCheatManager_SetEquippedTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetEquippedTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetEquippedTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetEquippedTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetEquippedTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetEquippedTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetFriendlyFireSettings_Statics
	{
		struct SBZCheatManager_eventSetFriendlyFireSettings_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetFriendlyFireSettings_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetFriendlyFireSettings_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetFriendlyFireSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetFriendlyFireSettings_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetFriendlyFireSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetFriendlyFireSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetFriendlyFireSettings", nullptr, nullptr, sizeof(SBZCheatManager_eventSetFriendlyFireSettings_Parms), Z_Construct_UFunction_USBZCheatManager_SetFriendlyFireSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetFriendlyFireSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetFriendlyFireSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetFriendlyFireSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetFriendlyFireSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetFriendlyFireSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetGod_Statics
	{
		struct SBZCheatManager_eventSetGod_Parms
		{
			bool bIsGod;
			int32 PlayerIndex;
		};
		static void NewProp_bIsGod_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsGod;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCheatManager_SetGod_Statics::NewProp_bIsGod_SetBit(void* Obj)
	{
		((SBZCheatManager_eventSetGod_Parms*)Obj)->bIsGod = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_SetGod_Statics::NewProp_bIsGod = { "bIsGod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventSetGod_Parms), &Z_Construct_UFunction_USBZCheatManager_SetGod_Statics::NewProp_bIsGod_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetGod_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetGod_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetGod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetGod_Statics::NewProp_bIsGod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetGod_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetGod_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetGod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetGod", nullptr, nullptr, sizeof(SBZCheatManager_eventSetGod_Parms), Z_Construct_UFunction_USBZCheatManager_SetGod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetGod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetGod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetGod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetGod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetGod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetHeistState_Statics
	{
		struct SBZCheatManager_eventSetHeistState_Parms
		{
			EPD3HeistState HeistState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HeistState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HeistState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCheatManager_SetHeistState_Statics::NewProp_HeistState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCheatManager_SetHeistState_Statics::NewProp_HeistState = { "HeistState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetHeistState_Parms, HeistState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetHeistState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetHeistState_Statics::NewProp_HeistState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetHeistState_Statics::NewProp_HeistState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetHeistState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetHeistState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetHeistState", nullptr, nullptr, sizeof(SBZCheatManager_eventSetHeistState_Parms), Z_Construct_UFunction_USBZCheatManager_SetHeistState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetHeistState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetHeistState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetHeistState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetHeistState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetHeistState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetInaudiblePlayer_Statics
	{
		struct SBZCheatManager_eventSetInaudiblePlayer_Parms
		{
			bool bIsInaudible;
			int32 PlayerIndex;
		};
		static void NewProp_bIsInaudible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInaudible;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCheatManager_SetInaudiblePlayer_Statics::NewProp_bIsInaudible_SetBit(void* Obj)
	{
		((SBZCheatManager_eventSetInaudiblePlayer_Parms*)Obj)->bIsInaudible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_SetInaudiblePlayer_Statics::NewProp_bIsInaudible = { "bIsInaudible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventSetInaudiblePlayer_Parms), &Z_Construct_UFunction_USBZCheatManager_SetInaudiblePlayer_Statics::NewProp_bIsInaudible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetInaudiblePlayer_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetInaudiblePlayer_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetInaudiblePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetInaudiblePlayer_Statics::NewProp_bIsInaudible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetInaudiblePlayer_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetInaudiblePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetInaudiblePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetInaudiblePlayer", nullptr, nullptr, sizeof(SBZCheatManager_eventSetInaudiblePlayer_Parms), Z_Construct_UFunction_USBZCheatManager_SetInaudiblePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetInaudiblePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetInaudiblePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetInaudiblePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetInaudiblePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetInaudiblePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetInfiniteAmmo_Statics
	{
		struct SBZCheatManager_eventSetInfiniteAmmo_Parms
		{
			bool bHasInifinteAmmo;
			int32 PlayerIndex;
		};
		static void NewProp_bHasInifinteAmmo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasInifinteAmmo;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCheatManager_SetInfiniteAmmo_Statics::NewProp_bHasInifinteAmmo_SetBit(void* Obj)
	{
		((SBZCheatManager_eventSetInfiniteAmmo_Parms*)Obj)->bHasInifinteAmmo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_SetInfiniteAmmo_Statics::NewProp_bHasInifinteAmmo = { "bHasInifinteAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventSetInfiniteAmmo_Parms), &Z_Construct_UFunction_USBZCheatManager_SetInfiniteAmmo_Statics::NewProp_bHasInifinteAmmo_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetInfiniteAmmo_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetInfiniteAmmo_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetInfiniteAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetInfiniteAmmo_Statics::NewProp_bHasInifinteAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetInfiniteAmmo_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetInfiniteAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetInfiniteAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetInfiniteAmmo", nullptr, nullptr, sizeof(SBZCheatManager_eventSetInfiniteAmmo_Parms), Z_Construct_UFunction_USBZCheatManager_SetInfiniteAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetInfiniteAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetInfiniteAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetInfiniteAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetInfiniteAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetInfiniteAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetInteractorModeIndex_Statics
	{
		struct SBZCheatManager_eventSetInteractorModeIndex_Parms
		{
			int32 ModeIndex;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ModeIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetInteractorModeIndex_Statics::NewProp_ModeIndex = { "ModeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetInteractorModeIndex_Parms, ModeIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetInteractorModeIndex_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetInteractorModeIndex_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetInteractorModeIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetInteractorModeIndex_Statics::NewProp_ModeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetInteractorModeIndex_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetInteractorModeIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetInteractorModeIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetInteractorModeIndex", nullptr, nullptr, sizeof(SBZCheatManager_eventSetInteractorModeIndex_Parms), Z_Construct_UFunction_USBZCheatManager_SetInteractorModeIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetInteractorModeIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetInteractorModeIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetInteractorModeIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetInteractorModeIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetInteractorModeIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetInvisiblePlayer_Statics
	{
		struct SBZCheatManager_eventSetInvisiblePlayer_Parms
		{
			bool bIsInvisible;
			int32 PlayerIndex;
		};
		static void NewProp_bIsInvisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInvisible;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCheatManager_SetInvisiblePlayer_Statics::NewProp_bIsInvisible_SetBit(void* Obj)
	{
		((SBZCheatManager_eventSetInvisiblePlayer_Parms*)Obj)->bIsInvisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_SetInvisiblePlayer_Statics::NewProp_bIsInvisible = { "bIsInvisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventSetInvisiblePlayer_Parms), &Z_Construct_UFunction_USBZCheatManager_SetInvisiblePlayer_Statics::NewProp_bIsInvisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetInvisiblePlayer_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetInvisiblePlayer_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetInvisiblePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetInvisiblePlayer_Statics::NewProp_bIsInvisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetInvisiblePlayer_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetInvisiblePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetInvisiblePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetInvisiblePlayer", nullptr, nullptr, sizeof(SBZCheatManager_eventSetInvisiblePlayer_Parms), Z_Construct_UFunction_USBZCheatManager_SetInvisiblePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetInvisiblePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetInvisiblePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetInvisiblePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetInvisiblePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetInvisiblePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetJesus_Statics
	{
		struct SBZCheatManager_eventSetJesus_Parms
		{
			bool bIsJesus;
			int32 PlayerIndex;
		};
		static void NewProp_bIsJesus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsJesus;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCheatManager_SetJesus_Statics::NewProp_bIsJesus_SetBit(void* Obj)
	{
		((SBZCheatManager_eventSetJesus_Parms*)Obj)->bIsJesus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_SetJesus_Statics::NewProp_bIsJesus = { "bIsJesus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventSetJesus_Parms), &Z_Construct_UFunction_USBZCheatManager_SetJesus_Statics::NewProp_bIsJesus_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetJesus_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetJesus_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetJesus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetJesus_Statics::NewProp_bIsJesus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetJesus_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetJesus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetJesus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetJesus", nullptr, nullptr, sizeof(SBZCheatManager_eventSetJesus_Parms), Z_Construct_UFunction_USBZCheatManager_SetJesus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetJesus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetJesus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetJesus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetJesus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetJesus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetLastArrestedByGuard_Statics
	{
		struct SBZCheatManager_eventSetLastArrestedByGuard_Parms
		{
			bool bIsLastArrestedByGuard;
			int32 PlayerIndex;
		};
		static void NewProp_bIsLastArrestedByGuard_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLastArrestedByGuard;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCheatManager_SetLastArrestedByGuard_Statics::NewProp_bIsLastArrestedByGuard_SetBit(void* Obj)
	{
		((SBZCheatManager_eventSetLastArrestedByGuard_Parms*)Obj)->bIsLastArrestedByGuard = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_SetLastArrestedByGuard_Statics::NewProp_bIsLastArrestedByGuard = { "bIsLastArrestedByGuard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventSetLastArrestedByGuard_Parms), &Z_Construct_UFunction_USBZCheatManager_SetLastArrestedByGuard_Statics::NewProp_bIsLastArrestedByGuard_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetLastArrestedByGuard_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetLastArrestedByGuard_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetLastArrestedByGuard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetLastArrestedByGuard_Statics::NewProp_bIsLastArrestedByGuard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetLastArrestedByGuard_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetLastArrestedByGuard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetLastArrestedByGuard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetLastArrestedByGuard", nullptr, nullptr, sizeof(SBZCheatManager_eventSetLastArrestedByGuard_Parms), Z_Construct_UFunction_USBZCheatManager_SetLastArrestedByGuard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetLastArrestedByGuard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetLastArrestedByGuard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetLastArrestedByGuard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetLastArrestedByGuard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetLastArrestedByGuard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetLooseTagCount_Statics
	{
		struct SBZCheatManager_eventSetLooseTagCount_Parms
		{
			FName Tag;
			int32 Count;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetLooseTagCount_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_SetLooseTagCount_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetLooseTagCount_Parms, Tag), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetLooseTagCount_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetLooseTagCount_Statics::NewProp_Tag_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetLooseTagCount_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetLooseTagCount_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetLooseTagCount_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetLooseTagCount_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetLooseTagCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetLooseTagCount_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetLooseTagCount_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetLooseTagCount_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetLooseTagCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetLooseTagCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetLooseTagCount", nullptr, nullptr, sizeof(SBZCheatManager_eventSetLooseTagCount_Parms), Z_Construct_UFunction_USBZCheatManager_SetLooseTagCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetLooseTagCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetLooseTagCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetLooseTagCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetLooseTagCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetLooseTagCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetMarkedTarget_Statics
	{
		struct SBZCheatManager_eventSetMarkedTarget_Parms
		{
			bool bIsMarked;
			int32 PlayerIndex;
		};
		static void NewProp_bIsMarked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMarked;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCheatManager_SetMarkedTarget_Statics::NewProp_bIsMarked_SetBit(void* Obj)
	{
		((SBZCheatManager_eventSetMarkedTarget_Parms*)Obj)->bIsMarked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_SetMarkedTarget_Statics::NewProp_bIsMarked = { "bIsMarked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventSetMarkedTarget_Parms), &Z_Construct_UFunction_USBZCheatManager_SetMarkedTarget_Statics::NewProp_bIsMarked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetMarkedTarget_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetMarkedTarget_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetMarkedTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetMarkedTarget_Statics::NewProp_bIsMarked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetMarkedTarget_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetMarkedTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetMarkedTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetMarkedTarget", nullptr, nullptr, sizeof(SBZCheatManager_eventSetMarkedTarget_Parms), Z_Construct_UFunction_USBZCheatManager_SetMarkedTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetMarkedTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetMarkedTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetMarkedTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetMarkedTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetMarkedTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetMaxAICrewCountOverride_Statics
	{
		struct SBZCheatManager_eventSetMaxAICrewCountOverride_Parms
		{
			int32 MaxAICrewCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAICrewCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetMaxAICrewCountOverride_Statics::NewProp_MaxAICrewCount = { "MaxAICrewCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetMaxAICrewCountOverride_Parms, MaxAICrewCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetMaxAICrewCountOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetMaxAICrewCountOverride_Statics::NewProp_MaxAICrewCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetMaxAICrewCountOverride_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetMaxAICrewCountOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetMaxAICrewCountOverride", nullptr, nullptr, sizeof(SBZCheatManager_eventSetMaxAICrewCountOverride_Parms), Z_Construct_UFunction_USBZCheatManager_SetMaxAICrewCountOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetMaxAICrewCountOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetMaxAICrewCountOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetMaxAICrewCountOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetMaxAICrewCountOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetMaxAICrewCountOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetMilestonePassed_Statics
	{
		struct SBZCheatManager_eventSetMilestonePassed_Parms
		{
			FString MilestoneName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MilestoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MilestoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetMilestonePassed_Statics::NewProp_MilestoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManager_SetMilestonePassed_Statics::NewProp_MilestoneName = { "MilestoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetMilestonePassed_Parms, MilestoneName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetMilestonePassed_Statics::NewProp_MilestoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetMilestonePassed_Statics::NewProp_MilestoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetMilestonePassed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetMilestonePassed_Statics::NewProp_MilestoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetMilestonePassed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetMilestonePassed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetMilestonePassed", nullptr, nullptr, sizeof(SBZCheatManager_eventSetMilestonePassed_Parms), Z_Construct_UFunction_USBZCheatManager_SetMilestonePassed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetMilestonePassed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetMilestonePassed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetMilestonePassed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetMilestonePassed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetMilestonePassed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetMilestonesPassedLoud_Statics
	{
		struct SBZCheatManager_eventSetMilestonesPassedLoud_Parms
		{
			int32 MilestonesPassed;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MilestonesPassed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetMilestonesPassedLoud_Statics::NewProp_MilestonesPassed = { "MilestonesPassed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetMilestonesPassedLoud_Parms, MilestonesPassed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetMilestonesPassedLoud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetMilestonesPassedLoud_Statics::NewProp_MilestonesPassed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetMilestonesPassedLoud_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetMilestonesPassedLoud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetMilestonesPassedLoud", nullptr, nullptr, sizeof(SBZCheatManager_eventSetMilestonesPassedLoud_Parms), Z_Construct_UFunction_USBZCheatManager_SetMilestonesPassedLoud_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetMilestonesPassedLoud_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetMilestonesPassedLoud_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetMilestonesPassedLoud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetMilestonesPassedLoud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetMilestonesPassedLoud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetMilestonesPassedStealth_Statics
	{
		struct SBZCheatManager_eventSetMilestonesPassedStealth_Parms
		{
			int32 MilestonesPassed;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MilestonesPassed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetMilestonesPassedStealth_Statics::NewProp_MilestonesPassed = { "MilestonesPassed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetMilestonesPassedStealth_Parms, MilestonesPassed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetMilestonesPassedStealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetMilestonesPassedStealth_Statics::NewProp_MilestonesPassed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetMilestonesPassedStealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetMilestonesPassedStealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetMilestonesPassedStealth", nullptr, nullptr, sizeof(SBZCheatManager_eventSetMilestonesPassedStealth_Parms), Z_Construct_UFunction_USBZCheatManager_SetMilestonesPassedStealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetMilestonesPassedStealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetMilestonesPassedStealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetMilestonesPassedStealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetMilestonesPassedStealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetMilestonesPassedStealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetMissionActive_Statics
	{
		struct SBZCheatManager_eventSetMissionActive_Parms
		{
			bool bIsActive;
			bool bIsLocalOnly;
		};
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
		static void NewProp_bIsLocalOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocalOnly;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCheatManager_SetMissionActive_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((SBZCheatManager_eventSetMissionActive_Parms*)Obj)->bIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_SetMissionActive_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventSetMissionActive_Parms), &Z_Construct_UFunction_USBZCheatManager_SetMissionActive_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZCheatManager_SetMissionActive_Statics::NewProp_bIsLocalOnly_SetBit(void* Obj)
	{
		((SBZCheatManager_eventSetMissionActive_Parms*)Obj)->bIsLocalOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_SetMissionActive_Statics::NewProp_bIsLocalOnly = { "bIsLocalOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventSetMissionActive_Parms), &Z_Construct_UFunction_USBZCheatManager_SetMissionActive_Statics::NewProp_bIsLocalOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetMissionActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetMissionActive_Statics::NewProp_bIsActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetMissionActive_Statics::NewProp_bIsLocalOnly,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetMissionActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetMissionActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetMissionActive", nullptr, nullptr, sizeof(SBZCheatManager_eventSetMissionActive_Parms), Z_Construct_UFunction_USBZCheatManager_SetMissionActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetMissionActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetMissionActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetMissionActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetMissionActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetMissionActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetMissionFailedEnabled_Statics
	{
		struct SBZCheatManager_eventSetMissionFailedEnabled_Parms
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
	void Z_Construct_UFunction_USBZCheatManager_SetMissionFailedEnabled_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((SBZCheatManager_eventSetMissionFailedEnabled_Parms*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_SetMissionFailedEnabled_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventSetMissionFailedEnabled_Parms), &Z_Construct_UFunction_USBZCheatManager_SetMissionFailedEnabled_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetMissionFailedEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetMissionFailedEnabled_Statics::NewProp_bIsEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetMissionFailedEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetMissionFailedEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetMissionFailedEnabled", nullptr, nullptr, sizeof(SBZCheatManager_eventSetMissionFailedEnabled_Parms), Z_Construct_UFunction_USBZCheatManager_SetMissionFailedEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetMissionFailedEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetMissionFailedEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetMissionFailedEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetMissionFailedEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetMissionFailedEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetOptionalMilestonePassed_Statics
	{
		struct SBZCheatManager_eventSetOptionalMilestonePassed_Parms
		{
			FString OptionalMilestoneName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionalMilestoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OptionalMilestoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetOptionalMilestonePassed_Statics::NewProp_OptionalMilestoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManager_SetOptionalMilestonePassed_Statics::NewProp_OptionalMilestoneName = { "OptionalMilestoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetOptionalMilestonePassed_Parms, OptionalMilestoneName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetOptionalMilestonePassed_Statics::NewProp_OptionalMilestoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetOptionalMilestonePassed_Statics::NewProp_OptionalMilestoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetOptionalMilestonePassed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetOptionalMilestonePassed_Statics::NewProp_OptionalMilestoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetOptionalMilestonePassed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetOptionalMilestonePassed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetOptionalMilestonePassed", nullptr, nullptr, sizeof(SBZCheatManager_eventSetOptionalMilestonePassed_Parms), Z_Construct_UFunction_USBZCheatManager_SetOptionalMilestonePassed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetOptionalMilestonePassed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetOptionalMilestonePassed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetOptionalMilestonePassed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetOptionalMilestonePassed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetOptionalMilestonePassed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetOverkillWeaponProgress_Statics
	{
		struct SBZCheatManager_eventSetOverkillWeaponProgress_Parms
		{
			float InProgress;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InProgress;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_SetOverkillWeaponProgress_Statics::NewProp_InProgress = { "InProgress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetOverkillWeaponProgress_Parms, InProgress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetOverkillWeaponProgress_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetOverkillWeaponProgress_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetOverkillWeaponProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetOverkillWeaponProgress_Statics::NewProp_InProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetOverkillWeaponProgress_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetOverkillWeaponProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetOverkillWeaponProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetOverkillWeaponProgress", nullptr, nullptr, sizeof(SBZCheatManager_eventSetOverkillWeaponProgress_Parms), Z_Construct_UFunction_USBZCheatManager_SetOverkillWeaponProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetOverkillWeaponProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetOverkillWeaponProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetOverkillWeaponProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetOverkillWeaponProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetOverkillWeaponProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetPlaceable_Statics
	{
		struct SBZCheatManager_eventSetPlaceable_Parms
		{
			FName PlaceableDataName;
			int32 PlaceableIndex;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaceableDataName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PlaceableDataName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlaceableIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetPlaceable_Statics::NewProp_PlaceableDataName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_SetPlaceable_Statics::NewProp_PlaceableDataName = { "PlaceableDataName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetPlaceable_Parms, PlaceableDataName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetPlaceable_Statics::NewProp_PlaceableDataName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetPlaceable_Statics::NewProp_PlaceableDataName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetPlaceable_Statics::NewProp_PlaceableIndex = { "PlaceableIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetPlaceable_Parms, PlaceableIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetPlaceable_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetPlaceable_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetPlaceable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetPlaceable_Statics::NewProp_PlaceableDataName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetPlaceable_Statics::NewProp_PlaceableIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetPlaceable_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetPlaceable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetPlaceable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetPlaceable", nullptr, nullptr, sizeof(SBZCheatManager_eventSetPlaceable_Parms), Z_Construct_UFunction_USBZCheatManager_SetPlaceable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetPlaceable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetPlaceable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetPlaceable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetPlaceable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetPlaceable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetPlaceableAmmo_Statics
	{
		struct SBZCheatManager_eventSetPlaceableAmmo_Parms
		{
			int32 Count;
			int32 PlaceableIndex;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlaceableIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetPlaceableAmmo_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetPlaceableAmmo_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetPlaceableAmmo_Statics::NewProp_PlaceableIndex = { "PlaceableIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetPlaceableAmmo_Parms, PlaceableIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetPlaceableAmmo_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetPlaceableAmmo_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetPlaceableAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetPlaceableAmmo_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetPlaceableAmmo_Statics::NewProp_PlaceableIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetPlaceableAmmo_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetPlaceableAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetPlaceableAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetPlaceableAmmo", nullptr, nullptr, sizeof(SBZCheatManager_eventSetPlaceableAmmo_Parms), Z_Construct_UFunction_USBZCheatManager_SetPlaceableAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetPlaceableAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetPlaceableAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetPlaceableAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetPlaceableAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetPlaceableAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockCooldown_Statics
	{
		struct SBZCheatManager_eventSetPlayerAbilityBuffBlockCooldown_Parms
		{
			ESBZPlayerAbilityBuffType Type;
			float Cooldown;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Cooldown;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockCooldown_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockCooldown_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetPlayerAbilityBuffBlockCooldown_Parms, Type), Z_Construct_UEnum_Starbreeze_ESBZPlayerAbilityBuffType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockCooldown_Statics::NewProp_Cooldown = { "Cooldown", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetPlayerAbilityBuffBlockCooldown_Parms, Cooldown), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockCooldown_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetPlayerAbilityBuffBlockCooldown_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockCooldown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockCooldown_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockCooldown_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockCooldown_Statics::NewProp_Cooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockCooldown_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockCooldown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetPlayerAbilityBuffBlockCooldown", nullptr, nullptr, sizeof(SBZCheatManager_eventSetPlayerAbilityBuffBlockCooldown_Parms), Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockCooldown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockCooldown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockCooldown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockCooldownAll_Statics
	{
		struct SBZCheatManager_eventSetPlayerAbilityBuffBlockCooldownAll_Parms
		{
			float Cooldown;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Cooldown;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockCooldownAll_Statics::NewProp_Cooldown = { "Cooldown", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetPlayerAbilityBuffBlockCooldownAll_Parms, Cooldown), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockCooldownAll_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetPlayerAbilityBuffBlockCooldownAll_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockCooldownAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockCooldownAll_Statics::NewProp_Cooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockCooldownAll_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockCooldownAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockCooldownAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetPlayerAbilityBuffBlockCooldownAll", nullptr, nullptr, sizeof(SBZCheatManager_eventSetPlayerAbilityBuffBlockCooldownAll_Parms), Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockCooldownAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockCooldownAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockCooldownAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockCooldownAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockCooldownAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockCooldownAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlocked_Statics
	{
		struct SBZCheatManager_eventSetPlayerAbilityBuffBlocked_Parms
		{
			ESBZPlayerAbilityBuffType Type;
			bool bIsBlocked;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static void NewProp_bIsBlocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBlocked;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlocked_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlocked_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetPlayerAbilityBuffBlocked_Parms, Type), Z_Construct_UEnum_Starbreeze_ESBZPlayerAbilityBuffType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlocked_Statics::NewProp_bIsBlocked_SetBit(void* Obj)
	{
		((SBZCheatManager_eventSetPlayerAbilityBuffBlocked_Parms*)Obj)->bIsBlocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlocked_Statics::NewProp_bIsBlocked = { "bIsBlocked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventSetPlayerAbilityBuffBlocked_Parms), &Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlocked_Statics::NewProp_bIsBlocked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlocked_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetPlayerAbilityBuffBlocked_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlocked_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlocked_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlocked_Statics::NewProp_bIsBlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlocked_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetPlayerAbilityBuffBlocked", nullptr, nullptr, sizeof(SBZCheatManager_eventSetPlayerAbilityBuffBlocked_Parms), Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockedAll_Statics
	{
		struct SBZCheatManager_eventSetPlayerAbilityBuffBlockedAll_Parms
		{
			bool bIsBlocked;
			int32 PlayerIndex;
		};
		static void NewProp_bIsBlocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBlocked;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockedAll_Statics::NewProp_bIsBlocked_SetBit(void* Obj)
	{
		((SBZCheatManager_eventSetPlayerAbilityBuffBlockedAll_Parms*)Obj)->bIsBlocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockedAll_Statics::NewProp_bIsBlocked = { "bIsBlocked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventSetPlayerAbilityBuffBlockedAll_Parms), &Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockedAll_Statics::NewProp_bIsBlocked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockedAll_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetPlayerAbilityBuffBlockedAll_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockedAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockedAll_Statics::NewProp_bIsBlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockedAll_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockedAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockedAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetPlayerAbilityBuffBlockedAll", nullptr, nullptr, sizeof(SBZCheatManager_eventSetPlayerAbilityBuffBlockedAll_Parms), Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockedAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockedAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockedAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockedAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockedAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockedAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetPlayerArmor_Statics
	{
		struct SBZCheatManager_eventSetPlayerArmor_Parms
		{
			FName PlayerArmorName;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerArmorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PlayerArmorName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetPlayerArmor_Statics::NewProp_PlayerArmorName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_SetPlayerArmor_Statics::NewProp_PlayerArmorName = { "PlayerArmorName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetPlayerArmor_Parms, PlayerArmorName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetPlayerArmor_Statics::NewProp_PlayerArmorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetPlayerArmor_Statics::NewProp_PlayerArmorName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetPlayerArmor_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetPlayerArmor_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetPlayerArmor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetPlayerArmor_Statics::NewProp_PlayerArmorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetPlayerArmor_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetPlayerArmor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetPlayerArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetPlayerArmor", nullptr, nullptr, sizeof(SBZCheatManager_eventSetPlayerArmor_Parms), Z_Construct_UFunction_USBZCheatManager_SetPlayerArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetPlayerArmor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetPlayerArmor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetPlayerArmor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetPlayerArmor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetPlayerArmor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetPlayerCharacter_Statics
	{
		struct SBZCheatManager_eventSetPlayerCharacter_Parms
		{
			FName CharacterClassName;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CharacterClassName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetPlayerCharacter_Statics::NewProp_CharacterClassName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_SetPlayerCharacter_Statics::NewProp_CharacterClassName = { "CharacterClassName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetPlayerCharacter_Parms, CharacterClassName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetPlayerCharacter_Statics::NewProp_CharacterClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetPlayerCharacter_Statics::NewProp_CharacterClassName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetPlayerCharacter_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetPlayerCharacter_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetPlayerCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetPlayerCharacter_Statics::NewProp_CharacterClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetPlayerCharacter_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetPlayerCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetPlayerCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetPlayerCharacter", nullptr, nullptr, sizeof(SBZCheatManager_eventSetPlayerCharacter_Parms), Z_Construct_UFunction_USBZCheatManager_SetPlayerCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetPlayerCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetPlayerCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetPlayerCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetPlayerCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetPlayerCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetPlayerGlove_Statics
	{
		struct SBZCheatManager_eventSetPlayerGlove_Parms
		{
			FName PlayerMaskName;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerMaskName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PlayerMaskName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetPlayerGlove_Statics::NewProp_PlayerMaskName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_SetPlayerGlove_Statics::NewProp_PlayerMaskName = { "PlayerMaskName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetPlayerGlove_Parms, PlayerMaskName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetPlayerGlove_Statics::NewProp_PlayerMaskName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetPlayerGlove_Statics::NewProp_PlayerMaskName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetPlayerGlove_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetPlayerGlove_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetPlayerGlove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetPlayerGlove_Statics::NewProp_PlayerMaskName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetPlayerGlove_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetPlayerGlove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetPlayerGlove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetPlayerGlove", nullptr, nullptr, sizeof(SBZCheatManager_eventSetPlayerGlove_Parms), Z_Construct_UFunction_USBZCheatManager_SetPlayerGlove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetPlayerGlove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetPlayerGlove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetPlayerGlove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetPlayerGlove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetPlayerGlove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetPlayerMask_Statics
	{
		struct SBZCheatManager_eventSetPlayerMask_Parms
		{
			FName PlayerMaskName;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerMaskName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PlayerMaskName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetPlayerMask_Statics::NewProp_PlayerMaskName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_SetPlayerMask_Statics::NewProp_PlayerMaskName = { "PlayerMaskName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetPlayerMask_Parms, PlayerMaskName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetPlayerMask_Statics::NewProp_PlayerMaskName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetPlayerMask_Statics::NewProp_PlayerMaskName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetPlayerMask_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetPlayerMask_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetPlayerMask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetPlayerMask_Statics::NewProp_PlayerMaskName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetPlayerMask_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetPlayerMask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetPlayerMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetPlayerMask", nullptr, nullptr, sizeof(SBZCheatManager_eventSetPlayerMask_Parms), Z_Construct_UFunction_USBZCheatManager_SetPlayerMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetPlayerMask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetPlayerMask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetPlayerMask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetPlayerMask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetPlayerMask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetPlayerMergePartySelected_Statics
	{
		struct SBZCheatManager_eventSetPlayerMergePartySelected_Parms
		{
			bool bIsMergePartySelected;
		};
		static void NewProp_bIsMergePartySelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMergePartySelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCheatManager_SetPlayerMergePartySelected_Statics::NewProp_bIsMergePartySelected_SetBit(void* Obj)
	{
		((SBZCheatManager_eventSetPlayerMergePartySelected_Parms*)Obj)->bIsMergePartySelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_SetPlayerMergePartySelected_Statics::NewProp_bIsMergePartySelected = { "bIsMergePartySelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventSetPlayerMergePartySelected_Parms), &Z_Construct_UFunction_USBZCheatManager_SetPlayerMergePartySelected_Statics::NewProp_bIsMergePartySelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetPlayerMergePartySelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetPlayerMergePartySelected_Statics::NewProp_bIsMergePartySelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetPlayerMergePartySelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetPlayerMergePartySelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetPlayerMergePartySelected", nullptr, nullptr, sizeof(SBZCheatManager_eventSetPlayerMergePartySelected_Parms), Z_Construct_UFunction_USBZCheatManager_SetPlayerMergePartySelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetPlayerMergePartySelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetPlayerMergePartySelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetPlayerMergePartySelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetPlayerMergePartySelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetPlayerMergePartySelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetPlayerName_Statics
	{
		struct SBZCheatManager_eventSetPlayerName_Parms
		{
			FString Name;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetPlayerName_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZCheatManager_SetPlayerName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetPlayerName_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetPlayerName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetPlayerName_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetPlayerName_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetPlayerName_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetPlayerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetPlayerName_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetPlayerName_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetPlayerName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetPlayerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetPlayerName", nullptr, nullptr, sizeof(SBZCheatManager_eventSetPlayerName_Parms), Z_Construct_UFunction_USBZCheatManager_SetPlayerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetPlayerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetPlayerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetPlayerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetPlayerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetPlayerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetPlayerSuit_Statics
	{
		struct SBZCheatManager_eventSetPlayerSuit_Parms
		{
			FName PlayerMaskName;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerMaskName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PlayerMaskName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetPlayerSuit_Statics::NewProp_PlayerMaskName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_SetPlayerSuit_Statics::NewProp_PlayerMaskName = { "PlayerMaskName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetPlayerSuit_Parms, PlayerMaskName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetPlayerSuit_Statics::NewProp_PlayerMaskName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetPlayerSuit_Statics::NewProp_PlayerMaskName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetPlayerSuit_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetPlayerSuit_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetPlayerSuit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetPlayerSuit_Statics::NewProp_PlayerMaskName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetPlayerSuit_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetPlayerSuit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetPlayerSuit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetPlayerSuit", nullptr, nullptr, sizeof(SBZCheatManager_eventSetPlayerSuit_Parms), Z_Construct_UFunction_USBZCheatManager_SetPlayerSuit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetPlayerSuit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetPlayerSuit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetPlayerSuit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetPlayerSuit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetPlayerSuit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetRegisterRewardPrints_Statics
	{
		struct SBZCheatManager_eventSetRegisterRewardPrints_Parms
		{
			bool bIsRegistered;
		};
		static void NewProp_bIsRegistered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRegistered;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCheatManager_SetRegisterRewardPrints_Statics::NewProp_bIsRegistered_SetBit(void* Obj)
	{
		((SBZCheatManager_eventSetRegisterRewardPrints_Parms*)Obj)->bIsRegistered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_SetRegisterRewardPrints_Statics::NewProp_bIsRegistered = { "bIsRegistered", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventSetRegisterRewardPrints_Parms), &Z_Construct_UFunction_USBZCheatManager_SetRegisterRewardPrints_Statics::NewProp_bIsRegistered_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetRegisterRewardPrints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetRegisterRewardPrints_Statics::NewProp_bIsRegistered,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetRegisterRewardPrints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetRegisterRewardPrints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetRegisterRewardPrints", nullptr, nullptr, sizeof(SBZCheatManager_eventSetRegisterRewardPrints_Parms), Z_Construct_UFunction_USBZCheatManager_SetRegisterRewardPrints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetRegisterRewardPrints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetRegisterRewardPrints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetRegisterRewardPrints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetRegisterRewardPrints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetRegisterRewardPrints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetSharedTagCount_Statics
	{
		struct SBZCheatManager_eventSetSharedTagCount_Parms
		{
			FName Tag;
			int32 Count;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetSharedTagCount_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_SetSharedTagCount_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetSharedTagCount_Parms, Tag), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetSharedTagCount_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetSharedTagCount_Statics::NewProp_Tag_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetSharedTagCount_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetSharedTagCount_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetSharedTagCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetSharedTagCount_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetSharedTagCount_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetSharedTagCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetSharedTagCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetSharedTagCount", nullptr, nullptr, sizeof(SBZCheatManager_eventSetSharedTagCount_Parms), Z_Construct_UFunction_USBZCheatManager_SetSharedTagCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetSharedTagCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetSharedTagCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetSharedTagCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetSharedTagCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetSharedTagCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetSkill_Statics
	{
		struct SBZCheatManager_eventSetSkill_Parms
		{
			FName SkillDataName;
			bool bIsAcquired;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillDataName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SkillDataName;
		static void NewProp_bIsAcquired_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAcquired;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetSkill_Statics::NewProp_SkillDataName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_SetSkill_Statics::NewProp_SkillDataName = { "SkillDataName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetSkill_Parms, SkillDataName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetSkill_Statics::NewProp_SkillDataName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetSkill_Statics::NewProp_SkillDataName_MetaData)) };
	void Z_Construct_UFunction_USBZCheatManager_SetSkill_Statics::NewProp_bIsAcquired_SetBit(void* Obj)
	{
		((SBZCheatManager_eventSetSkill_Parms*)Obj)->bIsAcquired = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_SetSkill_Statics::NewProp_bIsAcquired = { "bIsAcquired", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventSetSkill_Parms), &Z_Construct_UFunction_USBZCheatManager_SetSkill_Statics::NewProp_bIsAcquired_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetSkill_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetSkill_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetSkill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetSkill_Statics::NewProp_SkillDataName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetSkill_Statics::NewProp_bIsAcquired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetSkill_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetSkill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetSkill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetSkill", nullptr, nullptr, sizeof(SBZCheatManager_eventSetSkill_Parms), Z_Construct_UFunction_USBZCheatManager_SetSkill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetSkill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetSkill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetSkill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetSkill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetSkill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetTargetCharacterStance_Statics
	{
		struct SBZCheatManager_eventSetTargetCharacterStance_Parms
		{
			ESBZCharacterStance Stance;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Stance_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Stance;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCheatManager_SetTargetCharacterStance_Statics::NewProp_Stance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZCheatManager_SetTargetCharacterStance_Statics::NewProp_Stance = { "Stance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetTargetCharacterStance_Parms, Stance), Z_Construct_UEnum_Starbreeze_ESBZCharacterStance, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetTargetCharacterStance_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetTargetCharacterStance_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetTargetCharacterStance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetTargetCharacterStance_Statics::NewProp_Stance_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetTargetCharacterStance_Statics::NewProp_Stance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetTargetCharacterStance_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetTargetCharacterStance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetTargetCharacterStance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetTargetCharacterStance", nullptr, nullptr, sizeof(SBZCheatManager_eventSetTargetCharacterStance_Parms), Z_Construct_UFunction_USBZCheatManager_SetTargetCharacterStance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetTargetCharacterStance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetTargetCharacterStance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetTargetCharacterStance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetTargetCharacterStance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetTargetCharacterStance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetTargetEquippableIndex_Statics
	{
		struct SBZCheatManager_eventSetTargetEquippableIndex_Parms
		{
			int32 EquippableIndex;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EquippableIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetTargetEquippableIndex_Statics::NewProp_EquippableIndex = { "EquippableIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetTargetEquippableIndex_Parms, EquippableIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetTargetEquippableIndex_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetTargetEquippableIndex_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetTargetEquippableIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetTargetEquippableIndex_Statics::NewProp_EquippableIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetTargetEquippableIndex_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetTargetEquippableIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetTargetEquippableIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetTargetEquippableIndex", nullptr, nullptr, sizeof(SBZCheatManager_eventSetTargetEquippableIndex_Parms), Z_Construct_UFunction_USBZCheatManager_SetTargetEquippableIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetTargetEquippableIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetTargetEquippableIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetTargetEquippableIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetTargetEquippableIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetTargetEquippableIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetTargetEquippableIndexTarget_Statics
	{
		struct SBZCheatManager_eventSetTargetEquippableIndexTarget_Parms
		{
			int32 EquippableIndex;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EquippableIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetTargetEquippableIndexTarget_Statics::NewProp_EquippableIndex = { "EquippableIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetTargetEquippableIndexTarget_Parms, EquippableIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetTargetEquippableIndexTarget_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetTargetEquippableIndexTarget_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetTargetEquippableIndexTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetTargetEquippableIndexTarget_Statics::NewProp_EquippableIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetTargetEquippableIndexTarget_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetTargetEquippableIndexTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetTargetEquippableIndexTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetTargetEquippableIndexTarget", nullptr, nullptr, sizeof(SBZCheatManager_eventSetTargetEquippableIndexTarget_Parms), Z_Construct_UFunction_USBZCheatManager_SetTargetEquippableIndexTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetTargetEquippableIndexTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetTargetEquippableIndexTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetTargetEquippableIndexTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetTargetEquippableIndexTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetTargetEquippableIndexTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetTargetLooseTagCount_Statics
	{
		struct SBZCheatManager_eventSetTargetLooseTagCount_Parms
		{
			FName Tag;
			int32 Count;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetTargetLooseTagCount_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_SetTargetLooseTagCount_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetTargetLooseTagCount_Parms, Tag), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetTargetLooseTagCount_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetTargetLooseTagCount_Statics::NewProp_Tag_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetTargetLooseTagCount_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetTargetLooseTagCount_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetTargetLooseTagCount_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetTargetLooseTagCount_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetTargetLooseTagCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetTargetLooseTagCount_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetTargetLooseTagCount_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetTargetLooseTagCount_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetTargetLooseTagCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetTargetLooseTagCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetTargetLooseTagCount", nullptr, nullptr, sizeof(SBZCheatManager_eventSetTargetLooseTagCount_Parms), Z_Construct_UFunction_USBZCheatManager_SetTargetLooseTagCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetTargetLooseTagCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetTargetLooseTagCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetTargetLooseTagCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetTargetLooseTagCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetTargetLooseTagCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetThrowable_Statics
	{
		struct SBZCheatManager_eventSetThrowable_Parms
		{
			FName ThrowableDataName;
			int32 ThrowableIndex;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowableDataName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ThrowableDataName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ThrowableIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetThrowable_Statics::NewProp_ThrowableDataName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_SetThrowable_Statics::NewProp_ThrowableDataName = { "ThrowableDataName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetThrowable_Parms, ThrowableDataName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetThrowable_Statics::NewProp_ThrowableDataName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetThrowable_Statics::NewProp_ThrowableDataName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetThrowable_Statics::NewProp_ThrowableIndex = { "ThrowableIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetThrowable_Parms, ThrowableIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetThrowable_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetThrowable_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetThrowable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetThrowable_Statics::NewProp_ThrowableDataName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetThrowable_Statics::NewProp_ThrowableIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetThrowable_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetThrowable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetThrowable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetThrowable", nullptr, nullptr, sizeof(SBZCheatManager_eventSetThrowable_Parms), Z_Construct_UFunction_USBZCheatManager_SetThrowable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetThrowable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetThrowable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetThrowable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetThrowable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetThrowable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetThrowableAmmo_Statics
	{
		struct SBZCheatManager_eventSetThrowableAmmo_Parms
		{
			int32 Count;
			int32 ThrowableIndex;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ThrowableIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetThrowableAmmo_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetThrowableAmmo_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetThrowableAmmo_Statics::NewProp_ThrowableIndex = { "ThrowableIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetThrowableAmmo_Parms, ThrowableIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetThrowableAmmo_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetThrowableAmmo_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetThrowableAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetThrowableAmmo_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetThrowableAmmo_Statics::NewProp_ThrowableIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetThrowableAmmo_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetThrowableAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetThrowableAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetThrowableAmmo", nullptr, nullptr, sizeof(SBZCheatManager_eventSetThrowableAmmo_Parms), Z_Construct_UFunction_USBZCheatManager_SetThrowableAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetThrowableAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetThrowableAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetThrowableAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetThrowableAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetThrowableAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetTool_Statics
	{
		struct SBZCheatManager_eventSetTool_Parms
		{
			FName ToolDataName;
			int32 PlayerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolDataName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ToolDataName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetTool_Statics::NewProp_ToolDataName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_SetTool_Statics::NewProp_ToolDataName = { "ToolDataName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetTool_Parms, ToolDataName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetTool_Statics::NewProp_ToolDataName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetTool_Statics::NewProp_ToolDataName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetTool_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetTool_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetTool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetTool_Statics::NewProp_ToolDataName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetTool_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetTool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetTool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetTool", nullptr, nullptr, sizeof(SBZCheatManager_eventSetTool_Parms), Z_Construct_UFunction_USBZCheatManager_SetTool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetTool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetTool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetTool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetTool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetTool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SetToolAmmo_Statics
	{
		struct SBZCheatManager_eventSetToolAmmo_Parms
		{
			int32 Count;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetToolAmmo_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetToolAmmo_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SetToolAmmo_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSetToolAmmo_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SetToolAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetToolAmmo_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SetToolAmmo_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SetToolAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SetToolAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SetToolAmmo", nullptr, nullptr, sizeof(SBZCheatManager_eventSetToolAmmo_Parms), Z_Construct_UFunction_USBZCheatManager_SetToolAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetToolAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SetToolAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SetToolAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SetToolAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SetToolAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SimulateChallengeNotificationReceived_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SimulateChallengeNotificationReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SimulateChallengeNotificationReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SimulateChallengeNotificationReceived", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SimulateChallengeNotificationReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SimulateChallengeNotificationReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SimulateChallengeNotificationReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SimulateChallengeNotificationReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_Spawn_Statics
	{
		struct SBZCheatManager_eventSpawn_Parms
		{
			FName AssetName;
			int32 Count;
			float Distance;
			int32 PlayerIndex;
			float Yaw;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AssetName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Yaw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_Spawn_Statics::NewProp_AssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_Spawn_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSpawn_Parms, AssetName), METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_Spawn_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_Spawn_Statics::NewProp_AssetName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_Spawn_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSpawn_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_Spawn_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSpawn_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_Spawn_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSpawn_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_Spawn_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSpawn_Parms, Yaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_Spawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_Spawn_Statics::NewProp_AssetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_Spawn_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_Spawn_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_Spawn_Statics::NewProp_PlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_Spawn_Statics::NewProp_Yaw,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_Spawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_Spawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "Spawn", nullptr, nullptr, sizeof(SBZCheatManager_eventSpawn_Parms), Z_Construct_UFunction_USBZCheatManager_Spawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_Spawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_Spawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_Spawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_Spawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_Spawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SpawnAllAITypes_Statics
	{
		struct SBZCheatManager_eventSpawnAllAITypes_Parms
		{
			int32 Count;
			float Distance;
			float Offset;
			float Yaw;
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Yaw;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SpawnAllAITypes_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSpawnAllAITypes_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_SpawnAllAITypes_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSpawnAllAITypes_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_SpawnAllAITypes_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSpawnAllAITypes_Parms, Offset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_SpawnAllAITypes_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSpawnAllAITypes_Parms, Yaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SpawnAllAITypes_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSpawnAllAITypes_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SpawnAllAITypes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SpawnAllAITypes_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SpawnAllAITypes_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SpawnAllAITypes_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SpawnAllAITypes_Statics::NewProp_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SpawnAllAITypes_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SpawnAllAITypes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SpawnAllAITypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SpawnAllAITypes", nullptr, nullptr, sizeof(SBZCheatManager_eventSpawnAllAITypes_Parms), Z_Construct_UFunction_USBZCheatManager_SpawnAllAITypes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SpawnAllAITypes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SpawnAllAITypes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SpawnAllAITypes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SpawnAllAITypes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SpawnAllAITypes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SpawnFBI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SpawnFBI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SpawnFBI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SpawnFBI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SpawnFBI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SpawnFBI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SpawnFBI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SpawnFBI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_StartEndlessAssault_Statics
	{
		struct SBZCheatManager_eventStartEndlessAssault_Parms
		{
			bool bForceStartAssault;
		};
		static void NewProp_bForceStartAssault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceStartAssault;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZCheatManager_StartEndlessAssault_Statics::NewProp_bForceStartAssault_SetBit(void* Obj)
	{
		((SBZCheatManager_eventStartEndlessAssault_Parms*)Obj)->bForceStartAssault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_StartEndlessAssault_Statics::NewProp_bForceStartAssault = { "bForceStartAssault", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventStartEndlessAssault_Parms), &Z_Construct_UFunction_USBZCheatManager_StartEndlessAssault_Statics::NewProp_bForceStartAssault_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_StartEndlessAssault_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_StartEndlessAssault_Statics::NewProp_bForceStartAssault,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_StartEndlessAssault_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_StartEndlessAssault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "StartEndlessAssault", nullptr, nullptr, sizeof(SBZCheatManager_eventStartEndlessAssault_Parms), Z_Construct_UFunction_USBZCheatManager_StartEndlessAssault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_StartEndlessAssault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_StartEndlessAssault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_StartEndlessAssault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_StartEndlessAssault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_StartEndlessAssault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SubduePlayer_Statics
	{
		struct SBZCheatManager_eventSubduePlayer_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SubduePlayer_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSubduePlayer_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SubduePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SubduePlayer_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SubduePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SubduePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SubduePlayer", nullptr, nullptr, sizeof(SBZCheatManager_eventSubduePlayer_Parms), Z_Construct_UFunction_USBZCheatManager_SubduePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SubduePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SubduePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SubduePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SubduePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SubduePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_SurrenderTarget_Statics
	{
		struct SBZCheatManager_eventSurrenderTarget_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_SurrenderTarget_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventSurrenderTarget_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_SurrenderTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_SurrenderTarget_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_SurrenderTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_SurrenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "SurrenderTarget", nullptr, nullptr, sizeof(SBZCheatManager_eventSurrenderTarget_Parms), Z_Construct_UFunction_USBZCheatManager_SurrenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SurrenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_SurrenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_SurrenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_SurrenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_SurrenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_TasePlayer_Statics
	{
		struct SBZCheatManager_eventTasePlayer_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_TasePlayer_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventTasePlayer_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_TasePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_TasePlayer_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_TasePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_TasePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "TasePlayer", nullptr, nullptr, sizeof(SBZCheatManager_eventTasePlayer_Parms), Z_Construct_UFunction_USBZCheatManager_TasePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_TasePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_TasePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_TasePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_TasePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_TasePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_ThrowItem_Statics
	{
		struct SBZCheatManager_eventThrowItem_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_ThrowItem_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventThrowItem_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_ThrowItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_ThrowItem_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_ThrowItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_ThrowItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "ThrowItem", nullptr, nullptr, sizeof(SBZCheatManager_eventThrowItem_Parms), Z_Construct_UFunction_USBZCheatManager_ThrowItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ThrowItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_ThrowItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ThrowItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_ThrowItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_ThrowItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_ToggleCrouchedTarget_Statics
	{
		struct SBZCheatManager_eventToggleCrouchedTarget_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_ToggleCrouchedTarget_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventToggleCrouchedTarget_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_ToggleCrouchedTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_ToggleCrouchedTarget_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_ToggleCrouchedTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_ToggleCrouchedTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "ToggleCrouchedTarget", nullptr, nullptr, sizeof(SBZCheatManager_eventToggleCrouchedTarget_Parms), Z_Construct_UFunction_USBZCheatManager_ToggleCrouchedTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ToggleCrouchedTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_ToggleCrouchedTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ToggleCrouchedTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_ToggleCrouchedTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_ToggleCrouchedTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_ToggleDebugCameraAndTeleport_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_ToggleDebugCameraAndTeleport_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_ToggleDebugCameraAndTeleport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "ToggleDebugCameraAndTeleport", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_ToggleDebugCameraAndTeleport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ToggleDebugCameraAndTeleport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_ToggleDebugCameraAndTeleport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_ToggleDebugCameraAndTeleport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_ToggleGod_Statics
	{
		struct SBZCheatManager_eventToggleGod_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_ToggleGod_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventToggleGod_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_ToggleGod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_ToggleGod_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_ToggleGod_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_ToggleGod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "ToggleGod", nullptr, nullptr, sizeof(SBZCheatManager_eventToggleGod_Parms), Z_Construct_UFunction_USBZCheatManager_ToggleGod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ToggleGod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_ToggleGod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ToggleGod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_ToggleGod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_ToggleGod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_ToggleInaudiblePlayer_Statics
	{
		struct SBZCheatManager_eventToggleInaudiblePlayer_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_ToggleInaudiblePlayer_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventToggleInaudiblePlayer_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_ToggleInaudiblePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_ToggleInaudiblePlayer_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_ToggleInaudiblePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_ToggleInaudiblePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "ToggleInaudiblePlayer", nullptr, nullptr, sizeof(SBZCheatManager_eventToggleInaudiblePlayer_Parms), Z_Construct_UFunction_USBZCheatManager_ToggleInaudiblePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ToggleInaudiblePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_ToggleInaudiblePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ToggleInaudiblePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_ToggleInaudiblePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_ToggleInaudiblePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_ToggleInvisiblePlayer_Statics
	{
		struct SBZCheatManager_eventToggleInvisiblePlayer_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_ToggleInvisiblePlayer_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventToggleInvisiblePlayer_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_ToggleInvisiblePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_ToggleInvisiblePlayer_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_ToggleInvisiblePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_ToggleInvisiblePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "ToggleInvisiblePlayer", nullptr, nullptr, sizeof(SBZCheatManager_eventToggleInvisiblePlayer_Parms), Z_Construct_UFunction_USBZCheatManager_ToggleInvisiblePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ToggleInvisiblePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_ToggleInvisiblePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ToggleInvisiblePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_ToggleInvisiblePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_ToggleInvisiblePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_Trace_Statics
	{
		struct SBZCheatManager_eventTrace_Parms
		{
			TEnumAsByte<ECollisionChannel> CollisionChannel;
			FName Profile;
			bool bIsObjectType;
			bool bIsComplex;
			float Distance;
			int32 MaxHitCount;
			float Radius;
			float DrawDuration;
			bool bIsDrawPersistent;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Profile;
		static void NewProp_bIsObjectType_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsObjectType;
		static void NewProp_bIsComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsComplex;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxHitCount;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DrawDuration;
		static void NewProp_bIsDrawPersistent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDrawPersistent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCheatManager_Trace_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventTrace_Parms, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZCheatManager_Trace_Statics::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventTrace_Parms, Profile), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZCheatManager_Trace_Statics::NewProp_bIsObjectType_SetBit(void* Obj)
	{
		((SBZCheatManager_eventTrace_Parms*)Obj)->bIsObjectType = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_Trace_Statics::NewProp_bIsObjectType = { "bIsObjectType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventTrace_Parms), &Z_Construct_UFunction_USBZCheatManager_Trace_Statics::NewProp_bIsObjectType_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZCheatManager_Trace_Statics::NewProp_bIsComplex_SetBit(void* Obj)
	{
		((SBZCheatManager_eventTrace_Parms*)Obj)->bIsComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_Trace_Statics::NewProp_bIsComplex = { "bIsComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventTrace_Parms), &Z_Construct_UFunction_USBZCheatManager_Trace_Statics::NewProp_bIsComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_Trace_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventTrace_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_Trace_Statics::NewProp_MaxHitCount = { "MaxHitCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventTrace_Parms, MaxHitCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_Trace_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventTrace_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCheatManager_Trace_Statics::NewProp_DrawDuration = { "DrawDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventTrace_Parms, DrawDuration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZCheatManager_Trace_Statics::NewProp_bIsDrawPersistent_SetBit(void* Obj)
	{
		((SBZCheatManager_eventTrace_Parms*)Obj)->bIsDrawPersistent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCheatManager_Trace_Statics::NewProp_bIsDrawPersistent = { "bIsDrawPersistent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCheatManager_eventTrace_Parms), &Z_Construct_UFunction_USBZCheatManager_Trace_Statics::NewProp_bIsDrawPersistent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_Trace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_Trace_Statics::NewProp_CollisionChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_Trace_Statics::NewProp_Profile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_Trace_Statics::NewProp_bIsObjectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_Trace_Statics::NewProp_bIsComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_Trace_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_Trace_Statics::NewProp_MaxHitCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_Trace_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_Trace_Statics::NewProp_DrawDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_Trace_Statics::NewProp_bIsDrawPersistent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_Trace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_Trace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "Trace", nullptr, nullptr, sizeof(SBZCheatManager_eventTrace_Parms), Z_Construct_UFunction_USBZCheatManager_Trace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_Trace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_Trace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_Trace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_Trace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_Trace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_ViewSelfByIndex_Statics
	{
		struct SBZCheatManager_eventViewSelfByIndex_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_ViewSelfByIndex_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventViewSelfByIndex_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_ViewSelfByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_ViewSelfByIndex_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_ViewSelfByIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_ViewSelfByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "ViewSelfByIndex", nullptr, nullptr, sizeof(SBZCheatManager_eventViewSelfByIndex_Parms), Z_Construct_UFunction_USBZCheatManager_ViewSelfByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ViewSelfByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_ViewSelfByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ViewSelfByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_ViewSelfByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_ViewSelfByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCheatManager_ViewTarget_Statics
	{
		struct SBZCheatManager_eventViewTarget_Parms
		{
			int32 PlayerIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZCheatManager_ViewTarget_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCheatManager_eventViewTarget_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCheatManager_ViewTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCheatManager_ViewTarget_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCheatManager_ViewTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCheatManager_ViewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCheatManager, nullptr, "ViewTarget", nullptr, nullptr, sizeof(SBZCheatManager_eventViewTarget_Parms), Z_Construct_UFunction_USBZCheatManager_ViewTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ViewTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCheatManager_ViewTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCheatManager_ViewTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCheatManager_ViewTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCheatManager_ViewTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZCheatManager_NoRegister()
	{
		return USBZCheatManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZCheatManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuInputComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MenuInputComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedWeaponPartSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedWeaponPartSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedWeaponPart_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedWeaponPart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedWeaponCosmeticsPartSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedWeaponCosmeticsPartSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedWeaponCosmeticsPart_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedWeaponCosmeticsPart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCheatManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZCheatManagerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZCheatManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZCheatManager_ApplyGameplayEffectTarget, "ApplyGameplayEffectTarget" }, // 2169904722
		{ &Z_Construct_UFunction_USBZCheatManager_CallDispatcher, "CallDispatcher" }, // 71956928
		{ &Z_Construct_UFunction_USBZCheatManager_ChangeAssaultDrama, "ChangeAssaultDrama" }, // 161849877
		{ &Z_Construct_UFunction_USBZCheatManager_ConsumePlayerAbilityBuff, "ConsumePlayerAbilityBuff" }, // 3362822651
		{ &Z_Construct_UFunction_USBZCheatManager_ConsumePlayerAbilityBuffAll, "ConsumePlayerAbilityBuffAll" }, // 624147386
		{ &Z_Construct_UFunction_USBZCheatManager_CuffPlayer, "CuffPlayer" }, // 1795965700
		{ &Z_Construct_UFunction_USBZCheatManager_DamageAllCrewAI, "DamageAllCrewAI" }, // 3545317042
		{ &Z_Construct_UFunction_USBZCheatManager_DamageCharacter, "DamageCharacter" }, // 1919402987
		{ &Z_Construct_UFunction_USBZCheatManager_DamagePlayer, "DamagePlayer" }, // 3522015402
		{ &Z_Construct_UFunction_USBZCheatManager_DebugCreateBloodSplatterImpact, "DebugCreateBloodSplatterImpact" }, // 2480040520
		{ &Z_Construct_UFunction_USBZCheatManager_DebugCreateExplosionImpact, "DebugCreateExplosionImpact" }, // 1627960568
		{ &Z_Construct_UFunction_USBZCheatManager_DebugCreateFootstepImpact, "DebugCreateFootstepImpact" }, // 1728143509
		{ &Z_Construct_UFunction_USBZCheatManager_DebugCreateProjectileImpact, "DebugCreateProjectileImpact" }, // 1829522755
		{ &Z_Construct_UFunction_USBZCheatManager_DebugShowSubtitle, "DebugShowSubtitle" }, // 3943852623
		{ &Z_Construct_UFunction_USBZCheatManager_DebugVehicleSplineData, "DebugVehicleSplineData" }, // 1991038925
		{ &Z_Construct_UFunction_USBZCheatManager_DefeatCrewAI, "DefeatCrewAI" }, // 762043823
		{ &Z_Construct_UFunction_USBZCheatManager_DefeatPlayer, "DefeatPlayer" }, // 3773341218
		{ &Z_Construct_UFunction_USBZCheatManager_DefeatTarget, "DefeatTarget" }, // 2955665360
		{ &Z_Construct_UFunction_USBZCheatManager_DestroyAllAI, "DestroyAllAI" }, // 889526677
		{ &Z_Construct_UFunction_USBZCheatManager_DestroyAllDebris, "DestroyAllDebris" }, // 314903241
		{ &Z_Construct_UFunction_USBZCheatManager_DestroyTargetAI, "DestroyTargetAI" }, // 3361273383
		{ &Z_Construct_UFunction_USBZCheatManager_DumpPlayersMergePartyStatus, "DumpPlayersMergePartyStatus" }, // 1190620605
		{ &Z_Construct_UFunction_USBZCheatManager_EquipOverkillWeapon, "EquipOverkillWeapon" }, // 2456878522
		{ &Z_Construct_UFunction_USBZCheatManager_FindBlocker, "FindBlocker" }, // 2567976072
		{ &Z_Construct_UFunction_USBZCheatManager_FindClassReferences, "FindClassReferences" }, // 246802775
		{ &Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuff, "GainPlayerAbilityBuff" }, // 3161413640
		{ &Z_Construct_UFunction_USBZCheatManager_GainPlayerAbilityBuffAll, "GainPlayerAbilityBuffAll" }, // 3891618285
		{ &Z_Construct_UFunction_USBZCheatManager_GamepadOpenInGameCheatMenu, "GamepadOpenInGameCheatMenu" }, // 1357519084
		{ &Z_Construct_UFunction_USBZCheatManager_GiveAmmo, "GiveAmmo" }, // 979695114
		{ &Z_Construct_UFunction_USBZCheatManager_GivePlaceableAmmo, "GivePlaceableAmmo" }, // 917412824
		{ &Z_Construct_UFunction_USBZCheatManager_GiveThrowableAmmo, "GiveThrowableAmmo" }, // 2201936581
		{ &Z_Construct_UFunction_USBZCheatManager_GiveToolAmmo, "GiveToolAmmo" }, // 3894793244
		{ &Z_Construct_UFunction_USBZCheatManager_GrabInstantLoot, "GrabInstantLoot" }, // 1796490116
		{ &Z_Construct_UFunction_USBZCheatManager_InputActionPlayer, "InputActionPlayer" }, // 270967277
		{ &Z_Construct_UFunction_USBZCheatManager_InputActionTarget, "InputActionTarget" }, // 103264969
		{ &Z_Construct_UFunction_USBZCheatManager_InputAxisPlayer, "InputAxisPlayer" }, // 1564313450
		{ &Z_Construct_UFunction_USBZCheatManager_InputAxisTarget, "InputAxisTarget" }, // 2711384140
		{ &Z_Construct_UFunction_USBZCheatManager_InputKeyPlayer, "InputKeyPlayer" }, // 2341222962
		{ &Z_Construct_UFunction_USBZCheatManager_InputKeyTarget, "InputKeyTarget" }, // 2960061012
		{ &Z_Construct_UFunction_USBZCheatManager_InputVectorAxisPlayer, "InputVectorAxisPlayer" }, // 316473002
		{ &Z_Construct_UFunction_USBZCheatManager_InputVectorAxisTarget, "InputVectorAxisTarget" }, // 1149331493
		{ &Z_Construct_UFunction_USBZCheatManager_InteractAITarget, "InteractAITarget" }, // 2666307549
		{ &Z_Construct_UFunction_USBZCheatManager_KillAllAI, "KillAllAI" }, // 1133107590
		{ &Z_Construct_UFunction_USBZCheatManager_KillAllCrewAI, "KillAllCrewAI" }, // 1132735227
		{ &Z_Construct_UFunction_USBZCheatManager_KillPlayer, "KillPlayer" }, // 881578539
		{ &Z_Construct_UFunction_USBZCheatManager_KillTarget, "KillTarget" }, // 2426386610
		{ &Z_Construct_UFunction_USBZCheatManager_ListenToRewardLogs, "ListenToRewardLogs" }, // 4157194315
		{ &Z_Construct_UFunction_USBZCheatManager_LobotomizeAllAI, "LobotomizeAllAI" }, // 1602441601
		{ &Z_Construct_UFunction_USBZCheatManager_LobotomizeAllCrewAI, "LobotomizeAllCrewAI" }, // 200227296
		{ &Z_Construct_UFunction_USBZCheatManager_LogSceneComponents, "LogSceneComponents" }, // 1206892453
		{ &Z_Construct_UFunction_USBZCheatManager_MoveDebugActorTarget, "MoveDebugActorTarget" }, // 1781559347
		{ &Z_Construct_UFunction_USBZCheatManager_OverlapSphere, "OverlapSphere" }, // 1958253548
		{ &Z_Construct_UFunction_USBZCheatManager_PerceptionOnAllAI, "PerceptionOnAllAI" }, // 1974359065
		{ &Z_Construct_UFunction_USBZCheatManager_PossessSelf, "PossessSelf" }, // 2681429539
		{ &Z_Construct_UFunction_USBZCheatManager_PossessTarget, "PossessTarget" }, // 1346574238
		{ &Z_Construct_UFunction_USBZCheatManager_PrintAllInteractable, "PrintAllInteractable" }, // 298319433
		{ &Z_Construct_UFunction_USBZCheatManager_PrintAnimNotifies, "PrintAnimNotifies" }, // 4103173331
		{ &Z_Construct_UFunction_USBZCheatManager_PrintExperienceMilestone, "PrintExperienceMilestone" }, // 2447766970
		{ &Z_Construct_UFunction_USBZCheatManager_PrintMissionSeed, "PrintMissionSeed" }, // 1421542360
		{ &Z_Construct_UFunction_USBZCheatManager_PrintPlayerIDArray, "PrintPlayerIDArray" }, // 4249853126
		{ &Z_Construct_UFunction_USBZCheatManager_PrintRewardLogEvent, "PrintRewardLogEvent" }, // 3430399156
		{ &Z_Construct_UFunction_USBZCheatManager_PrintServerWorldInfo, "PrintServerWorldInfo" }, // 3724593119
		{ &Z_Construct_UFunction_USBZCheatManager_PrintTagChanges, "PrintTagChanges" }, // 3002679983
		{ &Z_Construct_UFunction_USBZCheatManager_PrintTarget, "PrintTarget" }, // 1831107819
		{ &Z_Construct_UFunction_USBZCheatManager_PrintTargetTagChanges, "PrintTargetTagChanges" }, // 1631267876
		{ &Z_Construct_UFunction_USBZCheatManager_PrintWorldInfo, "PrintWorldInfo" }, // 2481113963
		{ &Z_Construct_UFunction_USBZCheatManager_RebuildAssetLookup, "RebuildAssetLookup" }, // 848418648
		{ &Z_Construct_UFunction_USBZCheatManager_RefreshPlayerAbilityBuff, "RefreshPlayerAbilityBuff" }, // 399149852
		{ &Z_Construct_UFunction_USBZCheatManager_RefreshPlayerAbilityBuffAll, "RefreshPlayerAbilityBuffAll" }, // 3906365797
		{ &Z_Construct_UFunction_USBZCheatManager_ReportBug, "ReportBug" }, // 1434555405
		{ &Z_Construct_UFunction_USBZCheatManager_RequestMissionEnd, "RequestMissionEnd" }, // 3843073188
		{ &Z_Construct_UFunction_USBZCheatManager_RequestMissionFail, "RequestMissionFail" }, // 769861036
		{ &Z_Construct_UFunction_USBZCheatManager_RequestMissionSuccess, "RequestMissionSuccess" }, // 2999985882
		{ &Z_Construct_UFunction_USBZCheatManager_ResearchAllSkills, "ResearchAllSkills" }, // 2330652014
		{ &Z_Construct_UFunction_USBZCheatManager_ResetCVars, "ResetCVars" }, // 3184841783
		{ &Z_Construct_UFunction_USBZCheatManager_ReviveCrewAI, "ReviveCrewAI" }, // 2358858117
		{ &Z_Construct_UFunction_USBZCheatManager_RevivePlayer, "RevivePlayer" }, // 1990487703
		{ &Z_Construct_UFunction_USBZCheatManager_ReviveTarget, "ReviveTarget" }, // 610449781
		{ &Z_Construct_UFunction_USBZCheatManager_SecureAllAvailableLoot, "SecureAllAvailableLoot" }, // 1227521512
		{ &Z_Construct_UFunction_USBZCheatManager_SecureBag, "SecureBag" }, // 87650401
		{ &Z_Construct_UFunction_USBZCheatManager_SelectDebugActorTarget, "SelectDebugActorTarget" }, // 1194613534
		{ &Z_Construct_UFunction_USBZCheatManager_SendSessionMessage, "SendSessionMessage" }, // 2150275126
		{ &Z_Construct_UFunction_USBZCheatManager_SetAddMissionFailedTimeout, "SetAddMissionFailedTimeout" }, // 3502568431
		{ &Z_Construct_UFunction_USBZCheatManager_SetAllSkills, "SetAllSkills" }, // 1302073472
		{ &Z_Construct_UFunction_USBZCheatManager_SetAmmoInventory, "SetAmmoInventory" }, // 3911631996
		{ &Z_Construct_UFunction_USBZCheatManager_SetAmmoLoaded, "SetAmmoLoaded" }, // 785896242
		{ &Z_Construct_UFunction_USBZCheatManager_SetAssaultActive, "SetAssaultActive" }, // 3675255518
		{ &Z_Construct_UFunction_USBZCheatManager_SetAssaultLevelProgression, "SetAssaultLevelProgression" }, // 2038517900
		{ &Z_Construct_UFunction_USBZCheatManager_SetCrouchedTarget, "SetCrouchedTarget" }, // 1127282612
		{ &Z_Construct_UFunction_USBZCheatManager_SetDifficulty, "SetDifficulty" }, // 3953708054
		{ &Z_Construct_UFunction_USBZCheatManager_SetDownedCount, "SetDownedCount" }, // 3468685738
		{ &Z_Construct_UFunction_USBZCheatManager_SetDrawTransform, "SetDrawTransform" }, // 3857137772
		{ &Z_Construct_UFunction_USBZCheatManager_SetDrawTransformEnabled, "SetDrawTransformEnabled" }, // 2247936066
		{ &Z_Construct_UFunction_USBZCheatManager_SetEquippable, "SetEquippable" }, // 3933311280
		{ &Z_Construct_UFunction_USBZCheatManager_SetEquippablePart, "SetEquippablePart" }, // 837691248
		{ &Z_Construct_UFunction_USBZCheatManager_SetEquippablePreset, "SetEquippablePreset" }, // 1020045471
		{ &Z_Construct_UFunction_USBZCheatManager_SetEquippableWeaponPreset, "SetEquippableWeaponPreset" }, // 1326813605
		{ &Z_Construct_UFunction_USBZCheatManager_SetEquippedTarget, "SetEquippedTarget" }, // 3670457154
		{ &Z_Construct_UFunction_USBZCheatManager_SetFriendlyFireSettings, "SetFriendlyFireSettings" }, // 964942636
		{ &Z_Construct_UFunction_USBZCheatManager_SetGod, "SetGod" }, // 1652682343
		{ &Z_Construct_UFunction_USBZCheatManager_SetHeistState, "SetHeistState" }, // 505197284
		{ &Z_Construct_UFunction_USBZCheatManager_SetInaudiblePlayer, "SetInaudiblePlayer" }, // 865208548
		{ &Z_Construct_UFunction_USBZCheatManager_SetInfiniteAmmo, "SetInfiniteAmmo" }, // 2699479891
		{ &Z_Construct_UFunction_USBZCheatManager_SetInteractorModeIndex, "SetInteractorModeIndex" }, // 3432066194
		{ &Z_Construct_UFunction_USBZCheatManager_SetInvisiblePlayer, "SetInvisiblePlayer" }, // 2362457697
		{ &Z_Construct_UFunction_USBZCheatManager_SetJesus, "SetJesus" }, // 3048161018
		{ &Z_Construct_UFunction_USBZCheatManager_SetLastArrestedByGuard, "SetLastArrestedByGuard" }, // 1285684343
		{ &Z_Construct_UFunction_USBZCheatManager_SetLooseTagCount, "SetLooseTagCount" }, // 1510458691
		{ &Z_Construct_UFunction_USBZCheatManager_SetMarkedTarget, "SetMarkedTarget" }, // 3231334318
		{ &Z_Construct_UFunction_USBZCheatManager_SetMaxAICrewCountOverride, "SetMaxAICrewCountOverride" }, // 2263176098
		{ &Z_Construct_UFunction_USBZCheatManager_SetMilestonePassed, "SetMilestonePassed" }, // 3828348535
		{ &Z_Construct_UFunction_USBZCheatManager_SetMilestonesPassedLoud, "SetMilestonesPassedLoud" }, // 3579824879
		{ &Z_Construct_UFunction_USBZCheatManager_SetMilestonesPassedStealth, "SetMilestonesPassedStealth" }, // 1824012508
		{ &Z_Construct_UFunction_USBZCheatManager_SetMissionActive, "SetMissionActive" }, // 1825073558
		{ &Z_Construct_UFunction_USBZCheatManager_SetMissionFailedEnabled, "SetMissionFailedEnabled" }, // 2933020304
		{ &Z_Construct_UFunction_USBZCheatManager_SetOptionalMilestonePassed, "SetOptionalMilestonePassed" }, // 3012779367
		{ &Z_Construct_UFunction_USBZCheatManager_SetOverkillWeaponProgress, "SetOverkillWeaponProgress" }, // 546975168
		{ &Z_Construct_UFunction_USBZCheatManager_SetPlaceable, "SetPlaceable" }, // 4144835868
		{ &Z_Construct_UFunction_USBZCheatManager_SetPlaceableAmmo, "SetPlaceableAmmo" }, // 831992758
		{ &Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockCooldown, "SetPlayerAbilityBuffBlockCooldown" }, // 3885713183
		{ &Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockCooldownAll, "SetPlayerAbilityBuffBlockCooldownAll" }, // 2198784703
		{ &Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlocked, "SetPlayerAbilityBuffBlocked" }, // 2668070199
		{ &Z_Construct_UFunction_USBZCheatManager_SetPlayerAbilityBuffBlockedAll, "SetPlayerAbilityBuffBlockedAll" }, // 3545449793
		{ &Z_Construct_UFunction_USBZCheatManager_SetPlayerArmor, "SetPlayerArmor" }, // 353835073
		{ &Z_Construct_UFunction_USBZCheatManager_SetPlayerCharacter, "SetPlayerCharacter" }, // 3558923796
		{ &Z_Construct_UFunction_USBZCheatManager_SetPlayerGlove, "SetPlayerGlove" }, // 200023111
		{ &Z_Construct_UFunction_USBZCheatManager_SetPlayerMask, "SetPlayerMask" }, // 1759801120
		{ &Z_Construct_UFunction_USBZCheatManager_SetPlayerMergePartySelected, "SetPlayerMergePartySelected" }, // 770877398
		{ &Z_Construct_UFunction_USBZCheatManager_SetPlayerName, "SetPlayerName" }, // 3700721709
		{ &Z_Construct_UFunction_USBZCheatManager_SetPlayerSuit, "SetPlayerSuit" }, // 1336531921
		{ &Z_Construct_UFunction_USBZCheatManager_SetRegisterRewardPrints, "SetRegisterRewardPrints" }, // 954203164
		{ &Z_Construct_UFunction_USBZCheatManager_SetSharedTagCount, "SetSharedTagCount" }, // 4114793980
		{ &Z_Construct_UFunction_USBZCheatManager_SetSkill, "SetSkill" }, // 4164030331
		{ &Z_Construct_UFunction_USBZCheatManager_SetTargetCharacterStance, "SetTargetCharacterStance" }, // 3770725777
		{ &Z_Construct_UFunction_USBZCheatManager_SetTargetEquippableIndex, "SetTargetEquippableIndex" }, // 1833746753
		{ &Z_Construct_UFunction_USBZCheatManager_SetTargetEquippableIndexTarget, "SetTargetEquippableIndexTarget" }, // 1603012949
		{ &Z_Construct_UFunction_USBZCheatManager_SetTargetLooseTagCount, "SetTargetLooseTagCount" }, // 389958552
		{ &Z_Construct_UFunction_USBZCheatManager_SetThrowable, "SetThrowable" }, // 2427231957
		{ &Z_Construct_UFunction_USBZCheatManager_SetThrowableAmmo, "SetThrowableAmmo" }, // 1881554884
		{ &Z_Construct_UFunction_USBZCheatManager_SetTool, "SetTool" }, // 1584553067
		{ &Z_Construct_UFunction_USBZCheatManager_SetToolAmmo, "SetToolAmmo" }, // 1589073593
		{ &Z_Construct_UFunction_USBZCheatManager_SimulateChallengeNotificationReceived, "SimulateChallengeNotificationReceived" }, // 3815403675
		{ &Z_Construct_UFunction_USBZCheatManager_Spawn, "Spawn" }, // 155575492
		{ &Z_Construct_UFunction_USBZCheatManager_SpawnAllAITypes, "SpawnAllAITypes" }, // 677202976
		{ &Z_Construct_UFunction_USBZCheatManager_SpawnFBI, "SpawnFBI" }, // 3226030503
		{ &Z_Construct_UFunction_USBZCheatManager_StartEndlessAssault, "StartEndlessAssault" }, // 3038144824
		{ &Z_Construct_UFunction_USBZCheatManager_SubduePlayer, "SubduePlayer" }, // 765313316
		{ &Z_Construct_UFunction_USBZCheatManager_SurrenderTarget, "SurrenderTarget" }, // 1842286351
		{ &Z_Construct_UFunction_USBZCheatManager_TasePlayer, "TasePlayer" }, // 1490919226
		{ &Z_Construct_UFunction_USBZCheatManager_ThrowItem, "ThrowItem" }, // 3565499527
		{ &Z_Construct_UFunction_USBZCheatManager_ToggleCrouchedTarget, "ToggleCrouchedTarget" }, // 4045954360
		{ &Z_Construct_UFunction_USBZCheatManager_ToggleDebugCameraAndTeleport, "ToggleDebugCameraAndTeleport" }, // 882644162
		{ &Z_Construct_UFunction_USBZCheatManager_ToggleGod, "ToggleGod" }, // 912211787
		{ &Z_Construct_UFunction_USBZCheatManager_ToggleInaudiblePlayer, "ToggleInaudiblePlayer" }, // 2712596056
		{ &Z_Construct_UFunction_USBZCheatManager_ToggleInvisiblePlayer, "ToggleInvisiblePlayer" }, // 3645981420
		{ &Z_Construct_UFunction_USBZCheatManager_Trace, "Trace" }, // 4176116841
		{ &Z_Construct_UFunction_USBZCheatManager_ViewSelfByIndex, "ViewSelfByIndex" }, // 290757923
		{ &Z_Construct_UFunction_USBZCheatManager_ViewTarget, "ViewTarget" }, // 3780166269
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCheatManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCheatManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCheatManager_Statics::NewProp_MenuInputComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCheatManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCheatManager_Statics::NewProp_MenuInputComponent = { "MenuInputComponent", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCheatManager, MenuInputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCheatManager_Statics::NewProp_MenuInputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCheatManager_Statics::NewProp_MenuInputComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCheatManager_Statics::NewProp_SelectedWeaponPartSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCheatManager" },
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCheatManager_Statics::NewProp_SelectedWeaponPartSlot = { "SelectedWeaponPartSlot", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCheatManager, SelectedWeaponPartSlot), Z_Construct_UClass_USBZWeaponPartSlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCheatManager_Statics::NewProp_SelectedWeaponPartSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCheatManager_Statics::NewProp_SelectedWeaponPartSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCheatManager_Statics::NewProp_SelectedWeaponPart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCheatManager" },
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCheatManager_Statics::NewProp_SelectedWeaponPart = { "SelectedWeaponPart", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCheatManager, SelectedWeaponPart), Z_Construct_UClass_USBZWeaponPartDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCheatManager_Statics::NewProp_SelectedWeaponPart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCheatManager_Statics::NewProp_SelectedWeaponPart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCheatManager_Statics::NewProp_SelectedWeaponCosmeticsPartSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCheatManager" },
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCheatManager_Statics::NewProp_SelectedWeaponCosmeticsPartSlot = { "SelectedWeaponCosmeticsPartSlot", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCheatManager, SelectedWeaponCosmeticsPartSlot), Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCheatManager_Statics::NewProp_SelectedWeaponCosmeticsPartSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCheatManager_Statics::NewProp_SelectedWeaponCosmeticsPartSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCheatManager_Statics::NewProp_SelectedWeaponCosmeticsPart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCheatManager" },
		{ "ModuleRelativePath", "Public/SBZCheatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCheatManager_Statics::NewProp_SelectedWeaponCosmeticsPart = { "SelectedWeaponCosmeticsPart", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCheatManager, SelectedWeaponCosmeticsPart), Z_Construct_UClass_USBZCosmeticsDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCheatManager_Statics::NewProp_SelectedWeaponCosmeticsPart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCheatManager_Statics::NewProp_SelectedWeaponCosmeticsPart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCheatManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCheatManager_Statics::NewProp_MenuInputComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCheatManager_Statics::NewProp_SelectedWeaponPartSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCheatManager_Statics::NewProp_SelectedWeaponPart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCheatManager_Statics::NewProp_SelectedWeaponCosmeticsPartSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCheatManager_Statics::NewProp_SelectedWeaponCosmeticsPart,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCheatManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCheatManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCheatManager_Statics::ClassParams = {
		&USBZCheatManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZCheatManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCheatManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCheatManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCheatManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCheatManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCheatManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCheatManager, 3210412457);
	template<> STARBREEZE_API UClass* StaticClass<USBZCheatManager>()
	{
		return USBZCheatManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCheatManager(Z_Construct_UClass_USBZCheatManager, &USBZCheatManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCheatManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCheatManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
