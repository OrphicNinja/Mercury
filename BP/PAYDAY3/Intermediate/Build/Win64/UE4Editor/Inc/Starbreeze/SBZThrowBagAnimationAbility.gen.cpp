// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZThrowBagAnimationAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZThrowBagAnimationAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZThrowBagAnimationAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZThrowBagAnimationAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZThrowBagAnimationAbility::StaticRegisterNativesUSBZThrowBagAnimationAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZThrowBagAnimationAbility_NoRegister()
	{
		return USBZThrowBagAnimationAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZThrowBagAnimationAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZThrowBagAnimationAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZThrowBagAnimationAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZThrowBagAnimationAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZThrowBagAnimationAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZThrowBagAnimationAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZThrowBagAnimationAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZThrowBagAnimationAbility_Statics::ClassParams = {
		&USBZThrowBagAnimationAbility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZThrowBagAnimationAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZThrowBagAnimationAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZThrowBagAnimationAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZThrowBagAnimationAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZThrowBagAnimationAbility, 1350564204);
	template<> STARBREEZE_API UClass* StaticClass<USBZThrowBagAnimationAbility>()
	{
		return USBZThrowBagAnimationAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZThrowBagAnimationAbility(Z_Construct_UClass_USBZThrowBagAnimationAbility, &USBZThrowBagAnimationAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZThrowBagAnimationAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZThrowBagAnimationAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
