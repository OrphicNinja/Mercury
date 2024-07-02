// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZFallDamageExecutionCalculation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZFallDamageExecutionCalculation() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFallDamageExecutionCalculation_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFallDamageExecutionCalculation();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZFallDamageExecutionCalculation::StaticRegisterNativesUSBZFallDamageExecutionCalculation()
	{
	}
	UClass* Z_Construct_UClass_USBZFallDamageExecutionCalculation_NoRegister()
	{
		return USBZFallDamageExecutionCalculation::StaticClass();
	}
	struct Z_Construct_UClass_USBZFallDamageExecutionCalculation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZFallDamageExecutionCalculation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFallDamageExecutionCalculation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZFallDamageExecutionCalculation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZFallDamageExecutionCalculation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZFallDamageExecutionCalculation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZFallDamageExecutionCalculation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZFallDamageExecutionCalculation_Statics::ClassParams = {
		&USBZFallDamageExecutionCalculation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZFallDamageExecutionCalculation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFallDamageExecutionCalculation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZFallDamageExecutionCalculation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZFallDamageExecutionCalculation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZFallDamageExecutionCalculation, 2031287830);
	template<> STARBREEZE_API UClass* StaticClass<USBZFallDamageExecutionCalculation>()
	{
		return USBZFallDamageExecutionCalculation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZFallDamageExecutionCalculation(Z_Construct_UClass_USBZFallDamageExecutionCalculation, &USBZFallDamageExecutionCalculation::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZFallDamageExecutionCalculation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZFallDamageExecutionCalculation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
