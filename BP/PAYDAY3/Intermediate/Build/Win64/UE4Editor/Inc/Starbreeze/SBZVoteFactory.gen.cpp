// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVoteFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVoteFactory() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoteFactory_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoteFactory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZVoteFactory::StaticRegisterNativesUSBZVoteFactory()
	{
	}
	UClass* Z_Construct_UClass_USBZVoteFactory_NoRegister()
	{
		return USBZVoteFactory::StaticClass();
	}
	struct Z_Construct_UClass_USBZVoteFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZVoteFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVoteFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZVoteFactory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZVoteFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZVoteFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZVoteFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZVoteFactory_Statics::ClassParams = {
		&USBZVoteFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZVoteFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVoteFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZVoteFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZVoteFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZVoteFactory, 3779370571);
	template<> STARBREEZE_API UClass* StaticClass<USBZVoteFactory>()
	{
		return USBZVoteFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZVoteFactory(Z_Construct_UClass_USBZVoteFactory, &USBZVoteFactory::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZVoteFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZVoteFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
