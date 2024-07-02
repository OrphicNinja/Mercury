// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameStartMainMenuLoadoutWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameStartMainMenuLoadoutWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameStartMainMenuLoadoutWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameStartMainMenuLoadoutWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuInventoryItemWidget_NoRegister();
// End Cross Module References
	void USBZGameStartMainMenuLoadoutWidget::StaticRegisterNativesUSBZGameStartMainMenuLoadoutWidget()
	{
	}
	UClass* Z_Construct_UClass_USBZGameStartMainMenuLoadoutWidget_NoRegister()
	{
		return USBZGameStartMainMenuLoadoutWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZGameStartMainMenuLoadoutWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_LoadoutContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_LoadoutContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultItemWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultItemWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGameStartMainMenuLoadoutWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStartMainMenuLoadoutWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGameStartMainMenuLoadoutWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGameStartMainMenuLoadoutWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStartMainMenuLoadoutWidget_Statics::NewProp_Panel_LoadoutContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStartMainMenuLoadoutWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZGameStartMainMenuLoadoutWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameStartMainMenuLoadoutWidget_Statics::NewProp_Panel_LoadoutContainer = { "Panel_LoadoutContainer", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStartMainMenuLoadoutWidget, Panel_LoadoutContainer), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGameStartMainMenuLoadoutWidget_Statics::NewProp_Panel_LoadoutContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStartMainMenuLoadoutWidget_Statics::NewProp_Panel_LoadoutContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStartMainMenuLoadoutWidget_Statics::NewProp_DefaultItemWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStartMainMenuLoadoutWidget" },
		{ "ModuleRelativePath", "Public/SBZGameStartMainMenuLoadoutWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZGameStartMainMenuLoadoutWidget_Statics::NewProp_DefaultItemWidgetClass = { "DefaultItemWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStartMainMenuLoadoutWidget, DefaultItemWidgetClass), Z_Construct_UClass_USBZMainMenuInventoryItemWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZGameStartMainMenuLoadoutWidget_Statics::NewProp_DefaultItemWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStartMainMenuLoadoutWidget_Statics::NewProp_DefaultItemWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZGameStartMainMenuLoadoutWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStartMainMenuLoadoutWidget_Statics::NewProp_Panel_LoadoutContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStartMainMenuLoadoutWidget_Statics::NewProp_DefaultItemWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGameStartMainMenuLoadoutWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGameStartMainMenuLoadoutWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGameStartMainMenuLoadoutWidget_Statics::ClassParams = {
		&USBZGameStartMainMenuLoadoutWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZGameStartMainMenuLoadoutWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStartMainMenuLoadoutWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZGameStartMainMenuLoadoutWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStartMainMenuLoadoutWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGameStartMainMenuLoadoutWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGameStartMainMenuLoadoutWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGameStartMainMenuLoadoutWidget, 216715373);
	template<> STARBREEZE_API UClass* StaticClass<USBZGameStartMainMenuLoadoutWidget>()
	{
		return USBZGameStartMainMenuLoadoutWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGameStartMainMenuLoadoutWidget(Z_Construct_UClass_USBZGameStartMainMenuLoadoutWidget, &USBZGameStartMainMenuLoadoutWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGameStartMainMenuLoadoutWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGameStartMainMenuLoadoutWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
