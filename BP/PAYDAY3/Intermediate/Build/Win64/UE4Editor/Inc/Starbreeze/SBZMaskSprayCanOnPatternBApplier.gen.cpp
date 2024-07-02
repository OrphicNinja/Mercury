// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMaskSprayCanOnPatternBApplier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMaskSprayCanOnPatternBApplier() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskSprayCanOnPatternBApplier_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskSprayCanOnPatternBApplier();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskSprayCanApplier();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZMaskSprayCanOnPatternBApplier::StaticRegisterNativesUSBZMaskSprayCanOnPatternBApplier()
	{
	}
	UClass* Z_Construct_UClass_USBZMaskSprayCanOnPatternBApplier_NoRegister()
	{
		return USBZMaskSprayCanOnPatternBApplier::StaticClass();
	}
	struct Z_Construct_UClass_USBZMaskSprayCanOnPatternBApplier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMaskSprayCanOnPatternBApplier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMaskSprayCanApplier,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskSprayCanOnPatternBApplier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMaskSprayCanOnPatternBApplier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMaskSprayCanOnPatternBApplier.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMaskSprayCanOnPatternBApplier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMaskSprayCanOnPatternBApplier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMaskSprayCanOnPatternBApplier_Statics::ClassParams = {
		&USBZMaskSprayCanOnPatternBApplier::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZMaskSprayCanOnPatternBApplier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskSprayCanOnPatternBApplier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMaskSprayCanOnPatternBApplier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMaskSprayCanOnPatternBApplier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMaskSprayCanOnPatternBApplier, 1115081201);
	template<> STARBREEZE_API UClass* StaticClass<USBZMaskSprayCanOnPatternBApplier>()
	{
		return USBZMaskSprayCanOnPatternBApplier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMaskSprayCanOnPatternBApplier(Z_Construct_UClass_USBZMaskSprayCanOnPatternBApplier, &USBZMaskSprayCanOnPatternBApplier::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMaskSprayCanOnPatternBApplier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMaskSprayCanOnPatternBApplier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
