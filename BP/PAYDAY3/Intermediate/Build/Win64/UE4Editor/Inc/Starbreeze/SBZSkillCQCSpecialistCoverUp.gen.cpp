// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillCQCSpecialistCoverUp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillCQCSpecialistCoverUp() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillCQCSpecialistCoverUp_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillCQCSpecialistCoverUp();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillCQCSpecialistCoverUp::StaticRegisterNativesUSBZSkillCQCSpecialistCoverUp()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillCQCSpecialistCoverUp_NoRegister()
	{
		return USBZSkillCQCSpecialistCoverUp::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillCQCSpecialistCoverUp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillCQCSpecialistCoverUp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillCQCSpecialistCoverUp_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillCQCSpecialistCoverUp.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillCQCSpecialistCoverUp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillCQCSpecialistCoverUp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillCQCSpecialistCoverUp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillCQCSpecialistCoverUp_Statics::ClassParams = {
		&USBZSkillCQCSpecialistCoverUp::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillCQCSpecialistCoverUp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillCQCSpecialistCoverUp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillCQCSpecialistCoverUp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillCQCSpecialistCoverUp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillCQCSpecialistCoverUp, 4187459765);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillCQCSpecialistCoverUp>()
	{
		return USBZSkillCQCSpecialistCoverUp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillCQCSpecialistCoverUp(Z_Construct_UClass_USBZSkillCQCSpecialistCoverUp, &USBZSkillCQCSpecialistCoverUp::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillCQCSpecialistCoverUp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillCQCSpecialistCoverUp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
