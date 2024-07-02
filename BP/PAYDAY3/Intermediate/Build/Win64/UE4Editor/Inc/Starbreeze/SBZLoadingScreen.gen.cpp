// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLoadingScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLoadingScreen() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoadingScreen_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoadingScreen();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoadingWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZLoadingScreen::StaticRegisterNativesUSBZLoadingScreen()
	{
	}
	UClass* Z_Construct_UClass_USBZLoadingScreen_NoRegister()
	{
		return USBZLoadingScreen::StaticClass();
	}
	struct Z_Construct_UClass_USBZLoadingScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZLoadingScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZLoadingWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoadingScreen_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLoadingScreen.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLoadingScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZLoadingScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZLoadingScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZLoadingScreen_Statics::ClassParams = {
		&USBZLoadingScreen::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZLoadingScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoadingScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZLoadingScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZLoadingScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZLoadingScreen, 11822710);
	template<> STARBREEZE_API UClass* StaticClass<USBZLoadingScreen>()
	{
		return USBZLoadingScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZLoadingScreen(Z_Construct_UClass_USBZLoadingScreen, &USBZLoadingScreen::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZLoadingScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZLoadingScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
