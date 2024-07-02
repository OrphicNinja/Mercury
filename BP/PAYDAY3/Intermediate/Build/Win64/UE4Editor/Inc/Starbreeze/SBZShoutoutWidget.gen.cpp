// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZShoutoutWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZShoutoutWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZShoutoutWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZShoutoutWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCircularInteractionWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZShoutoutWidget::execOnShoutoutPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnShoutoutPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZShoutoutWidget::execOnShoutoutReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnShoutoutReleased();
		P_NATIVE_END;
	}
	void USBZShoutoutWidget::StaticRegisterNativesUSBZShoutoutWidget()
	{
		UClass* Class = USBZShoutoutWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnShoutoutPressed", &USBZShoutoutWidget::execOnShoutoutPressed },
			{ "OnShoutoutReleased", &USBZShoutoutWidget::execOnShoutoutReleased },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZShoutoutWidget_OnShoutoutPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZShoutoutWidget_OnShoutoutPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZShoutoutWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZShoutoutWidget_OnShoutoutPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZShoutoutWidget, nullptr, "OnShoutoutPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZShoutoutWidget_OnShoutoutPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZShoutoutWidget_OnShoutoutPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZShoutoutWidget_OnShoutoutPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZShoutoutWidget_OnShoutoutPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZShoutoutWidget_OnShoutoutReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZShoutoutWidget_OnShoutoutReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZShoutoutWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZShoutoutWidget_OnShoutoutReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZShoutoutWidget, nullptr, "OnShoutoutReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZShoutoutWidget_OnShoutoutReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZShoutoutWidget_OnShoutoutReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZShoutoutWidget_OnShoutoutReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZShoutoutWidget_OnShoutoutReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZShoutoutWidget_NoRegister()
	{
		return USBZShoutoutWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZShoutoutWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoutoutActionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ShoutoutActionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_CallWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_CallWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZShoutoutWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZShoutoutWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZShoutoutWidget_OnShoutoutPressed, "OnShoutoutPressed" }, // 3111661712
		{ &Z_Construct_UFunction_USBZShoutoutWidget_OnShoutoutReleased, "OnShoutoutReleased" }, // 4187553169
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutoutWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZShoutoutWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZShoutoutWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutoutWidget_Statics::NewProp_ShoutoutActionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutoutWidget" },
		{ "ModuleRelativePath", "Public/SBZShoutoutWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZShoutoutWidget_Statics::NewProp_ShoutoutActionName = { "ShoutoutActionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutoutWidget, ShoutoutActionName), METADATA_PARAMS(Z_Construct_UClass_USBZShoutoutWidget_Statics::NewProp_ShoutoutActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutoutWidget_Statics::NewProp_ShoutoutActionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZShoutoutWidget_Statics::NewProp_Widget_CallWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShoutoutWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZShoutoutWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZShoutoutWidget_Statics::NewProp_Widget_CallWidget = { "Widget_CallWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZShoutoutWidget, Widget_CallWidget), Z_Construct_UClass_USBZCircularInteractionWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZShoutoutWidget_Statics::NewProp_Widget_CallWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutoutWidget_Statics::NewProp_Widget_CallWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZShoutoutWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutoutWidget_Statics::NewProp_ShoutoutActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZShoutoutWidget_Statics::NewProp_Widget_CallWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZShoutoutWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZShoutoutWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZShoutoutWidget_Statics::ClassParams = {
		&USBZShoutoutWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZShoutoutWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutoutWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZShoutoutWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZShoutoutWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZShoutoutWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZShoutoutWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZShoutoutWidget, 1486536796);
	template<> STARBREEZE_API UClass* StaticClass<USBZShoutoutWidget>()
	{
		return USBZShoutoutWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZShoutoutWidget(Z_Construct_UClass_USBZShoutoutWidget, &USBZShoutoutWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZShoutoutWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZShoutoutWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
