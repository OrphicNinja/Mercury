// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSentryExplosionDamageType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSentryExplosionDamageType() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSentryExplosionDamageType_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSentryExplosionDamageType();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZExplosionDamageType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSentryExplosionDamageType::StaticRegisterNativesUSBZSentryExplosionDamageType()
	{
	}
	UClass* Z_Construct_UClass_USBZSentryExplosionDamageType_NoRegister()
	{
		return USBZSentryExplosionDamageType::StaticClass();
	}
	struct Z_Construct_UClass_USBZSentryExplosionDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSentryExplosionDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZExplosionDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSentryExplosionDamageType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSentryExplosionDamageType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSentryExplosionDamageType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSentryExplosionDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSentryExplosionDamageType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSentryExplosionDamageType_Statics::ClassParams = {
		&USBZSentryExplosionDamageType::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSentryExplosionDamageType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSentryExplosionDamageType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSentryExplosionDamageType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSentryExplosionDamageType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSentryExplosionDamageType, 899605032);
	template<> STARBREEZE_API UClass* StaticClass<USBZSentryExplosionDamageType>()
	{
		return USBZSentryExplosionDamageType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSentryExplosionDamageType(Z_Construct_UClass_USBZSentryExplosionDamageType, &USBZSentryExplosionDamageType::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSentryExplosionDamageType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSentryExplosionDamageType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
