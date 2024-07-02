// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZUIManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZUIManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUIManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUIManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZControlsReference();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZButtonControlsReference();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnControlsReferenceActionPressed__DelegateSignature();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHUDNotificationData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZInputState();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseMenuWidget_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPopupWidget_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPlatform();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUIData_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnPopUpWidgetClosed__DelegateSignature();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMetaNotification();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZUIPopupData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSideBarNotificationData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTutorialPopUpDataAsset_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnDisplayHUDNotification__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTutorialPopUpBody_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFullScreenNotification_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSideBarNotifications_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInfoPopupText();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnHUDContextChanged__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDebugWidget_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnUITagsChanged__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSubtitleWidget_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnUIStackStateChanged__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnUIStackLockChanged__DelegateSignature();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZControlsReferenceRuntime();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoginScreenBaseWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPSOCompilationScreen_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnInstallStateChanged__DelegateSignature();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZUIManager::execGetOwnedGameplayTags)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetOwnedGameplayTags(Z_Param_Out_TagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execHasAllMatchingGameplayTags)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAllMatchingGameplayTags(Z_Param_Out_TagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execHasAnyMatchingGameplayTags)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAnyMatchingGameplayTags(Z_Param_Out_TagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execHasMatchingGameplayTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_TagToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasMatchingGameplayTag(Z_Param_TagToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execAddControlsReference)
	{
		P_GET_STRUCT_REF(FSBZControlsReference,Z_Param_Out_InControlsReference);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddControlsReference(Z_Param_Out_InControlsReference);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execAddMenuControlsReference)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FSBZButtonControlsReference,Z_Param_Out_InButtonControlsReference);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ControlsReferenceActionPressedEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZUIManager::AddMenuControlsReference(Z_Param_WorldContextObject,Z_Param_Out_InButtonControlsReference,FOnControlsReferenceActionPressed(Z_Param_ControlsReferenceActionPressedEvent));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execAddUIGameplayTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_UITag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddUIGameplayTag(Z_Param_UITag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execClearPopupStack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearPopupStack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execDisplayHUDNotification)
	{
		P_GET_STRUCT_REF(FSBZHUDNotificationData,Z_Param_Out_HUDNotification);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayHUDNotification(Z_Param_Out_HUDNotification);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execGetActiveControlsReference)
	{
		P_GET_STRUCT_REF(FSBZControlsReference,Z_Param_Out_OutControlsReference);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetActiveControlsReference(Z_Param_Out_OutControlsReference);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execGetFullscreenNotificationQueue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSBZUIFullscreenNotificationData>*)Z_Param__Result=P_THIS->GetFullscreenNotificationQueue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execGetGamepadSprite)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPaperSprite**)Z_Param__Result=P_THIS->GetGamepadSprite();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execGetInputMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZInputState*)Z_Param__Result=P_THIS->GetInputMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execGetKeyForActionMapping)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKey*)Z_Param__Result=P_THIS->GetKeyForActionMapping(Z_Param_Out_InActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execGetKeysForAxisMapping)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAxisName);
		P_GET_TARRAY_REF(FKey,Z_Param_Out_ReturnList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetKeysForAxisMapping(Z_Param_Out_InAxisName,Z_Param_Out_ReturnList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execGetKeySpriteEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPaperSprite**)Z_Param__Result=P_THIS->GetKeySpriteEmpty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execGetKeySpriteForFKey)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPaperSprite**)Z_Param__Result=P_THIS->GetKeySpriteForFKey(Z_Param_Out_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execGetLastFocusedWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZWidgetBase**)Z_Param__Result=P_THIS->GetLastFocusedWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execGetLocalizedPlayerNoName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetLocalizedPlayerNoName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execGetMenuWidget)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZBaseMenuWidget**)Z_Param__Result=USBZUIManager::GetMenuWidget(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execGetPopUpWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZPopupWidget**)Z_Param__Result=P_THIS->GetPopUpWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execGetSpriteForNebula)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPaperSprite**)Z_Param__Result=P_THIS->GetSpriteForNebula();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execGetSpriteForPlatform)
	{
		P_GET_ENUM(ESBZPlatform,Z_Param_InPlatform);
		P_GET_UBOOL(Z_Param_bUseCurrentPlatformIconIfUnknown);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPaperSprite**)Z_Param__Result=P_THIS->GetSpriteForPlatform(ESBZPlatform(Z_Param_InPlatform),Z_Param_bUseCurrentPlatformIconIfUnknown);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execGetUIData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZUIData**)Z_Param__Result=USBZUIManager::GetUIData(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execGetUIStack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetUIStack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execHandleActionPhaseEntered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleActionPhaseEntered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execHandleLocalPlayerControllerReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleLocalPlayerControllerReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execHandleProgressionSave)
	{
		P_GET_ENUM(ESBZMetaRequestResult,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleProgressionSave(ESBZMetaRequestResult(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execHideMenuControlsReference)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZUIManager::HideMenuControlsReference(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execIsControllerMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsControllerMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execIsGameInstallPending)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsGameInstallPending();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execIsPopupShowing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPopupShowing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execIsStackEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStackEmpty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execIsStackLocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStackLocked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execOnHeistSelectionMenuSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHeistSelectionMenuSet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execOnOptForSoloModePopupClosed)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ClosingActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOptForSoloModePopupClosed(Z_Param_ClosingActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execOnPopupControllerEndPlay)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPopupControllerEndPlay(Z_Param_Actor,EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execOnStateMachineStateEntered)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_StateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateMachineStateEntered(Z_Param_StateName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execOnStateMachineStateExited)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_StateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateMachineStateExited(Z_Param_StateName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execPeekStack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->PeekStack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execPopStack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->PopStack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execPushUIStack)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_StackValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PushUIStack(Z_Param_Out_StackValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execRefreshFullScreenNotificationQueue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshFullScreenNotificationQueue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execRemoveControlsReference)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InControlsReferenceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveControlsReference(Z_Param_InControlsReferenceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execRemoveGameplayTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_UITag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveGameplayTag(Z_Param_UITag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execSaveProgressionSaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveProgressionSaveGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execSetDisplayPlayerHUD)
	{
		P_GET_UBOOL(Z_Param_bShouldDisplayPlayerHUD);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisplayPlayerHUD(Z_Param_bShouldDisplayPlayerHUD);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execSetInputModeToGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputModeToGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execSetInputModeToGameAndUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputModeToGameAndUI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execSetInputModeToUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputModeToUI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execSetLastFocusedWidget)
	{
		P_GET_OBJECT(USBZWidgetBase,Z_Param_InLastFocusedWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLastFocusedWidget(Z_Param_InLastFocusedWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execSetLoginScreenVisibility)
	{
		P_GET_ENUM(ESlateVisibility,Z_Param_InVisibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoginScreenVisibility(ESlateVisibility(Z_Param_InVisibility));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execSetLogoP3Visibility)
	{
		P_GET_ENUM(ESlateVisibility,Z_Param_InVisibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLogoP3Visibility(ESlateVisibility(Z_Param_InVisibility));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execSetOnePlayerMatchHook)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnePlayerMatchHook();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execSetStartInHeistSelection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartInHeistSelection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execShouldDisplayCursor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldDisplayCursor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execShouldStartInHeistSelection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldStartInHeistSelection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execShowEULAPopup)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowEULAPopup(FSBZOnPopUpWidgetClosed(Z_Param_Out_InDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execShowFullScreenNotification)
	{
		P_GET_STRUCT(FSBZUIFullscreenNotificationData,Z_Param_InFullscreenNotificationData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowFullScreenNotification(Z_Param_InFullscreenNotificationData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execShowMetaNotification)
	{
		P_GET_STRUCT(FSBZMetaNotification,Z_Param_InMetaNotification);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowMetaNotification(Z_Param_InMetaNotification);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execShowPopUp)
	{
		P_GET_STRUCT(FSBZUIPopupData,Z_Param_InPopupData);
		P_GET_UBOOL(Z_Param_bReturnFocusWhenClosed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowPopUp(Z_Param_InPopupData,Z_Param_bReturnFocusWhenClosed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execShowPopUpWithCallback)
	{
		P_GET_STRUCT(FSBZUIPopupData,Z_Param_InPopupData);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InPopUpActionInputDelegate);
		P_GET_PROPERTY(FIntProperty,Z_Param_InAutomaticClosingCountdownTime);
		P_GET_PROPERTY(FNameProperty,Z_Param_InAutomaticClosingActionName);
		P_GET_UBOOL(Z_Param_bReturnFocusWhenClosed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowPopUpWithCallback(Z_Param_InPopupData,FSBZOnPopUpWidgetClosed(Z_Param_InPopUpActionInputDelegate),Z_Param_InAutomaticClosingCountdownTime,Z_Param_InAutomaticClosingActionName,Z_Param_bReturnFocusWhenClosed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execShowSidebarNotification)
	{
		P_GET_STRUCT(FSBZSideBarNotificationData,Z_Param_InSideBarNotificationData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowSidebarNotification(Z_Param_InSideBarNotificationData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execShowTutorialPopUp)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USBZTutorialPopUpDataAsset,Z_Param_InTutorialToDisplay);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InPopUpActionInputDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZUIManager::ShowTutorialPopUp(Z_Param_WorldContextObject,Z_Param_InTutorialToDisplay,FSBZOnPopUpWidgetClosed(Z_Param_InPopUpActionInputDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execSimulateJoinHeistActivity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SimulateJoinHeistActivity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execSwitchUIStack)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_StackValueToSwitch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchUIStack(Z_Param_Out_StackValueToSwitch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUIManager::execTryRemoveFromStack)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_StackValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryRemoveFromStack(Z_Param_Out_StackValue);
		P_NATIVE_END;
	}
	void USBZUIManager::StaticRegisterNativesUSBZUIManager()
	{
		UClass* Class = USBZUIManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddControlsReference", &USBZUIManager::execAddControlsReference },
			{ "AddMenuControlsReference", &USBZUIManager::execAddMenuControlsReference },
			{ "AddUIGameplayTag", &USBZUIManager::execAddUIGameplayTag },
			{ "ClearPopupStack", &USBZUIManager::execClearPopupStack },
			{ "DisplayHUDNotification", &USBZUIManager::execDisplayHUDNotification },
			{ "GetActiveControlsReference", &USBZUIManager::execGetActiveControlsReference },
			{ "GetFullscreenNotificationQueue", &USBZUIManager::execGetFullscreenNotificationQueue },
			{ "GetGamepadSprite", &USBZUIManager::execGetGamepadSprite },
			{ "GetInputMode", &USBZUIManager::execGetInputMode },
			{ "GetKeyForActionMapping", &USBZUIManager::execGetKeyForActionMapping },
			{ "GetKeysForAxisMapping", &USBZUIManager::execGetKeysForAxisMapping },
			{ "GetKeySpriteEmpty", &USBZUIManager::execGetKeySpriteEmpty },
			{ "GetKeySpriteForFKey", &USBZUIManager::execGetKeySpriteForFKey },
			{ "GetLastFocusedWidget", &USBZUIManager::execGetLastFocusedWidget },
			{ "GetLocalizedPlayerNoName", &USBZUIManager::execGetLocalizedPlayerNoName },
			{ "GetMenuWidget", &USBZUIManager::execGetMenuWidget },
			{ "GetOwnedGameplayTags", &USBZUIManager::execGetOwnedGameplayTags },
			{ "GetPopUpWidget", &USBZUIManager::execGetPopUpWidget },
			{ "GetSpriteForNebula", &USBZUIManager::execGetSpriteForNebula },
			{ "GetSpriteForPlatform", &USBZUIManager::execGetSpriteForPlatform },
			{ "GetUIData", &USBZUIManager::execGetUIData },
			{ "GetUIStack", &USBZUIManager::execGetUIStack },
			{ "HandleActionPhaseEntered", &USBZUIManager::execHandleActionPhaseEntered },
			{ "HandleLocalPlayerControllerReady", &USBZUIManager::execHandleLocalPlayerControllerReady },
			{ "HandleProgressionSave", &USBZUIManager::execHandleProgressionSave },
			{ "HasAllMatchingGameplayTags", &USBZUIManager::execHasAllMatchingGameplayTags },
			{ "HasAnyMatchingGameplayTags", &USBZUIManager::execHasAnyMatchingGameplayTags },
			{ "HasMatchingGameplayTag", &USBZUIManager::execHasMatchingGameplayTag },
			{ "HideMenuControlsReference", &USBZUIManager::execHideMenuControlsReference },
			{ "IsControllerMode", &USBZUIManager::execIsControllerMode },
			{ "IsGameInstallPending", &USBZUIManager::execIsGameInstallPending },
			{ "IsPopupShowing", &USBZUIManager::execIsPopupShowing },
			{ "IsStackEmpty", &USBZUIManager::execIsStackEmpty },
			{ "IsStackLocked", &USBZUIManager::execIsStackLocked },
			{ "OnHeistSelectionMenuSet", &USBZUIManager::execOnHeistSelectionMenuSet },
			{ "OnOptForSoloModePopupClosed", &USBZUIManager::execOnOptForSoloModePopupClosed },
			{ "OnPopupControllerEndPlay", &USBZUIManager::execOnPopupControllerEndPlay },
			{ "OnStateMachineStateEntered", &USBZUIManager::execOnStateMachineStateEntered },
			{ "OnStateMachineStateExited", &USBZUIManager::execOnStateMachineStateExited },
			{ "PeekStack", &USBZUIManager::execPeekStack },
			{ "PopStack", &USBZUIManager::execPopStack },
			{ "PushUIStack", &USBZUIManager::execPushUIStack },
			{ "RefreshFullScreenNotificationQueue", &USBZUIManager::execRefreshFullScreenNotificationQueue },
			{ "RemoveControlsReference", &USBZUIManager::execRemoveControlsReference },
			{ "RemoveGameplayTag", &USBZUIManager::execRemoveGameplayTag },
			{ "SaveProgressionSaveGame", &USBZUIManager::execSaveProgressionSaveGame },
			{ "SetDisplayPlayerHUD", &USBZUIManager::execSetDisplayPlayerHUD },
			{ "SetInputModeToGame", &USBZUIManager::execSetInputModeToGame },
			{ "SetInputModeToGameAndUI", &USBZUIManager::execSetInputModeToGameAndUI },
			{ "SetInputModeToUI", &USBZUIManager::execSetInputModeToUI },
			{ "SetLastFocusedWidget", &USBZUIManager::execSetLastFocusedWidget },
			{ "SetLoginScreenVisibility", &USBZUIManager::execSetLoginScreenVisibility },
			{ "SetLogoP3Visibility", &USBZUIManager::execSetLogoP3Visibility },
			{ "SetOnePlayerMatchHook", &USBZUIManager::execSetOnePlayerMatchHook },
			{ "SetStartInHeistSelection", &USBZUIManager::execSetStartInHeistSelection },
			{ "ShouldDisplayCursor", &USBZUIManager::execShouldDisplayCursor },
			{ "ShouldStartInHeistSelection", &USBZUIManager::execShouldStartInHeistSelection },
			{ "ShowEULAPopup", &USBZUIManager::execShowEULAPopup },
			{ "ShowFullScreenNotification", &USBZUIManager::execShowFullScreenNotification },
			{ "ShowMetaNotification", &USBZUIManager::execShowMetaNotification },
			{ "ShowPopUp", &USBZUIManager::execShowPopUp },
			{ "ShowPopUpWithCallback", &USBZUIManager::execShowPopUpWithCallback },
			{ "ShowSidebarNotification", &USBZUIManager::execShowSidebarNotification },
			{ "ShowTutorialPopUp", &USBZUIManager::execShowTutorialPopUp },
			{ "SimulateJoinHeistActivity", &USBZUIManager::execSimulateJoinHeistActivity },
			{ "SwitchUIStack", &USBZUIManager::execSwitchUIStack },
			{ "TryRemoveFromStack", &USBZUIManager::execTryRemoveFromStack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZUIManager_AddControlsReference_Statics
	{
		struct SBZUIManager_eventAddControlsReference_Parms
		{
			FSBZControlsReference InControlsReference;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InControlsReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InControlsReference;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_AddControlsReference_Statics::NewProp_InControlsReference_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZUIManager_AddControlsReference_Statics::NewProp_InControlsReference = { "InControlsReference", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventAddControlsReference_Parms, InControlsReference), Z_Construct_UScriptStruct_FSBZControlsReference, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_AddControlsReference_Statics::NewProp_InControlsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_AddControlsReference_Statics::NewProp_InControlsReference_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZUIManager_AddControlsReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventAddControlsReference_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_AddControlsReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_AddControlsReference_Statics::NewProp_InControlsReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_AddControlsReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_AddControlsReference_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_AddControlsReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "AddControlsReference", nullptr, nullptr, sizeof(SBZUIManager_eventAddControlsReference_Parms), Z_Construct_UFunction_USBZUIManager_AddControlsReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_AddControlsReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_AddControlsReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_AddControlsReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_AddControlsReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_AddControlsReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_AddMenuControlsReference_Statics
	{
		struct SBZUIManager_eventAddMenuControlsReference_Parms
		{
			const UObject* WorldContextObject;
			FSBZButtonControlsReference InButtonControlsReference;
			FScriptDelegate ControlsReferenceActionPressedEvent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InButtonControlsReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InButtonControlsReference;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ControlsReferenceActionPressedEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_AddMenuControlsReference_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIManager_AddMenuControlsReference_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventAddMenuControlsReference_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_AddMenuControlsReference_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_AddMenuControlsReference_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_AddMenuControlsReference_Statics::NewProp_InButtonControlsReference_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZUIManager_AddMenuControlsReference_Statics::NewProp_InButtonControlsReference = { "InButtonControlsReference", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventAddMenuControlsReference_Parms, InButtonControlsReference), Z_Construct_UScriptStruct_FSBZButtonControlsReference, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_AddMenuControlsReference_Statics::NewProp_InButtonControlsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_AddMenuControlsReference_Statics::NewProp_InButtonControlsReference_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USBZUIManager_AddMenuControlsReference_Statics::NewProp_ControlsReferenceActionPressedEvent = { "ControlsReferenceActionPressedEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventAddMenuControlsReference_Parms, ControlsReferenceActionPressedEvent), Z_Construct_UDelegateFunction_Starbreeze_OnControlsReferenceActionPressed__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_AddMenuControlsReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_AddMenuControlsReference_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_AddMenuControlsReference_Statics::NewProp_InButtonControlsReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_AddMenuControlsReference_Statics::NewProp_ControlsReferenceActionPressedEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_AddMenuControlsReference_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_AddMenuControlsReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "AddMenuControlsReference", nullptr, nullptr, sizeof(SBZUIManager_eventAddMenuControlsReference_Parms), Z_Construct_UFunction_USBZUIManager_AddMenuControlsReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_AddMenuControlsReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_AddMenuControlsReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_AddMenuControlsReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_AddMenuControlsReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_AddMenuControlsReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_AddUIGameplayTag_Statics
	{
		struct SBZUIManager_eventAddUIGameplayTag_Parms
		{
			FGameplayTag UITag;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UITag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZUIManager_AddUIGameplayTag_Statics::NewProp_UITag = { "UITag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventAddUIGameplayTag_Parms, UITag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_AddUIGameplayTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_AddUIGameplayTag_Statics::NewProp_UITag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_AddUIGameplayTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_AddUIGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "AddUIGameplayTag", nullptr, nullptr, sizeof(SBZUIManager_eventAddUIGameplayTag_Parms), Z_Construct_UFunction_USBZUIManager_AddUIGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_AddUIGameplayTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_AddUIGameplayTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_AddUIGameplayTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_AddUIGameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_AddUIGameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_ClearPopupStack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_ClearPopupStack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_ClearPopupStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "ClearPopupStack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_ClearPopupStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_ClearPopupStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_ClearPopupStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_ClearPopupStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_DisplayHUDNotification_Statics
	{
		struct SBZUIManager_eventDisplayHUDNotification_Parms
		{
			FSBZHUDNotificationData HUDNotification;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDNotification_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HUDNotification;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_DisplayHUDNotification_Statics::NewProp_HUDNotification_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZUIManager_DisplayHUDNotification_Statics::NewProp_HUDNotification = { "HUDNotification", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventDisplayHUDNotification_Parms, HUDNotification), Z_Construct_UScriptStruct_FSBZHUDNotificationData, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_DisplayHUDNotification_Statics::NewProp_HUDNotification_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_DisplayHUDNotification_Statics::NewProp_HUDNotification_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_DisplayHUDNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_DisplayHUDNotification_Statics::NewProp_HUDNotification,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_DisplayHUDNotification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_DisplayHUDNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "DisplayHUDNotification", nullptr, nullptr, sizeof(SBZUIManager_eventDisplayHUDNotification_Parms), Z_Construct_UFunction_USBZUIManager_DisplayHUDNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_DisplayHUDNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_DisplayHUDNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_DisplayHUDNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_DisplayHUDNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_DisplayHUDNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_GetActiveControlsReference_Statics
	{
		struct SBZUIManager_eventGetActiveControlsReference_Parms
		{
			FSBZControlsReference OutControlsReference;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutControlsReference;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZUIManager_GetActiveControlsReference_Statics::NewProp_OutControlsReference = { "OutControlsReference", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventGetActiveControlsReference_Parms, OutControlsReference), Z_Construct_UScriptStruct_FSBZControlsReference, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZUIManager_GetActiveControlsReference_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZUIManager_eventGetActiveControlsReference_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZUIManager_GetActiveControlsReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZUIManager_eventGetActiveControlsReference_Parms), &Z_Construct_UFunction_USBZUIManager_GetActiveControlsReference_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_GetActiveControlsReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_GetActiveControlsReference_Statics::NewProp_OutControlsReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_GetActiveControlsReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_GetActiveControlsReference_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_GetActiveControlsReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "GetActiveControlsReference", nullptr, nullptr, sizeof(SBZUIManager_eventGetActiveControlsReference_Parms), Z_Construct_UFunction_USBZUIManager_GetActiveControlsReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetActiveControlsReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_GetActiveControlsReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetActiveControlsReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_GetActiveControlsReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_GetActiveControlsReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_GetFullscreenNotificationQueue_Statics
	{
		struct SBZUIManager_eventGetFullscreenNotificationQueue_Parms
		{
			TArray<FSBZUIFullscreenNotificationData> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZUIManager_GetFullscreenNotificationQueue_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZUIManager_GetFullscreenNotificationQueue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventGetFullscreenNotificationQueue_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_GetFullscreenNotificationQueue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_GetFullscreenNotificationQueue_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_GetFullscreenNotificationQueue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_GetFullscreenNotificationQueue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_GetFullscreenNotificationQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "GetFullscreenNotificationQueue", nullptr, nullptr, sizeof(SBZUIManager_eventGetFullscreenNotificationQueue_Parms), Z_Construct_UFunction_USBZUIManager_GetFullscreenNotificationQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetFullscreenNotificationQueue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_GetFullscreenNotificationQueue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetFullscreenNotificationQueue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_GetFullscreenNotificationQueue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_GetFullscreenNotificationQueue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_GetGamepadSprite_Statics
	{
		struct SBZUIManager_eventGetGamepadSprite_Parms
		{
			UPaperSprite* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIManager_GetGamepadSprite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventGetGamepadSprite_Parms, ReturnValue), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_GetGamepadSprite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_GetGamepadSprite_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_GetGamepadSprite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_GetGamepadSprite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "GetGamepadSprite", nullptr, nullptr, sizeof(SBZUIManager_eventGetGamepadSprite_Parms), Z_Construct_UFunction_USBZUIManager_GetGamepadSprite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetGamepadSprite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_GetGamepadSprite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetGamepadSprite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_GetGamepadSprite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_GetGamepadSprite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_GetInputMode_Statics
	{
		struct SBZUIManager_eventGetInputMode_Parms
		{
			ESBZInputState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZUIManager_GetInputMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZUIManager_GetInputMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventGetInputMode_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZInputState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_GetInputMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_GetInputMode_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_GetInputMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_GetInputMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_GetInputMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "GetInputMode", nullptr, nullptr, sizeof(SBZUIManager_eventGetInputMode_Parms), Z_Construct_UFunction_USBZUIManager_GetInputMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetInputMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_GetInputMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetInputMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_GetInputMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_GetInputMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_GetKeyForActionMapping_Statics
	{
		struct SBZUIManager_eventGetKeyForActionMapping_Parms
		{
			FName InActionName;
			FKey ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InActionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InActionName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_GetKeyForActionMapping_Statics::NewProp_InActionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZUIManager_GetKeyForActionMapping_Statics::NewProp_InActionName = { "InActionName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventGetKeyForActionMapping_Parms, InActionName), METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_GetKeyForActionMapping_Statics::NewProp_InActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetKeyForActionMapping_Statics::NewProp_InActionName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZUIManager_GetKeyForActionMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventGetKeyForActionMapping_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_GetKeyForActionMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_GetKeyForActionMapping_Statics::NewProp_InActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_GetKeyForActionMapping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_GetKeyForActionMapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_GetKeyForActionMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "GetKeyForActionMapping", nullptr, nullptr, sizeof(SBZUIManager_eventGetKeyForActionMapping_Parms), Z_Construct_UFunction_USBZUIManager_GetKeyForActionMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetKeyForActionMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_GetKeyForActionMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetKeyForActionMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_GetKeyForActionMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_GetKeyForActionMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_GetKeysForAxisMapping_Statics
	{
		struct SBZUIManager_eventGetKeysForAxisMapping_Parms
		{
			FName InAxisName;
			TArray<FKey> ReturnList;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAxisName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InAxisName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_GetKeysForAxisMapping_Statics::NewProp_InAxisName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZUIManager_GetKeysForAxisMapping_Statics::NewProp_InAxisName = { "InAxisName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventGetKeysForAxisMapping_Parms, InAxisName), METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_GetKeysForAxisMapping_Statics::NewProp_InAxisName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetKeysForAxisMapping_Statics::NewProp_InAxisName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZUIManager_GetKeysForAxisMapping_Statics::NewProp_ReturnList_Inner = { "ReturnList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZUIManager_GetKeysForAxisMapping_Statics::NewProp_ReturnList = { "ReturnList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventGetKeysForAxisMapping_Parms, ReturnList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_GetKeysForAxisMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_GetKeysForAxisMapping_Statics::NewProp_InAxisName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_GetKeysForAxisMapping_Statics::NewProp_ReturnList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_GetKeysForAxisMapping_Statics::NewProp_ReturnList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_GetKeysForAxisMapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_GetKeysForAxisMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "GetKeysForAxisMapping", nullptr, nullptr, sizeof(SBZUIManager_eventGetKeysForAxisMapping_Parms), Z_Construct_UFunction_USBZUIManager_GetKeysForAxisMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetKeysForAxisMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_GetKeysForAxisMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetKeysForAxisMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_GetKeysForAxisMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_GetKeysForAxisMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_GetKeySpriteEmpty_Statics
	{
		struct SBZUIManager_eventGetKeySpriteEmpty_Parms
		{
			UPaperSprite* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIManager_GetKeySpriteEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventGetKeySpriteEmpty_Parms, ReturnValue), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_GetKeySpriteEmpty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_GetKeySpriteEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_GetKeySpriteEmpty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_GetKeySpriteEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "GetKeySpriteEmpty", nullptr, nullptr, sizeof(SBZUIManager_eventGetKeySpriteEmpty_Parms), Z_Construct_UFunction_USBZUIManager_GetKeySpriteEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetKeySpriteEmpty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_GetKeySpriteEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetKeySpriteEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_GetKeySpriteEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_GetKeySpriteEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_GetKeySpriteForFKey_Statics
	{
		struct SBZUIManager_eventGetKeySpriteForFKey_Parms
		{
			FKey InKey;
			UPaperSprite* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InKey;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_GetKeySpriteForFKey_Statics::NewProp_InKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZUIManager_GetKeySpriteForFKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventGetKeySpriteForFKey_Parms, InKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_GetKeySpriteForFKey_Statics::NewProp_InKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetKeySpriteForFKey_Statics::NewProp_InKey_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIManager_GetKeySpriteForFKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventGetKeySpriteForFKey_Parms, ReturnValue), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_GetKeySpriteForFKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_GetKeySpriteForFKey_Statics::NewProp_InKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_GetKeySpriteForFKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_GetKeySpriteForFKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_GetKeySpriteForFKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "GetKeySpriteForFKey", nullptr, nullptr, sizeof(SBZUIManager_eventGetKeySpriteForFKey_Parms), Z_Construct_UFunction_USBZUIManager_GetKeySpriteForFKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetKeySpriteForFKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_GetKeySpriteForFKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetKeySpriteForFKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_GetKeySpriteForFKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_GetKeySpriteForFKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_GetLastFocusedWidget_Statics
	{
		struct SBZUIManager_eventGetLastFocusedWidget_Parms
		{
			USBZWidgetBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_GetLastFocusedWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIManager_GetLastFocusedWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventGetLastFocusedWidget_Parms, ReturnValue), Z_Construct_UClass_USBZWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_GetLastFocusedWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetLastFocusedWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_GetLastFocusedWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_GetLastFocusedWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_GetLastFocusedWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_GetLastFocusedWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "GetLastFocusedWidget", nullptr, nullptr, sizeof(SBZUIManager_eventGetLastFocusedWidget_Parms), Z_Construct_UFunction_USBZUIManager_GetLastFocusedWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetLastFocusedWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_GetLastFocusedWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetLastFocusedWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_GetLastFocusedWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_GetLastFocusedWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_GetLocalizedPlayerNoName_Statics
	{
		struct SBZUIManager_eventGetLocalizedPlayerNoName_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZUIManager_GetLocalizedPlayerNoName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventGetLocalizedPlayerNoName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_GetLocalizedPlayerNoName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_GetLocalizedPlayerNoName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_GetLocalizedPlayerNoName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_GetLocalizedPlayerNoName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "GetLocalizedPlayerNoName", nullptr, nullptr, sizeof(SBZUIManager_eventGetLocalizedPlayerNoName_Parms), Z_Construct_UFunction_USBZUIManager_GetLocalizedPlayerNoName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetLocalizedPlayerNoName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_GetLocalizedPlayerNoName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetLocalizedPlayerNoName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_GetLocalizedPlayerNoName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_GetLocalizedPlayerNoName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_GetMenuWidget_Statics
	{
		struct SBZUIManager_eventGetMenuWidget_Parms
		{
			const UObject* WorldContextObject;
			USBZBaseMenuWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_GetMenuWidget_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIManager_GetMenuWidget_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventGetMenuWidget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_GetMenuWidget_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetMenuWidget_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_GetMenuWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIManager_GetMenuWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventGetMenuWidget_Parms, ReturnValue), Z_Construct_UClass_USBZBaseMenuWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_GetMenuWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetMenuWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_GetMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_GetMenuWidget_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_GetMenuWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_GetMenuWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_GetMenuWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "GetMenuWidget", nullptr, nullptr, sizeof(SBZUIManager_eventGetMenuWidget_Parms), Z_Construct_UFunction_USBZUIManager_GetMenuWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetMenuWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_GetMenuWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetMenuWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_GetMenuWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_GetMenuWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_GetOwnedGameplayTags_Statics
	{
		struct SBZUIManager_eventGetOwnedGameplayTags_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZUIManager_GetOwnedGameplayTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventGetOwnedGameplayTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_GetOwnedGameplayTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_GetOwnedGameplayTags_Statics::NewProp_TagContainer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_GetOwnedGameplayTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_GetOwnedGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "GetOwnedGameplayTags", nullptr, nullptr, sizeof(SBZUIManager_eventGetOwnedGameplayTags_Parms), Z_Construct_UFunction_USBZUIManager_GetOwnedGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetOwnedGameplayTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_GetOwnedGameplayTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetOwnedGameplayTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_GetOwnedGameplayTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_GetOwnedGameplayTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_GetPopUpWidget_Statics
	{
		struct SBZUIManager_eventGetPopUpWidget_Parms
		{
			USBZPopupWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_GetPopUpWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIManager_GetPopUpWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventGetPopUpWidget_Parms, ReturnValue), Z_Construct_UClass_USBZPopupWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_GetPopUpWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetPopUpWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_GetPopUpWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_GetPopUpWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_GetPopUpWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_GetPopUpWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "GetPopUpWidget", nullptr, nullptr, sizeof(SBZUIManager_eventGetPopUpWidget_Parms), Z_Construct_UFunction_USBZUIManager_GetPopUpWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetPopUpWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_GetPopUpWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetPopUpWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_GetPopUpWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_GetPopUpWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_GetSpriteForNebula_Statics
	{
		struct SBZUIManager_eventGetSpriteForNebula_Parms
		{
			UPaperSprite* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIManager_GetSpriteForNebula_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventGetSpriteForNebula_Parms, ReturnValue), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_GetSpriteForNebula_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_GetSpriteForNebula_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_GetSpriteForNebula_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_GetSpriteForNebula_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "GetSpriteForNebula", nullptr, nullptr, sizeof(SBZUIManager_eventGetSpriteForNebula_Parms), Z_Construct_UFunction_USBZUIManager_GetSpriteForNebula_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetSpriteForNebula_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_GetSpriteForNebula_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetSpriteForNebula_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_GetSpriteForNebula()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_GetSpriteForNebula_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_GetSpriteForPlatform_Statics
	{
		struct SBZUIManager_eventGetSpriteForPlatform_Parms
		{
			ESBZPlatform InPlatform;
			bool bUseCurrentPlatformIconIfUnknown;
			UPaperSprite* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InPlatform_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InPlatform;
		static void NewProp_bUseCurrentPlatformIconIfUnknown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCurrentPlatformIconIfUnknown;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZUIManager_GetSpriteForPlatform_Statics::NewProp_InPlatform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZUIManager_GetSpriteForPlatform_Statics::NewProp_InPlatform = { "InPlatform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventGetSpriteForPlatform_Parms, InPlatform), Z_Construct_UEnum_Starbreeze_ESBZPlatform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZUIManager_GetSpriteForPlatform_Statics::NewProp_bUseCurrentPlatformIconIfUnknown_SetBit(void* Obj)
	{
		((SBZUIManager_eventGetSpriteForPlatform_Parms*)Obj)->bUseCurrentPlatformIconIfUnknown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZUIManager_GetSpriteForPlatform_Statics::NewProp_bUseCurrentPlatformIconIfUnknown = { "bUseCurrentPlatformIconIfUnknown", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZUIManager_eventGetSpriteForPlatform_Parms), &Z_Construct_UFunction_USBZUIManager_GetSpriteForPlatform_Statics::NewProp_bUseCurrentPlatformIconIfUnknown_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIManager_GetSpriteForPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventGetSpriteForPlatform_Parms, ReturnValue), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_GetSpriteForPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_GetSpriteForPlatform_Statics::NewProp_InPlatform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_GetSpriteForPlatform_Statics::NewProp_InPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_GetSpriteForPlatform_Statics::NewProp_bUseCurrentPlatformIconIfUnknown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_GetSpriteForPlatform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_GetSpriteForPlatform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_GetSpriteForPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "GetSpriteForPlatform", nullptr, nullptr, sizeof(SBZUIManager_eventGetSpriteForPlatform_Parms), Z_Construct_UFunction_USBZUIManager_GetSpriteForPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetSpriteForPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_GetSpriteForPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetSpriteForPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_GetSpriteForPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_GetSpriteForPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_GetUIData_Statics
	{
		struct SBZUIManager_eventGetUIData_Parms
		{
			UObject* WorldContextObject;
			USBZUIData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIManager_GetUIData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventGetUIData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIManager_GetUIData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventGetUIData_Parms, ReturnValue), Z_Construct_UClass_USBZUIData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_GetUIData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_GetUIData_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_GetUIData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_GetUIData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_GetUIData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "GetUIData", nullptr, nullptr, sizeof(SBZUIManager_eventGetUIData_Parms), Z_Construct_UFunction_USBZUIManager_GetUIData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetUIData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_GetUIData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetUIData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_GetUIData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_GetUIData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_GetUIStack_Statics
	{
		struct SBZUIManager_eventGetUIStack_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZUIManager_GetUIStack_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZUIManager_GetUIStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventGetUIStack_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_GetUIStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_GetUIStack_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_GetUIStack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_GetUIStack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_GetUIStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "GetUIStack", nullptr, nullptr, sizeof(SBZUIManager_eventGetUIStack_Parms), Z_Construct_UFunction_USBZUIManager_GetUIStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetUIStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_GetUIStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_GetUIStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_GetUIStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_GetUIStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_HandleActionPhaseEntered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_HandleActionPhaseEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_HandleActionPhaseEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "HandleActionPhaseEntered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_HandleActionPhaseEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_HandleActionPhaseEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_HandleActionPhaseEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_HandleActionPhaseEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_HandleLocalPlayerControllerReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_HandleLocalPlayerControllerReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_HandleLocalPlayerControllerReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "HandleLocalPlayerControllerReady", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_HandleLocalPlayerControllerReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_HandleLocalPlayerControllerReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_HandleLocalPlayerControllerReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_HandleLocalPlayerControllerReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_HandleProgressionSave_Statics
	{
		struct SBZUIManager_eventHandleProgressionSave_Parms
		{
			ESBZMetaRequestResult Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZUIManager_HandleProgressionSave_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZUIManager_HandleProgressionSave_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventHandleProgressionSave_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZMetaRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_HandleProgressionSave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_HandleProgressionSave_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_HandleProgressionSave_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_HandleProgressionSave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_HandleProgressionSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "HandleProgressionSave", nullptr, nullptr, sizeof(SBZUIManager_eventHandleProgressionSave_Parms), Z_Construct_UFunction_USBZUIManager_HandleProgressionSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_HandleProgressionSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_HandleProgressionSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_HandleProgressionSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_HandleProgressionSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_HandleProgressionSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_HasAllMatchingGameplayTags_Statics
	{
		struct SBZUIManager_eventHasAllMatchingGameplayTags_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_HasAllMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZUIManager_HasAllMatchingGameplayTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventHasAllMatchingGameplayTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_HasAllMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_HasAllMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData)) };
	void Z_Construct_UFunction_USBZUIManager_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZUIManager_eventHasAllMatchingGameplayTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZUIManager_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZUIManager_eventHasAllMatchingGameplayTags_Parms), &Z_Construct_UFunction_USBZUIManager_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_HasAllMatchingGameplayTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_HasAllMatchingGameplayTags_Statics::NewProp_TagContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_HasAllMatchingGameplayTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_HasAllMatchingGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "HasAllMatchingGameplayTags", nullptr, nullptr, sizeof(SBZUIManager_eventHasAllMatchingGameplayTags_Parms), Z_Construct_UFunction_USBZUIManager_HasAllMatchingGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_HasAllMatchingGameplayTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_HasAllMatchingGameplayTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_HasAllMatchingGameplayTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_HasAllMatchingGameplayTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_HasAllMatchingGameplayTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_HasAnyMatchingGameplayTags_Statics
	{
		struct SBZUIManager_eventHasAnyMatchingGameplayTags_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZUIManager_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventHasAnyMatchingGameplayTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer_MetaData)) };
	void Z_Construct_UFunction_USBZUIManager_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZUIManager_eventHasAnyMatchingGameplayTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZUIManager_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZUIManager_eventHasAnyMatchingGameplayTags_Parms), &Z_Construct_UFunction_USBZUIManager_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_HasAnyMatchingGameplayTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_HasAnyMatchingGameplayTags_Statics::NewProp_TagContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_HasAnyMatchingGameplayTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_HasAnyMatchingGameplayTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_HasAnyMatchingGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "HasAnyMatchingGameplayTags", nullptr, nullptr, sizeof(SBZUIManager_eventHasAnyMatchingGameplayTags_Parms), Z_Construct_UFunction_USBZUIManager_HasAnyMatchingGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_HasAnyMatchingGameplayTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_HasAnyMatchingGameplayTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_HasAnyMatchingGameplayTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_HasAnyMatchingGameplayTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_HasAnyMatchingGameplayTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_HasMatchingGameplayTag_Statics
	{
		struct SBZUIManager_eventHasMatchingGameplayTag_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZUIManager_HasMatchingGameplayTag_Statics::NewProp_TagToCheck = { "TagToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventHasMatchingGameplayTag_Parms, TagToCheck), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZUIManager_HasMatchingGameplayTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZUIManager_eventHasMatchingGameplayTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZUIManager_HasMatchingGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZUIManager_eventHasMatchingGameplayTag_Parms), &Z_Construct_UFunction_USBZUIManager_HasMatchingGameplayTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_HasMatchingGameplayTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_HasMatchingGameplayTag_Statics::NewProp_TagToCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_HasMatchingGameplayTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_HasMatchingGameplayTag_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Fix for true pure virtual functions not being implemented\n" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
		{ "ToolTip", "Fix for true pure virtual functions not being implemented" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_HasMatchingGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "HasMatchingGameplayTag", nullptr, nullptr, sizeof(SBZUIManager_eventHasMatchingGameplayTag_Parms), Z_Construct_UFunction_USBZUIManager_HasMatchingGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_HasMatchingGameplayTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_HasMatchingGameplayTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_HasMatchingGameplayTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_HasMatchingGameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_HasMatchingGameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_HideMenuControlsReference_Statics
	{
		struct SBZUIManager_eventHideMenuControlsReference_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_HideMenuControlsReference_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIManager_HideMenuControlsReference_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventHideMenuControlsReference_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_HideMenuControlsReference_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_HideMenuControlsReference_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_HideMenuControlsReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_HideMenuControlsReference_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_HideMenuControlsReference_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_HideMenuControlsReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "HideMenuControlsReference", nullptr, nullptr, sizeof(SBZUIManager_eventHideMenuControlsReference_Parms), Z_Construct_UFunction_USBZUIManager_HideMenuControlsReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_HideMenuControlsReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_HideMenuControlsReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_HideMenuControlsReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_HideMenuControlsReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_HideMenuControlsReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_IsControllerMode_Statics
	{
		struct SBZUIManager_eventIsControllerMode_Parms
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
	void Z_Construct_UFunction_USBZUIManager_IsControllerMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZUIManager_eventIsControllerMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZUIManager_IsControllerMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZUIManager_eventIsControllerMode_Parms), &Z_Construct_UFunction_USBZUIManager_IsControllerMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_IsControllerMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_IsControllerMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_IsControllerMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_IsControllerMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "IsControllerMode", nullptr, nullptr, sizeof(SBZUIManager_eventIsControllerMode_Parms), Z_Construct_UFunction_USBZUIManager_IsControllerMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_IsControllerMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_IsControllerMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_IsControllerMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_IsControllerMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_IsControllerMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_IsGameInstallPending_Statics
	{
		struct SBZUIManager_eventIsGameInstallPending_Parms
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
	void Z_Construct_UFunction_USBZUIManager_IsGameInstallPending_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZUIManager_eventIsGameInstallPending_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZUIManager_IsGameInstallPending_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZUIManager_eventIsGameInstallPending_Parms), &Z_Construct_UFunction_USBZUIManager_IsGameInstallPending_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_IsGameInstallPending_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_IsGameInstallPending_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_IsGameInstallPending_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_IsGameInstallPending_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "IsGameInstallPending", nullptr, nullptr, sizeof(SBZUIManager_eventIsGameInstallPending_Parms), Z_Construct_UFunction_USBZUIManager_IsGameInstallPending_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_IsGameInstallPending_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_IsGameInstallPending_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_IsGameInstallPending_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_IsGameInstallPending()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_IsGameInstallPending_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_IsPopupShowing_Statics
	{
		struct SBZUIManager_eventIsPopupShowing_Parms
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
	void Z_Construct_UFunction_USBZUIManager_IsPopupShowing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZUIManager_eventIsPopupShowing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZUIManager_IsPopupShowing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZUIManager_eventIsPopupShowing_Parms), &Z_Construct_UFunction_USBZUIManager_IsPopupShowing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_IsPopupShowing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_IsPopupShowing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_IsPopupShowing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_IsPopupShowing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "IsPopupShowing", nullptr, nullptr, sizeof(SBZUIManager_eventIsPopupShowing_Parms), Z_Construct_UFunction_USBZUIManager_IsPopupShowing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_IsPopupShowing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_IsPopupShowing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_IsPopupShowing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_IsPopupShowing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_IsPopupShowing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_IsStackEmpty_Statics
	{
		struct SBZUIManager_eventIsStackEmpty_Parms
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
	void Z_Construct_UFunction_USBZUIManager_IsStackEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZUIManager_eventIsStackEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZUIManager_IsStackEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZUIManager_eventIsStackEmpty_Parms), &Z_Construct_UFunction_USBZUIManager_IsStackEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_IsStackEmpty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_IsStackEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_IsStackEmpty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_IsStackEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "IsStackEmpty", nullptr, nullptr, sizeof(SBZUIManager_eventIsStackEmpty_Parms), Z_Construct_UFunction_USBZUIManager_IsStackEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_IsStackEmpty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_IsStackEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_IsStackEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_IsStackEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_IsStackEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_IsStackLocked_Statics
	{
		struct SBZUIManager_eventIsStackLocked_Parms
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
	void Z_Construct_UFunction_USBZUIManager_IsStackLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZUIManager_eventIsStackLocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZUIManager_IsStackLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZUIManager_eventIsStackLocked_Parms), &Z_Construct_UFunction_USBZUIManager_IsStackLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_IsStackLocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_IsStackLocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_IsStackLocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_IsStackLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "IsStackLocked", nullptr, nullptr, sizeof(SBZUIManager_eventIsStackLocked_Parms), Z_Construct_UFunction_USBZUIManager_IsStackLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_IsStackLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_IsStackLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_IsStackLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_IsStackLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_IsStackLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_OnHeistSelectionMenuSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_OnHeistSelectionMenuSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_OnHeistSelectionMenuSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "OnHeistSelectionMenuSet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_OnHeistSelectionMenuSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_OnHeistSelectionMenuSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_OnHeistSelectionMenuSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_OnHeistSelectionMenuSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_OnOptForSoloModePopupClosed_Statics
	{
		struct SBZUIManager_eventOnOptForSoloModePopupClosed_Parms
		{
			FName ClosingActionName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClosingActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZUIManager_OnOptForSoloModePopupClosed_Statics::NewProp_ClosingActionName = { "ClosingActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventOnOptForSoloModePopupClosed_Parms, ClosingActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_OnOptForSoloModePopupClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_OnOptForSoloModePopupClosed_Statics::NewProp_ClosingActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_OnOptForSoloModePopupClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_OnOptForSoloModePopupClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "OnOptForSoloModePopupClosed", nullptr, nullptr, sizeof(SBZUIManager_eventOnOptForSoloModePopupClosed_Parms), Z_Construct_UFunction_USBZUIManager_OnOptForSoloModePopupClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_OnOptForSoloModePopupClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_OnOptForSoloModePopupClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_OnOptForSoloModePopupClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_OnOptForSoloModePopupClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_OnOptForSoloModePopupClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_OnPopupControllerEndPlay_Statics
	{
		struct SBZUIManager_eventOnPopupControllerEndPlay_Parms
		{
			AActor* Actor;
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIManager_OnPopupControllerEndPlay_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventOnPopupControllerEndPlay_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZUIManager_OnPopupControllerEndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventOnPopupControllerEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_OnPopupControllerEndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_OnPopupControllerEndPlay_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_OnPopupControllerEndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_OnPopupControllerEndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_OnPopupControllerEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "OnPopupControllerEndPlay", nullptr, nullptr, sizeof(SBZUIManager_eventOnPopupControllerEndPlay_Parms), Z_Construct_UFunction_USBZUIManager_OnPopupControllerEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_OnPopupControllerEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_OnPopupControllerEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_OnPopupControllerEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_OnPopupControllerEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_OnPopupControllerEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_OnStateMachineStateEntered_Statics
	{
		struct SBZUIManager_eventOnStateMachineStateEntered_Parms
		{
			FName StateName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZUIManager_OnStateMachineStateEntered_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventOnStateMachineStateEntered_Parms, StateName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_OnStateMachineStateEntered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_OnStateMachineStateEntered_Statics::NewProp_StateName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_OnStateMachineStateEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_OnStateMachineStateEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "OnStateMachineStateEntered", nullptr, nullptr, sizeof(SBZUIManager_eventOnStateMachineStateEntered_Parms), Z_Construct_UFunction_USBZUIManager_OnStateMachineStateEntered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_OnStateMachineStateEntered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_OnStateMachineStateEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_OnStateMachineStateEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_OnStateMachineStateEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_OnStateMachineStateEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_OnStateMachineStateExited_Statics
	{
		struct SBZUIManager_eventOnStateMachineStateExited_Parms
		{
			FName StateName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZUIManager_OnStateMachineStateExited_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventOnStateMachineStateExited_Parms, StateName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_OnStateMachineStateExited_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_OnStateMachineStateExited_Statics::NewProp_StateName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_OnStateMachineStateExited_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_OnStateMachineStateExited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "OnStateMachineStateExited", nullptr, nullptr, sizeof(SBZUIManager_eventOnStateMachineStateExited_Parms), Z_Construct_UFunction_USBZUIManager_OnStateMachineStateExited_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_OnStateMachineStateExited_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_OnStateMachineStateExited_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_OnStateMachineStateExited_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_OnStateMachineStateExited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_OnStateMachineStateExited_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_PeekStack_Statics
	{
		struct SBZUIManager_eventPeekStack_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZUIManager_PeekStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventPeekStack_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_PeekStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_PeekStack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_PeekStack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_PeekStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "PeekStack", nullptr, nullptr, sizeof(SBZUIManager_eventPeekStack_Parms), Z_Construct_UFunction_USBZUIManager_PeekStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_PeekStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_PeekStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_PeekStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_PeekStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_PeekStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_PopStack_Statics
	{
		struct SBZUIManager_eventPopStack_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZUIManager_PopStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventPopStack_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_PopStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_PopStack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_PopStack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_PopStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "PopStack", nullptr, nullptr, sizeof(SBZUIManager_eventPopStack_Parms), Z_Construct_UFunction_USBZUIManager_PopStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_PopStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_PopStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_PopStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_PopStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_PopStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_PushUIStack_Statics
	{
		struct SBZUIManager_eventPushUIStack_Parms
		{
			FName StackValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StackValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_PushUIStack_Statics::NewProp_StackValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZUIManager_PushUIStack_Statics::NewProp_StackValue = { "StackValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventPushUIStack_Parms, StackValue), METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_PushUIStack_Statics::NewProp_StackValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_PushUIStack_Statics::NewProp_StackValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_PushUIStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_PushUIStack_Statics::NewProp_StackValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_PushUIStack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_PushUIStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "PushUIStack", nullptr, nullptr, sizeof(SBZUIManager_eventPushUIStack_Parms), Z_Construct_UFunction_USBZUIManager_PushUIStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_PushUIStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_PushUIStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_PushUIStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_PushUIStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_PushUIStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_RefreshFullScreenNotificationQueue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_RefreshFullScreenNotificationQueue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_RefreshFullScreenNotificationQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "RefreshFullScreenNotificationQueue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_RefreshFullScreenNotificationQueue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_RefreshFullScreenNotificationQueue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_RefreshFullScreenNotificationQueue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_RefreshFullScreenNotificationQueue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_RemoveControlsReference_Statics
	{
		struct SBZUIManager_eventRemoveControlsReference_Parms
		{
			int32 InControlsReferenceID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InControlsReferenceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZUIManager_RemoveControlsReference_Statics::NewProp_InControlsReferenceID = { "InControlsReferenceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventRemoveControlsReference_Parms, InControlsReferenceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_RemoveControlsReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_RemoveControlsReference_Statics::NewProp_InControlsReferenceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_RemoveControlsReference_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_RemoveControlsReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "RemoveControlsReference", nullptr, nullptr, sizeof(SBZUIManager_eventRemoveControlsReference_Parms), Z_Construct_UFunction_USBZUIManager_RemoveControlsReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_RemoveControlsReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_RemoveControlsReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_RemoveControlsReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_RemoveControlsReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_RemoveControlsReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_RemoveGameplayTag_Statics
	{
		struct SBZUIManager_eventRemoveGameplayTag_Parms
		{
			FGameplayTag UITag;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UITag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZUIManager_RemoveGameplayTag_Statics::NewProp_UITag = { "UITag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventRemoveGameplayTag_Parms, UITag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_RemoveGameplayTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_RemoveGameplayTag_Statics::NewProp_UITag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_RemoveGameplayTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_RemoveGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "RemoveGameplayTag", nullptr, nullptr, sizeof(SBZUIManager_eventRemoveGameplayTag_Parms), Z_Construct_UFunction_USBZUIManager_RemoveGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_RemoveGameplayTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_RemoveGameplayTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_RemoveGameplayTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_RemoveGameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_RemoveGameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_SaveProgressionSaveGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_SaveProgressionSaveGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_SaveProgressionSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "SaveProgressionSaveGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_SaveProgressionSaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_SaveProgressionSaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_SaveProgressionSaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_SaveProgressionSaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_SetDisplayPlayerHUD_Statics
	{
		struct SBZUIManager_eventSetDisplayPlayerHUD_Parms
		{
			bool bShouldDisplayPlayerHUD;
		};
		static void NewProp_bShouldDisplayPlayerHUD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldDisplayPlayerHUD;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZUIManager_SetDisplayPlayerHUD_Statics::NewProp_bShouldDisplayPlayerHUD_SetBit(void* Obj)
	{
		((SBZUIManager_eventSetDisplayPlayerHUD_Parms*)Obj)->bShouldDisplayPlayerHUD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZUIManager_SetDisplayPlayerHUD_Statics::NewProp_bShouldDisplayPlayerHUD = { "bShouldDisplayPlayerHUD", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZUIManager_eventSetDisplayPlayerHUD_Parms), &Z_Construct_UFunction_USBZUIManager_SetDisplayPlayerHUD_Statics::NewProp_bShouldDisplayPlayerHUD_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_SetDisplayPlayerHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_SetDisplayPlayerHUD_Statics::NewProp_bShouldDisplayPlayerHUD,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_SetDisplayPlayerHUD_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_SetDisplayPlayerHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "SetDisplayPlayerHUD", nullptr, nullptr, sizeof(SBZUIManager_eventSetDisplayPlayerHUD_Parms), Z_Construct_UFunction_USBZUIManager_SetDisplayPlayerHUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_SetDisplayPlayerHUD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_SetDisplayPlayerHUD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_SetDisplayPlayerHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_SetDisplayPlayerHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_SetDisplayPlayerHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_SetInputModeToGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_SetInputModeToGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_SetInputModeToGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "SetInputModeToGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_SetInputModeToGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_SetInputModeToGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_SetInputModeToGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_SetInputModeToGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_SetInputModeToGameAndUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_SetInputModeToGameAndUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_SetInputModeToGameAndUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "SetInputModeToGameAndUI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_SetInputModeToGameAndUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_SetInputModeToGameAndUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_SetInputModeToGameAndUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_SetInputModeToGameAndUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_SetInputModeToUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_SetInputModeToUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_SetInputModeToUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "SetInputModeToUI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_SetInputModeToUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_SetInputModeToUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_SetInputModeToUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_SetInputModeToUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_SetLastFocusedWidget_Statics
	{
		struct SBZUIManager_eventSetLastFocusedWidget_Parms
		{
			USBZWidgetBase* InLastFocusedWidget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLastFocusedWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InLastFocusedWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_SetLastFocusedWidget_Statics::NewProp_InLastFocusedWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIManager_SetLastFocusedWidget_Statics::NewProp_InLastFocusedWidget = { "InLastFocusedWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventSetLastFocusedWidget_Parms, InLastFocusedWidget), Z_Construct_UClass_USBZWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_SetLastFocusedWidget_Statics::NewProp_InLastFocusedWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_SetLastFocusedWidget_Statics::NewProp_InLastFocusedWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_SetLastFocusedWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_SetLastFocusedWidget_Statics::NewProp_InLastFocusedWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_SetLastFocusedWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_SetLastFocusedWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "SetLastFocusedWidget", nullptr, nullptr, sizeof(SBZUIManager_eventSetLastFocusedWidget_Parms), Z_Construct_UFunction_USBZUIManager_SetLastFocusedWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_SetLastFocusedWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_SetLastFocusedWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_SetLastFocusedWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_SetLastFocusedWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_SetLastFocusedWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_SetLoginScreenVisibility_Statics
	{
		struct SBZUIManager_eventSetLoginScreenVisibility_Parms
		{
			ESlateVisibility InVisibility;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InVisibility_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InVisibility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZUIManager_SetLoginScreenVisibility_Statics::NewProp_InVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZUIManager_SetLoginScreenVisibility_Statics::NewProp_InVisibility = { "InVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventSetLoginScreenVisibility_Parms, InVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_SetLoginScreenVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_SetLoginScreenVisibility_Statics::NewProp_InVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_SetLoginScreenVisibility_Statics::NewProp_InVisibility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_SetLoginScreenVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_SetLoginScreenVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "SetLoginScreenVisibility", nullptr, nullptr, sizeof(SBZUIManager_eventSetLoginScreenVisibility_Parms), Z_Construct_UFunction_USBZUIManager_SetLoginScreenVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_SetLoginScreenVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_SetLoginScreenVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_SetLoginScreenVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_SetLoginScreenVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_SetLoginScreenVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_SetLogoP3Visibility_Statics
	{
		struct SBZUIManager_eventSetLogoP3Visibility_Parms
		{
			ESlateVisibility InVisibility;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InVisibility_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InVisibility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZUIManager_SetLogoP3Visibility_Statics::NewProp_InVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZUIManager_SetLogoP3Visibility_Statics::NewProp_InVisibility = { "InVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventSetLogoP3Visibility_Parms, InVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_SetLogoP3Visibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_SetLogoP3Visibility_Statics::NewProp_InVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_SetLogoP3Visibility_Statics::NewProp_InVisibility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_SetLogoP3Visibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_SetLogoP3Visibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "SetLogoP3Visibility", nullptr, nullptr, sizeof(SBZUIManager_eventSetLogoP3Visibility_Parms), Z_Construct_UFunction_USBZUIManager_SetLogoP3Visibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_SetLogoP3Visibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_SetLogoP3Visibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_SetLogoP3Visibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_SetLogoP3Visibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_SetLogoP3Visibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_SetOnePlayerMatchHook_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_SetOnePlayerMatchHook_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_SetOnePlayerMatchHook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "SetOnePlayerMatchHook", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_SetOnePlayerMatchHook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_SetOnePlayerMatchHook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_SetOnePlayerMatchHook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_SetOnePlayerMatchHook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_SetStartInHeistSelection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_SetStartInHeistSelection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_SetStartInHeistSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "SetStartInHeistSelection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_SetStartInHeistSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_SetStartInHeistSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_SetStartInHeistSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_SetStartInHeistSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_ShouldDisplayCursor_Statics
	{
		struct SBZUIManager_eventShouldDisplayCursor_Parms
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
	void Z_Construct_UFunction_USBZUIManager_ShouldDisplayCursor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZUIManager_eventShouldDisplayCursor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZUIManager_ShouldDisplayCursor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZUIManager_eventShouldDisplayCursor_Parms), &Z_Construct_UFunction_USBZUIManager_ShouldDisplayCursor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_ShouldDisplayCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_ShouldDisplayCursor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_ShouldDisplayCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_ShouldDisplayCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "ShouldDisplayCursor", nullptr, nullptr, sizeof(SBZUIManager_eventShouldDisplayCursor_Parms), Z_Construct_UFunction_USBZUIManager_ShouldDisplayCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_ShouldDisplayCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_ShouldDisplayCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_ShouldDisplayCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_ShouldDisplayCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_ShouldDisplayCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_ShouldStartInHeistSelection_Statics
	{
		struct SBZUIManager_eventShouldStartInHeistSelection_Parms
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
	void Z_Construct_UFunction_USBZUIManager_ShouldStartInHeistSelection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZUIManager_eventShouldStartInHeistSelection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZUIManager_ShouldStartInHeistSelection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZUIManager_eventShouldStartInHeistSelection_Parms), &Z_Construct_UFunction_USBZUIManager_ShouldStartInHeistSelection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_ShouldStartInHeistSelection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_ShouldStartInHeistSelection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_ShouldStartInHeistSelection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_ShouldStartInHeistSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "ShouldStartInHeistSelection", nullptr, nullptr, sizeof(SBZUIManager_eventShouldStartInHeistSelection_Parms), Z_Construct_UFunction_USBZUIManager_ShouldStartInHeistSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_ShouldStartInHeistSelection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_ShouldStartInHeistSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_ShouldStartInHeistSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_ShouldStartInHeistSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_ShouldStartInHeistSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_ShowEULAPopup_Statics
	{
		struct SBZUIManager_eventShowEULAPopup_Parms
		{
			FScriptDelegate InDelegate;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_ShowEULAPopup_Statics::NewProp_InDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USBZUIManager_ShowEULAPopup_Statics::NewProp_InDelegate = { "InDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventShowEULAPopup_Parms, InDelegate), Z_Construct_UDelegateFunction_Starbreeze_SBZOnPopUpWidgetClosed__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_ShowEULAPopup_Statics::NewProp_InDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_ShowEULAPopup_Statics::NewProp_InDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_ShowEULAPopup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_ShowEULAPopup_Statics::NewProp_InDelegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_ShowEULAPopup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_ShowEULAPopup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "ShowEULAPopup", nullptr, nullptr, sizeof(SBZUIManager_eventShowEULAPopup_Parms), Z_Construct_UFunction_USBZUIManager_ShowEULAPopup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_ShowEULAPopup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_ShowEULAPopup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_ShowEULAPopup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_ShowEULAPopup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_ShowEULAPopup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_ShowFullScreenNotification_Statics
	{
		struct SBZUIManager_eventShowFullScreenNotification_Parms
		{
			FSBZUIFullscreenNotificationData InFullscreenNotificationData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InFullscreenNotificationData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZUIManager_ShowFullScreenNotification_Statics::NewProp_InFullscreenNotificationData = { "InFullscreenNotificationData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventShowFullScreenNotification_Parms, InFullscreenNotificationData), Z_Construct_UScriptStruct_FSBZUIFullscreenNotificationData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_ShowFullScreenNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_ShowFullScreenNotification_Statics::NewProp_InFullscreenNotificationData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_ShowFullScreenNotification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_ShowFullScreenNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "ShowFullScreenNotification", nullptr, nullptr, sizeof(SBZUIManager_eventShowFullScreenNotification_Parms), Z_Construct_UFunction_USBZUIManager_ShowFullScreenNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_ShowFullScreenNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_ShowFullScreenNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_ShowFullScreenNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_ShowFullScreenNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_ShowFullScreenNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_ShowMetaNotification_Statics
	{
		struct SBZUIManager_eventShowMetaNotification_Parms
		{
			FSBZMetaNotification InMetaNotification;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InMetaNotification;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZUIManager_ShowMetaNotification_Statics::NewProp_InMetaNotification = { "InMetaNotification", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventShowMetaNotification_Parms, InMetaNotification), Z_Construct_UScriptStruct_FSBZMetaNotification, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_ShowMetaNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_ShowMetaNotification_Statics::NewProp_InMetaNotification,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_ShowMetaNotification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_ShowMetaNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "ShowMetaNotification", nullptr, nullptr, sizeof(SBZUIManager_eventShowMetaNotification_Parms), Z_Construct_UFunction_USBZUIManager_ShowMetaNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_ShowMetaNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_ShowMetaNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_ShowMetaNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_ShowMetaNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_ShowMetaNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_ShowPopUp_Statics
	{
		struct SBZUIManager_eventShowPopUp_Parms
		{
			FSBZUIPopupData InPopupData;
			bool bReturnFocusWhenClosed;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPopupData;
		static void NewProp_bReturnFocusWhenClosed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnFocusWhenClosed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZUIManager_ShowPopUp_Statics::NewProp_InPopupData = { "InPopupData", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventShowPopUp_Parms, InPopupData), Z_Construct_UScriptStruct_FSBZUIPopupData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZUIManager_ShowPopUp_Statics::NewProp_bReturnFocusWhenClosed_SetBit(void* Obj)
	{
		((SBZUIManager_eventShowPopUp_Parms*)Obj)->bReturnFocusWhenClosed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZUIManager_ShowPopUp_Statics::NewProp_bReturnFocusWhenClosed = { "bReturnFocusWhenClosed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZUIManager_eventShowPopUp_Parms), &Z_Construct_UFunction_USBZUIManager_ShowPopUp_Statics::NewProp_bReturnFocusWhenClosed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_ShowPopUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_ShowPopUp_Statics::NewProp_InPopupData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_ShowPopUp_Statics::NewProp_bReturnFocusWhenClosed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_ShowPopUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_ShowPopUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "ShowPopUp", nullptr, nullptr, sizeof(SBZUIManager_eventShowPopUp_Parms), Z_Construct_UFunction_USBZUIManager_ShowPopUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_ShowPopUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_ShowPopUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_ShowPopUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_ShowPopUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_ShowPopUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_ShowPopUpWithCallback_Statics
	{
		struct SBZUIManager_eventShowPopUpWithCallback_Parms
		{
			FSBZUIPopupData InPopupData;
			FScriptDelegate InPopUpActionInputDelegate;
			int32 InAutomaticClosingCountdownTime;
			FName InAutomaticClosingActionName;
			bool bReturnFocusWhenClosed;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPopupData;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InPopUpActionInputDelegate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InAutomaticClosingCountdownTime;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InAutomaticClosingActionName;
		static void NewProp_bReturnFocusWhenClosed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnFocusWhenClosed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZUIManager_ShowPopUpWithCallback_Statics::NewProp_InPopupData = { "InPopupData", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventShowPopUpWithCallback_Parms, InPopupData), Z_Construct_UScriptStruct_FSBZUIPopupData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USBZUIManager_ShowPopUpWithCallback_Statics::NewProp_InPopUpActionInputDelegate = { "InPopUpActionInputDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventShowPopUpWithCallback_Parms, InPopUpActionInputDelegate), Z_Construct_UDelegateFunction_Starbreeze_SBZOnPopUpWidgetClosed__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZUIManager_ShowPopUpWithCallback_Statics::NewProp_InAutomaticClosingCountdownTime = { "InAutomaticClosingCountdownTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventShowPopUpWithCallback_Parms, InAutomaticClosingCountdownTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZUIManager_ShowPopUpWithCallback_Statics::NewProp_InAutomaticClosingActionName = { "InAutomaticClosingActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventShowPopUpWithCallback_Parms, InAutomaticClosingActionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZUIManager_ShowPopUpWithCallback_Statics::NewProp_bReturnFocusWhenClosed_SetBit(void* Obj)
	{
		((SBZUIManager_eventShowPopUpWithCallback_Parms*)Obj)->bReturnFocusWhenClosed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZUIManager_ShowPopUpWithCallback_Statics::NewProp_bReturnFocusWhenClosed = { "bReturnFocusWhenClosed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZUIManager_eventShowPopUpWithCallback_Parms), &Z_Construct_UFunction_USBZUIManager_ShowPopUpWithCallback_Statics::NewProp_bReturnFocusWhenClosed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_ShowPopUpWithCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_ShowPopUpWithCallback_Statics::NewProp_InPopupData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_ShowPopUpWithCallback_Statics::NewProp_InPopUpActionInputDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_ShowPopUpWithCallback_Statics::NewProp_InAutomaticClosingCountdownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_ShowPopUpWithCallback_Statics::NewProp_InAutomaticClosingActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_ShowPopUpWithCallback_Statics::NewProp_bReturnFocusWhenClosed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_ShowPopUpWithCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_ShowPopUpWithCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "ShowPopUpWithCallback", nullptr, nullptr, sizeof(SBZUIManager_eventShowPopUpWithCallback_Parms), Z_Construct_UFunction_USBZUIManager_ShowPopUpWithCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_ShowPopUpWithCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_ShowPopUpWithCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_ShowPopUpWithCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_ShowPopUpWithCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_ShowPopUpWithCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_ShowSidebarNotification_Statics
	{
		struct SBZUIManager_eventShowSidebarNotification_Parms
		{
			FSBZSideBarNotificationData InSideBarNotificationData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSideBarNotificationData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZUIManager_ShowSidebarNotification_Statics::NewProp_InSideBarNotificationData = { "InSideBarNotificationData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventShowSidebarNotification_Parms, InSideBarNotificationData), Z_Construct_UScriptStruct_FSBZSideBarNotificationData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_ShowSidebarNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_ShowSidebarNotification_Statics::NewProp_InSideBarNotificationData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_ShowSidebarNotification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_ShowSidebarNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "ShowSidebarNotification", nullptr, nullptr, sizeof(SBZUIManager_eventShowSidebarNotification_Parms), Z_Construct_UFunction_USBZUIManager_ShowSidebarNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_ShowSidebarNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_ShowSidebarNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_ShowSidebarNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_ShowSidebarNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_ShowSidebarNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_ShowTutorialPopUp_Statics
	{
		struct SBZUIManager_eventShowTutorialPopUp_Parms
		{
			const UObject* WorldContextObject;
			const USBZTutorialPopUpDataAsset* InTutorialToDisplay;
			FScriptDelegate InPopUpActionInputDelegate;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTutorialToDisplay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InTutorialToDisplay;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InPopUpActionInputDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_ShowTutorialPopUp_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIManager_ShowTutorialPopUp_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventShowTutorialPopUp_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_ShowTutorialPopUp_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_ShowTutorialPopUp_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_ShowTutorialPopUp_Statics::NewProp_InTutorialToDisplay_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUIManager_ShowTutorialPopUp_Statics::NewProp_InTutorialToDisplay = { "InTutorialToDisplay", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventShowTutorialPopUp_Parms, InTutorialToDisplay), Z_Construct_UClass_USBZTutorialPopUpDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_ShowTutorialPopUp_Statics::NewProp_InTutorialToDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_ShowTutorialPopUp_Statics::NewProp_InTutorialToDisplay_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USBZUIManager_ShowTutorialPopUp_Statics::NewProp_InPopUpActionInputDelegate = { "InPopUpActionInputDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventShowTutorialPopUp_Parms, InPopUpActionInputDelegate), Z_Construct_UDelegateFunction_Starbreeze_SBZOnPopUpWidgetClosed__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_ShowTutorialPopUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_ShowTutorialPopUp_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_ShowTutorialPopUp_Statics::NewProp_InTutorialToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_ShowTutorialPopUp_Statics::NewProp_InPopUpActionInputDelegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_ShowTutorialPopUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_ShowTutorialPopUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "ShowTutorialPopUp", nullptr, nullptr, sizeof(SBZUIManager_eventShowTutorialPopUp_Parms), Z_Construct_UFunction_USBZUIManager_ShowTutorialPopUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_ShowTutorialPopUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_ShowTutorialPopUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_ShowTutorialPopUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_ShowTutorialPopUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_ShowTutorialPopUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_SimulateJoinHeistActivity_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_SimulateJoinHeistActivity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_SimulateJoinHeistActivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "SimulateJoinHeistActivity", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_SimulateJoinHeistActivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_SimulateJoinHeistActivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_SimulateJoinHeistActivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_SimulateJoinHeistActivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_SwitchUIStack_Statics
	{
		struct SBZUIManager_eventSwitchUIStack_Parms
		{
			FName StackValueToSwitch;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackValueToSwitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StackValueToSwitch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_SwitchUIStack_Statics::NewProp_StackValueToSwitch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZUIManager_SwitchUIStack_Statics::NewProp_StackValueToSwitch = { "StackValueToSwitch", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventSwitchUIStack_Parms, StackValueToSwitch), METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_SwitchUIStack_Statics::NewProp_StackValueToSwitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_SwitchUIStack_Statics::NewProp_StackValueToSwitch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_SwitchUIStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_SwitchUIStack_Statics::NewProp_StackValueToSwitch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_SwitchUIStack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_SwitchUIStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "SwitchUIStack", nullptr, nullptr, sizeof(SBZUIManager_eventSwitchUIStack_Parms), Z_Construct_UFunction_USBZUIManager_SwitchUIStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_SwitchUIStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_SwitchUIStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_SwitchUIStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_SwitchUIStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_SwitchUIStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUIManager_TryRemoveFromStack_Statics
	{
		struct SBZUIManager_eventTryRemoveFromStack_Parms
		{
			FName StackValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StackValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_TryRemoveFromStack_Statics::NewProp_StackValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZUIManager_TryRemoveFromStack_Statics::NewProp_StackValue = { "StackValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUIManager_eventTryRemoveFromStack_Parms, StackValue), METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_TryRemoveFromStack_Statics::NewProp_StackValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_TryRemoveFromStack_Statics::NewProp_StackValue_MetaData)) };
	void Z_Construct_UFunction_USBZUIManager_TryRemoveFromStack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZUIManager_eventTryRemoveFromStack_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZUIManager_TryRemoveFromStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZUIManager_eventTryRemoveFromStack_Parms), &Z_Construct_UFunction_USBZUIManager_TryRemoveFromStack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUIManager_TryRemoveFromStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_TryRemoveFromStack_Statics::NewProp_StackValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUIManager_TryRemoveFromStack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUIManager_TryRemoveFromStack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUIManager_TryRemoveFromStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUIManager, nullptr, "TryRemoveFromStack", nullptr, nullptr, sizeof(SBZUIManager_eventTryRemoveFromStack_Parms), Z_Construct_UFunction_USBZUIManager_TryRemoveFromStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_TryRemoveFromStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUIManager_TryRemoveFromStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUIManager_TryRemoveFromStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUIManager_TryRemoveFromStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUIManager_TryRemoveFromStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZUIManager_NoRegister()
	{
		return USBZUIManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZUIManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDisplayNotification_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDisplayNotification;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopUpWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PopUpWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopUpWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PopUpWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TutorialPopUpBodyWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TutorialPopUpBodyWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TutorialPopUpBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TutorialPopUpBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullscreenNotificationWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FullscreenNotificationWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullscreenNotificationWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FullscreenNotificationWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SideBarNotificationWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SideBarNotificationWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SideBarNotificationWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SideBarNotificationWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfoPopupWidgetWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InfoPopupWidgetWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfoPopupWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InfoPopupWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EULAContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EULAContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHUDContextChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHUDContextChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DebugWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebugWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUITagsChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUITagsChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaSaveSuccessfulText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_MetaSaveSuccessfulText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaSaveFailedText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_MetaSaveFailedText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIGameplayTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UIGameplayTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitleWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SubtitleWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformSprite_GenericPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlatformSprite_GenericPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformSprite_GenericConsole_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlatformSprite_GenericConsole;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformSprite_Playstation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlatformSprite_Playstation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformSprite_XBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlatformSprite_XBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NebulaSprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NebulaSprite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerNoName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PlayerNoName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XBoxGamepadSprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_XBoxGamepadSprite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayStationGamepadSprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayStationGamepadSprite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeySpriteEmpty_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KeySpriteEmpty;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MouseSpriteMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MouseSpriteMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseSpriteMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MouseSpriteMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KeyboardSpriteMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyboardSpriteMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyboardSpriteMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_KeyboardSpriteMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_XBoxSpriteMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_XBoxSpriteMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XBoxSpriteMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_XBoxSpriteMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayStationSpriteMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayStationSpriteMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayStationSpriteMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PlayStationSpriteMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitleWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubtitleWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUIStackChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUIStackChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUIStackLostOrRemoved_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUIStackLostOrRemoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUIStackLockChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUIStackLockChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopUpStackString_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PopUpStackString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchingStackString_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SwitchingStackString;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UIStack_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIStack_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UIStack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackLockedArray_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StackLockedArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackLockedArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StackLockedArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RuntimeControlsReference_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimeControlsReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RuntimeControlsReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackBackgroundWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BlackBackgroundWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveMenuWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveMenuWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveLoginScreenWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveLoginScreenWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivePSOCompilationScreenWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActivePSOCompilationScreenWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastFocusedWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastFocusedWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastUIStackUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastUIStackUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetFocusOnUnlock_MetaData[];
#endif
		static void NewProp_bSetFocusOnUnlock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetFocusOnUnlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInstallStateChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInstallStateChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UIData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZUIManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZUIManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZUIManager_AddControlsReference, "AddControlsReference" }, // 3391154913
		{ &Z_Construct_UFunction_USBZUIManager_AddMenuControlsReference, "AddMenuControlsReference" }, // 3585907860
		{ &Z_Construct_UFunction_USBZUIManager_AddUIGameplayTag, "AddUIGameplayTag" }, // 1657550834
		{ &Z_Construct_UFunction_USBZUIManager_ClearPopupStack, "ClearPopupStack" }, // 903908376
		{ &Z_Construct_UFunction_USBZUIManager_DisplayHUDNotification, "DisplayHUDNotification" }, // 1720898707
		{ &Z_Construct_UFunction_USBZUIManager_GetActiveControlsReference, "GetActiveControlsReference" }, // 2646786559
		{ &Z_Construct_UFunction_USBZUIManager_GetFullscreenNotificationQueue, "GetFullscreenNotificationQueue" }, // 2895157228
		{ &Z_Construct_UFunction_USBZUIManager_GetGamepadSprite, "GetGamepadSprite" }, // 1806207858
		{ &Z_Construct_UFunction_USBZUIManager_GetInputMode, "GetInputMode" }, // 2608521363
		{ &Z_Construct_UFunction_USBZUIManager_GetKeyForActionMapping, "GetKeyForActionMapping" }, // 2728257763
		{ &Z_Construct_UFunction_USBZUIManager_GetKeysForAxisMapping, "GetKeysForAxisMapping" }, // 1769109996
		{ &Z_Construct_UFunction_USBZUIManager_GetKeySpriteEmpty, "GetKeySpriteEmpty" }, // 847572883
		{ &Z_Construct_UFunction_USBZUIManager_GetKeySpriteForFKey, "GetKeySpriteForFKey" }, // 943286489
		{ &Z_Construct_UFunction_USBZUIManager_GetLastFocusedWidget, "GetLastFocusedWidget" }, // 3304696475
		{ &Z_Construct_UFunction_USBZUIManager_GetLocalizedPlayerNoName, "GetLocalizedPlayerNoName" }, // 3690653191
		{ &Z_Construct_UFunction_USBZUIManager_GetMenuWidget, "GetMenuWidget" }, // 2658689918
		{ &Z_Construct_UFunction_USBZUIManager_GetOwnedGameplayTags, "GetOwnedGameplayTags" }, // 1319107746
		{ &Z_Construct_UFunction_USBZUIManager_GetPopUpWidget, "GetPopUpWidget" }, // 1028672552
		{ &Z_Construct_UFunction_USBZUIManager_GetSpriteForNebula, "GetSpriteForNebula" }, // 682220500
		{ &Z_Construct_UFunction_USBZUIManager_GetSpriteForPlatform, "GetSpriteForPlatform" }, // 935366050
		{ &Z_Construct_UFunction_USBZUIManager_GetUIData, "GetUIData" }, // 3999428513
		{ &Z_Construct_UFunction_USBZUIManager_GetUIStack, "GetUIStack" }, // 2266451179
		{ &Z_Construct_UFunction_USBZUIManager_HandleActionPhaseEntered, "HandleActionPhaseEntered" }, // 3247455722
		{ &Z_Construct_UFunction_USBZUIManager_HandleLocalPlayerControllerReady, "HandleLocalPlayerControllerReady" }, // 796701518
		{ &Z_Construct_UFunction_USBZUIManager_HandleProgressionSave, "HandleProgressionSave" }, // 2732624654
		{ &Z_Construct_UFunction_USBZUIManager_HasAllMatchingGameplayTags, "HasAllMatchingGameplayTags" }, // 2024102668
		{ &Z_Construct_UFunction_USBZUIManager_HasAnyMatchingGameplayTags, "HasAnyMatchingGameplayTags" }, // 2116365370
		{ &Z_Construct_UFunction_USBZUIManager_HasMatchingGameplayTag, "HasMatchingGameplayTag" }, // 3878086641
		{ &Z_Construct_UFunction_USBZUIManager_HideMenuControlsReference, "HideMenuControlsReference" }, // 3456701220
		{ &Z_Construct_UFunction_USBZUIManager_IsControllerMode, "IsControllerMode" }, // 2728110336
		{ &Z_Construct_UFunction_USBZUIManager_IsGameInstallPending, "IsGameInstallPending" }, // 212459154
		{ &Z_Construct_UFunction_USBZUIManager_IsPopupShowing, "IsPopupShowing" }, // 1683247536
		{ &Z_Construct_UFunction_USBZUIManager_IsStackEmpty, "IsStackEmpty" }, // 2368560855
		{ &Z_Construct_UFunction_USBZUIManager_IsStackLocked, "IsStackLocked" }, // 3086854462
		{ &Z_Construct_UFunction_USBZUIManager_OnHeistSelectionMenuSet, "OnHeistSelectionMenuSet" }, // 226742487
		{ &Z_Construct_UFunction_USBZUIManager_OnOptForSoloModePopupClosed, "OnOptForSoloModePopupClosed" }, // 3057702882
		{ &Z_Construct_UFunction_USBZUIManager_OnPopupControllerEndPlay, "OnPopupControllerEndPlay" }, // 1085117650
		{ &Z_Construct_UFunction_USBZUIManager_OnStateMachineStateEntered, "OnStateMachineStateEntered" }, // 931743903
		{ &Z_Construct_UFunction_USBZUIManager_OnStateMachineStateExited, "OnStateMachineStateExited" }, // 473976562
		{ &Z_Construct_UFunction_USBZUIManager_PeekStack, "PeekStack" }, // 963780442
		{ &Z_Construct_UFunction_USBZUIManager_PopStack, "PopStack" }, // 2827065814
		{ &Z_Construct_UFunction_USBZUIManager_PushUIStack, "PushUIStack" }, // 1456148901
		{ &Z_Construct_UFunction_USBZUIManager_RefreshFullScreenNotificationQueue, "RefreshFullScreenNotificationQueue" }, // 3440367959
		{ &Z_Construct_UFunction_USBZUIManager_RemoveControlsReference, "RemoveControlsReference" }, // 1279123387
		{ &Z_Construct_UFunction_USBZUIManager_RemoveGameplayTag, "RemoveGameplayTag" }, // 3548341809
		{ &Z_Construct_UFunction_USBZUIManager_SaveProgressionSaveGame, "SaveProgressionSaveGame" }, // 1735667100
		{ &Z_Construct_UFunction_USBZUIManager_SetDisplayPlayerHUD, "SetDisplayPlayerHUD" }, // 2379412443
		{ &Z_Construct_UFunction_USBZUIManager_SetInputModeToGame, "SetInputModeToGame" }, // 1305830181
		{ &Z_Construct_UFunction_USBZUIManager_SetInputModeToGameAndUI, "SetInputModeToGameAndUI" }, // 702941122
		{ &Z_Construct_UFunction_USBZUIManager_SetInputModeToUI, "SetInputModeToUI" }, // 1333415687
		{ &Z_Construct_UFunction_USBZUIManager_SetLastFocusedWidget, "SetLastFocusedWidget" }, // 2788213337
		{ &Z_Construct_UFunction_USBZUIManager_SetLoginScreenVisibility, "SetLoginScreenVisibility" }, // 686154384
		{ &Z_Construct_UFunction_USBZUIManager_SetLogoP3Visibility, "SetLogoP3Visibility" }, // 3932021399
		{ &Z_Construct_UFunction_USBZUIManager_SetOnePlayerMatchHook, "SetOnePlayerMatchHook" }, // 327981821
		{ &Z_Construct_UFunction_USBZUIManager_SetStartInHeistSelection, "SetStartInHeistSelection" }, // 157871348
		{ &Z_Construct_UFunction_USBZUIManager_ShouldDisplayCursor, "ShouldDisplayCursor" }, // 3209502388
		{ &Z_Construct_UFunction_USBZUIManager_ShouldStartInHeistSelection, "ShouldStartInHeistSelection" }, // 853900833
		{ &Z_Construct_UFunction_USBZUIManager_ShowEULAPopup, "ShowEULAPopup" }, // 2726773970
		{ &Z_Construct_UFunction_USBZUIManager_ShowFullScreenNotification, "ShowFullScreenNotification" }, // 99106233
		{ &Z_Construct_UFunction_USBZUIManager_ShowMetaNotification, "ShowMetaNotification" }, // 2259973233
		{ &Z_Construct_UFunction_USBZUIManager_ShowPopUp, "ShowPopUp" }, // 1627698470
		{ &Z_Construct_UFunction_USBZUIManager_ShowPopUpWithCallback, "ShowPopUpWithCallback" }, // 3728509091
		{ &Z_Construct_UFunction_USBZUIManager_ShowSidebarNotification, "ShowSidebarNotification" }, // 4042858593
		{ &Z_Construct_UFunction_USBZUIManager_ShowTutorialPopUp, "ShowTutorialPopUp" }, // 2011485950
		{ &Z_Construct_UFunction_USBZUIManager_SimulateJoinHeistActivity, "SimulateJoinHeistActivity" }, // 2027827366
		{ &Z_Construct_UFunction_USBZUIManager_SwitchUIStack, "SwitchUIStack" }, // 3691178380
		{ &Z_Construct_UFunction_USBZUIManager_TryRemoveFromStack, "TryRemoveFromStack" }, // 1637207759
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZUIManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnDisplayNotification_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnDisplayNotification = { "OnDisplayNotification", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, OnDisplayNotification), Z_Construct_UDelegateFunction_Starbreeze_SBZOnDisplayHUDNotification__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnDisplayNotification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnDisplayNotification_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_PopUpWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_PopUpWidgetClass = { "PopUpWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, PopUpWidgetClass), Z_Construct_UClass_USBZPopupWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_PopUpWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_PopUpWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_PopUpWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_PopUpWidget = { "PopUpWidget", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, PopUpWidget), Z_Construct_UClass_USBZPopupWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_PopUpWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_PopUpWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_TutorialPopUpBodyWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_TutorialPopUpBodyWidgetClass = { "TutorialPopUpBodyWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, TutorialPopUpBodyWidgetClass), Z_Construct_UClass_USBZTutorialPopUpBody_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_TutorialPopUpBodyWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_TutorialPopUpBodyWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_TutorialPopUpBody_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_TutorialPopUpBody = { "TutorialPopUpBody", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, TutorialPopUpBody), Z_Construct_UClass_USBZTutorialPopUpBody_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_TutorialPopUpBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_TutorialPopUpBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_FullscreenNotificationWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_FullscreenNotificationWidgetClass = { "FullscreenNotificationWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, FullscreenNotificationWidgetClass), Z_Construct_UClass_USBZFullScreenNotification_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_FullscreenNotificationWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_FullscreenNotificationWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_FullscreenNotificationWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_FullscreenNotificationWidget = { "FullscreenNotificationWidget", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, FullscreenNotificationWidget), Z_Construct_UClass_USBZFullScreenNotification_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_FullscreenNotificationWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_FullscreenNotificationWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_SideBarNotificationWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_SideBarNotificationWidgetClass = { "SideBarNotificationWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, SideBarNotificationWidgetClass), Z_Construct_UClass_USBZSideBarNotifications_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_SideBarNotificationWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_SideBarNotificationWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_SideBarNotificationWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_SideBarNotificationWidget = { "SideBarNotificationWidget", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, SideBarNotificationWidget), Z_Construct_UClass_USBZSideBarNotifications_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_SideBarNotificationWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_SideBarNotificationWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_InfoPopupWidgetWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_InfoPopupWidgetWidgetClass = { "InfoPopupWidgetWidgetClass", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, InfoPopupWidgetWidgetClass), Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_InfoPopupWidgetWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_InfoPopupWidgetWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_InfoPopupWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_InfoPopupWidget = { "InfoPopupWidget", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, InfoPopupWidget), Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_InfoPopupWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_InfoPopupWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_EULAContent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_EULAContent = { "EULAContent", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, EULAContent), Z_Construct_UScriptStruct_FSBZInfoPopupText, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_EULAContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_EULAContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnHUDContextChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnHUDContextChanged = { "OnHUDContextChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, OnHUDContextChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZOnHUDContextChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnHUDContextChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnHUDContextChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_DebugWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_DebugWidgetClass = { "DebugWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, DebugWidgetClass), Z_Construct_UClass_USBZDebugWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_DebugWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_DebugWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_DebugWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_DebugWidget = { "DebugWidget", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, DebugWidget), Z_Construct_UClass_USBZDebugWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_DebugWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_DebugWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnUITagsChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnUITagsChanged = { "OnUITagsChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, OnUITagsChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZOnUITagsChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnUITagsChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnUITagsChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_MetaSaveSuccessfulText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_MetaSaveSuccessfulText = { "MetaSaveSuccessfulText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, MetaSaveSuccessfulText), METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_MetaSaveSuccessfulText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_MetaSaveSuccessfulText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_MetaSaveFailedText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_MetaSaveFailedText = { "MetaSaveFailedText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, MetaSaveFailedText), METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_MetaSaveFailedText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_MetaSaveFailedText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_UIGameplayTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_UIGameplayTags = { "UIGameplayTags", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, UIGameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_UIGameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_UIGameplayTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_SubtitleWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_SubtitleWidgetClass = { "SubtitleWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, SubtitleWidgetClass), Z_Construct_UClass_USBZSubtitleWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_SubtitleWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_SubtitleWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlatformSprite_GenericPC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlatformSprite_GenericPC = { "PlatformSprite_GenericPC", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, PlatformSprite_GenericPC), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlatformSprite_GenericPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlatformSprite_GenericPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlatformSprite_GenericConsole_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlatformSprite_GenericConsole = { "PlatformSprite_GenericConsole", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, PlatformSprite_GenericConsole), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlatformSprite_GenericConsole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlatformSprite_GenericConsole_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlatformSprite_Playstation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlatformSprite_Playstation = { "PlatformSprite_Playstation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, PlatformSprite_Playstation), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlatformSprite_Playstation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlatformSprite_Playstation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlatformSprite_XBox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlatformSprite_XBox = { "PlatformSprite_XBox", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, PlatformSprite_XBox), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlatformSprite_XBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlatformSprite_XBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_NebulaSprite_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_NebulaSprite = { "NebulaSprite", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, NebulaSprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_NebulaSprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_NebulaSprite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlayerNoName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlayerNoName = { "PlayerNoName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, PlayerNoName), METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlayerNoName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlayerNoName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_XBoxGamepadSprite_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_XBoxGamepadSprite = { "XBoxGamepadSprite", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, XBoxGamepadSprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_XBoxGamepadSprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_XBoxGamepadSprite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlayStationGamepadSprite_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlayStationGamepadSprite = { "PlayStationGamepadSprite", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, PlayStationGamepadSprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlayStationGamepadSprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlayStationGamepadSprite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_KeySpriteEmpty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_KeySpriteEmpty = { "KeySpriteEmpty", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, KeySpriteEmpty), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_KeySpriteEmpty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_KeySpriteEmpty_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_MouseSpriteMap_ValueProp = { "MouseSpriteMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_MouseSpriteMap_Key_KeyProp = { "MouseSpriteMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_MouseSpriteMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_MouseSpriteMap = { "MouseSpriteMap", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, MouseSpriteMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_MouseSpriteMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_MouseSpriteMap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_KeyboardSpriteMap_ValueProp = { "KeyboardSpriteMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_KeyboardSpriteMap_Key_KeyProp = { "KeyboardSpriteMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_KeyboardSpriteMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_KeyboardSpriteMap = { "KeyboardSpriteMap", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, KeyboardSpriteMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_KeyboardSpriteMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_KeyboardSpriteMap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_XBoxSpriteMap_ValueProp = { "XBoxSpriteMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_XBoxSpriteMap_Key_KeyProp = { "XBoxSpriteMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_XBoxSpriteMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_XBoxSpriteMap = { "XBoxSpriteMap", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, XBoxSpriteMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_XBoxSpriteMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_XBoxSpriteMap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlayStationSpriteMap_ValueProp = { "PlayStationSpriteMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlayStationSpriteMap_Key_KeyProp = { "PlayStationSpriteMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlayStationSpriteMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlayStationSpriteMap = { "PlayStationSpriteMap", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, PlayStationSpriteMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlayStationSpriteMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlayStationSpriteMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_SubtitleWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_SubtitleWidget = { "SubtitleWidget", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, SubtitleWidget), Z_Construct_UClass_USBZSubtitleWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_SubtitleWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_SubtitleWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnUIStackChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnUIStackChanged = { "OnUIStackChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, OnUIStackChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZOnUIStackStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnUIStackChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnUIStackChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnUIStackLostOrRemoved_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnUIStackLostOrRemoved = { "OnUIStackLostOrRemoved", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, OnUIStackLostOrRemoved), Z_Construct_UDelegateFunction_Starbreeze_SBZOnUIStackStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnUIStackLostOrRemoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnUIStackLostOrRemoved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnUIStackLockChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnUIStackLockChanged = { "OnUIStackLockChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, OnUIStackLockChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZOnUIStackLockChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnUIStackLockChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnUIStackLockChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_PopUpStackString_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_PopUpStackString = { "PopUpStackString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, PopUpStackString), METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_PopUpStackString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_PopUpStackString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_SwitchingStackString_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_SwitchingStackString = { "SwitchingStackString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, SwitchingStackString), METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_SwitchingStackString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_SwitchingStackString_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_UIStack_Inner = { "UIStack", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_UIStack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_UIStack = { "UIStack", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, UIStack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_UIStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_UIStack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_StackLockedArray_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_StackLockedArray_Inner = { "StackLockedArray", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_StackLockedArray_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_StackLockedArray_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_StackLockedArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_StackLockedArray = { "StackLockedArray", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, StackLockedArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_StackLockedArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_StackLockedArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_RuntimeControlsReference_Inner = { "RuntimeControlsReference", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZControlsReferenceRuntime, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_RuntimeControlsReference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_RuntimeControlsReference = { "RuntimeControlsReference", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, RuntimeControlsReference), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_RuntimeControlsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_RuntimeControlsReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_BlackBackgroundWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_BlackBackgroundWidgetClass = { "BlackBackgroundWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, BlackBackgroundWidgetClass), Z_Construct_UClass_USBZWidgetBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_BlackBackgroundWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_BlackBackgroundWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_ActiveMenuWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_ActiveMenuWidget = { "ActiveMenuWidget", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, ActiveMenuWidget), Z_Construct_UClass_USBZBaseMenuWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_ActiveMenuWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_ActiveMenuWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_ActiveLoginScreenWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_ActiveLoginScreenWidget = { "ActiveLoginScreenWidget", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, ActiveLoginScreenWidget), Z_Construct_UClass_USBZLoginScreenBaseWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_ActiveLoginScreenWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_ActiveLoginScreenWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_ActivePSOCompilationScreenWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_ActivePSOCompilationScreenWidget = { "ActivePSOCompilationScreenWidget", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, ActivePSOCompilationScreenWidget), Z_Construct_UClass_USBZPSOCompilationScreen_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_ActivePSOCompilationScreenWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_ActivePSOCompilationScreenWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_LastFocusedWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_LastFocusedWidget = { "LastFocusedWidget", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, LastFocusedWidget), Z_Construct_UClass_USBZWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_LastFocusedWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_LastFocusedWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_LastUIStackUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_LastUIStackUpdate = { "LastUIStackUpdate", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, LastUIStackUpdate), METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_LastUIStackUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_LastUIStackUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_bSetFocusOnUnlock_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	void Z_Construct_UClass_USBZUIManager_Statics::NewProp_bSetFocusOnUnlock_SetBit(void* Obj)
	{
		((USBZUIManager*)Obj)->bSetFocusOnUnlock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_bSetFocusOnUnlock = { "bSetFocusOnUnlock", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZUIManager), &Z_Construct_UClass_USBZUIManager_Statics::NewProp_bSetFocusOnUnlock_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_bSetFocusOnUnlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_bSetFocusOnUnlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnInstallStateChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnInstallStateChanged = { "OnInstallStateChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, OnInstallStateChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZOnInstallStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnInstallStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnInstallStateChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUIManager_Statics::NewProp_UIData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIManager" },
		{ "ModuleRelativePath", "Public/SBZUIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZUIManager_Statics::NewProp_UIData = { "UIData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUIManager, UIData), Z_Construct_UClass_USBZUIData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::NewProp_UIData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::NewProp_UIData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZUIManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnDisplayNotification,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_PopUpWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_PopUpWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_TutorialPopUpBodyWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_TutorialPopUpBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_FullscreenNotificationWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_FullscreenNotificationWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_SideBarNotificationWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_SideBarNotificationWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_InfoPopupWidgetWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_InfoPopupWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_EULAContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnHUDContextChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_DebugWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_DebugWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnUITagsChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_MetaSaveSuccessfulText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_MetaSaveFailedText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_UIGameplayTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_SubtitleWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlatformSprite_GenericPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlatformSprite_GenericConsole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlatformSprite_Playstation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlatformSprite_XBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_NebulaSprite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlayerNoName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_XBoxGamepadSprite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlayStationGamepadSprite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_KeySpriteEmpty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_MouseSpriteMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_MouseSpriteMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_MouseSpriteMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_KeyboardSpriteMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_KeyboardSpriteMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_KeyboardSpriteMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_XBoxSpriteMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_XBoxSpriteMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_XBoxSpriteMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlayStationSpriteMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlayStationSpriteMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_PlayStationSpriteMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_SubtitleWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnUIStackChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnUIStackLostOrRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnUIStackLockChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_PopUpStackString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_SwitchingStackString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_UIStack_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_UIStack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_StackLockedArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_StackLockedArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_RuntimeControlsReference_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_RuntimeControlsReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_BlackBackgroundWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_ActiveMenuWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_ActiveLoginScreenWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_ActivePSOCompilationScreenWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_LastFocusedWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_LastUIStackUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_bSetFocusOnUnlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_OnInstallStateChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUIManager_Statics::NewProp_UIData,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USBZUIManager_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(USBZUIManager, IGameplayTagAssetInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZUIManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZUIManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZUIManager_Statics::ClassParams = {
		&USBZUIManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZUIManager_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZUIManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUIManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZUIManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZUIManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZUIManager, 500716331);
	template<> STARBREEZE_API UClass* StaticClass<USBZUIManager>()
	{
		return USBZUIManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZUIManager(Z_Construct_UClass_USBZUIManager, &USBZUIManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZUIManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZUIManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
