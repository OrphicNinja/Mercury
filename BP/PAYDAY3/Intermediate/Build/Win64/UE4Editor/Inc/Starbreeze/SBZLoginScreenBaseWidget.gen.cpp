// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLoginScreenBaseWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLoginScreenBaseWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoginScreenBaseWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoginScreenBaseWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInternetStatusWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInfoPopupText();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZButtonControlReference();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZUIPopupData();
	UMG_API UClass* Z_Construct_UClass_UCircularThrobber_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoginScreenWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZLoginScreenBaseWidget::execGetLoadingCanvasPanel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCanvasPanel**)Z_Param__Result=P_THIS->GetLoadingCanvasPanel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLoginScreenBaseWidget::execInitializeDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeDone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLoginScreenBaseWidget::execOnEpilepsyPopUpClosed)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ClosingActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEpilepsyPopUpClosed(Z_Param_ClosingActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLoginScreenBaseWidget::execOnEULAPopUpClosed)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ClosingActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEULAPopUpClosed(Z_Param_ClosingActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLoginScreenBaseWidget::execOnPrivacyPopUpClosed)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ClosingActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPrivacyPopUpClosed(Z_Param_ClosingActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLoginScreenBaseWidget::execSetLoadingCanvasPanelVisibility)
	{
		P_GET_ENUM(ESlateVisibility,Z_Param_InVisibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoadingCanvasPanelVisibility(ESlateVisibility(Z_Param_InVisibility));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLoginScreenBaseWidget::execShowEpilepsyWarningPopup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowEpilepsyWarningPopup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLoginScreenBaseWidget::execShowEULAPopup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowEULAPopup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLoginScreenBaseWidget::execShowPrivacyPolicyPopup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowPrivacyPolicyPopup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLoginScreenBaseWidget::execWidgetReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WidgetReady();
		P_NATIVE_END;
	}
	static FName NAME_USBZLoginScreenBaseWidget_InitializeLoginMenu = FName(TEXT("InitializeLoginMenu"));
	void USBZLoginScreenBaseWidget::InitializeLoginMenu()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZLoginScreenBaseWidget_InitializeLoginMenu),NULL);
	}
	static FName NAME_USBZLoginScreenBaseWidget_OnInitializeDone = FName(TEXT("OnInitializeDone"));
	void USBZLoginScreenBaseWidget::OnInitializeDone()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZLoginScreenBaseWidget_OnInitializeDone),NULL);
	}
	static FName NAME_USBZLoginScreenBaseWidget_OnLoginError = FName(TEXT("OnLoginError"));
	void USBZLoginScreenBaseWidget::OnLoginError(FText const& ErrorMessage)
	{
		SBZLoginScreenBaseWidget_eventOnLoginError_Parms Parms;
		Parms.ErrorMessage=ErrorMessage;
		ProcessEvent(FindFunctionChecked(NAME_USBZLoginScreenBaseWidget_OnLoginError),&Parms);
	}
	static FName NAME_USBZLoginScreenBaseWidget_OnPrivacyPolicyChoice = FName(TEXT("OnPrivacyPolicyChoice"));
	void USBZLoginScreenBaseWidget::OnPrivacyPolicyChoice(FName ClosingActionName)
	{
		SBZLoginScreenBaseWidget_eventOnPrivacyPolicyChoice_Parms Parms;
		Parms.ClosingActionName=ClosingActionName;
		ProcessEvent(FindFunctionChecked(NAME_USBZLoginScreenBaseWidget_OnPrivacyPolicyChoice),&Parms);
	}
	static FName NAME_USBZLoginScreenBaseWidget_SetLoadingPanelVisibility = FName(TEXT("SetLoadingPanelVisibility"));
	void USBZLoginScreenBaseWidget::SetLoadingPanelVisibility(ESlateVisibility InVisibility)
	{
		SBZLoginScreenBaseWidget_eventSetLoadingPanelVisibility_Parms Parms;
		Parms.InVisibility=InVisibility;
		ProcessEvent(FindFunctionChecked(NAME_USBZLoginScreenBaseWidget_SetLoadingPanelVisibility),&Parms);
	}
	static FName NAME_USBZLoginScreenBaseWidget_SetLoginPanelsVisibility = FName(TEXT("SetLoginPanelsVisibility"));
	void USBZLoginScreenBaseWidget::SetLoginPanelsVisibility(ESlateVisibility InVisibility)
	{
		SBZLoginScreenBaseWidget_eventSetLoginPanelsVisibility_Parms Parms;
		Parms.InVisibility=InVisibility;
		ProcessEvent(FindFunctionChecked(NAME_USBZLoginScreenBaseWidget_SetLoginPanelsVisibility),&Parms);
	}
	void USBZLoginScreenBaseWidget::StaticRegisterNativesUSBZLoginScreenBaseWidget()
	{
		UClass* Class = USBZLoginScreenBaseWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLoadingCanvasPanel", &USBZLoginScreenBaseWidget::execGetLoadingCanvasPanel },
			{ "InitializeDone", &USBZLoginScreenBaseWidget::execInitializeDone },
			{ "OnEpilepsyPopUpClosed", &USBZLoginScreenBaseWidget::execOnEpilepsyPopUpClosed },
			{ "OnEULAPopUpClosed", &USBZLoginScreenBaseWidget::execOnEULAPopUpClosed },
			{ "OnPrivacyPopUpClosed", &USBZLoginScreenBaseWidget::execOnPrivacyPopUpClosed },
			{ "SetLoadingCanvasPanelVisibility", &USBZLoginScreenBaseWidget::execSetLoadingCanvasPanelVisibility },
			{ "ShowEpilepsyWarningPopup", &USBZLoginScreenBaseWidget::execShowEpilepsyWarningPopup },
			{ "ShowEULAPopup", &USBZLoginScreenBaseWidget::execShowEULAPopup },
			{ "ShowPrivacyPolicyPopup", &USBZLoginScreenBaseWidget::execShowPrivacyPolicyPopup },
			{ "WidgetReady", &USBZLoginScreenBaseWidget::execWidgetReady },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZLoginScreenBaseWidget_GetLoadingCanvasPanel_Statics
	{
		struct SBZLoginScreenBaseWidget_eventGetLoadingCanvasPanel_Parms
		{
			UCanvasPanel* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoginScreenBaseWidget_GetLoadingCanvasPanel_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLoginScreenBaseWidget_GetLoadingCanvasPanel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoginScreenBaseWidget_eventGetLoadingCanvasPanel_Parms, ReturnValue), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLoginScreenBaseWidget_GetLoadingCanvasPanel_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenBaseWidget_GetLoadingCanvasPanel_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoginScreenBaseWidget_GetLoadingCanvasPanel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoginScreenBaseWidget_GetLoadingCanvasPanel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoginScreenBaseWidget_GetLoadingCanvasPanel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoginScreenBaseWidget_GetLoadingCanvasPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoginScreenBaseWidget, nullptr, "GetLoadingCanvasPanel", nullptr, nullptr, sizeof(SBZLoginScreenBaseWidget_eventGetLoadingCanvasPanel_Parms), Z_Construct_UFunction_USBZLoginScreenBaseWidget_GetLoadingCanvasPanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenBaseWidget_GetLoadingCanvasPanel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoginScreenBaseWidget_GetLoadingCanvasPanel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenBaseWidget_GetLoadingCanvasPanel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoginScreenBaseWidget_GetLoadingCanvasPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoginScreenBaseWidget_GetLoadingCanvasPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoginScreenBaseWidget_InitializeDone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoginScreenBaseWidget_InitializeDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoginScreenBaseWidget_InitializeDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoginScreenBaseWidget, nullptr, "InitializeDone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoginScreenBaseWidget_InitializeDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenBaseWidget_InitializeDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoginScreenBaseWidget_InitializeDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoginScreenBaseWidget_InitializeDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoginScreenBaseWidget_InitializeLoginMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoginScreenBaseWidget_InitializeLoginMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoginScreenBaseWidget_InitializeLoginMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoginScreenBaseWidget, nullptr, "InitializeLoginMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoginScreenBaseWidget_InitializeLoginMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenBaseWidget_InitializeLoginMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoginScreenBaseWidget_InitializeLoginMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoginScreenBaseWidget_InitializeLoginMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnEpilepsyPopUpClosed_Statics
	{
		struct SBZLoginScreenBaseWidget_eventOnEpilepsyPopUpClosed_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnEpilepsyPopUpClosed_Statics::NewProp_ClosingActionName = { "ClosingActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoginScreenBaseWidget_eventOnEpilepsyPopUpClosed_Parms, ClosingActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnEpilepsyPopUpClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnEpilepsyPopUpClosed_Statics::NewProp_ClosingActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnEpilepsyPopUpClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnEpilepsyPopUpClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoginScreenBaseWidget, nullptr, "OnEpilepsyPopUpClosed", nullptr, nullptr, sizeof(SBZLoginScreenBaseWidget_eventOnEpilepsyPopUpClosed_Parms), Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnEpilepsyPopUpClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnEpilepsyPopUpClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnEpilepsyPopUpClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnEpilepsyPopUpClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnEpilepsyPopUpClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnEpilepsyPopUpClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnEULAPopUpClosed_Statics
	{
		struct SBZLoginScreenBaseWidget_eventOnEULAPopUpClosed_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnEULAPopUpClosed_Statics::NewProp_ClosingActionName = { "ClosingActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoginScreenBaseWidget_eventOnEULAPopUpClosed_Parms, ClosingActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnEULAPopUpClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnEULAPopUpClosed_Statics::NewProp_ClosingActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnEULAPopUpClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnEULAPopUpClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoginScreenBaseWidget, nullptr, "OnEULAPopUpClosed", nullptr, nullptr, sizeof(SBZLoginScreenBaseWidget_eventOnEULAPopUpClosed_Parms), Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnEULAPopUpClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnEULAPopUpClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnEULAPopUpClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnEULAPopUpClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnEULAPopUpClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnEULAPopUpClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnInitializeDone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnInitializeDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnInitializeDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoginScreenBaseWidget, nullptr, "OnInitializeDone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnInitializeDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnInitializeDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnInitializeDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnInitializeDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnLoginError_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnLoginError_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnLoginError_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoginScreenBaseWidget_eventOnLoginError_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnLoginError_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnLoginError_Statics::NewProp_ErrorMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnLoginError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnLoginError_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnLoginError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnLoginError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoginScreenBaseWidget, nullptr, "OnLoginError", nullptr, nullptr, sizeof(SBZLoginScreenBaseWidget_eventOnLoginError_Parms), Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnLoginError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnLoginError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnLoginError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnLoginError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnLoginError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnLoginError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnPrivacyPolicyChoice_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClosingActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnPrivacyPolicyChoice_Statics::NewProp_ClosingActionName = { "ClosingActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoginScreenBaseWidget_eventOnPrivacyPolicyChoice_Parms, ClosingActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnPrivacyPolicyChoice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnPrivacyPolicyChoice_Statics::NewProp_ClosingActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnPrivacyPolicyChoice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnPrivacyPolicyChoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoginScreenBaseWidget, nullptr, "OnPrivacyPolicyChoice", nullptr, nullptr, sizeof(SBZLoginScreenBaseWidget_eventOnPrivacyPolicyChoice_Parms), Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnPrivacyPolicyChoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnPrivacyPolicyChoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnPrivacyPolicyChoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnPrivacyPolicyChoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnPrivacyPolicyChoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnPrivacyPolicyChoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnPrivacyPopUpClosed_Statics
	{
		struct SBZLoginScreenBaseWidget_eventOnPrivacyPopUpClosed_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnPrivacyPopUpClosed_Statics::NewProp_ClosingActionName = { "ClosingActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoginScreenBaseWidget_eventOnPrivacyPopUpClosed_Parms, ClosingActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnPrivacyPopUpClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnPrivacyPopUpClosed_Statics::NewProp_ClosingActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnPrivacyPopUpClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnPrivacyPopUpClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoginScreenBaseWidget, nullptr, "OnPrivacyPopUpClosed", nullptr, nullptr, sizeof(SBZLoginScreenBaseWidget_eventOnPrivacyPopUpClosed_Parms), Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnPrivacyPopUpClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnPrivacyPopUpClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnPrivacyPopUpClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnPrivacyPopUpClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnPrivacyPopUpClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnPrivacyPopUpClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoadingCanvasPanelVisibility_Statics
	{
		struct SBZLoginScreenBaseWidget_eventSetLoadingCanvasPanelVisibility_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoadingCanvasPanelVisibility_Statics::NewProp_InVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoadingCanvasPanelVisibility_Statics::NewProp_InVisibility = { "InVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoginScreenBaseWidget_eventSetLoadingCanvasPanelVisibility_Parms, InVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoadingCanvasPanelVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoadingCanvasPanelVisibility_Statics::NewProp_InVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoadingCanvasPanelVisibility_Statics::NewProp_InVisibility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoadingCanvasPanelVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoadingCanvasPanelVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoginScreenBaseWidget, nullptr, "SetLoadingCanvasPanelVisibility", nullptr, nullptr, sizeof(SBZLoginScreenBaseWidget_eventSetLoadingCanvasPanelVisibility_Parms), Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoadingCanvasPanelVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoadingCanvasPanelVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoadingCanvasPanelVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoadingCanvasPanelVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoadingCanvasPanelVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoadingCanvasPanelVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoadingPanelVisibility_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InVisibility_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InVisibility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoadingPanelVisibility_Statics::NewProp_InVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoadingPanelVisibility_Statics::NewProp_InVisibility = { "InVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoginScreenBaseWidget_eventSetLoadingPanelVisibility_Parms, InVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoadingPanelVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoadingPanelVisibility_Statics::NewProp_InVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoadingPanelVisibility_Statics::NewProp_InVisibility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoadingPanelVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoadingPanelVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoginScreenBaseWidget, nullptr, "SetLoadingPanelVisibility", nullptr, nullptr, sizeof(SBZLoginScreenBaseWidget_eventSetLoadingPanelVisibility_Parms), Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoadingPanelVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoadingPanelVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoadingPanelVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoadingPanelVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoadingPanelVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoadingPanelVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoginPanelsVisibility_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InVisibility_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InVisibility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoginPanelsVisibility_Statics::NewProp_InVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoginPanelsVisibility_Statics::NewProp_InVisibility = { "InVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoginScreenBaseWidget_eventSetLoginPanelsVisibility_Parms, InVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoginPanelsVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoginPanelsVisibility_Statics::NewProp_InVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoginPanelsVisibility_Statics::NewProp_InVisibility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoginPanelsVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoginPanelsVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoginScreenBaseWidget, nullptr, "SetLoginPanelsVisibility", nullptr, nullptr, sizeof(SBZLoginScreenBaseWidget_eventSetLoginPanelsVisibility_Parms), Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoginPanelsVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoginPanelsVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoginPanelsVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoginPanelsVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoginPanelsVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoginPanelsVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoginScreenBaseWidget_ShowEpilepsyWarningPopup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoginScreenBaseWidget_ShowEpilepsyWarningPopup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoginScreenBaseWidget_ShowEpilepsyWarningPopup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoginScreenBaseWidget, nullptr, "ShowEpilepsyWarningPopup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoginScreenBaseWidget_ShowEpilepsyWarningPopup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenBaseWidget_ShowEpilepsyWarningPopup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoginScreenBaseWidget_ShowEpilepsyWarningPopup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoginScreenBaseWidget_ShowEpilepsyWarningPopup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoginScreenBaseWidget_ShowEULAPopup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoginScreenBaseWidget_ShowEULAPopup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoginScreenBaseWidget_ShowEULAPopup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoginScreenBaseWidget, nullptr, "ShowEULAPopup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoginScreenBaseWidget_ShowEULAPopup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenBaseWidget_ShowEULAPopup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoginScreenBaseWidget_ShowEULAPopup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoginScreenBaseWidget_ShowEULAPopup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoginScreenBaseWidget_ShowPrivacyPolicyPopup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoginScreenBaseWidget_ShowPrivacyPolicyPopup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoginScreenBaseWidget_ShowPrivacyPolicyPopup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoginScreenBaseWidget, nullptr, "ShowPrivacyPolicyPopup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoginScreenBaseWidget_ShowPrivacyPolicyPopup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenBaseWidget_ShowPrivacyPolicyPopup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoginScreenBaseWidget_ShowPrivacyPolicyPopup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoginScreenBaseWidget_ShowPrivacyPolicyPopup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoginScreenBaseWidget_WidgetReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoginScreenBaseWidget_WidgetReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoginScreenBaseWidget_WidgetReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoginScreenBaseWidget, nullptr, "WidgetReady", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoginScreenBaseWidget_WidgetReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenBaseWidget_WidgetReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoginScreenBaseWidget_WidgetReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoginScreenBaseWidget_WidgetReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZLoginScreenBaseWidget_NoRegister()
	{
		return USBZLoginScreenBaseWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrivacyPolicyContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrivacyPolicyContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EULAContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EULAContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EpilepsyWarningContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EpilepsyWarningContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TelemetryContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TelemetryContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameSenseContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameSenseContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrossplayContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CrossplayContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopUpAcceptAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PopUpAcceptAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopUpCancelAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PopUpCancelAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopUpOptInAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PopUpOptInAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopUpOptOutAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PopUpOptOutAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopUpData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PopUpData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvalidUserNameOrPassword_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InvalidUserNameOrPassword;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRememeberDetails_MetaData[];
#endif
		static void NewProp_bRememeberDetails_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRememeberDetails;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingThrobber_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadingThrobber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingCanvasPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadingCanvasPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoginScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoginScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogoP3_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LogoP3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickToStartButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickToStartButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickToStartOverlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickToStartOverlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsWidgetReady_MetaData[];
#endif
		static void NewProp_bIsWidgetReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsWidgetReady;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZInternetStatusWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZLoginScreenBaseWidget_GetLoadingCanvasPanel, "GetLoadingCanvasPanel" }, // 3880393781
		{ &Z_Construct_UFunction_USBZLoginScreenBaseWidget_InitializeDone, "InitializeDone" }, // 3089749526
		{ &Z_Construct_UFunction_USBZLoginScreenBaseWidget_InitializeLoginMenu, "InitializeLoginMenu" }, // 803934802
		{ &Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnEpilepsyPopUpClosed, "OnEpilepsyPopUpClosed" }, // 3172606583
		{ &Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnEULAPopUpClosed, "OnEULAPopUpClosed" }, // 1188350941
		{ &Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnInitializeDone, "OnInitializeDone" }, // 621972032
		{ &Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnLoginError, "OnLoginError" }, // 2234046387
		{ &Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnPrivacyPolicyChoice, "OnPrivacyPolicyChoice" }, // 3181552131
		{ &Z_Construct_UFunction_USBZLoginScreenBaseWidget_OnPrivacyPopUpClosed, "OnPrivacyPopUpClosed" }, // 4054721378
		{ &Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoadingCanvasPanelVisibility, "SetLoadingCanvasPanelVisibility" }, // 2681247100
		{ &Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoadingPanelVisibility, "SetLoadingPanelVisibility" }, // 3595579636
		{ &Z_Construct_UFunction_USBZLoginScreenBaseWidget_SetLoginPanelsVisibility, "SetLoginPanelsVisibility" }, // 3545832033
		{ &Z_Construct_UFunction_USBZLoginScreenBaseWidget_ShowEpilepsyWarningPopup, "ShowEpilepsyWarningPopup" }, // 4090264897
		{ &Z_Construct_UFunction_USBZLoginScreenBaseWidget_ShowEULAPopup, "ShowEULAPopup" }, // 267816372
		{ &Z_Construct_UFunction_USBZLoginScreenBaseWidget_ShowPrivacyPolicyPopup, "ShowPrivacyPolicyPopup" }, // 1274216191
		{ &Z_Construct_UFunction_USBZLoginScreenBaseWidget_WidgetReady, "WidgetReady" }, // 7229316
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLoginScreenBaseWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_PrivacyPolicyContent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoginScreenBaseWidget" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_PrivacyPolicyContent = { "PrivacyPolicyContent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoginScreenBaseWidget, PrivacyPolicyContent), Z_Construct_UScriptStruct_FSBZInfoPopupText, METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_PrivacyPolicyContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_PrivacyPolicyContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_EULAContent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoginScreenBaseWidget" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_EULAContent = { "EULAContent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoginScreenBaseWidget, EULAContent), Z_Construct_UScriptStruct_FSBZInfoPopupText, METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_EULAContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_EULAContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_EpilepsyWarningContent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoginScreenBaseWidget" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_EpilepsyWarningContent = { "EpilepsyWarningContent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoginScreenBaseWidget, EpilepsyWarningContent), Z_Construct_UScriptStruct_FSBZInfoPopupText, METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_EpilepsyWarningContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_EpilepsyWarningContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_TelemetryContent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoginScreenBaseWidget" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_TelemetryContent = { "TelemetryContent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoginScreenBaseWidget, TelemetryContent), Z_Construct_UScriptStruct_FSBZInfoPopupText, METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_TelemetryContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_TelemetryContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_GameSenseContent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoginScreenBaseWidget" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_GameSenseContent = { "GameSenseContent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoginScreenBaseWidget, GameSenseContent), Z_Construct_UScriptStruct_FSBZInfoPopupText, METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_GameSenseContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_GameSenseContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_CrossplayContent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoginScreenBaseWidget" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_CrossplayContent = { "CrossplayContent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoginScreenBaseWidget, CrossplayContent), Z_Construct_UScriptStruct_FSBZInfoPopupText, METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_CrossplayContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_CrossplayContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_PopUpAcceptAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoginScreenBaseWidget" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_PopUpAcceptAction = { "PopUpAcceptAction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoginScreenBaseWidget, PopUpAcceptAction), Z_Construct_UScriptStruct_FSBZButtonControlReference, METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_PopUpAcceptAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_PopUpAcceptAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_PopUpCancelAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoginScreenBaseWidget" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_PopUpCancelAction = { "PopUpCancelAction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoginScreenBaseWidget, PopUpCancelAction), Z_Construct_UScriptStruct_FSBZButtonControlReference, METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_PopUpCancelAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_PopUpCancelAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_PopUpOptInAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoginScreenBaseWidget" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_PopUpOptInAction = { "PopUpOptInAction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoginScreenBaseWidget, PopUpOptInAction), Z_Construct_UScriptStruct_FSBZButtonControlReference, METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_PopUpOptInAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_PopUpOptInAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_PopUpOptOutAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoginScreenBaseWidget" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_PopUpOptOutAction = { "PopUpOptOutAction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoginScreenBaseWidget, PopUpOptOutAction), Z_Construct_UScriptStruct_FSBZButtonControlReference, METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_PopUpOptOutAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_PopUpOptOutAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_PopUpData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoginScreenBaseWidget" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_PopUpData = { "PopUpData", nullptr, (EPropertyFlags)0x0020088000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoginScreenBaseWidget, PopUpData), Z_Construct_UScriptStruct_FSBZUIPopupData, METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_PopUpData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_PopUpData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_InvalidUserNameOrPassword_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoginScreenBaseWidget" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_InvalidUserNameOrPassword = { "InvalidUserNameOrPassword", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoginScreenBaseWidget, InvalidUserNameOrPassword), METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_InvalidUserNameOrPassword_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_InvalidUserNameOrPassword_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_bRememeberDetails_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoginScreenBaseWidget" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_bRememeberDetails_SetBit(void* Obj)
	{
		((USBZLoginScreenBaseWidget*)Obj)->bRememeberDetails = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_bRememeberDetails = { "bRememeberDetails", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZLoginScreenBaseWidget), &Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_bRememeberDetails_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_bRememeberDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_bRememeberDetails_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_LoadingThrobber_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoginScreenBaseWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_LoadingThrobber = { "LoadingThrobber", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoginScreenBaseWidget, LoadingThrobber), Z_Construct_UClass_UCircularThrobber_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_LoadingThrobber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_LoadingThrobber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_LoadingCanvasPanel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoginScreenBaseWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_LoadingCanvasPanel = { "LoadingCanvasPanel", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoginScreenBaseWidget, LoadingCanvasPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_LoadingCanvasPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_LoadingCanvasPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_LoginScreen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoginScreenBaseWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_LoginScreen = { "LoginScreen", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoginScreenBaseWidget, LoginScreen), Z_Construct_UClass_USBZLoginScreenWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_LoginScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_LoginScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_LogoP3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoginScreenBaseWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_LogoP3 = { "LogoP3", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoginScreenBaseWidget, LogoP3), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_LogoP3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_LogoP3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_ClickToStartButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoginScreenBaseWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_ClickToStartButton = { "ClickToStartButton", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoginScreenBaseWidget, ClickToStartButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_ClickToStartButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_ClickToStartButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_ClickToStartOverlay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoginScreenBaseWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_ClickToStartOverlay = { "ClickToStartOverlay", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoginScreenBaseWidget, ClickToStartOverlay), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_ClickToStartOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_ClickToStartOverlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_bIsWidgetReady_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoginScreenBaseWidget" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenBaseWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_bIsWidgetReady_SetBit(void* Obj)
	{
		((USBZLoginScreenBaseWidget*)Obj)->bIsWidgetReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_bIsWidgetReady = { "bIsWidgetReady", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZLoginScreenBaseWidget), &Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_bIsWidgetReady_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_bIsWidgetReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_bIsWidgetReady_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_PrivacyPolicyContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_EULAContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_EpilepsyWarningContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_TelemetryContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_GameSenseContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_CrossplayContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_PopUpAcceptAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_PopUpCancelAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_PopUpOptInAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_PopUpOptOutAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_PopUpData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_InvalidUserNameOrPassword,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_bRememeberDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_LoadingThrobber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_LoadingCanvasPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_LoginScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_LogoP3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_ClickToStartButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_ClickToStartOverlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::NewProp_bIsWidgetReady,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZLoginScreenBaseWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::ClassParams = {
		&USBZLoginScreenBaseWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZLoginScreenBaseWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZLoginScreenBaseWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZLoginScreenBaseWidget, 3299191661);
	template<> STARBREEZE_API UClass* StaticClass<USBZLoginScreenBaseWidget>()
	{
		return USBZLoginScreenBaseWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZLoginScreenBaseWidget(Z_Construct_UClass_USBZLoginScreenBaseWidget, &USBZLoginScreenBaseWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZLoginScreenBaseWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZLoginScreenBaseWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
