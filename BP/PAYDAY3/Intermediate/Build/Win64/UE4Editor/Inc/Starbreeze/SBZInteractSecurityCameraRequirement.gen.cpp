// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInteractSecurityCameraRequirement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInteractSecurityCameraRequirement() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractSecurityCameraRequirement_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractSecurityCameraRequirement();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractRequirement();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZInteractSecurityCameraRequirement::StaticRegisterNativesUSBZInteractSecurityCameraRequirement()
	{
	}
	UClass* Z_Construct_UClass_USBZInteractSecurityCameraRequirement_NoRegister()
	{
		return USBZInteractSecurityCameraRequirement::StaticClass();
	}
	struct Z_Construct_UClass_USBZInteractSecurityCameraRequirement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZInteractSecurityCameraRequirement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZBaseInteractRequirement,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInteractSecurityCameraRequirement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZInteractSecurityCameraRequirement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZInteractSecurityCameraRequirement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZInteractSecurityCameraRequirement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZInteractSecurityCameraRequirement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZInteractSecurityCameraRequirement_Statics::ClassParams = {
		&USBZInteractSecurityCameraRequirement::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZInteractSecurityCameraRequirement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInteractSecurityCameraRequirement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZInteractSecurityCameraRequirement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZInteractSecurityCameraRequirement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZInteractSecurityCameraRequirement, 2064610407);
	template<> STARBREEZE_API UClass* StaticClass<USBZInteractSecurityCameraRequirement>()
	{
		return USBZInteractSecurityCameraRequirement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZInteractSecurityCameraRequirement(Z_Construct_UClass_USBZInteractSecurityCameraRequirement, &USBZInteractSecurityCameraRequirement::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZInteractSecurityCameraRequirement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZInteractSecurityCameraRequirement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
