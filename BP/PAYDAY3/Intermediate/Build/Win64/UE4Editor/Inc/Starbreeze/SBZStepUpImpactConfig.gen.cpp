// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStepUpImpactConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStepUpImpactConfig() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStepUpImpactConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStepUpImpactConfig();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZImpactConfig();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZStepUpImpactConfig::StaticRegisterNativesUSBZStepUpImpactConfig()
	{
	}
	UClass* Z_Construct_UClass_USBZStepUpImpactConfig_NoRegister()
	{
		return USBZStepUpImpactConfig::StaticClass();
	}
	struct Z_Construct_UClass_USBZStepUpImpactConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStepUpImpactConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZImpactConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStepUpImpactConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStepUpImpactConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStepUpImpactConfig.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStepUpImpactConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStepUpImpactConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStepUpImpactConfig_Statics::ClassParams = {
		&USBZStepUpImpactConfig::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZStepUpImpactConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStepUpImpactConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStepUpImpactConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStepUpImpactConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStepUpImpactConfig, 3972644008);
	template<> STARBREEZE_API UClass* StaticClass<USBZStepUpImpactConfig>()
	{
		return USBZStepUpImpactConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStepUpImpactConfig(Z_Construct_UClass_USBZStepUpImpactConfig, &USBZStepUpImpactConfig::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStepUpImpactConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStepUpImpactConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
