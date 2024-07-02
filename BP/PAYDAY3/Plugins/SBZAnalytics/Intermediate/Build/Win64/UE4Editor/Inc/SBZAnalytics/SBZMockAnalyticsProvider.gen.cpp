// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SBZAnalytics/Public/SBZMockAnalyticsProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMockAnalyticsProvider() {}
// Cross Module References
	SBZANALYTICS_API UClass* Z_Construct_UClass_USBZMockAnalyticsProvider_NoRegister();
	SBZANALYTICS_API UClass* Z_Construct_UClass_USBZMockAnalyticsProvider();
	SBZANALYTICS_API UClass* Z_Construct_UClass_USBZAnalyticsProvider();
	UPackage* Z_Construct_UPackage__Script_SBZAnalytics();
// End Cross Module References
	void USBZMockAnalyticsProvider::StaticRegisterNativesUSBZMockAnalyticsProvider()
	{
	}
	UClass* Z_Construct_UClass_USBZMockAnalyticsProvider_NoRegister()
	{
		return USBZMockAnalyticsProvider::StaticClass();
	}
	struct Z_Construct_UClass_USBZMockAnalyticsProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMockAnalyticsProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAnalyticsProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_SBZAnalytics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMockAnalyticsProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMockAnalyticsProvider.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMockAnalyticsProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMockAnalyticsProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMockAnalyticsProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMockAnalyticsProvider_Statics::ClassParams = {
		&USBZMockAnalyticsProvider::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMockAnalyticsProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMockAnalyticsProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMockAnalyticsProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMockAnalyticsProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMockAnalyticsProvider, 2706953455);
	template<> SBZANALYTICS_API UClass* StaticClass<USBZMockAnalyticsProvider>()
	{
		return USBZMockAnalyticsProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMockAnalyticsProvider(Z_Construct_UClass_USBZMockAnalyticsProvider, &USBZMockAnalyticsProvider::StaticClass, TEXT("/Script/SBZAnalytics"), TEXT("USBZMockAnalyticsProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMockAnalyticsProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
