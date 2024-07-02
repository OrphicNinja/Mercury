// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSuitSprayCanGlobalColorApplier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSuitSprayCanGlobalColorApplier() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitSprayCanGlobalColorApplier_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitSprayCanGlobalColorApplier();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitSprayCanApplier();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSuitSprayCanGlobalColorApplier::StaticRegisterNativesUSBZSuitSprayCanGlobalColorApplier()
	{
	}
	UClass* Z_Construct_UClass_USBZSuitSprayCanGlobalColorApplier_NoRegister()
	{
		return USBZSuitSprayCanGlobalColorApplier::StaticClass();
	}
	struct Z_Construct_UClass_USBZSuitSprayCanGlobalColorApplier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSuitSprayCanGlobalColorApplier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSuitSprayCanApplier,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSuitSprayCanGlobalColorApplier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSuitSprayCanGlobalColorApplier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSuitSprayCanGlobalColorApplier.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSuitSprayCanGlobalColorApplier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSuitSprayCanGlobalColorApplier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSuitSprayCanGlobalColorApplier_Statics::ClassParams = {
		&USBZSuitSprayCanGlobalColorApplier::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSuitSprayCanGlobalColorApplier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSuitSprayCanGlobalColorApplier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSuitSprayCanGlobalColorApplier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSuitSprayCanGlobalColorApplier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSuitSprayCanGlobalColorApplier, 3640608507);
	template<> STARBREEZE_API UClass* StaticClass<USBZSuitSprayCanGlobalColorApplier>()
	{
		return USBZSuitSprayCanGlobalColorApplier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSuitSprayCanGlobalColorApplier(Z_Construct_UClass_USBZSuitSprayCanGlobalColorApplier, &USBZSuitSprayCanGlobalColorApplier::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSuitSprayCanGlobalColorApplier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSuitSprayCanGlobalColorApplier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
