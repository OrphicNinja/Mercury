// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAICloakerMeleeExecutionCalculation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAICloakerMeleeExecutionCalculation() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICloakerMeleeExecutionCalculation_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICloakerMeleeExecutionCalculation();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAICloakerMeleeExecutionCalculation::StaticRegisterNativesUSBZAICloakerMeleeExecutionCalculation()
	{
	}
	UClass* Z_Construct_UClass_USBZAICloakerMeleeExecutionCalculation_NoRegister()
	{
		return USBZAICloakerMeleeExecutionCalculation::StaticClass();
	}
	struct Z_Construct_UClass_USBZAICloakerMeleeExecutionCalculation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAICloakerMeleeExecutionCalculation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICloakerMeleeExecutionCalculation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAICloakerMeleeExecutionCalculation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAICloakerMeleeExecutionCalculation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAICloakerMeleeExecutionCalculation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAICloakerMeleeExecutionCalculation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAICloakerMeleeExecutionCalculation_Statics::ClassParams = {
		&USBZAICloakerMeleeExecutionCalculation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZAICloakerMeleeExecutionCalculation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICloakerMeleeExecutionCalculation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAICloakerMeleeExecutionCalculation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAICloakerMeleeExecutionCalculation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAICloakerMeleeExecutionCalculation, 3421616242);
	template<> STARBREEZE_API UClass* StaticClass<USBZAICloakerMeleeExecutionCalculation>()
	{
		return USBZAICloakerMeleeExecutionCalculation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAICloakerMeleeExecutionCalculation(Z_Construct_UClass_USBZAICloakerMeleeExecutionCalculation, &USBZAICloakerMeleeExecutionCalculation::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAICloakerMeleeExecutionCalculation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAICloakerMeleeExecutionCalculation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
