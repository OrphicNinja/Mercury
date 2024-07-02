// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillGunslingerHeavyHipfire.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillGunslingerHeavyHipfire() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillGunslingerHeavyHipfire_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillGunslingerHeavyHipfire();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillGunslingerHeavyHipfire::StaticRegisterNativesUSBZSkillGunslingerHeavyHipfire()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillGunslingerHeavyHipfire_NoRegister()
	{
		return USBZSkillGunslingerHeavyHipfire::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillGunslingerHeavyHipfire_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillGunslingerHeavyHipfire_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillGunslingerHeavyHipfire_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillGunslingerHeavyHipfire.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillGunslingerHeavyHipfire.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillGunslingerHeavyHipfire_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillGunslingerHeavyHipfire>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillGunslingerHeavyHipfire_Statics::ClassParams = {
		&USBZSkillGunslingerHeavyHipfire::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillGunslingerHeavyHipfire_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillGunslingerHeavyHipfire_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillGunslingerHeavyHipfire()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillGunslingerHeavyHipfire_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillGunslingerHeavyHipfire, 2918441993);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillGunslingerHeavyHipfire>()
	{
		return USBZSkillGunslingerHeavyHipfire::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillGunslingerHeavyHipfire(Z_Construct_UClass_USBZSkillGunslingerHeavyHipfire, &USBZSkillGunslingerHeavyHipfire::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillGunslingerHeavyHipfire"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillGunslingerHeavyHipfire);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
