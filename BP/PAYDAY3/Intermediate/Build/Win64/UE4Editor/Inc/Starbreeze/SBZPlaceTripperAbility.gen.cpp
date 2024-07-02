// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlaceTripperAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlaceTripperAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlaceTripperAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlaceTripperAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlaceToolAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZPlaceTripperAbility::StaticRegisterNativesUSBZPlaceTripperAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZPlaceTripperAbility_NoRegister()
	{
		return USBZPlaceTripperAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlaceTripperAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlaceTripperAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlaceToolAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceTripperAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlaceTripperAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlaceTripperAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlaceTripperAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlaceTripperAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlaceTripperAbility_Statics::ClassParams = {
		&USBZPlaceTripperAbility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZPlaceTripperAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceTripperAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlaceTripperAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlaceTripperAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlaceTripperAbility, 2920675345);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlaceTripperAbility>()
	{
		return USBZPlaceTripperAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlaceTripperAbility(Z_Construct_UClass_USBZPlaceTripperAbility, &USBZPlaceTripperAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlaceTripperAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlaceTripperAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
