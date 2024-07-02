// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMaskSprayCanOnPatternGApplier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMaskSprayCanOnPatternGApplier() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskSprayCanOnPatternGApplier_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskSprayCanOnPatternGApplier();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskSprayCanApplier();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZMaskSprayCanOnPatternGApplier::StaticRegisterNativesUSBZMaskSprayCanOnPatternGApplier()
	{
	}
	UClass* Z_Construct_UClass_USBZMaskSprayCanOnPatternGApplier_NoRegister()
	{
		return USBZMaskSprayCanOnPatternGApplier::StaticClass();
	}
	struct Z_Construct_UClass_USBZMaskSprayCanOnPatternGApplier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMaskSprayCanOnPatternGApplier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMaskSprayCanApplier,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskSprayCanOnPatternGApplier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMaskSprayCanOnPatternGApplier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMaskSprayCanOnPatternGApplier.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMaskSprayCanOnPatternGApplier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMaskSprayCanOnPatternGApplier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMaskSprayCanOnPatternGApplier_Statics::ClassParams = {
		&USBZMaskSprayCanOnPatternGApplier::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZMaskSprayCanOnPatternGApplier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskSprayCanOnPatternGApplier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMaskSprayCanOnPatternGApplier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMaskSprayCanOnPatternGApplier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMaskSprayCanOnPatternGApplier, 2289569465);
	template<> STARBREEZE_API UClass* StaticClass<USBZMaskSprayCanOnPatternGApplier>()
	{
		return USBZMaskSprayCanOnPatternGApplier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMaskSprayCanOnPatternGApplier(Z_Construct_UClass_USBZMaskSprayCanOnPatternGApplier, &USBZMaskSprayCanOnPatternGApplier::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMaskSprayCanOnPatternGApplier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMaskSprayCanOnPatternGApplier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
