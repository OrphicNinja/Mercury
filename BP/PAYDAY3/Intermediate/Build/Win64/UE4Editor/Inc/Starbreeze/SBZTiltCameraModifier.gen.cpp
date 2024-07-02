// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTiltCameraModifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTiltCameraModifier() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTiltCameraModifier_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTiltCameraModifier();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerCameraModifier();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZTiltCameraModifier::StaticRegisterNativesUSBZTiltCameraModifier()
	{
	}
	UClass* Z_Construct_UClass_USBZTiltCameraModifier_NoRegister()
	{
		return USBZTiltCameraModifier::StaticClass();
	}
	struct Z_Construct_UClass_USBZTiltCameraModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZTiltCameraModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerCameraModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTiltCameraModifier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZTiltCameraModifier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZTiltCameraModifier.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZTiltCameraModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZTiltCameraModifier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZTiltCameraModifier_Statics::ClassParams = {
		&USBZTiltCameraModifier::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZTiltCameraModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTiltCameraModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZTiltCameraModifier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZTiltCameraModifier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZTiltCameraModifier, 566366953);
	template<> STARBREEZE_API UClass* StaticClass<USBZTiltCameraModifier>()
	{
		return USBZTiltCameraModifier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZTiltCameraModifier(Z_Construct_UClass_USBZTiltCameraModifier, &USBZTiltCameraModifier::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZTiltCameraModifier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZTiltCameraModifier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
