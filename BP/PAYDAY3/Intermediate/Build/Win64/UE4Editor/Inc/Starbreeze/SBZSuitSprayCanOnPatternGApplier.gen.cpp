// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSuitSprayCanOnPatternGApplier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSuitSprayCanOnPatternGApplier() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitSprayCanOnPatternGApplier_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitSprayCanOnPatternGApplier();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitSprayCanApplier();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSuitSprayCanOnPatternGApplier::StaticRegisterNativesUSBZSuitSprayCanOnPatternGApplier()
	{
	}
	UClass* Z_Construct_UClass_USBZSuitSprayCanOnPatternGApplier_NoRegister()
	{
		return USBZSuitSprayCanOnPatternGApplier::StaticClass();
	}
	struct Z_Construct_UClass_USBZSuitSprayCanOnPatternGApplier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSuitSprayCanOnPatternGApplier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSuitSprayCanApplier,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSuitSprayCanOnPatternGApplier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSuitSprayCanOnPatternGApplier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSuitSprayCanOnPatternGApplier.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSuitSprayCanOnPatternGApplier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSuitSprayCanOnPatternGApplier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSuitSprayCanOnPatternGApplier_Statics::ClassParams = {
		&USBZSuitSprayCanOnPatternGApplier::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSuitSprayCanOnPatternGApplier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSuitSprayCanOnPatternGApplier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSuitSprayCanOnPatternGApplier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSuitSprayCanOnPatternGApplier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSuitSprayCanOnPatternGApplier, 2840784630);
	template<> STARBREEZE_API UClass* StaticClass<USBZSuitSprayCanOnPatternGApplier>()
	{
		return USBZSuitSprayCanOnPatternGApplier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSuitSprayCanOnPatternGApplier(Z_Construct_UClass_USBZSuitSprayCanOnPatternGApplier, &USBZSuitSprayCanOnPatternGApplier::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSuitSprayCanOnPatternGApplier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSuitSprayCanOnPatternGApplier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
