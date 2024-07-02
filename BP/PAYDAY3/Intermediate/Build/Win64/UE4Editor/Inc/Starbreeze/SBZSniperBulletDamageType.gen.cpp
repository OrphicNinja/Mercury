// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSniperBulletDamageType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSniperBulletDamageType() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSniperBulletDamageType_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSniperBulletDamageType();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBulletDamageType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSniperBulletDamageType::StaticRegisterNativesUSBZSniperBulletDamageType()
	{
	}
	UClass* Z_Construct_UClass_USBZSniperBulletDamageType_NoRegister()
	{
		return USBZSniperBulletDamageType::StaticClass();
	}
	struct Z_Construct_UClass_USBZSniperBulletDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSniperBulletDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZBulletDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSniperBulletDamageType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSniperBulletDamageType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSniperBulletDamageType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSniperBulletDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSniperBulletDamageType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSniperBulletDamageType_Statics::ClassParams = {
		&USBZSniperBulletDamageType::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSniperBulletDamageType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSniperBulletDamageType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSniperBulletDamageType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSniperBulletDamageType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSniperBulletDamageType, 2082738446);
	template<> STARBREEZE_API UClass* StaticClass<USBZSniperBulletDamageType>()
	{
		return USBZSniperBulletDamageType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSniperBulletDamageType(Z_Construct_UClass_USBZSniperBulletDamageType, &USBZSniperBulletDamageType::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSniperBulletDamageType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSniperBulletDamageType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
