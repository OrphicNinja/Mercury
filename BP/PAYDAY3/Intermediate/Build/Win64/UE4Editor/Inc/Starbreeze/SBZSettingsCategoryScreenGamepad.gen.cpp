// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSettingsCategoryScreenGamepad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSettingsCategoryScreenGamepad() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsCategoryScreenGamepad_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsCategoryScreenGamepad();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackScreenWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonMultipleChoice_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZSettingsCategoryScreenGamepad::execApplySettingsCategory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplySettingsCategory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsCategoryScreenGamepad::execInitializeSettingsItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeSettingsItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsCategoryScreenGamepad::execIsSettingsCategoryDirty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSettingsCategoryDirty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsCategoryScreenGamepad::execResetSettingsCategory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetSettingsCategory();
		P_NATIVE_END;
	}
	static FName NAME_USBZSettingsCategoryScreenGamepad_OnInputTypeChanged = FName(TEXT("OnInputTypeChanged"));
	void USBZSettingsCategoryScreenGamepad::OnInputTypeChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZSettingsCategoryScreenGamepad_OnInputTypeChanged),NULL);
	}
	static FName NAME_USBZSettingsCategoryScreenGamepad_OnSettingsButtonChanged = FName(TEXT("OnSettingsButtonChanged"));
	void USBZSettingsCategoryScreenGamepad::OnSettingsButtonChanged(USBZSettingsButton* SettingsButton)
	{
		SBZSettingsCategoryScreenGamepad_eventOnSettingsButtonChanged_Parms Parms;
		Parms.SettingsButton=SettingsButton;
		ProcessEvent(FindFunctionChecked(NAME_USBZSettingsCategoryScreenGamepad_OnSettingsButtonChanged),&Parms);
	}
	static FName NAME_USBZSettingsCategoryScreenGamepad_OnSettingsButtonFocused = FName(TEXT("OnSettingsButtonFocused"));
	void USBZSettingsCategoryScreenGamepad::OnSettingsButtonFocused(USBZMenuButton* MenuButton, bool bIsFocused)
	{
		SBZSettingsCategoryScreenGamepad_eventOnSettingsButtonFocused_Parms Parms;
		Parms.MenuButton=MenuButton;
		Parms.bIsFocused=bIsFocused ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZSettingsCategoryScreenGamepad_OnSettingsButtonFocused),&Parms);
	}
	static FName NAME_USBZSettingsCategoryScreenGamepad_RefreshScreen = FName(TEXT("RefreshScreen"));
	void USBZSettingsCategoryScreenGamepad::RefreshScreen()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZSettingsCategoryScreenGamepad_RefreshScreen),NULL);
	}
	static FName NAME_USBZSettingsCategoryScreenGamepad_SettingsCategoryInitialized = FName(TEXT("SettingsCategoryInitialized"));
	void USBZSettingsCategoryScreenGamepad::SettingsCategoryInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZSettingsCategoryScreenGamepad_SettingsCategoryInitialized),NULL);
	}
	void USBZSettingsCategoryScreenGamepad::StaticRegisterNativesUSBZSettingsCategoryScreenGamepad()
	{
		UClass* Class = USBZSettingsCategoryScreenGamepad::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplySettingsCategory", &USBZSettingsCategoryScreenGamepad::execApplySettingsCategory },
			{ "InitializeSettingsItems", &USBZSettingsCategoryScreenGamepad::execInitializeSettingsItems },
			{ "IsSettingsCategoryDirty", &USBZSettingsCategoryScreenGamepad::execIsSettingsCategoryDirty },
			{ "ResetSettingsCategory", &USBZSettingsCategoryScreenGamepad::execResetSettingsCategory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_ApplySettingsCategory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_ApplySettingsCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsCategoryScreenGamepad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_ApplySettingsCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsCategoryScreenGamepad, nullptr, "ApplySettingsCategory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_ApplySettingsCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_ApplySettingsCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_ApplySettingsCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_ApplySettingsCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_InitializeSettingsItems_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_InitializeSettingsItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsCategoryScreenGamepad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_InitializeSettingsItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsCategoryScreenGamepad, nullptr, "InitializeSettingsItems", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_InitializeSettingsItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_InitializeSettingsItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_InitializeSettingsItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_InitializeSettingsItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_IsSettingsCategoryDirty_Statics
	{
		struct SBZSettingsCategoryScreenGamepad_eventIsSettingsCategoryDirty_Parms
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
	void Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_IsSettingsCategoryDirty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZSettingsCategoryScreenGamepad_eventIsSettingsCategoryDirty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_IsSettingsCategoryDirty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSettingsCategoryScreenGamepad_eventIsSettingsCategoryDirty_Parms), &Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_IsSettingsCategoryDirty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_IsSettingsCategoryDirty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_IsSettingsCategoryDirty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_IsSettingsCategoryDirty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsCategoryScreenGamepad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_IsSettingsCategoryDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsCategoryScreenGamepad, nullptr, "IsSettingsCategoryDirty", nullptr, nullptr, sizeof(SBZSettingsCategoryScreenGamepad_eventIsSettingsCategoryDirty_Parms), Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_IsSettingsCategoryDirty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_IsSettingsCategoryDirty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_IsSettingsCategoryDirty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_IsSettingsCategoryDirty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_IsSettingsCategoryDirty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_IsSettingsCategoryDirty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnInputTypeChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnInputTypeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsCategoryScreenGamepad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnInputTypeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsCategoryScreenGamepad, nullptr, "OnInputTypeChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnInputTypeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnInputTypeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnInputTypeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnInputTypeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SettingsButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonChanged_Statics::NewProp_SettingsButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonChanged_Statics::NewProp_SettingsButton = { "SettingsButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsCategoryScreenGamepad_eventOnSettingsButtonChanged_Parms, SettingsButton), Z_Construct_UClass_USBZSettingsButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonChanged_Statics::NewProp_SettingsButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonChanged_Statics::NewProp_SettingsButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonChanged_Statics::NewProp_SettingsButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsCategoryScreenGamepad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsCategoryScreenGamepad, nullptr, "OnSettingsButtonChanged", nullptr, nullptr, sizeof(SBZSettingsCategoryScreenGamepad_eventOnSettingsButtonChanged_Parms), Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonFocused_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonFocused_Statics::NewProp_MenuButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonFocused_Statics::NewProp_MenuButton = { "MenuButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsCategoryScreenGamepad_eventOnSettingsButtonFocused_Parms, MenuButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonFocused_Statics::NewProp_MenuButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonFocused_Statics::NewProp_MenuButton_MetaData)) };
	void Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonFocused_Statics::NewProp_bIsFocused_SetBit(void* Obj)
	{
		((SBZSettingsCategoryScreenGamepad_eventOnSettingsButtonFocused_Parms*)Obj)->bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonFocused_Statics::NewProp_bIsFocused = { "bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSettingsCategoryScreenGamepad_eventOnSettingsButtonFocused_Parms), &Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonFocused_Statics::NewProp_bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonFocused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonFocused_Statics::NewProp_MenuButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonFocused_Statics::NewProp_bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonFocused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsCategoryScreenGamepad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonFocused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsCategoryScreenGamepad, nullptr, "OnSettingsButtonFocused", nullptr, nullptr, sizeof(SBZSettingsCategoryScreenGamepad_eventOnSettingsButtonFocused_Parms), Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonFocused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonFocused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonFocused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonFocused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonFocused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonFocused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_RefreshScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_RefreshScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsCategoryScreenGamepad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_RefreshScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsCategoryScreenGamepad, nullptr, "RefreshScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_RefreshScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_RefreshScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_RefreshScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_RefreshScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_ResetSettingsCategory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_ResetSettingsCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsCategoryScreenGamepad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_ResetSettingsCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsCategoryScreenGamepad, nullptr, "ResetSettingsCategory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_ResetSettingsCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_ResetSettingsCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_ResetSettingsCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_ResetSettingsCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_SettingsCategoryInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_SettingsCategoryInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsCategoryScreenGamepad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_SettingsCategoryInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsCategoryScreenGamepad, nullptr, "SettingsCategoryInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_SettingsCategoryInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_SettingsCategoryInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_SettingsCategoryInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_SettingsCategoryInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSettingsCategoryScreenGamepad_NoRegister()
	{
		return USBZSettingsCategoryScreenGamepad::StaticClass();
	}
	struct Z_Construct_UClass_USBZSettingsCategoryScreenGamepad_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultipleChoiceButton_GamepadPreset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MultipleChoiceButton_GamepadPreset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSettingsCategoryScreenGamepad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackScreenWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSettingsCategoryScreenGamepad_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_ApplySettingsCategory, "ApplySettingsCategory" }, // 1671542631
		{ &Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_InitializeSettingsItems, "InitializeSettingsItems" }, // 449441003
		{ &Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_IsSettingsCategoryDirty, "IsSettingsCategoryDirty" }, // 1652573885
		{ &Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnInputTypeChanged, "OnInputTypeChanged" }, // 457971356
		{ &Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonChanged, "OnSettingsButtonChanged" }, // 2750484292
		{ &Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_OnSettingsButtonFocused, "OnSettingsButtonFocused" }, // 2435732308
		{ &Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_RefreshScreen, "RefreshScreen" }, // 1930820272
		{ &Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_ResetSettingsCategory, "ResetSettingsCategory" }, // 4232246731
		{ &Z_Construct_UFunction_USBZSettingsCategoryScreenGamepad_SettingsCategoryInitialized, "SettingsCategoryInitialized" }, // 2277534878
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsCategoryScreenGamepad_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSettingsCategoryScreenGamepad.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSettingsCategoryScreenGamepad.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsCategoryScreenGamepad_Statics::NewProp_MultipleChoiceButton_GamepadPreset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsCategoryScreenGamepad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSettingsCategoryScreenGamepad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSettingsCategoryScreenGamepad_Statics::NewProp_MultipleChoiceButton_GamepadPreset = { "MultipleChoiceButton_GamepadPreset", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsCategoryScreenGamepad, MultipleChoiceButton_GamepadPreset), Z_Construct_UClass_USBZSettingsButtonMultipleChoice_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSettingsCategoryScreenGamepad_Statics::NewProp_MultipleChoiceButton_GamepadPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsCategoryScreenGamepad_Statics::NewProp_MultipleChoiceButton_GamepadPreset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSettingsCategoryScreenGamepad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsCategoryScreenGamepad_Statics::NewProp_MultipleChoiceButton_GamepadPreset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSettingsCategoryScreenGamepad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSettingsCategoryScreenGamepad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSettingsCategoryScreenGamepad_Statics::ClassParams = {
		&USBZSettingsCategoryScreenGamepad::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSettingsCategoryScreenGamepad_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsCategoryScreenGamepad_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSettingsCategoryScreenGamepad_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsCategoryScreenGamepad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSettingsCategoryScreenGamepad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSettingsCategoryScreenGamepad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSettingsCategoryScreenGamepad, 1751092944);
	template<> STARBREEZE_API UClass* StaticClass<USBZSettingsCategoryScreenGamepad>()
	{
		return USBZSettingsCategoryScreenGamepad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSettingsCategoryScreenGamepad(Z_Construct_UClass_USBZSettingsCategoryScreenGamepad, &USBZSettingsCategoryScreenGamepad::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSettingsCategoryScreenGamepad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSettingsCategoryScreenGamepad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
