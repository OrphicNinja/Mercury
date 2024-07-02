// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBaseMenuWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBaseMenuWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseMenuWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseMenuWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInternetStatusWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZControlsReference();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZControlsReferenceWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZBaseMenuWidget::execHideControlsReference)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideControlsReference();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBaseMenuWidget::execOnActiveControlsReferenceChanged)
	{
		P_GET_STRUCT_REF(FSBZControlsReference,Z_Param_Out_InControlsReference);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActiveControlsReferenceChanged(Z_Param_Out_InControlsReference);
		P_NATIVE_END;
	}
	void USBZBaseMenuWidget::StaticRegisterNativesUSBZBaseMenuWidget()
	{
		UClass* Class = USBZBaseMenuWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HideControlsReference", &USBZBaseMenuWidget::execHideControlsReference },
			{ "OnActiveControlsReferenceChanged", &USBZBaseMenuWidget::execOnActiveControlsReferenceChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZBaseMenuWidget_HideControlsReference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBaseMenuWidget_HideControlsReference_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBaseMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBaseMenuWidget_HideControlsReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBaseMenuWidget, nullptr, "HideControlsReference", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBaseMenuWidget_HideControlsReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBaseMenuWidget_HideControlsReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBaseMenuWidget_HideControlsReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBaseMenuWidget_HideControlsReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBaseMenuWidget_OnActiveControlsReferenceChanged_Statics
	{
		struct SBZBaseMenuWidget_eventOnActiveControlsReferenceChanged_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBaseMenuWidget_OnActiveControlsReferenceChanged_Statics::NewProp_InControlsReference_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZBaseMenuWidget_OnActiveControlsReferenceChanged_Statics::NewProp_InControlsReference = { "InControlsReference", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBaseMenuWidget_eventOnActiveControlsReferenceChanged_Parms, InControlsReference), Z_Construct_UScriptStruct_FSBZControlsReference, METADATA_PARAMS(Z_Construct_UFunction_USBZBaseMenuWidget_OnActiveControlsReferenceChanged_Statics::NewProp_InControlsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBaseMenuWidget_OnActiveControlsReferenceChanged_Statics::NewProp_InControlsReference_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBaseMenuWidget_OnActiveControlsReferenceChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBaseMenuWidget_OnActiveControlsReferenceChanged_Statics::NewProp_InControlsReference,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBaseMenuWidget_OnActiveControlsReferenceChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBaseMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBaseMenuWidget_OnActiveControlsReferenceChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBaseMenuWidget, nullptr, "OnActiveControlsReferenceChanged", nullptr, nullptr, sizeof(SBZBaseMenuWidget_eventOnActiveControlsReferenceChanged_Parms), Z_Construct_UFunction_USBZBaseMenuWidget_OnActiveControlsReferenceChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBaseMenuWidget_OnActiveControlsReferenceChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBaseMenuWidget_OnActiveControlsReferenceChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBaseMenuWidget_OnActiveControlsReferenceChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBaseMenuWidget_OnActiveControlsReferenceChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBaseMenuWidget_OnActiveControlsReferenceChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZBaseMenuWidget_NoRegister()
	{
		return USBZBaseMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZBaseMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_ControlsReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_ControlsReference;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBaseMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZInternetStatusWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZBaseMenuWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZBaseMenuWidget_HideControlsReference, "HideControlsReference" }, // 1945347523
		{ &Z_Construct_UFunction_USBZBaseMenuWidget_OnActiveControlsReferenceChanged, "OnActiveControlsReferenceChanged" }, // 219751866
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseMenuWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBaseMenuWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBaseMenuWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseMenuWidget_Statics::NewProp_Widget_ControlsReference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseMenuWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBaseMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBaseMenuWidget_Statics::NewProp_Widget_ControlsReference = { "Widget_ControlsReference", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseMenuWidget, Widget_ControlsReference), Z_Construct_UClass_USBZControlsReferenceWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBaseMenuWidget_Statics::NewProp_Widget_ControlsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseMenuWidget_Statics::NewProp_Widget_ControlsReference_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBaseMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseMenuWidget_Statics::NewProp_Widget_ControlsReference,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBaseMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBaseMenuWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBaseMenuWidget_Statics::ClassParams = {
		&USBZBaseMenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZBaseMenuWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseMenuWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBaseMenuWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseMenuWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBaseMenuWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBaseMenuWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBaseMenuWidget, 932679445);
	template<> STARBREEZE_API UClass* StaticClass<USBZBaseMenuWidget>()
	{
		return USBZBaseMenuWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBaseMenuWidget(Z_Construct_UClass_USBZBaseMenuWidget, &USBZBaseMenuWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBaseMenuWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBaseMenuWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
