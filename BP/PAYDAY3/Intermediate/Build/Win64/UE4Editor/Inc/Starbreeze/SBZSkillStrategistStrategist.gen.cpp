// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillStrategistStrategist.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillStrategistStrategist() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillStrategistStrategist_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillStrategistStrategist();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillStrategistStrategist::StaticRegisterNativesUSBZSkillStrategistStrategist()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillStrategistStrategist_NoRegister()
	{
		return USBZSkillStrategistStrategist::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillStrategistStrategist_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillStrategistStrategist_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillStrategistStrategist_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillStrategistStrategist.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillStrategistStrategist.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillStrategistStrategist_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillStrategistStrategist>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillStrategistStrategist_Statics::ClassParams = {
		&USBZSkillStrategistStrategist::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillStrategistStrategist_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillStrategistStrategist_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillStrategistStrategist()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillStrategistStrategist_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillStrategistStrategist, 644456851);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillStrategistStrategist>()
	{
		return USBZSkillStrategistStrategist::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillStrategistStrategist(Z_Construct_UClass_USBZSkillStrategistStrategist, &USBZSkillStrategistStrategist::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillStrategistStrategist"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillStrategistStrategist);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
