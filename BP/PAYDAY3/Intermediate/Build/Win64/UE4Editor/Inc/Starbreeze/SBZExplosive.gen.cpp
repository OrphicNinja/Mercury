// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZExplosive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZExplosive() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZExplosive_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZExplosive();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZExplosive::StaticRegisterNativesUSBZExplosive()
	{
	}
	UClass* Z_Construct_UClass_USBZExplosive_NoRegister()
	{
		return USBZExplosive::StaticClass();
	}
	struct Z_Construct_UClass_USBZExplosive_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZExplosive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZExplosive_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZExplosive.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZExplosive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZExplosive>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZExplosive_Statics::ClassParams = {
		&USBZExplosive::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZExplosive_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZExplosive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZExplosive()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZExplosive_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZExplosive, 277300305);
	template<> STARBREEZE_API UClass* StaticClass<USBZExplosive>()
	{
		return USBZExplosive::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZExplosive(Z_Construct_UClass_USBZExplosive, &USBZExplosive::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZExplosive"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZExplosive);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
