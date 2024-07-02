// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZControlsReferenceActionWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZControlsReferenceActionWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZControlsReferenceActionWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZControlsReferenceActionWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZActionControlReference();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_OnControlsReferenceActionPressed__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActionInputWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZControlsReferenceActionWidget::execClearControlReference)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearControlReference();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZControlsReferenceActionWidget::execDisplayControlsReferenceWithEvent)
	{
		P_GET_STRUCT_REF(FSBZActionControlReference,Z_Param_Out_InControlsReferenceAction);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_InControlsReferenceActionPressedEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DisplayControlsReferenceWithEvent(Z_Param_Out_InControlsReferenceAction,FOnControlsReferenceActionPressed(Z_Param_InControlsReferenceActionPressedEvent));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZControlsReferenceActionWidget::execOnInputAction)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInputAction(Z_Param_ActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZControlsReferenceActionWidget::execPressControlsReferenceAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PressControlsReferenceAction();
		P_NATIVE_END;
	}
	void USBZControlsReferenceActionWidget::StaticRegisterNativesUSBZControlsReferenceActionWidget()
	{
		UClass* Class = USBZControlsReferenceActionWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearControlReference", &USBZControlsReferenceActionWidget::execClearControlReference },
			{ "DisplayControlsReferenceWithEvent", &USBZControlsReferenceActionWidget::execDisplayControlsReferenceWithEvent },
			{ "OnInputAction", &USBZControlsReferenceActionWidget::execOnInputAction },
			{ "PressControlsReferenceAction", &USBZControlsReferenceActionWidget::execPressControlsReferenceAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZControlsReferenceActionWidget_ClearControlReference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZControlsReferenceActionWidget_ClearControlReference_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZControlsReferenceActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZControlsReferenceActionWidget_ClearControlReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZControlsReferenceActionWidget, nullptr, "ClearControlReference", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZControlsReferenceActionWidget_ClearControlReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZControlsReferenceActionWidget_ClearControlReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZControlsReferenceActionWidget_ClearControlReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZControlsReferenceActionWidget_ClearControlReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZControlsReferenceActionWidget_DisplayControlsReferenceWithEvent_Statics
	{
		struct SBZControlsReferenceActionWidget_eventDisplayControlsReferenceWithEvent_Parms
		{
			FSBZActionControlReference InControlsReferenceAction;
			FScriptDelegate InControlsReferenceActionPressedEvent;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InControlsReferenceAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InControlsReferenceAction;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InControlsReferenceActionPressedEvent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZControlsReferenceActionWidget_DisplayControlsReferenceWithEvent_Statics::NewProp_InControlsReferenceAction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZControlsReferenceActionWidget_DisplayControlsReferenceWithEvent_Statics::NewProp_InControlsReferenceAction = { "InControlsReferenceAction", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZControlsReferenceActionWidget_eventDisplayControlsReferenceWithEvent_Parms, InControlsReferenceAction), Z_Construct_UScriptStruct_FSBZActionControlReference, METADATA_PARAMS(Z_Construct_UFunction_USBZControlsReferenceActionWidget_DisplayControlsReferenceWithEvent_Statics::NewProp_InControlsReferenceAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZControlsReferenceActionWidget_DisplayControlsReferenceWithEvent_Statics::NewProp_InControlsReferenceAction_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USBZControlsReferenceActionWidget_DisplayControlsReferenceWithEvent_Statics::NewProp_InControlsReferenceActionPressedEvent = { "InControlsReferenceActionPressedEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZControlsReferenceActionWidget_eventDisplayControlsReferenceWithEvent_Parms, InControlsReferenceActionPressedEvent), Z_Construct_UDelegateFunction_Starbreeze_OnControlsReferenceActionPressed__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZControlsReferenceActionWidget_DisplayControlsReferenceWithEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZControlsReferenceActionWidget_eventDisplayControlsReferenceWithEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZControlsReferenceActionWidget_DisplayControlsReferenceWithEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZControlsReferenceActionWidget_eventDisplayControlsReferenceWithEvent_Parms), &Z_Construct_UFunction_USBZControlsReferenceActionWidget_DisplayControlsReferenceWithEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZControlsReferenceActionWidget_DisplayControlsReferenceWithEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZControlsReferenceActionWidget_DisplayControlsReferenceWithEvent_Statics::NewProp_InControlsReferenceAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZControlsReferenceActionWidget_DisplayControlsReferenceWithEvent_Statics::NewProp_InControlsReferenceActionPressedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZControlsReferenceActionWidget_DisplayControlsReferenceWithEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZControlsReferenceActionWidget_DisplayControlsReferenceWithEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZControlsReferenceActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZControlsReferenceActionWidget_DisplayControlsReferenceWithEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZControlsReferenceActionWidget, nullptr, "DisplayControlsReferenceWithEvent", nullptr, nullptr, sizeof(SBZControlsReferenceActionWidget_eventDisplayControlsReferenceWithEvent_Parms), Z_Construct_UFunction_USBZControlsReferenceActionWidget_DisplayControlsReferenceWithEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZControlsReferenceActionWidget_DisplayControlsReferenceWithEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZControlsReferenceActionWidget_DisplayControlsReferenceWithEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZControlsReferenceActionWidget_DisplayControlsReferenceWithEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZControlsReferenceActionWidget_DisplayControlsReferenceWithEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZControlsReferenceActionWidget_DisplayControlsReferenceWithEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZControlsReferenceActionWidget_OnInputAction_Statics
	{
		struct SBZControlsReferenceActionWidget_eventOnInputAction_Parms
		{
			FName ActionName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZControlsReferenceActionWidget_OnInputAction_Statics::NewProp_ActionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZControlsReferenceActionWidget_OnInputAction_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZControlsReferenceActionWidget_eventOnInputAction_Parms, ActionName), METADATA_PARAMS(Z_Construct_UFunction_USBZControlsReferenceActionWidget_OnInputAction_Statics::NewProp_ActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZControlsReferenceActionWidget_OnInputAction_Statics::NewProp_ActionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZControlsReferenceActionWidget_OnInputAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZControlsReferenceActionWidget_OnInputAction_Statics::NewProp_ActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZControlsReferenceActionWidget_OnInputAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZControlsReferenceActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZControlsReferenceActionWidget_OnInputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZControlsReferenceActionWidget, nullptr, "OnInputAction", nullptr, nullptr, sizeof(SBZControlsReferenceActionWidget_eventOnInputAction_Parms), Z_Construct_UFunction_USBZControlsReferenceActionWidget_OnInputAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZControlsReferenceActionWidget_OnInputAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZControlsReferenceActionWidget_OnInputAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZControlsReferenceActionWidget_OnInputAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZControlsReferenceActionWidget_OnInputAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZControlsReferenceActionWidget_OnInputAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZControlsReferenceActionWidget_PressControlsReferenceAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZControlsReferenceActionWidget_PressControlsReferenceAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZControlsReferenceActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZControlsReferenceActionWidget_PressControlsReferenceAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZControlsReferenceActionWidget, nullptr, "PressControlsReferenceAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZControlsReferenceActionWidget_PressControlsReferenceAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZControlsReferenceActionWidget_PressControlsReferenceAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZControlsReferenceActionWidget_PressControlsReferenceAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZControlsReferenceActionWidget_PressControlsReferenceAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZControlsReferenceActionWidget_NoRegister()
	{
		return USBZControlsReferenceActionWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_DisplayText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text_DisplayText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_ActionInputLists_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_ActionInputLists;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxActionInputsDisplayed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxActionInputsDisplayed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionInputWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActionInputWidgetClass;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActionList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlsReferenceActionPressedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ControlsReferenceActionPressedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputRegisteredControlsReferenceAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputRegisteredControlsReferenceAction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZControlsReferenceActionWidget_ClearControlReference, "ClearControlReference" }, // 2188973801
		{ &Z_Construct_UFunction_USBZControlsReferenceActionWidget_DisplayControlsReferenceWithEvent, "DisplayControlsReferenceWithEvent" }, // 3033488793
		{ &Z_Construct_UFunction_USBZControlsReferenceActionWidget_OnInputAction, "OnInputAction" }, // 1563404932
		{ &Z_Construct_UFunction_USBZControlsReferenceActionWidget_PressControlsReferenceAction, "PressControlsReferenceAction" }, // 2999302686
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZControlsReferenceActionWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZControlsReferenceActionWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_Text_DisplayText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZControlsReferenceActionWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZControlsReferenceActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_Text_DisplayText = { "Text_DisplayText", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZControlsReferenceActionWidget, Text_DisplayText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_Text_DisplayText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_Text_DisplayText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_Panel_ActionInputLists_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZControlsReferenceActionWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZControlsReferenceActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_Panel_ActionInputLists = { "Panel_ActionInputLists", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZControlsReferenceActionWidget, Panel_ActionInputLists), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_Panel_ActionInputLists_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_Panel_ActionInputLists_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_MaxActionInputsDisplayed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZControlsReferenceActionWidget" },
		{ "ModuleRelativePath", "Public/SBZControlsReferenceActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_MaxActionInputsDisplayed = { "MaxActionInputsDisplayed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZControlsReferenceActionWidget, MaxActionInputsDisplayed), METADATA_PARAMS(Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_MaxActionInputsDisplayed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_MaxActionInputsDisplayed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_ActionInputWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZControlsReferenceActionWidget" },
		{ "ModuleRelativePath", "Public/SBZControlsReferenceActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_ActionInputWidgetClass = { "ActionInputWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZControlsReferenceActionWidget, ActionInputWidgetClass), Z_Construct_UClass_USBZActionInputWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_ActionInputWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_ActionInputWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_ActionList_Inner = { "ActionList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_ActionList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZControlsReferenceActionWidget" },
		{ "ModuleRelativePath", "Public/SBZControlsReferenceActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_ActionList = { "ActionList", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZControlsReferenceActionWidget, ActionList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_ActionList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_ActionList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_ControlsReferenceActionPressedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZControlsReferenceActionWidget" },
		{ "ModuleRelativePath", "Public/SBZControlsReferenceActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_ControlsReferenceActionPressedDelegate = { "ControlsReferenceActionPressedDelegate", nullptr, (EPropertyFlags)0x0020080000082005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZControlsReferenceActionWidget, ControlsReferenceActionPressedDelegate), Z_Construct_UDelegateFunction_Starbreeze_OnControlsReferenceActionPressed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_ControlsReferenceActionPressedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_ControlsReferenceActionPressedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_InputRegisteredControlsReferenceAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZControlsReferenceActionWidget" },
		{ "ModuleRelativePath", "Public/SBZControlsReferenceActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_InputRegisteredControlsReferenceAction = { "InputRegisteredControlsReferenceAction", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZControlsReferenceActionWidget, InputRegisteredControlsReferenceAction), Z_Construct_UScriptStruct_FSBZActionControlReference, METADATA_PARAMS(Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_InputRegisteredControlsReferenceAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_InputRegisteredControlsReferenceAction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_Text_DisplayText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_Panel_ActionInputLists,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_MaxActionInputsDisplayed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_ActionInputWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_ActionList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_ActionList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_ControlsReferenceActionPressedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::NewProp_InputRegisteredControlsReferenceAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZControlsReferenceActionWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::ClassParams = {
		&USBZControlsReferenceActionWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZControlsReferenceActionWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZControlsReferenceActionWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZControlsReferenceActionWidget, 3945293759);
	template<> STARBREEZE_API UClass* StaticClass<USBZControlsReferenceActionWidget>()
	{
		return USBZControlsReferenceActionWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZControlsReferenceActionWidget(Z_Construct_UClass_USBZControlsReferenceActionWidget, &USBZControlsReferenceActionWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZControlsReferenceActionWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZControlsReferenceActionWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
