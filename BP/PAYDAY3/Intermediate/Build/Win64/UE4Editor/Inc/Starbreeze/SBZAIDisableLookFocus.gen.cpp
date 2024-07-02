// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIDisableLookFocus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIDisableLookFocus() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIDisableLookFocus_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIDisableLookFocus();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAIDisableLookFocus::StaticRegisterNativesUSBZAIDisableLookFocus()
	{
	}
	UClass* Z_Construct_UClass_USBZAIDisableLookFocus_NoRegister()
	{
		return USBZAIDisableLookFocus::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIDisableLookFocus_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIDisableLookFocus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIDisableLookFocus_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZAIDisableLookFocus.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIDisableLookFocus.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIDisableLookFocus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIDisableLookFocus>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIDisableLookFocus_Statics::ClassParams = {
		&USBZAIDisableLookFocus::StaticClass,
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
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIDisableLookFocus_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIDisableLookFocus_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIDisableLookFocus()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIDisableLookFocus_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIDisableLookFocus, 1862025335);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIDisableLookFocus>()
	{
		return USBZAIDisableLookFocus::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIDisableLookFocus(Z_Construct_UClass_USBZAIDisableLookFocus, &USBZAIDisableLookFocus::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIDisableLookFocus"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIDisableLookFocus);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
