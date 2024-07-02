// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZElectricDamageType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZElectricDamageType() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZElectricDamageType_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZElectricDamageType();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDamageType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZElectricDamageType::StaticRegisterNativesUSBZElectricDamageType()
	{
	}
	UClass* Z_Construct_UClass_USBZElectricDamageType_NoRegister()
	{
		return USBZElectricDamageType::StaticClass();
	}
	struct Z_Construct_UClass_USBZElectricDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZElectricDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZElectricDamageType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZElectricDamageType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZElectricDamageType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZElectricDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZElectricDamageType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZElectricDamageType_Statics::ClassParams = {
		&USBZElectricDamageType::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZElectricDamageType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZElectricDamageType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZElectricDamageType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZElectricDamageType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZElectricDamageType, 203591422);
	template<> STARBREEZE_API UClass* StaticClass<USBZElectricDamageType>()
	{
		return USBZElectricDamageType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZElectricDamageType(Z_Construct_UClass_USBZElectricDamageType, &USBZElectricDamageType::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZElectricDamageType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZElectricDamageType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
