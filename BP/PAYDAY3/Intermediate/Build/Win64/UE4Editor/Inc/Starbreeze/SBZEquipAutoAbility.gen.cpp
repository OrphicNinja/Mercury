// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEquipAutoAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEquipAutoAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquipAutoAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquipAutoAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHandleEquipmentAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZEquipAutoAbility::StaticRegisterNativesUSBZEquipAutoAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZEquipAutoAbility_NoRegister()
	{
		return USBZEquipAutoAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZEquipAutoAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEquipAutoAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZHandleEquipmentAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquipAutoAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEquipAutoAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEquipAutoAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEquipAutoAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEquipAutoAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEquipAutoAbility_Statics::ClassParams = {
		&USBZEquipAutoAbility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZEquipAutoAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquipAutoAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEquipAutoAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEquipAutoAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEquipAutoAbility, 3330884189);
	template<> STARBREEZE_API UClass* StaticClass<USBZEquipAutoAbility>()
	{
		return USBZEquipAutoAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEquipAutoAbility(Z_Construct_UClass_USBZEquipAutoAbility, &USBZEquipAutoAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEquipAutoAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEquipAutoAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
