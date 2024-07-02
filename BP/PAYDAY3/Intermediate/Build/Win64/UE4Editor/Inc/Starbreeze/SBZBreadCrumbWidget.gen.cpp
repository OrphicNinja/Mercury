// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBreadCrumbWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBreadCrumbWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBreadCrumbWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBreadCrumbWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZUIStackChangedEvent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBreadCrumbButtonWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZBreadCrumbWidget::execOnStackStateChanged)
	{
		P_GET_STRUCT(FSBZUIStackChangedEvent,Z_Param_UIStackStateChangedEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStackStateChanged(Z_Param_UIStackStateChangedEvent);
		P_NATIVE_END;
	}
	void USBZBreadCrumbWidget::StaticRegisterNativesUSBZBreadCrumbWidget()
	{
		UClass* Class = USBZBreadCrumbWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnStackStateChanged", &USBZBreadCrumbWidget::execOnStackStateChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZBreadCrumbWidget_OnStackStateChanged_Statics
	{
		struct SBZBreadCrumbWidget_eventOnStackStateChanged_Parms
		{
			FSBZUIStackChangedEvent UIStackStateChangedEvent;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UIStackStateChangedEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZBreadCrumbWidget_OnStackStateChanged_Statics::NewProp_UIStackStateChangedEvent = { "UIStackStateChangedEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBreadCrumbWidget_eventOnStackStateChanged_Parms, UIStackStateChangedEvent), Z_Construct_UScriptStruct_FSBZUIStackChangedEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBreadCrumbWidget_OnStackStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBreadCrumbWidget_OnStackStateChanged_Statics::NewProp_UIStackStateChangedEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBreadCrumbWidget_OnStackStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBreadCrumbWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBreadCrumbWidget_OnStackStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBreadCrumbWidget, nullptr, "OnStackStateChanged", nullptr, nullptr, sizeof(SBZBreadCrumbWidget_eventOnStackStateChanged_Parms), Z_Construct_UFunction_USBZBreadCrumbWidget_OnStackStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBreadCrumbWidget_OnStackStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBreadCrumbWidget_OnStackStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBreadCrumbWidget_OnStackStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBreadCrumbWidget_OnStackStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBreadCrumbWidget_OnStackStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZBreadCrumbWidget_NoRegister()
	{
		return USBZBreadCrumbWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZBreadCrumbWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_StackValueToNameMap_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StackValueToNameMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackValueToNameMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StackValueToNameMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreadCrumbButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BreadCrumbButtonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_ButtonContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_ButtonContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetPool_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WidgetPool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBreadCrumbWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZBreadCrumbWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZBreadCrumbWidget_OnStackStateChanged, "OnStackStateChanged" }, // 2258630102
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBreadCrumbWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBreadCrumbWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBreadCrumbWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZBreadCrumbWidget_Statics::NewProp_StackValueToNameMap_ValueProp = { "StackValueToNameMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZBreadCrumbWidget_Statics::NewProp_StackValueToNameMap_Key_KeyProp = { "StackValueToNameMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBreadCrumbWidget_Statics::NewProp_StackValueToNameMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBreadCrumbWidget" },
		{ "ModuleRelativePath", "Public/SBZBreadCrumbWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZBreadCrumbWidget_Statics::NewProp_StackValueToNameMap = { "StackValueToNameMap", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBreadCrumbWidget, StackValueToNameMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZBreadCrumbWidget_Statics::NewProp_StackValueToNameMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBreadCrumbWidget_Statics::NewProp_StackValueToNameMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBreadCrumbWidget_Statics::NewProp_BreadCrumbButtonClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBreadCrumbWidget" },
		{ "ModuleRelativePath", "Public/SBZBreadCrumbWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZBreadCrumbWidget_Statics::NewProp_BreadCrumbButtonClass = { "BreadCrumbButtonClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBreadCrumbWidget, BreadCrumbButtonClass), Z_Construct_UClass_USBZBreadCrumbButtonWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZBreadCrumbWidget_Statics::NewProp_BreadCrumbButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBreadCrumbWidget_Statics::NewProp_BreadCrumbButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBreadCrumbWidget_Statics::NewProp_Panel_ButtonContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBreadCrumbWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBreadCrumbWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBreadCrumbWidget_Statics::NewProp_Panel_ButtonContainer = { "Panel_ButtonContainer", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBreadCrumbWidget, Panel_ButtonContainer), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBreadCrumbWidget_Statics::NewProp_Panel_ButtonContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBreadCrumbWidget_Statics::NewProp_Panel_ButtonContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBreadCrumbWidget_Statics::NewProp_WidgetPool_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBreadCrumbWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBreadCrumbWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBreadCrumbWidget_Statics::NewProp_WidgetPool_Inner = { "WidgetPool", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZBreadCrumbButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBreadCrumbWidget_Statics::NewProp_WidgetPool_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBreadCrumbWidget_Statics::NewProp_WidgetPool_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBreadCrumbWidget_Statics::NewProp_WidgetPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBreadCrumbWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBreadCrumbWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZBreadCrumbWidget_Statics::NewProp_WidgetPool = { "WidgetPool", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBreadCrumbWidget, WidgetPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZBreadCrumbWidget_Statics::NewProp_WidgetPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBreadCrumbWidget_Statics::NewProp_WidgetPool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBreadCrumbWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBreadCrumbWidget_Statics::NewProp_StackValueToNameMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBreadCrumbWidget_Statics::NewProp_StackValueToNameMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBreadCrumbWidget_Statics::NewProp_StackValueToNameMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBreadCrumbWidget_Statics::NewProp_BreadCrumbButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBreadCrumbWidget_Statics::NewProp_Panel_ButtonContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBreadCrumbWidget_Statics::NewProp_WidgetPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBreadCrumbWidget_Statics::NewProp_WidgetPool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBreadCrumbWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBreadCrumbWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBreadCrumbWidget_Statics::ClassParams = {
		&USBZBreadCrumbWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZBreadCrumbWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBreadCrumbWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBreadCrumbWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBreadCrumbWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBreadCrumbWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBreadCrumbWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBreadCrumbWidget, 1442242384);
	template<> STARBREEZE_API UClass* StaticClass<USBZBreadCrumbWidget>()
	{
		return USBZBreadCrumbWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBreadCrumbWidget(Z_Construct_UClass_USBZBreadCrumbWidget, &USBZBreadCrumbWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBreadCrumbWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBreadCrumbWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
