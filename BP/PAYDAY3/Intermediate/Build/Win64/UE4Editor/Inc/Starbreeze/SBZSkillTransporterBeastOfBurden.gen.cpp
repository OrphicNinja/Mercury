// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillTransporterBeastOfBurden.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillTransporterBeastOfBurden() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillTransporterBeastOfBurden_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillTransporterBeastOfBurden();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillTransporterBeastOfBurden::StaticRegisterNativesUSBZSkillTransporterBeastOfBurden()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillTransporterBeastOfBurden_NoRegister()
	{
		return USBZSkillTransporterBeastOfBurden::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillTransporterBeastOfBurden_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillTransporterBeastOfBurden_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillTransporterBeastOfBurden_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillTransporterBeastOfBurden.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillTransporterBeastOfBurden.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillTransporterBeastOfBurden_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillTransporterBeastOfBurden>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillTransporterBeastOfBurden_Statics::ClassParams = {
		&USBZSkillTransporterBeastOfBurden::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillTransporterBeastOfBurden_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillTransporterBeastOfBurden_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillTransporterBeastOfBurden()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillTransporterBeastOfBurden_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillTransporterBeastOfBurden, 105993332);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillTransporterBeastOfBurden>()
	{
		return USBZSkillTransporterBeastOfBurden::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillTransporterBeastOfBurden(Z_Construct_UClass_USBZSkillTransporterBeastOfBurden, &USBZSkillTransporterBeastOfBurden::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillTransporterBeastOfBurden"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillTransporterBeastOfBurden);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
