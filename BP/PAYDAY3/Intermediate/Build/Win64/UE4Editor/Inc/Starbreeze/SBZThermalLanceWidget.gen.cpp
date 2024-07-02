// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZThermalLanceWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZThermalLanceWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZThermalLanceWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZThermalLanceWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZBreachingEquipmentState();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZThermalLance_NoRegister();
// End Cross Module References
	static FName NAME_USBZThermalLanceWidget_BP_OnRefuelingNeeded = FName(TEXT("BP_OnRefuelingNeeded"));
	void USBZThermalLanceWidget::BP_OnRefuelingNeeded(bool bIsFuelingNeeded)
	{
		SBZThermalLanceWidget_eventBP_OnRefuelingNeeded_Parms Parms;
		Parms.bIsFuelingNeeded=bIsFuelingNeeded ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZThermalLanceWidget_BP_OnRefuelingNeeded),&Parms);
	}
	static FName NAME_USBZThermalLanceWidget_BP_OnStateChanged = FName(TEXT("BP_OnStateChanged"));
	void USBZThermalLanceWidget::BP_OnStateChanged(ESBZBreachingEquipmentState NewState)
	{
		SBZThermalLanceWidget_eventBP_OnStateChanged_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_USBZThermalLanceWidget_BP_OnStateChanged),&Parms);
	}
	static FName NAME_USBZThermalLanceWidget_BP_OnThermalLanceSet = FName(TEXT("BP_OnThermalLanceSet"));
	void USBZThermalLanceWidget::BP_OnThermalLanceSet()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZThermalLanceWidget_BP_OnThermalLanceSet),NULL);
	}
	void USBZThermalLanceWidget::StaticRegisterNativesUSBZThermalLanceWidget()
	{
	}
	struct Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnRefuelingNeeded_Statics
	{
		static void NewProp_bIsFuelingNeeded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFuelingNeeded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnRefuelingNeeded_Statics::NewProp_bIsFuelingNeeded_SetBit(void* Obj)
	{
		((SBZThermalLanceWidget_eventBP_OnRefuelingNeeded_Parms*)Obj)->bIsFuelingNeeded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnRefuelingNeeded_Statics::NewProp_bIsFuelingNeeded = { "bIsFuelingNeeded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZThermalLanceWidget_eventBP_OnRefuelingNeeded_Parms), &Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnRefuelingNeeded_Statics::NewProp_bIsFuelingNeeded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnRefuelingNeeded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnRefuelingNeeded_Statics::NewProp_bIsFuelingNeeded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnRefuelingNeeded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThermalLanceWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnRefuelingNeeded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZThermalLanceWidget, nullptr, "BP_OnRefuelingNeeded", nullptr, nullptr, sizeof(SBZThermalLanceWidget_eventBP_OnRefuelingNeeded_Parms), Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnRefuelingNeeded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnRefuelingNeeded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnRefuelingNeeded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnRefuelingNeeded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnRefuelingNeeded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnRefuelingNeeded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnStateChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZThermalLanceWidget_eventBP_OnStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZBreachingEquipmentState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThermalLanceWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZThermalLanceWidget, nullptr, "BP_OnStateChanged", nullptr, nullptr, sizeof(SBZThermalLanceWidget_eventBP_OnStateChanged_Parms), Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnThermalLanceSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnThermalLanceSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZThermalLanceWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnThermalLanceSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZThermalLanceWidget, nullptr, "BP_OnThermalLanceSet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnThermalLanceSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnThermalLanceSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnThermalLanceSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnThermalLanceSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZThermalLanceWidget_NoRegister()
	{
		return USBZThermalLanceWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZThermalLanceWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FuelBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FuelBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeLeftText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimeLeftText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThermalLance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThermalLance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefuelingPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RefuelingPercent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZThermalLanceWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZThermalLanceWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnRefuelingNeeded, "BP_OnRefuelingNeeded" }, // 2526245782
		{ &Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnStateChanged, "BP_OnStateChanged" }, // 4121191756
		{ &Z_Construct_UFunction_USBZThermalLanceWidget_BP_OnThermalLanceSet, "BP_OnThermalLanceSet" }, // 1975176821
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZThermalLanceWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZThermalLanceWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZThermalLanceWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZThermalLanceWidget_Statics::NewProp_FuelBar_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermalLanceWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZThermalLanceWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZThermalLanceWidget_Statics::NewProp_FuelBar = { "FuelBar", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZThermalLanceWidget, FuelBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZThermalLanceWidget_Statics::NewProp_FuelBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZThermalLanceWidget_Statics::NewProp_FuelBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZThermalLanceWidget_Statics::NewProp_TimeLeftText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermalLanceWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZThermalLanceWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZThermalLanceWidget_Statics::NewProp_TimeLeftText = { "TimeLeftText", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZThermalLanceWidget, TimeLeftText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZThermalLanceWidget_Statics::NewProp_TimeLeftText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZThermalLanceWidget_Statics::NewProp_TimeLeftText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZThermalLanceWidget_Statics::NewProp_ThermalLance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermalLanceWidget" },
		{ "ModuleRelativePath", "Public/SBZThermalLanceWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZThermalLanceWidget_Statics::NewProp_ThermalLance = { "ThermalLance", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZThermalLanceWidget, ThermalLance), Z_Construct_UClass_ASBZThermalLance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZThermalLanceWidget_Statics::NewProp_ThermalLance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZThermalLanceWidget_Statics::NewProp_ThermalLance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZThermalLanceWidget_Statics::NewProp_RefuelingPercent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZThermalLanceWidget" },
		{ "ModuleRelativePath", "Public/SBZThermalLanceWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZThermalLanceWidget_Statics::NewProp_RefuelingPercent = { "RefuelingPercent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZThermalLanceWidget, RefuelingPercent), METADATA_PARAMS(Z_Construct_UClass_USBZThermalLanceWidget_Statics::NewProp_RefuelingPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZThermalLanceWidget_Statics::NewProp_RefuelingPercent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZThermalLanceWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZThermalLanceWidget_Statics::NewProp_FuelBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZThermalLanceWidget_Statics::NewProp_TimeLeftText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZThermalLanceWidget_Statics::NewProp_ThermalLance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZThermalLanceWidget_Statics::NewProp_RefuelingPercent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZThermalLanceWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZThermalLanceWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZThermalLanceWidget_Statics::ClassParams = {
		&USBZThermalLanceWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZThermalLanceWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZThermalLanceWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZThermalLanceWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZThermalLanceWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZThermalLanceWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZThermalLanceWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZThermalLanceWidget, 37233220);
	template<> STARBREEZE_API UClass* StaticClass<USBZThermalLanceWidget>()
	{
		return USBZThermalLanceWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZThermalLanceWidget(Z_Construct_UClass_USBZThermalLanceWidget, &USBZThermalLanceWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZThermalLanceWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZThermalLanceWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
