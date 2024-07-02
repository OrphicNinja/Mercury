// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZViewTargetContainerWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZViewTargetContainerWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZViewTargetContainerWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZViewTargetContainerWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerController_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZViewTargetCollectionInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZViewTargetWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZControlsReference();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZActionControlReference();
// End Cross Module References
	DEFINE_FUNCTION(USBZViewTargetContainerWidget::execOnViewTargetChanged)
	{
		P_GET_OBJECT(ASBZPlayerController,Z_Param_InPlayerController);
		P_GET_TINTERFACE_REF(ISBZViewTargetCollectionInterface,Z_Param_Out_InViewTargetCollection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnViewTargetChanged(Z_Param_InPlayerController,Z_Param_Out_InViewTargetCollection);
		P_NATIVE_END;
	}
	static FName NAME_USBZViewTargetContainerWidget_IsSecurityCamera = FName(TEXT("IsSecurityCamera"));
	void USBZViewTargetContainerWidget::IsSecurityCamera(bool bIsSecurityCamera)
	{
		SBZViewTargetContainerWidget_eventIsSecurityCamera_Parms Parms;
		Parms.bIsSecurityCamera=bIsSecurityCamera ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZViewTargetContainerWidget_IsSecurityCamera),&Parms);
	}
	void USBZViewTargetContainerWidget::StaticRegisterNativesUSBZViewTargetContainerWidget()
	{
		UClass* Class = USBZViewTargetContainerWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnViewTargetChanged", &USBZViewTargetContainerWidget::execOnViewTargetChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZViewTargetContainerWidget_IsSecurityCamera_Statics
	{
		static void NewProp_bIsSecurityCamera_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSecurityCamera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZViewTargetContainerWidget_IsSecurityCamera_Statics::NewProp_bIsSecurityCamera_SetBit(void* Obj)
	{
		((SBZViewTargetContainerWidget_eventIsSecurityCamera_Parms*)Obj)->bIsSecurityCamera = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZViewTargetContainerWidget_IsSecurityCamera_Statics::NewProp_bIsSecurityCamera = { "bIsSecurityCamera", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZViewTargetContainerWidget_eventIsSecurityCamera_Parms), &Z_Construct_UFunction_USBZViewTargetContainerWidget_IsSecurityCamera_Statics::NewProp_bIsSecurityCamera_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZViewTargetContainerWidget_IsSecurityCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZViewTargetContainerWidget_IsSecurityCamera_Statics::NewProp_bIsSecurityCamera,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZViewTargetContainerWidget_IsSecurityCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZViewTargetContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZViewTargetContainerWidget_IsSecurityCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZViewTargetContainerWidget, nullptr, "IsSecurityCamera", nullptr, nullptr, sizeof(SBZViewTargetContainerWidget_eventIsSecurityCamera_Parms), Z_Construct_UFunction_USBZViewTargetContainerWidget_IsSecurityCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZViewTargetContainerWidget_IsSecurityCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZViewTargetContainerWidget_IsSecurityCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZViewTargetContainerWidget_IsSecurityCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZViewTargetContainerWidget_IsSecurityCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZViewTargetContainerWidget_IsSecurityCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZViewTargetContainerWidget_OnViewTargetChanged_Statics
	{
		struct SBZViewTargetContainerWidget_eventOnViewTargetChanged_Parms
		{
			ASBZPlayerController* InPlayerController;
			TScriptInterface<ISBZViewTargetCollectionInterface> InViewTargetCollection;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InViewTargetCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_InViewTargetCollection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZViewTargetContainerWidget_OnViewTargetChanged_Statics::NewProp_InPlayerController = { "InPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZViewTargetContainerWidget_eventOnViewTargetChanged_Parms, InPlayerController), Z_Construct_UClass_ASBZPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZViewTargetContainerWidget_OnViewTargetChanged_Statics::NewProp_InViewTargetCollection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_USBZViewTargetContainerWidget_OnViewTargetChanged_Statics::NewProp_InViewTargetCollection = { "InViewTargetCollection", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZViewTargetContainerWidget_eventOnViewTargetChanged_Parms, InViewTargetCollection), Z_Construct_UClass_USBZViewTargetCollectionInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZViewTargetContainerWidget_OnViewTargetChanged_Statics::NewProp_InViewTargetCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZViewTargetContainerWidget_OnViewTargetChanged_Statics::NewProp_InViewTargetCollection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZViewTargetContainerWidget_OnViewTargetChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZViewTargetContainerWidget_OnViewTargetChanged_Statics::NewProp_InPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZViewTargetContainerWidget_OnViewTargetChanged_Statics::NewProp_InViewTargetCollection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZViewTargetContainerWidget_OnViewTargetChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZViewTargetContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZViewTargetContainerWidget_OnViewTargetChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZViewTargetContainerWidget, nullptr, "OnViewTargetChanged", nullptr, nullptr, sizeof(SBZViewTargetContainerWidget_eventOnViewTargetChanged_Parms), Z_Construct_UFunction_USBZViewTargetContainerWidget_OnViewTargetChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZViewTargetContainerWidget_OnViewTargetChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZViewTargetContainerWidget_OnViewTargetChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZViewTargetContainerWidget_OnViewTargetChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZViewTargetContainerWidget_OnViewTargetChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZViewTargetContainerWidget_OnViewTargetChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZViewTargetContainerWidget_NoRegister()
	{
		return USBZViewTargetContainerWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZViewTargetContainerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewTargetWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ViewTargetWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_ViewTargetWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_ViewTargetWidgets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlsReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ControlsReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackerAcedControlReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HackerAcedControlReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackerRoutedPingControlReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HackerRoutedPingControlReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackerSecureLoopControlReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HackerSecureLoopControlReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetCollectionInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_TargetCollectionInterface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetPool_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WidgetPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentControlsReferenceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentControlsReferenceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZViewTargetContainerWidget_IsSecurityCamera, "IsSecurityCamera" }, // 2956850434
		{ &Z_Construct_UFunction_USBZViewTargetContainerWidget_OnViewTargetChanged, "OnViewTargetChanged" }, // 410033135
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZViewTargetContainerWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZViewTargetContainerWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_ViewTargetWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZViewTargetContainerWidget" },
		{ "ModuleRelativePath", "Public/SBZViewTargetContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_ViewTargetWidgetClass = { "ViewTargetWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZViewTargetContainerWidget, ViewTargetWidgetClass), Z_Construct_UClass_USBZViewTargetWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_ViewTargetWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_ViewTargetWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_Panel_ViewTargetWidgets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZViewTargetContainerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZViewTargetContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_Panel_ViewTargetWidgets = { "Panel_ViewTargetWidgets", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZViewTargetContainerWidget, Panel_ViewTargetWidgets), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_Panel_ViewTargetWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_Panel_ViewTargetWidgets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_ControlsReference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZViewTargetContainerWidget" },
		{ "ModuleRelativePath", "Public/SBZViewTargetContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_ControlsReference = { "ControlsReference", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZViewTargetContainerWidget, ControlsReference), Z_Construct_UScriptStruct_FSBZControlsReference, METADATA_PARAMS(Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_ControlsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_ControlsReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_HackerAcedControlReference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZViewTargetContainerWidget" },
		{ "ModuleRelativePath", "Public/SBZViewTargetContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_HackerAcedControlReference = { "HackerAcedControlReference", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZViewTargetContainerWidget, HackerAcedControlReference), Z_Construct_UScriptStruct_FSBZActionControlReference, METADATA_PARAMS(Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_HackerAcedControlReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_HackerAcedControlReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_HackerRoutedPingControlReference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZViewTargetContainerWidget" },
		{ "ModuleRelativePath", "Public/SBZViewTargetContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_HackerRoutedPingControlReference = { "HackerRoutedPingControlReference", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZViewTargetContainerWidget, HackerRoutedPingControlReference), Z_Construct_UScriptStruct_FSBZActionControlReference, METADATA_PARAMS(Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_HackerRoutedPingControlReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_HackerRoutedPingControlReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_HackerSecureLoopControlReference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZViewTargetContainerWidget" },
		{ "ModuleRelativePath", "Public/SBZViewTargetContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_HackerSecureLoopControlReference = { "HackerSecureLoopControlReference", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZViewTargetContainerWidget, HackerSecureLoopControlReference), Z_Construct_UScriptStruct_FSBZActionControlReference, METADATA_PARAMS(Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_HackerSecureLoopControlReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_HackerSecureLoopControlReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_CurrentIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZViewTargetContainerWidget" },
		{ "ModuleRelativePath", "Public/SBZViewTargetContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_CurrentIndex = { "CurrentIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZViewTargetContainerWidget, CurrentIndex), METADATA_PARAMS(Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_CurrentIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_CurrentIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_TargetCollectionInterface_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZViewTargetContainerWidget" },
		{ "ModuleRelativePath", "Public/SBZViewTargetContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_TargetCollectionInterface = { "TargetCollectionInterface", nullptr, (EPropertyFlags)0x0044000000002005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZViewTargetContainerWidget, TargetCollectionInterface), Z_Construct_UClass_USBZViewTargetCollectionInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_TargetCollectionInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_TargetCollectionInterface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_WidgetPool_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZViewTargetContainerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZViewTargetContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_WidgetPool_Inner = { "WidgetPool", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZViewTargetWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_WidgetPool_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_WidgetPool_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_WidgetPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZViewTargetContainerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZViewTargetContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_WidgetPool = { "WidgetPool", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZViewTargetContainerWidget, WidgetPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_WidgetPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_WidgetPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_CurrentControlsReferenceID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZViewTargetContainerWidget" },
		{ "ModuleRelativePath", "Public/SBZViewTargetContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_CurrentControlsReferenceID = { "CurrentControlsReferenceID", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZViewTargetContainerWidget, CurrentControlsReferenceID), METADATA_PARAMS(Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_CurrentControlsReferenceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_CurrentControlsReferenceID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_ViewTargetWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_Panel_ViewTargetWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_ControlsReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_HackerAcedControlReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_HackerRoutedPingControlReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_HackerSecureLoopControlReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_CurrentIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_TargetCollectionInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_WidgetPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_WidgetPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::NewProp_CurrentControlsReferenceID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZViewTargetContainerWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::ClassParams = {
		&USBZViewTargetContainerWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZViewTargetContainerWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZViewTargetContainerWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZViewTargetContainerWidget, 1990230091);
	template<> STARBREEZE_API UClass* StaticClass<USBZViewTargetContainerWidget>()
	{
		return USBZViewTargetContainerWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZViewTargetContainerWidget(Z_Construct_UClass_USBZViewTargetContainerWidget, &USBZViewTargetContainerWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZViewTargetContainerWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZViewTargetContainerWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
