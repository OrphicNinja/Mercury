// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSettingsButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSettingsButton() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButton_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsButton();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(USBZSettingsButton::execCanResetSetting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanResetSetting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsButton::execSetCanResetSetting)
	{
		P_GET_UBOOL(Z_Param_InCanResetSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCanResetSetting(Z_Param_InCanResetSetting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsButton::execSetSettingCategoryName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InSettingCategoryName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettingCategoryName(Z_Param_Out_InSettingCategoryName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsButton::execSetSettingHelperPanelName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InSettingHelperPanelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettingHelperPanelName(Z_Param_Out_InSettingHelperPanelName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsButton::execSetSettingName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InSettingName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettingName(Z_Param_Out_InSettingName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsButton::execSetSettingNameLocalized)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InSettingNameLocalized);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettingNameLocalized(Z_Param_Out_InSettingNameLocalized);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsButton::execSettingHasDefaultValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SettingHasDefaultValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsButton::execSettingIsDirty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SettingIsDirty();
		P_NATIVE_END;
	}
	static FName NAME_USBZSettingsButton_SelectionNameChanged = FName(TEXT("SelectionNameChanged"));
	void USBZSettingsButton::SelectionNameChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZSettingsButton_SelectionNameChanged),NULL);
	}
	static FName NAME_USBZSettingsButton_SettingChanged = FName(TEXT("SettingChanged"));
	void USBZSettingsButton::SettingChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZSettingsButton_SettingChanged),NULL);
	}
	void USBZSettingsButton::StaticRegisterNativesUSBZSettingsButton()
	{
		UClass* Class = USBZSettingsButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanResetSetting", &USBZSettingsButton::execCanResetSetting },
			{ "SetCanResetSetting", &USBZSettingsButton::execSetCanResetSetting },
			{ "SetSettingCategoryName", &USBZSettingsButton::execSetSettingCategoryName },
			{ "SetSettingHelperPanelName", &USBZSettingsButton::execSetSettingHelperPanelName },
			{ "SetSettingName", &USBZSettingsButton::execSetSettingName },
			{ "SetSettingNameLocalized", &USBZSettingsButton::execSetSettingNameLocalized },
			{ "SettingHasDefaultValue", &USBZSettingsButton::execSettingHasDefaultValue },
			{ "SettingIsDirty", &USBZSettingsButton::execSettingIsDirty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSettingsButton_CanResetSetting_Statics
	{
		struct SBZSettingsButton_eventCanResetSetting_Parms
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
	void Z_Construct_UFunction_USBZSettingsButton_CanResetSetting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZSettingsButton_eventCanResetSetting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSettingsButton_CanResetSetting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSettingsButton_eventCanResetSetting_Parms), &Z_Construct_UFunction_USBZSettingsButton_CanResetSetting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsButton_CanResetSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsButton_CanResetSetting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButton_CanResetSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButton_CanResetSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButton, nullptr, "CanResetSetting", nullptr, nullptr, sizeof(SBZSettingsButton_eventCanResetSetting_Parms), Z_Construct_UFunction_USBZSettingsButton_CanResetSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButton_CanResetSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButton_CanResetSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButton_CanResetSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButton_CanResetSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButton_CanResetSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsButton_SelectionNameChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButton_SelectionNameChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButton_SelectionNameChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButton, nullptr, "SelectionNameChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButton_SelectionNameChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButton_SelectionNameChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButton_SelectionNameChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButton_SelectionNameChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsButton_SetCanResetSetting_Statics
	{
		struct SBZSettingsButton_eventSetCanResetSetting_Parms
		{
			bool InCanResetSetting;
		};
		static void NewProp_InCanResetSetting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InCanResetSetting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZSettingsButton_SetCanResetSetting_Statics::NewProp_InCanResetSetting_SetBit(void* Obj)
	{
		((SBZSettingsButton_eventSetCanResetSetting_Parms*)Obj)->InCanResetSetting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSettingsButton_SetCanResetSetting_Statics::NewProp_InCanResetSetting = { "InCanResetSetting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSettingsButton_eventSetCanResetSetting_Parms), &Z_Construct_UFunction_USBZSettingsButton_SetCanResetSetting_Statics::NewProp_InCanResetSetting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsButton_SetCanResetSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsButton_SetCanResetSetting_Statics::NewProp_InCanResetSetting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButton_SetCanResetSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButton_SetCanResetSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButton, nullptr, "SetCanResetSetting", nullptr, nullptr, sizeof(SBZSettingsButton_eventSetCanResetSetting_Parms), Z_Construct_UFunction_USBZSettingsButton_SetCanResetSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButton_SetCanResetSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButton_SetCanResetSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButton_SetCanResetSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButton_SetCanResetSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButton_SetCanResetSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsButton_SetSettingCategoryName_Statics
	{
		struct SBZSettingsButton_eventSetSettingCategoryName_Parms
		{
			FName InSettingCategoryName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSettingCategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSettingCategoryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButton_SetSettingCategoryName_Statics::NewProp_InSettingCategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZSettingsButton_SetSettingCategoryName_Statics::NewProp_InSettingCategoryName = { "InSettingCategoryName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsButton_eventSetSettingCategoryName_Parms, InSettingCategoryName), METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButton_SetSettingCategoryName_Statics::NewProp_InSettingCategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButton_SetSettingCategoryName_Statics::NewProp_InSettingCategoryName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsButton_SetSettingCategoryName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsButton_SetSettingCategoryName_Statics::NewProp_InSettingCategoryName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButton_SetSettingCategoryName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButton_SetSettingCategoryName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButton, nullptr, "SetSettingCategoryName", nullptr, nullptr, sizeof(SBZSettingsButton_eventSetSettingCategoryName_Parms), Z_Construct_UFunction_USBZSettingsButton_SetSettingCategoryName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButton_SetSettingCategoryName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButton_SetSettingCategoryName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButton_SetSettingCategoryName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButton_SetSettingCategoryName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButton_SetSettingCategoryName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsButton_SetSettingHelperPanelName_Statics
	{
		struct SBZSettingsButton_eventSetSettingHelperPanelName_Parms
		{
			FName InSettingHelperPanelName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSettingHelperPanelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSettingHelperPanelName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButton_SetSettingHelperPanelName_Statics::NewProp_InSettingHelperPanelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZSettingsButton_SetSettingHelperPanelName_Statics::NewProp_InSettingHelperPanelName = { "InSettingHelperPanelName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsButton_eventSetSettingHelperPanelName_Parms, InSettingHelperPanelName), METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButton_SetSettingHelperPanelName_Statics::NewProp_InSettingHelperPanelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButton_SetSettingHelperPanelName_Statics::NewProp_InSettingHelperPanelName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsButton_SetSettingHelperPanelName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsButton_SetSettingHelperPanelName_Statics::NewProp_InSettingHelperPanelName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButton_SetSettingHelperPanelName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButton_SetSettingHelperPanelName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButton, nullptr, "SetSettingHelperPanelName", nullptr, nullptr, sizeof(SBZSettingsButton_eventSetSettingHelperPanelName_Parms), Z_Construct_UFunction_USBZSettingsButton_SetSettingHelperPanelName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButton_SetSettingHelperPanelName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButton_SetSettingHelperPanelName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButton_SetSettingHelperPanelName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButton_SetSettingHelperPanelName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButton_SetSettingHelperPanelName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsButton_SetSettingName_Statics
	{
		struct SBZSettingsButton_eventSetSettingName_Parms
		{
			FName InSettingName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSettingName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSettingName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButton_SetSettingName_Statics::NewProp_InSettingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZSettingsButton_SetSettingName_Statics::NewProp_InSettingName = { "InSettingName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsButton_eventSetSettingName_Parms, InSettingName), METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButton_SetSettingName_Statics::NewProp_InSettingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButton_SetSettingName_Statics::NewProp_InSettingName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsButton_SetSettingName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsButton_SetSettingName_Statics::NewProp_InSettingName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButton_SetSettingName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButton_SetSettingName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButton, nullptr, "SetSettingName", nullptr, nullptr, sizeof(SBZSettingsButton_eventSetSettingName_Parms), Z_Construct_UFunction_USBZSettingsButton_SetSettingName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButton_SetSettingName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButton_SetSettingName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButton_SetSettingName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButton_SetSettingName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButton_SetSettingName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsButton_SetSettingNameLocalized_Statics
	{
		struct SBZSettingsButton_eventSetSettingNameLocalized_Parms
		{
			FText InSettingNameLocalized;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSettingNameLocalized_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InSettingNameLocalized;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButton_SetSettingNameLocalized_Statics::NewProp_InSettingNameLocalized_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZSettingsButton_SetSettingNameLocalized_Statics::NewProp_InSettingNameLocalized = { "InSettingNameLocalized", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsButton_eventSetSettingNameLocalized_Parms, InSettingNameLocalized), METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButton_SetSettingNameLocalized_Statics::NewProp_InSettingNameLocalized_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButton_SetSettingNameLocalized_Statics::NewProp_InSettingNameLocalized_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsButton_SetSettingNameLocalized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsButton_SetSettingNameLocalized_Statics::NewProp_InSettingNameLocalized,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButton_SetSettingNameLocalized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButton_SetSettingNameLocalized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButton, nullptr, "SetSettingNameLocalized", nullptr, nullptr, sizeof(SBZSettingsButton_eventSetSettingNameLocalized_Parms), Z_Construct_UFunction_USBZSettingsButton_SetSettingNameLocalized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButton_SetSettingNameLocalized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButton_SetSettingNameLocalized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButton_SetSettingNameLocalized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButton_SetSettingNameLocalized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButton_SetSettingNameLocalized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsButton_SettingChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButton_SettingChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButton_SettingChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButton, nullptr, "SettingChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButton_SettingChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButton_SettingChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButton_SettingChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButton_SettingChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsButton_SettingHasDefaultValue_Statics
	{
		struct SBZSettingsButton_eventSettingHasDefaultValue_Parms
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
	void Z_Construct_UFunction_USBZSettingsButton_SettingHasDefaultValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZSettingsButton_eventSettingHasDefaultValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSettingsButton_SettingHasDefaultValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSettingsButton_eventSettingHasDefaultValue_Parms), &Z_Construct_UFunction_USBZSettingsButton_SettingHasDefaultValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsButton_SettingHasDefaultValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsButton_SettingHasDefaultValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButton_SettingHasDefaultValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButton_SettingHasDefaultValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButton, nullptr, "SettingHasDefaultValue", nullptr, nullptr, sizeof(SBZSettingsButton_eventSettingHasDefaultValue_Parms), Z_Construct_UFunction_USBZSettingsButton_SettingHasDefaultValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButton_SettingHasDefaultValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButton_SettingHasDefaultValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButton_SettingHasDefaultValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButton_SettingHasDefaultValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButton_SettingHasDefaultValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsButton_SettingIsDirty_Statics
	{
		struct SBZSettingsButton_eventSettingIsDirty_Parms
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
	void Z_Construct_UFunction_USBZSettingsButton_SettingIsDirty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZSettingsButton_eventSettingIsDirty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSettingsButton_SettingIsDirty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSettingsButton_eventSettingIsDirty_Parms), &Z_Construct_UFunction_USBZSettingsButton_SettingIsDirty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsButton_SettingIsDirty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsButton_SettingIsDirty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsButton_SettingIsDirty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsButton_SettingIsDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsButton, nullptr, "SettingIsDirty", nullptr, nullptr, sizeof(SBZSettingsButton_eventSettingIsDirty_Parms), Z_Construct_UFunction_USBZSettingsButton_SettingIsDirty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButton_SettingIsDirty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsButton_SettingIsDirty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsButton_SettingIsDirty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsButton_SettingIsDirty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsButton_SettingIsDirty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSettingsButton_NoRegister()
	{
		return USBZSettingsButton::StaticClass();
	}
	struct Z_Construct_UClass_USBZSettingsButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SettingName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingCategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SettingCategoryName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingHelperPanelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SettingHelperPanelName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingNameLocalized_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_SettingNameLocalized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanResetSetting_MetaData[];
#endif
		static void NewProp_bCanResetSetting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanResetSetting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSettingIsDirty_MetaData[];
#endif
		static void NewProp_bSettingIsDirty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSettingIsDirty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSettingHasDefaultValue_MetaData[];
#endif
		static void NewProp_bSettingHasDefaultValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSettingHasDefaultValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSettingsButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuButton,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSettingsButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSettingsButton_CanResetSetting, "CanResetSetting" }, // 2525931644
		{ &Z_Construct_UFunction_USBZSettingsButton_SelectionNameChanged, "SelectionNameChanged" }, // 1482825755
		{ &Z_Construct_UFunction_USBZSettingsButton_SetCanResetSetting, "SetCanResetSetting" }, // 2424376158
		{ &Z_Construct_UFunction_USBZSettingsButton_SetSettingCategoryName, "SetSettingCategoryName" }, // 3885623073
		{ &Z_Construct_UFunction_USBZSettingsButton_SetSettingHelperPanelName, "SetSettingHelperPanelName" }, // 1116837077
		{ &Z_Construct_UFunction_USBZSettingsButton_SetSettingName, "SetSettingName" }, // 3188287955
		{ &Z_Construct_UFunction_USBZSettingsButton_SetSettingNameLocalized, "SetSettingNameLocalized" }, // 765293602
		{ &Z_Construct_UFunction_USBZSettingsButton_SettingChanged, "SettingChanged" }, // 2809268990
		{ &Z_Construct_UFunction_USBZSettingsButton_SettingHasDefaultValue, "SettingHasDefaultValue" }, // 1555687620
		{ &Z_Construct_UFunction_USBZSettingsButton_SettingIsDirty, "SettingIsDirty" }, // 1190769096
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSettingsButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSettingsButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_SettingName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsButton" },
		{ "ModuleRelativePath", "Public/SBZSettingsButton.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_SettingName = { "SettingName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsButton, SettingName), METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_SettingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_SettingName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_SettingCategoryName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsButton" },
		{ "ModuleRelativePath", "Public/SBZSettingsButton.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_SettingCategoryName = { "SettingCategoryName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsButton, SettingCategoryName), METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_SettingCategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_SettingCategoryName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_SettingHelperPanelName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsButton" },
		{ "ModuleRelativePath", "Public/SBZSettingsButton.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_SettingHelperPanelName = { "SettingHelperPanelName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsButton, SettingHelperPanelName), METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_SettingHelperPanelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_SettingHelperPanelName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_SettingNameLocalized_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsButton" },
		{ "ModuleRelativePath", "Public/SBZSettingsButton.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_SettingNameLocalized = { "SettingNameLocalized", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsButton, SettingNameLocalized), METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_SettingNameLocalized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_SettingNameLocalized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_bCanResetSetting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsButton" },
		{ "ModuleRelativePath", "Public/SBZSettingsButton.h" },
	};
#endif
	void Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_bCanResetSetting_SetBit(void* Obj)
	{
		((USBZSettingsButton*)Obj)->bCanResetSetting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_bCanResetSetting = { "bCanResetSetting", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZSettingsButton), &Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_bCanResetSetting_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_bCanResetSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_bCanResetSetting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_bSettingIsDirty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsButton" },
		{ "ModuleRelativePath", "Public/SBZSettingsButton.h" },
	};
#endif
	void Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_bSettingIsDirty_SetBit(void* Obj)
	{
		((USBZSettingsButton*)Obj)->bSettingIsDirty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_bSettingIsDirty = { "bSettingIsDirty", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZSettingsButton), &Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_bSettingIsDirty_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_bSettingIsDirty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_bSettingIsDirty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_bSettingHasDefaultValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsButton" },
		{ "ModuleRelativePath", "Public/SBZSettingsButton.h" },
	};
#endif
	void Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_bSettingHasDefaultValue_SetBit(void* Obj)
	{
		((USBZSettingsButton*)Obj)->bSettingHasDefaultValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_bSettingHasDefaultValue = { "bSettingHasDefaultValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZSettingsButton), &Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_bSettingHasDefaultValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_bSettingHasDefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_bSettingHasDefaultValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSettingsButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_SettingName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_SettingCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_SettingHelperPanelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_SettingNameLocalized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_bCanResetSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_bSettingIsDirty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsButton_Statics::NewProp_bSettingHasDefaultValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSettingsButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSettingsButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSettingsButton_Statics::ClassParams = {
		&USBZSettingsButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSettingsButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSettingsButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSettingsButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSettingsButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSettingsButton, 2628446085);
	template<> STARBREEZE_API UClass* StaticClass<USBZSettingsButton>()
	{
		return USBZSettingsButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSettingsButton(Z_Construct_UClass_USBZSettingsButton, &USBZSettingsButton::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSettingsButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSettingsButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
