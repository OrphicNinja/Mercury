// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZThrowEquippedNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZThrowEquippedNotify() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZThrowEquippedNotify_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZThrowEquippedNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZThrowEquippedNotify::StaticRegisterNativesUSBZThrowEquippedNotify()
	{
	}
	UClass* Z_Construct_UClass_USBZThrowEquippedNotify_NoRegister()
	{
		return USBZThrowEquippedNotify::StaticClass();
	}
	struct Z_Construct_UClass_USBZThrowEquippedNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZThrowEquippedNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZThrowEquippedNotify_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZThrowEquippedNotify.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZThrowEquippedNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZThrowEquippedNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZThrowEquippedNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZThrowEquippedNotify_Statics::ClassParams = {
		&USBZThrowEquippedNotify::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZThrowEquippedNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZThrowEquippedNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZThrowEquippedNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZThrowEquippedNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZThrowEquippedNotify, 561756468);
	template<> STARBREEZE_API UClass* StaticClass<USBZThrowEquippedNotify>()
	{
		return USBZThrowEquippedNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZThrowEquippedNotify(Z_Construct_UClass_USBZThrowEquippedNotify, &USBZThrowEquippedNotify::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZThrowEquippedNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZThrowEquippedNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
