// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3HUDPartyContainerWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3HUDPartyContainerWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HUDPartyContainerWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HUDPartyContainerWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HUDPlayerStatusWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HUDAICrewStatusWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3KeyItemContainer_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
// End Cross Module References
	void UPD3HUDPartyContainerWidget::StaticRegisterNativesUPD3HUDPartyContainerWidget()
	{
	}
	UClass* Z_Construct_UClass_UPD3HUDPartyContainerWidget_NoRegister()
	{
		return UPD3HUDPartyContainerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyClientWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PartyClientWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyAICrewWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PartyAICrewWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_SharedKeyItemContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget_SharedKeyItemContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_PartyPlayerWidgetContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_PartyPlayerWidgetContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_PartyAICrewWidgetContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_PartyAICrewWidgetContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3HUDPartyContainerWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDPartyContainerWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::NewProp_PartyClientWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPartyContainerWidget" },
		{ "ModuleRelativePath", "Public/PD3HUDPartyContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::NewProp_PartyClientWidgetClass = { "PartyClientWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPartyContainerWidget, PartyClientWidgetClass), Z_Construct_UClass_UPD3HUDPlayerStatusWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::NewProp_PartyClientWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::NewProp_PartyClientWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::NewProp_PartyAICrewWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPartyContainerWidget" },
		{ "ModuleRelativePath", "Public/PD3HUDPartyContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::NewProp_PartyAICrewWidgetClass = { "PartyAICrewWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPartyContainerWidget, PartyAICrewWidgetClass), Z_Construct_UClass_UPD3HUDAICrewStatusWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::NewProp_PartyAICrewWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::NewProp_PartyAICrewWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::NewProp_Widget_SharedKeyItemContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPartyContainerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDPartyContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::NewProp_Widget_SharedKeyItemContainer = { "Widget_SharedKeyItemContainer", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPartyContainerWidget, Widget_SharedKeyItemContainer), Z_Construct_UClass_UPD3KeyItemContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::NewProp_Widget_SharedKeyItemContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::NewProp_Widget_SharedKeyItemContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::NewProp_Panel_PartyPlayerWidgetContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPartyContainerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDPartyContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::NewProp_Panel_PartyPlayerWidgetContainer = { "Panel_PartyPlayerWidgetContainer", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPartyContainerWidget, Panel_PartyPlayerWidgetContainer), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::NewProp_Panel_PartyPlayerWidgetContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::NewProp_Panel_PartyPlayerWidgetContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::NewProp_Panel_PartyAICrewWidgetContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDPartyContainerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDPartyContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::NewProp_Panel_PartyAICrewWidgetContainer = { "Panel_PartyAICrewWidgetContainer", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDPartyContainerWidget, Panel_PartyAICrewWidgetContainer), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::NewProp_Panel_PartyAICrewWidgetContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::NewProp_Panel_PartyAICrewWidgetContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::NewProp_PartyClientWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::NewProp_PartyAICrewWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::NewProp_Widget_SharedKeyItemContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::NewProp_Panel_PartyPlayerWidgetContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::NewProp_Panel_PartyAICrewWidgetContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3HUDPartyContainerWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::ClassParams = {
		&UPD3HUDPartyContainerWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3HUDPartyContainerWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3HUDPartyContainerWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3HUDPartyContainerWidget, 3843814947);
	template<> STARBREEZE_API UClass* StaticClass<UPD3HUDPartyContainerWidget>()
	{
		return UPD3HUDPartyContainerWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3HUDPartyContainerWidget(Z_Construct_UClass_UPD3HUDPartyContainerWidget, &UPD3HUDPartyContainerWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3HUDPartyContainerWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3HUDPartyContainerWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
