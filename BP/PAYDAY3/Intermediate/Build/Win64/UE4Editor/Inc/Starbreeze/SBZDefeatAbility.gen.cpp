// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDefeatAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDefeatAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDefeatAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDefeatAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZDefeatAbility::StaticRegisterNativesUSBZDefeatAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZDefeatAbility_NoRegister()
	{
		return USBZDefeatAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZDefeatAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZDefeatAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDefeatAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZDefeatAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDefeatAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDefeatAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZDefeatAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDefeatAbility_Statics::ClassParams = {
		&USBZDefeatAbility::StaticClass,
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
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZDefeatAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDefeatAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDefeatAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDefeatAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDefeatAbility, 1421786510);
	template<> STARBREEZE_API UClass* StaticClass<USBZDefeatAbility>()
	{
		return USBZDefeatAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDefeatAbility(Z_Construct_UClass_USBZDefeatAbility, &USBZDefeatAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDefeatAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDefeatAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
