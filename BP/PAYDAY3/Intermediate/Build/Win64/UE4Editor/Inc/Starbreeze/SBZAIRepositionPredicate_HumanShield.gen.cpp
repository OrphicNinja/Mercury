// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIRepositionPredicate_HumanShield.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIRepositionPredicate_HumanShield() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIRepositionPredicate_HumanShield_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIRepositionPredicate_HumanShield();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIRepositionPredicate();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAIRepositionPredicate_HumanShield::StaticRegisterNativesUSBZAIRepositionPredicate_HumanShield()
	{
	}
	UClass* Z_Construct_UClass_USBZAIRepositionPredicate_HumanShield_NoRegister()
	{
		return USBZAIRepositionPredicate_HumanShield::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIRepositionPredicate_HumanShield_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIRepositionPredicate_HumanShield_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIRepositionPredicate,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIRepositionPredicate_HumanShield_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIRepositionPredicate_HumanShield.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIRepositionPredicate_HumanShield.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIRepositionPredicate_HumanShield_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIRepositionPredicate_HumanShield>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIRepositionPredicate_HumanShield_Statics::ClassParams = {
		&USBZAIRepositionPredicate_HumanShield::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZAIRepositionPredicate_HumanShield_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIRepositionPredicate_HumanShield_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIRepositionPredicate_HumanShield()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIRepositionPredicate_HumanShield_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIRepositionPredicate_HumanShield, 2560874498);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIRepositionPredicate_HumanShield>()
	{
		return USBZAIRepositionPredicate_HumanShield::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIRepositionPredicate_HumanShield(Z_Construct_UClass_USBZAIRepositionPredicate_HumanShield, &USBZAIRepositionPredicate_HumanShield::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIRepositionPredicate_HumanShield"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIRepositionPredicate_HumanShield);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
