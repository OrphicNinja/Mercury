// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInteractPlaceableSentryRequirement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInteractPlaceableSentryRequirement() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractPlaceableSentryRequirement_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractPlaceableSentryRequirement();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractRequirement();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZInteractPlaceableSentryRequirement::StaticRegisterNativesUSBZInteractPlaceableSentryRequirement()
	{
	}
	UClass* Z_Construct_UClass_USBZInteractPlaceableSentryRequirement_NoRegister()
	{
		return USBZInteractPlaceableSentryRequirement::StaticClass();
	}
	struct Z_Construct_UClass_USBZInteractPlaceableSentryRequirement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZInteractPlaceableSentryRequirement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZBaseInteractRequirement,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractPlaceableSentryRequirement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZInteractPlaceableSentryRequirement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZInteractPlaceableSentryRequirement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZInteractPlaceableSentryRequirement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZInteractPlaceableSentryRequirement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZInteractPlaceableSentryRequirement_Statics::ClassParams = {
		&USBZInteractPlaceableSentryRequirement::StaticClass,
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
		0x002010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZInteractPlaceableSentryRequirement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractPlaceableSentryRequirement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZInteractPlaceableSentryRequirement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZInteractPlaceableSentryRequirement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZInteractPlaceableSentryRequirement, 1315640032);
	template<> STARBREEZE_API UClass* StaticClass<USBZInteractPlaceableSentryRequirement>()
	{
		return USBZInteractPlaceableSentryRequirement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZInteractPlaceableSentryRequirement(Z_Construct_UClass_USBZInteractPlaceableSentryRequirement, &USBZInteractPlaceableSentryRequirement::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZInteractPlaceableSentryRequirement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZInteractPlaceableSentryRequirement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
