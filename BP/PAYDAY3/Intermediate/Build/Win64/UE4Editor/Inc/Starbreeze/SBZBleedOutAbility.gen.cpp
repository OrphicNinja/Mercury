// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBleedOutAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBleedOutAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBleedOutAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBleedOutAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDamageDefeatAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZBleedOutAbility::StaticRegisterNativesUSBZBleedOutAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZBleedOutAbility_NoRegister()
	{
		return USBZBleedOutAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZBleedOutAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBleedOutAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZDamageDefeatAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBleedOutAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBleedOutAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBleedOutAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBleedOutAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBleedOutAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBleedOutAbility_Statics::ClassParams = {
		&USBZBleedOutAbility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZBleedOutAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBleedOutAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBleedOutAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBleedOutAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBleedOutAbility, 1843846303);
	template<> STARBREEZE_API UClass* StaticClass<USBZBleedOutAbility>()
	{
		return USBZBleedOutAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBleedOutAbility(Z_Construct_UClass_USBZBleedOutAbility, &USBZBleedOutAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBleedOutAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBleedOutAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
