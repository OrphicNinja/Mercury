// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZZiplineInteractRequirement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZZiplineInteractRequirement() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZZiplineInteractRequirement_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZZiplineInteractRequirement();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractRequirement();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZZiplineInteractRequirement::StaticRegisterNativesUSBZZiplineInteractRequirement()
	{
	}
	UClass* Z_Construct_UClass_USBZZiplineInteractRequirement_NoRegister()
	{
		return USBZZiplineInteractRequirement::StaticClass();
	}
	struct Z_Construct_UClass_USBZZiplineInteractRequirement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZZiplineInteractRequirement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZBaseInteractRequirement,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZZiplineInteractRequirement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZZiplineInteractRequirement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZZiplineInteractRequirement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZZiplineInteractRequirement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZZiplineInteractRequirement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZZiplineInteractRequirement_Statics::ClassParams = {
		&USBZZiplineInteractRequirement::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZZiplineInteractRequirement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZZiplineInteractRequirement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZZiplineInteractRequirement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZZiplineInteractRequirement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZZiplineInteractRequirement, 2344533735);
	template<> STARBREEZE_API UClass* StaticClass<USBZZiplineInteractRequirement>()
	{
		return USBZZiplineInteractRequirement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZZiplineInteractRequirement(Z_Construct_UClass_USBZZiplineInteractRequirement, &USBZZiplineInteractRequirement::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZZiplineInteractRequirement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZZiplineInteractRequirement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
