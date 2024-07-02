// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHUDDamageTakenIndicatorContainerWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHUDDamageTakenIndicatorContainerWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDamageEvent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHUDDamageTakenIndicatorWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZHUDDamageTakenIndicatorContainerWidget::execOnTakenDamageEvent)
	{
		P_GET_STRUCT_REF(FSBZDamageEvent,Z_Param_Out_DamageEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTakenDamageEvent(Z_Param_Out_DamageEventData);
		P_NATIVE_END;
	}
	void USBZHUDDamageTakenIndicatorContainerWidget::StaticRegisterNativesUSBZHUDDamageTakenIndicatorContainerWidget()
	{
		UClass* Class = USBZHUDDamageTakenIndicatorContainerWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTakenDamageEvent", &USBZHUDDamageTakenIndicatorContainerWidget::execOnTakenDamageEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZHUDDamageTakenIndicatorContainerWidget_OnTakenDamageEvent_Statics
	{
		struct SBZHUDDamageTakenIndicatorContainerWidget_eventOnTakenDamageEvent_Parms
		{
			FSBZDamageEvent DamageEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageEventData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDDamageTakenIndicatorContainerWidget_OnTakenDamageEvent_Statics::NewProp_DamageEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZHUDDamageTakenIndicatorContainerWidget_OnTakenDamageEvent_Statics::NewProp_DamageEventData = { "DamageEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHUDDamageTakenIndicatorContainerWidget_eventOnTakenDamageEvent_Parms, DamageEventData), Z_Construct_UScriptStruct_FSBZDamageEvent, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDDamageTakenIndicatorContainerWidget_OnTakenDamageEvent_Statics::NewProp_DamageEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDDamageTakenIndicatorContainerWidget_OnTakenDamageEvent_Statics::NewProp_DamageEventData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHUDDamageTakenIndicatorContainerWidget_OnTakenDamageEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHUDDamageTakenIndicatorContainerWidget_OnTakenDamageEvent_Statics::NewProp_DamageEventData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDDamageTakenIndicatorContainerWidget_OnTakenDamageEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHUDDamageTakenIndicatorContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHUDDamageTakenIndicatorContainerWidget_OnTakenDamageEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget, nullptr, "OnTakenDamageEvent", nullptr, nullptr, sizeof(SBZHUDDamageTakenIndicatorContainerWidget_eventOnTakenDamageEvent_Parms), Z_Construct_UFunction_USBZHUDDamageTakenIndicatorContainerWidget_OnTakenDamageEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDDamageTakenIndicatorContainerWidget_OnTakenDamageEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDDamageTakenIndicatorContainerWidget_OnTakenDamageEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDDamageTakenIndicatorContainerWidget_OnTakenDamageEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHUDDamageTakenIndicatorContainerWidget_OnTakenDamageEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHUDDamageTakenIndicatorContainerWidget_OnTakenDamageEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_NoRegister()
	{
		return USBZHUDDamageTakenIndicatorContainerWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageTakenWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageTakenWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfDamageIndicators_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfDamageIndicators;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthDamageColorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HealthDamageColorName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmorDamageColorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ArmorDamageColorName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_HUDDamageTakenContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_HUDDamageTakenContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageIndicators_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageIndicators_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageIndicators_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DamageIndicators;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZHUDDamageTakenIndicatorContainerWidget_OnTakenDamageEvent, "OnTakenDamageEvent" }, // 3125751511
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHUDDamageTakenIndicatorContainerWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHUDDamageTakenIndicatorContainerWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_DamageTakenWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHUDDamageTakenIndicatorContainerWidget" },
		{ "ModuleRelativePath", "Public/SBZHUDDamageTakenIndicatorContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_DamageTakenWidgetClass = { "DamageTakenWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHUDDamageTakenIndicatorContainerWidget, DamageTakenWidgetClass), Z_Construct_UClass_USBZHUDDamageTakenIndicatorWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_DamageTakenWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_DamageTakenWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_NumberOfDamageIndicators_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHUDDamageTakenIndicatorContainerWidget" },
		{ "ModuleRelativePath", "Public/SBZHUDDamageTakenIndicatorContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_NumberOfDamageIndicators = { "NumberOfDamageIndicators", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHUDDamageTakenIndicatorContainerWidget, NumberOfDamageIndicators), METADATA_PARAMS(Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_NumberOfDamageIndicators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_NumberOfDamageIndicators_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_HealthDamageColorName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHUDDamageTakenIndicatorContainerWidget" },
		{ "ModuleRelativePath", "Public/SBZHUDDamageTakenIndicatorContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_HealthDamageColorName = { "HealthDamageColorName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHUDDamageTakenIndicatorContainerWidget, HealthDamageColorName), METADATA_PARAMS(Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_HealthDamageColorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_HealthDamageColorName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_ArmorDamageColorName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHUDDamageTakenIndicatorContainerWidget" },
		{ "ModuleRelativePath", "Public/SBZHUDDamageTakenIndicatorContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_ArmorDamageColorName = { "ArmorDamageColorName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHUDDamageTakenIndicatorContainerWidget, ArmorDamageColorName), METADATA_PARAMS(Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_ArmorDamageColorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_ArmorDamageColorName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_Panel_HUDDamageTakenContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHUDDamageTakenIndicatorContainerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZHUDDamageTakenIndicatorContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_Panel_HUDDamageTakenContainer = { "Panel_HUDDamageTakenContainer", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHUDDamageTakenIndicatorContainerWidget, Panel_HUDDamageTakenContainer), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_Panel_HUDDamageTakenContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_Panel_HUDDamageTakenContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_DamageIndicators_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHUDDamageTakenIndicatorContainerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZHUDDamageTakenIndicatorContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_DamageIndicators_Inner = { "DamageIndicators", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZHUDDamageTakenIndicatorWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_DamageIndicators_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_DamageIndicators_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_DamageIndicators_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHUDDamageTakenIndicatorContainerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZHUDDamageTakenIndicatorContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_DamageIndicators = { "DamageIndicators", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHUDDamageTakenIndicatorContainerWidget, DamageIndicators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_DamageIndicators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_DamageIndicators_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_DamageTakenWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_NumberOfDamageIndicators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_HealthDamageColorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_ArmorDamageColorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_Panel_HUDDamageTakenContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_DamageIndicators_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::NewProp_DamageIndicators,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZHUDDamageTakenIndicatorContainerWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::ClassParams = {
		&USBZHUDDamageTakenIndicatorContainerWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZHUDDamageTakenIndicatorContainerWidget, 2346385061);
	template<> STARBREEZE_API UClass* StaticClass<USBZHUDDamageTakenIndicatorContainerWidget>()
	{
		return USBZHUDDamageTakenIndicatorContainerWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZHUDDamageTakenIndicatorContainerWidget(Z_Construct_UClass_USBZHUDDamageTakenIndicatorContainerWidget, &USBZHUDDamageTakenIndicatorContainerWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZHUDDamageTakenIndicatorContainerWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZHUDDamageTakenIndicatorContainerWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
