// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIGrenadeBeltDamageExecutionCalculation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIGrenadeBeltDamageExecutionCalculation() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIGrenadeBeltDamageExecutionCalculation_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIGrenadeBeltDamageExecutionCalculation();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAIGrenadeBeltDamageExecutionCalculation::StaticRegisterNativesUSBZAIGrenadeBeltDamageExecutionCalculation()
	{
	}
	UClass* Z_Construct_UClass_USBZAIGrenadeBeltDamageExecutionCalculation_NoRegister()
	{
		return USBZAIGrenadeBeltDamageExecutionCalculation::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIGrenadeBeltDamageExecutionCalculation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIGrenadeBeltDamageExecutionCalculation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIGrenadeBeltDamageExecutionCalculation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIGrenadeBeltDamageExecutionCalculation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIGrenadeBeltDamageExecutionCalculation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIGrenadeBeltDamageExecutionCalculation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIGrenadeBeltDamageExecutionCalculation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIGrenadeBeltDamageExecutionCalculation_Statics::ClassParams = {
		&USBZAIGrenadeBeltDamageExecutionCalculation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZAIGrenadeBeltDamageExecutionCalculation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIGrenadeBeltDamageExecutionCalculation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIGrenadeBeltDamageExecutionCalculation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIGrenadeBeltDamageExecutionCalculation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIGrenadeBeltDamageExecutionCalculation, 1005249125);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIGrenadeBeltDamageExecutionCalculation>()
	{
		return USBZAIGrenadeBeltDamageExecutionCalculation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIGrenadeBeltDamageExecutionCalculation(Z_Construct_UClass_USBZAIGrenadeBeltDamageExecutionCalculation, &USBZAIGrenadeBeltDamageExecutionCalculation::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIGrenadeBeltDamageExecutionCalculation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIGrenadeBeltDamageExecutionCalculation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
