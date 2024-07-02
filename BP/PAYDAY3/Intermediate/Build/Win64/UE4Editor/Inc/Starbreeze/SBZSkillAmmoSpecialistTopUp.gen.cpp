// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillAmmoSpecialistTopUp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillAmmoSpecialistTopUp() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillAmmoSpecialistTopUp_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillAmmoSpecialistTopUp();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillAmmoSpecialistTopUp::StaticRegisterNativesUSBZSkillAmmoSpecialistTopUp()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillAmmoSpecialistTopUp_NoRegister()
	{
		return USBZSkillAmmoSpecialistTopUp::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillAmmoSpecialistTopUp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillAmmoSpecialistTopUp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillAmmoSpecialistTopUp_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillAmmoSpecialistTopUp.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillAmmoSpecialistTopUp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillAmmoSpecialistTopUp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillAmmoSpecialistTopUp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillAmmoSpecialistTopUp_Statics::ClassParams = {
		&USBZSkillAmmoSpecialistTopUp::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillAmmoSpecialistTopUp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillAmmoSpecialistTopUp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillAmmoSpecialistTopUp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillAmmoSpecialistTopUp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillAmmoSpecialistTopUp, 2556186344);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillAmmoSpecialistTopUp>()
	{
		return USBZSkillAmmoSpecialistTopUp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillAmmoSpecialistTopUp(Z_Construct_UClass_USBZSkillAmmoSpecialistTopUp, &USBZSkillAmmoSpecialistTopUp::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillAmmoSpecialistTopUp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillAmmoSpecialistTopUp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
