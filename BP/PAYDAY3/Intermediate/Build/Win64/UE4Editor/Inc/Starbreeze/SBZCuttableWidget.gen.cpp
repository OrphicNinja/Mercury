// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCuttableWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCuttableWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCuttableWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCuttableWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static FName NAME_USBZCuttableWidget_OnWidgetCut = FName(TEXT("OnWidgetCut"));
	void USBZCuttableWidget::OnWidgetCut(float AtSegment)
	{
		SBZCuttableWidget_eventOnWidgetCut_Parms Parms;
		Parms.AtSegment=AtSegment;
		ProcessEvent(FindFunctionChecked(NAME_USBZCuttableWidget_OnWidgetCut),&Parms);
	}
	static FName NAME_USBZCuttableWidget_OnWidgetCutClockwise = FName(TEXT("OnWidgetCutClockwise"));
	void USBZCuttableWidget::OnWidgetCutClockwise(float DeltaDegrees)
	{
		SBZCuttableWidget_eventOnWidgetCutClockwise_Parms Parms;
		Parms.DeltaDegrees=DeltaDegrees;
		ProcessEvent(FindFunctionChecked(NAME_USBZCuttableWidget_OnWidgetCutClockwise),&Parms);
	}
	static FName NAME_USBZCuttableWidget_OnWidgetCutCompleted = FName(TEXT("OnWidgetCutCompleted"));
	void USBZCuttableWidget::OnWidgetCutCompleted()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZCuttableWidget_OnWidgetCutCompleted),NULL);
	}
	static FName NAME_USBZCuttableWidget_OnWidgetCutCounterClockwise = FName(TEXT("OnWidgetCutCounterClockwise"));
	void USBZCuttableWidget::OnWidgetCutCounterClockwise(float DeltaDegrees)
	{
		SBZCuttableWidget_eventOnWidgetCutCounterClockwise_Parms Parms;
		Parms.DeltaDegrees=DeltaDegrees;
		ProcessEvent(FindFunctionChecked(NAME_USBZCuttableWidget_OnWidgetCutCounterClockwise),&Parms);
	}
	static FName NAME_USBZCuttableWidget_OnWidgetInitialCut = FName(TEXT("OnWidgetInitialCut"));
	void USBZCuttableWidget::OnWidgetInitialCut(float AtSegment)
	{
		SBZCuttableWidget_eventOnWidgetInitialCut_Parms Parms;
		Parms.AtSegment=AtSegment;
		ProcessEvent(FindFunctionChecked(NAME_USBZCuttableWidget_OnWidgetInitialCut),&Parms);
	}
	void USBZCuttableWidget::StaticRegisterNativesUSBZCuttableWidget()
	{
	}
	struct Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCut_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AtSegment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCut_Statics::NewProp_AtSegment = { "AtSegment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCuttableWidget_eventOnWidgetCut_Parms, AtSegment), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCut_Statics::NewProp_AtSegment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCuttableWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCuttableWidget, nullptr, "OnWidgetCut", nullptr, nullptr, sizeof(SBZCuttableWidget_eventOnWidgetCut_Parms), Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCutClockwise_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaDegrees;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCutClockwise_Statics::NewProp_DeltaDegrees = { "DeltaDegrees", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCuttableWidget_eventOnWidgetCutClockwise_Parms, DeltaDegrees), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCutClockwise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCutClockwise_Statics::NewProp_DeltaDegrees,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCutClockwise_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCuttableWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCutClockwise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCuttableWidget, nullptr, "OnWidgetCutClockwise", nullptr, nullptr, sizeof(SBZCuttableWidget_eventOnWidgetCutClockwise_Parms), Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCutClockwise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCutClockwise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCutClockwise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCutClockwise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCutClockwise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCutClockwise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCutCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCutCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCuttableWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCutCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCuttableWidget, nullptr, "OnWidgetCutCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCutCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCutCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCutCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCutCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCutCounterClockwise_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaDegrees;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCutCounterClockwise_Statics::NewProp_DeltaDegrees = { "DeltaDegrees", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCuttableWidget_eventOnWidgetCutCounterClockwise_Parms, DeltaDegrees), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCutCounterClockwise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCutCounterClockwise_Statics::NewProp_DeltaDegrees,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCutCounterClockwise_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCuttableWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCutCounterClockwise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCuttableWidget, nullptr, "OnWidgetCutCounterClockwise", nullptr, nullptr, sizeof(SBZCuttableWidget_eventOnWidgetCutCounterClockwise_Parms), Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCutCounterClockwise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCutCounterClockwise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCutCounterClockwise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCutCounterClockwise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCutCounterClockwise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCutCounterClockwise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCuttableWidget_OnWidgetInitialCut_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AtSegment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCuttableWidget_OnWidgetInitialCut_Statics::NewProp_AtSegment = { "AtSegment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCuttableWidget_eventOnWidgetInitialCut_Parms, AtSegment), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCuttableWidget_OnWidgetInitialCut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCuttableWidget_OnWidgetInitialCut_Statics::NewProp_AtSegment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCuttableWidget_OnWidgetInitialCut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCuttableWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCuttableWidget_OnWidgetInitialCut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCuttableWidget, nullptr, "OnWidgetInitialCut", nullptr, nullptr, sizeof(SBZCuttableWidget_eventOnWidgetInitialCut_Parms), Z_Construct_UFunction_USBZCuttableWidget_OnWidgetInitialCut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableWidget_OnWidgetInitialCut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCuttableWidget_OnWidgetInitialCut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCuttableWidget_OnWidgetInitialCut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCuttableWidget_OnWidgetInitialCut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCuttableWidget_OnWidgetInitialCut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZCuttableWidget_NoRegister()
	{
		return USBZCuttableWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZCuttableWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCuttableWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZCuttableWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCut, "OnWidgetCut" }, // 922276917
		{ &Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCutClockwise, "OnWidgetCutClockwise" }, // 2121231
		{ &Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCutCompleted, "OnWidgetCutCompleted" }, // 1473707465
		{ &Z_Construct_UFunction_USBZCuttableWidget_OnWidgetCutCounterClockwise, "OnWidgetCutCounterClockwise" }, // 2429701384
		{ &Z_Construct_UFunction_USBZCuttableWidget_OnWidgetInitialCut, "OnWidgetInitialCut" }, // 3179385652
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCuttableWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCuttableWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCuttableWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCuttableWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCuttableWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCuttableWidget_Statics::ClassParams = {
		&USBZCuttableWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZCuttableWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCuttableWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCuttableWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCuttableWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCuttableWidget, 389199604);
	template<> STARBREEZE_API UClass* StaticClass<USBZCuttableWidget>()
	{
		return USBZCuttableWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCuttableWidget(Z_Construct_UClass_USBZCuttableWidget, &USBZCuttableWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCuttableWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCuttableWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
