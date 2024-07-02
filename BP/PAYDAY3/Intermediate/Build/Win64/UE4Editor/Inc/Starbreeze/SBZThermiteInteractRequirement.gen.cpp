// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZThermiteInteractRequirement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZThermiteInteractRequirement() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZThermiteInteractRequirement_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZThermiteInteractRequirement();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractRequirement();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZThermiteInteractRequirement::StaticRegisterNativesUSBZThermiteInteractRequirement()
	{
	}
	UClass* Z_Construct_UClass_USBZThermiteInteractRequirement_NoRegister()
	{
		return USBZThermiteInteractRequirement::StaticClass();
	}
	struct Z_Construct_UClass_USBZThermiteInteractRequirement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZThermiteInteractRequirement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZBaseInteractRequirement,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZThermiteInteractRequirement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZThermiteInteractRequirement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZThermiteInteractRequirement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZThermiteInteractRequirement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZThermiteInteractRequirement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZThermiteInteractRequirement_Statics::ClassParams = {
		&USBZThermiteInteractRequirement::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZThermiteInteractRequirement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZThermiteInteractRequirement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZThermiteInteractRequirement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZThermiteInteractRequirement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZThermiteInteractRequirement, 2051256721);
	template<> STARBREEZE_API UClass* StaticClass<USBZThermiteInteractRequirement>()
	{
		return USBZThermiteInteractRequirement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZThermiteInteractRequirement(Z_Construct_UClass_USBZThermiteInteractRequirement, &USBZThermiteInteractRequirement::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZThermiteInteractRequirement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZThermiteInteractRequirement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
