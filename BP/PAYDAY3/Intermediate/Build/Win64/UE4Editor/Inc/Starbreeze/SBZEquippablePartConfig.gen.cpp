// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEquippablePartConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEquippablePartConfig() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippablePartConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippablePartConfig();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartConfig();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZEquippablePartConfig::StaticRegisterNativesUSBZEquippablePartConfig()
	{
	}
	UClass* Z_Construct_UClass_USBZEquippablePartConfig_NoRegister()
	{
		return USBZEquippablePartConfig::StaticClass();
	}
	struct Z_Construct_UClass_USBZEquippablePartConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEquippablePartConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZModularPartConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippablePartConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEquippablePartConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEquippablePartConfig.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEquippablePartConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEquippablePartConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEquippablePartConfig_Statics::ClassParams = {
		&USBZEquippablePartConfig::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZEquippablePartConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippablePartConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEquippablePartConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEquippablePartConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEquippablePartConfig, 1642937474);
	template<> STARBREEZE_API UClass* StaticClass<USBZEquippablePartConfig>()
	{
		return USBZEquippablePartConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEquippablePartConfig(Z_Construct_UClass_USBZEquippablePartConfig, &USBZEquippablePartConfig::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEquippablePartConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEquippablePartConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
