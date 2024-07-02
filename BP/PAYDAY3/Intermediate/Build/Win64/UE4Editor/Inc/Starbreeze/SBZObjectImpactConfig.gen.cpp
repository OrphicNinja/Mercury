// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZObjectImpactConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZObjectImpactConfig() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZObjectImpactConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZObjectImpactConfig();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZImpactConfig();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZObjectImpactConfig::StaticRegisterNativesUSBZObjectImpactConfig()
	{
	}
	UClass* Z_Construct_UClass_USBZObjectImpactConfig_NoRegister()
	{
		return USBZObjectImpactConfig::StaticClass();
	}
	struct Z_Construct_UClass_USBZObjectImpactConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZObjectImpactConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZImpactConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZObjectImpactConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZObjectImpactConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZObjectImpactConfig.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZObjectImpactConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZObjectImpactConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZObjectImpactConfig_Statics::ClassParams = {
		&USBZObjectImpactConfig::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZObjectImpactConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZObjectImpactConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZObjectImpactConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZObjectImpactConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZObjectImpactConfig, 4223625623);
	template<> STARBREEZE_API UClass* StaticClass<USBZObjectImpactConfig>()
	{
		return USBZObjectImpactConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZObjectImpactConfig(Z_Construct_UClass_USBZObjectImpactConfig, &USBZObjectImpactConfig::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZObjectImpactConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZObjectImpactConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
