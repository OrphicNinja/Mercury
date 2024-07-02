// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlaceSensorToolAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlaceSensorToolAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlaceSensorToolAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlaceSensorToolAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlaceToolAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZPlaceSensorToolAbility::StaticRegisterNativesUSBZPlaceSensorToolAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZPlaceSensorToolAbility_NoRegister()
	{
		return USBZPlaceSensorToolAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlaceSensorToolAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlaceSensorToolAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlaceToolAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceSensorToolAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlaceSensorToolAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlaceSensorToolAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlaceSensorToolAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlaceSensorToolAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlaceSensorToolAbility_Statics::ClassParams = {
		&USBZPlaceSensorToolAbility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZPlaceSensorToolAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceSensorToolAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlaceSensorToolAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlaceSensorToolAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlaceSensorToolAbility, 3247609974);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlaceSensorToolAbility>()
	{
		return USBZPlaceSensorToolAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlaceSensorToolAbility(Z_Construct_UClass_USBZPlaceSensorToolAbility, &USBZPlaceSensorToolAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlaceSensorToolAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlaceSensorToolAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
