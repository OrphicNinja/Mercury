// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInteractWindowRequirement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInteractWindowRequirement() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractWindowRequirement_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractWindowRequirement();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractRequirement();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZInteractWindowRequirement::StaticRegisterNativesUSBZInteractWindowRequirement()
	{
	}
	UClass* Z_Construct_UClass_USBZInteractWindowRequirement_NoRegister()
	{
		return USBZInteractWindowRequirement::StaticClass();
	}
	struct Z_Construct_UClass_USBZInteractWindowRequirement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZInteractWindowRequirement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZBaseInteractRequirement,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractWindowRequirement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZInteractWindowRequirement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZInteractWindowRequirement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZInteractWindowRequirement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZInteractWindowRequirement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZInteractWindowRequirement_Statics::ClassParams = {
		&USBZInteractWindowRequirement::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZInteractWindowRequirement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractWindowRequirement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZInteractWindowRequirement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZInteractWindowRequirement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZInteractWindowRequirement, 2636555723);
	template<> STARBREEZE_API UClass* StaticClass<USBZInteractWindowRequirement>()
	{
		return USBZInteractWindowRequirement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZInteractWindowRequirement(Z_Construct_UClass_USBZInteractWindowRequirement, &USBZInteractWindowRequirement::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZInteractWindowRequirement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZInteractWindowRequirement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
