// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZActionInputWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZActionInputWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActionInputWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActionInputWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInputKeyWidget_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnActionChanged__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZActionInputWidget::execOnActionPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZActionInputWidget::execOnActionReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionReleased();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZActionInputWidget::execSetAction)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InActionName);
		P_GET_UBOOL(Z_Param_bShouldConsumeInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAction(Z_Param_InActionName,Z_Param_bShouldConsumeInput);
		P_NATIVE_END;
	}
	static FName NAME_USBZActionInputWidget_ActionPressed = FName(TEXT("ActionPressed"));
	void USBZActionInputWidget::ActionPressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZActionInputWidget_ActionPressed),NULL);
	}
	static FName NAME_USBZActionInputWidget_ActionReleased = FName(TEXT("ActionReleased"));
	void USBZActionInputWidget::ActionReleased()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZActionInputWidget_ActionReleased),NULL);
	}
	void USBZActionInputWidget::StaticRegisterNativesUSBZActionInputWidget()
	{
		UClass* Class = USBZActionInputWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnActionPressed", &USBZActionInputWidget::execOnActionPressed },
			{ "OnActionReleased", &USBZActionInputWidget::execOnActionReleased },
			{ "SetAction", &USBZActionInputWidget::execSetAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZActionInputWidget_ActionPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActionInputWidget_ActionPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZActionInputWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZActionInputWidget_ActionPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZActionInputWidget, nullptr, "ActionPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZActionInputWidget_ActionPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActionInputWidget_ActionPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZActionInputWidget_ActionPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZActionInputWidget_ActionPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZActionInputWidget_ActionReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActionInputWidget_ActionReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZActionInputWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZActionInputWidget_ActionReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZActionInputWidget, nullptr, "ActionReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZActionInputWidget_ActionReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActionInputWidget_ActionReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZActionInputWidget_ActionReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZActionInputWidget_ActionReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZActionInputWidget_OnActionPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActionInputWidget_OnActionPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZActionInputWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZActionInputWidget_OnActionPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZActionInputWidget, nullptr, "OnActionPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZActionInputWidget_OnActionPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActionInputWidget_OnActionPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZActionInputWidget_OnActionPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZActionInputWidget_OnActionPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZActionInputWidget_OnActionReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActionInputWidget_OnActionReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZActionInputWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZActionInputWidget_OnActionReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZActionInputWidget, nullptr, "OnActionReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZActionInputWidget_OnActionReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActionInputWidget_OnActionReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZActionInputWidget_OnActionReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZActionInputWidget_OnActionReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZActionInputWidget_SetAction_Statics
	{
		struct SBZActionInputWidget_eventSetAction_Parms
		{
			FName InActionName;
			bool bShouldConsumeInput;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InActionName;
		static void NewProp_bShouldConsumeInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldConsumeInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZActionInputWidget_SetAction_Statics::NewProp_InActionName = { "InActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZActionInputWidget_eventSetAction_Parms, InActionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZActionInputWidget_SetAction_Statics::NewProp_bShouldConsumeInput_SetBit(void* Obj)
	{
		((SBZActionInputWidget_eventSetAction_Parms*)Obj)->bShouldConsumeInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZActionInputWidget_SetAction_Statics::NewProp_bShouldConsumeInput = { "bShouldConsumeInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZActionInputWidget_eventSetAction_Parms), &Z_Construct_UFunction_USBZActionInputWidget_SetAction_Statics::NewProp_bShouldConsumeInput_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZActionInputWidget_SetAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActionInputWidget_SetAction_Statics::NewProp_InActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZActionInputWidget_SetAction_Statics::NewProp_bShouldConsumeInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZActionInputWidget_SetAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZActionInputWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZActionInputWidget_SetAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZActionInputWidget, nullptr, "SetAction", nullptr, nullptr, sizeof(SBZActionInputWidget_eventSetAction_Parms), Z_Construct_UFunction_USBZActionInputWidget_SetAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActionInputWidget_SetAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZActionInputWidget_SetAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZActionInputWidget_SetAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZActionInputWidget_SetAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZActionInputWidget_SetAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZActionInputWidget_NoRegister()
	{
		return USBZActionInputWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZActionInputWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConsumeInput_MetaData[];
#endif
		static void NewProp_bConsumeInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConsumeInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsActionPressed_MetaData[];
#endif
		static void NewProp_bIsActionPressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActionPressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KeyWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsIconVisibleForKeyboardAndMouse_MetaData[];
#endif
		static void NewProp_bIsIconVisibleForKeyboardAndMouse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsIconVisibleForKeyboardAndMouse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActionPressedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActionPressedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActionReleasedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActionReleasedEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZActionInputWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZActionInputWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZActionInputWidget_ActionPressed, "ActionPressed" }, // 1832530478
		{ &Z_Construct_UFunction_USBZActionInputWidget_ActionReleased, "ActionReleased" }, // 620890608
		{ &Z_Construct_UFunction_USBZActionInputWidget_OnActionPressed, "OnActionPressed" }, // 1611985749
		{ &Z_Construct_UFunction_USBZActionInputWidget_OnActionReleased, "OnActionReleased" }, // 663621375
		{ &Z_Construct_UFunction_USBZActionInputWidget_SetAction, "SetAction" }, // 140003390
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActionInputWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZActionInputWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZActionInputWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_ActionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActionInputWidget" },
		{ "ModuleRelativePath", "Public/SBZActionInputWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZActionInputWidget, ActionName), METADATA_PARAMS(Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_ActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_ActionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_bConsumeInput_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActionInputWidget" },
		{ "ModuleRelativePath", "Public/SBZActionInputWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_bConsumeInput_SetBit(void* Obj)
	{
		((USBZActionInputWidget*)Obj)->bConsumeInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_bConsumeInput = { "bConsumeInput", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZActionInputWidget), &Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_bConsumeInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_bConsumeInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_bConsumeInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_bIsActionPressed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActionInputWidget" },
		{ "ModuleRelativePath", "Public/SBZActionInputWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_bIsActionPressed_SetBit(void* Obj)
	{
		((USBZActionInputWidget*)Obj)->bIsActionPressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_bIsActionPressed = { "bIsActionPressed", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZActionInputWidget), &Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_bIsActionPressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_bIsActionPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_bIsActionPressed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_KeyWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActionInputWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZActionInputWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_KeyWidget = { "KeyWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZActionInputWidget, KeyWidget), Z_Construct_UClass_USBZInputKeyWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_KeyWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_KeyWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_bIsIconVisibleForKeyboardAndMouse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActionInputWidget" },
		{ "ModuleRelativePath", "Public/SBZActionInputWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_bIsIconVisibleForKeyboardAndMouse_SetBit(void* Obj)
	{
		((USBZActionInputWidget*)Obj)->bIsIconVisibleForKeyboardAndMouse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_bIsIconVisibleForKeyboardAndMouse = { "bIsIconVisibleForKeyboardAndMouse", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZActionInputWidget), &Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_bIsIconVisibleForKeyboardAndMouse_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_bIsIconVisibleForKeyboardAndMouse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_bIsIconVisibleForKeyboardAndMouse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_OnActionPressedEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActionInputWidget" },
		{ "ModuleRelativePath", "Public/SBZActionInputWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_OnActionPressedEvent = { "OnActionPressedEvent", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZActionInputWidget, OnActionPressedEvent), Z_Construct_UDelegateFunction_Starbreeze_SBZOnActionChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_OnActionPressedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_OnActionPressedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_OnActionReleasedEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActionInputWidget" },
		{ "ModuleRelativePath", "Public/SBZActionInputWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_OnActionReleasedEvent = { "OnActionReleasedEvent", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZActionInputWidget, OnActionReleasedEvent), Z_Construct_UDelegateFunction_Starbreeze_SBZOnActionChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_OnActionReleasedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_OnActionReleasedEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZActionInputWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_ActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_bConsumeInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_bIsActionPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_KeyWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_bIsIconVisibleForKeyboardAndMouse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_OnActionPressedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActionInputWidget_Statics::NewProp_OnActionReleasedEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZActionInputWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZActionInputWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZActionInputWidget_Statics::ClassParams = {
		&USBZActionInputWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZActionInputWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZActionInputWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZActionInputWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActionInputWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZActionInputWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZActionInputWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZActionInputWidget, 170664138);
	template<> STARBREEZE_API UClass* StaticClass<USBZActionInputWidget>()
	{
		return USBZActionInputWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZActionInputWidget(Z_Construct_UClass_USBZActionInputWidget, &USBZActionInputWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZActionInputWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZActionInputWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
