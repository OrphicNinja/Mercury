// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillManipulatorMenacing.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillManipulatorMenacing() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillManipulatorMenacing_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillManipulatorMenacing();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillManipulatorMenacing::StaticRegisterNativesUSBZSkillManipulatorMenacing()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillManipulatorMenacing_NoRegister()
	{
		return USBZSkillManipulatorMenacing::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillManipulatorMenacing_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillManipulatorMenacing_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillManipulatorMenacing_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillManipulatorMenacing.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillManipulatorMenacing.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillManipulatorMenacing_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillManipulatorMenacing>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillManipulatorMenacing_Statics::ClassParams = {
		&USBZSkillManipulatorMenacing::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillManipulatorMenacing_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillManipulatorMenacing_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillManipulatorMenacing()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillManipulatorMenacing_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillManipulatorMenacing, 1889843721);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillManipulatorMenacing>()
	{
		return USBZSkillManipulatorMenacing::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillManipulatorMenacing(Z_Construct_UClass_USBZSkillManipulatorMenacing, &USBZSkillManipulatorMenacing::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillManipulatorMenacing"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillManipulatorMenacing);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
