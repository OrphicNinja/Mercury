// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerBatteringRamTackleAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerBatteringRamTackleAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerBatteringRamTackleAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerBatteringRamTackleAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerTackleBaseAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZPlayerBatteringRamTackleAbility::StaticRegisterNativesUSBZPlayerBatteringRamTackleAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZPlayerBatteringRamTackleAbility_NoRegister()
	{
		return USBZPlayerBatteringRamTackleAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlayerBatteringRamTackleAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlayerBatteringRamTackleAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerTackleBaseAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerBatteringRamTackleAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlayerBatteringRamTackleAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerBatteringRamTackleAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlayerBatteringRamTackleAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlayerBatteringRamTackleAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlayerBatteringRamTackleAbility_Statics::ClassParams = {
		&USBZPlayerBatteringRamTackleAbility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZPlayerBatteringRamTackleAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerBatteringRamTackleAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlayerBatteringRamTackleAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlayerBatteringRamTackleAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlayerBatteringRamTackleAbility, 3013301587);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlayerBatteringRamTackleAbility>()
	{
		return USBZPlayerBatteringRamTackleAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlayerBatteringRamTackleAbility(Z_Construct_UClass_USBZPlayerBatteringRamTackleAbility, &USBZPlayerBatteringRamTackleAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlayerBatteringRamTackleAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlayerBatteringRamTackleAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
