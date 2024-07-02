// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGasDamageType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGasDamageType() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGasDamageType_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGasDamageType();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDamageType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZGasDamageType::StaticRegisterNativesUSBZGasDamageType()
	{
	}
	UClass* Z_Construct_UClass_USBZGasDamageType_NoRegister()
	{
		return USBZGasDamageType::StaticClass();
	}
	struct Z_Construct_UClass_USBZGasDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGasDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGasDamageType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGasDamageType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGasDamageType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGasDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGasDamageType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGasDamageType_Statics::ClassParams = {
		&USBZGasDamageType::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZGasDamageType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGasDamageType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGasDamageType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGasDamageType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGasDamageType, 1432149838);
	template<> STARBREEZE_API UClass* StaticClass<USBZGasDamageType>()
	{
		return USBZGasDamageType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGasDamageType(Z_Construct_UClass_USBZGasDamageType, &USBZGasDamageType::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGasDamageType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGasDamageType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
