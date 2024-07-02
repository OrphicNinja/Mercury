// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIShoveAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIShoveAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIShoveAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIShoveAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMeleeAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAIShoveAbility::StaticRegisterNativesUSBZAIShoveAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZAIShoveAbility_NoRegister()
	{
		return USBZAIShoveAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIShoveAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIShoveAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMeleeAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIShoveAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIShoveAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIShoveAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIShoveAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIShoveAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIShoveAbility_Statics::ClassParams = {
		&USBZAIShoveAbility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZAIShoveAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIShoveAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIShoveAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIShoveAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIShoveAbility, 3919668487);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIShoveAbility>()
	{
		return USBZAIShoveAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIShoveAbility(Z_Construct_UClass_USBZAIShoveAbility, &USBZAIShoveAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIShoveAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIShoveAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
