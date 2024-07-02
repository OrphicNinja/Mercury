// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlaceECMJammerAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlaceECMJammerAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlaceECMJammerAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlaceECMJammerAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlaceToolAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZPlaceECMJammerAbility::StaticRegisterNativesUSBZPlaceECMJammerAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZPlaceECMJammerAbility_NoRegister()
	{
		return USBZPlaceECMJammerAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlaceECMJammerAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlaceECMJammerAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlaceToolAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceECMJammerAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlaceECMJammerAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlaceECMJammerAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlaceECMJammerAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlaceECMJammerAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlaceECMJammerAbility_Statics::ClassParams = {
		&USBZPlaceECMJammerAbility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZPlaceECMJammerAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceECMJammerAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlaceECMJammerAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlaceECMJammerAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlaceECMJammerAbility, 1678866780);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlaceECMJammerAbility>()
	{
		return USBZPlaceECMJammerAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlaceECMJammerAbility(Z_Construct_UClass_USBZPlaceECMJammerAbility, &USBZPlaceECMJammerAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlaceECMJammerAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlaceECMJammerAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
