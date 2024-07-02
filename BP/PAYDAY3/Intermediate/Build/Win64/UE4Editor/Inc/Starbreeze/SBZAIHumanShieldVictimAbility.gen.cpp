// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIHumanShieldVictimAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIHumanShieldVictimAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIHumanShieldVictimAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIHumanShieldVictimAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAIHumanShieldVictimAbility::StaticRegisterNativesUSBZAIHumanShieldVictimAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZAIHumanShieldVictimAbility_NoRegister()
	{
		return USBZAIHumanShieldVictimAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIHumanShieldVictimAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIHumanShieldVictimAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIHumanShieldVictimAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIHumanShieldVictimAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIHumanShieldVictimAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIHumanShieldVictimAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIHumanShieldVictimAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIHumanShieldVictimAbility_Statics::ClassParams = {
		&USBZAIHumanShieldVictimAbility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZAIHumanShieldVictimAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIHumanShieldVictimAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIHumanShieldVictimAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIHumanShieldVictimAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIHumanShieldVictimAbility, 1028089848);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIHumanShieldVictimAbility>()
	{
		return USBZAIHumanShieldVictimAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIHumanShieldVictimAbility(Z_Construct_UClass_USBZAIHumanShieldVictimAbility, &USBZAIHumanShieldVictimAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIHumanShieldVictimAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIHumanShieldVictimAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
