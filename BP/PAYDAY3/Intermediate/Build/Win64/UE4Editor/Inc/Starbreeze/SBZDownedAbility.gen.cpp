// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDownedAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDownedAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDownedAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDownedAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDamageDefeatAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZDownedAbility::StaticRegisterNativesUSBZDownedAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZDownedAbility_NoRegister()
	{
		return USBZDownedAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZDownedAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZDownedAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZDamageDefeatAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDownedAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZDownedAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDownedAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDownedAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZDownedAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDownedAbility_Statics::ClassParams = {
		&USBZDownedAbility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZDownedAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDownedAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDownedAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDownedAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDownedAbility, 3550294652);
	template<> STARBREEZE_API UClass* StaticClass<USBZDownedAbility>()
	{
		return USBZDownedAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDownedAbility(Z_Construct_UClass_USBZDownedAbility, &USBZDownedAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDownedAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDownedAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
