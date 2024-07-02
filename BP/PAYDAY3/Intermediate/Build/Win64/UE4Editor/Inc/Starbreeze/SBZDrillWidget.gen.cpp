// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDrillWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDrillWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDrillWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDrillWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZBreachingEquipmentState();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDrillState();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZDrill_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZDrillEx_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPocketDrill_NoRegister();
// End Cross Module References
	static FName NAME_USBZDrillWidget_OnProgressRateChanged = FName(TEXT("OnProgressRateChanged"));
	void USBZDrillWidget::OnProgressRateChanged(float ProgressPerSec, float HeatPerSec)
	{
		SBZDrillWidget_eventOnProgressRateChanged_Parms Parms;
		Parms.ProgressPerSec=ProgressPerSec;
		Parms.HeatPerSec=HeatPerSec;
		ProcessEvent(FindFunctionChecked(NAME_USBZDrillWidget_OnProgressRateChanged),&Parms);
	}
	static FName NAME_USBZDrillWidget_OnUpdateBreachState = FName(TEXT("OnUpdateBreachState"));
	void USBZDrillWidget::OnUpdateBreachState(ESBZBreachingEquipmentState NewState)
	{
		SBZDrillWidget_eventOnUpdateBreachState_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_USBZDrillWidget_OnUpdateBreachState),&Parms);
	}
	static FName NAME_USBZDrillWidget_OnUpdateState = FName(TEXT("OnUpdateState"));
	void USBZDrillWidget::OnUpdateState(ESBZDrillState StateUpdated)
	{
		SBZDrillWidget_eventOnUpdateState_Parms Parms;
		Parms.StateUpdated=StateUpdated;
		ProcessEvent(FindFunctionChecked(NAME_USBZDrillWidget_OnUpdateState),&Parms);
	}
	void USBZDrillWidget::StaticRegisterNativesUSBZDrillWidget()
	{
	}
	struct Z_Construct_UFunction_USBZDrillWidget_OnProgressRateChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProgressPerSec;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeatPerSec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZDrillWidget_OnProgressRateChanged_Statics::NewProp_ProgressPerSec = { "ProgressPerSec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDrillWidget_eventOnProgressRateChanged_Parms, ProgressPerSec), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZDrillWidget_OnProgressRateChanged_Statics::NewProp_HeatPerSec = { "HeatPerSec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDrillWidget_eventOnProgressRateChanged_Parms, HeatPerSec), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZDrillWidget_OnProgressRateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDrillWidget_OnProgressRateChanged_Statics::NewProp_ProgressPerSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDrillWidget_OnProgressRateChanged_Statics::NewProp_HeatPerSec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZDrillWidget_OnProgressRateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrillWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZDrillWidget_OnProgressRateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZDrillWidget, nullptr, "OnProgressRateChanged", nullptr, nullptr, sizeof(SBZDrillWidget_eventOnProgressRateChanged_Parms), Z_Construct_UFunction_USBZDrillWidget_OnProgressRateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDrillWidget_OnProgressRateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZDrillWidget_OnProgressRateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDrillWidget_OnProgressRateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZDrillWidget_OnProgressRateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZDrillWidget_OnProgressRateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZDrillWidget_OnUpdateBreachState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZDrillWidget_OnUpdateBreachState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZDrillWidget_OnUpdateBreachState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDrillWidget_eventOnUpdateBreachState_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZBreachingEquipmentState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZDrillWidget_OnUpdateBreachState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDrillWidget_OnUpdateBreachState_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDrillWidget_OnUpdateBreachState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZDrillWidget_OnUpdateBreachState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrillWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZDrillWidget_OnUpdateBreachState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZDrillWidget, nullptr, "OnUpdateBreachState", nullptr, nullptr, sizeof(SBZDrillWidget_eventOnUpdateBreachState_Parms), Z_Construct_UFunction_USBZDrillWidget_OnUpdateBreachState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDrillWidget_OnUpdateBreachState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZDrillWidget_OnUpdateBreachState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDrillWidget_OnUpdateBreachState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZDrillWidget_OnUpdateBreachState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZDrillWidget_OnUpdateBreachState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZDrillWidget_OnUpdateState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StateUpdated_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StateUpdated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZDrillWidget_OnUpdateState_Statics::NewProp_StateUpdated_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZDrillWidget_OnUpdateState_Statics::NewProp_StateUpdated = { "StateUpdated", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDrillWidget_eventOnUpdateState_Parms, StateUpdated), Z_Construct_UEnum_Starbreeze_ESBZDrillState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZDrillWidget_OnUpdateState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDrillWidget_OnUpdateState_Statics::NewProp_StateUpdated_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDrillWidget_OnUpdateState_Statics::NewProp_StateUpdated,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZDrillWidget_OnUpdateState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDrillWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZDrillWidget_OnUpdateState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZDrillWidget, nullptr, "OnUpdateState", nullptr, nullptr, sizeof(SBZDrillWidget_eventOnUpdateState_Parms), Z_Construct_UFunction_USBZDrillWidget_OnUpdateState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDrillWidget_OnUpdateState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZDrillWidget_OnUpdateState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDrillWidget_OnUpdateState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZDrillWidget_OnUpdateState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZDrillWidget_OnUpdateState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZDrillWidget_NoRegister()
	{
		return USBZDrillWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZDrillWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeLeftText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimeLeftText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProgressItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeatItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Drill_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Drill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrillEx_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DrillEx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PocketDrill_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PocketDrill;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZDrillWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZDrillWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZDrillWidget_OnProgressRateChanged, "OnProgressRateChanged" }, // 1718150353
		{ &Z_Construct_UFunction_USBZDrillWidget_OnUpdateBreachState, "OnUpdateBreachState" }, // 872118952
		{ &Z_Construct_UFunction_USBZDrillWidget_OnUpdateState, "OnUpdateState" }, // 756419608
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDrillWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZDrillWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDrillWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDrillWidget_Statics::NewProp_TimeLeftText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZDrillWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZDrillWidget_Statics::NewProp_TimeLeftText = { "TimeLeftText", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDrillWidget, TimeLeftText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZDrillWidget_Statics::NewProp_TimeLeftText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDrillWidget_Statics::NewProp_TimeLeftText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDrillWidget_Statics::NewProp_ProgressItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZDrillWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZDrillWidget_Statics::NewProp_ProgressItem = { "ProgressItem", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDrillWidget, ProgressItem), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZDrillWidget_Statics::NewProp_ProgressItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDrillWidget_Statics::NewProp_ProgressItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDrillWidget_Statics::NewProp_HeatItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZDrillWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZDrillWidget_Statics::NewProp_HeatItem = { "HeatItem", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDrillWidget, HeatItem), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZDrillWidget_Statics::NewProp_HeatItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDrillWidget_Statics::NewProp_HeatItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDrillWidget_Statics::NewProp_Drill_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillWidget" },
		{ "ModuleRelativePath", "Public/SBZDrillWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZDrillWidget_Statics::NewProp_Drill = { "Drill", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDrillWidget, Drill), Z_Construct_UClass_ASBZDrill_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZDrillWidget_Statics::NewProp_Drill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDrillWidget_Statics::NewProp_Drill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDrillWidget_Statics::NewProp_DrillEx_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillWidget" },
		{ "ModuleRelativePath", "Public/SBZDrillWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZDrillWidget_Statics::NewProp_DrillEx = { "DrillEx", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDrillWidget, DrillEx), Z_Construct_UClass_ASBZDrillEx_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZDrillWidget_Statics::NewProp_DrillEx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDrillWidget_Statics::NewProp_DrillEx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDrillWidget_Statics::NewProp_PocketDrill_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDrillWidget" },
		{ "ModuleRelativePath", "Public/SBZDrillWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZDrillWidget_Statics::NewProp_PocketDrill = { "PocketDrill", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDrillWidget, PocketDrill), Z_Construct_UClass_ASBZPocketDrill_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZDrillWidget_Statics::NewProp_PocketDrill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDrillWidget_Statics::NewProp_PocketDrill_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZDrillWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDrillWidget_Statics::NewProp_TimeLeftText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDrillWidget_Statics::NewProp_ProgressItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDrillWidget_Statics::NewProp_HeatItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDrillWidget_Statics::NewProp_Drill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDrillWidget_Statics::NewProp_DrillEx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDrillWidget_Statics::NewProp_PocketDrill,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDrillWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZDrillWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDrillWidget_Statics::ClassParams = {
		&USBZDrillWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZDrillWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZDrillWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZDrillWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDrillWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDrillWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDrillWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDrillWidget, 4175868616);
	template<> STARBREEZE_API UClass* StaticClass<USBZDrillWidget>()
	{
		return USBZDrillWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDrillWidget(Z_Construct_UClass_USBZDrillWidget, &USBZDrillWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDrillWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDrillWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
