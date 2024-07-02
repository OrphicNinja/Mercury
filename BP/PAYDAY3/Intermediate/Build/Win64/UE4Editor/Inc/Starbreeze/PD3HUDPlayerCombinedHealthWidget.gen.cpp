// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3HUDPlayerCombinedHealthWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3HUDPlayerCombinedHealthWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerStateWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3AttributePercentWidget_NoRegister();
// End Cross Module References
	static FName NAME_UPD3HUDPlayerCombinedHealthWidget_BP_OnReplenishArmorChanged = FName(TEXT("BP_OnReplenishArmorChanged"));
	void UPD3HUDPlayerCombinedHealthWidget::BP_OnReplenishArmorChanged(bool bIsReplenishingArmor)
	{
		PD3HUDPlayerCombinedHealthWidget_eventBP_OnReplenishArmorChanged_Parms Parms;
		Parms.bIsReplenishingArmor=bIsReplenishingArmor ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UPD3HUDPlayerCombinedHealthWidget_BP_OnReplenishArmorChanged),&Parms);
	}
	static FName NAME_UPD3HUDPlayerCombinedHealthWidget_Setup = FName(TEXT("Setup"));
	void UPD3HUDPlayerCombinedHealthWidget::Setup()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPD3HUDPlayerCombinedHealthWidget_Setup),NULL);
	}
	void UPD3HUDPlayerCombinedHealthWidget::StaticRegisterNativesUPD3HUDPlayerCombinedHealthWidget()
	{
	}
	struct Z_Construct_UFunction_UPD3HUDPlayerCombinedHealthWidget_BP_OnReplenishArmorChanged_Statics
	{
		static void NewProp_bIsReplenishingArmor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReplenishingArmor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPD3HUDPlayerCombinedHealthWidget_BP_OnReplenishArmorChanged_Statics::NewProp_bIsReplenishingArmor_SetBit(void* Obj)
	{
		((PD3HUDPlayerCombinedHealthWidget_eventBP_OnReplenishArmorChanged_Parms*)Obj)->bIsReplenishingArmor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPD3HUDPlayerCombinedHealthWidget_BP_OnReplenishArmorChanged_Statics::NewProp_bIsReplenishingArmor = { "bIsReplenishingArmor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PD3HUDPlayerCombinedHealthWidget_eventBP_OnReplenishArmorChanged_Parms), &Z_Construct_UFunction_UPD3HUDPlayerCombinedHealthWidget_BP_OnReplenishArmorChanged_Statics::NewProp_bIsReplenishingArmor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3HUDPlayerCombinedHealthWidget_BP_OnReplenishArmorChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HUDPlayerCombinedHealthWidget_BP_OnReplenishArmorChanged_Statics::NewProp_bIsReplenishingArmor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3HUDPlayerCombinedHealthWidget_BP_OnReplenishArmorChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HUDPlayerCombinedHealthWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3HUDPlayerCombinedHealthWidget_BP_OnReplenishArmorChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget, nullptr, "BP_OnReplenishArmorChanged", nullptr, nullptr, sizeof(PD3HUDPlayerCombinedHealthWidget_eventBP_OnReplenishArmorChanged_Parms), Z_Construct_UFunction_UPD3HUDPlayerCombinedHealthWidget_BP_OnReplenishArmorChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDPlayerCombinedHealthWidget_BP_OnReplenishArmorChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3HUDPlayerCombinedHealthWidget_BP_OnReplenishArmorChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDPlayerCombinedHealthWidget_BP_OnReplenishArmorChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3HUDPlayerCombinedHealthWidget_BP_OnReplenishArmorChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3HUDPlayerCombinedHealthWidget_BP_OnReplenishArmorChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3HUDPlayerCombinedHealthWidget_Setup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3HUDPlayerCombinedHealthWidget_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HUDPlayerCombinedHealthWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3HUDPlayerCombinedHealthWidget_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget, nullptr, "Setup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3HUDPlayerCombinedHealthWidget_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDPlayerCombinedHealthWidget_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3HUDPlayerCombinedHealthWidget_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3HUDPlayerCombinedHealthWidget_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_NoRegister()
	{
		return UPD3HUDPlayerCombinedHealthWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_HealthGauge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_HealthGauge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_ArmorGauge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_ArmorGauge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_OverHealGauge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_OverHealGauge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_HealthTraumaGauge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_HealthTraumaGauge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskOffOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaskOffOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskOnOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaskOnOpacity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerStateWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPD3HUDPlayerCombinedHealthWidget_BP_OnReplenishArmorChanged, "BP_OnReplenishArmorChanged" }, // 3584464727
		{ &Z_Construct_UFunction_UPD3HUDPlayerCombinedHealthWidget_Setup, "Setup" }, // 72917520
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3HUDPlayerCombinedHealthWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDPlayerCombinedHealthWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::NewProp_Widget_HealthGauge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPlayerCombinedHealthWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDPlayerCombinedHealthWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::NewProp_Widget_HealthGauge = { "Widget_HealthGauge", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPlayerCombinedHealthWidget, Widget_HealthGauge), Z_Construct_UClass_UPD3AttributePercentWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::NewProp_Widget_HealthGauge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::NewProp_Widget_HealthGauge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::NewProp_Widget_ArmorGauge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPlayerCombinedHealthWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDPlayerCombinedHealthWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::NewProp_Widget_ArmorGauge = { "Widget_ArmorGauge", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPlayerCombinedHealthWidget, Widget_ArmorGauge), Z_Construct_UClass_UPD3AttributePercentWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::NewProp_Widget_ArmorGauge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::NewProp_Widget_ArmorGauge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::NewProp_Widget_OverHealGauge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPlayerCombinedHealthWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDPlayerCombinedHealthWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::NewProp_Widget_OverHealGauge = { "Widget_OverHealGauge", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPlayerCombinedHealthWidget, Widget_OverHealGauge), Z_Construct_UClass_UPD3AttributePercentWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::NewProp_Widget_OverHealGauge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::NewProp_Widget_OverHealGauge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::NewProp_Widget_HealthTraumaGauge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPlayerCombinedHealthWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDPlayerCombinedHealthWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::NewProp_Widget_HealthTraumaGauge = { "Widget_HealthTraumaGauge", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPlayerCombinedHealthWidget, Widget_HealthTraumaGauge), Z_Construct_UClass_UPD3AttributePercentWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::NewProp_Widget_HealthTraumaGauge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::NewProp_Widget_HealthTraumaGauge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::NewProp_MaskOffOpacity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPlayerCombinedHealthWidget" },
		{ "ModuleRelativePath", "Public/PD3HUDPlayerCombinedHealthWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::NewProp_MaskOffOpacity = { "MaskOffOpacity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPlayerCombinedHealthWidget, MaskOffOpacity), METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::NewProp_MaskOffOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::NewProp_MaskOffOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::NewProp_MaskOnOpacity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPlayerCombinedHealthWidget" },
		{ "ModuleRelativePath", "Public/PD3HUDPlayerCombinedHealthWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::NewProp_MaskOnOpacity = { "MaskOnOpacity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPlayerCombinedHealthWidget, MaskOnOpacity), METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::NewProp_MaskOnOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::NewProp_MaskOnOpacity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::NewProp_Widget_HealthGauge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::NewProp_Widget_ArmorGauge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::NewProp_Widget_OverHealGauge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::NewProp_Widget_HealthTraumaGauge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::NewProp_MaskOffOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::NewProp_MaskOnOpacity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3HUDPlayerCombinedHealthWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::ClassParams = {
		&UPD3HUDPlayerCombinedHealthWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3HUDPlayerCombinedHealthWidget, 703768304);
	template<> STARBREEZE_API UClass* StaticClass<UPD3HUDPlayerCombinedHealthWidget>()
	{
		return UPD3HUDPlayerCombinedHealthWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3HUDPlayerCombinedHealthWidget(Z_Construct_UClass_UPD3HUDPlayerCombinedHealthWidget, &UPD3HUDPlayerCombinedHealthWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3HUDPlayerCombinedHealthWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3HUDPlayerCombinedHealthWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
