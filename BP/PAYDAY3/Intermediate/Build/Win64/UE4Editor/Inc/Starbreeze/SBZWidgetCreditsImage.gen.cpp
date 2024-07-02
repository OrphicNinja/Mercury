// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWidgetCreditsImage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWidgetCreditsImage() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetCreditsImage_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetCreditsImage();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetCreditsRowBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	void USBZWidgetCreditsImage::StaticRegisterNativesUSBZWidgetCreditsImage()
	{
	}
	UClass* Z_Construct_UClass_USBZWidgetCreditsImage_NoRegister()
	{
		return USBZWidgetCreditsImage::StaticClass();
	}
	struct Z_Construct_UClass_USBZWidgetCreditsImage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImageWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWidgetCreditsImage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetCreditsRowBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWidgetCreditsImage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWidgetCreditsImage.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWidgetCreditsImage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWidgetCreditsImage_Statics::NewProp_ImageWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWidgetCreditsImage" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWidgetCreditsImage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWidgetCreditsImage_Statics::NewProp_ImageWidget = { "ImageWidget", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWidgetCreditsImage, ImageWidget), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWidgetCreditsImage_Statics::NewProp_ImageWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWidgetCreditsImage_Statics::NewProp_ImageWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWidgetCreditsImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWidgetCreditsImage_Statics::NewProp_ImageWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWidgetCreditsImage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWidgetCreditsImage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWidgetCreditsImage_Statics::ClassParams = {
		&USBZWidgetCreditsImage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZWidgetCreditsImage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWidgetCreditsImage_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWidgetCreditsImage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWidgetCreditsImage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWidgetCreditsImage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWidgetCreditsImage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWidgetCreditsImage, 1477388942);
	template<> STARBREEZE_API UClass* StaticClass<USBZWidgetCreditsImage>()
	{
		return USBZWidgetCreditsImage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWidgetCreditsImage(Z_Construct_UClass_USBZWidgetCreditsImage, &USBZWidgetCreditsImage::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWidgetCreditsImage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWidgetCreditsImage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
