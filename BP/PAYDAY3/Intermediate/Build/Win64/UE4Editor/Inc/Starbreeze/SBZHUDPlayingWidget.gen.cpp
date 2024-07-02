// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHUDPlayingWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHUDPlayingWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHUDPlayingWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHUDPlayingWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HUDPlayerStatusWidget_NoRegister();
// End Cross Module References
	void USBZHUDPlayingWidget::StaticRegisterNativesUSBZHUDPlayingWidget()
	{
	}
	UClass* Z_Construct_UClass_USBZHUDPlayingWidget_NoRegister()
	{
		return USBZHUDPlayingWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZHUDPlayingWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_LocalPlayerStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_LocalPlayerStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZHUDPlayingWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDPlayingWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHUDPlayingWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHUDPlayingWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDPlayingWidget_Statics::NewProp_Widget_LocalPlayerStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHUDPlayingWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZHUDPlayingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZHUDPlayingWidget_Statics::NewProp_Widget_LocalPlayerStatus = { "Widget_LocalPlayerStatus", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHUDPlayingWidget, Widget_LocalPlayerStatus), Z_Construct_UClass_UPD3HUDPlayerStatusWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZHUDPlayingWidget_Statics::NewProp_Widget_LocalPlayerStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDPlayingWidget_Statics::NewProp_Widget_LocalPlayerStatus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZHUDPlayingWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHUDPlayingWidget_Statics::NewProp_Widget_LocalPlayerStatus,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZHUDPlayingWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZHUDPlayingWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZHUDPlayingWidget_Statics::ClassParams = {
		&USBZHUDPlayingWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZHUDPlayingWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDPlayingWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZHUDPlayingWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDPlayingWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZHUDPlayingWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZHUDPlayingWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZHUDPlayingWidget, 2253769222);
	template<> STARBREEZE_API UClass* StaticClass<USBZHUDPlayingWidget>()
	{
		return USBZHUDPlayingWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZHUDPlayingWidget(Z_Construct_UClass_USBZHUDPlayingWidget, &USBZHUDPlayingWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZHUDPlayingWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZHUDPlayingWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
