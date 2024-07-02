// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMenuButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMenuButton() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnMenuButtonStateChanged__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnMenuButtonSelected__DelegateSignature();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMenuButton::execAlternativeSelectButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AlternativeSelectButton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMenuButton::execNativeOnAlternativeSelectionInputPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnAlternativeSelectionInputPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMenuButton::execNativeOnSelectionInputPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnSelectionInputPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMenuButton::execSelectButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectButton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMenuButton::execSetButtonDisabled)
	{
		P_GET_UBOOL(Z_Param_bInIsDisabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetButtonDisabled(Z_Param_bInIsDisabled);
		P_NATIVE_END;
	}
	static FName NAME_USBZMenuButton_ButtonAlternativeSelected = FName(TEXT("ButtonAlternativeSelected"));
	void USBZMenuButton::ButtonAlternativeSelected()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMenuButton_ButtonAlternativeSelected),NULL);
	}
	static FName NAME_USBZMenuButton_ButtonDisabledChanged = FName(TEXT("ButtonDisabledChanged"));
	void USBZMenuButton::ButtonDisabledChanged(bool bInIsDisabled)
	{
		SBZMenuButton_eventButtonDisabledChanged_Parms Parms;
		Parms.bInIsDisabled=bInIsDisabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMenuButton_ButtonDisabledChanged),&Parms);
	}
	static FName NAME_USBZMenuButton_ButtonFocusedChanged = FName(TEXT("ButtonFocusedChanged"));
	void USBZMenuButton::ButtonFocusedChanged(bool bInHasFocus)
	{
		SBZMenuButton_eventButtonFocusedChanged_Parms Parms;
		Parms.bInHasFocus=bInHasFocus ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMenuButton_ButtonFocusedChanged),&Parms);
	}
	static FName NAME_USBZMenuButton_ButtonHoveredChanged = FName(TEXT("ButtonHoveredChanged"));
	void USBZMenuButton::ButtonHoveredChanged(bool bInIsHovered)
	{
		SBZMenuButton_eventButtonHoveredChanged_Parms Parms;
		Parms.bInIsHovered=bInIsHovered ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMenuButton_ButtonHoveredChanged),&Parms);
	}
	static FName NAME_USBZMenuButton_ButtonSelected = FName(TEXT("ButtonSelected"));
	void USBZMenuButton::ButtonSelected()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMenuButton_ButtonSelected),NULL);
	}
	static FName NAME_USBZMenuButton_DisabledButtonAlternativeSelected = FName(TEXT("DisabledButtonAlternativeSelected"));
	void USBZMenuButton::DisabledButtonAlternativeSelected()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMenuButton_DisabledButtonAlternativeSelected),NULL);
	}
	static FName NAME_USBZMenuButton_DisabledButtonSelected = FName(TEXT("DisabledButtonSelected"));
	void USBZMenuButton::DisabledButtonSelected()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMenuButton_DisabledButtonSelected),NULL);
	}
	void USBZMenuButton::StaticRegisterNativesUSBZMenuButton()
	{
		UClass* Class = USBZMenuButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AlternativeSelectButton", &USBZMenuButton::execAlternativeSelectButton },
			{ "NativeOnAlternativeSelectionInputPressed", &USBZMenuButton::execNativeOnAlternativeSelectionInputPressed },
			{ "NativeOnSelectionInputPressed", &USBZMenuButton::execNativeOnSelectionInputPressed },
			{ "SelectButton", &USBZMenuButton::execSelectButton },
			{ "SetButtonDisabled", &USBZMenuButton::execSetButtonDisabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMenuButton_AlternativeSelectButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuButton_AlternativeSelectButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuButton_AlternativeSelectButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuButton, nullptr, "AlternativeSelectButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuButton_AlternativeSelectButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuButton_AlternativeSelectButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuButton_AlternativeSelectButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuButton_AlternativeSelectButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuButton_ButtonAlternativeSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuButton_ButtonAlternativeSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuButton_ButtonAlternativeSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuButton, nullptr, "ButtonAlternativeSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuButton_ButtonAlternativeSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuButton_ButtonAlternativeSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuButton_ButtonAlternativeSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuButton_ButtonAlternativeSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuButton_ButtonDisabledChanged_Statics
	{
		static void NewProp_bInIsDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsDisabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMenuButton_ButtonDisabledChanged_Statics::NewProp_bInIsDisabled_SetBit(void* Obj)
	{
		((SBZMenuButton_eventButtonDisabledChanged_Parms*)Obj)->bInIsDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMenuButton_ButtonDisabledChanged_Statics::NewProp_bInIsDisabled = { "bInIsDisabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMenuButton_eventButtonDisabledChanged_Parms), &Z_Construct_UFunction_USBZMenuButton_ButtonDisabledChanged_Statics::NewProp_bInIsDisabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMenuButton_ButtonDisabledChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMenuButton_ButtonDisabledChanged_Statics::NewProp_bInIsDisabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuButton_ButtonDisabledChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuButton_ButtonDisabledChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuButton, nullptr, "ButtonDisabledChanged", nullptr, nullptr, sizeof(SBZMenuButton_eventButtonDisabledChanged_Parms), Z_Construct_UFunction_USBZMenuButton_ButtonDisabledChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuButton_ButtonDisabledChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuButton_ButtonDisabledChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuButton_ButtonDisabledChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuButton_ButtonDisabledChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuButton_ButtonDisabledChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuButton_ButtonFocusedChanged_Statics
	{
		static void NewProp_bInHasFocus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInHasFocus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMenuButton_ButtonFocusedChanged_Statics::NewProp_bInHasFocus_SetBit(void* Obj)
	{
		((SBZMenuButton_eventButtonFocusedChanged_Parms*)Obj)->bInHasFocus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMenuButton_ButtonFocusedChanged_Statics::NewProp_bInHasFocus = { "bInHasFocus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMenuButton_eventButtonFocusedChanged_Parms), &Z_Construct_UFunction_USBZMenuButton_ButtonFocusedChanged_Statics::NewProp_bInHasFocus_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMenuButton_ButtonFocusedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMenuButton_ButtonFocusedChanged_Statics::NewProp_bInHasFocus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuButton_ButtonFocusedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuButton_ButtonFocusedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuButton, nullptr, "ButtonFocusedChanged", nullptr, nullptr, sizeof(SBZMenuButton_eventButtonFocusedChanged_Parms), Z_Construct_UFunction_USBZMenuButton_ButtonFocusedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuButton_ButtonFocusedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuButton_ButtonFocusedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuButton_ButtonFocusedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuButton_ButtonFocusedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuButton_ButtonFocusedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuButton_ButtonHoveredChanged_Statics
	{
		static void NewProp_bInIsHovered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsHovered;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMenuButton_ButtonHoveredChanged_Statics::NewProp_bInIsHovered_SetBit(void* Obj)
	{
		((SBZMenuButton_eventButtonHoveredChanged_Parms*)Obj)->bInIsHovered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMenuButton_ButtonHoveredChanged_Statics::NewProp_bInIsHovered = { "bInIsHovered", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMenuButton_eventButtonHoveredChanged_Parms), &Z_Construct_UFunction_USBZMenuButton_ButtonHoveredChanged_Statics::NewProp_bInIsHovered_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMenuButton_ButtonHoveredChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMenuButton_ButtonHoveredChanged_Statics::NewProp_bInIsHovered,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuButton_ButtonHoveredChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuButton_ButtonHoveredChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuButton, nullptr, "ButtonHoveredChanged", nullptr, nullptr, sizeof(SBZMenuButton_eventButtonHoveredChanged_Parms), Z_Construct_UFunction_USBZMenuButton_ButtonHoveredChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuButton_ButtonHoveredChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuButton_ButtonHoveredChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuButton_ButtonHoveredChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuButton_ButtonHoveredChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuButton_ButtonHoveredChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuButton_ButtonSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuButton_ButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuButton_ButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuButton, nullptr, "ButtonSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuButton_ButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuButton_ButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuButton_ButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuButton_ButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuButton_DisabledButtonAlternativeSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuButton_DisabledButtonAlternativeSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuButton_DisabledButtonAlternativeSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuButton, nullptr, "DisabledButtonAlternativeSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuButton_DisabledButtonAlternativeSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuButton_DisabledButtonAlternativeSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuButton_DisabledButtonAlternativeSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuButton_DisabledButtonAlternativeSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuButton_DisabledButtonSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuButton_DisabledButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuButton_DisabledButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuButton, nullptr, "DisabledButtonSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuButton_DisabledButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuButton_DisabledButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuButton_DisabledButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuButton_DisabledButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuButton_NativeOnAlternativeSelectionInputPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuButton_NativeOnAlternativeSelectionInputPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuButton_NativeOnAlternativeSelectionInputPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuButton, nullptr, "NativeOnAlternativeSelectionInputPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuButton_NativeOnAlternativeSelectionInputPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuButton_NativeOnAlternativeSelectionInputPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuButton_NativeOnAlternativeSelectionInputPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuButton_NativeOnAlternativeSelectionInputPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuButton_NativeOnSelectionInputPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuButton_NativeOnSelectionInputPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuButton_NativeOnSelectionInputPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuButton, nullptr, "NativeOnSelectionInputPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuButton_NativeOnSelectionInputPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuButton_NativeOnSelectionInputPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuButton_NativeOnSelectionInputPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuButton_NativeOnSelectionInputPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuButton_SelectButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuButton_SelectButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuButton_SelectButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuButton, nullptr, "SelectButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuButton_SelectButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuButton_SelectButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuButton_SelectButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuButton_SelectButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuButton_SetButtonDisabled_Statics
	{
		struct SBZMenuButton_eventSetButtonDisabled_Parms
		{
			bool bInIsDisabled;
		};
		static void NewProp_bInIsDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsDisabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMenuButton_SetButtonDisabled_Statics::NewProp_bInIsDisabled_SetBit(void* Obj)
	{
		((SBZMenuButton_eventSetButtonDisabled_Parms*)Obj)->bInIsDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMenuButton_SetButtonDisabled_Statics::NewProp_bInIsDisabled = { "bInIsDisabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMenuButton_eventSetButtonDisabled_Parms), &Z_Construct_UFunction_USBZMenuButton_SetButtonDisabled_Statics::NewProp_bInIsDisabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMenuButton_SetButtonDisabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMenuButton_SetButtonDisabled_Statics::NewProp_bInIsDisabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuButton_SetButtonDisabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuButton_SetButtonDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuButton, nullptr, "SetButtonDisabled", nullptr, nullptr, sizeof(SBZMenuButton_eventSetButtonDisabled_Parms), Z_Construct_UFunction_USBZMenuButton_SetButtonDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuButton_SetButtonDisabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuButton_SetButtonDisabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuButton_SetButtonDisabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuButton_SetButtonDisabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuButton_SetButtonDisabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMenuButton_NoRegister()
	{
		return USBZMenuButton::StaticClass();
	}
	struct Z_Construct_UClass_USBZMenuButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionActionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SelectionActionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnButtonFocusedChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonFocusedChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnButtonHoveredChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonHoveredChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnButtonDisabledChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonDisabledChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnButtonSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDisabledButtonSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDisabledButtonSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnButtonAlternativeSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonAlternativeSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDisabledButtonAlternativeSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDisabledButtonAlternativeSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlternativeActionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AlternativeActionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlternativeActionMouseButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlternativeActionMouseButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusedAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FocusedAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHoverGivesFocus_MetaData[];
#endif
		static void NewProp_bHoverGivesFocus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHoverGivesFocus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSelectGivesFocus_MetaData[];
#endif
		static void NewProp_bSelectGivesFocus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelectGivesFocus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlternativeGivesFocus_MetaData[];
#endif
		static void NewProp_bAlternativeGivesFocus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlternativeGivesFocus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldTriggerLastFocused_MetaData[];
#endif
		static void NewProp_bShouldTriggerLastFocused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldTriggerLastFocused;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDisabled_MetaData[];
#endif
		static void NewProp_bIsDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDisabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMenuButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMenuButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMenuButton_AlternativeSelectButton, "AlternativeSelectButton" }, // 527162853
		{ &Z_Construct_UFunction_USBZMenuButton_ButtonAlternativeSelected, "ButtonAlternativeSelected" }, // 3080502038
		{ &Z_Construct_UFunction_USBZMenuButton_ButtonDisabledChanged, "ButtonDisabledChanged" }, // 750331490
		{ &Z_Construct_UFunction_USBZMenuButton_ButtonFocusedChanged, "ButtonFocusedChanged" }, // 1964552977
		{ &Z_Construct_UFunction_USBZMenuButton_ButtonHoveredChanged, "ButtonHoveredChanged" }, // 2351518363
		{ &Z_Construct_UFunction_USBZMenuButton_ButtonSelected, "ButtonSelected" }, // 700483010
		{ &Z_Construct_UFunction_USBZMenuButton_DisabledButtonAlternativeSelected, "DisabledButtonAlternativeSelected" }, // 779174045
		{ &Z_Construct_UFunction_USBZMenuButton_DisabledButtonSelected, "DisabledButtonSelected" }, // 2371037562
		{ &Z_Construct_UFunction_USBZMenuButton_NativeOnAlternativeSelectionInputPressed, "NativeOnAlternativeSelectionInputPressed" }, // 3788389325
		{ &Z_Construct_UFunction_USBZMenuButton_NativeOnSelectionInputPressed, "NativeOnSelectionInputPressed" }, // 2034763354
		{ &Z_Construct_UFunction_USBZMenuButton_SelectButton, "SelectButton" }, // 3855440720
		{ &Z_Construct_UFunction_USBZMenuButton_SetButtonDisabled, "SetButtonDisabled" }, // 808110592
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMenuButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMenuButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuButton_Statics::NewProp_SelectionActionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuButton" },
		{ "ModuleRelativePath", "Public/SBZMenuButton.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZMenuButton_Statics::NewProp_SelectionActionName = { "SelectionActionName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMenuButton, SelectionActionName), METADATA_PARAMS(Z_Construct_UClass_USBZMenuButton_Statics::NewProp_SelectionActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuButton_Statics::NewProp_SelectionActionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnButtonFocusedChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuButton" },
		{ "ModuleRelativePath", "Public/SBZMenuButton.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnButtonFocusedChanged = { "OnButtonFocusedChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMenuButton, OnButtonFocusedChanged), Z_Construct_UDelegateFunction_Starbreeze_OnMenuButtonStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnButtonFocusedChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnButtonFocusedChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnButtonHoveredChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuButton" },
		{ "ModuleRelativePath", "Public/SBZMenuButton.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnButtonHoveredChanged = { "OnButtonHoveredChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMenuButton, OnButtonHoveredChanged), Z_Construct_UDelegateFunction_Starbreeze_OnMenuButtonStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnButtonHoveredChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnButtonHoveredChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnButtonDisabledChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuButton" },
		{ "ModuleRelativePath", "Public/SBZMenuButton.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnButtonDisabledChanged = { "OnButtonDisabledChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMenuButton, OnButtonDisabledChanged), Z_Construct_UDelegateFunction_Starbreeze_OnMenuButtonStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnButtonDisabledChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnButtonDisabledChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnButtonSelected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuButton" },
		{ "ModuleRelativePath", "Public/SBZMenuButton.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnButtonSelected = { "OnButtonSelected", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMenuButton, OnButtonSelected), Z_Construct_UDelegateFunction_Starbreeze_OnMenuButtonSelected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnButtonSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnButtonSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnDisabledButtonSelected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuButton" },
		{ "ModuleRelativePath", "Public/SBZMenuButton.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnDisabledButtonSelected = { "OnDisabledButtonSelected", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMenuButton, OnDisabledButtonSelected), Z_Construct_UDelegateFunction_Starbreeze_OnMenuButtonSelected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnDisabledButtonSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnDisabledButtonSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnButtonAlternativeSelected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuButton" },
		{ "ModuleRelativePath", "Public/SBZMenuButton.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnButtonAlternativeSelected = { "OnButtonAlternativeSelected", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMenuButton, OnButtonAlternativeSelected), Z_Construct_UDelegateFunction_Starbreeze_OnMenuButtonSelected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnButtonAlternativeSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnButtonAlternativeSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnDisabledButtonAlternativeSelected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuButton" },
		{ "ModuleRelativePath", "Public/SBZMenuButton.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnDisabledButtonAlternativeSelected = { "OnDisabledButtonAlternativeSelected", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMenuButton, OnDisabledButtonAlternativeSelected), Z_Construct_UDelegateFunction_Starbreeze_OnMenuButtonSelected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnDisabledButtonAlternativeSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnDisabledButtonAlternativeSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuButton_Statics::NewProp_AlternativeActionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuButton" },
		{ "ModuleRelativePath", "Public/SBZMenuButton.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZMenuButton_Statics::NewProp_AlternativeActionName = { "AlternativeActionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMenuButton, AlternativeActionName), METADATA_PARAMS(Z_Construct_UClass_USBZMenuButton_Statics::NewProp_AlternativeActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuButton_Statics::NewProp_AlternativeActionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuButton_Statics::NewProp_AlternativeActionMouseButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuButton" },
		{ "ModuleRelativePath", "Public/SBZMenuButton.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMenuButton_Statics::NewProp_AlternativeActionMouseButton = { "AlternativeActionMouseButton", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMenuButton, AlternativeActionMouseButton), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_USBZMenuButton_Statics::NewProp_AlternativeActionMouseButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuButton_Statics::NewProp_AlternativeActionMouseButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuButton_Statics::NewProp_FocusedAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuButton" },
		{ "ModuleRelativePath", "Public/SBZMenuButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMenuButton_Statics::NewProp_FocusedAudioEvent = { "FocusedAudioEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMenuButton, FocusedAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMenuButton_Statics::NewProp_FocusedAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuButton_Statics::NewProp_FocusedAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bHoverGivesFocus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuButton" },
		{ "ModuleRelativePath", "Public/SBZMenuButton.h" },
	};
#endif
	void Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bHoverGivesFocus_SetBit(void* Obj)
	{
		((USBZMenuButton*)Obj)->bHoverGivesFocus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bHoverGivesFocus = { "bHoverGivesFocus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZMenuButton), &Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bHoverGivesFocus_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bHoverGivesFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bHoverGivesFocus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bSelectGivesFocus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuButton" },
		{ "ModuleRelativePath", "Public/SBZMenuButton.h" },
	};
#endif
	void Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bSelectGivesFocus_SetBit(void* Obj)
	{
		((USBZMenuButton*)Obj)->bSelectGivesFocus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bSelectGivesFocus = { "bSelectGivesFocus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZMenuButton), &Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bSelectGivesFocus_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bSelectGivesFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bSelectGivesFocus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bAlternativeGivesFocus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuButton" },
		{ "ModuleRelativePath", "Public/SBZMenuButton.h" },
	};
#endif
	void Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bAlternativeGivesFocus_SetBit(void* Obj)
	{
		((USBZMenuButton*)Obj)->bAlternativeGivesFocus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bAlternativeGivesFocus = { "bAlternativeGivesFocus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZMenuButton), &Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bAlternativeGivesFocus_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bAlternativeGivesFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bAlternativeGivesFocus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bShouldTriggerLastFocused_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuButton" },
		{ "ModuleRelativePath", "Public/SBZMenuButton.h" },
	};
#endif
	void Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bShouldTriggerLastFocused_SetBit(void* Obj)
	{
		((USBZMenuButton*)Obj)->bShouldTriggerLastFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bShouldTriggerLastFocused = { "bShouldTriggerLastFocused", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZMenuButton), &Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bShouldTriggerLastFocused_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bShouldTriggerLastFocused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bShouldTriggerLastFocused_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bIsDisabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuButton" },
		{ "ModuleRelativePath", "Public/SBZMenuButton.h" },
	};
#endif
	void Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bIsDisabled_SetBit(void* Obj)
	{
		((USBZMenuButton*)Obj)->bIsDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bIsDisabled = { "bIsDisabled", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZMenuButton), &Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bIsDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bIsDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bIsDisabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMenuButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuButton_Statics::NewProp_SelectionActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnButtonFocusedChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnButtonHoveredChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnButtonDisabledChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnButtonSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnDisabledButtonSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnButtonAlternativeSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuButton_Statics::NewProp_OnDisabledButtonAlternativeSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuButton_Statics::NewProp_AlternativeActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuButton_Statics::NewProp_AlternativeActionMouseButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuButton_Statics::NewProp_FocusedAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bHoverGivesFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bSelectGivesFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bAlternativeGivesFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bShouldTriggerLastFocused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuButton_Statics::NewProp_bIsDisabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMenuButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMenuButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMenuButton_Statics::ClassParams = {
		&USBZMenuButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMenuButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMenuButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMenuButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMenuButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMenuButton, 978016503);
	template<> STARBREEZE_API UClass* StaticClass<USBZMenuButton>()
	{
		return USBZMenuButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMenuButton(Z_Construct_UClass_USBZMenuButton, &USBZMenuButton::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMenuButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMenuButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
