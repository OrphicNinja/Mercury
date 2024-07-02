// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZThrowableKnifeDamageType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZThrowableKnifeDamageType() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZThrowableKnifeDamageType_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZThrowableKnifeDamageType();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDamageType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZThrowableKnifeDamageType::StaticRegisterNativesUSBZThrowableKnifeDamageType()
	{
	}
	UClass* Z_Construct_UClass_USBZThrowableKnifeDamageType_NoRegister()
	{
		return USBZThrowableKnifeDamageType::StaticClass();
	}
	struct Z_Construct_UClass_USBZThrowableKnifeDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZThrowableKnifeDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZThrowableKnifeDamageType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZThrowableKnifeDamageType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZThrowableKnifeDamageType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZThrowableKnifeDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZThrowableKnifeDamageType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZThrowableKnifeDamageType_Statics::ClassParams = {
		&USBZThrowableKnifeDamageType::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZThrowableKnifeDamageType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZThrowableKnifeDamageType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZThrowableKnifeDamageType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZThrowableKnifeDamageType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZThrowableKnifeDamageType, 1346904517);
	template<> STARBREEZE_API UClass* StaticClass<USBZThrowableKnifeDamageType>()
	{
		return USBZThrowableKnifeDamageType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZThrowableKnifeDamageType(Z_Construct_UClass_USBZThrowableKnifeDamageType, &USBZThrowableKnifeDamageType::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZThrowableKnifeDamageType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZThrowableKnifeDamageType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
