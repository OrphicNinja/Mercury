// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillTransporterPowerLifter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillTransporterPowerLifter() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillTransporterPowerLifter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillTransporterPowerLifter();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillTransporterPowerLifter::StaticRegisterNativesUSBZSkillTransporterPowerLifter()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillTransporterPowerLifter_NoRegister()
	{
		return USBZSkillTransporterPowerLifter::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillTransporterPowerLifter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillTransporterPowerLifter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillTransporterPowerLifter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillTransporterPowerLifter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillTransporterPowerLifter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillTransporterPowerLifter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillTransporterPowerLifter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillTransporterPowerLifter_Statics::ClassParams = {
		&USBZSkillTransporterPowerLifter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillTransporterPowerLifter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillTransporterPowerLifter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillTransporterPowerLifter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillTransporterPowerLifter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillTransporterPowerLifter, 1101732330);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillTransporterPowerLifter>()
	{
		return USBZSkillTransporterPowerLifter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillTransporterPowerLifter(Z_Construct_UClass_USBZSkillTransporterPowerLifter, &USBZSkillTransporterPowerLifter::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillTransporterPowerLifter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillTransporterPowerLifter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
