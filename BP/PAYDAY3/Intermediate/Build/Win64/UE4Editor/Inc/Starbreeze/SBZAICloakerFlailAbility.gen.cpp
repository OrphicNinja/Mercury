// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAICloakerFlailAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAICloakerFlailAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICloakerFlailAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICloakerFlailAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMeleeAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void USBZAICloakerFlailAbility::StaticRegisterNativesUSBZAICloakerFlailAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZAICloakerFlailAbility_NoRegister()
	{
		return USBZAICloakerFlailAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZAICloakerFlailAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAICloakerFlailAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMeleeAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICloakerFlailAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAICloakerFlailAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAICloakerFlailAbility.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICloakerFlailAbility_Statics::NewProp_AbilityMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICloakerFlailAbility" },
		{ "ModuleRelativePath", "Public/SBZAICloakerFlailAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAICloakerFlailAbility_Statics::NewProp_AbilityMontage = { "AbilityMontage", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAICloakerFlailAbility, AbilityMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAICloakerFlailAbility_Statics::NewProp_AbilityMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICloakerFlailAbility_Statics::NewProp_AbilityMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAICloakerFlailAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICloakerFlailAbility_Statics::NewProp_AbilityMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAICloakerFlailAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAICloakerFlailAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAICloakerFlailAbility_Statics::ClassParams = {
		&USBZAICloakerFlailAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAICloakerFlailAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICloakerFlailAbility_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAICloakerFlailAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICloakerFlailAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAICloakerFlailAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAICloakerFlailAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAICloakerFlailAbility, 1419208252);
	template<> STARBREEZE_API UClass* StaticClass<USBZAICloakerFlailAbility>()
	{
		return USBZAICloakerFlailAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAICloakerFlailAbility(Z_Construct_UClass_USBZAICloakerFlailAbility, &USBZAICloakerFlailAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAICloakerFlailAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAICloakerFlailAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
