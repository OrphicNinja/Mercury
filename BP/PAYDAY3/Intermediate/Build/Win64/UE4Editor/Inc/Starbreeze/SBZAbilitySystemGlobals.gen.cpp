// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAbilitySystemGlobals.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAbilitySystemGlobals() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAbilitySystemGlobals_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAbilitySystemGlobals();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemGlobals();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAbilitySystemGlobals::StaticRegisterNativesUSBZAbilitySystemGlobals()
	{
	}
	UClass* Z_Construct_UClass_USBZAbilitySystemGlobals_NoRegister()
	{
		return USBZAbilitySystemGlobals::StaticClass();
	}
	struct Z_Construct_UClass_USBZAbilitySystemGlobals_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAbilitySystemGlobals_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemGlobals,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAbilitySystemGlobals_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAbilitySystemGlobals.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAbilitySystemGlobals.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAbilitySystemGlobals_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAbilitySystemGlobals>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAbilitySystemGlobals_Statics::ClassParams = {
		&USBZAbilitySystemGlobals::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAbilitySystemGlobals_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAbilitySystemGlobals_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAbilitySystemGlobals()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAbilitySystemGlobals_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAbilitySystemGlobals, 38781573);
	template<> STARBREEZE_API UClass* StaticClass<USBZAbilitySystemGlobals>()
	{
		return USBZAbilitySystemGlobals::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAbilitySystemGlobals(Z_Construct_UClass_USBZAbilitySystemGlobals, &USBZAbilitySystemGlobals::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAbilitySystemGlobals"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAbilitySystemGlobals);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
