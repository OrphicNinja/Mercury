// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHackerBaseAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHackerBaseAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHackerBaseAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHackerBaseAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZHackerBaseAbility::StaticRegisterNativesUSBZHackerBaseAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZHackerBaseAbility_NoRegister()
	{
		return USBZHackerBaseAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZHackerBaseAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZHackerBaseAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHackerBaseAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHackerBaseAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHackerBaseAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZHackerBaseAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZHackerBaseAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZHackerBaseAbility_Statics::ClassParams = {
		&USBZHackerBaseAbility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZHackerBaseAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHackerBaseAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZHackerBaseAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZHackerBaseAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZHackerBaseAbility, 1481001651);
	template<> STARBREEZE_API UClass* StaticClass<USBZHackerBaseAbility>()
	{
		return USBZHackerBaseAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZHackerBaseAbility(Z_Construct_UClass_USBZHackerBaseAbility, &USBZHackerBaseAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZHackerBaseAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZHackerBaseAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
