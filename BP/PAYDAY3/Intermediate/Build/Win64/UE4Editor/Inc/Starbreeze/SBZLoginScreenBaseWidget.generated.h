// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCanvasPanel;
enum class ESlateVisibility : uint8;
#ifdef STARBREEZE_SBZLoginScreenBaseWidget_generated_h
#error "SBZLoginScreenBaseWidget.generated.h already included, missing '#pragma once' in SBZLoginScreenBaseWidget.h"
#endif
#define STARBREEZE_SBZLoginScreenBaseWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenBaseWidget_h_19_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenBaseWidget_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLoadingCanvasPanel); \
	DECLARE_FUNCTION(execInitializeDone); \
	DECLARE_FUNCTION(execOnEpilepsyPopUpClosed); \
	DECLARE_FUNCTION(execOnEULAPopUpClosed); \
	DECLARE_FUNCTION(execOnPrivacyPopUpClosed); \
	DECLARE_FUNCTION(execSetLoadingCanvasPanelVisibility); \
	DECLARE_FUNCTION(execShowEpilepsyWarningPopup); \
	DECLARE_FUNCTION(execShowEULAPopup); \
	DECLARE_FUNCTION(execShowPrivacyPolicyPopup); \
	DECLARE_FUNCTION(execWidgetReady);


#define PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenBaseWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLoadingCanvasPanel); \
	DECLARE_FUNCTION(execInitializeDone); \
	DECLARE_FUNCTION(execOnEpilepsyPopUpClosed); \
	DECLARE_FUNCTION(execOnEULAPopUpClosed); \
	DECLARE_FUNCTION(execOnPrivacyPopUpClosed); \
	DECLARE_FUNCTION(execSetLoadingCanvasPanelVisibility); \
	DECLARE_FUNCTION(execShowEpilepsyWarningPopup); \
	DECLARE_FUNCTION(execShowEULAPopup); \
	DECLARE_FUNCTION(execShowPrivacyPolicyPopup); \
	DECLARE_FUNCTION(execWidgetReady);


#define PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenBaseWidget_h_19_EVENT_PARMS \
	struct SBZLoginScreenBaseWidget_eventOnLoginError_Parms \
	{ \
		FText ErrorMessage; \
	}; \
	struct SBZLoginScreenBaseWidget_eventOnPrivacyPolicyChoice_Parms \
	{ \
		FName ClosingActionName; \
	}; \
	struct SBZLoginScreenBaseWidget_eventSetLoadingPanelVisibility_Parms \
	{ \
		ESlateVisibility InVisibility; \
	}; \
	struct SBZLoginScreenBaseWidget_eventSetLoginPanelsVisibility_Parms \
	{ \
		ESlateVisibility InVisibility; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenBaseWidget_h_19_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenBaseWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZLoginScreenBaseWidget(); \
	friend struct Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics; \
public: \
	DECLARE_CLASS(USBZLoginScreenBaseWidget, USBZInternetStatusWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZLoginScreenBaseWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenBaseWidget_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSBZLoginScreenBaseWidget(); \
	friend struct Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics; \
public: \
	DECLARE_CLASS(USBZLoginScreenBaseWidget, USBZInternetStatusWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZLoginScreenBaseWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenBaseWidget_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZLoginScreenBaseWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZLoginScreenBaseWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZLoginScreenBaseWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZLoginScreenBaseWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZLoginScreenBaseWidget(USBZLoginScreenBaseWidget&&); \
	NO_API USBZLoginScreenBaseWidget(const USBZLoginScreenBaseWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenBaseWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZLoginScreenBaseWidget(USBZLoginScreenBaseWidget&&); \
	NO_API USBZLoginScreenBaseWidget(const USBZLoginScreenBaseWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZLoginScreenBaseWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZLoginScreenBaseWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZLoginScreenBaseWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenBaseWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PrivacyPolicyContent() { return STRUCT_OFFSET(USBZLoginScreenBaseWidget, PrivacyPolicyContent); } \
	FORCEINLINE static uint32 __PPO__EULAContent() { return STRUCT_OFFSET(USBZLoginScreenBaseWidget, EULAContent); } \
	FORCEINLINE static uint32 __PPO__EpilepsyWarningContent() { return STRUCT_OFFSET(USBZLoginScreenBaseWidget, EpilepsyWarningContent); } \
	FORCEINLINE static uint32 __PPO__TelemetryContent() { return STRUCT_OFFSET(USBZLoginScreenBaseWidget, TelemetryContent); } \
	FORCEINLINE static uint32 __PPO__GameSenseContent() { return STRUCT_OFFSET(USBZLoginScreenBaseWidget, GameSenseContent); } \
	FORCEINLINE static uint32 __PPO__CrossplayContent() { return STRUCT_OFFSET(USBZLoginScreenBaseWidget, CrossplayContent); } \
	FORCEINLINE static uint32 __PPO__PopUpAcceptAction() { return STRUCT_OFFSET(USBZLoginScreenBaseWidget, PopUpAcceptAction); } \
	FORCEINLINE static uint32 __PPO__PopUpCancelAction() { return STRUCT_OFFSET(USBZLoginScreenBaseWidget, PopUpCancelAction); } \
	FORCEINLINE static uint32 __PPO__PopUpOptInAction() { return STRUCT_OFFSET(USBZLoginScreenBaseWidget, PopUpOptInAction); } \
	FORCEINLINE static uint32 __PPO__PopUpOptOutAction() { return STRUCT_OFFSET(USBZLoginScreenBaseWidget, PopUpOptOutAction); } \
	FORCEINLINE static uint32 __PPO__PopUpData() { return STRUCT_OFFSET(USBZLoginScreenBaseWidget, PopUpData); } \
	FORCEINLINE static uint32 __PPO__InvalidUserNameOrPassword() { return STRUCT_OFFSET(USBZLoginScreenBaseWidget, InvalidUserNameOrPassword); } \
	FORCEINLINE static uint32 __PPO__bRememeberDetails() { return STRUCT_OFFSET(USBZLoginScreenBaseWidget, bRememeberDetails); } \
	FORCEINLINE static uint32 __PPO__LoadingThrobber() { return STRUCT_OFFSET(USBZLoginScreenBaseWidget, LoadingThrobber); } \
	FORCEINLINE static uint32 __PPO__LoadingCanvasPanel() { return STRUCT_OFFSET(USBZLoginScreenBaseWidget, LoadingCanvasPanel); } \
	FORCEINLINE static uint32 __PPO__LoginScreen() { return STRUCT_OFFSET(USBZLoginScreenBaseWidget, LoginScreen); } \
	FORCEINLINE static uint32 __PPO__LogoP3() { return STRUCT_OFFSET(USBZLoginScreenBaseWidget, LogoP3); } \
	FORCEINLINE static uint32 __PPO__ClickToStartButton() { return STRUCT_OFFSET(USBZLoginScreenBaseWidget, ClickToStartButton); } \
	FORCEINLINE static uint32 __PPO__ClickToStartOverlay() { return STRUCT_OFFSET(USBZLoginScreenBaseWidget, ClickToStartOverlay); } \
	FORCEINLINE static uint32 __PPO__bIsWidgetReady() { return STRUCT_OFFSET(USBZLoginScreenBaseWidget, bIsWidgetReady); }


#define PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenBaseWidget_h_17_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenBaseWidget_h_19_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenBaseWidget_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenBaseWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenBaseWidget_h_19_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenBaseWidget_h_19_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenBaseWidget_h_19_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenBaseWidget_h_19_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenBaseWidget_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenBaseWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenBaseWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenBaseWidget_h_19_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenBaseWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenBaseWidget_h_19_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenBaseWidget_h_19_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenBaseWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZLoginScreenBaseWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZLoginScreenBaseWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
