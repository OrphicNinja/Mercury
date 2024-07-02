// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIVisibilityRelevant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIVisibilityRelevant() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIVisibilityRelevant_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIVisibilityRelevant();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAIVisibilityRelevant::StaticRegisterNativesUSBZAIVisibilityRelevant()
	{
	}
	UClass* Z_Construct_UClass_USBZAIVisibilityRelevant_NoRegister()
	{
		return USBZAIVisibilityRelevant::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIVisibilityRelevant_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIVisibilityRelevant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIVisibilityRelevant_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIVisibilityRelevant.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIVisibilityRelevant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZAIVisibilityRelevant>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIVisibilityRelevant_Statics::ClassParams = {
		&USBZAIVisibilityRelevant::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIVisibilityRelevant_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIVisibilityRelevant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIVisibilityRelevant()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIVisibilityRelevant_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIVisibilityRelevant, 1704684220);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIVisibilityRelevant>()
	{
		return USBZAIVisibilityRelevant::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIVisibilityRelevant(Z_Construct_UClass_USBZAIVisibilityRelevant, &USBZAIVisibilityRelevant::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIVisibilityRelevant"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIVisibilityRelevant);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
