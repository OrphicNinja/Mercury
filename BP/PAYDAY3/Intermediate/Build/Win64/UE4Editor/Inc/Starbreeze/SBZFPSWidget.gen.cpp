// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZFPSWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZFPSWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFPSWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFPSWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	static FName NAME_USBZFPSWidget_OnDisplayedChanged = FName(TEXT("OnDisplayedChanged"));
	void USBZFPSWidget::OnDisplayedChanged(bool bInIsDisplaying)
	{
		SBZFPSWidget_eventOnDisplayedChanged_Parms Parms;
		Parms.bInIsDisplaying=bInIsDisplaying ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZFPSWidget_OnDisplayedChanged),&Parms);
	}
	void USBZFPSWidget::StaticRegisterNativesUSBZFPSWidget()
	{
	}
	struct Z_Construct_UFunction_USBZFPSWidget_OnDisplayedChanged_Statics
	{
		static void NewProp_bInIsDisplaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsDisplaying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZFPSWidget_OnDisplayedChanged_Statics::NewProp_bInIsDisplaying_SetBit(void* Obj)
	{
		((SBZFPSWidget_eventOnDisplayedChanged_Parms*)Obj)->bInIsDisplaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZFPSWidget_OnDisplayedChanged_Statics::NewProp_bInIsDisplaying = { "bInIsDisplaying", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZFPSWidget_eventOnDisplayedChanged_Parms), &Z_Construct_UFunction_USBZFPSWidget_OnDisplayedChanged_Statics::NewProp_bInIsDisplaying_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZFPSWidget_OnDisplayedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFPSWidget_OnDisplayedChanged_Statics::NewProp_bInIsDisplaying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZFPSWidget_OnDisplayedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFPSWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZFPSWidget_OnDisplayedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZFPSWidget, nullptr, "OnDisplayedChanged", nullptr, nullptr, sizeof(SBZFPSWidget_eventOnDisplayedChanged_Parms), Z_Construct_UFunction_USBZFPSWidget_OnDisplayedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFPSWidget_OnDisplayedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZFPSWidget_OnDisplayedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFPSWidget_OnDisplayedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZFPSWidget_OnDisplayedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZFPSWidget_OnDisplayedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZFPSWidget_NoRegister()
	{
		return USBZFPSWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZFPSWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_FPS_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text_FPS;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZFPSWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZFPSWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZFPSWidget_OnDisplayedChanged, "OnDisplayedChanged" }, // 2103885766
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFPSWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZFPSWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZFPSWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFPSWidget_Statics::NewProp_Text_FPS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFPSWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZFPSWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZFPSWidget_Statics::NewProp_Text_FPS = { "Text_FPS", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFPSWidget, Text_FPS), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZFPSWidget_Statics::NewProp_Text_FPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFPSWidget_Statics::NewProp_Text_FPS_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZFPSWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFPSWidget_Statics::NewProp_Text_FPS,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZFPSWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZFPSWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZFPSWidget_Statics::ClassParams = {
		&USBZFPSWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZFPSWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZFPSWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZFPSWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFPSWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZFPSWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZFPSWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZFPSWidget, 4227514280);
	template<> STARBREEZE_API UClass* StaticClass<USBZFPSWidget>()
	{
		return USBZFPSWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZFPSWidget(Z_Construct_UClass_USBZFPSWidget, &USBZFPSWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZFPSWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZFPSWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
