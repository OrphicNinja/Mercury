// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlaceableToolRequirement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlaceableToolRequirement() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlaceableToolRequirement_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlaceableToolRequirement();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractRequirement();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZPlaceableToolRequirement::StaticRegisterNativesUSBZPlaceableToolRequirement()
	{
	}
	UClass* Z_Construct_UClass_USBZPlaceableToolRequirement_NoRegister()
	{
		return USBZPlaceableToolRequirement::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlaceableToolRequirement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlaceableToolRequirement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZBaseInteractRequirement,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceableToolRequirement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlaceableToolRequirement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlaceableToolRequirement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlaceableToolRequirement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlaceableToolRequirement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlaceableToolRequirement_Statics::ClassParams = {
		&USBZPlaceableToolRequirement::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZPlaceableToolRequirement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceableToolRequirement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlaceableToolRequirement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlaceableToolRequirement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlaceableToolRequirement, 2669890734);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlaceableToolRequirement>()
	{
		return USBZPlaceableToolRequirement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlaceableToolRequirement(Z_Construct_UClass_USBZPlaceableToolRequirement, &USBZPlaceableToolRequirement::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlaceableToolRequirement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlaceableToolRequirement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
