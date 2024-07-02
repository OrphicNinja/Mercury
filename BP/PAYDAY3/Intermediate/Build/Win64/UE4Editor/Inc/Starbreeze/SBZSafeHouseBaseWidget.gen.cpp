// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSafeHouseBaseWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSafeHouseBaseWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSafeHouseBaseWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSafeHouseBaseWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSafeHouseBaseWidget::StaticRegisterNativesUSBZSafeHouseBaseWidget()
	{
	}
	UClass* Z_Construct_UClass_USBZSafeHouseBaseWidget_NoRegister()
	{
		return USBZSafeHouseBaseWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZSafeHouseBaseWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSafeHouseBaseWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSafeHouseBaseWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSafeHouseBaseWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSafeHouseBaseWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSafeHouseBaseWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSafeHouseBaseWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSafeHouseBaseWidget_Statics::ClassParams = {
		&USBZSafeHouseBaseWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSafeHouseBaseWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSafeHouseBaseWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSafeHouseBaseWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSafeHouseBaseWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSafeHouseBaseWidget, 3892976446);
	template<> STARBREEZE_API UClass* StaticClass<USBZSafeHouseBaseWidget>()
	{
		return USBZSafeHouseBaseWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSafeHouseBaseWidget(Z_Construct_UClass_USBZSafeHouseBaseWidget, &USBZSafeHouseBaseWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSafeHouseBaseWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSafeHouseBaseWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
