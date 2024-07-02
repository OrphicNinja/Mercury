// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPopupWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPopupWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPopupWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPopupWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZControlsReferenceWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZControlsReference();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPopupWidgetInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZPopupWidget::execAdvanceCountdown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdvanceCountdown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPopupWidget::execHidePopUpWidget)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HidePopUpWidget(Z_Param_ActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPopupWidget::execIsShowing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsShowing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPopupWidget::execOnActionPressed)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionPressed(Z_Param_ActionName);
		P_NATIVE_END;
	}
	static FName NAME_USBZPopupWidget_OnDisplayPopUp = FName(TEXT("OnDisplayPopUp"));
	void USBZPopupWidget::OnDisplayPopUp()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZPopupWidget_OnDisplayPopUp),NULL);
	}
	void USBZPopupWidget::StaticRegisterNativesUSBZPopupWidget()
	{
		UClass* Class = USBZPopupWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdvanceCountdown", &USBZPopupWidget::execAdvanceCountdown },
			{ "HidePopUpWidget", &USBZPopupWidget::execHidePopUpWidget },
			{ "IsShowing", &USBZPopupWidget::execIsShowing },
			{ "OnActionPressed", &USBZPopupWidget::execOnActionPressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZPopupWidget_AdvanceCountdown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPopupWidget_AdvanceCountdown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPopupWidget_AdvanceCountdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPopupWidget, nullptr, "AdvanceCountdown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPopupWidget_AdvanceCountdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPopupWidget_AdvanceCountdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPopupWidget_AdvanceCountdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPopupWidget_AdvanceCountdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPopupWidget_HidePopUpWidget_Statics
	{
		struct SBZPopupWidget_eventHidePopUpWidget_Parms
		{
			FName ActionName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZPopupWidget_HidePopUpWidget_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPopupWidget_eventHidePopUpWidget_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPopupWidget_HidePopUpWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPopupWidget_HidePopUpWidget_Statics::NewProp_ActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPopupWidget_HidePopUpWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPopupWidget_HidePopUpWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPopupWidget, nullptr, "HidePopUpWidget", nullptr, nullptr, sizeof(SBZPopupWidget_eventHidePopUpWidget_Parms), Z_Construct_UFunction_USBZPopupWidget_HidePopUpWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPopupWidget_HidePopUpWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPopupWidget_HidePopUpWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPopupWidget_HidePopUpWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPopupWidget_HidePopUpWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPopupWidget_HidePopUpWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPopupWidget_IsShowing_Statics
	{
		struct SBZPopupWidget_eventIsShowing_Parms
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
	void Z_Construct_UFunction_USBZPopupWidget_IsShowing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZPopupWidget_eventIsShowing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZPopupWidget_IsShowing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPopupWidget_eventIsShowing_Parms), &Z_Construct_UFunction_USBZPopupWidget_IsShowing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPopupWidget_IsShowing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPopupWidget_IsShowing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPopupWidget_IsShowing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPopupWidget_IsShowing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPopupWidget, nullptr, "IsShowing", nullptr, nullptr, sizeof(SBZPopupWidget_eventIsShowing_Parms), Z_Construct_UFunction_USBZPopupWidget_IsShowing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPopupWidget_IsShowing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPopupWidget_IsShowing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPopupWidget_IsShowing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPopupWidget_IsShowing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPopupWidget_IsShowing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPopupWidget_OnActionPressed_Statics
	{
		struct SBZPopupWidget_eventOnActionPressed_Parms
		{
			FName ActionName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZPopupWidget_OnActionPressed_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPopupWidget_eventOnActionPressed_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPopupWidget_OnActionPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPopupWidget_OnActionPressed_Statics::NewProp_ActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPopupWidget_OnActionPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPopupWidget_OnActionPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPopupWidget, nullptr, "OnActionPressed", nullptr, nullptr, sizeof(SBZPopupWidget_eventOnActionPressed_Parms), Z_Construct_UFunction_USBZPopupWidget_OnActionPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPopupWidget_OnActionPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPopupWidget_OnActionPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPopupWidget_OnActionPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPopupWidget_OnActionPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPopupWidget_OnActionPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPopupWidget_OnDisplayPopUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPopupWidget_OnDisplayPopUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPopupWidget_OnDisplayPopUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPopupWidget, nullptr, "OnDisplayPopUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPopupWidget_OnDisplayPopUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPopupWidget_OnDisplayPopUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPopupWidget_OnDisplayPopUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPopupWidget_OnDisplayPopUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZPopupWidget_NoRegister()
	{
		return USBZPopupWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZPopupWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_Header_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text_Header;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_ControlsReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_ControlsReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanvasPanel_PopUpBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CanvasPanel_PopUpBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultControlsReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultControlsReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlsReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ControlsReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsShowing_MetaData[];
#endif
		static void NewProp_bIsShowing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsShowing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPopupWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZPopupWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZPopupWidget_AdvanceCountdown, "AdvanceCountdown" }, // 3404078294
		{ &Z_Construct_UFunction_USBZPopupWidget_HidePopUpWidget, "HidePopUpWidget" }, // 989907930
		{ &Z_Construct_UFunction_USBZPopupWidget_IsShowing, "IsShowing" }, // 3712113469
		{ &Z_Construct_UFunction_USBZPopupWidget_OnActionPressed, "OnActionPressed" }, // 4025124753
		{ &Z_Construct_UFunction_USBZPopupWidget_OnDisplayPopUp, "OnDisplayPopUp" }, // 1688747228
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPopupWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPopupWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPopupWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_Text_Header_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_Text_Header = { "Text_Header", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPopupWidget, Text_Header), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_Text_Header_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_Text_Header_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_Text_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_Text_Description = { "Text_Description", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPopupWidget, Text_Description), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_Text_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_Text_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_Widget_ControlsReference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_Widget_ControlsReference = { "Widget_ControlsReference", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPopupWidget, Widget_ControlsReference), Z_Construct_UClass_USBZControlsReferenceWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_Widget_ControlsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_Widget_ControlsReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_CanvasPanel_PopUpBody_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_CanvasPanel_PopUpBody = { "CanvasPanel_PopUpBody", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPopupWidget, CanvasPanel_PopUpBody), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_CanvasPanel_PopUpBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_CanvasPanel_PopUpBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_DefaultControlsReference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPopupWidget" },
		{ "ModuleRelativePath", "Public/SBZPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_DefaultControlsReference = { "DefaultControlsReference", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPopupWidget, DefaultControlsReference), Z_Construct_UScriptStruct_FSBZControlsReference, METADATA_PARAMS(Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_DefaultControlsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_DefaultControlsReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_ControlsReference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPopupWidget" },
		{ "ModuleRelativePath", "Public/SBZPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_ControlsReference = { "ControlsReference", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPopupWidget, ControlsReference), Z_Construct_UScriptStruct_FSBZControlsReference, METADATA_PARAMS(Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_ControlsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_ControlsReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_bIsShowing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPopupWidget" },
		{ "ModuleRelativePath", "Public/SBZPopupWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_bIsShowing_SetBit(void* Obj)
	{
		((USBZPopupWidget*)Obj)->bIsShowing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_bIsShowing = { "bIsShowing", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZPopupWidget), &Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_bIsShowing_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_bIsShowing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_bIsShowing_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPopupWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_Text_Header,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_Text_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_Widget_ControlsReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_CanvasPanel_PopUpBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_DefaultControlsReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_ControlsReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPopupWidget_Statics::NewProp_bIsShowing,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USBZPopupWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZPopupWidgetInterface_NoRegister, (int32)VTABLE_OFFSET(USBZPopupWidget, ISBZPopupWidgetInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPopupWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPopupWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPopupWidget_Statics::ClassParams = {
		&USBZPopupWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZPopupWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPopupWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPopupWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPopupWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPopupWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPopupWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPopupWidget, 2645339523);
	template<> STARBREEZE_API UClass* StaticClass<USBZPopupWidget>()
	{
		return USBZPopupWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPopupWidget(Z_Construct_UClass_USBZPopupWidget, &USBZPopupWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPopupWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPopupWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
