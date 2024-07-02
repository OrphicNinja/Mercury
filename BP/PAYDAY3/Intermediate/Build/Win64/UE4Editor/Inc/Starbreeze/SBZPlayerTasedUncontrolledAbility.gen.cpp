// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerTasedUncontrolledAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerTasedUncontrolledAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerTasedUncontrolledAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerTasedUncontrolledAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerTasedAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZPlayerTasedUncontrolledAbility::StaticRegisterNativesUSBZPlayerTasedUncontrolledAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZPlayerTasedUncontrolledAbility_NoRegister()
	{
		return USBZPlayerTasedUncontrolledAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlayerTasedUncontrolledAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlayerTasedUncontrolledAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerTasedAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerTasedUncontrolledAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlayerTasedUncontrolledAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerTasedUncontrolledAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlayerTasedUncontrolledAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlayerTasedUncontrolledAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlayerTasedUncontrolledAbility_Statics::ClassParams = {
		&USBZPlayerTasedUncontrolledAbility::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPlayerTasedUncontrolledAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerTasedUncontrolledAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlayerTasedUncontrolledAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlayerTasedUncontrolledAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlayerTasedUncontrolledAbility, 2845606029);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlayerTasedUncontrolledAbility>()
	{
		return USBZPlayerTasedUncontrolledAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlayerTasedUncontrolledAbility(Z_Construct_UClass_USBZPlayerTasedUncontrolledAbility, &USBZPlayerTasedUncontrolledAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlayerTasedUncontrolledAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlayerTasedUncontrolledAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
