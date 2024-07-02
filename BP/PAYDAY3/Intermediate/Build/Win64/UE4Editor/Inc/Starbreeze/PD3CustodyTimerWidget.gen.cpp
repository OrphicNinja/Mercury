// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3CustodyTimerWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3CustodyTimerWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3CustodyTimerWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3CustodyTimerWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerState_NoRegister();
// End Cross Module References
	void UPD3CustodyTimerWidget::StaticRegisterNativesUPD3CustodyTimerWidget()
	{
	}
	UClass* Z_Construct_UClass_UPD3CustodyTimerWidget_NoRegister()
	{
		return UPD3CustodyTimerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPD3CustodyTimerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimerText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3CustodyTimerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3CustodyTimerWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3CustodyTimerWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3CustodyTimerWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3CustodyTimerWidget_Statics::NewProp_TitleText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3CustodyTimerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3CustodyTimerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3CustodyTimerWidget_Statics::NewProp_TitleText = { "TitleText", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3CustodyTimerWidget, TitleText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3CustodyTimerWidget_Statics::NewProp_TitleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3CustodyTimerWidget_Statics::NewProp_TitleText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3CustodyTimerWidget_Statics::NewProp_PlayerState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3CustodyTimerWidget" },
		{ "ModuleRelativePath", "Public/PD3CustodyTimerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3CustodyTimerWidget_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3CustodyTimerWidget, PlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3CustodyTimerWidget_Statics::NewProp_PlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3CustodyTimerWidget_Statics::NewProp_PlayerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3CustodyTimerWidget_Statics::NewProp_TimerText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3CustodyTimerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3CustodyTimerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3CustodyTimerWidget_Statics::NewProp_TimerText = { "TimerText", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3CustodyTimerWidget, TimerText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3CustodyTimerWidget_Statics::NewProp_TimerText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3CustodyTimerWidget_Statics::NewProp_TimerText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPD3CustodyTimerWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3CustodyTimerWidget_Statics::NewProp_TitleText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3CustodyTimerWidget_Statics::NewProp_PlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3CustodyTimerWidget_Statics::NewProp_TimerText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3CustodyTimerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3CustodyTimerWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3CustodyTimerWidget_Statics::ClassParams = {
		&UPD3CustodyTimerWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPD3CustodyTimerWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPD3CustodyTimerWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPD3CustodyTimerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3CustodyTimerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3CustodyTimerWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3CustodyTimerWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3CustodyTimerWidget, 4074051550);
	template<> STARBREEZE_API UClass* StaticClass<UPD3CustodyTimerWidget>()
	{
		return UPD3CustodyTimerWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3CustodyTimerWidget(Z_Construct_UClass_UPD3CustodyTimerWidget, &UPD3CustodyTimerWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3CustodyTimerWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3CustodyTimerWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
