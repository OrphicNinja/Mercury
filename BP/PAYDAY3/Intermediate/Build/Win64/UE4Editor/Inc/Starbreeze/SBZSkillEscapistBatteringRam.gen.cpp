// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillEscapistBatteringRam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillEscapistBatteringRam() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillEscapistBatteringRam_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillEscapistBatteringRam();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillEscapistBatteringRam::StaticRegisterNativesUSBZSkillEscapistBatteringRam()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillEscapistBatteringRam_NoRegister()
	{
		return USBZSkillEscapistBatteringRam::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillEscapistBatteringRam_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillEscapistBatteringRam_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillEscapistBatteringRam_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillEscapistBatteringRam.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillEscapistBatteringRam.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillEscapistBatteringRam_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillEscapistBatteringRam>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillEscapistBatteringRam_Statics::ClassParams = {
		&USBZSkillEscapistBatteringRam::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillEscapistBatteringRam_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillEscapistBatteringRam_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillEscapistBatteringRam()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillEscapistBatteringRam_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillEscapistBatteringRam, 2613487277);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillEscapistBatteringRam>()
	{
		return USBZSkillEscapistBatteringRam::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillEscapistBatteringRam(Z_Construct_UClass_USBZSkillEscapistBatteringRam, &USBZSkillEscapistBatteringRam::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillEscapistBatteringRam"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillEscapistBatteringRam);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
