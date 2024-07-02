// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDoubleAttributeWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDoubleAttributeWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDoubleAttributeWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDoubleAttributeWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerStateWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
// End Cross Module References
	static FName NAME_USBZDoubleAttributeWidget_OnPrimaryAttributeUpdate = FName(TEXT("OnPrimaryAttributeUpdate"));
	void USBZDoubleAttributeWidget::OnPrimaryAttributeUpdate(float NewValue, float OldValue)
	{
		SBZDoubleAttributeWidget_eventOnPrimaryAttributeUpdate_Parms Parms;
		Parms.NewValue=NewValue;
		Parms.OldValue=OldValue;
		ProcessEvent(FindFunctionChecked(NAME_USBZDoubleAttributeWidget_OnPrimaryAttributeUpdate),&Parms);
	}
	static FName NAME_USBZDoubleAttributeWidget_OnSecondaryAttributeUpdate = FName(TEXT("OnSecondaryAttributeUpdate"));
	void USBZDoubleAttributeWidget::OnSecondaryAttributeUpdate(float NewValue, float OldValue)
	{
		SBZDoubleAttributeWidget_eventOnSecondaryAttributeUpdate_Parms Parms;
		Parms.NewValue=NewValue;
		Parms.OldValue=OldValue;
		ProcessEvent(FindFunctionChecked(NAME_USBZDoubleAttributeWidget_OnSecondaryAttributeUpdate),&Parms);
	}
	static FName NAME_USBZDoubleAttributeWidget_OnSetup = FName(TEXT("OnSetup"));
	void USBZDoubleAttributeWidget::OnSetup(float PrimaryValue, float SecondaryValue)
	{
		SBZDoubleAttributeWidget_eventOnSetup_Parms Parms;
		Parms.PrimaryValue=PrimaryValue;
		Parms.SecondaryValue=SecondaryValue;
		ProcessEvent(FindFunctionChecked(NAME_USBZDoubleAttributeWidget_OnSetup),&Parms);
	}
	void USBZDoubleAttributeWidget::StaticRegisterNativesUSBZDoubleAttributeWidget()
	{
	}
	struct Z_Construct_UFunction_USBZDoubleAttributeWidget_OnPrimaryAttributeUpdate_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZDoubleAttributeWidget_OnPrimaryAttributeUpdate_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDoubleAttributeWidget_eventOnPrimaryAttributeUpdate_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZDoubleAttributeWidget_OnPrimaryAttributeUpdate_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDoubleAttributeWidget_eventOnPrimaryAttributeUpdate_Parms, OldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZDoubleAttributeWidget_OnPrimaryAttributeUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDoubleAttributeWidget_OnPrimaryAttributeUpdate_Statics::NewProp_NewValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDoubleAttributeWidget_OnPrimaryAttributeUpdate_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZDoubleAttributeWidget_OnPrimaryAttributeUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDoubleAttributeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZDoubleAttributeWidget_OnPrimaryAttributeUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZDoubleAttributeWidget, nullptr, "OnPrimaryAttributeUpdate", nullptr, nullptr, sizeof(SBZDoubleAttributeWidget_eventOnPrimaryAttributeUpdate_Parms), Z_Construct_UFunction_USBZDoubleAttributeWidget_OnPrimaryAttributeUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDoubleAttributeWidget_OnPrimaryAttributeUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZDoubleAttributeWidget_OnPrimaryAttributeUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDoubleAttributeWidget_OnPrimaryAttributeUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZDoubleAttributeWidget_OnPrimaryAttributeUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZDoubleAttributeWidget_OnPrimaryAttributeUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZDoubleAttributeWidget_OnSecondaryAttributeUpdate_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZDoubleAttributeWidget_OnSecondaryAttributeUpdate_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDoubleAttributeWidget_eventOnSecondaryAttributeUpdate_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZDoubleAttributeWidget_OnSecondaryAttributeUpdate_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDoubleAttributeWidget_eventOnSecondaryAttributeUpdate_Parms, OldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZDoubleAttributeWidget_OnSecondaryAttributeUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDoubleAttributeWidget_OnSecondaryAttributeUpdate_Statics::NewProp_NewValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDoubleAttributeWidget_OnSecondaryAttributeUpdate_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZDoubleAttributeWidget_OnSecondaryAttributeUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDoubleAttributeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZDoubleAttributeWidget_OnSecondaryAttributeUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZDoubleAttributeWidget, nullptr, "OnSecondaryAttributeUpdate", nullptr, nullptr, sizeof(SBZDoubleAttributeWidget_eventOnSecondaryAttributeUpdate_Parms), Z_Construct_UFunction_USBZDoubleAttributeWidget_OnSecondaryAttributeUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDoubleAttributeWidget_OnSecondaryAttributeUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZDoubleAttributeWidget_OnSecondaryAttributeUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDoubleAttributeWidget_OnSecondaryAttributeUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZDoubleAttributeWidget_OnSecondaryAttributeUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZDoubleAttributeWidget_OnSecondaryAttributeUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZDoubleAttributeWidget_OnSetup_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PrimaryValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondaryValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZDoubleAttributeWidget_OnSetup_Statics::NewProp_PrimaryValue = { "PrimaryValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDoubleAttributeWidget_eventOnSetup_Parms, PrimaryValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZDoubleAttributeWidget_OnSetup_Statics::NewProp_SecondaryValue = { "SecondaryValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDoubleAttributeWidget_eventOnSetup_Parms, SecondaryValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZDoubleAttributeWidget_OnSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDoubleAttributeWidget_OnSetup_Statics::NewProp_PrimaryValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDoubleAttributeWidget_OnSetup_Statics::NewProp_SecondaryValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZDoubleAttributeWidget_OnSetup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDoubleAttributeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZDoubleAttributeWidget_OnSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZDoubleAttributeWidget, nullptr, "OnSetup", nullptr, nullptr, sizeof(SBZDoubleAttributeWidget_eventOnSetup_Parms), Z_Construct_UFunction_USBZDoubleAttributeWidget_OnSetup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDoubleAttributeWidget_OnSetup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZDoubleAttributeWidget_OnSetup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDoubleAttributeWidget_OnSetup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZDoubleAttributeWidget_OnSetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZDoubleAttributeWidget_OnSetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZDoubleAttributeWidget_NoRegister()
	{
		return USBZDoubleAttributeWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZDoubleAttributeWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryGameplayAttribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryGameplayAttribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryGameplayAttribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryGameplayAttribute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZDoubleAttributeWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerStateWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZDoubleAttributeWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZDoubleAttributeWidget_OnPrimaryAttributeUpdate, "OnPrimaryAttributeUpdate" }, // 4106589936
		{ &Z_Construct_UFunction_USBZDoubleAttributeWidget_OnSecondaryAttributeUpdate, "OnSecondaryAttributeUpdate" }, // 1011671990
		{ &Z_Construct_UFunction_USBZDoubleAttributeWidget_OnSetup, "OnSetup" }, // 4274801240
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDoubleAttributeWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZDoubleAttributeWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDoubleAttributeWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDoubleAttributeWidget_Statics::NewProp_PrimaryGameplayAttribute_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDoubleAttributeWidget" },
		{ "ModuleRelativePath", "Public/SBZDoubleAttributeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZDoubleAttributeWidget_Statics::NewProp_PrimaryGameplayAttribute = { "PrimaryGameplayAttribute", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDoubleAttributeWidget, PrimaryGameplayAttribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(Z_Construct_UClass_USBZDoubleAttributeWidget_Statics::NewProp_PrimaryGameplayAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDoubleAttributeWidget_Statics::NewProp_PrimaryGameplayAttribute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDoubleAttributeWidget_Statics::NewProp_SecondaryGameplayAttribute_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDoubleAttributeWidget" },
		{ "ModuleRelativePath", "Public/SBZDoubleAttributeWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZDoubleAttributeWidget_Statics::NewProp_SecondaryGameplayAttribute = { "SecondaryGameplayAttribute", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDoubleAttributeWidget, SecondaryGameplayAttribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(Z_Construct_UClass_USBZDoubleAttributeWidget_Statics::NewProp_SecondaryGameplayAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDoubleAttributeWidget_Statics::NewProp_SecondaryGameplayAttribute_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZDoubleAttributeWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDoubleAttributeWidget_Statics::NewProp_PrimaryGameplayAttribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDoubleAttributeWidget_Statics::NewProp_SecondaryGameplayAttribute,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDoubleAttributeWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZDoubleAttributeWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDoubleAttributeWidget_Statics::ClassParams = {
		&USBZDoubleAttributeWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZDoubleAttributeWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZDoubleAttributeWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZDoubleAttributeWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDoubleAttributeWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDoubleAttributeWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDoubleAttributeWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDoubleAttributeWidget, 4290188581);
	template<> STARBREEZE_API UClass* StaticClass<USBZDoubleAttributeWidget>()
	{
		return USBZDoubleAttributeWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDoubleAttributeWidget(Z_Construct_UClass_USBZDoubleAttributeWidget, &USBZDoubleAttributeWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDoubleAttributeWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDoubleAttributeWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
