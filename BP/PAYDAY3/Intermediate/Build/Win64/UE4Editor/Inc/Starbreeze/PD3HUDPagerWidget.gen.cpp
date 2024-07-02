// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3HUDPagerWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3HUDPagerWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HUDPagerWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HUDPagerWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3HeistState();
// End Cross Module References
	DEFINE_FUNCTION(UPD3HUDPagerWidget::execOnHeistStateChangedEvent)
	{
		P_GET_ENUM(EPD3HeistState,Z_Param_OldState);
		P_GET_ENUM(EPD3HeistState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHeistStateChangedEvent(EPD3HeistState(Z_Param_OldState),EPD3HeistState(Z_Param_NewState));
		P_NATIVE_END;
	}
	static FName NAME_UPD3HUDPagerWidget_OnAnswerPagerValueChanged = FName(TEXT("OnAnswerPagerValueChanged"));
	void UPD3HUDPagerWidget::OnAnswerPagerValueChanged(int32 AnswerPagerValue, int32 MaxAnswerPagerValue)
	{
		PD3HUDPagerWidget_eventOnAnswerPagerValueChanged_Parms Parms;
		Parms.AnswerPagerValue=AnswerPagerValue;
		Parms.MaxAnswerPagerValue=MaxAnswerPagerValue;
		ProcessEvent(FindFunctionChecked(NAME_UPD3HUDPagerWidget_OnAnswerPagerValueChanged),&Parms);
	}
	static FName NAME_UPD3HUDPagerWidget_OnHeistStateChanged = FName(TEXT("OnHeistStateChanged"));
	void UPD3HUDPagerWidget::OnHeistStateChanged(EPD3HeistState NewState)
	{
		PD3HUDPagerWidget_eventOnHeistStateChanged_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_UPD3HUDPagerWidget_OnHeistStateChanged),&Parms);
	}
	void UPD3HUDPagerWidget::StaticRegisterNativesUPD3HUDPagerWidget()
	{
		UClass* Class = UPD3HUDPagerWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHeistStateChangedEvent", &UPD3HUDPagerWidget::execOnHeistStateChangedEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPD3HUDPagerWidget_OnAnswerPagerValueChanged_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AnswerPagerValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAnswerPagerValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPD3HUDPagerWidget_OnAnswerPagerValueChanged_Statics::NewProp_AnswerPagerValue = { "AnswerPagerValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HUDPagerWidget_eventOnAnswerPagerValueChanged_Parms, AnswerPagerValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPD3HUDPagerWidget_OnAnswerPagerValueChanged_Statics::NewProp_MaxAnswerPagerValue = { "MaxAnswerPagerValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HUDPagerWidget_eventOnAnswerPagerValueChanged_Parms, MaxAnswerPagerValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3HUDPagerWidget_OnAnswerPagerValueChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HUDPagerWidget_OnAnswerPagerValueChanged_Statics::NewProp_AnswerPagerValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HUDPagerWidget_OnAnswerPagerValueChanged_Statics::NewProp_MaxAnswerPagerValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3HUDPagerWidget_OnAnswerPagerValueChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HUDPagerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3HUDPagerWidget_OnAnswerPagerValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3HUDPagerWidget, nullptr, "OnAnswerPagerValueChanged", nullptr, nullptr, sizeof(PD3HUDPagerWidget_eventOnAnswerPagerValueChanged_Parms), Z_Construct_UFunction_UPD3HUDPagerWidget_OnAnswerPagerValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDPagerWidget_OnAnswerPagerValueChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3HUDPagerWidget_OnAnswerPagerValueChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDPagerWidget_OnAnswerPagerValueChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3HUDPagerWidget_OnAnswerPagerValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3HUDPagerWidget_OnAnswerPagerValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3HUDPagerWidget_OnHeistStateChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPD3HUDPagerWidget_OnHeistStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPD3HUDPagerWidget_OnHeistStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HUDPagerWidget_eventOnHeistStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3HUDPagerWidget_OnHeistStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HUDPagerWidget_OnHeistStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HUDPagerWidget_OnHeistStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3HUDPagerWidget_OnHeistStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HUDPagerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3HUDPagerWidget_OnHeistStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3HUDPagerWidget, nullptr, "OnHeistStateChanged", nullptr, nullptr, sizeof(PD3HUDPagerWidget_eventOnHeistStateChanged_Parms), Z_Construct_UFunction_UPD3HUDPagerWidget_OnHeistStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDPagerWidget_OnHeistStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3HUDPagerWidget_OnHeistStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDPagerWidget_OnHeistStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3HUDPagerWidget_OnHeistStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3HUDPagerWidget_OnHeistStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3HUDPagerWidget_OnHeistStateChangedEvent_Statics
	{
		struct PD3HUDPagerWidget_eventOnHeistStateChangedEvent_Parms
		{
			EPD3HeistState OldState;
			EPD3HeistState NewState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPD3HUDPagerWidget_OnHeistStateChangedEvent_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPD3HUDPagerWidget_OnHeistStateChangedEvent_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HUDPagerWidget_eventOnHeistStateChangedEvent_Parms, OldState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPD3HUDPagerWidget_OnHeistStateChangedEvent_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPD3HUDPagerWidget_OnHeistStateChangedEvent_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HUDPagerWidget_eventOnHeistStateChangedEvent_Parms, NewState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3HUDPagerWidget_OnHeistStateChangedEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HUDPagerWidget_OnHeistStateChangedEvent_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HUDPagerWidget_OnHeistStateChangedEvent_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HUDPagerWidget_OnHeistStateChangedEvent_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HUDPagerWidget_OnHeistStateChangedEvent_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3HUDPagerWidget_OnHeistStateChangedEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HUDPagerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3HUDPagerWidget_OnHeistStateChangedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3HUDPagerWidget, nullptr, "OnHeistStateChangedEvent", nullptr, nullptr, sizeof(PD3HUDPagerWidget_eventOnHeistStateChangedEvent_Parms), Z_Construct_UFunction_UPD3HUDPagerWidget_OnHeistStateChangedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDPagerWidget_OnHeistStateChangedEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3HUDPagerWidget_OnHeistStateChangedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDPagerWidget_OnHeistStateChangedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3HUDPagerWidget_OnHeistStateChangedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3HUDPagerWidget_OnHeistStateChangedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPD3HUDPagerWidget_NoRegister()
	{
		return UPD3HUDPagerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPD3HUDPagerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3HUDPagerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPD3HUDPagerWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPD3HUDPagerWidget_OnAnswerPagerValueChanged, "OnAnswerPagerValueChanged" }, // 1406942572
		{ &Z_Construct_UFunction_UPD3HUDPagerWidget_OnHeistStateChanged, "OnHeistStateChanged" }, // 3675431421
		{ &Z_Construct_UFunction_UPD3HUDPagerWidget_OnHeistStateChangedEvent, "OnHeistStateChangedEvent" }, // 3397436327
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPagerWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3HUDPagerWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDPagerWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3HUDPagerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3HUDPagerWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3HUDPagerWidget_Statics::ClassParams = {
		&UPD3HUDPagerWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPagerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPagerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3HUDPagerWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3HUDPagerWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3HUDPagerWidget, 1838620170);
	template<> STARBREEZE_API UClass* StaticClass<UPD3HUDPagerWidget>()
	{
		return UPD3HUDPagerWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3HUDPagerWidget(Z_Construct_UClass_UPD3HUDPagerWidget, &UPD3HUDPagerWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3HUDPagerWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3HUDPagerWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
