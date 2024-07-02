// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPocketDrillInteractRequirement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPocketDrillInteractRequirement() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPocketDrillInteractRequirement_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPocketDrillInteractRequirement();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractRequirement();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZPocketDrillInteractRequirement::StaticRegisterNativesUSBZPocketDrillInteractRequirement()
	{
	}
	UClass* Z_Construct_UClass_USBZPocketDrillInteractRequirement_NoRegister()
	{
		return USBZPocketDrillInteractRequirement::StaticClass();
	}
	struct Z_Construct_UClass_USBZPocketDrillInteractRequirement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPocketDrillInteractRequirement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZBaseInteractRequirement,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPocketDrillInteractRequirement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPocketDrillInteractRequirement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPocketDrillInteractRequirement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPocketDrillInteractRequirement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPocketDrillInteractRequirement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPocketDrillInteractRequirement_Statics::ClassParams = {
		&USBZPocketDrillInteractRequirement::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZPocketDrillInteractRequirement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPocketDrillInteractRequirement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPocketDrillInteractRequirement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPocketDrillInteractRequirement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPocketDrillInteractRequirement, 2254762560);
	template<> STARBREEZE_API UClass* StaticClass<USBZPocketDrillInteractRequirement>()
	{
		return USBZPocketDrillInteractRequirement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPocketDrillInteractRequirement(Z_Construct_UClass_USBZPocketDrillInteractRequirement, &USBZPocketDrillInteractRequirement::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPocketDrillInteractRequirement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPocketDrillInteractRequirement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
