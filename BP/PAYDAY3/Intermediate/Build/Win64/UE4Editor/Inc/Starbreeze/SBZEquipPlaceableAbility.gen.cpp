// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEquipPlaceableAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEquipPlaceableAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquipPlaceableAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquipPlaceableAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquipSpecificAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZEquipPlaceableAbility::StaticRegisterNativesUSBZEquipPlaceableAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZEquipPlaceableAbility_NoRegister()
	{
		return USBZEquipPlaceableAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZEquipPlaceableAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEquipPlaceableAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZEquipSpecificAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquipPlaceableAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEquipPlaceableAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEquipPlaceableAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEquipPlaceableAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEquipPlaceableAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEquipPlaceableAbility_Statics::ClassParams = {
		&USBZEquipPlaceableAbility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZEquipPlaceableAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquipPlaceableAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEquipPlaceableAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEquipPlaceableAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEquipPlaceableAbility, 382034167);
	template<> STARBREEZE_API UClass* StaticClass<USBZEquipPlaceableAbility>()
	{
		return USBZEquipPlaceableAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEquipPlaceableAbility(Z_Construct_UClass_USBZEquipPlaceableAbility, &USBZEquipPlaceableAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEquipPlaceableAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEquipPlaceableAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
