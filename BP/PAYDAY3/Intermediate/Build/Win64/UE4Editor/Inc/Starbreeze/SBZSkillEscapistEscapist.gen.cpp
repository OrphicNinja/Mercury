// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillEscapistEscapist.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillEscapistEscapist() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillEscapistEscapist_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillEscapistEscapist();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillEscapistEscapist::StaticRegisterNativesUSBZSkillEscapistEscapist()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillEscapistEscapist_NoRegister()
	{
		return USBZSkillEscapistEscapist::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillEscapistEscapist_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillEscapistEscapist_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillEscapistEscapist_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillEscapistEscapist.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillEscapistEscapist.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillEscapistEscapist_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillEscapistEscapist>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillEscapistEscapist_Statics::ClassParams = {
		&USBZSkillEscapistEscapist::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillEscapistEscapist_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillEscapistEscapist_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillEscapistEscapist()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillEscapistEscapist_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillEscapistEscapist, 1628052922);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillEscapistEscapist>()
	{
		return USBZSkillEscapistEscapist::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillEscapistEscapist(Z_Construct_UClass_USBZSkillEscapistEscapist, &USBZSkillEscapistEscapist::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillEscapistEscapist"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillEscapistEscapist);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
