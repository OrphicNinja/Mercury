// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAxisInputWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAxisInputWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAxisInputWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAxisInputWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInputKeyWidget_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
// End Cross Module References
	DEFINE_FUNCTION(USBZAxisInputWidget::execSetAxis)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InAxisName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAxis(Z_Param_InAxisName);
		P_NATIVE_END;
	}
	void USBZAxisInputWidget::StaticRegisterNativesUSBZAxisInputWidget()
	{
		UClass* Class = USBZAxisInputWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAxis", &USBZAxisInputWidget::execSetAxis },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAxisInputWidget_SetAxis_Statics
	{
		struct SBZAxisInputWidget_eventSetAxis_Parms
		{
			FName InAxisName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InAxisName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZAxisInputWidget_SetAxis_Statics::NewProp_InAxisName = { "InAxisName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAxisInputWidget_eventSetAxis_Parms, InAxisName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAxisInputWidget_SetAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAxisInputWidget_SetAxis_Statics::NewProp_InAxisName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAxisInputWidget_SetAxis_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAxisInputWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAxisInputWidget_SetAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAxisInputWidget, nullptr, "SetAxis", nullptr, nullptr, sizeof(SBZAxisInputWidget_eventSetAxis_Parms), Z_Construct_UFunction_USBZAxisInputWidget_SetAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAxisInputWidget_SetAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAxisInputWidget_SetAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAxisInputWidget_SetAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAxisInputWidget_SetAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAxisInputWidget_SetAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAxisInputWidget_NoRegister()
	{
		return USBZAxisInputWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZAxisInputWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxisName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryKeyWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrimaryKeyWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryKeyWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondaryKeyWidget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SecondaryKeyDisableVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryKeyDisableVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SecondaryKeyDisableVisibility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAxisInputWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAxisInputWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAxisInputWidget_SetAxis, "SetAxis" }, // 3206012851
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAxisInputWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAxisInputWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAxisInputWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAxisInputWidget_Statics::NewProp_AxisName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAxisInputWidget" },
		{ "ModuleRelativePath", "Public/SBZAxisInputWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZAxisInputWidget_Statics::NewProp_AxisName = { "AxisName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAxisInputWidget, AxisName), METADATA_PARAMS(Z_Construct_UClass_USBZAxisInputWidget_Statics::NewProp_AxisName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAxisInputWidget_Statics::NewProp_AxisName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAxisInputWidget_Statics::NewProp_PrimaryKeyWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAxisInputWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAxisInputWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAxisInputWidget_Statics::NewProp_PrimaryKeyWidget = { "PrimaryKeyWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAxisInputWidget, PrimaryKeyWidget), Z_Construct_UClass_USBZInputKeyWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAxisInputWidget_Statics::NewProp_PrimaryKeyWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAxisInputWidget_Statics::NewProp_PrimaryKeyWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAxisInputWidget_Statics::NewProp_SecondaryKeyWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAxisInputWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAxisInputWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAxisInputWidget_Statics::NewProp_SecondaryKeyWidget = { "SecondaryKeyWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAxisInputWidget, SecondaryKeyWidget), Z_Construct_UClass_USBZInputKeyWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAxisInputWidget_Statics::NewProp_SecondaryKeyWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAxisInputWidget_Statics::NewProp_SecondaryKeyWidget_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAxisInputWidget_Statics::NewProp_SecondaryKeyDisableVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAxisInputWidget_Statics::NewProp_SecondaryKeyDisableVisibility_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAxisInputWidget" },
		{ "ModuleRelativePath", "Public/SBZAxisInputWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZAxisInputWidget_Statics::NewProp_SecondaryKeyDisableVisibility = { "SecondaryKeyDisableVisibility", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAxisInputWidget, SecondaryKeyDisableVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_USBZAxisInputWidget_Statics::NewProp_SecondaryKeyDisableVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAxisInputWidget_Statics::NewProp_SecondaryKeyDisableVisibility_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAxisInputWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAxisInputWidget_Statics::NewProp_AxisName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAxisInputWidget_Statics::NewProp_PrimaryKeyWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAxisInputWidget_Statics::NewProp_SecondaryKeyWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAxisInputWidget_Statics::NewProp_SecondaryKeyDisableVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAxisInputWidget_Statics::NewProp_SecondaryKeyDisableVisibility,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAxisInputWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAxisInputWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAxisInputWidget_Statics::ClassParams = {
		&USBZAxisInputWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAxisInputWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAxisInputWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAxisInputWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAxisInputWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAxisInputWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAxisInputWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAxisInputWidget, 3990884442);
	template<> STARBREEZE_API UClass* StaticClass<USBZAxisInputWidget>()
	{
		return USBZAxisInputWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAxisInputWidget(Z_Construct_UClass_USBZAxisInputWidget, &USBZAxisInputWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAxisInputWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAxisInputWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
