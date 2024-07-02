// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZControlsReferenceWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZControlsReferenceWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZControlsReferenceWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZControlsReferenceWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZControlsReference();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZControlsReferenceActionWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZControlsReferenceAxisWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZControlsReferenceWidget::execDisplayActiveControlsReference)
	{
		P_GET_STRUCT_REF(FSBZControlsReference,Z_Param_Out_InControlsReference);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayActiveControlsReference(Z_Param_Out_InControlsReference);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZControlsReferenceWidget::execHideActiveControlsReference)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideActiveControlsReference();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZControlsReferenceWidget::execNativeDisplayControlsReference)
	{
		P_GET_STRUCT_REF(FSBZControlsReference,Z_Param_Out_InControlsReference);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeDisplayControlsReference(Z_Param_Out_InControlsReference);
		P_NATIVE_END;
	}
	static FName NAME_USBZControlsReferenceWidget_DisplayControlsReference = FName(TEXT("DisplayControlsReference"));
	void USBZControlsReferenceWidget::DisplayControlsReference(FSBZControlsReference const& InControlsReference)
	{
		SBZControlsReferenceWidget_eventDisplayControlsReference_Parms Parms;
		Parms.InControlsReference=InControlsReference;
		ProcessEvent(FindFunctionChecked(NAME_USBZControlsReferenceWidget_DisplayControlsReference),&Parms);
	}
	static FName NAME_USBZControlsReferenceWidget_HideControlsReference = FName(TEXT("HideControlsReference"));
	void USBZControlsReferenceWidget::HideControlsReference()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZControlsReferenceWidget_HideControlsReference),NULL);
	}
	void USBZControlsReferenceWidget::StaticRegisterNativesUSBZControlsReferenceWidget()
	{
		UClass* Class = USBZControlsReferenceWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayActiveControlsReference", &USBZControlsReferenceWidget::execDisplayActiveControlsReference },
			{ "HideActiveControlsReference", &USBZControlsReferenceWidget::execHideActiveControlsReference },
			{ "NativeDisplayControlsReference", &USBZControlsReferenceWidget::execNativeDisplayControlsReference },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZControlsReferenceWidget_DisplayActiveControlsReference_Statics
	{
		struct SBZControlsReferenceWidget_eventDisplayActiveControlsReference_Parms
		{
			FSBZControlsReference InControlsReference;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InControlsReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InControlsReference;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZControlsReferenceWidget_DisplayActiveControlsReference_Statics::NewProp_InControlsReference_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZControlsReferenceWidget_DisplayActiveControlsReference_Statics::NewProp_InControlsReference = { "InControlsReference", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZControlsReferenceWidget_eventDisplayActiveControlsReference_Parms, InControlsReference), Z_Construct_UScriptStruct_FSBZControlsReference, METADATA_PARAMS(Z_Construct_UFunction_USBZControlsReferenceWidget_DisplayActiveControlsReference_Statics::NewProp_InControlsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZControlsReferenceWidget_DisplayActiveControlsReference_Statics::NewProp_InControlsReference_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZControlsReferenceWidget_DisplayActiveControlsReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZControlsReferenceWidget_DisplayActiveControlsReference_Statics::NewProp_InControlsReference,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZControlsReferenceWidget_DisplayActiveControlsReference_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZControlsReferenceWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZControlsReferenceWidget_DisplayActiveControlsReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZControlsReferenceWidget, nullptr, "DisplayActiveControlsReference", nullptr, nullptr, sizeof(SBZControlsReferenceWidget_eventDisplayActiveControlsReference_Parms), Z_Construct_UFunction_USBZControlsReferenceWidget_DisplayActiveControlsReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZControlsReferenceWidget_DisplayActiveControlsReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZControlsReferenceWidget_DisplayActiveControlsReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZControlsReferenceWidget_DisplayActiveControlsReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZControlsReferenceWidget_DisplayActiveControlsReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZControlsReferenceWidget_DisplayActiveControlsReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZControlsReferenceWidget_DisplayControlsReference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InControlsReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InControlsReference;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZControlsReferenceWidget_DisplayControlsReference_Statics::NewProp_InControlsReference_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZControlsReferenceWidget_DisplayControlsReference_Statics::NewProp_InControlsReference = { "InControlsReference", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZControlsReferenceWidget_eventDisplayControlsReference_Parms, InControlsReference), Z_Construct_UScriptStruct_FSBZControlsReference, METADATA_PARAMS(Z_Construct_UFunction_USBZControlsReferenceWidget_DisplayControlsReference_Statics::NewProp_InControlsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZControlsReferenceWidget_DisplayControlsReference_Statics::NewProp_InControlsReference_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZControlsReferenceWidget_DisplayControlsReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZControlsReferenceWidget_DisplayControlsReference_Statics::NewProp_InControlsReference,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZControlsReferenceWidget_DisplayControlsReference_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZControlsReferenceWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZControlsReferenceWidget_DisplayControlsReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZControlsReferenceWidget, nullptr, "DisplayControlsReference", nullptr, nullptr, sizeof(SBZControlsReferenceWidget_eventDisplayControlsReference_Parms), Z_Construct_UFunction_USBZControlsReferenceWidget_DisplayControlsReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZControlsReferenceWidget_DisplayControlsReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZControlsReferenceWidget_DisplayControlsReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZControlsReferenceWidget_DisplayControlsReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZControlsReferenceWidget_DisplayControlsReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZControlsReferenceWidget_DisplayControlsReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZControlsReferenceWidget_HideActiveControlsReference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZControlsReferenceWidget_HideActiveControlsReference_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZControlsReferenceWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZControlsReferenceWidget_HideActiveControlsReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZControlsReferenceWidget, nullptr, "HideActiveControlsReference", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZControlsReferenceWidget_HideActiveControlsReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZControlsReferenceWidget_HideActiveControlsReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZControlsReferenceWidget_HideActiveControlsReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZControlsReferenceWidget_HideActiveControlsReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZControlsReferenceWidget_HideControlsReference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZControlsReferenceWidget_HideControlsReference_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZControlsReferenceWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZControlsReferenceWidget_HideControlsReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZControlsReferenceWidget, nullptr, "HideControlsReference", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZControlsReferenceWidget_HideControlsReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZControlsReferenceWidget_HideControlsReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZControlsReferenceWidget_HideControlsReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZControlsReferenceWidget_HideControlsReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZControlsReferenceWidget_NativeDisplayControlsReference_Statics
	{
		struct SBZControlsReferenceWidget_eventNativeDisplayControlsReference_Parms
		{
			FSBZControlsReference InControlsReference;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InControlsReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InControlsReference;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZControlsReferenceWidget_NativeDisplayControlsReference_Statics::NewProp_InControlsReference_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZControlsReferenceWidget_NativeDisplayControlsReference_Statics::NewProp_InControlsReference = { "InControlsReference", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZControlsReferenceWidget_eventNativeDisplayControlsReference_Parms, InControlsReference), Z_Construct_UScriptStruct_FSBZControlsReference, METADATA_PARAMS(Z_Construct_UFunction_USBZControlsReferenceWidget_NativeDisplayControlsReference_Statics::NewProp_InControlsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZControlsReferenceWidget_NativeDisplayControlsReference_Statics::NewProp_InControlsReference_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZControlsReferenceWidget_NativeDisplayControlsReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZControlsReferenceWidget_NativeDisplayControlsReference_Statics::NewProp_InControlsReference,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZControlsReferenceWidget_NativeDisplayControlsReference_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZControlsReferenceWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZControlsReferenceWidget_NativeDisplayControlsReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZControlsReferenceWidget, nullptr, "NativeDisplayControlsReference", nullptr, nullptr, sizeof(SBZControlsReferenceWidget_eventNativeDisplayControlsReference_Parms), Z_Construct_UFunction_USBZControlsReferenceWidget_NativeDisplayControlsReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZControlsReferenceWidget_NativeDisplayControlsReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZControlsReferenceWidget_NativeDisplayControlsReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZControlsReferenceWidget_NativeDisplayControlsReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZControlsReferenceWidget_NativeDisplayControlsReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZControlsReferenceWidget_NativeDisplayControlsReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZControlsReferenceWidget_NoRegister()
	{
		return USBZControlsReferenceWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZControlsReferenceWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxActionsDisplayed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxActionsDisplayed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlsReferenceActionWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ControlsReferenceActionWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlsReferenceAxisWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ControlsReferenceAxisWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_ActionLists_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_ActionLists;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_AxisLists_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_AxisLists;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZControlsReferenceWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZControlsReferenceWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZControlsReferenceWidget_DisplayActiveControlsReference, "DisplayActiveControlsReference" }, // 2164913259
		{ &Z_Construct_UFunction_USBZControlsReferenceWidget_DisplayControlsReference, "DisplayControlsReference" }, // 3268451724
		{ &Z_Construct_UFunction_USBZControlsReferenceWidget_HideActiveControlsReference, "HideActiveControlsReference" }, // 2362203746
		{ &Z_Construct_UFunction_USBZControlsReferenceWidget_HideControlsReference, "HideControlsReference" }, // 159440690
		{ &Z_Construct_UFunction_USBZControlsReferenceWidget_NativeDisplayControlsReference, "NativeDisplayControlsReference" }, // 108162948
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZControlsReferenceWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZControlsReferenceWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZControlsReferenceWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZControlsReferenceWidget_Statics::NewProp_MaxActionsDisplayed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZControlsReferenceWidget" },
		{ "ModuleRelativePath", "Public/SBZControlsReferenceWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZControlsReferenceWidget_Statics::NewProp_MaxActionsDisplayed = { "MaxActionsDisplayed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZControlsReferenceWidget, MaxActionsDisplayed), METADATA_PARAMS(Z_Construct_UClass_USBZControlsReferenceWidget_Statics::NewProp_MaxActionsDisplayed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZControlsReferenceWidget_Statics::NewProp_MaxActionsDisplayed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZControlsReferenceWidget_Statics::NewProp_ControlsReferenceActionWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZControlsReferenceWidget" },
		{ "ModuleRelativePath", "Public/SBZControlsReferenceWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZControlsReferenceWidget_Statics::NewProp_ControlsReferenceActionWidgetClass = { "ControlsReferenceActionWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZControlsReferenceWidget, ControlsReferenceActionWidgetClass), Z_Construct_UClass_USBZControlsReferenceActionWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZControlsReferenceWidget_Statics::NewProp_ControlsReferenceActionWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZControlsReferenceWidget_Statics::NewProp_ControlsReferenceActionWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZControlsReferenceWidget_Statics::NewProp_ControlsReferenceAxisWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZControlsReferenceWidget" },
		{ "ModuleRelativePath", "Public/SBZControlsReferenceWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZControlsReferenceWidget_Statics::NewProp_ControlsReferenceAxisWidgetClass = { "ControlsReferenceAxisWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZControlsReferenceWidget, ControlsReferenceAxisWidgetClass), Z_Construct_UClass_USBZControlsReferenceAxisWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZControlsReferenceWidget_Statics::NewProp_ControlsReferenceAxisWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZControlsReferenceWidget_Statics::NewProp_ControlsReferenceAxisWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZControlsReferenceWidget_Statics::NewProp_Panel_ActionLists_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZControlsReferenceWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZControlsReferenceWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZControlsReferenceWidget_Statics::NewProp_Panel_ActionLists = { "Panel_ActionLists", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZControlsReferenceWidget, Panel_ActionLists), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZControlsReferenceWidget_Statics::NewProp_Panel_ActionLists_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZControlsReferenceWidget_Statics::NewProp_Panel_ActionLists_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZControlsReferenceWidget_Statics::NewProp_Panel_AxisLists_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZControlsReferenceWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZControlsReferenceWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZControlsReferenceWidget_Statics::NewProp_Panel_AxisLists = { "Panel_AxisLists", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZControlsReferenceWidget, Panel_AxisLists), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZControlsReferenceWidget_Statics::NewProp_Panel_AxisLists_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZControlsReferenceWidget_Statics::NewProp_Panel_AxisLists_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZControlsReferenceWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZControlsReferenceWidget_Statics::NewProp_MaxActionsDisplayed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZControlsReferenceWidget_Statics::NewProp_ControlsReferenceActionWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZControlsReferenceWidget_Statics::NewProp_ControlsReferenceAxisWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZControlsReferenceWidget_Statics::NewProp_Panel_ActionLists,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZControlsReferenceWidget_Statics::NewProp_Panel_AxisLists,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZControlsReferenceWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZControlsReferenceWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZControlsReferenceWidget_Statics::ClassParams = {
		&USBZControlsReferenceWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZControlsReferenceWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZControlsReferenceWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZControlsReferenceWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZControlsReferenceWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZControlsReferenceWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZControlsReferenceWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZControlsReferenceWidget, 2236064488);
	template<> STARBREEZE_API UClass* StaticClass<USBZControlsReferenceWidget>()
	{
		return USBZControlsReferenceWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZControlsReferenceWidget(Z_Construct_UClass_USBZControlsReferenceWidget, &USBZControlsReferenceWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZControlsReferenceWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZControlsReferenceWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
