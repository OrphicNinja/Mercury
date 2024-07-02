// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZResultsScreenStatusWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZResultsScreenStatusWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZResultsScreenStatusWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZResultsScreenStatusWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static FName NAME_USBZResultsScreenStatusWidget_OnRestartAcceptTimerUpdated = FName(TEXT("OnRestartAcceptTimerUpdated"));
	void USBZResultsScreenStatusWidget::OnRestartAcceptTimerUpdated(float InNewTime)
	{
		SBZResultsScreenStatusWidget_eventOnRestartAcceptTimerUpdated_Parms Parms;
		Parms.InNewTime=InNewTime;
		ProcessEvent(FindFunctionChecked(NAME_USBZResultsScreenStatusWidget_OnRestartAcceptTimerUpdated),&Parms);
	}
	static FName NAME_USBZResultsScreenStatusWidget_OnRestartCountdownTimerUpdated = FName(TEXT("OnRestartCountdownTimerUpdated"));
	void USBZResultsScreenStatusWidget::OnRestartCountdownTimerUpdated(float InNewTime)
	{
		SBZResultsScreenStatusWidget_eventOnRestartCountdownTimerUpdated_Parms Parms;
		Parms.InNewTime=InNewTime;
		ProcessEvent(FindFunctionChecked(NAME_USBZResultsScreenStatusWidget_OnRestartCountdownTimerUpdated),&Parms);
	}
	static FName NAME_USBZResultsScreenStatusWidget_OnRestartExpireTimerUpdated = FName(TEXT("OnRestartExpireTimerUpdated"));
	void USBZResultsScreenStatusWidget::OnRestartExpireTimerUpdated(float InNewTime)
	{
		SBZResultsScreenStatusWidget_eventOnRestartExpireTimerUpdated_Parms Parms;
		Parms.InNewTime=InNewTime;
		ProcessEvent(FindFunctionChecked(NAME_USBZResultsScreenStatusWidget_OnRestartExpireTimerUpdated),&Parms);
	}
	void USBZResultsScreenStatusWidget::StaticRegisterNativesUSBZResultsScreenStatusWidget()
	{
	}
	struct Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartAcceptTimerUpdated_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InNewTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartAcceptTimerUpdated_Statics::NewProp_InNewTime = { "InNewTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZResultsScreenStatusWidget_eventOnRestartAcceptTimerUpdated_Parms, InNewTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartAcceptTimerUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartAcceptTimerUpdated_Statics::NewProp_InNewTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartAcceptTimerUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZResultsScreenStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartAcceptTimerUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZResultsScreenStatusWidget, nullptr, "OnRestartAcceptTimerUpdated", nullptr, nullptr, sizeof(SBZResultsScreenStatusWidget_eventOnRestartAcceptTimerUpdated_Parms), Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartAcceptTimerUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartAcceptTimerUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartAcceptTimerUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartAcceptTimerUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartAcceptTimerUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartAcceptTimerUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartCountdownTimerUpdated_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InNewTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartCountdownTimerUpdated_Statics::NewProp_InNewTime = { "InNewTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZResultsScreenStatusWidget_eventOnRestartCountdownTimerUpdated_Parms, InNewTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartCountdownTimerUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartCountdownTimerUpdated_Statics::NewProp_InNewTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartCountdownTimerUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZResultsScreenStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartCountdownTimerUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZResultsScreenStatusWidget, nullptr, "OnRestartCountdownTimerUpdated", nullptr, nullptr, sizeof(SBZResultsScreenStatusWidget_eventOnRestartCountdownTimerUpdated_Parms), Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartCountdownTimerUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartCountdownTimerUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartCountdownTimerUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartCountdownTimerUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartCountdownTimerUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartCountdownTimerUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartExpireTimerUpdated_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InNewTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartExpireTimerUpdated_Statics::NewProp_InNewTime = { "InNewTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZResultsScreenStatusWidget_eventOnRestartExpireTimerUpdated_Parms, InNewTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartExpireTimerUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartExpireTimerUpdated_Statics::NewProp_InNewTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartExpireTimerUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZResultsScreenStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartExpireTimerUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZResultsScreenStatusWidget, nullptr, "OnRestartExpireTimerUpdated", nullptr, nullptr, sizeof(SBZResultsScreenStatusWidget_eventOnRestartExpireTimerUpdated_Parms), Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartExpireTimerUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartExpireTimerUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartExpireTimerUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartExpireTimerUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartExpireTimerUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartExpireTimerUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZResultsScreenStatusWidget_NoRegister()
	{
		return USBZResultsScreenStatusWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZResultsScreenStatusWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZResultsScreenStatusWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZResultsScreenStatusWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartAcceptTimerUpdated, "OnRestartAcceptTimerUpdated" }, // 3257932231
		{ &Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartCountdownTimerUpdated, "OnRestartCountdownTimerUpdated" }, // 1052374142
		{ &Z_Construct_UFunction_USBZResultsScreenStatusWidget_OnRestartExpireTimerUpdated, "OnRestartExpireTimerUpdated" }, // 1875285405
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZResultsScreenStatusWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZResultsScreenStatusWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZResultsScreenStatusWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZResultsScreenStatusWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZResultsScreenStatusWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZResultsScreenStatusWidget_Statics::ClassParams = {
		&USBZResultsScreenStatusWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZResultsScreenStatusWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZResultsScreenStatusWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZResultsScreenStatusWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZResultsScreenStatusWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZResultsScreenStatusWidget, 3029828313);
	template<> STARBREEZE_API UClass* StaticClass<USBZResultsScreenStatusWidget>()
	{
		return USBZResultsScreenStatusWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZResultsScreenStatusWidget(Z_Construct_UClass_USBZResultsScreenStatusWidget, &USBZResultsScreenStatusWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZResultsScreenStatusWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZResultsScreenStatusWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
