// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHumanShieldGrabStartNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHumanShieldGrabStartNotify() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHumanShieldGrabStartNotify_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHumanShieldGrabStartNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZHumanShieldGrabStartNotify::StaticRegisterNativesUSBZHumanShieldGrabStartNotify()
	{
	}
	UClass* Z_Construct_UClass_USBZHumanShieldGrabStartNotify_NoRegister()
	{
		return USBZHumanShieldGrabStartNotify::StaticClass();
	}
	struct Z_Construct_UClass_USBZHumanShieldGrabStartNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZHumanShieldGrabStartNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHumanShieldGrabStartNotify_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZHumanShieldGrabStartNotify.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHumanShieldGrabStartNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZHumanShieldGrabStartNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZHumanShieldGrabStartNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZHumanShieldGrabStartNotify_Statics::ClassParams = {
		&USBZHumanShieldGrabStartNotify::StaticClass,
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
		0x000120A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZHumanShieldGrabStartNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHumanShieldGrabStartNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZHumanShieldGrabStartNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZHumanShieldGrabStartNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZHumanShieldGrabStartNotify, 501321518);
	template<> STARBREEZE_API UClass* StaticClass<USBZHumanShieldGrabStartNotify>()
	{
		return USBZHumanShieldGrabStartNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZHumanShieldGrabStartNotify(Z_Construct_UClass_USBZHumanShieldGrabStartNotify, &USBZHumanShieldGrabStartNotify::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZHumanShieldGrabStartNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZHumanShieldGrabStartNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
