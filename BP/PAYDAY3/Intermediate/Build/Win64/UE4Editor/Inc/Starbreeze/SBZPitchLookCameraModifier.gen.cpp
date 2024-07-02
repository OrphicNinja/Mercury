// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPitchLookCameraModifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPitchLookCameraModifier() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPitchLookCameraModifier_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPitchLookCameraModifier();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerCameraModifier();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZPitchLookCameraModifier::StaticRegisterNativesUSBZPitchLookCameraModifier()
	{
	}
	UClass* Z_Construct_UClass_USBZPitchLookCameraModifier_NoRegister()
	{
		return USBZPitchLookCameraModifier::StaticClass();
	}
	struct Z_Construct_UClass_USBZPitchLookCameraModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPitchLookCameraModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerCameraModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPitchLookCameraModifier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPitchLookCameraModifier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPitchLookCameraModifier.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPitchLookCameraModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPitchLookCameraModifier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPitchLookCameraModifier_Statics::ClassParams = {
		&USBZPitchLookCameraModifier::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZPitchLookCameraModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPitchLookCameraModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPitchLookCameraModifier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPitchLookCameraModifier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPitchLookCameraModifier, 3098820650);
	template<> STARBREEZE_API UClass* StaticClass<USBZPitchLookCameraModifier>()
	{
		return USBZPitchLookCameraModifier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPitchLookCameraModifier(Z_Construct_UClass_USBZPitchLookCameraModifier, &USBZPitchLookCameraModifier::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPitchLookCameraModifier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPitchLookCameraModifier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
