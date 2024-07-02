// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillCQCSpecialistGroundskeeper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillCQCSpecialistGroundskeeper() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillCQCSpecialistGroundskeeper_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillCQCSpecialistGroundskeeper();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillCQCSpecialistGroundskeeper::StaticRegisterNativesUSBZSkillCQCSpecialistGroundskeeper()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillCQCSpecialistGroundskeeper_NoRegister()
	{
		return USBZSkillCQCSpecialistGroundskeeper::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillCQCSpecialistGroundskeeper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillCQCSpecialistGroundskeeper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillCQCSpecialistGroundskeeper_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillCQCSpecialistGroundskeeper.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillCQCSpecialistGroundskeeper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillCQCSpecialistGroundskeeper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillCQCSpecialistGroundskeeper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillCQCSpecialistGroundskeeper_Statics::ClassParams = {
		&USBZSkillCQCSpecialistGroundskeeper::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillCQCSpecialistGroundskeeper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillCQCSpecialistGroundskeeper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillCQCSpecialistGroundskeeper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillCQCSpecialistGroundskeeper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillCQCSpecialistGroundskeeper, 3794326180);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillCQCSpecialistGroundskeeper>()
	{
		return USBZSkillCQCSpecialistGroundskeeper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillCQCSpecialistGroundskeeper(Z_Construct_UClass_USBZSkillCQCSpecialistGroundskeeper, &USBZSkillCQCSpecialistGroundskeeper::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillCQCSpecialistGroundskeeper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillCQCSpecialistGroundskeeper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
