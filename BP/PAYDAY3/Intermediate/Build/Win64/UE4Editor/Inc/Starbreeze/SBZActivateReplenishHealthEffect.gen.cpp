// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZActivateReplenishHealthEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZActivateReplenishHealthEffect() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActivateReplenishHealthEffect_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActivateReplenishHealthEffect();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZActivateReplenishHealthEffect::StaticRegisterNativesUSBZActivateReplenishHealthEffect()
	{
	}
	UClass* Z_Construct_UClass_USBZActivateReplenishHealthEffect_NoRegister()
	{
		return USBZActivateReplenishHealthEffect::StaticClass();
	}
	struct Z_Construct_UClass_USBZActivateReplenishHealthEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZActivateReplenishHealthEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActivateReplenishHealthEffect_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZActivateReplenishHealthEffect.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZActivateReplenishHealthEffect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZActivateReplenishHealthEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZActivateReplenishHealthEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZActivateReplenishHealthEffect_Statics::ClassParams = {
		&USBZActivateReplenishHealthEffect::StaticClass,
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
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZActivateReplenishHealthEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActivateReplenishHealthEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZActivateReplenishHealthEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZActivateReplenishHealthEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZActivateReplenishHealthEffect, 3751173844);
	template<> STARBREEZE_API UClass* StaticClass<USBZActivateReplenishHealthEffect>()
	{
		return USBZActivateReplenishHealthEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZActivateReplenishHealthEffect(Z_Construct_UClass_USBZActivateReplenishHealthEffect, &USBZActivateReplenishHealthEffect::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZActivateReplenishHealthEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZActivateReplenishHealthEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
