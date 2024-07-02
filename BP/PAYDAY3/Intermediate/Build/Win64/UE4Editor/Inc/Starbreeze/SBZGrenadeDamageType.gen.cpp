// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGrenadeDamageType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGrenadeDamageType() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGrenadeDamageType_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGrenadeDamageType();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZExplosionDamageType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZGrenadeDamageType::StaticRegisterNativesUSBZGrenadeDamageType()
	{
	}
	UClass* Z_Construct_UClass_USBZGrenadeDamageType_NoRegister()
	{
		return USBZGrenadeDamageType::StaticClass();
	}
	struct Z_Construct_UClass_USBZGrenadeDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGrenadeDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZExplosionDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGrenadeDamageType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGrenadeDamageType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGrenadeDamageType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGrenadeDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGrenadeDamageType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGrenadeDamageType_Statics::ClassParams = {
		&USBZGrenadeDamageType::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZGrenadeDamageType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGrenadeDamageType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGrenadeDamageType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGrenadeDamageType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGrenadeDamageType, 2171101101);
	template<> STARBREEZE_API UClass* StaticClass<USBZGrenadeDamageType>()
	{
		return USBZGrenadeDamageType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGrenadeDamageType(Z_Construct_UClass_USBZGrenadeDamageType, &USBZGrenadeDamageType::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGrenadeDamageType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGrenadeDamageType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
