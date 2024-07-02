// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTargetEnemyEffectRequirement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTargetEnemyEffectRequirement() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTargetEnemyEffectRequirement_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTargetEnemyEffectRequirement();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZTargetEnemyEffectRequirement::StaticRegisterNativesUSBZTargetEnemyEffectRequirement()
	{
	}
	UClass* Z_Construct_UClass_USBZTargetEnemyEffectRequirement_NoRegister()
	{
		return USBZTargetEnemyEffectRequirement::StaticClass();
	}
	struct Z_Construct_UClass_USBZTargetEnemyEffectRequirement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZTargetEnemyEffectRequirement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTargetEnemyEffectRequirement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZTargetEnemyEffectRequirement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZTargetEnemyEffectRequirement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZTargetEnemyEffectRequirement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZTargetEnemyEffectRequirement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZTargetEnemyEffectRequirement_Statics::ClassParams = {
		&USBZTargetEnemyEffectRequirement::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZTargetEnemyEffectRequirement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTargetEnemyEffectRequirement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZTargetEnemyEffectRequirement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZTargetEnemyEffectRequirement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZTargetEnemyEffectRequirement, 147501159);
	template<> STARBREEZE_API UClass* StaticClass<USBZTargetEnemyEffectRequirement>()
	{
		return USBZTargetEnemyEffectRequirement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZTargetEnemyEffectRequirement(Z_Construct_UClass_USBZTargetEnemyEffectRequirement, &USBZTargetEnemyEffectRequirement::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZTargetEnemyEffectRequirement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZTargetEnemyEffectRequirement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
