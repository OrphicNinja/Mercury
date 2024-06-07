// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DummyFactories/Public/AkAudioEventDummyFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAudioEventDummyFactory() {}
// Cross Module References
	DUMMYFACTORIES_API UClass* Z_Construct_UClass_UAkAudioEventDummyFactory_NoRegister();
	DUMMYFACTORIES_API UClass* Z_Construct_UClass_UAkAudioEventDummyFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_DummyFactories();
// End Cross Module References
	void UAkAudioEventDummyFactory::StaticRegisterNativesUAkAudioEventDummyFactory()
	{
	}
	UClass* Z_Construct_UClass_UAkAudioEventDummyFactory_NoRegister()
	{
		return UAkAudioEventDummyFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAkAudioEventDummyFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAudioEventDummyFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DummyFactories,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEventDummyFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AkAudioEventDummyFactory.h" },
		{ "ModuleRelativePath", "Public/AkAudioEventDummyFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAudioEventDummyFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAudioEventDummyFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkAudioEventDummyFactory_Statics::ClassParams = {
		&UAkAudioEventDummyFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAudioEventDummyFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventDummyFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAudioEventDummyFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkAudioEventDummyFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkAudioEventDummyFactory, 3382277852);
	template<> DUMMYFACTORIES_API UClass* StaticClass<UAkAudioEventDummyFactory>()
	{
		return UAkAudioEventDummyFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkAudioEventDummyFactory(Z_Construct_UClass_UAkAudioEventDummyFactory, &UAkAudioEventDummyFactory::StaticClass, TEXT("/Script/DummyFactories"), TEXT("UAkAudioEventDummyFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAudioEventDummyFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
