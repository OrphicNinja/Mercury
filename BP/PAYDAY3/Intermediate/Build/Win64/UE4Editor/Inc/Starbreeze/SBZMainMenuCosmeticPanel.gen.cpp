// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuCosmeticPanel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuCosmeticPanel() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCosmeticPanel_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCosmeticPanel();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCosmeticPanelInitParams();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsDataAsset_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnCosmeticButtonSelected__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnCosmeticButtonStateChanged__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnDefaultButtonPressed__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCosmeticItemButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuCosmeticPanel::execGiveKeyboardFocus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GiveKeyboardFocus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuCosmeticPanel::execInitializeCosmeticItemPanel)
	{
		P_GET_STRUCT_REF(FSBZCosmeticPanelInitParams,Z_Param_Out_InitParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeCosmeticItemPanel(Z_Param_Out_InitParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuCosmeticPanel::execNativeOnCosmeticItemButtonFocusedChanged)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InButton);
		P_GET_UBOOL(Z_Param_bIsFocused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnCosmeticItemButtonFocusedChanged(Z_Param_InButton,Z_Param_bIsFocused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuCosmeticPanel::execNativeOnCosmeticItemButtonHoverChanged)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InButton);
		P_GET_UBOOL(Z_Param_bIsHovered);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnCosmeticItemButtonHoverChanged(Z_Param_InButton,Z_Param_bIsHovered);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuCosmeticPanel::execNativeOnCosmeticItemButtonSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InSelectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnCosmeticItemButtonSelected(Z_Param_InSelectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuCosmeticPanel::execReleaseButtons)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseButtons();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuCosmeticPanel::execUpdateStackCount)
	{
		P_GET_OBJECT(USBZCosmeticsDataAsset,Z_Param_InCosmeticItem);
		P_GET_PROPERTY(FIntProperty,Z_Param_InNewStackCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateStackCount(Z_Param_InCosmeticItem,Z_Param_InNewStackCount);
		P_NATIVE_END;
	}
	void USBZMainMenuCosmeticPanel::StaticRegisterNativesUSBZMainMenuCosmeticPanel()
	{
		UClass* Class = USBZMainMenuCosmeticPanel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GiveKeyboardFocus", &USBZMainMenuCosmeticPanel::execGiveKeyboardFocus },
			{ "InitializeCosmeticItemPanel", &USBZMainMenuCosmeticPanel::execInitializeCosmeticItemPanel },
			{ "NativeOnCosmeticItemButtonFocusedChanged", &USBZMainMenuCosmeticPanel::execNativeOnCosmeticItemButtonFocusedChanged },
			{ "NativeOnCosmeticItemButtonHoverChanged", &USBZMainMenuCosmeticPanel::execNativeOnCosmeticItemButtonHoverChanged },
			{ "NativeOnCosmeticItemButtonSelected", &USBZMainMenuCosmeticPanel::execNativeOnCosmeticItemButtonSelected },
			{ "ReleaseButtons", &USBZMainMenuCosmeticPanel::execReleaseButtons },
			{ "UpdateStackCount", &USBZMainMenuCosmeticPanel::execUpdateStackCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuCosmeticPanel_GiveKeyboardFocus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmeticPanel_GiveKeyboardFocus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmeticPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCosmeticPanel_GiveKeyboardFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCosmeticPanel, nullptr, "GiveKeyboardFocus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmeticPanel_GiveKeyboardFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticPanel_GiveKeyboardFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCosmeticPanel_GiveKeyboardFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCosmeticPanel_GiveKeyboardFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCosmeticPanel_InitializeCosmeticItemPanel_Statics
	{
		struct SBZMainMenuCosmeticPanel_eventInitializeCosmeticItemPanel_Parms
		{
			FSBZCosmeticPanelInitParams InitParams;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitParams;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmeticPanel_InitializeCosmeticItemPanel_Statics::NewProp_InitParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuCosmeticPanel_InitializeCosmeticItemPanel_Statics::NewProp_InitParams = { "InitParams", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCosmeticPanel_eventInitializeCosmeticItemPanel_Parms, InitParams), Z_Construct_UScriptStruct_FSBZCosmeticPanelInitParams, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmeticPanel_InitializeCosmeticItemPanel_Statics::NewProp_InitParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticPanel_InitializeCosmeticItemPanel_Statics::NewProp_InitParams_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCosmeticPanel_InitializeCosmeticItemPanel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmeticPanel_InitializeCosmeticItemPanel_Statics::NewProp_InitParams,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmeticPanel_InitializeCosmeticItemPanel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmeticPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCosmeticPanel_InitializeCosmeticItemPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCosmeticPanel, nullptr, "InitializeCosmeticItemPanel", nullptr, nullptr, sizeof(SBZMainMenuCosmeticPanel_eventInitializeCosmeticItemPanel_Parms), Z_Construct_UFunction_USBZMainMenuCosmeticPanel_InitializeCosmeticItemPanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticPanel_InitializeCosmeticItemPanel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmeticPanel_InitializeCosmeticItemPanel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticPanel_InitializeCosmeticItemPanel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCosmeticPanel_InitializeCosmeticItemPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCosmeticPanel_InitializeCosmeticItemPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonFocusedChanged_Statics
	{
		struct SBZMainMenuCosmeticPanel_eventNativeOnCosmeticItemButtonFocusedChanged_Parms
		{
			USBZMenuButton* InButton;
			bool bIsFocused;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InButton;
		static void NewProp_bIsFocused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFocused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonFocusedChanged_Statics::NewProp_InButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonFocusedChanged_Statics::NewProp_InButton = { "InButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCosmeticPanel_eventNativeOnCosmeticItemButtonFocusedChanged_Parms, InButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonFocusedChanged_Statics::NewProp_InButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonFocusedChanged_Statics::NewProp_InButton_MetaData)) };
	void Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonFocusedChanged_Statics::NewProp_bIsFocused_SetBit(void* Obj)
	{
		((SBZMainMenuCosmeticPanel_eventNativeOnCosmeticItemButtonFocusedChanged_Parms*)Obj)->bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonFocusedChanged_Statics::NewProp_bIsFocused = { "bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuCosmeticPanel_eventNativeOnCosmeticItemButtonFocusedChanged_Parms), &Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonFocusedChanged_Statics::NewProp_bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonFocusedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonFocusedChanged_Statics::NewProp_InButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonFocusedChanged_Statics::NewProp_bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonFocusedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmeticPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonFocusedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCosmeticPanel, nullptr, "NativeOnCosmeticItemButtonFocusedChanged", nullptr, nullptr, sizeof(SBZMainMenuCosmeticPanel_eventNativeOnCosmeticItemButtonFocusedChanged_Parms), Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonFocusedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonFocusedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonFocusedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonFocusedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonFocusedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonFocusedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonHoverChanged_Statics
	{
		struct SBZMainMenuCosmeticPanel_eventNativeOnCosmeticItemButtonHoverChanged_Parms
		{
			USBZMenuButton* InButton;
			bool bIsHovered;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InButton;
		static void NewProp_bIsHovered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHovered;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonHoverChanged_Statics::NewProp_InButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonHoverChanged_Statics::NewProp_InButton = { "InButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCosmeticPanel_eventNativeOnCosmeticItemButtonHoverChanged_Parms, InButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonHoverChanged_Statics::NewProp_InButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonHoverChanged_Statics::NewProp_InButton_MetaData)) };
	void Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonHoverChanged_Statics::NewProp_bIsHovered_SetBit(void* Obj)
	{
		((SBZMainMenuCosmeticPanel_eventNativeOnCosmeticItemButtonHoverChanged_Parms*)Obj)->bIsHovered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonHoverChanged_Statics::NewProp_bIsHovered = { "bIsHovered", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuCosmeticPanel_eventNativeOnCosmeticItemButtonHoverChanged_Parms), &Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonHoverChanged_Statics::NewProp_bIsHovered_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonHoverChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonHoverChanged_Statics::NewProp_InButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonHoverChanged_Statics::NewProp_bIsHovered,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonHoverChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmeticPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonHoverChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCosmeticPanel, nullptr, "NativeOnCosmeticItemButtonHoverChanged", nullptr, nullptr, sizeof(SBZMainMenuCosmeticPanel_eventNativeOnCosmeticItemButtonHoverChanged_Parms), Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonHoverChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonHoverChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonHoverChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonHoverChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonHoverChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonHoverChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonSelected_Statics
	{
		struct SBZMainMenuCosmeticPanel_eventNativeOnCosmeticItemButtonSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonSelected_Statics::NewProp_InSelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonSelected_Statics::NewProp_InSelectedButton = { "InSelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCosmeticPanel_eventNativeOnCosmeticItemButtonSelected_Parms, InSelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonSelected_Statics::NewProp_InSelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonSelected_Statics::NewProp_InSelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonSelected_Statics::NewProp_InSelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmeticPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCosmeticPanel, nullptr, "NativeOnCosmeticItemButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuCosmeticPanel_eventNativeOnCosmeticItemButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCosmeticPanel_ReleaseButtons_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmeticPanel_ReleaseButtons_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmeticPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCosmeticPanel_ReleaseButtons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCosmeticPanel, nullptr, "ReleaseButtons", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmeticPanel_ReleaseButtons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticPanel_ReleaseButtons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCosmeticPanel_ReleaseButtons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCosmeticPanel_ReleaseButtons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCosmeticPanel_UpdateStackCount_Statics
	{
		struct SBZMainMenuCosmeticPanel_eventUpdateStackCount_Parms
		{
			const USBZCosmeticsDataAsset* InCosmeticItem;
			int32 InNewStackCount;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCosmeticItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCosmeticItem;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InNewStackCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmeticPanel_UpdateStackCount_Statics::NewProp_InCosmeticItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCosmeticPanel_UpdateStackCount_Statics::NewProp_InCosmeticItem = { "InCosmeticItem", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCosmeticPanel_eventUpdateStackCount_Parms, InCosmeticItem), Z_Construct_UClass_USBZCosmeticsDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmeticPanel_UpdateStackCount_Statics::NewProp_InCosmeticItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticPanel_UpdateStackCount_Statics::NewProp_InCosmeticItem_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuCosmeticPanel_UpdateStackCount_Statics::NewProp_InNewStackCount = { "InNewStackCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCosmeticPanel_eventUpdateStackCount_Parms, InNewStackCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCosmeticPanel_UpdateStackCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmeticPanel_UpdateStackCount_Statics::NewProp_InCosmeticItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCosmeticPanel_UpdateStackCount_Statics::NewProp_InNewStackCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCosmeticPanel_UpdateStackCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmeticPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCosmeticPanel_UpdateStackCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCosmeticPanel, nullptr, "UpdateStackCount", nullptr, nullptr, sizeof(SBZMainMenuCosmeticPanel_eventUpdateStackCount_Parms), Z_Construct_UFunction_USBZMainMenuCosmeticPanel_UpdateStackCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticPanel_UpdateStackCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCosmeticPanel_UpdateStackCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCosmeticPanel_UpdateStackCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCosmeticPanel_UpdateStackCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCosmeticPanel_UpdateStackCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuCosmeticPanel_NoRegister()
	{
		return USBZMainMenuCosmeticPanel::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_ButtonsContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_ButtonsContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCosmeticButtonSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCosmeticButtonSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCosmeticButtonFocusedChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCosmeticButtonFocusedChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCosmeticButtonHoveredChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCosmeticButtonHoveredChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCosmeticButtonDefaultSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCosmeticButtonDefaultSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CosmeticButtonMap_ValueProp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CosmeticButtonMap_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CosmeticButtonMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CosmeticButtonMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CosmeticButtonMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuCosmeticPanel_GiveKeyboardFocus, "GiveKeyboardFocus" }, // 968624436
		{ &Z_Construct_UFunction_USBZMainMenuCosmeticPanel_InitializeCosmeticItemPanel, "InitializeCosmeticItemPanel" }, // 3498765620
		{ &Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonFocusedChanged, "NativeOnCosmeticItemButtonFocusedChanged" }, // 69919860
		{ &Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonHoverChanged, "NativeOnCosmeticItemButtonHoverChanged" }, // 3141715591
		{ &Z_Construct_UFunction_USBZMainMenuCosmeticPanel_NativeOnCosmeticItemButtonSelected, "NativeOnCosmeticItemButtonSelected" }, // 347660860
		{ &Z_Construct_UFunction_USBZMainMenuCosmeticPanel_ReleaseButtons, "ReleaseButtons" }, // 4286495239
		{ &Z_Construct_UFunction_USBZMainMenuCosmeticPanel_UpdateStackCount, "UpdateStackCount" }, // 1592547042
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuCosmeticPanel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmeticPanel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_Panel_ButtonsContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCosmeticPanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmeticPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_Panel_ButtonsContainer = { "Panel_ButtonsContainer", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCosmeticPanel, Panel_ButtonsContainer), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_Panel_ButtonsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_Panel_ButtonsContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_OnCosmeticButtonSelected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCosmeticPanel" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmeticPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_OnCosmeticButtonSelected = { "OnCosmeticButtonSelected", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCosmeticPanel, OnCosmeticButtonSelected), Z_Construct_UDelegateFunction_Starbreeze_OnCosmeticButtonSelected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_OnCosmeticButtonSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_OnCosmeticButtonSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_OnCosmeticButtonFocusedChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCosmeticPanel" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmeticPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_OnCosmeticButtonFocusedChanged = { "OnCosmeticButtonFocusedChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCosmeticPanel, OnCosmeticButtonFocusedChanged), Z_Construct_UDelegateFunction_Starbreeze_OnCosmeticButtonStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_OnCosmeticButtonFocusedChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_OnCosmeticButtonFocusedChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_OnCosmeticButtonHoveredChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCosmeticPanel" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmeticPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_OnCosmeticButtonHoveredChanged = { "OnCosmeticButtonHoveredChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCosmeticPanel, OnCosmeticButtonHoveredChanged), Z_Construct_UDelegateFunction_Starbreeze_OnCosmeticButtonStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_OnCosmeticButtonHoveredChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_OnCosmeticButtonHoveredChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_OnCosmeticButtonDefaultSelected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCosmeticPanel" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmeticPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_OnCosmeticButtonDefaultSelected = { "OnCosmeticButtonDefaultSelected", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCosmeticPanel, OnCosmeticButtonDefaultSelected), Z_Construct_UDelegateFunction_Starbreeze_OnDefaultButtonPressed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_OnCosmeticButtonDefaultSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_OnCosmeticButtonDefaultSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_CosmeticButtonMap_ValueProp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCosmeticPanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmeticPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_CosmeticButtonMap_ValueProp = { "CosmeticButtonMap", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZMainMenuCosmeticItemButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_CosmeticButtonMap_ValueProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_CosmeticButtonMap_ValueProp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_CosmeticButtonMap_Key_KeyProp = { "CosmeticButtonMap_Key", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZCosmeticsDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_CosmeticButtonMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCosmeticPanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCosmeticPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_CosmeticButtonMap = { "CosmeticButtonMap", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCosmeticPanel, CosmeticButtonMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_CosmeticButtonMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_CosmeticButtonMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_Panel_ButtonsContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_OnCosmeticButtonSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_OnCosmeticButtonFocusedChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_OnCosmeticButtonHoveredChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_OnCosmeticButtonDefaultSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_CosmeticButtonMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_CosmeticButtonMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::NewProp_CosmeticButtonMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuCosmeticPanel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::ClassParams = {
		&USBZMainMenuCosmeticPanel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuCosmeticPanel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuCosmeticPanel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuCosmeticPanel, 4150993611);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuCosmeticPanel>()
	{
		return USBZMainMenuCosmeticPanel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuCosmeticPanel(Z_Construct_UClass_USBZMainMenuCosmeticPanel, &USBZMainMenuCosmeticPanel::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuCosmeticPanel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuCosmeticPanel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
