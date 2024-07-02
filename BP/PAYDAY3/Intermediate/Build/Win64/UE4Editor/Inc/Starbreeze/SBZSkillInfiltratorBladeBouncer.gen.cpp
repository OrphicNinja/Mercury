// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillInfiltratorBladeBouncer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillInfiltratorBladeBouncer() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillInfiltratorBladeBouncer_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillInfiltratorBladeBouncer();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSkillInfiltratorBladeBouncer::StaticRegisterNativesUSBZSkillInfiltratorBladeBouncer()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillInfiltratorBladeBouncer_NoRegister()
	{
		return USBZSkillInfiltratorBladeBouncer::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillInfiltratorBladeBouncer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillInfiltratorBladeBouncer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillInfiltratorBladeBouncer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillInfiltratorBladeBouncer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillInfiltratorBladeBouncer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillInfiltratorBladeBouncer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillInfiltratorBladeBouncer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillInfiltratorBladeBouncer_Statics::ClassParams = {
		&USBZSkillInfiltratorBladeBouncer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillInfiltratorBladeBouncer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillInfiltratorBladeBouncer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillInfiltratorBladeBouncer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillInfiltratorBladeBouncer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillInfiltratorBladeBouncer, 4103790389);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillInfiltratorBladeBouncer>()
	{
		return USBZSkillInfiltratorBladeBouncer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillInfiltratorBladeBouncer(Z_Construct_UClass_USBZSkillInfiltratorBladeBouncer, &USBZSkillInfiltratorBladeBouncer::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillInfiltratorBladeBouncer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillInfiltratorBladeBouncer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
