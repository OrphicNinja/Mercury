// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTagContainer;
struct FGameplayTag;
struct FSBZControlsReference;
class UObject;
struct FSBZButtonControlsReference;
struct FSBZHUDNotificationData;
struct FSBZUIFullscreenNotificationData;
class UPaperSprite;
enum class ESBZInputState : uint8;
struct FKey;
class USBZWidgetBase;
class USBZBaseMenuWidget;
class USBZPopupWidget;
enum class ESBZPlatform : uint8;
class USBZUIData;
enum class ESBZMetaRequestResult : uint8;
class AActor;
enum class ESlateVisibility : uint8;
struct FSBZMetaNotification;
struct FSBZUIPopupData;
struct FSBZSideBarNotificationData;
class USBZTutorialPopUpDataAsset;
#ifdef STARBREEZE_SBZUIManager_generated_h
#error "SBZUIManager.generated.h already included, missing '#pragma once' in SBZUIManager.h"
#endif
#define STARBREEZE_SBZUIManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZUIManager_h_51_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZUIManager_h_51_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOwnedGameplayTags); \
	DECLARE_FUNCTION(execHasAllMatchingGameplayTags); \
	DECLARE_FUNCTION(execHasAnyMatchingGameplayTags); \
	DECLARE_FUNCTION(execHasMatchingGameplayTag); \
	DECLARE_FUNCTION(execAddControlsReference); \
	DECLARE_FUNCTION(execAddMenuControlsReference); \
	DECLARE_FUNCTION(execAddUIGameplayTag); \
	DECLARE_FUNCTION(execClearPopupStack); \
	DECLARE_FUNCTION(execDisplayHUDNotification); \
	DECLARE_FUNCTION(execGetActiveControlsReference); \
	DECLARE_FUNCTION(execGetFullscreenNotificationQueue); \
	DECLARE_FUNCTION(execGetGamepadSprite); \
	DECLARE_FUNCTION(execGetInputMode); \
	DECLARE_FUNCTION(execGetKeyForActionMapping); \
	DECLARE_FUNCTION(execGetKeysForAxisMapping); \
	DECLARE_FUNCTION(execGetKeySpriteEmpty); \
	DECLARE_FUNCTION(execGetKeySpriteForFKey); \
	DECLARE_FUNCTION(execGetLastFocusedWidget); \
	DECLARE_FUNCTION(execGetLocalizedPlayerNoName); \
	DECLARE_FUNCTION(execGetMenuWidget); \
	DECLARE_FUNCTION(execGetPopUpWidget); \
	DECLARE_FUNCTION(execGetSpriteForNebula); \
	DECLARE_FUNCTION(execGetSpriteForPlatform); \
	DECLARE_FUNCTION(execGetUIData); \
	DECLARE_FUNCTION(execGetUIStack); \
	DECLARE_FUNCTION(execHandleActionPhaseEntered); \
	DECLARE_FUNCTION(execHandleLocalPlayerControllerReady); \
	DECLARE_FUNCTION(execHandleProgressionSave); \
	DECLARE_FUNCTION(execHideMenuControlsReference); \
	DECLARE_FUNCTION(execIsControllerMode); \
	DECLARE_FUNCTION(execIsGameInstallPending); \
	DECLARE_FUNCTION(execIsPopupShowing); \
	DECLARE_FUNCTION(execIsStackEmpty); \
	DECLARE_FUNCTION(execIsStackLocked); \
	DECLARE_FUNCTION(execOnHeistSelectionMenuSet); \
	DECLARE_FUNCTION(execOnOptForSoloModePopupClosed); \
	DECLARE_FUNCTION(execOnPopupControllerEndPlay); \
	DECLARE_FUNCTION(execOnStateMachineStateEntered); \
	DECLARE_FUNCTION(execOnStateMachineStateExited); \
	DECLARE_FUNCTION(execPeekStack); \
	DECLARE_FUNCTION(execPopStack); \
	DECLARE_FUNCTION(execPushUIStack); \
	DECLARE_FUNCTION(execRefreshFullScreenNotificationQueue); \
	DECLARE_FUNCTION(execRemoveControlsReference); \
	DECLARE_FUNCTION(execRemoveGameplayTag); \
	DECLARE_FUNCTION(execSaveProgressionSaveGame); \
	DECLARE_FUNCTION(execSetDisplayPlayerHUD); \
	DECLARE_FUNCTION(execSetInputModeToGame); \
	DECLARE_FUNCTION(execSetInputModeToGameAndUI); \
	DECLARE_FUNCTION(execSetInputModeToUI); \
	DECLARE_FUNCTION(execSetLastFocusedWidget); \
	DECLARE_FUNCTION(execSetLoginScreenVisibility); \
	DECLARE_FUNCTION(execSetLogoP3Visibility); \
	DECLARE_FUNCTION(execSetOnePlayerMatchHook); \
	DECLARE_FUNCTION(execSetStartInHeistSelection); \
	DECLARE_FUNCTION(execShouldDisplayCursor); \
	DECLARE_FUNCTION(execShouldStartInHeistSelection); \
	DECLARE_FUNCTION(execShowEULAPopup); \
	DECLARE_FUNCTION(execShowFullScreenNotification); \
	DECLARE_FUNCTION(execShowMetaNotification); \
	DECLARE_FUNCTION(execShowPopUp); \
	DECLARE_FUNCTION(execShowPopUpWithCallback); \
	DECLARE_FUNCTION(execShowSidebarNotification); \
	DECLARE_FUNCTION(execShowTutorialPopUp); \
	DECLARE_FUNCTION(execSimulateJoinHeistActivity); \
	DECLARE_FUNCTION(execSwitchUIStack); \
	DECLARE_FUNCTION(execTryRemoveFromStack);


#define PAYDAY3_Source_Starbreeze_Public_SBZUIManager_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOwnedGameplayTags); \
	DECLARE_FUNCTION(execHasAllMatchingGameplayTags); \
	DECLARE_FUNCTION(execHasAnyMatchingGameplayTags); \
	DECLARE_FUNCTION(execHasMatchingGameplayTag); \
	DECLARE_FUNCTION(execAddControlsReference); \
	DECLARE_FUNCTION(execAddMenuControlsReference); \
	DECLARE_FUNCTION(execAddUIGameplayTag); \
	DECLARE_FUNCTION(execClearPopupStack); \
	DECLARE_FUNCTION(execDisplayHUDNotification); \
	DECLARE_FUNCTION(execGetActiveControlsReference); \
	DECLARE_FUNCTION(execGetFullscreenNotificationQueue); \
	DECLARE_FUNCTION(execGetGamepadSprite); \
	DECLARE_FUNCTION(execGetInputMode); \
	DECLARE_FUNCTION(execGetKeyForActionMapping); \
	DECLARE_FUNCTION(execGetKeysForAxisMapping); \
	DECLARE_FUNCTION(execGetKeySpriteEmpty); \
	DECLARE_FUNCTION(execGetKeySpriteForFKey); \
	DECLARE_FUNCTION(execGetLastFocusedWidget); \
	DECLARE_FUNCTION(execGetLocalizedPlayerNoName); \
	DECLARE_FUNCTION(execGetMenuWidget); \
	DECLARE_FUNCTION(execGetPopUpWidget); \
	DECLARE_FUNCTION(execGetSpriteForNebula); \
	DECLARE_FUNCTION(execGetSpriteForPlatform); \
	DECLARE_FUNCTION(execGetUIData); \
	DECLARE_FUNCTION(execGetUIStack); \
	DECLARE_FUNCTION(execHandleActionPhaseEntered); \
	DECLARE_FUNCTION(execHandleLocalPlayerControllerReady); \
	DECLARE_FUNCTION(execHandleProgressionSave); \
	DECLARE_FUNCTION(execHideMenuControlsReference); \
	DECLARE_FUNCTION(execIsControllerMode); \
	DECLARE_FUNCTION(execIsGameInstallPending); \
	DECLARE_FUNCTION(execIsPopupShowing); \
	DECLARE_FUNCTION(execIsStackEmpty); \
	DECLARE_FUNCTION(execIsStackLocked); \
	DECLARE_FUNCTION(execOnHeistSelectionMenuSet); \
	DECLARE_FUNCTION(execOnOptForSoloModePopupClosed); \
	DECLARE_FUNCTION(execOnPopupControllerEndPlay); \
	DECLARE_FUNCTION(execOnStateMachineStateEntered); \
	DECLARE_FUNCTION(execOnStateMachineStateExited); \
	DECLARE_FUNCTION(execPeekStack); \
	DECLARE_FUNCTION(execPopStack); \
	DECLARE_FUNCTION(execPushUIStack); \
	DECLARE_FUNCTION(execRefreshFullScreenNotificationQueue); \
	DECLARE_FUNCTION(execRemoveControlsReference); \
	DECLARE_FUNCTION(execRemoveGameplayTag); \
	DECLARE_FUNCTION(execSaveProgressionSaveGame); \
	DECLARE_FUNCTION(execSetDisplayPlayerHUD); \
	DECLARE_FUNCTION(execSetInputModeToGame); \
	DECLARE_FUNCTION(execSetInputModeToGameAndUI); \
	DECLARE_FUNCTION(execSetInputModeToUI); \
	DECLARE_FUNCTION(execSetLastFocusedWidget); \
	DECLARE_FUNCTION(execSetLoginScreenVisibility); \
	DECLARE_FUNCTION(execSetLogoP3Visibility); \
	DECLARE_FUNCTION(execSetOnePlayerMatchHook); \
	DECLARE_FUNCTION(execSetStartInHeistSelection); \
	DECLARE_FUNCTION(execShouldDisplayCursor); \
	DECLARE_FUNCTION(execShouldStartInHeistSelection); \
	DECLARE_FUNCTION(execShowEULAPopup); \
	DECLARE_FUNCTION(execShowFullScreenNotification); \
	DECLARE_FUNCTION(execShowMetaNotification); \
	DECLARE_FUNCTION(execShowPopUp); \
	DECLARE_FUNCTION(execShowPopUpWithCallback); \
	DECLARE_FUNCTION(execShowSidebarNotification); \
	DECLARE_FUNCTION(execShowTutorialPopUp); \
	DECLARE_FUNCTION(execSimulateJoinHeistActivity); \
	DECLARE_FUNCTION(execSwitchUIStack); \
	DECLARE_FUNCTION(execTryRemoveFromStack);


#define PAYDAY3_Source_Starbreeze_Public_SBZUIManager_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZUIManager(); \
	friend struct Z_Construct_UClass_USBZUIManager_Statics; \
public: \
	DECLARE_CLASS(USBZUIManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZUIManager) \
	virtual UObject* _getUObject() const override { return const_cast<USBZUIManager*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZUIManager_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUSBZUIManager(); \
	friend struct Z_Construct_UClass_USBZUIManager_Statics; \
public: \
	DECLARE_CLASS(USBZUIManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZUIManager) \
	virtual UObject* _getUObject() const override { return const_cast<USBZUIManager*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZUIManager_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZUIManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZUIManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZUIManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZUIManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZUIManager(USBZUIManager&&); \
	NO_API USBZUIManager(const USBZUIManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZUIManager_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZUIManager(USBZUIManager&&); \
	NO_API USBZUIManager(const USBZUIManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZUIManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZUIManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZUIManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZUIManager_h_51_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InfoPopupWidgetWidgetClass() { return STRUCT_OFFSET(USBZUIManager, InfoPopupWidgetWidgetClass); } \
	FORCEINLINE static uint32 __PPO__InfoPopupWidget() { return STRUCT_OFFSET(USBZUIManager, InfoPopupWidget); } \
	FORCEINLINE static uint32 __PPO__EULAContent() { return STRUCT_OFFSET(USBZUIManager, EULAContent); } \
	FORCEINLINE static uint32 __PPO__MetaSaveSuccessfulText() { return STRUCT_OFFSET(USBZUIManager, MetaSaveSuccessfulText); } \
	FORCEINLINE static uint32 __PPO__MetaSaveFailedText() { return STRUCT_OFFSET(USBZUIManager, MetaSaveFailedText); } \
	FORCEINLINE static uint32 __PPO__UIGameplayTags() { return STRUCT_OFFSET(USBZUIManager, UIGameplayTags); } \
	FORCEINLINE static uint32 __PPO__SubtitleWidgetClass() { return STRUCT_OFFSET(USBZUIManager, SubtitleWidgetClass); } \
	FORCEINLINE static uint32 __PPO__PlatformSprite_GenericPC() { return STRUCT_OFFSET(USBZUIManager, PlatformSprite_GenericPC); } \
	FORCEINLINE static uint32 __PPO__PlatformSprite_GenericConsole() { return STRUCT_OFFSET(USBZUIManager, PlatformSprite_GenericConsole); } \
	FORCEINLINE static uint32 __PPO__PlatformSprite_Playstation() { return STRUCT_OFFSET(USBZUIManager, PlatformSprite_Playstation); } \
	FORCEINLINE static uint32 __PPO__PlatformSprite_XBox() { return STRUCT_OFFSET(USBZUIManager, PlatformSprite_XBox); } \
	FORCEINLINE static uint32 __PPO__NebulaSprite() { return STRUCT_OFFSET(USBZUIManager, NebulaSprite); } \
	FORCEINLINE static uint32 __PPO__PlayerNoName() { return STRUCT_OFFSET(USBZUIManager, PlayerNoName); } \
	FORCEINLINE static uint32 __PPO__XBoxGamepadSprite() { return STRUCT_OFFSET(USBZUIManager, XBoxGamepadSprite); } \
	FORCEINLINE static uint32 __PPO__PlayStationGamepadSprite() { return STRUCT_OFFSET(USBZUIManager, PlayStationGamepadSprite); } \
	FORCEINLINE static uint32 __PPO__KeySpriteEmpty() { return STRUCT_OFFSET(USBZUIManager, KeySpriteEmpty); } \
	FORCEINLINE static uint32 __PPO__MouseSpriteMap() { return STRUCT_OFFSET(USBZUIManager, MouseSpriteMap); } \
	FORCEINLINE static uint32 __PPO__KeyboardSpriteMap() { return STRUCT_OFFSET(USBZUIManager, KeyboardSpriteMap); } \
	FORCEINLINE static uint32 __PPO__XBoxSpriteMap() { return STRUCT_OFFSET(USBZUIManager, XBoxSpriteMap); } \
	FORCEINLINE static uint32 __PPO__PlayStationSpriteMap() { return STRUCT_OFFSET(USBZUIManager, PlayStationSpriteMap); } \
	FORCEINLINE static uint32 __PPO__SubtitleWidget() { return STRUCT_OFFSET(USBZUIManager, SubtitleWidget); } \
	FORCEINLINE static uint32 __PPO__UIStack() { return STRUCT_OFFSET(USBZUIManager, UIStack); } \
	FORCEINLINE static uint32 __PPO__StackLockedArray() { return STRUCT_OFFSET(USBZUIManager, StackLockedArray); } \
	FORCEINLINE static uint32 __PPO__RuntimeControlsReference() { return STRUCT_OFFSET(USBZUIManager, RuntimeControlsReference); } \
	FORCEINLINE static uint32 __PPO__BlackBackgroundWidgetClass() { return STRUCT_OFFSET(USBZUIManager, BlackBackgroundWidgetClass); } \
	FORCEINLINE static uint32 __PPO__ActiveMenuWidget() { return STRUCT_OFFSET(USBZUIManager, ActiveMenuWidget); } \
	FORCEINLINE static uint32 __PPO__ActiveLoginScreenWidget() { return STRUCT_OFFSET(USBZUIManager, ActiveLoginScreenWidget); } \
	FORCEINLINE static uint32 __PPO__ActivePSOCompilationScreenWidget() { return STRUCT_OFFSET(USBZUIManager, ActivePSOCompilationScreenWidget); } \
	FORCEINLINE static uint32 __PPO__LastFocusedWidget() { return STRUCT_OFFSET(USBZUIManager, LastFocusedWidget); } \
	FORCEINLINE static uint32 __PPO__LastUIStackUpdate() { return STRUCT_OFFSET(USBZUIManager, LastUIStackUpdate); } \
	FORCEINLINE static uint32 __PPO__bSetFocusOnUnlock() { return STRUCT_OFFSET(USBZUIManager, bSetFocusOnUnlock); } \
	FORCEINLINE static uint32 __PPO__UIData() { return STRUCT_OFFSET(USBZUIManager, UIData); }


#define PAYDAY3_Source_Starbreeze_Public_SBZUIManager_h_49_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZUIManager_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZUIManager_h_51_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZUIManager_h_51_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZUIManager_h_51_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZUIManager_h_51_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZUIManager_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZUIManager_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZUIManager_h_51_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZUIManager_h_51_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZUIManager_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZUIManager_h_51_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZUIManager_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZUIManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZUIManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
