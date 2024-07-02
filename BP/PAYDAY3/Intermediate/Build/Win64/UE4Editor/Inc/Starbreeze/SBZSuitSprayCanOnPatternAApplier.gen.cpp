// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSuitSprayCanOnPatternAApplier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSuitSprayCanOnPatternAApplier() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitSprayCanOnPatternAApplier_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitSprayCanOnPatternAApplier();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitSprayCanApplier();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSuitSprayCanOnPatternAApplier::StaticRegisterNativesUSBZSuitSprayCanOnPatternAApplier()
	{
	}
	UClass* Z_Construct_UClass_USBZSuitSprayCanOnPatternAApplier_NoRegister()
	{
		return USBZSuitSprayCanOnPatternAApplier::StaticClass();
	}
	struct Z_Construct_UClass_USBZSuitSprayCanOnPatternAApplier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSuitSprayCanOnPatternAApplier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSuitSprayCanApplier,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSuitSprayCanOnPatternAApplier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSuitSprayCanOnPatternAApplier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSuitSprayCanOnPatternAApplier.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSuitSprayCanOnPatternAApplier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSuitSprayCanOnPatternAApplier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSuitSprayCanOnPatternAApplier_Statics::ClassParams = {
		&USBZSuitSprayCanOnPatternAApplier::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSuitSprayCanOnPatternAApplier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSuitSprayCanOnPatternAApplier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSuitSprayCanOnPatternAApplier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSuitSprayCanOnPatternAApplier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSuitSprayCanOnPatternAApplier, 2077060100);
	template<> STARBREEZE_API UClass* StaticClass<USBZSuitSprayCanOnPatternAApplier>()
	{
		return USBZSuitSprayCanOnPatternAApplier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSuitSprayCanOnPatternAApplier(Z_Construct_UClass_USBZSuitSprayCanOnPatternAApplier, &USBZSuitSprayCanOnPatternAApplier::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSuitSprayCanOnPatternAApplier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSuitSprayCanOnPatternAApplier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
