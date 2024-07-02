// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3TickerWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3TickerWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3TickerWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3TickerWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPawnWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3HeistState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FPD3TickerSettings();
// End Cross Module References
	DEFINE_FUNCTION(UPD3TickerWidget::execOnHeistStateChanged)
	{
		P_GET_ENUM(EPD3HeistState,Z_Param_OldState);
		P_GET_ENUM(EPD3HeistState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHeistStateChanged(EPD3HeistState(Z_Param_OldState),EPD3HeistState(Z_Param_NewState));
		P_NATIVE_END;
	}
	static FName NAME_UPD3TickerWidget_OnTickerModeChanged = FName(TEXT("OnTickerModeChanged"));
	void UPD3TickerWidget::OnTickerModeChanged(FText const& Text, FLinearColor const& TextColor, FLinearColor const& BackgroundColor)
	{
		PD3TickerWidget_eventOnTickerModeChanged_Parms Parms;
		Parms.Text=Text;
		Parms.TextColor=TextColor;
		Parms.BackgroundColor=BackgroundColor;
		ProcessEvent(FindFunctionChecked(NAME_UPD3TickerWidget_OnTickerModeChanged),&Parms);
	}
	void UPD3TickerWidget::StaticRegisterNativesUPD3TickerWidget()
	{
		UClass* Class = UPD3TickerWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHeistStateChanged", &UPD3TickerWidget::execOnHeistStateChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPD3TickerWidget_OnHeistStateChanged_Statics
	{
		struct PD3TickerWidget_eventOnHeistStateChanged_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPD3TickerWidget_OnHeistStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPD3TickerWidget_OnHeistStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3TickerWidget_eventOnHeistStateChanged_Parms, OldState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPD3TickerWidget_OnHeistStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPD3TickerWidget_OnHeistStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3TickerWidget_eventOnHeistStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3TickerWidget_OnHeistStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3TickerWidget_OnHeistStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3TickerWidget_OnHeistStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3TickerWidget_OnHeistStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3TickerWidget_OnHeistStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3TickerWidget_OnHeistStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3TickerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3TickerWidget_OnHeistStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3TickerWidget, nullptr, "OnHeistStateChanged", nullptr, nullptr, sizeof(PD3TickerWidget_eventOnHeistStateChanged_Parms), Z_Construct_UFunction_UPD3TickerWidget_OnHeistStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3TickerWidget_OnHeistStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3TickerWidget_OnHeistStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3TickerWidget_OnHeistStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3TickerWidget_OnHeistStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3TickerWidget_OnHeistStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3TickerWidget_OnTickerModeChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3TickerWidget_OnTickerModeChanged_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UPD3TickerWidget_OnTickerModeChanged_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3TickerWidget_eventOnTickerModeChanged_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UPD3TickerWidget_OnTickerModeChanged_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3TickerWidget_OnTickerModeChanged_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3TickerWidget_OnTickerModeChanged_Statics::NewProp_TextColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPD3TickerWidget_OnTickerModeChanged_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3TickerWidget_eventOnTickerModeChanged_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UPD3TickerWidget_OnTickerModeChanged_Statics::NewProp_TextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3TickerWidget_OnTickerModeChanged_Statics::NewProp_TextColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3TickerWidget_OnTickerModeChanged_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPD3TickerWidget_OnTickerModeChanged_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3TickerWidget_eventOnTickerModeChanged_Parms, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UPD3TickerWidget_OnTickerModeChanged_Statics::NewProp_BackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3TickerWidget_OnTickerModeChanged_Statics::NewProp_BackgroundColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3TickerWidget_OnTickerModeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3TickerWidget_OnTickerModeChanged_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3TickerWidget_OnTickerModeChanged_Statics::NewProp_TextColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3TickerWidget_OnTickerModeChanged_Statics::NewProp_BackgroundColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3TickerWidget_OnTickerModeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3TickerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3TickerWidget_OnTickerModeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3TickerWidget, nullptr, "OnTickerModeChanged", nullptr, nullptr, sizeof(PD3TickerWidget_eventOnTickerModeChanged_Parms), Z_Construct_UFunction_UPD3TickerWidget_OnTickerModeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3TickerWidget_OnTickerModeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC80808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3TickerWidget_OnTickerModeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3TickerWidget_OnTickerModeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3TickerWidget_OnTickerModeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3TickerWidget_OnTickerModeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPD3TickerWidget_NoRegister()
	{
		return UPD3TickerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPD3TickerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShowAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HideAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HideAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickerSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TickerSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Postfix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Postfix;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3TickerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPawnWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPD3TickerWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPD3TickerWidget_OnHeistStateChanged, "OnHeistStateChanged" }, // 953058618
		{ &Z_Construct_UFunction_UPD3TickerWidget_OnTickerModeChanged, "OnTickerModeChanged" }, // 941690659
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3TickerWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3TickerWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3TickerWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3TickerWidget_Statics::NewProp_ShowAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3TickerWidget" },
		{ "ModuleRelativePath", "Public/PD3TickerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3TickerWidget_Statics::NewProp_ShowAnimation = { "ShowAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3TickerWidget, ShowAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3TickerWidget_Statics::NewProp_ShowAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3TickerWidget_Statics::NewProp_ShowAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3TickerWidget_Statics::NewProp_HideAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3TickerWidget" },
		{ "ModuleRelativePath", "Public/PD3TickerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3TickerWidget_Statics::NewProp_HideAnimation = { "HideAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3TickerWidget, HideAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3TickerWidget_Statics::NewProp_HideAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3TickerWidget_Statics::NewProp_HideAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3TickerWidget_Statics::NewProp_TickerSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3TickerWidget" },
		{ "ModuleRelativePath", "Public/PD3TickerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPD3TickerWidget_Statics::NewProp_TickerSettings = { "TickerSettings", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(TickerSettings, UPD3TickerWidget), STRUCT_OFFSET(UPD3TickerWidget, TickerSettings), Z_Construct_UScriptStruct_FPD3TickerSettings, METADATA_PARAMS(Z_Construct_UClass_UPD3TickerWidget_Statics::NewProp_TickerSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3TickerWidget_Statics::NewProp_TickerSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3TickerWidget_Statics::NewProp_Prefix_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3TickerWidget" },
		{ "ModuleRelativePath", "Public/PD3TickerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPD3TickerWidget_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3TickerWidget, Prefix), METADATA_PARAMS(Z_Construct_UClass_UPD3TickerWidget_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3TickerWidget_Statics::NewProp_Prefix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3TickerWidget_Statics::NewProp_Postfix_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3TickerWidget" },
		{ "ModuleRelativePath", "Public/PD3TickerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPD3TickerWidget_Statics::NewProp_Postfix = { "Postfix", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3TickerWidget, Postfix), METADATA_PARAMS(Z_Construct_UClass_UPD3TickerWidget_Statics::NewProp_Postfix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3TickerWidget_Statics::NewProp_Postfix_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPD3TickerWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3TickerWidget_Statics::NewProp_ShowAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3TickerWidget_Statics::NewProp_HideAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3TickerWidget_Statics::NewProp_TickerSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3TickerWidget_Statics::NewProp_Prefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3TickerWidget_Statics::NewProp_Postfix,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3TickerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3TickerWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3TickerWidget_Statics::ClassParams = {
		&UPD3TickerWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPD3TickerWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPD3TickerWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPD3TickerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3TickerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3TickerWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3TickerWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3TickerWidget, 3369495868);
	template<> STARBREEZE_API UClass* StaticClass<UPD3TickerWidget>()
	{
		return UPD3TickerWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3TickerWidget(Z_Construct_UClass_UPD3TickerWidget, &UPD3TickerWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3TickerWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3TickerWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
