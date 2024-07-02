// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillMedicFieldSurgery.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillMedicFieldSurgery() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillMedicFieldSurgery_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillMedicFieldSurgery();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillMedicFieldSurgery::StaticRegisterNativesUSBZSkillMedicFieldSurgery()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillMedicFieldSurgery_NoRegister()
	{
		return USBZSkillMedicFieldSurgery::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillMedicFieldSurgery_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillMedicFieldSurgery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillMedicFieldSurgery_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillMedicFieldSurgery.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillMedicFieldSurgery.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillMedicFieldSurgery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillMedicFieldSurgery>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillMedicFieldSurgery_Statics::ClassParams = {
		&USBZSkillMedicFieldSurgery::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillMedicFieldSurgery_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillMedicFieldSurgery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillMedicFieldSurgery()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillMedicFieldSurgery_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillMedicFieldSurgery, 1876020485);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillMedicFieldSurgery>()
	{
		return USBZSkillMedicFieldSurgery::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillMedicFieldSurgery(Z_Construct_UClass_USBZSkillMedicFieldSurgery, &USBZSkillMedicFieldSurgery::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillMedicFieldSurgery"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillMedicFieldSurgery);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
