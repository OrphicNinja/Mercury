// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZFortitudePeakPerformance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZFortitudePeakPerformance() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFortitudePeakPerformance_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFortitudePeakPerformance();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZFortitudePeakPerformance::StaticRegisterNativesUSBZFortitudePeakPerformance()
	{
	}
	UClass* Z_Construct_UClass_USBZFortitudePeakPerformance_NoRegister()
	{
		return USBZFortitudePeakPerformance::StaticClass();
	}
	struct Z_Construct_UClass_USBZFortitudePeakPerformance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZFortitudePeakPerformance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFortitudePeakPerformance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZFortitudePeakPerformance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZFortitudePeakPerformance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZFortitudePeakPerformance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZFortitudePeakPerformance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZFortitudePeakPerformance_Statics::ClassParams = {
		&USBZFortitudePeakPerformance::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZFortitudePeakPerformance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFortitudePeakPerformance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZFortitudePeakPerformance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZFortitudePeakPerformance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZFortitudePeakPerformance, 3665128121);
	template<> STARBREEZE_API UClass* StaticClass<USBZFortitudePeakPerformance>()
	{
		return USBZFortitudePeakPerformance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZFortitudePeakPerformance(Z_Construct_UClass_USBZFortitudePeakPerformance, &USBZFortitudePeakPerformance::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZFortitudePeakPerformance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZFortitudePeakPerformance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
