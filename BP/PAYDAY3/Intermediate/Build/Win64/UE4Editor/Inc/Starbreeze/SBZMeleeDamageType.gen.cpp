// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMeleeDamageType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMeleeDamageType() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMeleeDamageType_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMeleeDamageType();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDamageType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZMeleeDamageType::StaticRegisterNativesUSBZMeleeDamageType()
	{
	}
	UClass* Z_Construct_UClass_USBZMeleeDamageType_NoRegister()
	{
		return USBZMeleeDamageType::StaticClass();
	}
	struct Z_Construct_UClass_USBZMeleeDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMeleeDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMeleeDamageType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMeleeDamageType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMeleeDamageType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMeleeDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMeleeDamageType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMeleeDamageType_Statics::ClassParams = {
		&USBZMeleeDamageType::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZMeleeDamageType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMeleeDamageType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMeleeDamageType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMeleeDamageType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMeleeDamageType, 1365528961);
	template<> STARBREEZE_API UClass* StaticClass<USBZMeleeDamageType>()
	{
		return USBZMeleeDamageType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMeleeDamageType(Z_Construct_UClass_USBZMeleeDamageType, &USBZMeleeDamageType::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMeleeDamageType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMeleeDamageType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
