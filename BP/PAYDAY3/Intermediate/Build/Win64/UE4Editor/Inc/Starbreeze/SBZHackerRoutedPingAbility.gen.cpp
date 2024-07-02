// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHackerRoutedPingAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHackerRoutedPingAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHackerRoutedPingAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHackerRoutedPingAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHackerBaseAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZHackerRoutedPingAbility::StaticRegisterNativesUSBZHackerRoutedPingAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZHackerRoutedPingAbility_NoRegister()
	{
		return USBZHackerRoutedPingAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZHackerRoutedPingAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZHackerRoutedPingAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZHackerBaseAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHackerRoutedPingAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHackerRoutedPingAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHackerRoutedPingAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZHackerRoutedPingAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZHackerRoutedPingAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZHackerRoutedPingAbility_Statics::ClassParams = {
		&USBZHackerRoutedPingAbility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZHackerRoutedPingAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHackerRoutedPingAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZHackerRoutedPingAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZHackerRoutedPingAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZHackerRoutedPingAbility, 3179512622);
	template<> STARBREEZE_API UClass* StaticClass<USBZHackerRoutedPingAbility>()
	{
		return USBZHackerRoutedPingAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZHackerRoutedPingAbility(Z_Construct_UClass_USBZHackerRoutedPingAbility, &USBZHackerRoutedPingAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZHackerRoutedPingAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZHackerRoutedPingAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
