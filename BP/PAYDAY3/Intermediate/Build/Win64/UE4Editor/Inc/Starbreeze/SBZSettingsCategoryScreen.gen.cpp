// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSettingsCategoryScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSettingsCategoryScreen() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsCategoryScreen_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsCategoryScreen();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackScreenWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingHelperPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonActionClick_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonTwoChoice_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonMultipleChoice_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonResolutionChoice_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonAntiAliasingModeChoice_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonUpscalerChoice_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonUpscalingModeChoice_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonSlider_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButtonGamepadBinding_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZSettingsCategoryScreen::execApplySettingsCategory)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SettingsCategoryName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplySettingsCategory(Z_Param_Out_SettingsCategoryName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsCategoryScreen::execInitializeSettingsItems)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SettingsCategoryName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeSettingsItems(Z_Param_Out_SettingsCategoryName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsCategoryScreen::execIsSettingsCategoryDirty)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SettingsCategoryName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSettingsCategoryDirty(Z_Param_Out_SettingsCategoryName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsCategoryScreen::execResetSettingsCategory)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SettingsCategoryName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetSettingsCategory(Z_Param_Out_SettingsCategoryName);
		P_NATIVE_END;
	}
	static FName NAME_USBZSettingsCategoryScreen_OnSettingsButtonChanged = FName(TEXT("OnSettingsButtonChanged"));
	void USBZSettingsCategoryScreen::OnSettingsButtonChanged(USBZSettingsButton* SettingsButton)
	{
		SBZSettingsCategoryScreen_eventOnSettingsButtonChanged_Parms Parms;
		Parms.SettingsButton=SettingsButton;
		ProcessEvent(FindFunctionChecked(NAME_USBZSettingsCategoryScreen_OnSettingsButtonChanged),&Parms);
	}
	static FName NAME_USBZSettingsCategoryScreen_OnSettingsButtonFocused = FName(TEXT("OnSettingsButtonFocused"));
	void USBZSettingsCategoryScreen::OnSettingsButtonFocused(USBZMenuButton* MenuButton, bool bIsFocused)
	{
		SBZSettingsCategoryScreen_eventOnSettingsButtonFocused_Parms Parms;
		Parms.MenuButton=MenuButton;
		Parms.bIsFocused=bIsFocused ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZSettingsCategoryScreen_OnSettingsButtonFocused),&Parms);
	}
	static FName NAME_USBZSettingsCategoryScreen_SettingsCategoryInitialized = FName(TEXT("SettingsCategoryInitialized"));
	void USBZSettingsCategoryScreen::SettingsCategoryInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZSettingsCategoryScreen_SettingsCategoryInitialized),NULL);
	}
	void USBZSettingsCategoryScreen::StaticRegisterNativesUSBZSettingsCategoryScreen()
	{
		UClass* Class = USBZSettingsCategoryScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplySettingsCategory", &USBZSettingsCategoryScreen::execApplySettingsCategory },
			{ "InitializeSettingsItems", &USBZSettingsCategoryScreen::execInitializeSettingsItems },
			{ "IsSettingsCategoryDirty", &USBZSettingsCategoryScreen::execIsSettingsCategoryDirty },
			{ "ResetSettingsCategory", &USBZSettingsCategoryScreen::execResetSettingsCategory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSettingsCategoryScreen_ApplySettingsCategory_Statics
	{
		struct SBZSettingsCategoryScreen_eventApplySettingsCategory_Parms
		{
			FName SettingsCategoryName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsCategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SettingsCategoryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsCategoryScreen_ApplySettingsCategory_Statics::NewProp_SettingsCategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZSettingsCategoryScreen_ApplySettingsCategory_Statics::NewProp_SettingsCategoryName = { "SettingsCategoryName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsCategoryScreen_eventApplySettingsCategory_Parms, SettingsCategoryName), METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsCategoryScreen_ApplySettingsCategory_Statics::NewProp_SettingsCategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsCategoryScreen_ApplySettingsCategory_Statics::NewProp_SettingsCategoryName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsCategoryScreen_ApplySettingsCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsCategoryScreen_ApplySettingsCategory_Statics::NewProp_SettingsCategoryName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsCategoryScreen_ApplySettingsCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsCategoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsCategoryScreen_ApplySettingsCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsCategoryScreen, nullptr, "ApplySettingsCategory", nullptr, nullptr, sizeof(SBZSettingsCategoryScreen_eventApplySettingsCategory_Parms), Z_Construct_UFunction_USBZSettingsCategoryScreen_ApplySettingsCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsCategoryScreen_ApplySettingsCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsCategoryScreen_ApplySettingsCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsCategoryScreen_ApplySettingsCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsCategoryScreen_ApplySettingsCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsCategoryScreen_ApplySettingsCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsCategoryScreen_InitializeSettingsItems_Statics
	{
		struct SBZSettingsCategoryScreen_eventInitializeSettingsItems_Parms
		{
			FName SettingsCategoryName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsCategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SettingsCategoryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsCategoryScreen_InitializeSettingsItems_Statics::NewProp_SettingsCategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZSettingsCategoryScreen_InitializeSettingsItems_Statics::NewProp_SettingsCategoryName = { "SettingsCategoryName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsCategoryScreen_eventInitializeSettingsItems_Parms, SettingsCategoryName), METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsCategoryScreen_InitializeSettingsItems_Statics::NewProp_SettingsCategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsCategoryScreen_InitializeSettingsItems_Statics::NewProp_SettingsCategoryName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsCategoryScreen_InitializeSettingsItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsCategoryScreen_InitializeSettingsItems_Statics::NewProp_SettingsCategoryName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsCategoryScreen_InitializeSettingsItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsCategoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsCategoryScreen_InitializeSettingsItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsCategoryScreen, nullptr, "InitializeSettingsItems", nullptr, nullptr, sizeof(SBZSettingsCategoryScreen_eventInitializeSettingsItems_Parms), Z_Construct_UFunction_USBZSettingsCategoryScreen_InitializeSettingsItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsCategoryScreen_InitializeSettingsItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsCategoryScreen_InitializeSettingsItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsCategoryScreen_InitializeSettingsItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsCategoryScreen_InitializeSettingsItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsCategoryScreen_InitializeSettingsItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsCategoryScreen_IsSettingsCategoryDirty_Statics
	{
		struct SBZSettingsCategoryScreen_eventIsSettingsCategoryDirty_Parms
		{
			FName SettingsCategoryName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsCategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SettingsCategoryName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsCategoryScreen_IsSettingsCategoryDirty_Statics::NewProp_SettingsCategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZSettingsCategoryScreen_IsSettingsCategoryDirty_Statics::NewProp_SettingsCategoryName = { "SettingsCategoryName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsCategoryScreen_eventIsSettingsCategoryDirty_Parms, SettingsCategoryName), METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsCategoryScreen_IsSettingsCategoryDirty_Statics::NewProp_SettingsCategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsCategoryScreen_IsSettingsCategoryDirty_Statics::NewProp_SettingsCategoryName_MetaData)) };
	void Z_Construct_UFunction_USBZSettingsCategoryScreen_IsSettingsCategoryDirty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZSettingsCategoryScreen_eventIsSettingsCategoryDirty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSettingsCategoryScreen_IsSettingsCategoryDirty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSettingsCategoryScreen_eventIsSettingsCategoryDirty_Parms), &Z_Construct_UFunction_USBZSettingsCategoryScreen_IsSettingsCategoryDirty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsCategoryScreen_IsSettingsCategoryDirty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsCategoryScreen_IsSettingsCategoryDirty_Statics::NewProp_SettingsCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsCategoryScreen_IsSettingsCategoryDirty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsCategoryScreen_IsSettingsCategoryDirty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsCategoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsCategoryScreen_IsSettingsCategoryDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsCategoryScreen, nullptr, "IsSettingsCategoryDirty", nullptr, nullptr, sizeof(SBZSettingsCategoryScreen_eventIsSettingsCategoryDirty_Parms), Z_Construct_UFunction_USBZSettingsCategoryScreen_IsSettingsCategoryDirty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsCategoryScreen_IsSettingsCategoryDirty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsCategoryScreen_IsSettingsCategoryDirty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsCategoryScreen_IsSettingsCategoryDirty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsCategoryScreen_IsSettingsCategoryDirty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsCategoryScreen_IsSettingsCategoryDirty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonChanged_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonChanged_Statics::NewProp_SettingsButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonChanged_Statics::NewProp_SettingsButton = { "SettingsButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsCategoryScreen_eventOnSettingsButtonChanged_Parms, SettingsButton), Z_Construct_UClass_USBZSettingsButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonChanged_Statics::NewProp_SettingsButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonChanged_Statics::NewProp_SettingsButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonChanged_Statics::NewProp_SettingsButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsCategoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsCategoryScreen, nullptr, "OnSettingsButtonChanged", nullptr, nullptr, sizeof(SBZSettingsCategoryScreen_eventOnSettingsButtonChanged_Parms), Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonFocused_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonFocused_Statics::NewProp_MenuButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonFocused_Statics::NewProp_MenuButton = { "MenuButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsCategoryScreen_eventOnSettingsButtonFocused_Parms, MenuButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonFocused_Statics::NewProp_MenuButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonFocused_Statics::NewProp_MenuButton_MetaData)) };
	void Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonFocused_Statics::NewProp_bIsFocused_SetBit(void* Obj)
	{
		((SBZSettingsCategoryScreen_eventOnSettingsButtonFocused_Parms*)Obj)->bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonFocused_Statics::NewProp_bIsFocused = { "bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSettingsCategoryScreen_eventOnSettingsButtonFocused_Parms), &Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonFocused_Statics::NewProp_bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonFocused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonFocused_Statics::NewProp_MenuButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonFocused_Statics::NewProp_bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonFocused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsCategoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonFocused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsCategoryScreen, nullptr, "OnSettingsButtonFocused", nullptr, nullptr, sizeof(SBZSettingsCategoryScreen_eventOnSettingsButtonFocused_Parms), Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonFocused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonFocused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonFocused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonFocused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonFocused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonFocused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsCategoryScreen_ResetSettingsCategory_Statics
	{
		struct SBZSettingsCategoryScreen_eventResetSettingsCategory_Parms
		{
			FName SettingsCategoryName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsCategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SettingsCategoryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsCategoryScreen_ResetSettingsCategory_Statics::NewProp_SettingsCategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZSettingsCategoryScreen_ResetSettingsCategory_Statics::NewProp_SettingsCategoryName = { "SettingsCategoryName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsCategoryScreen_eventResetSettingsCategory_Parms, SettingsCategoryName), METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsCategoryScreen_ResetSettingsCategory_Statics::NewProp_SettingsCategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsCategoryScreen_ResetSettingsCategory_Statics::NewProp_SettingsCategoryName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsCategoryScreen_ResetSettingsCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsCategoryScreen_ResetSettingsCategory_Statics::NewProp_SettingsCategoryName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsCategoryScreen_ResetSettingsCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsCategoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsCategoryScreen_ResetSettingsCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsCategoryScreen, nullptr, "ResetSettingsCategory", nullptr, nullptr, sizeof(SBZSettingsCategoryScreen_eventResetSettingsCategory_Parms), Z_Construct_UFunction_USBZSettingsCategoryScreen_ResetSettingsCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsCategoryScreen_ResetSettingsCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsCategoryScreen_ResetSettingsCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsCategoryScreen_ResetSettingsCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsCategoryScreen_ResetSettingsCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsCategoryScreen_ResetSettingsCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsCategoryScreen_SettingsCategoryInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsCategoryScreen_SettingsCategoryInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsCategoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsCategoryScreen_SettingsCategoryInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsCategoryScreen, nullptr, "SettingsCategoryInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsCategoryScreen_SettingsCategoryInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsCategoryScreen_SettingsCategoryInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsCategoryScreen_SettingsCategoryInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsCategoryScreen_SettingsCategoryInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSettingsCategoryScreen_NoRegister()
	{
		return USBZSettingsCategoryScreen::StaticClass();
	}
	struct Z_Construct_UClass_USBZSettingsCategoryScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingHelperPanels_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SettingHelperPanels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingHelperPanels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SettingHelperPanels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollBox_SettingsItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScrollBox_SettingsItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsGroupTitleClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SettingsGroupTitleClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsButtonClassActionClick_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SettingsButtonClassActionClick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsButtonClassTwoChoice_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SettingsButtonClassTwoChoice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsButtonClassMultipleChoice_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SettingsButtonClassMultipleChoice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsButtonClassResolutionChoice_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SettingsButtonClassResolutionChoice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsButtonClassAntiAliasingModeChoice_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SettingsButtonClassAntiAliasingModeChoice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsButtonClassUpscalerChoice_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SettingsButtonClassUpscalerChoice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsButtonClassUpscalingModeChoice_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SettingsButtonClassUpscalingModeChoice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsButtonClassSlider_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SettingsButtonClassSlider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsButtonClassKeyboardBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SettingsButtonClassKeyboardBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsButtonClassGamepadBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SettingsButtonClassGamepadBinding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackScreenWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSettingsCategoryScreen_ApplySettingsCategory, "ApplySettingsCategory" }, // 4213095472
		{ &Z_Construct_UFunction_USBZSettingsCategoryScreen_InitializeSettingsItems, "InitializeSettingsItems" }, // 3461585737
		{ &Z_Construct_UFunction_USBZSettingsCategoryScreen_IsSettingsCategoryDirty, "IsSettingsCategoryDirty" }, // 1055870285
		{ &Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonChanged, "OnSettingsButtonChanged" }, // 87136381
		{ &Z_Construct_UFunction_USBZSettingsCategoryScreen_OnSettingsButtonFocused, "OnSettingsButtonFocused" }, // 1335225876
		{ &Z_Construct_UFunction_USBZSettingsCategoryScreen_ResetSettingsCategory, "ResetSettingsCategory" }, // 4036320058
		{ &Z_Construct_UFunction_USBZSettingsCategoryScreen_SettingsCategoryInitialized, "SettingsCategoryInitialized" }, // 1322684352
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSettingsCategoryScreen.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSettingsCategoryScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingHelperPanels_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsCategoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSettingsCategoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingHelperPanels_Inner = { "SettingHelperPanels", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZSettingHelperPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingHelperPanels_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingHelperPanels_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingHelperPanels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsCategoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSettingsCategoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingHelperPanels = { "SettingHelperPanels", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsCategoryScreen, SettingHelperPanels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingHelperPanels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingHelperPanels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_ScrollBox_SettingsItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsCategoryScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSettingsCategoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_ScrollBox_SettingsItems = { "ScrollBox_SettingsItems", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsCategoryScreen, ScrollBox_SettingsItems), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_ScrollBox_SettingsItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_ScrollBox_SettingsItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsGroupTitleClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsCategoryScreen" },
		{ "ModuleRelativePath", "Public/SBZSettingsCategoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsGroupTitleClass = { "SettingsGroupTitleClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsCategoryScreen, SettingsGroupTitleClass), Z_Construct_UClass_UTextBlock_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsGroupTitleClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsGroupTitleClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassActionClick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsCategoryScreen" },
		{ "ModuleRelativePath", "Public/SBZSettingsCategoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassActionClick = { "SettingsButtonClassActionClick", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsCategoryScreen, SettingsButtonClassActionClick), Z_Construct_UClass_USBZSettingsButtonActionClick_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassActionClick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassActionClick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassTwoChoice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsCategoryScreen" },
		{ "ModuleRelativePath", "Public/SBZSettingsCategoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassTwoChoice = { "SettingsButtonClassTwoChoice", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsCategoryScreen, SettingsButtonClassTwoChoice), Z_Construct_UClass_USBZSettingsButtonTwoChoice_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassTwoChoice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassTwoChoice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassMultipleChoice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsCategoryScreen" },
		{ "ModuleRelativePath", "Public/SBZSettingsCategoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassMultipleChoice = { "SettingsButtonClassMultipleChoice", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsCategoryScreen, SettingsButtonClassMultipleChoice), Z_Construct_UClass_USBZSettingsButtonMultipleChoice_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassMultipleChoice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassMultipleChoice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassResolutionChoice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsCategoryScreen" },
		{ "ModuleRelativePath", "Public/SBZSettingsCategoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassResolutionChoice = { "SettingsButtonClassResolutionChoice", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsCategoryScreen, SettingsButtonClassResolutionChoice), Z_Construct_UClass_USBZSettingsButtonResolutionChoice_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassResolutionChoice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassResolutionChoice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassAntiAliasingModeChoice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsCategoryScreen" },
		{ "ModuleRelativePath", "Public/SBZSettingsCategoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassAntiAliasingModeChoice = { "SettingsButtonClassAntiAliasingModeChoice", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsCategoryScreen, SettingsButtonClassAntiAliasingModeChoice), Z_Construct_UClass_USBZSettingsButtonAntiAliasingModeChoice_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassAntiAliasingModeChoice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassAntiAliasingModeChoice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassUpscalerChoice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsCategoryScreen" },
		{ "ModuleRelativePath", "Public/SBZSettingsCategoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassUpscalerChoice = { "SettingsButtonClassUpscalerChoice", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsCategoryScreen, SettingsButtonClassUpscalerChoice), Z_Construct_UClass_USBZSettingsButtonUpscalerChoice_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassUpscalerChoice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassUpscalerChoice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassUpscalingModeChoice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsCategoryScreen" },
		{ "ModuleRelativePath", "Public/SBZSettingsCategoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassUpscalingModeChoice = { "SettingsButtonClassUpscalingModeChoice", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsCategoryScreen, SettingsButtonClassUpscalingModeChoice), Z_Construct_UClass_USBZSettingsButtonUpscalingModeChoice_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassUpscalingModeChoice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassUpscalingModeChoice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassSlider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsCategoryScreen" },
		{ "ModuleRelativePath", "Public/SBZSettingsCategoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassSlider = { "SettingsButtonClassSlider", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsCategoryScreen, SettingsButtonClassSlider), Z_Construct_UClass_USBZSettingsButtonSlider_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassSlider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassSlider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassKeyboardBinding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsCategoryScreen" },
		{ "ModuleRelativePath", "Public/SBZSettingsCategoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassKeyboardBinding = { "SettingsButtonClassKeyboardBinding", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsCategoryScreen, SettingsButtonClassKeyboardBinding), Z_Construct_UClass_USBZSettingsButtonKeyboardBinding_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassKeyboardBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassKeyboardBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassGamepadBinding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsCategoryScreen" },
		{ "ModuleRelativePath", "Public/SBZSettingsCategoryScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassGamepadBinding = { "SettingsButtonClassGamepadBinding", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsCategoryScreen, SettingsButtonClassGamepadBinding), Z_Construct_UClass_USBZSettingsButtonGamepadBinding_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassGamepadBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassGamepadBinding_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingHelperPanels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingHelperPanels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_ScrollBox_SettingsItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsGroupTitleClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassActionClick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassTwoChoice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassMultipleChoice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassResolutionChoice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassAntiAliasingModeChoice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassUpscalerChoice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassUpscalingModeChoice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassSlider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassKeyboardBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::NewProp_SettingsButtonClassGamepadBinding,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSettingsCategoryScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::ClassParams = {
		&USBZSettingsCategoryScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSettingsCategoryScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSettingsCategoryScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSettingsCategoryScreen, 1603013262);
	template<> STARBREEZE_API UClass* StaticClass<USBZSettingsCategoryScreen>()
	{
		return USBZSettingsCategoryScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSettingsCategoryScreen(Z_Construct_UClass_USBZSettingsCategoryScreen, &USBZSettingsCategoryScreen::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSettingsCategoryScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSettingsCategoryScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
