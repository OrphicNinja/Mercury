// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuChallengesWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuChallengesWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuChallengesWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuChallengesWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuButton_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZChallengeCategoryData_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EChallengeStatusEnum();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuBaseChallengeButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuChallengesWidget::execCycleFilterStatuses)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CycleFilterStatuses();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuChallengesWidget::execNativeOnChallengeButtonFocusedChanged)
	{
		P_GET_OBJECT(USBZMenuButton,Z_Param_InCategoryButton);
		P_GET_UBOOL(Z_Param_bIsFocused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnChallengeButtonFocusedChanged(Z_Param_InCategoryButton,Z_Param_bIsFocused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuChallengesWidget::execNextPage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NextPage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuChallengesWidget::execPrevPage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrevPage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuChallengesWidget::execResetFilterStatuses)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetFilterStatuses();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuChallengesWidget::execSetFilterCategory)
	{
		P_GET_OBJECT(USBZChallengeCategoryData,Z_Param_Category);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFilterCategory(Z_Param_Category);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuChallengesWidget::execSetPage)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPage(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuChallengesWidget::execToggleFilterStatus)
	{
		P_GET_ENUM(EChallengeStatusEnum,Z_Param_Status);
		P_GET_UBOOL(Z_Param_ForceSingleOrNone);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleFilterStatus(EChallengeStatusEnum(Z_Param_Status),Z_Param_ForceSingleOrNone);
		P_NATIVE_END;
	}
	static FName NAME_USBZMainMenuChallengesWidget_OnFilterCategoryChanged = FName(TEXT("OnFilterCategoryChanged"));
	void USBZMainMenuChallengesWidget::OnFilterCategoryChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuChallengesWidget_OnFilterCategoryChanged),NULL);
	}
	static FName NAME_USBZMainMenuChallengesWidget_OnFilterStatusesChanged = FName(TEXT("OnFilterStatusesChanged"));
	void USBZMainMenuChallengesWidget::OnFilterStatusesChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuChallengesWidget_OnFilterStatusesChanged),NULL);
	}
	static FName NAME_USBZMainMenuChallengesWidget_OnNewChallengedFocused = FName(TEXT("OnNewChallengedFocused"));
	void USBZMainMenuChallengesWidget::OnNewChallengedFocused(FSBZChallengeData const& InChallengeData)
	{
		SBZMainMenuChallengesWidget_eventOnNewChallengedFocused_Parms Parms;
		Parms.InChallengeData=InChallengeData;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuChallengesWidget_OnNewChallengedFocused),&Parms);
	}
	static FName NAME_USBZMainMenuChallengesWidget_OnPagesChanged = FName(TEXT("OnPagesChanged"));
	void USBZMainMenuChallengesWidget::OnPagesChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuChallengesWidget_OnPagesChanged),NULL);
	}
	void USBZMainMenuChallengesWidget::StaticRegisterNativesUSBZMainMenuChallengesWidget()
	{
		UClass* Class = USBZMainMenuChallengesWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CycleFilterStatuses", &USBZMainMenuChallengesWidget::execCycleFilterStatuses },
			{ "NativeOnChallengeButtonFocusedChanged", &USBZMainMenuChallengesWidget::execNativeOnChallengeButtonFocusedChanged },
			{ "NextPage", &USBZMainMenuChallengesWidget::execNextPage },
			{ "PrevPage", &USBZMainMenuChallengesWidget::execPrevPage },
			{ "ResetFilterStatuses", &USBZMainMenuChallengesWidget::execResetFilterStatuses },
			{ "SetFilterCategory", &USBZMainMenuChallengesWidget::execSetFilterCategory },
			{ "SetPage", &USBZMainMenuChallengesWidget::execSetPage },
			{ "ToggleFilterStatus", &USBZMainMenuChallengesWidget::execToggleFilterStatus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuChallengesWidget_CycleFilterStatuses_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengesWidget_CycleFilterStatuses_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuChallengesWidget_CycleFilterStatuses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuChallengesWidget, nullptr, "CycleFilterStatuses", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengesWidget_CycleFilterStatuses_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengesWidget_CycleFilterStatuses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuChallengesWidget_CycleFilterStatuses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuChallengesWidget_CycleFilterStatuses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuChallengesWidget_NativeOnChallengeButtonFocusedChanged_Statics
	{
		struct SBZMainMenuChallengesWidget_eventNativeOnChallengeButtonFocusedChanged_Parms
		{
			USBZMenuButton* InCategoryButton;
			bool bIsFocused;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCategoryButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCategoryButton;
		static void NewProp_bIsFocused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFocused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengesWidget_NativeOnChallengeButtonFocusedChanged_Statics::NewProp_InCategoryButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuChallengesWidget_NativeOnChallengeButtonFocusedChanged_Statics::NewProp_InCategoryButton = { "InCategoryButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuChallengesWidget_eventNativeOnChallengeButtonFocusedChanged_Parms, InCategoryButton), Z_Construct_UClass_USBZMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengesWidget_NativeOnChallengeButtonFocusedChanged_Statics::NewProp_InCategoryButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengesWidget_NativeOnChallengeButtonFocusedChanged_Statics::NewProp_InCategoryButton_MetaData)) };
	void Z_Construct_UFunction_USBZMainMenuChallengesWidget_NativeOnChallengeButtonFocusedChanged_Statics::NewProp_bIsFocused_SetBit(void* Obj)
	{
		((SBZMainMenuChallengesWidget_eventNativeOnChallengeButtonFocusedChanged_Parms*)Obj)->bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuChallengesWidget_NativeOnChallengeButtonFocusedChanged_Statics::NewProp_bIsFocused = { "bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuChallengesWidget_eventNativeOnChallengeButtonFocusedChanged_Parms), &Z_Construct_UFunction_USBZMainMenuChallengesWidget_NativeOnChallengeButtonFocusedChanged_Statics::NewProp_bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuChallengesWidget_NativeOnChallengeButtonFocusedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuChallengesWidget_NativeOnChallengeButtonFocusedChanged_Statics::NewProp_InCategoryButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuChallengesWidget_NativeOnChallengeButtonFocusedChanged_Statics::NewProp_bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengesWidget_NativeOnChallengeButtonFocusedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuChallengesWidget_NativeOnChallengeButtonFocusedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuChallengesWidget, nullptr, "NativeOnChallengeButtonFocusedChanged", nullptr, nullptr, sizeof(SBZMainMenuChallengesWidget_eventNativeOnChallengeButtonFocusedChanged_Parms), Z_Construct_UFunction_USBZMainMenuChallengesWidget_NativeOnChallengeButtonFocusedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengesWidget_NativeOnChallengeButtonFocusedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengesWidget_NativeOnChallengeButtonFocusedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengesWidget_NativeOnChallengeButtonFocusedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuChallengesWidget_NativeOnChallengeButtonFocusedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuChallengesWidget_NativeOnChallengeButtonFocusedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuChallengesWidget_NextPage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengesWidget_NextPage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuChallengesWidget_NextPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuChallengesWidget, nullptr, "NextPage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengesWidget_NextPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengesWidget_NextPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuChallengesWidget_NextPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuChallengesWidget_NextPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnFilterCategoryChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnFilterCategoryChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnFilterCategoryChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuChallengesWidget, nullptr, "OnFilterCategoryChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnFilterCategoryChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnFilterCategoryChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnFilterCategoryChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnFilterCategoryChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnFilterStatusesChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnFilterStatusesChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnFilterStatusesChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuChallengesWidget, nullptr, "OnFilterStatusesChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnFilterStatusesChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnFilterStatusesChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnFilterStatusesChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnFilterStatusesChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnNewChallengedFocused_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InChallengeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InChallengeData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnNewChallengedFocused_Statics::NewProp_InChallengeData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnNewChallengedFocused_Statics::NewProp_InChallengeData = { "InChallengeData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuChallengesWidget_eventOnNewChallengedFocused_Parms, InChallengeData), Z_Construct_UScriptStruct_FSBZChallengeData, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnNewChallengedFocused_Statics::NewProp_InChallengeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnNewChallengedFocused_Statics::NewProp_InChallengeData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnNewChallengedFocused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnNewChallengedFocused_Statics::NewProp_InChallengeData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnNewChallengedFocused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnNewChallengedFocused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuChallengesWidget, nullptr, "OnNewChallengedFocused", nullptr, nullptr, sizeof(SBZMainMenuChallengesWidget_eventOnNewChallengedFocused_Parms), Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnNewChallengedFocused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnNewChallengedFocused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnNewChallengedFocused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnNewChallengedFocused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnNewChallengedFocused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnNewChallengedFocused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnPagesChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnPagesChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnPagesChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuChallengesWidget, nullptr, "OnPagesChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnPagesChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnPagesChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnPagesChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnPagesChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuChallengesWidget_PrevPage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengesWidget_PrevPage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuChallengesWidget_PrevPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuChallengesWidget, nullptr, "PrevPage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengesWidget_PrevPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengesWidget_PrevPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuChallengesWidget_PrevPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuChallengesWidget_PrevPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuChallengesWidget_ResetFilterStatuses_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengesWidget_ResetFilterStatuses_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuChallengesWidget_ResetFilterStatuses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuChallengesWidget, nullptr, "ResetFilterStatuses", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengesWidget_ResetFilterStatuses_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengesWidget_ResetFilterStatuses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuChallengesWidget_ResetFilterStatuses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuChallengesWidget_ResetFilterStatuses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuChallengesWidget_SetFilterCategory_Statics
	{
		struct SBZMainMenuChallengesWidget_eventSetFilterCategory_Parms
		{
			const USBZChallengeCategoryData* Category;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengesWidget_SetFilterCategory_Statics::NewProp_Category_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMainMenuChallengesWidget_SetFilterCategory_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuChallengesWidget_eventSetFilterCategory_Parms, Category), Z_Construct_UClass_USBZChallengeCategoryData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengesWidget_SetFilterCategory_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengesWidget_SetFilterCategory_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuChallengesWidget_SetFilterCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuChallengesWidget_SetFilterCategory_Statics::NewProp_Category,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengesWidget_SetFilterCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuChallengesWidget_SetFilterCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuChallengesWidget, nullptr, "SetFilterCategory", nullptr, nullptr, sizeof(SBZMainMenuChallengesWidget_eventSetFilterCategory_Parms), Z_Construct_UFunction_USBZMainMenuChallengesWidget_SetFilterCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengesWidget_SetFilterCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengesWidget_SetFilterCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengesWidget_SetFilterCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuChallengesWidget_SetFilterCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuChallengesWidget_SetFilterCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuChallengesWidget_SetPage_Statics
	{
		struct SBZMainMenuChallengesWidget_eventSetPage_Parms
		{
			int32 Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuChallengesWidget_SetPage_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuChallengesWidget_eventSetPage_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuChallengesWidget_SetPage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuChallengesWidget_SetPage_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengesWidget_SetPage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuChallengesWidget_SetPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuChallengesWidget, nullptr, "SetPage", nullptr, nullptr, sizeof(SBZMainMenuChallengesWidget_eventSetPage_Parms), Z_Construct_UFunction_USBZMainMenuChallengesWidget_SetPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengesWidget_SetPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengesWidget_SetPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengesWidget_SetPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuChallengesWidget_SetPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuChallengesWidget_SetPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuChallengesWidget_ToggleFilterStatus_Statics
	{
		struct SBZMainMenuChallengesWidget_eventToggleFilterStatus_Parms
		{
			EChallengeStatusEnum Status;
			bool ForceSingleOrNone;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
		static void NewProp_ForceSingleOrNone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForceSingleOrNone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMainMenuChallengesWidget_ToggleFilterStatus_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMainMenuChallengesWidget_ToggleFilterStatus_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuChallengesWidget_eventToggleFilterStatus_Parms, Status), Z_Construct_UEnum_Starbreeze_EChallengeStatusEnum, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMainMenuChallengesWidget_ToggleFilterStatus_Statics::NewProp_ForceSingleOrNone_SetBit(void* Obj)
	{
		((SBZMainMenuChallengesWidget_eventToggleFilterStatus_Parms*)Obj)->ForceSingleOrNone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMainMenuChallengesWidget_ToggleFilterStatus_Statics::NewProp_ForceSingleOrNone = { "ForceSingleOrNone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMainMenuChallengesWidget_eventToggleFilterStatus_Parms), &Z_Construct_UFunction_USBZMainMenuChallengesWidget_ToggleFilterStatus_Statics::NewProp_ForceSingleOrNone_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuChallengesWidget_ToggleFilterStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuChallengesWidget_ToggleFilterStatus_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuChallengesWidget_ToggleFilterStatus_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuChallengesWidget_ToggleFilterStatus_Statics::NewProp_ForceSingleOrNone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuChallengesWidget_ToggleFilterStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuChallengesWidget_ToggleFilterStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuChallengesWidget, nullptr, "ToggleFilterStatus", nullptr, nullptr, sizeof(SBZMainMenuChallengesWidget_eventToggleFilterStatus_Parms), Z_Construct_UFunction_USBZMainMenuChallengesWidget_ToggleFilterStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengesWidget_ToggleFilterStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuChallengesWidget_ToggleFilterStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuChallengesWidget_ToggleFilterStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuChallengesWidget_ToggleFilterStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuChallengesWidget_ToggleFilterStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuChallengesWidget_NoRegister()
	{
		return USBZMainMenuChallengesWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_ChallengeButtons_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_ChallengeButtons;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_Loading_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_Loading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ChallengeButtonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengesDisplayedPerPage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChallengesDisplayedPerPage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryCurrent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CategoryCurrent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StatusesCurrent_ElementProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StatusesCurrent_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusesCurrent_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_StatusesCurrent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllStatuses_MetaData[];
#endif
		static void NewProp_AllStatuses_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllStatuses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PagesTotalCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PagesTotalCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PageCurrent_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PageCurrent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeButtons_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChallengeButtons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeButtons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChallengeButtons;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusedChallengeButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FocusedChallengeButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuChallengesWidget_CycleFilterStatuses, "CycleFilterStatuses" }, // 3210467857
		{ &Z_Construct_UFunction_USBZMainMenuChallengesWidget_NativeOnChallengeButtonFocusedChanged, "NativeOnChallengeButtonFocusedChanged" }, // 3827059801
		{ &Z_Construct_UFunction_USBZMainMenuChallengesWidget_NextPage, "NextPage" }, // 4286111114
		{ &Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnFilterCategoryChanged, "OnFilterCategoryChanged" }, // 714944460
		{ &Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnFilterStatusesChanged, "OnFilterStatusesChanged" }, // 1579283055
		{ &Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnNewChallengedFocused, "OnNewChallengedFocused" }, // 2464227844
		{ &Z_Construct_UFunction_USBZMainMenuChallengesWidget_OnPagesChanged, "OnPagesChanged" }, // 3569962710
		{ &Z_Construct_UFunction_USBZMainMenuChallengesWidget_PrevPage, "PrevPage" }, // 4026897322
		{ &Z_Construct_UFunction_USBZMainMenuChallengesWidget_ResetFilterStatuses, "ResetFilterStatuses" }, // 697871744
		{ &Z_Construct_UFunction_USBZMainMenuChallengesWidget_SetFilterCategory, "SetFilterCategory" }, // 2835682202
		{ &Z_Construct_UFunction_USBZMainMenuChallengesWidget_SetPage, "SetPage" }, // 4050470259
		{ &Z_Construct_UFunction_USBZMainMenuChallengesWidget_ToggleFilterStatus, "ToggleFilterStatus" }, // 2027863189
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuChallengesWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengesWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_Panel_ChallengeButtons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuChallengesWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_Panel_ChallengeButtons = { "Panel_ChallengeButtons", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuChallengesWidget, Panel_ChallengeButtons), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_Panel_ChallengeButtons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_Panel_ChallengeButtons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_Widget_Loading_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuChallengesWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_Widget_Loading = { "Widget_Loading", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuChallengesWidget, Widget_Loading), Z_Construct_UClass_USBZWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_Widget_Loading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_Widget_Loading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_ChallengeButtonClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuChallengesWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_ChallengeButtonClass = { "ChallengeButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuChallengesWidget, ChallengeButtonClass), Z_Construct_UClass_USBZMainMenuBaseChallengeButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_ChallengeButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_ChallengeButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_ChallengesDisplayedPerPage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuChallengesWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_ChallengesDisplayedPerPage = { "ChallengesDisplayedPerPage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuChallengesWidget, ChallengesDisplayedPerPage), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_ChallengesDisplayedPerPage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_ChallengesDisplayedPerPage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_CategoryCurrent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuChallengesWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_CategoryCurrent = { "CategoryCurrent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuChallengesWidget, CategoryCurrent), Z_Construct_UClass_USBZChallengeCategoryData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_CategoryCurrent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_CategoryCurrent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_StatusesCurrent_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_StatusesCurrent_ElementProp = { "StatusesCurrent", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_EChallengeStatusEnum, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_StatusesCurrent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuChallengesWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_StatusesCurrent = { "StatusesCurrent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuChallengesWidget, StatusesCurrent), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_StatusesCurrent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_StatusesCurrent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_AllStatuses_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuChallengesWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengesWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_AllStatuses_SetBit(void* Obj)
	{
		((USBZMainMenuChallengesWidget*)Obj)->AllStatuses = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_AllStatuses = { "AllStatuses", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZMainMenuChallengesWidget), &Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_AllStatuses_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_AllStatuses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_AllStatuses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_PagesTotalCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuChallengesWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_PagesTotalCount = { "PagesTotalCount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuChallengesWidget, PagesTotalCount), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_PagesTotalCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_PagesTotalCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_PageCurrent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuChallengesWidget" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_PageCurrent = { "PageCurrent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuChallengesWidget, PageCurrent), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_PageCurrent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_PageCurrent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_ChallengeButtons_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuChallengesWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_ChallengeButtons_Inner = { "ChallengeButtons", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZMainMenuBaseChallengeButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_ChallengeButtons_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_ChallengeButtons_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_ChallengeButtons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuChallengesWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_ChallengeButtons = { "ChallengeButtons", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuChallengesWidget, ChallengeButtons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_ChallengeButtons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_ChallengeButtons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_FocusedChallengeButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuChallengesWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuChallengesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_FocusedChallengeButton = { "FocusedChallengeButton", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuChallengesWidget, FocusedChallengeButton), Z_Construct_UClass_USBZMainMenuBaseChallengeButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_FocusedChallengeButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_FocusedChallengeButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_Panel_ChallengeButtons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_Widget_Loading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_ChallengeButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_ChallengesDisplayedPerPage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_CategoryCurrent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_StatusesCurrent_ElementProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_StatusesCurrent_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_StatusesCurrent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_AllStatuses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_PagesTotalCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_PageCurrent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_ChallengeButtons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_ChallengeButtons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::NewProp_FocusedChallengeButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuChallengesWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::ClassParams = {
		&USBZMainMenuChallengesWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuChallengesWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuChallengesWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuChallengesWidget, 244275720);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuChallengesWidget>()
	{
		return USBZMainMenuChallengesWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuChallengesWidget(Z_Construct_UClass_USBZMainMenuChallengesWidget, &USBZMainMenuChallengesWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuChallengesWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuChallengesWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
