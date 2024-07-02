// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTasedAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTasedAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTasedAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTasedAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDefeatAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZTasedAbility::StaticRegisterNativesUSBZTasedAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZTasedAbility_NoRegister()
	{
		return USBZTasedAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZTasedAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZTasedAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZDefeatAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTasedAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZTasedAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZTasedAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZTasedAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZTasedAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZTasedAbility_Statics::ClassParams = {
		&USBZTasedAbility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZTasedAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTasedAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZTasedAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZTasedAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZTasedAbility, 2556742641);
	template<> STARBREEZE_API UClass* StaticClass<USBZTasedAbility>()
	{
		return USBZTasedAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZTasedAbility(Z_Construct_UClass_USBZTasedAbility, &USBZTasedAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZTasedAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZTasedAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
