// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMenuNavBar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMenuNavBar() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuNavBar_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuNavBar();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZNavButtonParameters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuNavBarButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMenuNavBar::execGetNavigationParameters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSBZNavButtonParameters>*)Z_Param__Result=P_THIS->GetNavigationParameters();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMenuNavBar::execHasStackFocus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasStackFocus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMenuNavBar::execOnBackwardInputPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBackwardInputPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMenuNavBar::execOnForwardInputPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnForwardInputPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMenuNavBar::execOnInstallStateChanged)
	{
		P_GET_UBOOL(Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInstallStateChanged(Z_Param_NewState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMenuNavBar::execSetActiveTab)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InTabName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveTab(Z_Param_Out_InTabName);
		P_NATIVE_END;
	}
	static FName NAME_USBZMenuNavBar_OnTabbedBackward = FName(TEXT("OnTabbedBackward"));
	void USBZMenuNavBar::OnTabbedBackward()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMenuNavBar_OnTabbedBackward),NULL);
	}
	static FName NAME_USBZMenuNavBar_OnTabbedForward = FName(TEXT("OnTabbedForward"));
	void USBZMenuNavBar::OnTabbedForward()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMenuNavBar_OnTabbedForward),NULL);
	}
	void USBZMenuNavBar::StaticRegisterNativesUSBZMenuNavBar()
	{
		UClass* Class = USBZMenuNavBar::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNavigationParameters", &USBZMenuNavBar::execGetNavigationParameters },
			{ "HasStackFocus", &USBZMenuNavBar::execHasStackFocus },
			{ "OnBackwardInputPressed", &USBZMenuNavBar::execOnBackwardInputPressed },
			{ "OnForwardInputPressed", &USBZMenuNavBar::execOnForwardInputPressed },
			{ "OnInstallStateChanged", &USBZMenuNavBar::execOnInstallStateChanged },
			{ "SetActiveTab", &USBZMenuNavBar::execSetActiveTab },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMenuNavBar_GetNavigationParameters_Statics
	{
		struct SBZMenuNavBar_eventGetNavigationParameters_Parms
		{
			TArray<FSBZNavButtonParameters> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMenuNavBar_GetNavigationParameters_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZNavButtonParameters, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZMenuNavBar_GetNavigationParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMenuNavBar_eventGetNavigationParameters_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMenuNavBar_GetNavigationParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMenuNavBar_GetNavigationParameters_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMenuNavBar_GetNavigationParameters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuNavBar_GetNavigationParameters_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuNavBar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuNavBar_GetNavigationParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuNavBar, nullptr, "GetNavigationParameters", nullptr, nullptr, sizeof(SBZMenuNavBar_eventGetNavigationParameters_Parms), Z_Construct_UFunction_USBZMenuNavBar_GetNavigationParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuNavBar_GetNavigationParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuNavBar_GetNavigationParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuNavBar_GetNavigationParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuNavBar_GetNavigationParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuNavBar_GetNavigationParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuNavBar_HasStackFocus_Statics
	{
		struct SBZMenuNavBar_eventHasStackFocus_Parms
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
	void Z_Construct_UFunction_USBZMenuNavBar_HasStackFocus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMenuNavBar_eventHasStackFocus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMenuNavBar_HasStackFocus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMenuNavBar_eventHasStackFocus_Parms), &Z_Construct_UFunction_USBZMenuNavBar_HasStackFocus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMenuNavBar_HasStackFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMenuNavBar_HasStackFocus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuNavBar_HasStackFocus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuNavBar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuNavBar_HasStackFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuNavBar, nullptr, "HasStackFocus", nullptr, nullptr, sizeof(SBZMenuNavBar_eventHasStackFocus_Parms), Z_Construct_UFunction_USBZMenuNavBar_HasStackFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuNavBar_HasStackFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuNavBar_HasStackFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuNavBar_HasStackFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuNavBar_HasStackFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuNavBar_HasStackFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuNavBar_OnBackwardInputPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuNavBar_OnBackwardInputPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuNavBar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuNavBar_OnBackwardInputPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuNavBar, nullptr, "OnBackwardInputPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuNavBar_OnBackwardInputPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuNavBar_OnBackwardInputPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuNavBar_OnBackwardInputPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuNavBar_OnBackwardInputPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuNavBar_OnForwardInputPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuNavBar_OnForwardInputPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuNavBar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuNavBar_OnForwardInputPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuNavBar, nullptr, "OnForwardInputPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuNavBar_OnForwardInputPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuNavBar_OnForwardInputPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuNavBar_OnForwardInputPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuNavBar_OnForwardInputPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuNavBar_OnInstallStateChanged_Statics
	{
		struct SBZMenuNavBar_eventOnInstallStateChanged_Parms
		{
			bool NewState;
		};
		static void NewProp_NewState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZMenuNavBar_OnInstallStateChanged_Statics::NewProp_NewState_SetBit(void* Obj)
	{
		((SBZMenuNavBar_eventOnInstallStateChanged_Parms*)Obj)->NewState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMenuNavBar_OnInstallStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMenuNavBar_eventOnInstallStateChanged_Parms), &Z_Construct_UFunction_USBZMenuNavBar_OnInstallStateChanged_Statics::NewProp_NewState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMenuNavBar_OnInstallStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMenuNavBar_OnInstallStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuNavBar_OnInstallStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuNavBar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuNavBar_OnInstallStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuNavBar, nullptr, "OnInstallStateChanged", nullptr, nullptr, sizeof(SBZMenuNavBar_eventOnInstallStateChanged_Parms), Z_Construct_UFunction_USBZMenuNavBar_OnInstallStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuNavBar_OnInstallStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuNavBar_OnInstallStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuNavBar_OnInstallStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuNavBar_OnInstallStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuNavBar_OnInstallStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuNavBar_OnTabbedBackward_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuNavBar_OnTabbedBackward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuNavBar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuNavBar_OnTabbedBackward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuNavBar, nullptr, "OnTabbedBackward", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuNavBar_OnTabbedBackward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuNavBar_OnTabbedBackward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuNavBar_OnTabbedBackward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuNavBar_OnTabbedBackward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuNavBar_OnTabbedForward_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuNavBar_OnTabbedForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuNavBar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuNavBar_OnTabbedForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuNavBar, nullptr, "OnTabbedForward", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuNavBar_OnTabbedForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuNavBar_OnTabbedForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuNavBar_OnTabbedForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuNavBar_OnTabbedForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuNavBar_SetActiveTab_Statics
	{
		struct SBZMenuNavBar_eventSetActiveTab_Parms
		{
			FName InTabName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTabName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InTabName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuNavBar_SetActiveTab_Statics::NewProp_InTabName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZMenuNavBar_SetActiveTab_Statics::NewProp_InTabName = { "InTabName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMenuNavBar_eventSetActiveTab_Parms, InTabName), METADATA_PARAMS(Z_Construct_UFunction_USBZMenuNavBar_SetActiveTab_Statics::NewProp_InTabName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuNavBar_SetActiveTab_Statics::NewProp_InTabName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMenuNavBar_SetActiveTab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMenuNavBar_SetActiveTab_Statics::NewProp_InTabName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuNavBar_SetActiveTab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuNavBar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuNavBar_SetActiveTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuNavBar, nullptr, "SetActiveTab", nullptr, nullptr, sizeof(SBZMenuNavBar_eventSetActiveTab_Parms), Z_Construct_UFunction_USBZMenuNavBar_SetActiveTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuNavBar_SetActiveTab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuNavBar_SetActiveTab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuNavBar_SetActiveTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuNavBar_SetActiveTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuNavBar_SetActiveTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMenuNavBar_NoRegister()
	{
		return USBZMenuNavBar::StaticClass();
	}
	struct Z_Construct_UClass_USBZMenuNavBar_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveForwardActionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MoveForwardActionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveBackwardActionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MoveBackwardActionName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavigationButtons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationButtons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NavigationButtons;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NavigationButtonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_ButtonContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_ButtonContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAffectedByInstallProgress_MetaData[];
#endif
		static void NewProp_bIsAffectedByInstallProgress_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAffectedByInstallProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMenuNavBar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMenuNavBar_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMenuNavBar_GetNavigationParameters, "GetNavigationParameters" }, // 303822302
		{ &Z_Construct_UFunction_USBZMenuNavBar_HasStackFocus, "HasStackFocus" }, // 3886950655
		{ &Z_Construct_UFunction_USBZMenuNavBar_OnBackwardInputPressed, "OnBackwardInputPressed" }, // 1598950714
		{ &Z_Construct_UFunction_USBZMenuNavBar_OnForwardInputPressed, "OnForwardInputPressed" }, // 2150377387
		{ &Z_Construct_UFunction_USBZMenuNavBar_OnInstallStateChanged, "OnInstallStateChanged" }, // 3952201333
		{ &Z_Construct_UFunction_USBZMenuNavBar_OnTabbedBackward, "OnTabbedBackward" }, // 3555030414
		{ &Z_Construct_UFunction_USBZMenuNavBar_OnTabbedForward, "OnTabbedForward" }, // 2247122350
		{ &Z_Construct_UFunction_USBZMenuNavBar_SetActiveTab, "SetActiveTab" }, // 3699197728
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuNavBar_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMenuNavBar.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMenuNavBar.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuNavBar_Statics::NewProp_MoveForwardActionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuNavBar" },
		{ "ModuleRelativePath", "Public/SBZMenuNavBar.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZMenuNavBar_Statics::NewProp_MoveForwardActionName = { "MoveForwardActionName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMenuNavBar, MoveForwardActionName), METADATA_PARAMS(Z_Construct_UClass_USBZMenuNavBar_Statics::NewProp_MoveForwardActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuNavBar_Statics::NewProp_MoveForwardActionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuNavBar_Statics::NewProp_MoveBackwardActionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuNavBar" },
		{ "ModuleRelativePath", "Public/SBZMenuNavBar.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZMenuNavBar_Statics::NewProp_MoveBackwardActionName = { "MoveBackwardActionName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMenuNavBar, MoveBackwardActionName), METADATA_PARAMS(Z_Construct_UClass_USBZMenuNavBar_Statics::NewProp_MoveBackwardActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuNavBar_Statics::NewProp_MoveBackwardActionName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMenuNavBar_Statics::NewProp_NavigationButtons_Inner = { "NavigationButtons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZNavButtonParameters, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuNavBar_Statics::NewProp_NavigationButtons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuNavBar" },
		{ "ModuleRelativePath", "Public/SBZMenuNavBar.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMenuNavBar_Statics::NewProp_NavigationButtons = { "NavigationButtons", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMenuNavBar, NavigationButtons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMenuNavBar_Statics::NewProp_NavigationButtons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuNavBar_Statics::NewProp_NavigationButtons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuNavBar_Statics::NewProp_NavigationButtonClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuNavBar" },
		{ "ModuleRelativePath", "Public/SBZMenuNavBar.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMenuNavBar_Statics::NewProp_NavigationButtonClass = { "NavigationButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMenuNavBar, NavigationButtonClass), Z_Construct_UClass_USBZMenuNavBarButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMenuNavBar_Statics::NewProp_NavigationButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuNavBar_Statics::NewProp_NavigationButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuNavBar_Statics::NewProp_Panel_ButtonContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuNavBar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMenuNavBar.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMenuNavBar_Statics::NewProp_Panel_ButtonContainer = { "Panel_ButtonContainer", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMenuNavBar, Panel_ButtonContainer), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMenuNavBar_Statics::NewProp_Panel_ButtonContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuNavBar_Statics::NewProp_Panel_ButtonContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuNavBar_Statics::NewProp_bIsAffectedByInstallProgress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuNavBar" },
		{ "ModuleRelativePath", "Public/SBZMenuNavBar.h" },
	};
#endif
	void Z_Construct_UClass_USBZMenuNavBar_Statics::NewProp_bIsAffectedByInstallProgress_SetBit(void* Obj)
	{
		((USBZMenuNavBar*)Obj)->bIsAffectedByInstallProgress = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZMenuNavBar_Statics::NewProp_bIsAffectedByInstallProgress = { "bIsAffectedByInstallProgress", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZMenuNavBar), &Z_Construct_UClass_USBZMenuNavBar_Statics::NewProp_bIsAffectedByInstallProgress_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZMenuNavBar_Statics::NewProp_bIsAffectedByInstallProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuNavBar_Statics::NewProp_bIsAffectedByInstallProgress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMenuNavBar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuNavBar_Statics::NewProp_MoveForwardActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuNavBar_Statics::NewProp_MoveBackwardActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuNavBar_Statics::NewProp_NavigationButtons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuNavBar_Statics::NewProp_NavigationButtons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuNavBar_Statics::NewProp_NavigationButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuNavBar_Statics::NewProp_Panel_ButtonContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuNavBar_Statics::NewProp_bIsAffectedByInstallProgress,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMenuNavBar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMenuNavBar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMenuNavBar_Statics::ClassParams = {
		&USBZMenuNavBar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMenuNavBar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuNavBar_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMenuNavBar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuNavBar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMenuNavBar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMenuNavBar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMenuNavBar, 3775305570);
	template<> STARBREEZE_API UClass* StaticClass<USBZMenuNavBar>()
	{
		return USBZMenuNavBar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMenuNavBar(Z_Construct_UClass_USBZMenuNavBar, &USBZMenuNavBar::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMenuNavBar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMenuNavBar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
