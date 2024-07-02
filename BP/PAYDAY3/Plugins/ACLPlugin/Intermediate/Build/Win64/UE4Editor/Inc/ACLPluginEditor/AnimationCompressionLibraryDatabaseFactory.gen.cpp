// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACLPluginEditor/Classes/AnimationCompressionLibraryDatabaseFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationCompressionLibraryDatabaseFactory() {}
// Cross Module References
	ACLPLUGINEDITOR_API UClass* Z_Construct_UClass_UAnimationCompressionLibraryDatabaseFactory_NoRegister();
	ACLPLUGINEDITOR_API UClass* Z_Construct_UClass_UAnimationCompressionLibraryDatabaseFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_ACLPluginEditor();
// End Cross Module References
	void UAnimationCompressionLibraryDatabaseFactory::StaticRegisterNativesUAnimationCompressionLibraryDatabaseFactory()
	{
	}
	UClass* Z_Construct_UClass_UAnimationCompressionLibraryDatabaseFactory_NoRegister()
	{
		return UAnimationCompressionLibraryDatabaseFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationCompressionLibraryDatabaseFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationCompressionLibraryDatabaseFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ACLPluginEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationCompressionLibraryDatabaseFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimationCompressionLibraryDatabaseFactory.h" },
		{ "ModuleRelativePath", "Classes/AnimationCompressionLibraryDatabaseFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationCompressionLibraryDatabaseFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationCompressionLibraryDatabaseFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimationCompressionLibraryDatabaseFactory_Statics::ClassParams = {
		&UAnimationCompressionLibraryDatabaseFactory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationCompressionLibraryDatabaseFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationCompressionLibraryDatabaseFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationCompressionLibraryDatabaseFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimationCompressionLibraryDatabaseFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimationCompressionLibraryDatabaseFactory, 2954797955);
	template<> ACLPLUGINEDITOR_API UClass* StaticClass<UAnimationCompressionLibraryDatabaseFactory>()
	{
		return UAnimationCompressionLibraryDatabaseFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimationCompressionLibraryDatabaseFactory(Z_Construct_UClass_UAnimationCompressionLibraryDatabaseFactory, &UAnimationCompressionLibraryDatabaseFactory::StaticClass, TEXT("/Script/ACLPluginEditor"), TEXT("UAnimationCompressionLibraryDatabaseFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationCompressionLibraryDatabaseFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
