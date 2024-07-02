// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDamageDefeatAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDamageDefeatAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDamageDefeatAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDamageDefeatAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDefeatAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZDamageDefeatAbility::StaticRegisterNativesUSBZDamageDefeatAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZDamageDefeatAbility_NoRegister()
	{
		return USBZDamageDefeatAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZDamageDefeatAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZDamageDefeatAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZDefeatAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDamageDefeatAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZDamageDefeatAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDamageDefeatAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDamageDefeatAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZDamageDefeatAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDamageDefeatAbility_Statics::ClassParams = {
		&USBZDamageDefeatAbility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZDamageDefeatAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDamageDefeatAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDamageDefeatAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDamageDefeatAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDamageDefeatAbility, 3920292169);
	template<> STARBREEZE_API UClass* StaticClass<USBZDamageDefeatAbility>()
	{
		return USBZDamageDefeatAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDamageDefeatAbility(Z_Construct_UClass_USBZDamageDefeatAbility, &USBZDamageDefeatAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDamageDefeatAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDamageDefeatAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
