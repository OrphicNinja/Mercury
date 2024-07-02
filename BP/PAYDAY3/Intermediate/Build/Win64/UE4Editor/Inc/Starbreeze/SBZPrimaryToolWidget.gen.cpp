// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPrimaryToolWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPrimaryToolWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPrimaryToolWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPrimaryToolWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static FName NAME_USBZPrimaryToolWidget_OnNoAmmoTriggered = FName(TEXT("OnNoAmmoTriggered"));
	void USBZPrimaryToolWidget::OnNoAmmoTriggered(float VisibilityTime)
	{
		SBZPrimaryToolWidget_eventOnNoAmmoTriggered_Parms Parms;
		Parms.VisibilityTime=VisibilityTime;
		ProcessEvent(FindFunctionChecked(NAME_USBZPrimaryToolWidget_OnNoAmmoTriggered),&Parms);
	}
	void USBZPrimaryToolWidget::StaticRegisterNativesUSBZPrimaryToolWidget()
	{
	}
	struct Z_Construct_UFunction_USBZPrimaryToolWidget_OnNoAmmoTriggered_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VisibilityTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZPrimaryToolWidget_OnNoAmmoTriggered_Statics::NewProp_VisibilityTime = { "VisibilityTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPrimaryToolWidget_eventOnNoAmmoTriggered_Parms, VisibilityTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPrimaryToolWidget_OnNoAmmoTriggered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPrimaryToolWidget_OnNoAmmoTriggered_Statics::NewProp_VisibilityTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPrimaryToolWidget_OnNoAmmoTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPrimaryToolWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPrimaryToolWidget_OnNoAmmoTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPrimaryToolWidget, nullptr, "OnNoAmmoTriggered", nullptr, nullptr, sizeof(SBZPrimaryToolWidget_eventOnNoAmmoTriggered_Parms), Z_Construct_UFunction_USBZPrimaryToolWidget_OnNoAmmoTriggered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPrimaryToolWidget_OnNoAmmoTriggered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPrimaryToolWidget_OnNoAmmoTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPrimaryToolWidget_OnNoAmmoTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPrimaryToolWidget_OnNoAmmoTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPrimaryToolWidget_OnNoAmmoTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZPrimaryToolWidget_NoRegister()
	{
		return USBZPrimaryToolWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZPrimaryToolWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPrimaryToolWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZPrimaryToolWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZPrimaryToolWidget_OnNoAmmoTriggered, "OnNoAmmoTriggered" }, // 4105856582
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPrimaryToolWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPrimaryToolWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPrimaryToolWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPrimaryToolWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPrimaryToolWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPrimaryToolWidget_Statics::ClassParams = {
		&USBZPrimaryToolWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPrimaryToolWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPrimaryToolWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPrimaryToolWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPrimaryToolWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPrimaryToolWidget, 2367636768);
	template<> STARBREEZE_API UClass* StaticClass<USBZPrimaryToolWidget>()
	{
		return USBZPrimaryToolWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPrimaryToolWidget(Z_Construct_UClass_USBZPrimaryToolWidget, &USBZPrimaryToolWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPrimaryToolWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPrimaryToolWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
