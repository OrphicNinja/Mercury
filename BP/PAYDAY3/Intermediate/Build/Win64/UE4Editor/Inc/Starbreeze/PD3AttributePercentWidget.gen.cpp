// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3AttributePercentWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3AttributePercentWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3AttributePercentWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3AttributePercentWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerStateWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
// End Cross Module References
	static FName NAME_UPD3AttributePercentWidget_OnCurrentAttributeUpdate = FName(TEXT("OnCurrentAttributeUpdate"));
	void UPD3AttributePercentWidget::OnCurrentAttributeUpdate(float NewValue, float OldPercentage, float NewPercentage)
	{
		PD3AttributePercentWidget_eventOnCurrentAttributeUpdate_Parms Parms;
		Parms.NewValue=NewValue;
		Parms.OldPercentage=OldPercentage;
		Parms.NewPercentage=NewPercentage;
		ProcessEvent(FindFunctionChecked(NAME_UPD3AttributePercentWidget_OnCurrentAttributeUpdate),&Parms);
	}
	static FName NAME_UPD3AttributePercentWidget_OnMaxAttributeUpdate = FName(TEXT("OnMaxAttributeUpdate"));
	void UPD3AttributePercentWidget::OnMaxAttributeUpdate(float NewValue, float OldPercentage, float NewPercentage)
	{
		PD3AttributePercentWidget_eventOnMaxAttributeUpdate_Parms Parms;
		Parms.NewValue=NewValue;
		Parms.OldPercentage=OldPercentage;
		Parms.NewPercentage=NewPercentage;
		ProcessEvent(FindFunctionChecked(NAME_UPD3AttributePercentWidget_OnMaxAttributeUpdate),&Parms);
	}
	static FName NAME_UPD3AttributePercentWidget_OnSetup = FName(TEXT("OnSetup"));
	void UPD3AttributePercentWidget::OnSetup(float CurrentValueSetup, float MaxValueSetup, float PercentageSetup)
	{
		PD3AttributePercentWidget_eventOnSetup_Parms Parms;
		Parms.CurrentValueSetup=CurrentValueSetup;
		Parms.MaxValueSetup=MaxValueSetup;
		Parms.PercentageSetup=PercentageSetup;
		ProcessEvent(FindFunctionChecked(NAME_UPD3AttributePercentWidget_OnSetup),&Parms);
	}
	void UPD3AttributePercentWidget::StaticRegisterNativesUPD3AttributePercentWidget()
	{
	}
	struct Z_Construct_UFunction_UPD3AttributePercentWidget_OnCurrentAttributeUpdate_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OldPercentage;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewPercentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPD3AttributePercentWidget_OnCurrentAttributeUpdate_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3AttributePercentWidget_eventOnCurrentAttributeUpdate_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPD3AttributePercentWidget_OnCurrentAttributeUpdate_Statics::NewProp_OldPercentage = { "OldPercentage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3AttributePercentWidget_eventOnCurrentAttributeUpdate_Parms, OldPercentage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPD3AttributePercentWidget_OnCurrentAttributeUpdate_Statics::NewProp_NewPercentage = { "NewPercentage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3AttributePercentWidget_eventOnCurrentAttributeUpdate_Parms, NewPercentage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3AttributePercentWidget_OnCurrentAttributeUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AttributePercentWidget_OnCurrentAttributeUpdate_Statics::NewProp_NewValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AttributePercentWidget_OnCurrentAttributeUpdate_Statics::NewProp_OldPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AttributePercentWidget_OnCurrentAttributeUpdate_Statics::NewProp_NewPercentage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3AttributePercentWidget_OnCurrentAttributeUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3AttributePercentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3AttributePercentWidget_OnCurrentAttributeUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3AttributePercentWidget, nullptr, "OnCurrentAttributeUpdate", nullptr, nullptr, sizeof(PD3AttributePercentWidget_eventOnCurrentAttributeUpdate_Parms), Z_Construct_UFunction_UPD3AttributePercentWidget_OnCurrentAttributeUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AttributePercentWidget_OnCurrentAttributeUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3AttributePercentWidget_OnCurrentAttributeUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AttributePercentWidget_OnCurrentAttributeUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3AttributePercentWidget_OnCurrentAttributeUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3AttributePercentWidget_OnCurrentAttributeUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3AttributePercentWidget_OnMaxAttributeUpdate_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OldPercentage;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewPercentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPD3AttributePercentWidget_OnMaxAttributeUpdate_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3AttributePercentWidget_eventOnMaxAttributeUpdate_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPD3AttributePercentWidget_OnMaxAttributeUpdate_Statics::NewProp_OldPercentage = { "OldPercentage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3AttributePercentWidget_eventOnMaxAttributeUpdate_Parms, OldPercentage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPD3AttributePercentWidget_OnMaxAttributeUpdate_Statics::NewProp_NewPercentage = { "NewPercentage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3AttributePercentWidget_eventOnMaxAttributeUpdate_Parms, NewPercentage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3AttributePercentWidget_OnMaxAttributeUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AttributePercentWidget_OnMaxAttributeUpdate_Statics::NewProp_NewValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AttributePercentWidget_OnMaxAttributeUpdate_Statics::NewProp_OldPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AttributePercentWidget_OnMaxAttributeUpdate_Statics::NewProp_NewPercentage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3AttributePercentWidget_OnMaxAttributeUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3AttributePercentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3AttributePercentWidget_OnMaxAttributeUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3AttributePercentWidget, nullptr, "OnMaxAttributeUpdate", nullptr, nullptr, sizeof(PD3AttributePercentWidget_eventOnMaxAttributeUpdate_Parms), Z_Construct_UFunction_UPD3AttributePercentWidget_OnMaxAttributeUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AttributePercentWidget_OnMaxAttributeUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3AttributePercentWidget_OnMaxAttributeUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AttributePercentWidget_OnMaxAttributeUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3AttributePercentWidget_OnMaxAttributeUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3AttributePercentWidget_OnMaxAttributeUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3AttributePercentWidget_OnSetup_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentValueSetup;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxValueSetup;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentageSetup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPD3AttributePercentWidget_OnSetup_Statics::NewProp_CurrentValueSetup = { "CurrentValueSetup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3AttributePercentWidget_eventOnSetup_Parms, CurrentValueSetup), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPD3AttributePercentWidget_OnSetup_Statics::NewProp_MaxValueSetup = { "MaxValueSetup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3AttributePercentWidget_eventOnSetup_Parms, MaxValueSetup), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPD3AttributePercentWidget_OnSetup_Statics::NewProp_PercentageSetup = { "PercentageSetup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3AttributePercentWidget_eventOnSetup_Parms, PercentageSetup), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3AttributePercentWidget_OnSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AttributePercentWidget_OnSetup_Statics::NewProp_CurrentValueSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AttributePercentWidget_OnSetup_Statics::NewProp_MaxValueSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3AttributePercentWidget_OnSetup_Statics::NewProp_PercentageSetup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3AttributePercentWidget_OnSetup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3AttributePercentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3AttributePercentWidget_OnSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3AttributePercentWidget, nullptr, "OnSetup", nullptr, nullptr, sizeof(PD3AttributePercentWidget_eventOnSetup_Parms), Z_Construct_UFunction_UPD3AttributePercentWidget_OnSetup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AttributePercentWidget_OnSetup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3AttributePercentWidget_OnSetup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3AttributePercentWidget_OnSetup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3AttributePercentWidget_OnSetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3AttributePercentWidget_OnSetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPD3AttributePercentWidget_NoRegister()
	{
		return UPD3AttributePercentWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPD3AttributePercentWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueGameplayAttribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ValueGameplayAttribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxGameplayAttribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxGameplayAttribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinNonEmptyScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinNonEmptyScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3AttributePercentWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerStateWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPD3AttributePercentWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPD3AttributePercentWidget_OnCurrentAttributeUpdate, "OnCurrentAttributeUpdate" }, // 975270482
		{ &Z_Construct_UFunction_UPD3AttributePercentWidget_OnMaxAttributeUpdate, "OnMaxAttributeUpdate" }, // 85456956
		{ &Z_Construct_UFunction_UPD3AttributePercentWidget_OnSetup, "OnSetup" }, // 303908517
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3AttributePercentWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3AttributePercentWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3AttributePercentWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3AttributePercentWidget_Statics::NewProp_ValueGameplayAttribute_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3AttributePercentWidget" },
		{ "ModuleRelativePath", "Public/PD3AttributePercentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPD3AttributePercentWidget_Statics::NewProp_ValueGameplayAttribute = { "ValueGameplayAttribute", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3AttributePercentWidget, ValueGameplayAttribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(Z_Construct_UClass_UPD3AttributePercentWidget_Statics::NewProp_ValueGameplayAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3AttributePercentWidget_Statics::NewProp_ValueGameplayAttribute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3AttributePercentWidget_Statics::NewProp_MaxGameplayAttribute_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3AttributePercentWidget" },
		{ "ModuleRelativePath", "Public/PD3AttributePercentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPD3AttributePercentWidget_Statics::NewProp_MaxGameplayAttribute = { "MaxGameplayAttribute", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3AttributePercentWidget, MaxGameplayAttribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(Z_Construct_UClass_UPD3AttributePercentWidget_Statics::NewProp_MaxGameplayAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3AttributePercentWidget_Statics::NewProp_MaxGameplayAttribute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3AttributePercentWidget_Statics::NewProp_MinNonEmptyScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3AttributePercentWidget" },
		{ "ModuleRelativePath", "Public/PD3AttributePercentWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPD3AttributePercentWidget_Statics::NewProp_MinNonEmptyScale = { "MinNonEmptyScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3AttributePercentWidget, MinNonEmptyScale), METADATA_PARAMS(Z_Construct_UClass_UPD3AttributePercentWidget_Statics::NewProp_MinNonEmptyScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3AttributePercentWidget_Statics::NewProp_MinNonEmptyScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPD3AttributePercentWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3AttributePercentWidget_Statics::NewProp_ValueGameplayAttribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3AttributePercentWidget_Statics::NewProp_MaxGameplayAttribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3AttributePercentWidget_Statics::NewProp_MinNonEmptyScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3AttributePercentWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3AttributePercentWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3AttributePercentWidget_Statics::ClassParams = {
		&UPD3AttributePercentWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPD3AttributePercentWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPD3AttributePercentWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPD3AttributePercentWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3AttributePercentWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3AttributePercentWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3AttributePercentWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3AttributePercentWidget, 3664617724);
	template<> STARBREEZE_API UClass* StaticClass<UPD3AttributePercentWidget>()
	{
		return UPD3AttributePercentWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3AttributePercentWidget(Z_Construct_UClass_UPD3AttributePercentWidget, &UPD3AttributePercentWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3AttributePercentWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3AttributePercentWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
