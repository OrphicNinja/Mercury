// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPawnLifetime.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPawnLifetime() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPawnLifetime_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPawnLifetime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZPawnLifetime::StaticRegisterNativesUSBZPawnLifetime()
	{
	}
	UClass* Z_Construct_UClass_USBZPawnLifetime_NoRegister()
	{
		return USBZPawnLifetime::StaticClass();
	}
	struct Z_Construct_UClass_USBZPawnLifetime_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPawnLifetime_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPawnLifetime_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPawnLifetime.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPawnLifetime_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZPawnLifetime>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPawnLifetime_Statics::ClassParams = {
		&USBZPawnLifetime::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZPawnLifetime_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPawnLifetime_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPawnLifetime()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPawnLifetime_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPawnLifetime, 1756236661);
	template<> STARBREEZE_API UClass* StaticClass<USBZPawnLifetime>()
	{
		return USBZPawnLifetime::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPawnLifetime(Z_Construct_UClass_USBZPawnLifetime, &USBZPawnLifetime::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPawnLifetime"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPawnLifetime);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
