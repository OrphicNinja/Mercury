// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLoginScreenWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLoginScreenWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoginScreenWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoginScreenWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZLoginScreenWidget::execOnCreateAccountBrowserSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InSelectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCreateAccountBrowserSelected(Z_Param_InSelectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLoginScreenWidget::execOnWebPageClosed)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InFinalWebURL);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWebPageClosed(Z_Param_InFinalWebURL);
		P_NATIVE_END;
	}
	static FName NAME_USBZLoginScreenWidget_OnCreateAccountWindowClosed = FName(TEXT("OnCreateAccountWindowClosed"));
	void USBZLoginScreenWidget::OnCreateAccountWindowClosed(const FString& InLastURL)
	{
		SBZLoginScreenWidget_eventOnCreateAccountWindowClosed_Parms Parms;
		Parms.InLastURL=InLastURL;
		ProcessEvent(FindFunctionChecked(NAME_USBZLoginScreenWidget_OnCreateAccountWindowClosed),&Parms);
	}
	static FName NAME_USBZLoginScreenWidget_ShowLoginFailedMessage = FName(TEXT("ShowLoginFailedMessage"));
	void USBZLoginScreenWidget::ShowLoginFailedMessage()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZLoginScreenWidget_ShowLoginFailedMessage),NULL);
	}
	void USBZLoginScreenWidget::StaticRegisterNativesUSBZLoginScreenWidget()
	{
		UClass* Class = USBZLoginScreenWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCreateAccountBrowserSelected", &USBZLoginScreenWidget::execOnCreateAccountBrowserSelected },
			{ "OnWebPageClosed", &USBZLoginScreenWidget::execOnWebPageClosed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZLoginScreenWidget_OnCreateAccountBrowserSelected_Statics
	{
		struct SBZLoginScreenWidget_eventOnCreateAccountBrowserSelected_Parms
		{
			USBZMenuButton* InSelectedButton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSelectedButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSelectedButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoginScreenWidget_OnCreateAccountBrowserSelected_Statics::NewProp_InSelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLoginScreenWidget_OnCreateAccountBrowserSelected_Statics::NewProp_InSelectedButton = { "InSelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoginScreenWidget_eventOnCreateAccountBrowserSelected_Parms, InSelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLoginScreenWidget_OnCreateAccountBrowserSelected_Statics::NewProp_InSelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenWidget_OnCreateAccountBrowserSelected_Statics::NewProp_InSelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoginScreenWidget_OnCreateAccountBrowserSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoginScreenWidget_OnCreateAccountBrowserSelected_Statics::NewProp_InSelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoginScreenWidget_OnCreateAccountBrowserSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoginScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoginScreenWidget_OnCreateAccountBrowserSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoginScreenWidget, nullptr, "OnCreateAccountBrowserSelected", nullptr, nullptr, sizeof(SBZLoginScreenWidget_eventOnCreateAccountBrowserSelected_Parms), Z_Construct_UFunction_USBZLoginScreenWidget_OnCreateAccountBrowserSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenWidget_OnCreateAccountBrowserSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoginScreenWidget_OnCreateAccountBrowserSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenWidget_OnCreateAccountBrowserSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoginScreenWidget_OnCreateAccountBrowserSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoginScreenWidget_OnCreateAccountBrowserSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoginScreenWidget_OnCreateAccountWindowClosed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLastURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InLastURL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoginScreenWidget_OnCreateAccountWindowClosed_Statics::NewProp_InLastURL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZLoginScreenWidget_OnCreateAccountWindowClosed_Statics::NewProp_InLastURL = { "InLastURL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoginScreenWidget_eventOnCreateAccountWindowClosed_Parms, InLastURL), METADATA_PARAMS(Z_Construct_UFunction_USBZLoginScreenWidget_OnCreateAccountWindowClosed_Statics::NewProp_InLastURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenWidget_OnCreateAccountWindowClosed_Statics::NewProp_InLastURL_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoginScreenWidget_OnCreateAccountWindowClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoginScreenWidget_OnCreateAccountWindowClosed_Statics::NewProp_InLastURL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoginScreenWidget_OnCreateAccountWindowClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoginScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoginScreenWidget_OnCreateAccountWindowClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoginScreenWidget, nullptr, "OnCreateAccountWindowClosed", nullptr, nullptr, sizeof(SBZLoginScreenWidget_eventOnCreateAccountWindowClosed_Parms), Z_Construct_UFunction_USBZLoginScreenWidget_OnCreateAccountWindowClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenWidget_OnCreateAccountWindowClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoginScreenWidget_OnCreateAccountWindowClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenWidget_OnCreateAccountWindowClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoginScreenWidget_OnCreateAccountWindowClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoginScreenWidget_OnCreateAccountWindowClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoginScreenWidget_OnWebPageClosed_Statics
	{
		struct SBZLoginScreenWidget_eventOnWebPageClosed_Parms
		{
			FString InFinalWebURL;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFinalWebURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFinalWebURL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoginScreenWidget_OnWebPageClosed_Statics::NewProp_InFinalWebURL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZLoginScreenWidget_OnWebPageClosed_Statics::NewProp_InFinalWebURL = { "InFinalWebURL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoginScreenWidget_eventOnWebPageClosed_Parms, InFinalWebURL), METADATA_PARAMS(Z_Construct_UFunction_USBZLoginScreenWidget_OnWebPageClosed_Statics::NewProp_InFinalWebURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenWidget_OnWebPageClosed_Statics::NewProp_InFinalWebURL_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoginScreenWidget_OnWebPageClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoginScreenWidget_OnWebPageClosed_Statics::NewProp_InFinalWebURL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoginScreenWidget_OnWebPageClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoginScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoginScreenWidget_OnWebPageClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoginScreenWidget, nullptr, "OnWebPageClosed", nullptr, nullptr, sizeof(SBZLoginScreenWidget_eventOnWebPageClosed_Parms), Z_Construct_UFunction_USBZLoginScreenWidget_OnWebPageClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenWidget_OnWebPageClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoginScreenWidget_OnWebPageClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenWidget_OnWebPageClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoginScreenWidget_OnWebPageClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoginScreenWidget_OnWebPageClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoginScreenWidget_ShowLoginFailedMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoginScreenWidget_ShowLoginFailedMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoginScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoginScreenWidget_ShowLoginFailedMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoginScreenWidget, nullptr, "ShowLoginFailedMessage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoginScreenWidget_ShowLoginFailedMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenWidget_ShowLoginFailedMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoginScreenWidget_ShowLoginFailedMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoginScreenWidget_ShowLoginFailedMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZLoginScreenWidget_NoRegister()
	{
		return USBZLoginScreenWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZLoginScreenWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProdAccountCreateURLGameSense_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProdAccountCreateURLGameSense;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DevAccountCreateURLGameSense_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DevAccountCreateURLGameSense;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProdAccountCreateURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProdAccountCreateURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DevAccountCreateURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DevAccountCreateURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldHideCursor_MetaData[];
#endif
		static void NewProp_bShouldHideCursor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldHideCursor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowCloseButton_MetaData[];
#endif
		static void NewProp_bShowCloseButton_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowCloseButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_CreateAccountWebBrowser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_CreateAccountWebBrowser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_PlatformName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text_PlatformName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_PlatformSprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image_PlatformSprite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZLoginScreenWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZLoginScreenWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZLoginScreenWidget_OnCreateAccountBrowserSelected, "OnCreateAccountBrowserSelected" }, // 2926498082
		{ &Z_Construct_UFunction_USBZLoginScreenWidget_OnCreateAccountWindowClosed, "OnCreateAccountWindowClosed" }, // 1974392444
		{ &Z_Construct_UFunction_USBZLoginScreenWidget_OnWebPageClosed, "OnWebPageClosed" }, // 846979353
		{ &Z_Construct_UFunction_USBZLoginScreenWidget_ShowLoginFailedMessage, "ShowLoginFailedMessage" }, // 941254526
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLoginScreenWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_ProdAccountCreateURLGameSense_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoginScreenWidget" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_ProdAccountCreateURLGameSense = { "ProdAccountCreateURLGameSense", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoginScreenWidget, ProdAccountCreateURLGameSense), METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_ProdAccountCreateURLGameSense_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_ProdAccountCreateURLGameSense_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_DevAccountCreateURLGameSense_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoginScreenWidget" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_DevAccountCreateURLGameSense = { "DevAccountCreateURLGameSense", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoginScreenWidget, DevAccountCreateURLGameSense), METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_DevAccountCreateURLGameSense_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_DevAccountCreateURLGameSense_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_ProdAccountCreateURL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoginScreenWidget" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_ProdAccountCreateURL = { "ProdAccountCreateURL", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoginScreenWidget, ProdAccountCreateURL), METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_ProdAccountCreateURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_ProdAccountCreateURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_DevAccountCreateURL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoginScreenWidget" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_DevAccountCreateURL = { "DevAccountCreateURL", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoginScreenWidget, DevAccountCreateURL), METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_DevAccountCreateURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_DevAccountCreateURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_bShouldHideCursor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoginScreenWidget" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_bShouldHideCursor_SetBit(void* Obj)
	{
		((USBZLoginScreenWidget*)Obj)->bShouldHideCursor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_bShouldHideCursor = { "bShouldHideCursor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZLoginScreenWidget), &Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_bShouldHideCursor_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_bShouldHideCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_bShouldHideCursor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_bShowCloseButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoginScreenWidget" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_bShowCloseButton_SetBit(void* Obj)
	{
		((USBZLoginScreenWidget*)Obj)->bShowCloseButton = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_bShowCloseButton = { "bShowCloseButton", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZLoginScreenWidget), &Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_bShowCloseButton_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_bShowCloseButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_bShowCloseButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_Button_CreateAccountWebBrowser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoginScreenWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_Button_CreateAccountWebBrowser = { "Button_CreateAccountWebBrowser", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoginScreenWidget, Button_CreateAccountWebBrowser), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_Button_CreateAccountWebBrowser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_Button_CreateAccountWebBrowser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_Text_PlatformName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoginScreenWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_Text_PlatformName = { "Text_PlatformName", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoginScreenWidget, Text_PlatformName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_Text_PlatformName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_Text_PlatformName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_Image_PlatformSprite_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoginScreenWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_Image_PlatformSprite = { "Image_PlatformSprite", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoginScreenWidget, Image_PlatformSprite), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_Image_PlatformSprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_Image_PlatformSprite_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZLoginScreenWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_ProdAccountCreateURLGameSense,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_DevAccountCreateURLGameSense,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_ProdAccountCreateURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_DevAccountCreateURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_bShouldHideCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_bShowCloseButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_Button_CreateAccountWebBrowser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_Text_PlatformName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoginScreenWidget_Statics::NewProp_Image_PlatformSprite,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZLoginScreenWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZLoginScreenWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZLoginScreenWidget_Statics::ClassParams = {
		&USBZLoginScreenWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZLoginScreenWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZLoginScreenWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZLoginScreenWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZLoginScreenWidget, 4211711171);
	template<> STARBREEZE_API UClass* StaticClass<USBZLoginScreenWidget>()
	{
		return USBZLoginScreenWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZLoginScreenWidget(Z_Construct_UClass_USBZLoginScreenWidget, &USBZLoginScreenWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZLoginScreenWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZLoginScreenWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
