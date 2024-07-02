// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillEnforcerEnforcer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillEnforcerEnforcer() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillEnforcerEnforcer_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillEnforcerEnforcer();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillEnforcerEnforcer::StaticRegisterNativesUSBZSkillEnforcerEnforcer()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillEnforcerEnforcer_NoRegister()
	{
		return USBZSkillEnforcerEnforcer::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillEnforcerEnforcer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillEnforcerEnforcer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillEnforcerEnforcer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillEnforcerEnforcer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillEnforcerEnforcer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillEnforcerEnforcer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillEnforcerEnforcer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillEnforcerEnforcer_Statics::ClassParams = {
		&USBZSkillEnforcerEnforcer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillEnforcerEnforcer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillEnforcerEnforcer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillEnforcerEnforcer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillEnforcerEnforcer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillEnforcerEnforcer, 686779493);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillEnforcerEnforcer>()
	{
		return USBZSkillEnforcerEnforcer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillEnforcerEnforcer(Z_Construct_UClass_USBZSkillEnforcerEnforcer, &USBZSkillEnforcerEnforcer::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillEnforcerEnforcer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillEnforcerEnforcer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
