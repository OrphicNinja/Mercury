// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZToolUnequippedAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZToolUnequippedAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolUnequippedAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolUnequippedAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZToolUnequippedAbility::StaticRegisterNativesUSBZToolUnequippedAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZToolUnequippedAbility_NoRegister()
	{
		return USBZToolUnequippedAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZToolUnequippedAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZToolUnequippedAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZToolUnequippedAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZToolUnequippedAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZToolUnequippedAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZToolUnequippedAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZToolUnequippedAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZToolUnequippedAbility_Statics::ClassParams = {
		&USBZToolUnequippedAbility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZToolUnequippedAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZToolUnequippedAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZToolUnequippedAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZToolUnequippedAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZToolUnequippedAbility, 2717437000);
	template<> STARBREEZE_API UClass* StaticClass<USBZToolUnequippedAbility>()
	{
		return USBZToolUnequippedAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZToolUnequippedAbility(Z_Construct_UClass_USBZToolUnequippedAbility, &USBZToolUnequippedAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZToolUnequippedAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZToolUnequippedAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
