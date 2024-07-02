// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLoginScreenInfoPopupWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLoginScreenInfoPopupWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoginScreenInfoPopupWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
// End Cross Module References
	static FName NAME_USBZLoginScreenInfoPopupWidget_OnInfoTextInitialized = FName(TEXT("OnInfoTextInitialized"));
	void USBZLoginScreenInfoPopupWidget::OnInfoTextInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZLoginScreenInfoPopupWidget_OnInfoTextInitialized),NULL);
	}
	void USBZLoginScreenInfoPopupWidget::StaticRegisterNativesUSBZLoginScreenInfoPopupWidget()
	{
	}
	struct Z_Construct_UFunction_USBZLoginScreenInfoPopupWidget_OnInfoTextInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoginScreenInfoPopupWidget_OnInfoTextInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoginScreenInfoPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoginScreenInfoPopupWidget_OnInfoTextInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoginScreenInfoPopupWidget, nullptr, "OnInfoTextInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoginScreenInfoPopupWidget_OnInfoTextInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoginScreenInfoPopupWidget_OnInfoTextInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoginScreenInfoPopupWidget_OnInfoTextInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoginScreenInfoPopupWidget_OnInfoTextInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_NoRegister()
	{
		return USBZLoginScreenInfoPopupWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfoTextData_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InfoTextData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScrollSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxisName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisDeadZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AxisDeadZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScrollBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZLoginScreenInfoPopupWidget_OnInfoTextInitialized, "OnInfoTextInitialized" }, // 749302930
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLoginScreenInfoPopupWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenInfoPopupWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::NewProp_InfoTextData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoginScreenInfoPopupWidget" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenInfoPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::NewProp_InfoTextData = { "InfoTextData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoginScreenInfoPopupWidget, InfoTextData), METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::NewProp_InfoTextData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::NewProp_InfoTextData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::NewProp_ScrollSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoginScreenInfoPopupWidget" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenInfoPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::NewProp_ScrollSpeed = { "ScrollSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoginScreenInfoPopupWidget, ScrollSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::NewProp_ScrollSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::NewProp_ScrollSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::NewProp_AxisName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoginScreenInfoPopupWidget" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenInfoPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::NewProp_AxisName = { "AxisName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoginScreenInfoPopupWidget, AxisName), METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::NewProp_AxisName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::NewProp_AxisName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::NewProp_AxisDeadZone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoginScreenInfoPopupWidget" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenInfoPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::NewProp_AxisDeadZone = { "AxisDeadZone", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoginScreenInfoPopupWidget, AxisDeadZone), METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::NewProp_AxisDeadZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::NewProp_AxisDeadZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::NewProp_ScrollBox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLoginScreenInfoPopupWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLoginScreenInfoPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::NewProp_ScrollBox = { "ScrollBox", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLoginScreenInfoPopupWidget, ScrollBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::NewProp_ScrollBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::NewProp_ScrollBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::NewProp_InfoTextData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::NewProp_ScrollSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::NewProp_AxisName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::NewProp_AxisDeadZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::NewProp_ScrollBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZLoginScreenInfoPopupWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::ClassParams = {
		&USBZLoginScreenInfoPopupWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZLoginScreenInfoPopupWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZLoginScreenInfoPopupWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZLoginScreenInfoPopupWidget, 1926562215);
	template<> STARBREEZE_API UClass* StaticClass<USBZLoginScreenInfoPopupWidget>()
	{
		return USBZLoginScreenInfoPopupWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZLoginScreenInfoPopupWidget(Z_Construct_UClass_USBZLoginScreenInfoPopupWidget, &USBZLoginScreenInfoPopupWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZLoginScreenInfoPopupWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZLoginScreenInfoPopupWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
