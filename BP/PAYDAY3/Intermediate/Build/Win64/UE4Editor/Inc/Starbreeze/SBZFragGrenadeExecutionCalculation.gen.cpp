// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZFragGrenadeExecutionCalculation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZFragGrenadeExecutionCalculation() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFragGrenadeExecutionCalculation_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFragGrenadeExecutionCalculation();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZFragGrenadeExecutionCalculation::StaticRegisterNativesUSBZFragGrenadeExecutionCalculation()
	{
	}
	UClass* Z_Construct_UClass_USBZFragGrenadeExecutionCalculation_NoRegister()
	{
		return USBZFragGrenadeExecutionCalculation::StaticClass();
	}
	struct Z_Construct_UClass_USBZFragGrenadeExecutionCalculation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZFragGrenadeExecutionCalculation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFragGrenadeExecutionCalculation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZFragGrenadeExecutionCalculation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZFragGrenadeExecutionCalculation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZFragGrenadeExecutionCalculation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZFragGrenadeExecutionCalculation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZFragGrenadeExecutionCalculation_Statics::ClassParams = {
		&USBZFragGrenadeExecutionCalculation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZFragGrenadeExecutionCalculation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFragGrenadeExecutionCalculation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZFragGrenadeExecutionCalculation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZFragGrenadeExecutionCalculation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZFragGrenadeExecutionCalculation, 2598220311);
	template<> STARBREEZE_API UClass* StaticClass<USBZFragGrenadeExecutionCalculation>()
	{
		return USBZFragGrenadeExecutionCalculation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZFragGrenadeExecutionCalculation(Z_Construct_UClass_USBZFragGrenadeExecutionCalculation, &USBZFragGrenadeExecutionCalculation::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZFragGrenadeExecutionCalculation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZFragGrenadeExecutionCalculation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
