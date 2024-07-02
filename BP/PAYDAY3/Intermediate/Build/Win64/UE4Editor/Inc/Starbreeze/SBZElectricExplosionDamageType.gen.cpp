// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZElectricExplosionDamageType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZElectricExplosionDamageType() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZElectricExplosionDamageType_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZElectricExplosionDamageType();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZElectricDamageType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZElectricExplosionDamageType::StaticRegisterNativesUSBZElectricExplosionDamageType()
	{
	}
	UClass* Z_Construct_UClass_USBZElectricExplosionDamageType_NoRegister()
	{
		return USBZElectricExplosionDamageType::StaticClass();
	}
	struct Z_Construct_UClass_USBZElectricExplosionDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZElectricExplosionDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZElectricDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZElectricExplosionDamageType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZElectricExplosionDamageType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZElectricExplosionDamageType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZElectricExplosionDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZElectricExplosionDamageType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZElectricExplosionDamageType_Statics::ClassParams = {
		&USBZElectricExplosionDamageType::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZElectricExplosionDamageType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZElectricExplosionDamageType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZElectricExplosionDamageType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZElectricExplosionDamageType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZElectricExplosionDamageType, 1431295463);
	template<> STARBREEZE_API UClass* StaticClass<USBZElectricExplosionDamageType>()
	{
		return USBZElectricExplosionDamageType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZElectricExplosionDamageType(Z_Construct_UClass_USBZElectricExplosionDamageType, &USBZElectricExplosionDamageType::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZElectricExplosionDamageType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZElectricExplosionDamageType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
