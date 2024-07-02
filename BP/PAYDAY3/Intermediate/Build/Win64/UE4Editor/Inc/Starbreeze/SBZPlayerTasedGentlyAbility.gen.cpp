// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerTasedGentlyAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerTasedGentlyAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerTasedGentlyAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerTasedGentlyAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerTasedAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZPlayerTasedGentlyAbility::StaticRegisterNativesUSBZPlayerTasedGentlyAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZPlayerTasedGentlyAbility_NoRegister()
	{
		return USBZPlayerTasedGentlyAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlayerTasedGentlyAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlayerTasedGentlyAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerTasedAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerTasedGentlyAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlayerTasedGentlyAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerTasedGentlyAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlayerTasedGentlyAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlayerTasedGentlyAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlayerTasedGentlyAbility_Statics::ClassParams = {
		&USBZPlayerTasedGentlyAbility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZPlayerTasedGentlyAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerTasedGentlyAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlayerTasedGentlyAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlayerTasedGentlyAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlayerTasedGentlyAbility, 1419511935);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlayerTasedGentlyAbility>()
	{
		return USBZPlayerTasedGentlyAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlayerTasedGentlyAbility(Z_Construct_UClass_USBZPlayerTasedGentlyAbility, &USBZPlayerTasedGentlyAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlayerTasedGentlyAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlayerTasedGentlyAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
