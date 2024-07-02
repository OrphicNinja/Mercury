// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuCrimeNetTutorial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuCrimeNetTutorial() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCrimeNetTutorial();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackScreenWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuCrimeNetTutorial::execHandlePartyChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePartyChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuCrimeNetTutorial::execNativeOnDisabledHeistButtonSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InSelectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnDisabledHeistButtonSelected(Z_Param_InSelectedButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuCrimeNetTutorial::execNativeOnHeistButtonFocused)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InFocusedButton);
		P_GET_UBOOL(Z_Param_bIsFocused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnHeistButtonFocused(Z_Param_InFocusedButton,Z_Param_bIsFocused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuCrimeNetTutorial::execNativeOnHeistButtonSelected)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InSelectedButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnHeistButtonSelected(Z_Param_InSelectedButton);
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuCrimeNetTutorial_DisableHeistButtons = FName(TEXT("DisableHeistButtons"));
	void USBZMainMenuCrimeNetTutorial::DisableHeistButtons(bool bDisabled)
	{
		SBZMainMenuCrimeNetTutorial_eventDisableHeistButtons_Parms Parms;
		Parms.bDisabled=bDisabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuCrimeNetTutorial_DisableHeistButtons),&Parms);
	}
	static FName NAME_USBZMainMenuCrimeNetTutorial_OnDisabledHeistButtonSelected = FName(TEXT("OnDisabledHeistButtonSelected"));
	void USBZMainMenuCrimeNetTutorial::OnDisabledHeistButtonSelected(USBZMainMenuCrimeNetHeistButton* SelectedButton)
	{
		SBZMainMenuCrimeNetTutorial_eventOnDisabledHeistButtonSelected_Parms Parms;
		Parms.SelectedButton=SelectedButton;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuCrimeNetTutorial_OnDisabledHeistButtonSelected),&Parms);
	}
	static FName NAME_USBZMainMenuCrimeNetTutorial_OnHeistButtonFocused = FName(TEXT("OnHeistButtonFocused"));
	void USBZMainMenuCrimeNetTutorial::OnHeistButtonFocused(USBZMenuButton* MenuButton, bool bIsFocused)
	{
		SBZMainMenuCrimeNetTutorial_eventOnHeistButtonFocused_Parms Parms;
		Parms.MenuButton=MenuButton;
		Parms.bIsFocused=bIsFocused ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuCrimeNetTutorial_OnHeistButtonFocused),&Parms);
	}
	static FName NAME_USBZMainMenuCrimeNetTutorial_OnHeistButtonSelected = FName(TEXT("OnHeistButtonSelected"));
	void USBZMainMenuCrimeNetTutorial::OnHeistButtonSelected(USBZMainMenuCrimeNetHeistButton* SelectedButton)
	{
		SBZMainMenuCrimeNetTutorial_eventOnHeistButtonSelected_Parms Parms;
		Parms.SelectedButton=SelectedButton;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuCrimeNetTutorial_OnHeistButtonSelected),&Parms);
	}
	void USBZMainMenuCrimeNetTutorial::StaticRegisterNativesUSBZMainMenuCrimeNetTutorial()
	{
		UClass* Class = USBZMainMenuCrimeNetTutorial::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandlePartyChanged", &USBZMainMenuCrimeNetTutorial::execHandlePartyChanged },
			{ "NativeOnDisabledHeistButtonSelected", &USBZMainMenuCrimeNetTutorial::execNativeOnDisabledHeistButtonSelected },
			{ "NativeOnHeistButtonFocused", &USBZMainMenuCrimeNetTutorial::execNativeOnHeistButtonFocused },
			{ "NativeOnHeistButtonSelected", &USBZMainMenuCrimeNetTutorial::execNativeOnHeistButtonSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_DisableHeistButtons_Statics
	{
		static void NewProp_bDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_DisableHeistButtons_Statics::NewProp_bDisabled_SetBit(void* Obj)
	{
		((SBZMainMenuCrimeNetTutorial_eventDisableHeistButtons_Parms*)Obj)->bDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_DisableHeistButtons_Statics::NewProp_bDisabled = { "bDisabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuCrimeNetTutorial_eventDisableHeistButtons_Parms), &Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_DisableHeistButtons_Statics::NewProp_bDisabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_DisableHeistButtons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_DisableHeistButtons_Statics::NewProp_bDisabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_DisableHeistButtons_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_DisableHeistButtons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCrimeNetTutorial, nullptr, "DisableHeistButtons", nullptr, nullptr, sizeof(SBZMainMenuCrimeNetTutorial_eventDisableHeistButtons_Parms), Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_DisableHeistButtons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_DisableHeistButtons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_DisableHeistButtons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_DisableHeistButtons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_DisableHeistButtons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_DisableHeistButtons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_HandlePartyChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_HandlePartyChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_HandlePartyChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCrimeNetTutorial, nullptr, "HandlePartyChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_HandlePartyChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_HandlePartyChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_HandlePartyChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_HandlePartyChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnDisabledHeistButtonSelected_Statics
	{
		struct SBZMainMenuCrimeNetTutorial_eventNativeOnDisabledHeistButtonSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnDisabledHeistButtonSelected_Statics::NewProp_InSelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnDisabledHeistButtonSelected_Statics::NewProp_InSelectedButton = { "InSelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCrimeNetTutorial_eventNativeOnDisabledHeistButtonSelected_Parms, InSelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnDisabledHeistButtonSelected_Statics::NewProp_InSelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnDisabledHeistButtonSelected_Statics::NewProp_InSelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnDisabledHeistButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnDisabledHeistButtonSelected_Statics::NewProp_InSelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnDisabledHeistButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnDisabledHeistButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCrimeNetTutorial, nullptr, "NativeOnDisabledHeistButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuCrimeNetTutorial_eventNativeOnDisabledHeistButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnDisabledHeistButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnDisabledHeistButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnDisabledHeistButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnDisabledHeistButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnDisabledHeistButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnDisabledHeistButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonFocused_Statics
	{
		struct SBZMainMenuCrimeNetTutorial_eventNativeOnHeistButtonFocused_Parms
		{
			USBZMenuButton* InFocusedButton;
			bool bIsFocused;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFocusedButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InFocusedButton;
		static void NewProp_bIsFocused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFocused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonFocused_Statics::NewProp_InFocusedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonFocused_Statics::NewProp_InFocusedButton = { "InFocusedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCrimeNetTutorial_eventNativeOnHeistButtonFocused_Parms, InFocusedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonFocused_Statics::NewProp_InFocusedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonFocused_Statics::NewProp_InFocusedButton_MetaData)) };
	void Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonFocused_Statics::NewProp_bIsFocused_SetBit(void* Obj)
	{
		((SBZMainMenuCrimeNetTutorial_eventNativeOnHeistButtonFocused_Parms*)Obj)->bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonFocused_Statics::NewProp_bIsFocused = { "bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuCrimeNetTutorial_eventNativeOnHeistButtonFocused_Parms), &Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonFocused_Statics::NewProp_bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonFocused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonFocused_Statics::NewProp_InFocusedButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonFocused_Statics::NewProp_bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonFocused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonFocused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCrimeNetTutorial, nullptr, "NativeOnHeistButtonFocused", nullptr, nullptr, sizeof(SBZMainMenuCrimeNetTutorial_eventNativeOnHeistButtonFocused_Parms), Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonFocused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonFocused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonFocused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonFocused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonFocused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonFocused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonSelected_Statics
	{
		struct SBZMainMenuCrimeNetTutorial_eventNativeOnHeistButtonSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonSelected_Statics::NewProp_InSelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonSelected_Statics::NewProp_InSelectedButton = { "InSelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCrimeNetTutorial_eventNativeOnHeistButtonSelected_Parms, InSelectedButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonSelected_Statics::NewProp_InSelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonSelected_Statics::NewProp_InSelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonSelected_Statics::NewProp_InSelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCrimeNetTutorial, nullptr, "NativeOnHeistButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuCrimeNetTutorial_eventNativeOnHeistButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnDisabledHeistButtonSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnDisabledHeistButtonSelected_Statics::NewProp_SelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnDisabledHeistButtonSelected_Statics::NewProp_SelectedButton = { "SelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCrimeNetTutorial_eventOnDisabledHeistButtonSelected_Parms, SelectedButton), Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnDisabledHeistButtonSelected_Statics::NewProp_SelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnDisabledHeistButtonSelected_Statics::NewProp_SelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnDisabledHeistButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnDisabledHeistButtonSelected_Statics::NewProp_SelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnDisabledHeistButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnDisabledHeistButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCrimeNetTutorial, nullptr, "OnDisabledHeistButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuCrimeNetTutorial_eventOnDisabledHeistButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnDisabledHeistButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnDisabledHeistButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnDisabledHeistButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnDisabledHeistButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnDisabledHeistButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnDisabledHeistButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonFocused_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MenuButton;
		static void NewProp_bIsFocused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFocused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonFocused_Statics::NewProp_MenuButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonFocused_Statics::NewProp_MenuButton = { "MenuButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCrimeNetTutorial_eventOnHeistButtonFocused_Parms, MenuButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonFocused_Statics::NewProp_MenuButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonFocused_Statics::NewProp_MenuButton_MetaData)) };
	void Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonFocused_Statics::NewProp_bIsFocused_SetBit(void* Obj)
	{
		((SBZMainMenuCrimeNetTutorial_eventOnHeistButtonFocused_Parms*)Obj)->bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonFocused_Statics::NewProp_bIsFocused = { "bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuCrimeNetTutorial_eventOnHeistButtonFocused_Parms), &Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonFocused_Statics::NewProp_bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonFocused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonFocused_Statics::NewProp_MenuButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonFocused_Statics::NewProp_bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonFocused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonFocused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCrimeNetTutorial, nullptr, "OnHeistButtonFocused", nullptr, nullptr, sizeof(SBZMainMenuCrimeNetTutorial_eventOnHeistButtonFocused_Parms), Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonFocused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonFocused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonFocused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonFocused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonFocused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonFocused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonSelected_Statics::NewProp_SelectedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonSelected_Statics::NewProp_SelectedButton = { "SelectedButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuCrimeNetTutorial_eventOnHeistButtonSelected_Parms, SelectedButton), Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonSelected_Statics::NewProp_SelectedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonSelected_Statics::NewProp_SelectedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonSelected_Statics::NewProp_SelectedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuCrimeNetTutorial, nullptr, "OnHeistButtonSelected", nullptr, nullptr, sizeof(SBZMainMenuCrimeNetTutorial_eventOnHeistButtonSelected_Parms), Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_NoRegister()
	{
		return USBZMainMenuCrimeNetTutorial::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HeistButtonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalBox_HeistButtons_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VerticalBox_HeistButtons;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistButtonPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeistButtonPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedHeistButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedHeistButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistButtonPool_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeistButtonPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistButtonPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HeistButtonPool;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TutorialLevelPaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TutorialLevelPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TutorialLevelPaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasDisabledButtons_MetaData[];
#endif
		static void NewProp_bHasDisabledButtons_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasDisabledButtons;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackScreenWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_DisableHeistButtons, "DisableHeistButtons" }, // 3052001512
		{ &Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_HandlePartyChanged, "HandlePartyChanged" }, // 934676628
		{ &Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnDisabledHeistButtonSelected, "NativeOnDisabledHeistButtonSelected" }, // 2236212477
		{ &Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonFocused, "NativeOnHeistButtonFocused" }, // 217517658
		{ &Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_NativeOnHeistButtonSelected, "NativeOnHeistButtonSelected" }, // 3907700319
		{ &Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnDisabledHeistButtonSelected, "OnDisabledHeistButtonSelected" }, // 3307652863
		{ &Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonFocused, "OnHeistButtonFocused" }, // 476012222
		{ &Z_Construct_UFunction_USBZMainMenuCrimeNetTutorial_OnHeistButtonSelected, "OnHeistButtonSelected" }, // 2501591759
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuCrimeNetTutorial.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetTutorial.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_HeistButtonClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNetTutorial" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_HeistButtonClass = { "HeistButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCrimeNetTutorial, HeistButtonClass), Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_HeistButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_HeistButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_VerticalBox_HeistButtons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNetTutorial" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_VerticalBox_HeistButtons = { "VerticalBox_HeistButtons", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCrimeNetTutorial, VerticalBox_HeistButtons), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_VerticalBox_HeistButtons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_VerticalBox_HeistButtons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_HeistButtonPadding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNetTutorial" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_HeistButtonPadding = { "HeistButtonPadding", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCrimeNetTutorial, HeistButtonPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_HeistButtonPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_HeistButtonPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_SelectedHeistButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNetTutorial" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_SelectedHeistButton = { "SelectedHeistButton", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCrimeNetTutorial, SelectedHeistButton), Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_SelectedHeistButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_SelectedHeistButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_HeistButtonPool_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNetTutorial" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_HeistButtonPool_Inner = { "HeistButtonPool", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZMainMenuCrimeNetHeistButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_HeistButtonPool_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_HeistButtonPool_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_HeistButtonPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNetTutorial" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_HeistButtonPool = { "HeistButtonPool", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCrimeNetTutorial, HeistButtonPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_HeistButtonPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_HeistButtonPool_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_TutorialLevelPaths_Inner = { "TutorialLevelPaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_TutorialLevelPaths_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNetTutorial" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_TutorialLevelPaths = { "TutorialLevelPaths", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuCrimeNetTutorial, TutorialLevelPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_TutorialLevelPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_TutorialLevelPaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_bHasDisabledButtons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuCrimeNetTutorial" },
		{ "ModuleRelativePath", "Public/SBZMainMenuCrimeNetTutorial.h" },
	};
#endif
	void Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_bHasDisabledButtons_SetBit(void* Obj)
	{
		((USBZMainMenuCrimeNetTutorial*)Obj)->bHasDisabledButtons = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_bHasDisabledButtons = { "bHasDisabledButtons", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZMainMenuCrimeNetTutorial), &Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_bHasDisabledButtons_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_bHasDisabledButtons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_bHasDisabledButtons_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_HeistButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_VerticalBox_HeistButtons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_HeistButtonPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_SelectedHeistButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_HeistButtonPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_HeistButtonPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_TutorialLevelPaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_TutorialLevelPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::NewProp_bHasDisabledButtons,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuCrimeNetTutorial>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::ClassParams = {
		&USBZMainMenuCrimeNetTutorial::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuCrimeNetTutorial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuCrimeNetTutorial_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuCrimeNetTutorial, 1361445445);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuCrimeNetTutorial>()
	{
		return USBZMainMenuCrimeNetTutorial::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuCrimeNetTutorial(Z_Construct_UClass_USBZMainMenuCrimeNetTutorial, &USBZMainMenuCrimeNetTutorial::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuCrimeNetTutorial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuCrimeNetTutorial);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
