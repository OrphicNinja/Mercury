// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3HUDPlayerDefeatStateWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3HUDPlayerDefeatStateWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HUDPlayerDefeatStateWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HUDPlayerDefeatStateWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCrewStateWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3DefeatState();
// End Cross Module References
	static FName NAME_UPD3HUDPlayerDefeatStateWidget_OnDefeatStateChanged = FName(TEXT("OnDefeatStateChanged"));
	void UPD3HUDPlayerDefeatStateWidget::OnDefeatStateChanged(EPD3DefeatState OldState, EPD3DefeatState NewState)
	{
		PD3HUDPlayerDefeatStateWidget_eventOnDefeatStateChanged_Parms Parms;
		Parms.OldState=OldState;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_UPD3HUDPlayerDefeatStateWidget_OnDefeatStateChanged),&Parms);
	}
	void UPD3HUDPlayerDefeatStateWidget::StaticRegisterNativesUPD3HUDPlayerDefeatStateWidget()
	{
	}
	struct Z_Construct_UFunction_UPD3HUDPlayerDefeatStateWidget_OnDefeatStateChanged_Statics
	{
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPD3HUDPlayerDefeatStateWidget_OnDefeatStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPD3HUDPlayerDefeatStateWidget_OnDefeatStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HUDPlayerDefeatStateWidget_eventOnDefeatStateChanged_Parms, OldState), Z_Construct_UEnum_Starbreeze_EPD3DefeatState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPD3HUDPlayerDefeatStateWidget_OnDefeatStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPD3HUDPlayerDefeatStateWidget_OnDefeatStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3HUDPlayerDefeatStateWidget_eventOnDefeatStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_EPD3DefeatState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3HUDPlayerDefeatStateWidget_OnDefeatStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HUDPlayerDefeatStateWidget_OnDefeatStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HUDPlayerDefeatStateWidget_OnDefeatStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HUDPlayerDefeatStateWidget_OnDefeatStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3HUDPlayerDefeatStateWidget_OnDefeatStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3HUDPlayerDefeatStateWidget_OnDefeatStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3HUDPlayerDefeatStateWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3HUDPlayerDefeatStateWidget_OnDefeatStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3HUDPlayerDefeatStateWidget, nullptr, "OnDefeatStateChanged", nullptr, nullptr, sizeof(PD3HUDPlayerDefeatStateWidget_eventOnDefeatStateChanged_Parms), Z_Construct_UFunction_UPD3HUDPlayerDefeatStateWidget_OnDefeatStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDPlayerDefeatStateWidget_OnDefeatStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3HUDPlayerDefeatStateWidget_OnDefeatStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3HUDPlayerDefeatStateWidget_OnDefeatStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3HUDPlayerDefeatStateWidget_OnDefeatStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3HUDPlayerDefeatStateWidget_OnDefeatStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPD3HUDPlayerDefeatStateWidget_NoRegister()
	{
		return UPD3HUDPlayerDefeatStateWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPD3HUDPlayerDefeatStateWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3HUDPlayerDefeatStateWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZCrewStateWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPD3HUDPlayerDefeatStateWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPD3HUDPlayerDefeatStateWidget_OnDefeatStateChanged, "OnDefeatStateChanged" }, // 2108673815
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPlayerDefeatStateWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3HUDPlayerDefeatStateWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDPlayerDefeatStateWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3HUDPlayerDefeatStateWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3HUDPlayerDefeatStateWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3HUDPlayerDefeatStateWidget_Statics::ClassParams = {
		&UPD3HUDPlayerDefeatStateWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPlayerDefeatStateWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPlayerDefeatStateWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3HUDPlayerDefeatStateWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3HUDPlayerDefeatStateWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3HUDPlayerDefeatStateWidget, 4272982060);
	template<> STARBREEZE_API UClass* StaticClass<UPD3HUDPlayerDefeatStateWidget>()
	{
		return UPD3HUDPlayerDefeatStateWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3HUDPlayerDefeatStateWidget(Z_Construct_UClass_UPD3HUDPlayerDefeatStateWidget, &UPD3HUDPlayerDefeatStateWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3HUDPlayerDefeatStateWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3HUDPlayerDefeatStateWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
