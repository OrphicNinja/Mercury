// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMenuStackScreenWidgetWithTutorial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMenuStackScreenWidgetWithTutorial() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackScreenWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuMouseButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuTutorialMouseButton_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZPopupType();
// End Cross Module References
	DEFINE_FUNCTION(USBZMenuStackScreenWidgetWithTutorial::execIsShowingTutorial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsShowingTutorial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMenuStackScreenWidgetWithTutorial::execOnTutorialButtonSelected)
	{
		P_GET_OBJECT(USBZMenuMouseButton,Z_Param_Button);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTutorialButtonSelected(Z_Param_Button);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMenuStackScreenWidgetWithTutorial::execToggleShowingTutorial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleShowingTutorial();
		P_NATIVE_END;
	}
	static FName NAME_USBZMenuStackScreenWidgetWithTutorial_OnTutorialDisplayed = FName(TEXT("OnTutorialDisplayed"));
	void USBZMenuStackScreenWidgetWithTutorial::OnTutorialDisplayed()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMenuStackScreenWidgetWithTutorial_OnTutorialDisplayed),NULL);
	}
	static FName NAME_USBZMenuStackScreenWidgetWithTutorial_OnTutorialHidden = FName(TEXT("OnTutorialHidden"));
	void USBZMenuStackScreenWidgetWithTutorial::OnTutorialHidden()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZMenuStackScreenWidgetWithTutorial_OnTutorialHidden),NULL);
	}
	void USBZMenuStackScreenWidgetWithTutorial::StaticRegisterNativesUSBZMenuStackScreenWidgetWithTutorial()
	{
		UClass* Class = USBZMenuStackScreenWidgetWithTutorial::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsShowingTutorial", &USBZMenuStackScreenWidgetWithTutorial::execIsShowingTutorial },
			{ "OnTutorialButtonSelected", &USBZMenuStackScreenWidgetWithTutorial::execOnTutorialButtonSelected },
			{ "ToggleShowingTutorial", &USBZMenuStackScreenWidgetWithTutorial::execToggleShowingTutorial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_IsShowingTutorial_Statics
	{
		struct SBZMenuStackScreenWidgetWithTutorial_eventIsShowingTutorial_Parms
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
	void Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_IsShowingTutorial_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMenuStackScreenWidgetWithTutorial_eventIsShowingTutorial_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_IsShowingTutorial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMenuStackScreenWidgetWithTutorial_eventIsShowingTutorial_Parms), &Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_IsShowingTutorial_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_IsShowingTutorial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_IsShowingTutorial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_IsShowingTutorial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuStackScreenWidgetWithTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_IsShowingTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial, nullptr, "IsShowingTutorial", nullptr, nullptr, sizeof(SBZMenuStackScreenWidgetWithTutorial_eventIsShowingTutorial_Parms), Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_IsShowingTutorial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_IsShowingTutorial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_IsShowingTutorial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_IsShowingTutorial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_IsShowingTutorial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_IsShowingTutorial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_OnTutorialButtonSelected_Statics
	{
		struct SBZMenuStackScreenWidgetWithTutorial_eventOnTutorialButtonSelected_Parms
		{
			USBZMenuMouseButton* Button;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_OnTutorialButtonSelected_Statics::NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_OnTutorialButtonSelected_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMenuStackScreenWidgetWithTutorial_eventOnTutorialButtonSelected_Parms, Button), Z_Construct_UClass_USBZMenuMouseButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_OnTutorialButtonSelected_Statics::NewProp_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_OnTutorialButtonSelected_Statics::NewProp_Button_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_OnTutorialButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_OnTutorialButtonSelected_Statics::NewProp_Button,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_OnTutorialButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuStackScreenWidgetWithTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_OnTutorialButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial, nullptr, "OnTutorialButtonSelected", nullptr, nullptr, sizeof(SBZMenuStackScreenWidgetWithTutorial_eventOnTutorialButtonSelected_Parms), Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_OnTutorialButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_OnTutorialButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_OnTutorialButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_OnTutorialButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_OnTutorialButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_OnTutorialButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_OnTutorialDisplayed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_OnTutorialDisplayed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuStackScreenWidgetWithTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_OnTutorialDisplayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial, nullptr, "OnTutorialDisplayed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_OnTutorialDisplayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_OnTutorialDisplayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_OnTutorialDisplayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_OnTutorialDisplayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_OnTutorialHidden_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_OnTutorialHidden_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuStackScreenWidgetWithTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_OnTutorialHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial, nullptr, "OnTutorialHidden", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_OnTutorialHidden_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_OnTutorialHidden_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_OnTutorialHidden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_OnTutorialHidden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_ToggleShowingTutorial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_ToggleShowingTutorial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMenuStackScreenWidgetWithTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_ToggleShowingTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial, nullptr, "ToggleShowingTutorial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_ToggleShowingTutorial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_ToggleShowingTutorial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_ToggleShowingTutorial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_ToggleShowingTutorial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_NoRegister()
	{
		return USBZMenuStackScreenWidgetWithTutorial::StaticClass();
	}
	struct Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TutorialDisplayAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TutorialDisplayAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TutorialCloseAlternativeAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TutorialCloseAlternativeAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanvasPanel_Tutorial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CanvasPanel_Tutorial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_ToggleHelp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_ToggleHelp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PopupType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopupType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PopupType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTutorialShowing_MetaData[];
#endif
		static void NewProp_bIsTutorialShowing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTutorialShowing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackScreenWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_IsShowingTutorial, "IsShowingTutorial" }, // 3268219635
		{ &Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_OnTutorialButtonSelected, "OnTutorialButtonSelected" }, // 1974212399
		{ &Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_OnTutorialDisplayed, "OnTutorialDisplayed" }, // 3107266854
		{ &Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_OnTutorialHidden, "OnTutorialHidden" }, // 567030177
		{ &Z_Construct_UFunction_USBZMenuStackScreenWidgetWithTutorial_ToggleShowingTutorial, "ToggleShowingTutorial" }, // 3929280850
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMenuStackScreenWidgetWithTutorial.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMenuStackScreenWidgetWithTutorial.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::NewProp_TutorialDisplayAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuStackScreenWidgetWithTutorial" },
		{ "ModuleRelativePath", "Public/SBZMenuStackScreenWidgetWithTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::NewProp_TutorialDisplayAction = { "TutorialDisplayAction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMenuStackScreenWidgetWithTutorial, TutorialDisplayAction), METADATA_PARAMS(Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::NewProp_TutorialDisplayAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::NewProp_TutorialDisplayAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::NewProp_TutorialCloseAlternativeAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuStackScreenWidgetWithTutorial" },
		{ "ModuleRelativePath", "Public/SBZMenuStackScreenWidgetWithTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::NewProp_TutorialCloseAlternativeAction = { "TutorialCloseAlternativeAction", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMenuStackScreenWidgetWithTutorial, TutorialCloseAlternativeAction), METADATA_PARAMS(Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::NewProp_TutorialCloseAlternativeAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::NewProp_TutorialCloseAlternativeAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::NewProp_CanvasPanel_Tutorial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuStackScreenWidgetWithTutorial" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMenuStackScreenWidgetWithTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::NewProp_CanvasPanel_Tutorial = { "CanvasPanel_Tutorial", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMenuStackScreenWidgetWithTutorial, CanvasPanel_Tutorial), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::NewProp_CanvasPanel_Tutorial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::NewProp_CanvasPanel_Tutorial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::NewProp_Button_ToggleHelp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuStackScreenWidgetWithTutorial" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMenuStackScreenWidgetWithTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::NewProp_Button_ToggleHelp = { "Button_ToggleHelp", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMenuStackScreenWidgetWithTutorial, Button_ToggleHelp), Z_Construct_UClass_USBZMenuTutorialMouseButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::NewProp_Button_ToggleHelp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::NewProp_Button_ToggleHelp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::NewProp_PopupType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::NewProp_PopupType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuStackScreenWidgetWithTutorial" },
		{ "ModuleRelativePath", "Public/SBZMenuStackScreenWidgetWithTutorial.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::NewProp_PopupType = { "PopupType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMenuStackScreenWidgetWithTutorial, PopupType), Z_Construct_UEnum_Starbreeze_ESBZPopupType, METADATA_PARAMS(Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::NewProp_PopupType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::NewProp_PopupType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::NewProp_bIsTutorialShowing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMenuStackScreenWidgetWithTutorial" },
		{ "ModuleRelativePath", "Public/SBZMenuStackScreenWidgetWithTutorial.h" },
	};
#endif
	void Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::NewProp_bIsTutorialShowing_SetBit(void* Obj)
	{
		((USBZMenuStackScreenWidgetWithTutorial*)Obj)->bIsTutorialShowing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::NewProp_bIsTutorialShowing = { "bIsTutorialShowing", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZMenuStackScreenWidgetWithTutorial), &Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::NewProp_bIsTutorialShowing_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::NewProp_bIsTutorialShowing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::NewProp_bIsTutorialShowing_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::NewProp_TutorialDisplayAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::NewProp_TutorialCloseAlternativeAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::NewProp_CanvasPanel_Tutorial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::NewProp_Button_ToggleHelp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::NewProp_PopupType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::NewProp_PopupType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::NewProp_bIsTutorialShowing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMenuStackScreenWidgetWithTutorial>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::ClassParams = {
		&USBZMenuStackScreenWidgetWithTutorial::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMenuStackScreenWidgetWithTutorial, 412149117);
	template<> STARBREEZE_API UClass* StaticClass<USBZMenuStackScreenWidgetWithTutorial>()
	{
		return USBZMenuStackScreenWidgetWithTutorial::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMenuStackScreenWidgetWithTutorial(Z_Construct_UClass_USBZMenuStackScreenWidgetWithTutorial, &USBZMenuStackScreenWidgetWithTutorial::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMenuStackScreenWidgetWithTutorial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMenuStackScreenWidgetWithTutorial);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
