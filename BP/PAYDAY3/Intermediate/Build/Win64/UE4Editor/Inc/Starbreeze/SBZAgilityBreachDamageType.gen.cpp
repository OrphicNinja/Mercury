// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAgilityBreachDamageType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAgilityBreachDamageType() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAgilityBreachDamageType_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAgilityBreachDamageType();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZExplosionDamageType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAgilityBreachDamageType::StaticRegisterNativesUSBZAgilityBreachDamageType()
	{
	}
	UClass* Z_Construct_UClass_USBZAgilityBreachDamageType_NoRegister()
	{
		return USBZAgilityBreachDamageType::StaticClass();
	}
	struct Z_Construct_UClass_USBZAgilityBreachDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAgilityBreachDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZExplosionDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgilityBreachDamageType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAgilityBreachDamageType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAgilityBreachDamageType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAgilityBreachDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAgilityBreachDamageType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAgilityBreachDamageType_Statics::ClassParams = {
		&USBZAgilityBreachDamageType::StaticClass,
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
		0x000100A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAgilityBreachDamageType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilityBreachDamageType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAgilityBreachDamageType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAgilityBreachDamageType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAgilityBreachDamageType, 102405854);
	template<> STARBREEZE_API UClass* StaticClass<USBZAgilityBreachDamageType>()
	{
		return USBZAgilityBreachDamageType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAgilityBreachDamageType(Z_Construct_UClass_USBZAgilityBreachDamageType, &USBZAgilityBreachDamageType::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAgilityBreachDamageType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAgilityBreachDamageType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
