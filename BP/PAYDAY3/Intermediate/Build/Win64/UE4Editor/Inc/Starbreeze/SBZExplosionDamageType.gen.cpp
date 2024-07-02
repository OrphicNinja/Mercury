// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZExplosionDamageType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZExplosionDamageType() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZExplosionDamageType_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZExplosionDamageType();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDamageType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZExplosionDamageType::StaticRegisterNativesUSBZExplosionDamageType()
	{
	}
	UClass* Z_Construct_UClass_USBZExplosionDamageType_NoRegister()
	{
		return USBZExplosionDamageType::StaticClass();
	}
	struct Z_Construct_UClass_USBZExplosionDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZExplosionDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZExplosionDamageType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZExplosionDamageType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZExplosionDamageType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZExplosionDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZExplosionDamageType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZExplosionDamageType_Statics::ClassParams = {
		&USBZExplosionDamageType::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZExplosionDamageType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZExplosionDamageType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZExplosionDamageType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZExplosionDamageType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZExplosionDamageType, 3208718044);
	template<> STARBREEZE_API UClass* StaticClass<USBZExplosionDamageType>()
	{
		return USBZExplosionDamageType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZExplosionDamageType(Z_Construct_UClass_USBZExplosionDamageType, &USBZExplosionDamageType::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZExplosionDamageType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZExplosionDamageType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
