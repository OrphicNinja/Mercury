// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SBZAnalytics/Public/SBZAnalyticsProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAnalyticsProvider() {}
// Cross Module References
	SBZANALYTICS_API UClass* Z_Construct_UClass_USBZAnalyticsProvider_NoRegister();
	SBZANALYTICS_API UClass* Z_Construct_UClass_USBZAnalyticsProvider();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SBZAnalytics();
// End Cross Module References
	void USBZAnalyticsProvider::StaticRegisterNativesUSBZAnalyticsProvider()
	{
	}
	UClass* Z_Construct_UClass_USBZAnalyticsProvider_NoRegister()
	{
		return USBZAnalyticsProvider::StaticClass();
	}
	struct Z_Construct_UClass_USBZAnalyticsProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAnalyticsProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SBZAnalytics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAnalyticsProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAnalyticsProvider.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAnalyticsProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAnalyticsProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAnalyticsProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAnalyticsProvider_Statics::ClassParams = {
		&USBZAnalyticsProvider::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAnalyticsProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAnalyticsProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAnalyticsProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAnalyticsProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAnalyticsProvider, 2346611783);
	template<> SBZANALYTICS_API UClass* StaticClass<USBZAnalyticsProvider>()
	{
		return USBZAnalyticsProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAnalyticsProvider(Z_Construct_UClass_USBZAnalyticsProvider, &USBZAnalyticsProvider::StaticClass, TEXT("/Script/SBZAnalytics"), TEXT("USBZAnalyticsProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAnalyticsProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
