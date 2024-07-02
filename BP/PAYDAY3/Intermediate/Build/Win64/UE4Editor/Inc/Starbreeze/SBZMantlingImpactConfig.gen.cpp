// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMantlingImpactConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMantlingImpactConfig() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMantlingImpactConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMantlingImpactConfig();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZImpactConfig();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZMantlingImpactConfig::StaticRegisterNativesUSBZMantlingImpactConfig()
	{
	}
	UClass* Z_Construct_UClass_USBZMantlingImpactConfig_NoRegister()
	{
		return USBZMantlingImpactConfig::StaticClass();
	}
	struct Z_Construct_UClass_USBZMantlingImpactConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMantlingImpactConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZImpactConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMantlingImpactConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMantlingImpactConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMantlingImpactConfig.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMantlingImpactConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMantlingImpactConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMantlingImpactConfig_Statics::ClassParams = {
		&USBZMantlingImpactConfig::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZMantlingImpactConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMantlingImpactConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMantlingImpactConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMantlingImpactConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMantlingImpactConfig, 1891204912);
	template<> STARBREEZE_API UClass* StaticClass<USBZMantlingImpactConfig>()
	{
		return USBZMantlingImpactConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMantlingImpactConfig(Z_Construct_UClass_USBZMantlingImpactConfig, &USBZMantlingImpactConfig::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMantlingImpactConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMantlingImpactConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
