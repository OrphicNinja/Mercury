// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZModularPartApplierOverrideMat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZModularPartApplierOverrideMat() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartApplierOverrideMat_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartApplierOverrideMat();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartApplier();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZModularPartApplierOverrideMat::StaticRegisterNativesUSBZModularPartApplierOverrideMat()
	{
	}
	UClass* Z_Construct_UClass_USBZModularPartApplierOverrideMat_NoRegister()
	{
		return USBZModularPartApplierOverrideMat::StaticClass();
	}
	struct Z_Construct_UClass_USBZModularPartApplierOverrideMat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZModularPartApplierOverrideMat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZModularPartApplier,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModularPartApplierOverrideMat_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZModularPartApplierOverrideMat.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZModularPartApplierOverrideMat.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZModularPartApplierOverrideMat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZModularPartApplierOverrideMat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZModularPartApplierOverrideMat_Statics::ClassParams = {
		&USBZModularPartApplierOverrideMat::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZModularPartApplierOverrideMat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularPartApplierOverrideMat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZModularPartApplierOverrideMat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZModularPartApplierOverrideMat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZModularPartApplierOverrideMat, 2904341198);
	template<> STARBREEZE_API UClass* StaticClass<USBZModularPartApplierOverrideMat>()
	{
		return USBZModularPartApplierOverrideMat::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZModularPartApplierOverrideMat(Z_Construct_UClass_USBZModularPartApplierOverrideMat, &USBZModularPartApplierOverrideMat::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZModularPartApplierOverrideMat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZModularPartApplierOverrideMat);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
