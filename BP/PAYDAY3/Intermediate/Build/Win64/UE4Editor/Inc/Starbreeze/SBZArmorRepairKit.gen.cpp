// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZArmorRepairKit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZArmorRepairKit() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZArmorRepairKit_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZArmorRepairKit();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlaceableCharges();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void ASBZArmorRepairKit::StaticRegisterNativesASBZArmorRepairKit()
	{
	}
	UClass* Z_Construct_UClass_ASBZArmorRepairKit_NoRegister()
	{
		return ASBZArmorRepairKit::StaticClass();
	}
	struct Z_Construct_UClass_ASBZArmorRepairKit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZArmorRepairKit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZPlaceableCharges,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZArmorRepairKit_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZArmorRepairKit.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZArmorRepairKit.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZArmorRepairKit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZArmorRepairKit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZArmorRepairKit_Statics::ClassParams = {
		&ASBZArmorRepairKit::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZArmorRepairKit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZArmorRepairKit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZArmorRepairKit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZArmorRepairKit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZArmorRepairKit, 1161105137);
	template<> STARBREEZE_API UClass* StaticClass<ASBZArmorRepairKit>()
	{
		return ASBZArmorRepairKit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZArmorRepairKit(Z_Construct_UClass_ASBZArmorRepairKit, &ASBZArmorRepairKit::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZArmorRepairKit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZArmorRepairKit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
