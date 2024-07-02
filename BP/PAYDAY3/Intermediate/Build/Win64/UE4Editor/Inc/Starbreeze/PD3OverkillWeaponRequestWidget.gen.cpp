// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3OverkillWeaponRequestWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3OverkillWeaponRequestWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3OverkillWeaponRequestWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3OverkillWeaponRequestWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerStatePawnWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAbilityInputActionWidget_NoRegister();
// End Cross Module References
	static FName NAME_UPD3OverkillWeaponRequestWidget_OnOverkillProgressChanged = FName(TEXT("OnOverkillProgressChanged"));
	void UPD3OverkillWeaponRequestWidget::OnOverkillProgressChanged(float NewProgress)
	{
		PD3OverkillWeaponRequestWidget_eventOnOverkillProgressChanged_Parms Parms;
		Parms.NewProgress=NewProgress;
		ProcessEvent(FindFunctionChecked(NAME_UPD3OverkillWeaponRequestWidget_OnOverkillProgressChanged),&Parms);
	}
	static FName NAME_UPD3OverkillWeaponRequestWidget_OnOverkillWeaponRequestNotReady = FName(TEXT("OnOverkillWeaponRequestNotReady"));
	void UPD3OverkillWeaponRequestWidget::OnOverkillWeaponRequestNotReady()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPD3OverkillWeaponRequestWidget_OnOverkillWeaponRequestNotReady),NULL);
	}
	static FName NAME_UPD3OverkillWeaponRequestWidget_OnOverkillWeaponRequestReady = FName(TEXT("OnOverkillWeaponRequestReady"));
	void UPD3OverkillWeaponRequestWidget::OnOverkillWeaponRequestReady()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPD3OverkillWeaponRequestWidget_OnOverkillWeaponRequestReady),NULL);
	}
	void UPD3OverkillWeaponRequestWidget::StaticRegisterNativesUPD3OverkillWeaponRequestWidget()
	{
	}
	struct Z_Construct_UFunction_UPD3OverkillWeaponRequestWidget_OnOverkillProgressChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPD3OverkillWeaponRequestWidget_OnOverkillProgressChanged_Statics::NewProp_NewProgress = { "NewProgress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3OverkillWeaponRequestWidget_eventOnOverkillProgressChanged_Parms, NewProgress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3OverkillWeaponRequestWidget_OnOverkillProgressChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3OverkillWeaponRequestWidget_OnOverkillProgressChanged_Statics::NewProp_NewProgress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3OverkillWeaponRequestWidget_OnOverkillProgressChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3OverkillWeaponRequestWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3OverkillWeaponRequestWidget_OnOverkillProgressChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3OverkillWeaponRequestWidget, nullptr, "OnOverkillProgressChanged", nullptr, nullptr, sizeof(PD3OverkillWeaponRequestWidget_eventOnOverkillProgressChanged_Parms), Z_Construct_UFunction_UPD3OverkillWeaponRequestWidget_OnOverkillProgressChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3OverkillWeaponRequestWidget_OnOverkillProgressChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3OverkillWeaponRequestWidget_OnOverkillProgressChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3OverkillWeaponRequestWidget_OnOverkillProgressChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3OverkillWeaponRequestWidget_OnOverkillProgressChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3OverkillWeaponRequestWidget_OnOverkillProgressChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3OverkillWeaponRequestWidget_OnOverkillWeaponRequestNotReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3OverkillWeaponRequestWidget_OnOverkillWeaponRequestNotReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3OverkillWeaponRequestWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3OverkillWeaponRequestWidget_OnOverkillWeaponRequestNotReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3OverkillWeaponRequestWidget, nullptr, "OnOverkillWeaponRequestNotReady", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3OverkillWeaponRequestWidget_OnOverkillWeaponRequestNotReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3OverkillWeaponRequestWidget_OnOverkillWeaponRequestNotReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3OverkillWeaponRequestWidget_OnOverkillWeaponRequestNotReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3OverkillWeaponRequestWidget_OnOverkillWeaponRequestNotReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3OverkillWeaponRequestWidget_OnOverkillWeaponRequestReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3OverkillWeaponRequestWidget_OnOverkillWeaponRequestReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3OverkillWeaponRequestWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3OverkillWeaponRequestWidget_OnOverkillWeaponRequestReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3OverkillWeaponRequestWidget, nullptr, "OnOverkillWeaponRequestReady", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3OverkillWeaponRequestWidget_OnOverkillWeaponRequestReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3OverkillWeaponRequestWidget_OnOverkillWeaponRequestReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3OverkillWeaponRequestWidget_OnOverkillWeaponRequestReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3OverkillWeaponRequestWidget_OnOverkillWeaponRequestReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPD3OverkillWeaponRequestWidget_NoRegister()
	{
		return UPD3OverkillWeaponRequestWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPD3OverkillWeaponRequestWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_AbilityAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_AbilityAction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3OverkillWeaponRequestWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerStatePawnWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPD3OverkillWeaponRequestWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPD3OverkillWeaponRequestWidget_OnOverkillProgressChanged, "OnOverkillProgressChanged" }, // 640702760
		{ &Z_Construct_UFunction_UPD3OverkillWeaponRequestWidget_OnOverkillWeaponRequestNotReady, "OnOverkillWeaponRequestNotReady" }, // 2097535
		{ &Z_Construct_UFunction_UPD3OverkillWeaponRequestWidget_OnOverkillWeaponRequestReady, "OnOverkillWeaponRequestReady" }, // 3081579811
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3OverkillWeaponRequestWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3OverkillWeaponRequestWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3OverkillWeaponRequestWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3OverkillWeaponRequestWidget_Statics::NewProp_Widget_AbilityAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3OverkillWeaponRequestWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3OverkillWeaponRequestWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3OverkillWeaponRequestWidget_Statics::NewProp_Widget_AbilityAction = { "Widget_AbilityAction", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3OverkillWeaponRequestWidget, Widget_AbilityAction), Z_Construct_UClass_USBZAbilityInputActionWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3OverkillWeaponRequestWidget_Statics::NewProp_Widget_AbilityAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3OverkillWeaponRequestWidget_Statics::NewProp_Widget_AbilityAction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPD3OverkillWeaponRequestWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3OverkillWeaponRequestWidget_Statics::NewProp_Widget_AbilityAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3OverkillWeaponRequestWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3OverkillWeaponRequestWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3OverkillWeaponRequestWidget_Statics::ClassParams = {
		&UPD3OverkillWeaponRequestWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPD3OverkillWeaponRequestWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPD3OverkillWeaponRequestWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPD3OverkillWeaponRequestWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3OverkillWeaponRequestWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3OverkillWeaponRequestWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3OverkillWeaponRequestWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3OverkillWeaponRequestWidget, 2008709129);
	template<> STARBREEZE_API UClass* StaticClass<UPD3OverkillWeaponRequestWidget>()
	{
		return UPD3OverkillWeaponRequestWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3OverkillWeaponRequestWidget(Z_Construct_UClass_UPD3OverkillWeaponRequestWidget, &UPD3OverkillWeaponRequestWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3OverkillWeaponRequestWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3OverkillWeaponRequestWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
