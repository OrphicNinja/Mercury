// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCuffedAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCuffedAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCuffedAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCuffedAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDefeatAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZCuffedAbility::StaticRegisterNativesUSBZCuffedAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZCuffedAbility_NoRegister()
	{
		return USBZCuffedAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZCuffedAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCuffedAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZDefeatAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCuffedAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCuffedAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCuffedAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCuffedAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCuffedAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCuffedAbility_Statics::ClassParams = {
		&USBZCuffedAbility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZCuffedAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCuffedAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCuffedAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCuffedAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCuffedAbility, 1999399607);
	template<> STARBREEZE_API UClass* StaticClass<USBZCuffedAbility>()
	{
		return USBZCuffedAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCuffedAbility(Z_Construct_UClass_USBZCuffedAbility, &USBZCuffedAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCuffedAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCuffedAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
