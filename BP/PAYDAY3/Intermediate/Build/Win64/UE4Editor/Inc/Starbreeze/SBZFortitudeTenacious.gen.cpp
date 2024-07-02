// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZFortitudeTenacious.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZFortitudeTenacious() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFortitudeTenacious_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFortitudeTenacious();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZFortitudeTenacious::StaticRegisterNativesUSBZFortitudeTenacious()
	{
	}
	UClass* Z_Construct_UClass_USBZFortitudeTenacious_NoRegister()
	{
		return USBZFortitudeTenacious::StaticClass();
	}
	struct Z_Construct_UClass_USBZFortitudeTenacious_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZFortitudeTenacious_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFortitudeTenacious_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZFortitudeTenacious.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZFortitudeTenacious.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZFortitudeTenacious_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZFortitudeTenacious>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZFortitudeTenacious_Statics::ClassParams = {
		&USBZFortitudeTenacious::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZFortitudeTenacious_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFortitudeTenacious_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZFortitudeTenacious()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZFortitudeTenacious_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZFortitudeTenacious, 1951687461);
	template<> STARBREEZE_API UClass* StaticClass<USBZFortitudeTenacious>()
	{
		return USBZFortitudeTenacious::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZFortitudeTenacious(Z_Construct_UClass_USBZFortitudeTenacious, &USBZFortitudeTenacious::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZFortitudeTenacious"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZFortitudeTenacious);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
