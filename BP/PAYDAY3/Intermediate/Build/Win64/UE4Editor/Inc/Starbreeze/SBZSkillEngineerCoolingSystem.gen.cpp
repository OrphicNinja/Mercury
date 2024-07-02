// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillEngineerCoolingSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillEngineerCoolingSystem() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillEngineerCoolingSystem_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillEngineerCoolingSystem();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillEngineerCoolingSystem::StaticRegisterNativesUSBZSkillEngineerCoolingSystem()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillEngineerCoolingSystem_NoRegister()
	{
		return USBZSkillEngineerCoolingSystem::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillEngineerCoolingSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillEngineerCoolingSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillEngineerCoolingSystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillEngineerCoolingSystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillEngineerCoolingSystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillEngineerCoolingSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillEngineerCoolingSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillEngineerCoolingSystem_Statics::ClassParams = {
		&USBZSkillEngineerCoolingSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillEngineerCoolingSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillEngineerCoolingSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillEngineerCoolingSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillEngineerCoolingSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillEngineerCoolingSystem, 1707865046);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillEngineerCoolingSystem>()
	{
		return USBZSkillEngineerCoolingSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillEngineerCoolingSystem(Z_Construct_UClass_USBZSkillEngineerCoolingSystem, &USBZSkillEngineerCoolingSystem::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillEngineerCoolingSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillEngineerCoolingSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
