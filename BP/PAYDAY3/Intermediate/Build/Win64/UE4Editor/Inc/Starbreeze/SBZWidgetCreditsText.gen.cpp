// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWidgetCreditsText.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWidgetCreditsText() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetCreditsText_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetCreditsText();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetCreditsRowBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void USBZWidgetCreditsText::StaticRegisterNativesUSBZWidgetCreditsText()
	{
	}
	UClass* Z_Construct_UClass_USBZWidgetCreditsText_NoRegister()
	{
		return USBZWidgetCreditsText::StaticClass();
	}
	struct Z_Construct_UClass_USBZWidgetCreditsText_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWidgetCreditsText_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetCreditsRowBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWidgetCreditsText_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWidgetCreditsText.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWidgetCreditsText.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWidgetCreditsText_Statics::NewProp_TextWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWidgetCreditsText" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWidgetCreditsText.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWidgetCreditsText_Statics::NewProp_TextWidget = { "TextWidget", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWidgetCreditsText, TextWidget), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWidgetCreditsText_Statics::NewProp_TextWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWidgetCreditsText_Statics::NewProp_TextWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWidgetCreditsText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWidgetCreditsText_Statics::NewProp_TextWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWidgetCreditsText_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWidgetCreditsText>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWidgetCreditsText_Statics::ClassParams = {
		&USBZWidgetCreditsText::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZWidgetCreditsText_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWidgetCreditsText_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWidgetCreditsText_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWidgetCreditsText_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWidgetCreditsText()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWidgetCreditsText_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWidgetCreditsText, 2159610735);
	template<> STARBREEZE_API UClass* StaticClass<USBZWidgetCreditsText>()
	{
		return USBZWidgetCreditsText::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWidgetCreditsText(Z_Construct_UClass_USBZWidgetCreditsText, &USBZWidgetCreditsText::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWidgetCreditsText"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWidgetCreditsText);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
