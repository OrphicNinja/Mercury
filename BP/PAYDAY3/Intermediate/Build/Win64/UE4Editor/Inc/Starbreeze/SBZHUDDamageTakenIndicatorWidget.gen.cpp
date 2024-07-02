// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHUDDamageTakenIndicatorWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHUDDamageTakenIndicatorWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHUDDamageTakenIndicatorWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHUDDamageTakenIndicatorWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	void USBZHUDDamageTakenIndicatorWidget::StaticRegisterNativesUSBZHUDDamageTakenIndicatorWidget()
	{
	}
	UClass* Z_Construct_UClass_USBZHUDDamageTakenIndicatorWidget_NoRegister()
	{
		return USBZHUDDamageTakenIndicatorWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZHUDDamageTakenIndicatorWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LatestDamageSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LatestDamageSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_DamageTakenIndicator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image_DamageTakenIndicator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZHUDDamageTakenIndicatorWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDDamageTakenIndicatorWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHUDDamageTakenIndicatorWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHUDDamageTakenIndicatorWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDDamageTakenIndicatorWidget_Statics::NewProp_LatestDamageSource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHUDDamageTakenIndicatorWidget" },
		{ "ModuleRelativePath", "Public/SBZHUDDamageTakenIndicatorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZHUDDamageTakenIndicatorWidget_Statics::NewProp_LatestDamageSource = { "LatestDamageSource", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHUDDamageTakenIndicatorWidget, LatestDamageSource), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZHUDDamageTakenIndicatorWidget_Statics::NewProp_LatestDamageSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDDamageTakenIndicatorWidget_Statics::NewProp_LatestDamageSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDDamageTakenIndicatorWidget_Statics::NewProp_Image_DamageTakenIndicator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHUDDamageTakenIndicatorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZHUDDamageTakenIndicatorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZHUDDamageTakenIndicatorWidget_Statics::NewProp_Image_DamageTakenIndicator = { "Image_DamageTakenIndicator", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHUDDamageTakenIndicatorWidget, Image_DamageTakenIndicator), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZHUDDamageTakenIndicatorWidget_Statics::NewProp_Image_DamageTakenIndicator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDDamageTakenIndicatorWidget_Statics::NewProp_Image_DamageTakenIndicator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZHUDDamageTakenIndicatorWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHUDDamageTakenIndicatorWidget_Statics::NewProp_LatestDamageSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHUDDamageTakenIndicatorWidget_Statics::NewProp_Image_DamageTakenIndicator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZHUDDamageTakenIndicatorWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZHUDDamageTakenIndicatorWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZHUDDamageTakenIndicatorWidget_Statics::ClassParams = {
		&USBZHUDDamageTakenIndicatorWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZHUDDamageTakenIndicatorWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDDamageTakenIndicatorWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZHUDDamageTakenIndicatorWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDDamageTakenIndicatorWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZHUDDamageTakenIndicatorWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZHUDDamageTakenIndicatorWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZHUDDamageTakenIndicatorWidget, 1653742478);
	template<> STARBREEZE_API UClass* StaticClass<USBZHUDDamageTakenIndicatorWidget>()
	{
		return USBZHUDDamageTakenIndicatorWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZHUDDamageTakenIndicatorWidget(Z_Construct_UClass_USBZHUDDamageTakenIndicatorWidget, &USBZHUDDamageTakenIndicatorWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZHUDDamageTakenIndicatorWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZHUDDamageTakenIndicatorWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
