// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3HUDGameTimerWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3HUDGameTimerWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HUDGameTimerWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HUDGameTimerWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UPD3HUDGameTimerWidget::StaticRegisterNativesUPD3HUDGameTimerWidget()
	{
	}
	UClass* Z_Construct_UClass_UPD3HUDGameTimerWidget_NoRegister()
	{
		return UPD3HUDGameTimerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPD3HUDGameTimerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_Timer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text_Timer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3HUDGameTimerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDGameTimerWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3HUDGameTimerWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDGameTimerWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3HUDGameTimerWidget_Statics::NewProp_Text_Timer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3HUDGameTimerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PD3HUDGameTimerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3HUDGameTimerWidget_Statics::NewProp_Text_Timer = { "Text_Timer", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3HUDGameTimerWidget, Text_Timer), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPD3HUDGameTimerWidget_Statics::NewProp_Text_Timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDGameTimerWidget_Statics::NewProp_Text_Timer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPD3HUDGameTimerWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3HUDGameTimerWidget_Statics::NewProp_Text_Timer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3HUDGameTimerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3HUDGameTimerWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3HUDGameTimerWidget_Statics::ClassParams = {
		&UPD3HUDGameTimerWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPD3HUDGameTimerWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDGameTimerWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPD3HUDGameTimerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3HUDGameTimerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3HUDGameTimerWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3HUDGameTimerWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3HUDGameTimerWidget, 3397045297);
	template<> STARBREEZE_API UClass* StaticClass<UPD3HUDGameTimerWidget>()
	{
		return UPD3HUDGameTimerWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3HUDGameTimerWidget(Z_Construct_UClass_UPD3HUDGameTimerWidget, &UPD3HUDGameTimerWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3HUDGameTimerWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3HUDGameTimerWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
