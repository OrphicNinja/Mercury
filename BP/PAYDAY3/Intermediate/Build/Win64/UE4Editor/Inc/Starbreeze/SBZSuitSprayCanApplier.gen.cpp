// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSuitSprayCanApplier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSuitSprayCanApplier() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitSprayCanApplier_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitSprayCanApplier();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartApplier();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSuitSprayCanApplier::StaticRegisterNativesUSBZSuitSprayCanApplier()
	{
	}
	UClass* Z_Construct_UClass_USBZSuitSprayCanApplier_NoRegister()
	{
		return USBZSuitSprayCanApplier::StaticClass();
	}
	struct Z_Construct_UClass_USBZSuitSprayCanApplier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSuitSprayCanApplier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZModularPartApplier,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSuitSprayCanApplier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSuitSprayCanApplier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSuitSprayCanApplier.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSuitSprayCanApplier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSuitSprayCanApplier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSuitSprayCanApplier_Statics::ClassParams = {
		&USBZSuitSprayCanApplier::StaticClass,
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
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSuitSprayCanApplier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSuitSprayCanApplier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSuitSprayCanApplier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSuitSprayCanApplier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSuitSprayCanApplier, 4176619995);
	template<> STARBREEZE_API UClass* StaticClass<USBZSuitSprayCanApplier>()
	{
		return USBZSuitSprayCanApplier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSuitSprayCanApplier(Z_Construct_UClass_USBZSuitSprayCanApplier, &USBZSuitSprayCanApplier::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSuitSprayCanApplier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSuitSprayCanApplier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
