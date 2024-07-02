// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerTackleBaseAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerTackleBaseAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerTackleBaseAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerTackleBaseAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMeleeAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZPlayerTackleBaseAbility::StaticRegisterNativesUSBZPlayerTackleBaseAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZPlayerTackleBaseAbility_NoRegister()
	{
		return USBZPlayerTackleBaseAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlayerTackleBaseAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlayerTackleBaseAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMeleeAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerTackleBaseAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlayerTackleBaseAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerTackleBaseAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlayerTackleBaseAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlayerTackleBaseAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlayerTackleBaseAbility_Statics::ClassParams = {
		&USBZPlayerTackleBaseAbility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZPlayerTackleBaseAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerTackleBaseAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlayerTackleBaseAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlayerTackleBaseAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlayerTackleBaseAbility, 4135279439);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlayerTackleBaseAbility>()
	{
		return USBZPlayerTackleBaseAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlayerTackleBaseAbility(Z_Construct_UClass_USBZPlayerTackleBaseAbility, &USBZPlayerTackleBaseAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlayerTackleBaseAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlayerTackleBaseAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
